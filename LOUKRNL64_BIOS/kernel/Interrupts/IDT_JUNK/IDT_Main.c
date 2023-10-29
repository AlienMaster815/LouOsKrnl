#include <kernel/memmory.h>
#include <stdio.h>
#include <kernel/interrupts.h>



Interrupt_Descriptor_Table IDT[256];

LOUSTATUS set_idt_gate(int num, uint64_t base, uint16_t selector, uint8_t ist, uint8_t type_attr) {
    IDT[num].base_low = base & 0xFFFF;
    IDT[num].base_mid = (base >> 16) & 0xFFFF;
    IDT[num].base_high = (base >> 32) & 0xFFFFFFFF;
    IDT[num].selector = selector;
    IDT[num].ist = ist;
    IDT[num].type_attr = type_attr;
    IDT[num].reserved = 0;
}


