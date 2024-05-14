#include <LouDDK.h>
#include <NtAPI.h>


// Define the ACPI structures here

typedef struct {
    char Signature[4];
    uint32_t Length;
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
    uint8_t AMLCode[];
} ACPI_SSDT;

void parseSSDT(ACPI_SSDT* ssdt) {
    LouPrint("SSDT Length:%d\n", ssdt->Header.Length);
    LouPrint("SSDT OEM ID:%s\n", ssdt->Header.OEMID);
    LouPrint("SSDT OEM Table ID:%s\n", ssdt->Header.OEMTableID);
    // The AML code can be further processed here if needed
}


LOUDDK_API_ENTRY LOUSTATUS InitSSDT() {


    LOUSTATUS Status = STATUS_UNSUCCESSFUL;

    uint8_t* Buffer = (uint8_t*)LouMalloc(sizeof(uint8_t) * 256);
    ULONG ReturnLength = 0x0000;

    Status = AuxKlibGetSystemFirmwareTable(
        'ACPI',
        'SSDT',
        Buffer,
        0,
        &ReturnLength
    );

    // Assuming Buffer now contains the FADT table
    if (Status == LOUSTATUS_GOOD) {
        ACPI_SSDT* ssdt = (ACPI_SSDT*)Buffer;
        parseSSDT(ssdt);    
        return LOUSTATUS_GOOD;

    }
    else {
        LouFree(Buffer, sizeof(uint8_t) * 256);
        return STATUS_UNSUCCESSFUL;
    }

    LouFree(Buffer, sizeof(uint8_t) * 256);

    return Status;

}