#include <LouDDK.h>
#include <NtAPI.h>

typedef struct {
	char Signature[4];        // Table identifier (e.g., "SRAT")
	uint32_t Length;          // Length of the table, including the header
	uint8_t Revision;
	uint8_t Checksum;
	char OEMID[6];
	char OEMTableID[8];
	uint32_t OEMRevision;
	uint32_t CreatorID;
	uint32_t CreatorRevision;
} ACPI_TABLE_HEADER;



typedef struct {
	ACPI_TABLE_HEADER Header;
	uint32_t Reserved1;       // Reserved field
	uint64_t Reserved2;       // Reserved field
	// Followed by a variable number of SRAT entries
} ACPI_SRAT;

typedef struct {
	uint8_t Type;
	uint8_t Length;
} ACPI_SRAT_ENTRY_HEADER;


typedef struct {
	uint8_t Type;
	uint8_t Length;
	uint8_t ProximityDomain;
	uint8_t ApicId;
	uint32_t Flags;
	uint8_t LocalSapicEid;
	uint8_t Reserved[3];
} ACPI_SRAT_PROCESSOR_AFFINITY;

typedef struct {
	ACPI_SRAT_ENTRY_HEADER Header;
	uint32_t ProximityDomain;
	uint16_t Reserved1;
	uint64_t BaseAddress;
	uint64_t Length;
	uint32_t Reserved2;
	uint32_t Flags;
	uint64_t Reserved3;
} ACPI_SRAT_MEMORY_AFFINITY;

typedef struct {
	uint8_t Type;
	uint8_t Length;
	uint32_t ProximityDomain;
	uint32_t ApicId;
	uint32_t Flags;
	uint32_t ClockDomain;
} ACPI_SRAT_X2APIC_AFFINITY;


void parseSRATEntry(ACPI_SRAT_ENTRY_HEADER* header) {
	switch (header->Type) {
	case 0: {
		ACPI_SRAT_PROCESSOR_AFFINITY* pa = (ACPI_SRAT_PROCESSOR_AFFINITY*)header;
		LouPrint("Processor Affinity: Proximity Domain:%d, APIC ID:%d, Flags:%h\n", pa->ProximityDomain, pa->ApicId, pa->Flags);
		break;
	}
	case 1: {
		ACPI_SRAT_MEMORY_AFFINITY* ma = (ACPI_SRAT_MEMORY_AFFINITY*)header;
		LouPrint("Memory Affinity: Proximity Domain:%d, Base Address:%h, Length:%h, Flags:%h\n", ma->ProximityDomain, ma->BaseAddress, ma->Length, ma->Flags);
		break;
	}
	case 2: {
		ACPI_SRAT_X2APIC_AFFINITY* xa = (ACPI_SRAT_X2APIC_AFFINITY*)header;
		LouPrint("x2APIC Affinity: Proximity Domain:%d, APIC ID:%d, Flags:%h, Clock Domain:%d\n", xa->ProximityDomain, xa->ApicId, xa->Flags, xa->ClockDomain);
		break;
	}
	default:
		LouPrint("Unknown SRAT entry type: %d\n", header->Type);
		break;
	}
}

void parseSRAT(ACPI_SRAT* srat) {
	LouPrint("SRAT Length:%d\n", srat->Header.Length);

	uint8_t* entryAddress = (uint8_t*)srat + sizeof(ACPI_SRAT);
	uint8_t* endAddress = (uint8_t*)srat + srat->Header.Length;

	while (entryAddress < endAddress) {
		ACPI_SRAT_ENTRY_HEADER* header = (ACPI_SRAT_ENTRY_HEADER*)entryAddress;
		parseSRATEntry(header);
		entryAddress += header->Length;
	}
}



LOUDDK_API_ENTRY LOUSTATUS InitSRAT() {
	LOUSTATUS Status = LOUSTATUS_GOOD;
	uint8_t* Buffer = (uint8_t*)LouMalloc(ACPIBUFFER);
	ULONG ReturnLength = 0x0000;

	Status = AuxKlibGetSystemFirmwareTable(
		'ACPI',
		'SRAT',
		Buffer,
		ACPIBUFFER,
		&ReturnLength
	);

	if (Status == LOUSTATUS_GOOD) {
		ACPI_SRAT* srat = (ACPI_SRAT*)Buffer;
		parseSRAT(srat);

	}

	LouFree(Buffer);
	return Status;
}