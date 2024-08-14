#include <LouAPI.h>
#include <bootloader/grub/multiboot2.h>

#define ACPI 1094930505
#define SMBIOS_S 837766737983
#define APM_S 658077
#define FACP 70656780

static uintptr_t EFI_TABLE = 0x00;
static uintptr_t RSDP_MASTER = 0x00;
static uint8_t TYPE_MASTER = 0x00;

typedef struct _ACPI_STD_HEADER {
	char Signature[4];
	uint32_t Size;
	uint8_t Revision;
	uint8_t Checksum;
	char OEMID[6];
	char OEMTABLEID[8];
	uint32_t OEMRevision;
	uint32_t CRevision;
}ACPI_STD_HEADER, * PACPI_STD_HEADER;

typedef struct _RSDP_Descriptor {
	char signature[8];          // Signature, should be "RSD PTR "
	uint8_t checksum;           // Checksum of the first 20 bytes
	char oem_id[6];             // OEM ID
	uint8_t revision;           // ACPI revision (1 for ACPI 1.0)
	uint32_t rsdt_address;      // 32-bit physical address of the RSDT
}RSDP_Descriptor, * PRSDP_Descriptor;


typedef struct _RSDP_Descriptor2 {
	char signature[8];          // Signature, should be "RSD PTR "
	uint8_t checksum;           // Checksum of the first 20 bytes
	char oem_id[6];             // OEM ID
	uint8_t revision;           // ACPI revision (1 for ACPI 1.0)
	uint32_t rsdt_address;      // 32-bit physical address of the RSDT
	uint32_t length;            // Total length of the RSDP structure
	uint64_t xsdt_address;      // 64-bit physical address of the XSDT (ACPI 2.0+)
	uint8_t extended_checksum;  // Checksum of entire structure including extended part (ACPI 2.0+)
	uint8_t reserved[3];        // Reserved, must be zero
}RSDP_Descriptor2, * PRSDP_Descriptor2;

typedef struct _SMBIOS_LOOKUP{
	uint32_t Type;
	uint32_t Size;
	uint8_t Major;
	uint8_t Minor;
	uint8_t rsv[6];
	uintptr_t SMBIOS_TabeStart;
}SMBIOS_LOOKUP;

static SMBIOS_LOOKUP* SMBIOS_MASTER = 0x00;

static struct multiboot_tag_apm* APM_MASTER = 0x00;

LOUSTATUS LouKeSetEfiTable(uint64_t Address) {
	EFI_TABLE = (uintptr_t)Address;
	struct multiboot_tag_efi64* E = (struct multiboot_tag_efi64*)EFI_TABLE;
	EnforceSystemMemoryMap(E->pointer, 72);
	//LouPrint("EFI Table Address Is:%d\n", EFI_TABLE);
}

LOUSTATUS LouKeSetSmbios(uintptr_t SMBIOS) {

	SMBIOS_MASTER = (SMBIOS_LOOKUP*)SMBIOS;
	EnforceSystemMemoryMap(SMBIOS, sizeof(struct multiboot_tag_smbios));
	//LouPrint("SMBIOS Address Is:%d\n", SMBIOS_MASTER);
	return LOUSTATUS_GOOD;
}

LOUSTATUS LouKeSetRsdp(uintptr_t RSDP,uint8_t Type) {

	RSDP_MASTER = RSDP;
	TYPE_MASTER = Type;

	//LouPrint("RSDP Address Is:%d:Version:%d\n",RSDP_MASTER,TYPE_MASTER);

	return LOUSTATUS_GOOD;
}

LOUSTATUS LouKeSetApm(struct multiboot_tag_apm* APM) {

	APM_MASTER = APM;
	return LOUSTATUS_GOOD;
}

LOUSTATUS LouKeGetSystemFirmwareTableProviderSignature(
	unsigned long FirmwareTableProviderSignature, 
	uintptr_t* TablePointer,
	uintptr_t* TableExtended,
	uint8_t* Type) {


	LOUSTATUS Status = (LOUSTATUS)STATUS_INVALID_PARAMETER;


	if ('ACPI' == FirmwareTableProviderSignature) {
		
		PRSDP_Descriptor Rsdp = (PRSDP_Descriptor)RSDP_MASTER;

		if (strncmp("RSD PTR", (const char*)Rsdp->signature, 7) != 0) {
			return (LOUSTATUS)STATUS_FIRMWARE_IMAGE_INVALID;
		}
		if (TYPE_MASTER == 1) {


			*TablePointer = (uintptr_t)Rsdp->rsdt_address;
			*Type = TYPE_MASTER;
			if ((*TablePointer != 0) && (Type != 0)) {
				Status = LOUSTATUS_GOOD;
			}
		}
		else {


			PRSDP_Descriptor2 Rsdp2 = (PRSDP_Descriptor2)Rsdp;

			*TablePointer = (uintptr_t)Rsdp2->rsdt_address;
			*TableExtended = (uintptr_t)Rsdp2->xsdt_address;
			*Type = TYPE_MASTER;
			if ((*TablePointer != 0) && (Type != 0)) {
				Status = LOUSTATUS_GOOD;
			}
		}
	}
	else if ('SMB' == FirmwareTableProviderSignature) {
		*TablePointer = (uintptr_t)SMBIOS_MASTER;
		*Type = 0;
		if (*TablePointer != 0) {
			Status = LOUSTATUS_GOOD;
		}

	}
	else if ('APM' == FirmwareTableProviderSignature) {
		*TablePointer = (uintptr_t)APM_MASTER;
		*Type = 0;
		if (*TablePointer != 0) {
			Status = LOUSTATUS_GOOD;
		}
	}

	return Status;
}

LOUSTATUS LouKeGetSystemFirmwareTableId(
	unsigned long FirmwareTableId,
	unsigned long FirmwareTableProviderSignature,
	uintptr_t* TablePointer,
	uintptr_t* TableExtendedPointer,
	uint8_t* Type
) {
	LOUSTATUS Status = (LOUSTATUS)STATUS_UNSUCCESSFUL;

	char MasterString[sizeof(int)];


	if (FirmwareTableProviderSignature == 'ACPI') {

		PACPI_STD_HEADER GenericTable = (PACPI_STD_HEADER)(*TablePointer);


		UIntToString(FirmwareTableId, MasterString);

		// Calculate the end address of the table


		if (FirmwareTableId == 'XSDT') {
			*TablePointer = *TableExtendedPointer;
			Status = LOUSTATUS_GOOD;
			return Status;
		}
		if (FirmwareTableId == 'RSDT') {
			Status = LOUSTATUS_GOOD;
			return Status;
		}
		


		for (uint16_t i = sizeof(ACPI_STD_HEADER); i < GenericTable->Size; i += sizeof(uint32_t)) {
			uint32_t foo = *(uint32_t*)((uintptr_t)GenericTable + (uintptr_t)i);
			PACPI_STD_HEADER Fubar = (PACPI_STD_HEADER)(uintptr_t)foo;

			if (strncmp((const string)Fubar->Signature, (const string)MasterString, 4) == 0) {
				*TablePointer = (uintptr_t)Fubar;
				Status = LOUSTATUS_GOOD;
				return Status;
			}

		}

		PACPI_STD_HEADER GenericTable2 = (PACPI_STD_HEADER)(*TableExtendedPointer);

		for (uint16_t i = sizeof(ACPI_STD_HEADER); i < GenericTable2->Size; i += sizeof(uint32_t)) {
			uint32_t foo = *(uint32_t*)((uintptr_t)GenericTable2 + (uintptr_t)i);
			PACPI_STD_HEADER Fubar = (PACPI_STD_HEADER)(uintptr_t)foo;

			if (strncmp((const string)Fubar->Signature, (const string)MasterString, 4) == 0) {
				*TablePointer = (uintptr_t)Fubar;
				Status = LOUSTATUS_GOOD;
				return Status;
			}

		}




	}
	else if (FirmwareTableProviderSignature == 'SMB') {
		// Handle SMBIOS signatures
	}
	else if (FirmwareTableProviderSignature == 'APM') {
		// Handle APM signatures
	}


	return STATUS_INVALID_PARAMETER;
}



LOUSTATUS LouKeGetSystemFirmwareTableBuffer(
	uint32_t SystemType,
	void* FirmwareTableBufferSrc,
	void* FirmwareTableBufferDest, 
	unsigned long* BufferLength
) {

	uint32_t ResultBufferLength = *BufferLength;
	
	if (SystemType == 'ACPI') {
		PACPI_STD_HEADER Fubar = (PACPI_STD_HEADER)FirmwareTableBufferSrc;
		


		if (Fubar->Size > ResultBufferLength) return (LOUSTATUS)STATUS_BUFFER_TOO_SMALL;
		
		else if ((ResultBufferLength >= Fubar->Size) || (ResultBufferLength == 0))ResultBufferLength = Fubar->Size;
	}

	//BUGBUG MEMCPY is acting weird investigate tommorow
	
	//memcpy has been being weird
	memcpy(FirmwareTableBufferDest, FirmwareTableBufferSrc, ResultBufferLength);

	*BufferLength = ResultBufferLength;

	return LOUSTATUS_GOOD;
}