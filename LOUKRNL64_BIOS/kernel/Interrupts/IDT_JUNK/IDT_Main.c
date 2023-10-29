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


LOUSTATUS SetBasicInterrupts(){
    
    set_idt_gate(0x00,(uint64_t)&DivideByZero,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
    
}


LOUSTATUS UpdateIDT(){
    
    
}
