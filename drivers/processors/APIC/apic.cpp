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


static uint64_t LocalApicBase = 0xFEE00000;

//void* CoProcessorsLapicAddresses[256] = { 0 };


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

int IsX2ApicSupported() {
    uint32_t eax, ebx, ecx, edx;
    __asm__ volatile (
        "cpuid"
        : "=a"(eax), "=b"(ebx), "=c"(ecx), "=d"(edx)
        : "a"(1)
        );
    return ecx & (1 << 21);  // Check if the 21st bit of ecx is set
}

uint64_t GetLocalApicBase() {
    if (IsX2ApicSupported()) {
        uint64_t base;
        __asm__ volatile("rdmsr" : "=A"(base) : "c"(IA32_X2APIC_BASE_MSR_ADDR));
        return base & MSR_BASE_MASKX2;
    }
    else {
        uint64_t base = read_msr(IA32_APIC_BASE_MSR);
        return base & MSR_BASE_MASK;
    }
}

KERNEL_IMPORT void StartPagingDump();
KERNEL_IMPORT void SetPageingDebug();

#define IA32_APIC_BASE 0x1B
#define GlobalEnableBit 0x800
#define BspBit 0x80

#define DISABLE false
#define ENABLE true

#define BspFlag 0
#define GlobalEnableFlag 1

void GetLapicStatus(PBOOLEAN Flags) {
    uint64_t MSRApic = read_msr(IA32_APIC_BASE);
    if(MSRApic & BspBit) Flags[BspFlag] = true;
    else Flags[BspFlag] = false;
    if (MSRApic & GlobalEnableBit) Flags[GlobalEnableFlag] = true;
    else Flags[GlobalEnableFlag] = false;
    
}


void ReMapApic(uintptr_t new_base_address) {
    // Define the IA32_APIC_BASE MSR address
    //#define IA32_APIC_BASE 0x1B

// Read the current value of IA32_APIC_BASE MSR
    uint64_t apic_base_msr_value = read_msr(IA32_APIC_BASE);

    // Mask to clear the base address field
    uint64_t base_address_mask = ~(0xFFFFFFFFFFFFF000ULL);

    // Set the new base address in the IA32_APIC_BASE MSR value
    apic_base_msr_value &= base_address_mask; // Clear the base address field
    apic_base_msr_value |= (new_base_address & 0xFFFFFFFFFFFFF000ULL); // Set the new base address

    // Write the modified value back to the IA32_APIC_BASE MSR
    write_msr(IA32_APIC_BASE, apic_base_msr_value);
}



BOOLEAN EnableDisableGlobal(BOOLEAN IsEnableing){

    UNUSED uint64_t APICMsr = read_msr(IA32_APIC_BASE);

    if (IsEnableing) {
        // we are enableing the chip
        if (APICMsr & GlobalEnableBit) {
            //chip is already enabled do nothing
            LouPrint("Chip Is Already Enabled\n");
            return true;
        }
        else{
            //it is not awake wake it up
            LouPrint("Wakeing APIC\n");
        }
    }
    else {
        // we are disableing the chip
        if (APICMsr & GlobalEnableBit) {
            //chip is enabled shut it down
            LouPrint("Chip Is Enabled Shutting Down Per Request\n");
            APICMsr &= ~GlobalEnableBit;
            write_msr(IA32_APIC_BASE, APICMsr);
            LouPrint("Chip Is Now Disabled\n");
            return true;
        }
        else {
            //it is not awake do nothing up
            LouPrint("APIC Is Already Disabled\n");
            return true;
        }
    }

    return false;

}

BOOLEAN EnableDisableSoftware(BOOLEAN IsEnableing) {
    UNUSED ULONG Spurrious = READ_REGISTER_ULONG(SPURRIOUS_INTERRUPT_REGISTER);

    if (IsEnableing){
        // We Are enabling the chip
        if ((Spurrious >> 8) & 1) {
            //Apic already enabled do nothing
            LouPrint("Apic Already Enabled\n");
            return true;
        }
        else {
            LouPrint("Enableing Apic\n");
            Spurrious |= (1 << 8);
            LouPrint("Apic Enabled\n");
            WRITE_REGISTER_ULONG(SPURRIOUS_INTERRUPT_REGISTER, Spurrious);
            return true;
        }
    }
    else {
        // We are disableing the chip
        if ((Spurrious >> 8) & 1) {
            //Apic Enabled Disable It
            LouPrint("Apic Enabled Disableing Per Request\n");
            Spurrious &= ~(1 << 8);
            LouPrint("Apic Disabled\n");
            WRITE_REGISTER_ULONG(SPURRIOUS_INTERRUPT_REGISTER, Spurrious);
            return true;
        }
        else {
            LouPrint("Apic Already Disabled\n");
            return true;
        }
    }

    return false;

}


uint32_t GetApicID(BOOLEAN IsAPICx2) {

    if (IsAPICx2) {
        //the system is different in 2.0
        uint32_t x2apic_id;

        // Execute RDMSR instruction to read the x2APIC ID
        asm volatile(
            "movl $0x802, %%ecx\n\t"  // Set ECX to 0x802 for IA32_X2APIC_APICID MSR
            "rdmsr\n\t"               // Read IA32_X2APIC_APICID MSR
            "movl %%eax, %0\n\t"      // Move value in EAX register to x2apic_id variable
            : "=r" (x2apic_id)        // Output operand (x2apic_id) in "=r" constraint
            :                          // No input operands
            : "%eax", "%ecx", "%edx"  // List of clobbered registers
            );

        // Extract the x2APIC ID
        return x2apic_id;
    }
    else {
        uint32_t apic_id;

        // Execute CPUID instruction to get the xAPIC ID
        asm volatile(
            "movl $1, %%eax\n\t"   // Set EAX to 1 to indicate we want processor info
            "cpuid\n\t"            // Execute CPUID instruction
            "movl %%ebx, %0\n\t"   // Move value in EBX register to apic_id variable
            : "=r" (apic_id)       // Output operand (apic_id) in "=r" constraint
            :                      // No input operands
            : "%eax", "%ebx", "%ecx", "%edx" // List of clobbered registers
            );

        // Extract the xAPIC ID from bits 31-24
        return (apic_id >> 24) & 0xFF;
    }
}


#define UNKNOWN 0
#define PWR_RESET 1
#define SOFTWARE_DISABLE 2
uint8_t GetApicState() {

    UNUSED ULONG IRR = 0, ISR = 0, \
                 TMR = 0, ICR = 0, \
                 LDR = 0, TPR = 0, \
                 LIC = 0, DCR = 0, \
                 DFR = 0, \
                 VER = 0, ID = 0, \
                 SPUR = 0;
    IRR = READ_REGISTER_ULONG(IRR_REGISTER); ISR = READ_REGISTER_ULONG(IN_SERVICE_REGISTER);
    TMR = READ_REGISTER_ULONG(LVT_TIMER_REGISTER); ICR = READ_REGISTER_ULONG(ICR_REGISTER);
    LDR = READ_REGISTER_ULONG(LOGICAL_DESTINATION_REGISTER); TPR = READ_REGISTER_ULONG(TPR_REGISTER);
    LIC = READ_REGISTER_ULONG(LVT_INITIAL_COUNT_REGISTER); DCR = READ_REGISTER_ULONG(LVT_DIVIDE_CONFIGURATION_REGISTER);
    DFR = READ_REGISTER_ULONG(DESTINATION_FORMAT_REGISTER);
    SPUR= READ_REGISTER_ULONG(SPURRIOUS_INTERRUPT_REGISTER);

    if ((IRR == 0) && (ISR == 0) && (TMR == 0) && (ICR == 0) && (LDR == 0) && (TPR == 0) &&
        (LIC == 0) && (DCR == 0) &&
        (DFR == 0xFFFFFFFF) && (((SPUR >> 8) & 1) == 0)) {
        return PWR_RESET;
    }
    else if(((SPUR >> 8) & 1) == 0){
        return SOFTWARE_DISABLE;
    }

    return UNKNOWN;
}

uint32_t GetApicVersion() {
    uint32_t VER = READ_REGISTER_ULONG(LAPICVER_REGISTER);
    VER &= 0xFF;
    return VER;
}

uint32_t GetApicMaxLvtEntries() {
    uint32_t VER = READ_REGISTER_ULONG(LAPICVER_REGISTER);
    VER = (VER >> 16) & 0xFF;
    return VER;
}

uint32_t SuppressApicEOI() {
    uint32_t VER = READ_REGISTER_ULONG(LAPICVER_REGISTER);
    VER = (VER >> 24) & 1;
    return VER;
}

// create a function that will initialize the system for
// initial interrupt handleing for threads
void InitApic0() {
    bool Apic2x = IsX2ApicSupported();

    PBOOLEAN StatusBits = (PBOOLEAN)LouMalloc(sizeof(BOOLEAN) * 2);


    if (Apic2x) {
        LouPrint("APIC 2X Features Supported\n");
    }
    else {
        LouPrint("APIC 1X Features Only\n");

        GetLapicStatus(StatusBits);

        LouPrint("Bsp:%d\n",StatusBits[BspFlag]);
        LouPrint("GE:%d\n", StatusBits[GlobalEnableFlag]);

        RAMADD NewApicAddress = (RAMADD)LouMalloc(4 * KILOBYTE);
        
        LouPrint("Atempting To Remap APIC\n");
        ReMapApic((uintptr_t)NewApicAddress);
        
        if ((uint64_t)NewApicAddress != GetLocalApicBase()) {
            LouPrint("APIC Remap Failed Using Default Address\n");
            LouFree(NewApicAddress, 4 * KILOBYTE);
        }
        else {
            LouPrint("New Address Is:%h\n", GetLocalApicBase());
        }

    }

    uint32_t ID = GetApicID(Apic2x);
    uint8_t State = GetApicState();
    uint32_t APICVersion = GetApicVersion();
    uint32_t APICLvtEntries = 6 + (GetApicMaxLvtEntries() + 1);
    uint32_t APICLvtEOI = SuppressApicEOI();
    LouPrint("APIC ID Is:%h\n", ID);
    LouPrint("APIC Version Is:%h\n", APICVersion);
    LouPrint("APIC Max LVT Entries Is:%d\n", APICLvtEntries);
    LouPrint("APIC Max SLE Entries Is:%d\n", APICLvtEOI);
    LouPrint("APIC State Is:%d\n", State);

    if (State == UNKNOWN) {
        //see if the processor responds
        //to command probes
        EnableDisableSoftware(DISABLE);// disable and see if it disables
        if (GetApicState() != SOFTWARE_DISABLE) {
            LouPrint("Fuck We Need To Reset The APIC\n");
        }
        else {
            EnableDisableSoftware(ENABLE);
            if (GetApicState() == SOFTWARE_DISABLE) {
                LouPrint("Fuck We Need To Reset The APIC\n");
            }
            else {
                LouPrint("System Working Normally Continue\n");
            }
        }

    }

    APIC::APIC_TIMER Timer;

    Timer.ApicEnableTimer();

    LouFree((RAMADD)StatusBits, sizeof(BOOLEAN) * 2);

}




LOUDDK_API_ENTRY LOUSTATUS InitApicSystems() {
    LOUSTATUS Status = LOUSTATUS_GOOD;

    uint8_t* Buffer = (uint8_t*)LouMalloc(ACPIBUFFER);
    ULONG ReturnLength = 0x0000;

    UnSetInterruptFlags();
    

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

    InitApic0();

    //SetInterruptFlags();

    return Status;
}


LOUDDK_API_ENTRY void local_apic_send_eoi() {
    WRITE_REGISTER_ULONG(EOI_REGISTER, ENDOFINTERRUPT);
    LouPrint("EOI\n");
}