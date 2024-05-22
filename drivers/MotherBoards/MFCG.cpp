#include <LouDDK.h>
#include <NtAPI.h>

typedef struct {
    char Signature[4];        // Table identifier (e.g., "MCFG")
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
    uint64_t Reserved;
    // Followed by a variable number of MCFG Configuration Base Address Allocation structures
} ACPI_MCFG;

typedef struct {
    uint64_t BaseAddress;
    uint16_t PCISegmentGroupNumber;
    uint8_t StartBusNumber;
    uint8_t EndBusNumber;
    uint32_t Reserved;
} ACPI_MCFG_ALLOCATION;

void parseMCFG(ACPI_MCFG* mcfg) {
    LouPrint("MCFG Length:%d\n", mcfg->Header.Length);
    LouPrint("Reserved: 0x%lx\n", mcfg->Reserved);

    uint32_t numAllocations = (mcfg->Header.Length - sizeof(ACPI_MCFG)) / sizeof(ACPI_MCFG_ALLOCATION);
    ACPI_MCFG_ALLOCATION* allocation = (ACPI_MCFG_ALLOCATION*)((uint8_t*)mcfg + sizeof(ACPI_MCFG));

    for (uint32_t i = 0; i < numAllocations; i++) {
        LouPrint("Base Address: 0x%lx\n", allocation->BaseAddress);
        LouPrint("PCI Segment Group Number: %d\n", allocation->PCISegmentGroupNumber);
        LouPrint("Start Bus Number: %d\n", allocation->StartBusNumber);
        LouPrint("End Bus Number: %d\n", allocation->EndBusNumber);
        allocation++;
    }
}

LOUDDK_API_ENTRY LOUSTATUS InitMCFG() {
    LOUSTATUS Status = LOUSTATUS_GOOD;
    uint8_t* Buffer = (uint8_t*)LouMalloc(ACPIBUFFER);
    ULONG ReturnLength = 0x000;
    Status = AuxKlibGetSystemFirmwareTable(
        'ACPI',
        'MCFG',
        Buffer,
        ACPIBUFFER,
        &ReturnLength
    );

    if (Status == LOUSTATUS_GOOD) {
        ACPI_MCFG* mcfg = (ACPI_MCFG*)Buffer;
        parseMCFG(mcfg);
    }

    LouFree(Buffer, ACPIBUFFER);
    return Status;
}
