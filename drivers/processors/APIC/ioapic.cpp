#include <LouDDK.h>
#include <NtAPI.h>
KERNEL_IMPORT void ioapic_unmask_irq(uint8_t irq) ;
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
    uint64_t ioapic_vaddress;
} IOAPICInfo;


#define MAX_IOAPICS 16
#define LEGACY_IRQ_SCOPE 16

extern IOAPICInfo ioapics[MAX_IOAPICS];
extern ACPI_MADT_INTERRUPT_SOURCE_OVERRIDE* ISOPointer[];

extern int ioapic_count;
extern int OverideCount;

uint64_t IoApicBase;
uint64_t NumberOfInterrupts;

#define IOAPIC_REGSEL  0x00  // IOAPIC Register Select
#define IOAPIC_WIN     0x10  // IOAPIC Window
#define IOAPIC_REDIRECTION_TABLE_BASE 0x10


// Function to get the memory-mapped I/O address
static inline volatile uint32_t* ioapic_mmio(uint32_t offset) {
    return (volatile uint32_t*)((uintptr_t)IoApicBase + offset);
}

// Function to write to an I/O APIC register
static inline void ioapic_write(uint32_t reg, uint32_t value) {
    *ioapic_mmio(IOAPIC_REGSEL) = reg;  // Select the register
    *ioapic_mmio(IOAPIC_WIN) = value;   // Write to the selected register
}

// Function to read from an I/O APIC register
static inline uint32_t ioapic_read(uint32_t reg) {
    *ioapic_mmio(IOAPIC_REGSEL) = reg;  // Select the register
    return *ioapic_mmio(IOAPIC_WIN);    // Read from the selected register
}

bool InitializeIoApic(uint64_t IoApicNumber, uint64_t MappedArea){

    LouPrint("Starting IO/APIC:%d At Address:%h\n",ioapics[IoApicNumber].ioapic_id, ioapics[IoApicNumber].ioapic_address);
    LouPrint("Calculating Address In Virtual Memory\n");

    LouKeMallocVMmIO(ioapics[IoApicNumber].ioapic_address, KILOBYTE_PAGE, KERNEL_PAGE_WRITE_PRESENT);

    IoApicBase = LouKeVMemmorySearchVirtualSpace(ioapics[IoApicNumber].ioapic_address);

    ioapics[IoApicNumber].ioapic_vaddress = IoApicBase;

    uint64_t VersionRegister = ioapic_read(0x01);

    NumberOfInterrupts = (VersionRegister >> 16);

    LouPrint("Number Of Interrupts That are handled:%d\n",NumberOfInterrupts);

    LouPrint("Initializing IO/APIC To A Operating State\n");
    for (uint8_t irq = 0; irq < NumberOfInterrupts; irq++) {
        uint32_t index = IOAPIC_REDIRECTION_TABLE_BASE + 2 * irq;
        uint32_t high_index = index + 1;
        
        // Set the high 32 bits of the redirection table entry
        uint32_t high = 0;  // Typically set to the destination APIC ID
        ioapic_write(high_index, high);

        // Set the low 32 bits of the redirection table entry
        uint32_t low = (irq + 0x20) | 0x10000;  // Vector number + masked (initially masked)
        ioapic_write(index, low);
    }

    //ioapic_unmask_irq(1);

    return true;
}

static inline volatile uint32_t* ioapic_advanced_mmio(uint64_t ioapic_base, uint32_t offset) {
    return (volatile uint32_t*)((uintptr_t)ioapic_base + offset);
}

// Advanced function to write to an I/O APIC register
void ioapic_advanced_write(uint64_t ioapic_base, uint32_t reg, uint32_t value) {
    *ioapic_advanced_mmio(ioapic_base, IOAPIC_REGSEL) = reg;  // Select the register
    *ioapic_advanced_mmio(ioapic_base, IOAPIC_WIN) = value;   // Write to the selected register
}

// Advanced function to read from an I/O APIC register
uint32_t ioapic_advanced_read(uint64_t ioapic_base, uint32_t reg) {
    *ioapic_advanced_mmio(ioapic_base, IOAPIC_REGSEL) = reg;  // Select the register
    return *ioapic_advanced_mmio(ioapic_base, IOAPIC_WIN);    // Read from the selected register
}

// Advanced function to unmask a given IRQ in the I/O APIC
void ioapic_advanced_unmask_irq(uint64_t ioapic_base, uint8_t irq) {
    uint32_t index = IOAPIC_REDIRECTION_TABLE_BASE + 2 * irq;
    uint32_t high_index = index + 1;

    // Read the current redirection entry
    uint32_t low = ioapic_advanced_read(ioapic_base, index);
    uint32_t high = ioapic_advanced_read(ioapic_base, high_index);

    // Clear the mask bit (16th bit) to unmask the interrupt
    low &= ~0x10000;

    // Write back the updated values
    ioapic_advanced_write(ioapic_base, index, low);
    ioapic_advanced_write(ioapic_base, high_index, high);
}

// Advanced function to mask a given IRQ in the I/O APIC
void ioapic_advanced_mask_irq(uint64_t ioapic_base, uint8_t irq) {
    uint32_t index = IOAPIC_REDIRECTION_TABLE_BASE + 2 * irq;
    uint32_t high_index = index + 1;

    // Read the current redirection entry
    uint32_t low = ioapic_advanced_read(ioapic_base, index);
    uint32_t high = ioapic_advanced_read(ioapic_base, high_index);

    // Set the mask bit (16th bit) to mask the interrupt
    low |= 0x10000;

    // Write back the updated values
    ioapic_advanced_write(ioapic_base, index, low);
    ioapic_advanced_write(ioapic_base, high_index, high);
}

uint8_t GetIoApicNumber(uint8_t PIN){
    for(uint8_t i = 0 ; i < ioapic_count; i++){
        if((ioapics[i].gsi_base < PIN) && ((ioapics[i].gsi_base + (ioapic_advanced_read(ioapics[i].ioapic_vaddress,0x01) >> 16)) > PIN))return i;
    }
    return ioapic_count + 1;
}

KERNEL_IMPORT uint8_t FindTrueIRQ(uint8_t IRQ){
    for(uint8_t i = 0 ; i < OverideCount; i++){
        if(ISOPointer[i]->Source == IRQ){
            if(ISOPointer[i]->Flags & 0x03) return ISOPointer[i]->GlobalSystemInterrupt;
        }
    }
    return IRQ;
}

KERNEL_IMPORT uint8_t GetTotalHardwareInterrupts(){
    uint8_t TotalHardwareInterrupts = ioapics[ioapic_count - 1].gsi_base + (ioapic_advanced_read(ioapics[ioapic_count - 1].ioapic_vaddress,0x01) >> 16);
    return TotalHardwareInterrupts + 1;
}

KERNEL_IMPORT void ioapic_unmask_irq(uint8_t irq) {

    irq = FindTrueIRQ(irq); //finds the interrupt based on if there is a overide
    uint8_t IoApicNum = GetIoApicNumber(irq); //gets the actual ioapic the irq belogs to based on the 
    //gsi and the number of handles

    //gets the offset of the irq register in the ioapic
    irq = irq - ioapics[IoApicNum].gsi_base;

    uint32_t index = IOAPIC_REDIRECTION_TABLE_BASE + 2 * irq;
    uint32_t high_index = index + 1;

    // Read the current redirection entry
    uint32_t low = ioapic_advanced_read(ioapics[IoApicNum].ioapic_vaddress, index);
    uint32_t high = ioapic_advanced_read(ioapics[IoApicNum].ioapic_vaddress, high_index);

    // Clear the mask bit (16th bit) to unmask the interrupt
    low &= ~0x10000;

    // Write back the updated values
    ioapic_advanced_write(ioapics[IoApicNum].ioapic_vaddress, index, low);
    ioapic_advanced_write(ioapics[IoApicNum].ioapic_vaddress, high_index, high);
}


// Function to mask a given IRQ in the I/O APIC
KERNEL_IMPORT void ioapic_mask_irq(uint8_t irq) {
    
    irq = FindTrueIRQ(irq); //finds the interrupt based on if there is a overide
    uint8_t IoApicNum = GetIoApicNumber(irq); //gets the actual ioapic the irq belogs to based on the 
    //gsi and the number of handles
    
    //gets the offset of the irq register in the ioapic
    irq = irq - ioapics[IoApicNum].gsi_base;

    uint32_t index = IOAPIC_REDIRECTION_TABLE_BASE + 2 * irq;
    uint32_t high_index = index + 1;

    // Read the current redirection entry
    uint32_t low = ioapic_advanced_read(ioapics[IoApicNum].ioapic_vaddress, index);
    uint32_t high = ioapic_advanced_read(ioapics[IoApicNum].ioapic_vaddress, high_index);

    // Set the mask bit (16th bit) to mask the interrupt
    low |= 0x10000;

    // Write back the updated values
    ioapic_advanced_write(ioapics[IoApicNum].ioapic_vaddress, index, low);
    ioapic_advanced_write(ioapics[IoApicNum].ioapic_vaddress, high_index, high);
}

