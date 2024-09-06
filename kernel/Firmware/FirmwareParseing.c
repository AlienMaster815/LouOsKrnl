#include <LouAPI.h>
#include <bootloader/grub/multiboot2.h>

#define ACPI 1094930505
#define SMBIOS_S 837766737983
#define APM_S 658077
#define FACP 70656780

static uintptr_t EFI_TABLE = 0x00;
static uintptr_t RSDP_MASTER = 0x00;
static uint8_t TYPE_MASTER = 0x00;

typedef struct __attribute__((packed)) _ACPI_STD_HEADER {
	char Signature[4];
	uint32_t Size;
	uint8_t Revision;
	uint8_t Checksum;
	char OEMID[6];
	char OEMTABLEID[8];
	uint32_t OEMRevision;
	uint32_t CRevision;
}ACPI_STD_HEADER, * PACPI_STD_HEADER;

typedef struct __attribute__((packed)) _XSDT_TABLE{
    char Signature[4];       // 'XSDT'
    uint32_t Length;         // Length of the entire XSDT, including the header and all entries
    uint8_t Revision;        // ACPI revision
    uint8_t Checksum;        // Checksum of the entire XSDT
    char OEMID[6];           // OEM ID
    char OEMTableID[8];      // OEM Table ID
    uint32_t OEMRevision;    // OEM Revision number
    uint32_t CreatorID;      // ID of the table's creator
    uint32_t CreatorRevision;// Revision of the creator's utility
} XSDT_TABLE;


typedef struct __attribute__((packed)) _RSDP_Descriptor {
	char signature[8];          // Signature, should be "RSD PTR "
	uint8_t checksum;           // Checksum of the first 20 bytes
	char oem_id[6];             // OEM ID
	uint8_t revision;           // ACPI revision (1 for ACPI 1.0)
	uint32_t rsdt_address;      // 32-bit physical address of the RSDT
}RSDP_Descriptor, * PRSDP_Descriptor;


typedef struct __attribute__((packed)) _RSDP_Descriptor2 {
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

typedef struct __attribute__((packed)) _SMBIOS_LOOKUP{
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
    struct multiboot_tag_efi64* TableHeader = (struct multiboot_tag_efi64*)Address;
    
    // Cast the 32-bit pointer to a 64-bit pointer
	
	EnforceSystemMemoryMap((uint64_t)(uintptr_t)TableHeader->pointer, TableHeader->size);
    LouMapAddress(EFI_TABLE, EFI_TABLE, KERNEL_PAGE_WRITE_PRESENT, KILOBYTE_PAGE);
	EFI_TABLE = (uint64_t)(uintptr_t)TableHeader->pointer;

    return STATUS_SUCCESS;  // Assuming LOUSTATUS_SUCCESS is your success code
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
		
		if(TableExtendedPointer != 0x00){
			XSDT_TABLE* GenericTable2 = (XSDT_TABLE*)(*TableExtendedPointer);
			
			// Calculate the number of table entries

			// Now you can iterate through the entries
			for (
				uint64_t i = ((uint64_t)GenericTable2 + sizeof(XSDT_TABLE)); 
				i < ((uint64_t)GenericTable2 + GenericTable2->Length) ; 
				i+= sizeof(uint64_t)
				) {
				ACPI_STD_HEADER *table = (ACPI_STD_HEADER *)*(uint64_t*)i;

				//LouPrint("Table At:%h\n", i);
				//LouPrint("Table Name:%s\n\n",table->Signature);
				if (strncmp((const string)table->Signature, (const string)MasterString, 4) == 0) {
					
					
					*TablePointer = (uintptr_t)table;
					Status = LOUSTATUS_GOOD;
					return Status;
				}
			}
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

	//BUGBUG MEMCPY is acting weird investigate tommoro
	//BUGBUG RESOLVED memory was leaking into the framebuffer system fixed
	//memcpy has been being weird
	memcpy(FirmwareTableBufferDest, FirmwareTableBufferSrc, ResultBufferLength);

	*BufferLength = ResultBufferLength;

	return LOUSTATUS_GOOD;
}

typedef struct {
    uint32_t Signature;
    uint32_t Length;
    uint32_t Revision;
    uint32_t Checksum;
    uint32_t OEMID[6];
    uint32_t OEMTableID[8];
} EFI_TABLE_HEADER;

typedef struct {
    uint64_t Signature;
    uint32_t Revision;
    uint32_t HeaderSize;
    uint32_t CRC32;
    uint32_t Reserved;
    string FirmwareVendor;
    uint32_t FirmwareRevision;
    void *ConsoleInHandle;
    void *ConIn;
    void *ConsoleOutHandle;
    void *ConOut;
    void *StandardErrorHandle;
    void *StdErr;
    void *RuntimeServices;
    uint64_t NumberOfTableEntries;
    void *ConfigurationTable;  // This is an array of EFI_CONFIGURATION_TABLE
} EFI_SYSTEM_TABLE;

typedef struct {
    uint32_t Data1;
    uint16_t Data2;
    uint16_t Data3;
    uint8_t  Data4[8];
} EFI_GUID;

typedef struct {
    EFI_GUID VendorGuid;
    void *VendorTable;
} EFI_CONFIGURATION_TABLE;

typedef struct {
    uint64_t Signature;
    uint8_t Checksum;
    uint8_t OEMID[6];
    uint8_t Revision;
    uint32_t RsdtAddress;
    uint32_t Length;
    uint64_t XsdtAddress;
    uint8_t ExtendedChecksum;
    uint8_t Reserved[3];
} RSDP_DESCRIPTOR_2;


RSDP_DESCRIPTOR_2* find_rsdp_from_efi_table(uint64_t efi_system_table_address) {
    EFI_SYSTEM_TABLE *SystemTable = (EFI_SYSTEM_TABLE *)efi_system_table_address;
    EFI_CONFIGURATION_TABLE *ConfigTable = (EFI_CONFIGURATION_TABLE *)SystemTable->ConfigurationTable;

    EFI_GUID Acpi20TableGuid = { 0x8868e871, 0xe4f1, 0x11d3, { 0xbc, 0x22, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } };
    EFI_GUID AcpiTableGuid = { 0xeb9d2d30, 0x2d88, 0x11d3, { 0x9a, 0x16, 0x00, 0x0c, 0x29, 0x27, 0x81, 0x98 } };

    for (uint64_t i = 0; i < SystemTable->NumberOfTableEntries; i++) {
        if (memcmp(&ConfigTable[i].VendorGuid, &Acpi20TableGuid, sizeof(EFI_GUID)) == 0 ||
            memcmp(&ConfigTable[i].VendorGuid, &AcpiTableGuid, sizeof(EFI_GUID)) == 0) {
            return (RSDP_DESCRIPTOR_2 *)ConfigTable[i].VendorTable;
        }
    }

    return NULL;  // RSDP not found
}

static uint64_t EfiMemMap = 0x00;

void SetEfiMap(uint64_t Map){
	EfiMemMap = Map;
}

typedef struct __attribute__((packed)) _EFI_MEMORY_DESCRIPTOR{
    uint32_t Type;
    uint32_t Pad;
    uint64_t PhysicalStart;
    uint64_t VirtualStart;
    uint64_t NumberOfPages;
    uint64_t Attribute;
} EFI_MEMORY_DESCRIPTOR;



void LouKeMapEfiMemory(){

	if(EfiMemMap){
		//LouPrint("We Got Somthing\n");
		struct multiboot_tag_efi_mmap* Map = (struct multiboot_tag_efi_mmap*)EfiMemMap;

		//LouPrint("DescVer:%d\n", Map->descr_vers);
		//LouPrint("DescSize:%d\n", Map->descr_size);

		static EFI_MEMORY_DESCRIPTOR* Desc;

		for(uint64_t i = 16; i < (Map->size); i += Map->descr_size){
			
			Desc = (EFI_MEMORY_DESCRIPTOR*)(EfiMemMap + i);
			switch(Desc->Type){

				case(0):
					EnforceSystemMemoryMap(Desc->PhysicalStart, 4096 * Desc->NumberOfPages);
					EnforceSystemMemoryMap(Desc->VirtualStart, 4096 * Desc->NumberOfPages);
					continue;
				case(3):
					EnforceSystemMemoryMap(Desc->PhysicalStart, 4096 * Desc->NumberOfPages);
					EnforceSystemMemoryMap(Desc->VirtualStart, 4096 * Desc->NumberOfPages);
					continue;
				case(4):
					EnforceSystemMemoryMap(Desc->PhysicalStart, 4096 * Desc->NumberOfPages);
					EnforceSystemMemoryMap(Desc->VirtualStart, 4096 * Desc->NumberOfPages);
					continue;
				case(5):
					EnforceSystemMemoryMap(Desc->PhysicalStart, 4096 * Desc->NumberOfPages);
					EnforceSystemMemoryMap(Desc->VirtualStart, 4096 * Desc->NumberOfPages);
					continue;
				case(6):
					EnforceSystemMemoryMap(Desc->PhysicalStart, 4096 * Desc->NumberOfPages);
					EnforceSystemMemoryMap(Desc->VirtualStart, 4096 * Desc->NumberOfPages);
					continue;
				case(8):
					EnforceSystemMemoryMap(Desc->PhysicalStart, 4096 * Desc->NumberOfPages);
					EnforceSystemMemoryMap(Desc->VirtualStart, 4096 * Desc->NumberOfPages);
					continue;
				case(9):
					EnforceSystemMemoryMap(Desc->PhysicalStart, 4096 * Desc->NumberOfPages);
					EnforceSystemMemoryMap(Desc->VirtualStart, 4096 * Desc->NumberOfPages);
					continue;
				case(10):
					EnforceSystemMemoryMap(Desc->PhysicalStart, 4096 * Desc->NumberOfPages);
					EnforceSystemMemoryMap(Desc->VirtualStart, 4096 * Desc->NumberOfPages);
					continue;
				case(11):
					EnforceSystemMemoryMap(Desc->PhysicalStart, 4096 * Desc->NumberOfPages);
					EnforceSystemMemoryMap(Desc->VirtualStart, 4096 * Desc->NumberOfPages);
					continue;
				case(12):
					EnforceSystemMemoryMap(Desc->PhysicalStart, 4096 * Desc->NumberOfPages);
					EnforceSystemMemoryMap(Desc->VirtualStart, 4096 * Desc->NumberOfPages);
					continue;
				case(13):
					EnforceSystemMemoryMap(Desc->PhysicalStart, 4096 * Desc->NumberOfPages);
					EnforceSystemMemoryMap(Desc->VirtualStart, 4096 * Desc->NumberOfPages);
					continue;
				case(14):
					EnforceSystemMemoryMap(Desc->PhysicalStart, 4096 * Desc->NumberOfPages);
					EnforceSystemMemoryMap(Desc->VirtualStart, 4096 * Desc->NumberOfPages);
					continue;
				default: continue;
			}
		}

	}

	//LouPrint("Mapping Memory\n");
}