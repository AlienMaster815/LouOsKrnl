#include <LouDDK.h>
#include <NtAPI.h>
#include "../Processors.h"
#include "apic.h"

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

void* CoProcessorsLapicAddresses[256] = { 0 };


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
#define IA32_APIC_BASE_MSR_ENABLE 0x800

KERNEL_IMPORT void SetPageingDebug();
KERNEL_IMPORT void StartPagingDump();

//NOTE: So According to the documentation all ports are 32 bit however they are
// alligned by 16 bits wich defies all logic and reasonable sence but whatever
// Registers are define below
#define LAPICID_REGISTER                             (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x20)   //RW
#define LAPICVER_REGISTER                            (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x30)   //RO
#define TPR_REGISTER                                 (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x80)   //RW
#define APR_REGISTER                                 (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x90)   //RO
#define PPR_REGISTER                                 (ULONG*)(UCHAR*)(GetLocalApicBase() + 0xA0)   //RW
#define EOI_REGISTER                                 (ULONG*)(UCHAR*)(GetLocalApicBase() + 0xB0)   //WO //Its Using the Chewbacka defence but whatever
#define RRD_REGISTER                                 (ULONG*)(UCHAR*)(GetLocalApicBase() + 0xC0)   //RO
#define LOGICAL_DESTINATION_REGISTER                 (ULONG*)(UCHAR*)(GetLocalApicBase() + 0xD0)   //RW
#define DESTINATION_FORMAT_REGISTER                  (ULONG*)(UCHAR*)(GetLocalApicBase() + 0xE0)   //RW
#define SPURRIOUS_INTERRUPT_REGISTER                 (ULONG*)(UCHAR*)(GetLocalApicBase() + 0xF0)   //RW
#define IN_SERVICE_REGISTER                          (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x100)  //RO //70h / 16 bit wide buffer
#define TMR_REGISTER                                 (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x180)  //RO Same As Above
#define IRR_REGISTER                                 (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x200)  //RO Same As Above
#define ERR_STATUS_REGISTER                          (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x280)  //RO
#define CMCI_REGISTER                                (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x2F0)  //RW
#define ICR_REGISTER                                 (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x300)  //RW //2 * 16 bit Wide buffer
#define LVT_TIMER_REGISTER                           (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x320)  //RW
#define LVT_THERMAL_SENSOR_REGISTER                  (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x330)  //RW
#define LVT_PERFORMANCE_MONITORING_COUNTERS_REGISTER (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x340)  //RW
#define LVT_INT0_REGISTER                            (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x350)  //RW
#define LVT_INT1_REGISTER                            (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x360)  //RW
#define LVT_ERROR_REGISTER                           (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x370)  //RW
#define LVT_INITIAL_COUNT_REGISTER                   (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x380)  //RW
#define LVT_CURRENT_COUNT_REGISTER                   (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x390)  //RO
#define LVT_DIVIDE_CONFIGURATION_REGISTER            (ULONG*)(UCHAR*)(GetLocalApicBase() + 0x3E0)  //RW

#define CMCI_OFFSET                               0
#define ICR_OFFSET                                1
#define TIMER_OFFSET                              3
#define THERMAL_SENSOR_OFFSET                     4
#define PERFORMANCE_MONITORING_COUNTERS_OFFSET    5
#define INT0_OFFSET                               6
#define INT1_OFFSET                               7
#define ERROR_OFFSET                              8
#define INITIAL_OFFSET                            9
#define CURRENT_OFFSET                            10
#define DIVIDE_CFG_OFFSET                         11

//Now Define Commands
#define ENDOFINTERRUPT 0x00

BOOLEAN EnableApic() {
    
    //if the lapi is not a valid lapic version > 0 then i think we all know what that means
    if(!READ_REGISTER_ULONG(LAPICVER_REGISTER))return false;

    ULONG SIR_VALUE = READ_REGISTER_ULONG(SPURRIOUS_INTERRUPT_REGISTER);

    if (LouKeTestBitAndSetU32((uint32_t*)&SIR_VALUE, 8))LouPrint("LAPIC Already Enabled\n");

    WRITE_REGISTER_ULONG(SPURRIOUS_INTERRUPT_REGISTER, SIR_VALUE);

    return true;
}

#define CALCULATEVECTORTABLEOFFSET (ULONG*)(UCHAR*)((uintptr_t)CMCI_REGISTER + (uintptr_t)(Offset * 16))

#define MASKINGBIT 16
#define INTRPENDINGBIT 12

#define HARDWARE_SPACE 32

#define TIMER HARDWARE_SPACE
#define KEYBOARD HARDWARE_SPACE + 1

void AssignInterruptVector(uint8_t VectorNumber,uint8_t Offset) {
    ULONG SIR_VALUE = READ_REGISTER_ULONG(CALCULATEVECTORTABLEOFFSET); //Gets the VectorTable Entry
    SIR_VALUE |= VectorNumber;
    WRITE_REGISTER_ULONG(CALCULATEVECTORTABLEOFFSET,SIR_VALUE); //Writes the updated value
}

BOOLEAN ApicCheckPendingInterrupt(uint8_t Offset) {
    ULONG SIR_VALUE = READ_REGISTER_ULONG(CALCULATEVECTORTABLEOFFSET); //Gets the VectorTable Entry
    return LouKeTestBitU32((uint32_t*)&SIR_VALUE, INTRPENDINGBIT);
}

void MaskLocalInterruptVector(uint8_t Offset) {
    ULONG SIR_VALUE = READ_REGISTER_ULONG(CALCULATEVECTORTABLEOFFSET); //Gets the VectorTable Entry
    LouKeSetBitU32((uint32_t*)&SIR_VALUE, MASKINGBIT);
    WRITE_REGISTER_ULONG(CALCULATEVECTORTABLEOFFSET,SIR_VALUE); //Writes the updated value
}


void UnMaskLocalInterruptVector(uint8_t Offset) {
    ULONG SIR_VALUE = READ_REGISTER_ULONG(CALCULATEVECTORTABLEOFFSET); //Gets the VectorTable Entry
    LouKeUnSetBitU32((uint32_t*)&SIR_VALUE, MASKINGBIT);
    WRITE_REGISTER_ULONG(CALCULATEVECTORTABLEOFFSET, SIR_VALUE); //Writes the updated value
}

//Delivery Modes
#define NORMAL_DELIVERY_MODE 0
#define LOW_PRIORITY_MODE    1
#define SMI_MODE             2
#define NMI_MODE             4
#define INIT_MODE            5
#define SIPI_MODE            6
//Define Delivery Methods
#define PHYSICAL_DESTINATION 0
#define LOGICAL_DESTINATION  1
//define Delivery Statuses
#define INTERRUPT_CLEARED    0
#define INTERRUPT_PENDING    1
//Define DeAssert Tags
#define IS_DE_ASSERTED       true
#define IS_NOT_DE_ASSERTED   false
//Define DT
#define DEFATULT_DT                        0
#define DT_TO_ITSELF                       1
#define DT_SEND_ALL_PROCESSORS             2
#define DT_SEND_ALL_PROCESSORS_BUT_ITSELF  3

void SendLocalApicInterruptCommand(
    uint8_t InterruptNumber,
    uint8_t DeliveryMode, 
    uint8_t DeliveryMethod,
    //uint8_t DeliveryStatus,
    BOOLEAN DeAssert,
    uint8_t DT
) {
    
    ULONG ICR_VALUE = READ_REGISTER_ULONG(ICR_REGISTER);
    ICR_VALUE |= InterruptNumber;
    ICR_VALUE |= (8 << DeliveryMode);
    ICR_VALUE |= (11 << DeliveryMethod);
    //ICR_VALUE |= (12 << DeliveryStatus);

    if (!DeAssert) {
        LouKeSetBitU32((uint32_t*)&ICR_VALUE, 15);
        LouKeUnSetBitU32((uint32_t*)&ICR_VALUE, 14);
    }
    else {
        LouKeSetBitU32((uint32_t*)&ICR_VALUE, 14);
        LouKeUnSetBitU32((uint32_t*)&ICR_VALUE, 15);
    }

    ICR_VALUE |= (DT << 18);

}

LOUSTATUS InitLocalVectorTable() {
    LOUSTATUS Status = LOUSTATUS_GOOD;

    AssignInterruptVector(TIMER, TIMER_OFFSET);
    SendLocalApicInterruptCommand(
        TIMER,
        NORMAL_DELIVERY_MODE,
        PHYSICAL_DESTINATION,
        IS_NOT_DE_ASSERTED,
        DEFATULT_DT
    );
    UnMaskLocalInterruptVector(TIMER_OFFSET);

    return Status;
}



LOUDDK_API_ENTRY LOUSTATUS InitApicSystems() {
    LOUSTATUS Status = STATUS_UNSUCCESSFUL;

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

    disable_pic();

    uint8_t* EntryHeaderAddress = ((uint8_t*)Buffer + sizeof(ACPI_MADT));
    uint8_t* HeaderEndAddress = ((uint8_t*)Buffer + ApicTable->Header.Length);
    
    ParseAPIC(
        EntryHeaderAddress, 
        HeaderEndAddress
    );

    //we are going to leave tha apic bases where they is now 
    //in case the Driver Module Developer wants to move it

    if (EnableApic()) {
        LouPrint("Local APIC Enabled\n");
    }
    else {
        LouFree(Buffer, ACPIBUFFER);
        return STATUS_UNSUCCESSFUL;
    }

    Status = InitLocalVectorTable();

    if (Status != LOUSTATUS_GOOD) {
        LouPrint("Unable To Initialize Local APIC Vector Table\n");
        LouFree(Buffer, ACPIBUFFER);
        return STATUS_UNSUCCESSFUL;
    }

    //Initialize the Main  APIC Timer For Thread Management
    SetTimerMode(
        PeriodicMode,
        1000
    );

    SetInterruptFlags();

    return LOUSTATUS_GOOD;
}


LOUDDK_API_ENTRY void local_apic_send_eoi() {
    WRITE_REGISTER_ULONG(EOI_REGISTER, ENDOFINTERRUPT);
}