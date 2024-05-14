#include <LouDDK.h>
#include <NtAPI.h>

typedef struct {
    char Signature[4];        // Table identifier (e.g., "SLIT")
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
    uint64_t LocalityCount;
    uint8_t Entry[1];  // Variable-length array of locality distance values
} ACPI_SLIT;

void parseSLIT(ACPI_SLIT* slit) {
    LouPrint("SLIT Locality Count:%d\n", slit->LocalityCount);
    LouPrint("SLIT Distances:\n");
    uint64_t count = slit->LocalityCount;
    uint8_t* entries = slit->Entry;
    for (uint64_t i = 0; i < count; i++) {
        for (uint64_t j = 0; j < count; j++) {
            LouPrint("%d ", entries[i * count + j]);
        }
        LouPrint("\n");
    }
}

LOUDDK_API_ENTRY LOUSTATUS InitSLIT() {
    LOUSTATUS Status = LOUSTATUS_GOOD;
    uint8_t* Buffer = (uint8_t*)LouMalloc(ACPIBUFFER);
    ULONG ReturnLength = 0x000;
    Status = AuxKlibGetSystemFirmwareTable(
        'ACPI',
        'SLIT',
        Buffer,
        0,
        &ReturnLength
    );

    if (Status == LOUSTATUS_GOOD) {
        ACPI_SLIT* slit = (ACPI_SLIT*)Buffer;
        parseSLIT(slit);
    }

    LouFree(Buffer, ACPIBUFFER);
    return Status;
}
