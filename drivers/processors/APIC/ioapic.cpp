#include <LouDDK.h>
#include <NtAPI.h>

typedef struct {
    uint32_t ioapic_id;
    uint64_t ioapic_address;
    uint32_t gsi_base;
} IOAPICInfo;

#define MAX_IOAPICS 16

extern IOAPICInfo ioapics[MAX_IOAPICS];

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

// Function to unmask a given IRQ in the I/O APIC
void ioapic_unmask_irq(uint8_t irq) {
    uint32_t index = IOAPIC_REDIRECTION_TABLE_BASE + 2 * irq;
    uint32_t high_index = index + 1;

    // Read the current redirection entry
    uint32_t low = ioapic_read(index);
    uint32_t high = ioapic_read(high_index);

    // Clear the mask bit (16th bit) to unmask the interrupt
    low &= ~0x10000;

    // Write back the updated values
    ioapic_write(index, low);
    ioapic_write(high_index, high);
}

// Function to mask a given IRQ in the I/O APIC
void ioapic_mask_irq(uint8_t irq) {
    uint32_t index = IOAPIC_REDIRECTION_TABLE_BASE + 2 * irq;
    uint32_t high_index = index + 1;

    // Read the current redirection entry
    uint32_t low = ioapic_read(index);
    uint32_t high = ioapic_read(high_index);

    // Set the mask bit (16th bit) to mask the interrupt
    low |= 0x10000;

    // Write back the updated values
    ioapic_write(index, low);
    ioapic_write(high_index, high);
}

bool InitializeIoApic(uint64_t IoApicNumber, uint64_t MappedArea){

    LouPrint("Starting IO/APIC:%d At Address:%h\n",ioapics[IoApicNumber].ioapic_id, ioapics[IoApicNumber].ioapic_address);
    LouPrint("Calculating Address In Virtual Memory\n");
    IoApicBase = (uint64_t)LouMalloc(KILOBYTE_PAGE);

    LouMapAddress(ioapics[IoApicNumber].ioapic_address, IoApicBase, KERNEL_PAGE_WRITE_PRESENT, KILOBYTE_PAGE);

    uint64_t VersionRegister = ioapic_read(0x01);

    NumberOfInterrupts = (VersionRegister >> 16);

    LouPrint("Number Of Interrupts:%d\n",NumberOfInterrupts);

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

    LouPrint("Unmasking Keyboard Interrupt\n");
    ioapic_unmask_irq(1);

    return true;
}

void LouKeConfigureInterrupt(
    uint8_t IRQ, 
    bool Mask,
    uint8_t Pin, 
    uint8_t Destination
    ){

    uint32_t entry = IOAPIC_REDIRECTION_TABLE_BASE * 2 * Pin;

    uint32_t low = ioapic_read(entry);
    uint32_t high = ioapic_read(entry + 1);

    // Set the interrupt vector (lower 8 bits of the low entry)
    low &= ~0xFF;
    low |= IRQ + 0x20;

        // Set or clear the mask bit (16th bit of the low entry)
    if (Mask) {
        low |= (1 << 16); // Mask the interrupt
    } else {
        low &= ~(1 << 16); // Unmask the interrupt
    }

    // Set the destination field (upper 8 bits of the high entry)
    high &= ~0xFF000000;
    high |= (Destination << 24);

    // Write the updated low and high entries back to the IOAPIC
    ioapic_write(entry, low);
    ioapic_write(entry + 1, high);

}