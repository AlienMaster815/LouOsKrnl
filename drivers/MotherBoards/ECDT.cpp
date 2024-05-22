#include <LouDDK.h>
#include <NtAPI.h>

typedef struct {
    char Signature[4];        // Table identifier (e.g., "ECDT")
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
    ACPI_GENERIC_ADDRESS ECControl;    // Embedded controller command/status register
    ACPI_GENERIC_ADDRESS ECData;       // Embedded controller data register
    uint32_t UID;                      // Unique identifier
    uint8_t GPEBit;                    // General Purpose Event bit
    uint8_t ECID[1];                   // Name of the control method (null-terminated string)
} ACPI_ECDT;

void parseECDT(ACPI_ECDT* ecdt) {
    LouPrint("ECDT UID:%d\n", ecdt->UID);
    LouPrint("ECDT GPE Bit:%d\n", ecdt->GPEBit);
    LouPrint("ECDT ECID:%s\n", ecdt->ECID);
    LouPrint("ECDT EC Control Address:%h\n", ecdt->ECControl.Address);
    LouPrint("ECDT EC Data Address:%h\n", ecdt->ECData.Address);
}

LOUDDK_API_ENTRY LOUSTATUS InitECDT() {
    LOUSTATUS Status = LOUSTATUS_GOOD;
    uint8_t* Buffer = (uint8_t*)LouMalloc(ACPIBUFFER);
    ULONG ReturnLength = 0x000;
    Status = AuxKlibGetSystemFirmwareTable(
        'ACPI',
        'ECDT',
        Buffer,
        ACPIBUFFER,
        &ReturnLength
    );

    if (Status == LOUSTATUS_GOOD) {
        ACPI_ECDT* ecdt = (ACPI_ECDT*)Buffer;
        parseECDT(ecdt);
    }

    LouFree(Buffer, ACPIBUFFER);
    return Status;
}
