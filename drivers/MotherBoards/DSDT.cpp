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

typedef struct {
    uint8_t AddressSpaceID;
    uint8_t RegisterBitWidth;
    uint8_t RegisterBitOffset;
    uint8_t AccessSize;
    uint64_t Address;
} ACPI_GENERIC_ADDRESS;


typedef struct _ACPI_FADT {
    ACPI_TABLE_HEADER Header;
    uint32_t FirmwareCtrl;
    uint32_t Dsdt;
    uint8_t Reserved;
    uint8_t PreferredPowerManagementProfile;
    uint16_t SciInterrupt;
    uint32_t SmiCommandPort;
    uint8_t AcpiEnable;
    uint8_t AcpiDisable;
    uint8_t S4BiosReq;
    uint8_t PStateControl;
    uint32_t Pm1aEventBlock;
    uint32_t Pm1bEventBlock;
    uint32_t Pm1aControlBlock;
    uint32_t Pm1bControlBlock;
    uint32_t Pm2ControlBlock;
    uint32_t PmTimerBlock;
    uint32_t Gpe0Block;
    uint32_t Gpe1Block;
    uint8_t Pm1EventLength;
    uint8_t Pm1ControlLength;
    uint8_t Pm2ControlLength;
    uint8_t PmTimerLength;
    uint8_t Gpe0Length;
    uint8_t Gpe1Length;
    uint8_t Gpe1Base;
    uint8_t CStateControl;
    uint16_t WorstC2Latency;
    uint16_t WorstC3Latency;
    uint16_t FlushSize;
    uint16_t FlushStride;
    uint8_t DutyOffset;
    uint8_t DutyWidth;
    uint8_t DayAlarm;
    uint8_t MonthAlarm;
    uint8_t Century;
    uint16_t BootArchitectureFlags;
    uint8_t Reserved2;
    uint32_t Flags;
    // ACPI 2.0+ fields
    ACPI_GENERIC_ADDRESS ResetReg;
    uint8_t ResetValue;
    uint8_t Reserved3[3];
    uint64_t XFirmwareCtrl;
    uint64_t XDsdt;
    ACPI_GENERIC_ADDRESS XPm1aEventBlock;
    ACPI_GENERIC_ADDRESS XPm1bEventBlock;
    ACPI_GENERIC_ADDRESS XPm1aControlBlock;
    ACPI_GENERIC_ADDRESS XPm1bControlBlock;
    ACPI_GENERIC_ADDRESS XPm2ControlBlock;
    ACPI_GENERIC_ADDRESS XPmTimerBlock;
    ACPI_GENERIC_ADDRESS XGpe0Block;
    ACPI_GENERIC_ADDRESS XGpe1Block;
} ACPI_FADT, * PACPI_FADT;


typedef struct {
    ACPI_TABLE_HEADER Header;
    uint8_t AMLCode[];
} ACPI_DSDT;

void parseDSDT(ACPI_DSDT* dsdt) {
    LouPrint("DSDT Length:%d\n", dsdt->Header.Length);
    LouPrint("DSDT OEM ID:%s\n", dsdt->Header.OEMID);
    LouPrint("DSDT OEM TableID: %s\n", dsdt->Header.OEMTableID);
    // The AML code can be further processed here if needed
}


LOUDDK_API_ENTRY LOUSTATUS InitDSDT() {

    LOUSTATUS Status = STATUS_UNSUCCESSFUL;

    uint8_t* Buffer = (uint8_t*)LouMalloc(sizeof(uint8_t*) * 256);
    ULONG ReturnLength = 0x0000;

    Status = AuxKlibGetSystemFirmwareTable(
        'ACPI',
        'FADT',
        Buffer,
        ACPIBUFFER,
        &ReturnLength
    );

    if (Status != LOUSTATUS_GOOD) {
        Status = AuxKlibGetSystemFirmwareTable(
            'ACPI',
            'FACP',
            Buffer,
            0,
            &ReturnLength
        );
    }

    // Assuming Buffer now contains the FADT table
    if (Status == LOUSTATUS_GOOD) {
        ACPI_FADT* fadt = (ACPI_FADT*)Buffer;
        ACPI_DSDT* dsdt = (ACPI_DSDT*)(uintptr_t)fadt->Dsdt;
        parseDSDT(dsdt);
    }
    else {
        LouFree(Buffer, sizeof(uint8_t) * 256);
        return STATUS_UNSUCCESSFUL;
    }
    LouFree(Buffer, sizeof(uint8_t) * 256);

    return Status;

}