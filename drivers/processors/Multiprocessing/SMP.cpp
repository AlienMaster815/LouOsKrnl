#include <LouDDK.h>
#include "../APIC/apic.h"

UNUSED static uint64_t GDTPointer;
UNUSED static uint64_t IDTPointer;

struct DescriptorTablePointer {
    uint16_t limit;
    uint64_t base;
} __attribute__((packed));

void get_gdt_pointer(DescriptorTablePointer& gdtp) {
    asm volatile("sgdt %0" : "=m"(gdtp) : : "memory");
}

void get_idt_pointer(DescriptorTablePointer& idtp) {
    asm volatile("sidt %0" : "=m"(idtp) : : "memory");
}

KERNEL_IMPORT void WakeTheFuckUpBoysTailCall();
KERNEL_IMPORT uint16_t GetNPROC();
KERNEL_IMPORT uint64_t getTrampolineAddressTailCall();
KERNEL_IMPORT uint64_t GetWakeTheFuckUpBoysEndTailCall();
//extern void* ap_trampoline;  // Trampoline code address


#define ICR_INIT       0x00000500
#define ICR_STARTUP    0x00000600
#define IPI_DEST_ALL_EXCLUDING_SELF 0x000C0000
#define COZZY_CODE_SPACE 0x00008000
#define APIC_ISR_BASE  0x100
#define APIC_ESR       0x280


typedef struct {
    uint32_t reserved[8];
    uint32_t icr_low;
    uint32_t icr_high;
} apic_t;

extern uint64_t ApicBase;
uint64_t GetApicBase();

KERNEL_IMPORT uint64_t CheckApCompletion();

int check_ipi_delivery_status() {
    uint32_t icr_low = READ_REGISTER_ULONG(ICR_REGISTER_LOW);
    // Check the Delivery Status bit (bit 12) in the ICR
    return icr_low & (1 << 12);
}

void send_startup_ipi(uint32_t apic_id, uint8_t vector) {
    WRITE_REGISTER_ULONG(ICR_REGISTER_HI, apic_id << 24);
    WRITE_REGISTER_ULONG(ICR_REGISTER_LOW, ICR_STARTUP | vector);
    // Wait for the IPI to be delivered
    while (check_ipi_delivery_status());
}

void send_ipi(uint32_t apic_id, uint32_t icr_low) {
    WRITE_REGISTER_ULONG(ICR_REGISTER_HI, apic_id << 24);
    WRITE_REGISTER_ULONG(ICR_REGISTER_LOW, icr_low);
    // Wait for the IPI to be delivered
    while (check_ipi_delivery_status());
}

void start_aps() {
    uint16_t NumberOfProcessors = GetNPROC();

    LouPrint("Wakeing Up %d Processors\n", NumberOfProcessors);
    LouPrint("Tailcall Is At:%h\n", getTrampolineAddressTailCall());
    for(uint16_t i = 1; i < NumberOfProcessors; i++){
        LouPrint("Waking Up Processor:%d\n", i+1);
        send_ipi(i, ICR_INIT | IPI_DEST_ALL_EXCLUDING_SELF);

        uint32_t vectorAddress = (uint32_t)getTrampolineAddressTailCall() >> 12; // Shift right by 12 to fit into the vector field

        send_ipi(i, ICR_STARTUP | vectorAddress);
        //wait two seconds
        sleep(100);

        LouPrint("Processor:%d Successfully Started\n", i+1);

    }

    LouPrint("Done Initializing Processors\n");
}


LOUDDK_API_ENTRY void SMPInit(){

    LouPrint("Initializing SMP\n");

    //DescriptorTablePointer gdtp;
    //DescriptorTablePointer idtp;

    //get_gdt_pointer(gdtp);
    //get_idt_pointer(idtp);

    //GDTPointer = gdtp.base;
    //IDTPointer = idtp.base;

    //LouPrint("GDT Pointer: Base = %h, Limit = %h\n", GDTPointer, gdtp.limit);
    //LouPrint("IDT Pointer: Base = %h, Limit = %h\n", IDTPointer, idtp.limit);

    start_aps();

    LouPrint("Done With SMP Initialization\n");
}


LOUDDK_API_ENTRY uint64_t GetGdtPointer(){
    return GDTPointer;
}

 LOUDDK_API_ENTRY uint64_t GetIdtPointer(){
    return IDTPointer;
 }

void TrampolineFinalInit(){

    LouPrint("SMP Final Initializations\n");


    LouPrint("SMP Final Initializations Finished\n");
}