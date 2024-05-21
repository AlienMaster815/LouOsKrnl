#include <LouDDK.h>
#include <NtAPI.h>
#include "Processors.h"

// Structure representing the lower 32 bits of an IOAPIC redirection table entry
typedef struct {
    uint32_t vector : 8;          // Bits 0-7
    uint32_t delivery_mode : 3;   // Bits 8-10
    uint32_t destination_mode : 1;// Bit 11
    uint32_t delivery_status : 1; // Bit 12
    uint32_t polarity : 1;        // Bit 13
    uint32_t remote_irr : 1;      // Bit 14
    uint32_t trigger_mode : 1;    // Bit 15
    uint32_t mask : 1;            // Bit 16
    uint32_t reserved : 15;       // Bits 17-31
} IOAPICRedirectionEntryLow;

// Structure representing the upper 32 bits of an IOAPIC redirection table entry
typedef struct {
    uint32_t reserved : 24;       // Bits 0-23
    uint32_t destination : 8;     // Bits 24-31
} IOAPICRedirectionEntryHigh;

// Structure representing a full IOAPIC redirection table entry
typedef struct {
    IOAPICRedirectionEntryLow low;
    IOAPICRedirectionEntryHigh high;
} IOAPICRedirectionEntry;


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

typedef struct {
    uint32_t ioapic_id;
    uint64_t ioapic_address;
    uint32_t gsi_base;
} IOAPICInfo;

#define MAX_IOAPICS 16

IOAPICInfo ioapics[MAX_IOAPICS];
int ioapic_count = 0;

#define APICADDRESSCAST (volatile uint32_t*)(uintptr_t)

uint64_t localAPICOverrideAddress = 0xFEE00000; // Default APIC base address
KERNEL_IMPORT uint64_t read_msr(uint32_t msr);
KERNEL_IMPORT void write_msr(uint32_t msr, uint64_t Value);
KERNEL_IMPORT void SetInterruptFlags();
KERNEL_IMPORT void UnSetInterruptFlags();
KERNEL_IMPORT void disable_pic();


static uint64_t LocalApicBase = 0xFEE00000;


void ParseAPIC(uint8_t* entryAddress, uint8_t* endAddress) {
    while (entryAddress < endAddress) {
        ACPI_MADT_ENTRY_HEADER* header = (ACPI_MADT_ENTRY_HEADER*)entryAddress;

        switch (header->Type) {
        case 0: {
            UpgradeNPROC();
            ACPI_MADT_LOCAL_APIC* localAPIC = (ACPI_MADT_LOCAL_APIC*)entryAddress;
            LouPrint("Processor ID:%d, APIC ID:%d, Flags:%d\n", localAPIC->ProcessorID, localAPIC->APICID, localAPIC->Flags);
            break;
        }
        case 1: {
            ACPI_MADT_IO_APIC* ioAPIC = (ACPI_MADT_IO_APIC*)entryAddress;
            LouPrint("I/O APIC ID:%d, Address:%h, Global System Interrupt Base:%d\n", ioAPIC->IOAPICID, ioAPIC->IOAPICAddress, ioAPIC->GlobalSystemInterruptBase);
            if (ioapic_count < MAX_IOAPICS) {
                ioapics[ioapic_count].ioapic_id = ioAPIC->IOAPICID;
                ioapics[ioapic_count].ioapic_address = ioAPIC->IOAPICAddress;
                ioapics[ioapic_count].gsi_base = ioAPIC->GlobalSystemInterruptBase;
                ioapic_count++;
            }
            break;
        }
        case 2: {
            ACPI_MADT_INTERRUPT_SOURCE_OVERRIDE* iso = (ACPI_MADT_INTERRUPT_SOURCE_OVERRIDE*)entryAddress;
            LouPrint("Bus: %d, Source:%d, Global System Interrupt:%d, Flags:%d\n", iso->Bus, iso->Source, iso->GlobalSystemInterrupt, iso->Flags);
            break;
        }
        case 3: {
            ACPI_MADT_NMI* nmi = (ACPI_MADT_NMI*)entryAddress;
            LouPrint("Flags:%d, Global System Interrupt:%d\n", nmi->Flags, nmi->GlobalSystemInterrupt);
            break;
        }
        case 4: {
            ACPI_MADT_LOCAL_APIC_NMI* localAPICNMI = (ACPI_MADT_LOCAL_APIC_NMI*)entryAddress;
            LouPrint("Processor ID: %d, Flags: %d, LINT:%d\n", localAPICNMI->ProcessorID, localAPICNMI->Flags, localAPICNMI->LocalAPICLint);
            break;
        }
        case 5: {
            ACPI_MADT_LOCAL_APIC_ADDRESS_OVERRIDE* laa = (ACPI_MADT_LOCAL_APIC_ADDRESS_OVERRIDE*)entryAddress;
            LouPrint("Local APIC Address:%h\n", laa->LocalApicAddress);
            LocalApicBase = laa->LocalApicAddress;
            UpgradeNPROC();
            break;
        }
        default:
            LouPrint("Unknown entry type:%d\n", header->Type);
            break;
        }
        entryAddress += header->Length;
    }
}

bool ApicSet = false;

LOUDDK_API_ENTRY bool GetAPICStatus() {
    return ApicSet;
}

#define IA32_APIC_BASE_MSR 0x1B
#define MSR_BASE_MASK 0xFFFFFFFFF000ULL


uint64_t GetLocalApicBase() {
    uint64_t BASE = read_msr(IA32_APIC_BASE_MSR);
    BASE &= MSR_BASE_MASK;
    return BASE;
}

#define INTERRUPTENABLEBIT 8
#define SPURIOUSINTERRUPTREGISTER (USHORT*)(UCHAR*)(0xF0 + GetLocalApicBase())
#define IA32_APIC_BASE_MSR_ENABLE 0x800

KERNEL_IMPORT void SetPageingDebug();
KERNEL_IMPORT void StartPagingDump();

BOOLEAN EnableApic() {
    

    LouPrint("Local Apic Base Is:%h\n", GetLocalApicBase());
    if(LouKeTestBitAndSetU16((USHORT*)SPURIOUSINTERRUPTREGISTER, INTERRUPTENABLEBIT))LouPrint("Interrupts Were Already Enabled\n");

    return LouKeTestBitU16(SPURIOUSINTERRUPTREGISTER, 8);
    
}

LOUDDK_API_ENTRY LOUSTATUS InitApicSystems() {
    LOUSTATUS Status = STATUS_UNSUCCESSFUL;

    uint8_t* Buffer = (uint8_t*)LouMalloc(ACPIBUFFER);
    ULONG ReturnLength = 0x0000;

    UnSetInterruptFlags();

    Status = AuxKlibGetSystemFirmwareTable('ACPI', 'APIC', Buffer, 0, &ReturnLength);
    if (Status != LOUSTATUS_GOOD) {
        Status = AuxKlibGetSystemFirmwareTable('ACPI', 'MADT', Buffer, 0, &ReturnLength);
    }
    if (Status != LOUSTATUS_GOOD) return STATUS_UNSUCCESSFUL;

    PACPI_MADT ApicTable = (PACPI_MADT)Buffer;

    disable_pic();

    uint8_t* EntryHeaderAddress = ((uint8_t*)Buffer + sizeof(ACPI_MADT));
    uint8_t* HeaderEndAddress = ((uint8_t*)Buffer + ApicTable->Header.Length);
    
    ParseAPIC(EntryHeaderAddress, HeaderEndAddress);

    //we are going to leave tha apic bases where they is now 
    //in case the Driver Module Developer wants to move it

    if (EnableApic()) {
        LouPrint("Local APIC Enabled\n");
    }
    else return STATUS_UNSUCCESSFUL;


    SetInterruptFlags();

    return LOUSTATUS_GOOD;
}

#define LOCAL_APIC_EOI_REGISTER 0xB0

LOUDDK_API_ENTRY void local_apic_send_eoi() {

}
