#include <LouDDK.h>
#include <NtAPI.h>


typedef struct _ACPI_TABLE_HEADER {
	char Signature[4];        // "APIC"
	uint32_t Length;          // Length of the table, including the header
	uint8_t Revision;
	uint8_t Checksum;
	char OEMID[6];
	char OEMTableID[8];
	uint32_t OEMRevision;
	uint32_t CreatorID;
	uint32_t CreatorRevision;
} ACPI_TABLE_HEADER, * PACPI_TABLE_HEADER;


typedef struct _ACPI_MADT {
	ACPI_TABLE_HEADER Header;
	uint32_t LocalApicAddress;
	uint32_t Flags;
	// Followed by a variable number of APIC structures
} ACPI_MADT, * PACPI_MADT;

typedef struct _ACPI_MADT_ENTRY_HEADER {
	uint8_t Type;
	uint8_t Length;
} ACPI_MADT_ENTRY_HEADER, * PACPI_MADT_ENTRY_HEADER;


typedef struct _ACPI_MADT_LOCAL_APIC {
	ACPI_MADT_ENTRY_HEADER Header;
	uint8_t ProcessorID;
	uint8_t APICID;
	uint32_t Flags;
} ACPI_MADT_LOCAL_APIC, * PACPI_MADT_LOCAL_APIC;


typedef struct _ACPI_MADT_IO_APIC {
	ACPI_MADT_ENTRY_HEADER Header;
	uint8_t IOAPICID;
	uint8_t Reserved;
	uint32_t IOAPICAddress;
	uint32_t GlobalSystemInterruptBase;
} ACPI_MADT_IO_APIC, * PACPI_MADT_IO_APIC;


typedef struct _ACPI_MADT_INTERRUPT_SOURCE_OVERRIDE {
	ACPI_MADT_ENTRY_HEADER Header;
	uint8_t Bus;
	uint8_t Source;
	uint32_t GlobalSystemInterrupt;
	uint16_t Flags;
} ACPI_MADT_INTERRUPT_SOURCE_OVERRIDE, * PACPI_MADT_INTERRUPT_SOURCE_OVERRIDE;


typedef struct _ACPI_MADT_NMI {
	ACPI_MADT_ENTRY_HEADER Header;
	uint16_t Flags;
	uint32_t GlobalSystemInterrupt;
} ACPI_MADT_NMI, * PACPI_MADT_NMI;


typedef struct _ACPI_MADT_LOCAL_APIC_NMI {
	ACPI_MADT_ENTRY_HEADER Header;
	uint8_t ProcessorID;
	uint16_t Flags;
	uint8_t LocalAPICLint;
} ACPI_MADT_LOCAL_APIC_NMI, * PACPI_MADT_LOCAL_APIC_NMI;


typedef struct _ACPI_MADT_LOCAL_APIC_ADDRESS_OVERRIDE {
	ACPI_MADT_ENTRY_HEADER Header;
	uint16_t Reserved;
	uint64_t LocalApicAddress;
} ACPI_MADT_LOCAL_APIC_ADDRESS_OVERRIDE, * PACPI_MADT_LOCAL_APIC_ADDRESS_OVERRIDE;


void ParseAPIC(uint8_t* entryAddress, uint8_t* endAddress) {
	while (entryAddress < endAddress) {
		ACPI_MADT_ENTRY_HEADER* header = (ACPI_MADT_ENTRY_HEADER*)entryAddress;

		switch (header->Type) {
		case 0: {
			// Process Local APIC entry
			ACPI_MADT_LOCAL_APIC* localAPIC = (ACPI_MADT_LOCAL_APIC*)entryAddress;
			LouPrint("Processor ID:%d, APIC ID:%d, Flags:%d\n", localAPIC->ProcessorID, localAPIC->APICID, localAPIC->Flags);
			break;
		}
		case 1: {
			// Process I/O APIC entry
			ACPI_MADT_IO_APIC* ioAPIC = (ACPI_MADT_IO_APIC*)entryAddress;
			LouPrint("I/O APIC ID:%d, Address:%h, Global System Interrupt Base:%d\n", ioAPIC->IOAPICID, ioAPIC->IOAPICAddress, ioAPIC->GlobalSystemInterruptBase);
			break;
		}
		case 2: {
			// Process Interrupt Source Override entry
			ACPI_MADT_INTERRUPT_SOURCE_OVERRIDE* iso = (ACPI_MADT_INTERRUPT_SOURCE_OVERRIDE*)entryAddress;
			LouPrint("Bus: %d, Source:%d, Global System Interrupt:%d, Flags:%d\n", iso->Bus, iso->Source, iso->GlobalSystemInterrupt, iso->Flags);
			break;
		}
		case 3: {
			// Process NMI entry
			ACPI_MADT_NMI* nmi = (ACPI_MADT_NMI*)entryAddress;
			LouPrint("Flags:%d, Global System Interrupt:%d\n", nmi->Flags, nmi->GlobalSystemInterrupt);
			break;
		}
		case 4: {
			// Process Local APIC NMI entry
			ACPI_MADT_LOCAL_APIC_NMI* localAPICNMI = (ACPI_MADT_LOCAL_APIC_NMI*)entryAddress;
			LouPrint("Processor ID: %d, Flags: %d, LINT:%d\n", localAPICNMI->ProcessorID, localAPICNMI->Flags, localAPICNMI->LocalAPICLint);
			break;
		}
		case 5: {
			// Process Local APIC Address Override entry
			ACPI_MADT_LOCAL_APIC_ADDRESS_OVERRIDE* laa = (ACPI_MADT_LOCAL_APIC_ADDRESS_OVERRIDE*)entryAddress;
			LouPrint("Local APIC Address:%h\n", laa->LocalApicAddress);
			break;
		}
			  // Add cases for other entry types as needed
		default:
			LouPrint("Unknown entry type:%d\n", header->Type);
			break;
		}

		entryAddress += header->Length;
	}
}


LOUDDK_API_ENTRY LOUSTATUS InitApicSystems() {

	LOUSTATUS Status = STATUS_UNSUCCESSFUL;

	char Buffer[512] = {0};
	ULONG ReturnLength = 0x0000;

	Status = AuxKlibGetSystemFirmwareTable(
		'ACPI',
		'APIC', 
		Buffer,
		0,
		&ReturnLength
	);

	if (Status != LOUSTATUS_GOOD) {
		Status = AuxKlibGetSystemFirmwareTable(
			'ACPI',
			'MADT',
			Buffer,
			0,
			&ReturnLength
		);
	}
	if (Status != LOUSTATUS_GOOD)return STATUS_UNSUCCESSFUL;

	PACPI_MADT ApicTable = (PACPI_MADT)Buffer;

	uint8_t* EntryHeaderAddress = ((uint8_t*)Buffer + sizeof(ACPI_MADT));
	uint8_t* HeaderEndAddress = ((uint8_t*)Buffer + ApicTable->Header.Length);

	ParseAPIC(EntryHeaderAddress, HeaderEndAddress);

	return Status;
}