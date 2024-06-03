#include <LouDDK.h>
#include <NtAPI.h>
#include "../Processors.h"
#include "apic.h"

//I appologise if this is messy but at this point i just need this to work
// I WILL FIX IT LATER BEFORE 1.0

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

KERNEL_IMPORT void disable_pic();

CPU::CPUID* Cpu;
APIC::LAPIC* Lapic;


static uint64_t LocalApicBase = 0xFEE00000;

LOUSTATUS EnableAdvancedBspFeatures(CPU::FEATURE Feature);

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

static bool ApicSet = false;

LOUDDK_API_ENTRY bool GetAPICStatus() {
    return ApicSet;
}

#define IA32_APIC_BASE_MSR 0x1B
#define MSR_BASE_MASK 0xFFFFFFFFF000ULL
#define IA32_X2APIC_BASE_MSR_ADDR 0x802
#define MSR_BASE_MASKX2 0xFFFFFFFFFFFFF000


uint64_t GetLocalApicBase() {
   uint64_t msr_value = read_msr(IA32_APIC_BASE_MSR);
   return msr_value & 0xFFFFFFFFFFFFF000;
}

// Function to set the APIC base address
void cpu_set_apic_base(uintptr_t apic) {
   uint64_t msr_value = (apic & 0xFFFFFFFFFFFFF000) | IA32_APIC_BASE_MSR_ENABLE;
   write_msr(IA32_APIC_BASE_MSR, msr_value);
}


LOUDDK_API_ENTRY LOUSTATUS InitApicSystems(bool LateStage) {
    LOUSTATUS Status = LOUSTATUS_GOOD;

    uint8_t* Buffer = (uint8_t*)LouMalloc(ACPIBUFFER);
    ULONG ReturnLength = 0x0000;

    //UnSetInterruptFlags();
    
    Status = AuxKlibGetSystemFirmwareTable(
        'ACPI', 
        'APIC', 
        Buffer, 
        ACPIBUFFER, 
        &ReturnLength
    );
    if (Status != LOUSTATUS_GOOD) {
        Status = AuxKlibGetSystemFirmwareTable(
            'ACPI', 
            'MADT', 
            Buffer, 
            ACPIBUFFER, 
            &ReturnLength
        );
    }

    if (Status != LOUSTATUS_GOOD) return STATUS_UNSUCCESSFUL;

    PACPI_MADT ApicTable = (PACPI_MADT)Buffer;

    uint8_t* EntryHeaderAddress = ((uint8_t*)Buffer + sizeof(ACPI_MADT));
    uint8_t* HeaderEndAddress = ((uint8_t*)Buffer + ApicTable->Header.Length);

    ParseAPIC(
        EntryHeaderAddress,
        HeaderEndAddress
    );
    
    Cpu = (CPU::CPUID*)LouMalloc(sizeof(CPU::CPUID));
    Lapic = (APIC::LAPIC*)LouMalloc(sizeof(APIC::LAPIC));
    //configure FPU for BSP
    EnableAdvancedBspFeatures(CPU::FPU);
    //enable apic mode 

    if(Lapic->InitializeApic())LouPrint("APIC ENABLED SUCCESSFULLY\n");


    //remap pic to 32 base

    //wake up aspplication processors

    //initialize ap

    //sync ap

    //configure apic

    //configure io apic

    Cpu->~CPUID();

    ApicSet = true;

    LouFree((RAMADD)Cpu, sizeof(CPU::CPUID));
    LouFree((RAMADD)Cpu, sizeof(APIC::LAPIC));

    return Status;

}


APIC::LAPIC::LAPIC(){

}
APIC::LAPIC::~LAPIC(){

}
bool APIC::LAPIC::InitializeApic(){

    LouPrint("Setting Up APIC\n");
    uint64_t MSR = read_msr(IA32_APIC_BASE_MSR);

    if(!(MSR >> 11) & 0x01) return false;
    if((MSR >> 8) & 0x01)   InitializeBspLapic();
    //else if (!(MSR >> 8) & 0x01) InitializeApApic();
    else return false;

    return true;
}

bool APIC::LAPIC::InitializeBspLapic(){

    LouPrint("Initializing BootStrap Processor\n");
 
    LouPrint("Disableing Pic\n");
    disable_pic();
    LouPrint("Pic Has Been Disabled\n");

    volatile uint32_t* apic_base = (volatile uint32_t*)GetLocalApicBase();


    if(Cpu->IsFeatureSupported(CPU::X2APIC)){
        //initiailize x2 standard
        LouPrint("Using X2 Standard\n");

        //Set the Spurious Interrupt Vector Register bit 8 to start receiving interrupts
        apic_base[0xF0 / 4] |= 0x100; // Assuming memory-mapped I/O

    }
    else if (Cpu->IsFeatureSupported(CPU::XAPIC)){
        //initialize x1 standard
        LouPrint("Using X1 Standard\n");

        //LouMapAddress(0xFEE00000,0xFEE00000,KERNEL_PAGE_WRITE_PRESENT);
        //LouMapAddress(0xFEF00000,0xFEF00000,KERNEL_PAGE_WRITE_PRESENT);


        //uint32_t FOOBAR = READ_REGISTER_ULONG((ULONG*)0xFEE000F0);

        //LouPrint("FOOBAR IS:%h\n",FOOBAR);

/*
        //LouMapAddress(GetLocalApicBase(),GetLocalApicBase(),KERNEL_PAGE_WRITE_PRESENT);

        LouPrint("Got Apic Base\n");

        WRITE_REGISTER_ULONG(SPURRIOUS_INTERRUPT_REGISTER, READ_REGISTER_ULONG(SPURRIOUS_INTERRUPT_REGISTER) | 0x100 );

        LouPrint("Enabled APIC\n");

        WRITE_REGISTER_ULONG(LVT_TIMER_REGISTER, 0x20); //IRQ 0

        LouPrint("Set Timer Vector\n");

        WRITE_REGISTER_ULONG(LVT_DIVIDE_CONFIGURATION_REGISTER, 0x0A); //divide by 128
        LouPrint("Set Divison\n");
        sleep(256);
        WRITE_REGISTER_ULONG(LVT_INITIAL_COUNT_REGISTER,0xFFFFFFFF);
        LouPrint("Set Counter\n");
        sleep(256);
        WRITE_REGISTER_ULONG(LVT_TIMER_REGISTER, LVTdisabled);        
        LouPrint("Disabled Timer\n");
        uint32_t CRC = READ_REGISTER_ULONG(LVT_CURRENT_COUNT_REGISTER);

        LouPrint("CRC Is:%h\n",CRC);
*/

    }
    else{
        //determine Discreet or integrated chip
        LouPrint("APIC Version Is:%h\n", READ_REGISTER_ULONG(LAPICID_REGISTER) & 0xFF);

        switch(READ_REGISTER_ULONG(LAPICID_REGISTER) & 0xFF){
            
            case 0:
                //initialize descreet apic
                LouPrint("Descrete Apic Found\n");
                // Set the Spurious Interrupt Vector Register bit 8 to start receiving interrupts
                apic_base[0xF0 / 4] |= 0x100; // Assuming memory-mapped I/O
                break;

            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
                LouPrint("Integrated Apic Found\n");
                // Set the Spurious Interrupt Vector Register bit 8 to start receiving interrupts
                apic_base[0xF0 / 4] |= 0x100; // Assuming memory-mapped I/O                
                break;

            default:{
                LouPrint("Unkown APIC CHIP\n");
                return false;
            }
        }
    }
    return true;
}

LOUDDK_API_ENTRY void local_apic_send_eoi() {
    WRITE_REGISTER_ULONG(EOI_REGISTER, ENDOFINTERRUPT);
    LouPrint("EOI\n");
}