#include <LouDDK.h>
#include <NtAPI.h>


typedef struct {
    char Signature[4];        // Table identifier (e.g., "BGRT")
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
    uint16_t Version;
    uint8_t Status;
    uint8_t ImageType;
    uint64_t ImageAddress;
    uint32_t ImageOffsetX;
    uint32_t ImageOffsetY;
} ACPI_BGRT;


void parseBGRT(ACPI_BGRT* bgrt) {
    LouPrint("BGRT Version:%d\n", bgrt->Version);
    LouPrint("BGRT Status:%d\n", bgrt->Status);
    LouPrint("BGRT Image Type:%d\n", bgrt->ImageType);
    LouPrint("BGRT Image Address:%h\n", bgrt->ImageAddress);
    LouPrint("BGRT Image Offset X:%d\n", bgrt->ImageOffsetX);
    LouPrint("BGRT Image Offset Y:%d\n", bgrt->ImageOffsetY);
}


LOUDDK_API_ENTRY LOUSTATUS InitBGRT() {

    LOUSTATUS Status = LOUSTATUS_GOOD;
    uint8_t* Buffer = (uint8_t*)LouMalloc(ACPIBUFFER);
    ULONG ReturnLength = 0x000;
    Status = AuxKlibGetSystemFirmwareTable(
        'ACPI',
        'BGRT',
        Buffer,
        0,
        &ReturnLength
    );

    if (Status == LOUSTATUS_GOOD) {
        ACPI_BGRT* bgrt = (ACPI_BGRT*)Buffer;
        parseBGRT(bgrt);
    }

    LouFree(Buffer);
    return Status;
}