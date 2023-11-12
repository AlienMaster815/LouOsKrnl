#include <kernel/memmory.h>
#include <stdio.h>
#include <kernel/interrupts.h>
#include <stdlib.h>
#include <kernel/gdt.h>
#include <kernel/errors.h>
#include <kernel/kernel.h>
LOUSTATUS set_idt_gate(int num, uint64_t base, uint16_t selector, uint8_t ist, uint8_t type_attr) {
    IDT[num].base_low = base & 0xFFFF;
    IDT[num].base_mid = (base >> 16) & 0xFFFF;
    IDT[num].base_high = (base >> 32) & 0xFFFFFFFF;
    IDT[num].selector = selector;
    IDT[num].ist = ist;
    IDT[num].type_attr = type_attr;
    IDT[num].reserved = 0;
    
    if( (IDT[num].base_low != base & 0xFFFF) ||
        (IDT[num].base_mid != (base >> 16) & 0xFFFF) ||
        (IDT[num].base_high != (base >> 32) & 0xFFFFFFFF) ||
        (IDT[num].selector != selector) ||
        (IDT[num].ist != ist) ||
        (IDT[num].type_attr != type_attr) ||
        (IDT[num].reserved != 0))
        return 1;
    
    
    return 0;
}



LOUSTATUS SetBasicInterrupts(bool Init){
    

    if(Init){
    
        //Right Now We Dont have an ist or api information and we are using legacy pic 

        set_idt_gate(0x00,(uint64_t)&DivideByZero,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        set_idt_gate(0x01,(uint64_t)&DebugException,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        set_idt_gate(0x01,(uint64_t)&NMI,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        set_idt_gate(0x01,(uint64_t)&BreakPoint,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        set_idt_gate(0x01,(uint64_t)&OverFlow,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        set_idt_gate(0x01,(uint64_t)&BoundCheck,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        set_idt_gate(0x01,(uint64_t)&InvalidOpcode,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        set_idt_gate(0x01,(uint64_t)&FPUNoDev,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        set_idt_gate(0x01,(uint64_t)&DoubleFault,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        set_idt_gate(0x01,(uint64_t)&CLOCK,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        set_idt_gate(0x01,(uint64_t)&Keyboard,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        set_idt_gate(0x01,(uint64_t)&PageFault,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        set_idt_gate(0x01,(uint64_t)&GeneralProtectionFault,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        return 0;
    }
    else{
        //TODO: Finish Apic Interrupts when We Get That Far
        //set_idt_gate(0x00,(uint64_t)&DivideByZero,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        return 0;
    }
    
}


LOUSTATUS UpdateIDT(bool Init){
    
    if(Init){// Using PIC With Legacy Interrupt Descriptor Table
        IDTP64 idtp;
        idtp.base = (uint64_t)(uintptr_t)&IDT;
        idtp.limit = 256*sizeof(Interrupt_Descriptor_Table) - 1;
        asm volatile("lidt %0" : : "m" (idtp));
        return 0;
    }
    else{ // Using APIC With Interrupt Descriptor Table 64
        IDTP64 idtp;
        idtp.base = (uint64_t)(uintptr_t)&IDT;
        idtp.limit = 256*sizeof(Interrupt_Descriptor_Table) - 1;
        asm volatile("lidt %0" : : "m" (idtp));
        return 0;
    }
}
