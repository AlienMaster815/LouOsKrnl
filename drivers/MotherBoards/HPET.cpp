#include <LouDDK.h>
#include <NtAPI.h>

typedef struct {
    char Signature[4];        // Table identifier (e.g., "HPET")
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
    uint8_t AddressSpaceID;
    uint8_t RegisterBitWidth;
    uint8_t RegisterBitOffset;
    uint8_t AccessSize;
    uint64_t Address;
} ACPI_GENERIC_ADDRESS;

typedef struct {
    ACPI_TABLE_HEADER Header;
    uint32_t EventTimerBlockId;
    ACPI_GENERIC_ADDRESS BaseAddress;
    uint8_t HpetNumber;
    uint16_t MinimumClockTick;
    uint8_t PageProtection;
} ACPI_HPET;


void parseHPET(ACPI_HPET* hpet) {
    LouPrint("HPET Event Timer Block ID:%h\n", hpet->EventTimerBlockId);
    LouPrint("HPET Base Address:%h\n", hpet->BaseAddress.Address);
    LouPrint("HPET Number:%d\n", hpet->HpetNumber);
    LouPrint("HPET Minimum Clock Tick:%d\n", hpet->MinimumClockTick);
    LouPrint("HPET Page Protection:%h\n", hpet->PageProtection);
}



LOUDDK_API_ENTRY LOUSTATUS InitHPET() {

    LOUSTATUS Status = LOUSTATUS_GOOD;
    uint8_t* Buffer = (uint8_t*)LouMalloc(ACPIBUFFER);
    ULONG ReturnLength = 0x000;
    Status = AuxKlibGetSystemFirmwareTable(
        'ACPI',
        'HPET', 
        Buffer, 
        0, 
        &ReturnLength
    );

    if (Status == LOUSTATUS_GOOD) {
        ACPI_HPET* hpet = (ACPI_HPET*)Buffer;
        parseHPET(hpet);
    }

    LouFree(Buffer, ACPIBUFFER);
	return Status;
}