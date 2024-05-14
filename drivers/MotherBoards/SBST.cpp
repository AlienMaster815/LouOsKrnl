#include <LouDDK.h>
#include <NtAPI.h>

typedef struct {
	char Signature[4];        // Table identifier (e.g., "SBST")
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
	uint32_t WarningEnergyLevel;
	uint32_t LowEnergyLevel;
	uint32_t CriticalEnergyLevel;
} ACPI_SBST;

void parseSBST(ACPI_SBST* sbst) {
	LouPrint("SBST Warning Energy Level:%d\n", sbst->WarningEnergyLevel);
	LouPrint("SBST Low Energy Level:%d\n", sbst->LowEnergyLevel);
	LouPrint("SBST Critical Energy Level:%d\n", sbst->CriticalEnergyLevel);
}


LOUDDK_API_ENTRY LOUSTATUS InitSBST() {
	LOUSTATUS Status = LOUSTATUS_GOOD;
	uint8_t* Buffer = (uint8_t*)LouMalloc(ACPIBUFFER);
	ULONG ReturnLength = 0x0000;

	Status = AuxKlibGetSystemFirmwareTable(
	'ACPI',
	'SBST',
	Buffer,
	0,
	&ReturnLength
	);

	if (Status == LOUSTATUS_GOOD) {
		ACPI_SBST* sbst = (ACPI_SBST*)Buffer;
		parseSBST(sbst);
	}

	LouFree(Buffer, ACPIBUFFER);
	return Status;
}