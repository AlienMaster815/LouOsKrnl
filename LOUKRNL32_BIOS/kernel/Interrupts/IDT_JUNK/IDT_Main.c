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

void SetPicIDTGate(int index, void (*handler)()) {
    uint32_t address = (uint32_t)handler;

    idt[index].base_low = (uint16_t)(address & 0xFFFF);
    idt[index].selector = 0x08; // Kernel code segment selector
    idt[index].always0 = 0;
    idt[index].flags = 0x8E; // Present (P), Ring 0 (DPL), Interrupt Gate (Type)
    idt[index].base_high = (uint16_t)((address >> 16) & 0xFFFF);
}

LOUSTATUS SetBasicInterrupts(bool Init){
    
    //set_idt_gate(0x00,(uint64_t)&DivideByZero,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
    if(Init){
        SetPicIDTGate(0x00,DivideByZero);
        SetPicIDTGate(0x01,DebugException);
        SetPicIDTGate(0x02,NMI);
        SetPicIDTGate(0x03,BreakPoint);
        SetPicIDTGate(0x04,OverFlow);
        SetPicIDTGate(0x05,BoundCheck);
        SetPicIDTGate(0x06,InvalidOpcode);
        SetPicIDTGate(0x07,FPUNoDev);
        SetPicIDTGate(0x08,DoubleFault);
        SetPicIDTGate(0x20,CLOCK);
        SetPicIDTGate(0x21,Keyboard);
        SetPicIDTGate(0x0E,PageFault);
        SetPicIDTGate(0x0D,GeneralProtectionFault);
        return 0;
    }
    else{
        //TODO: Finish Apic Interrupts when We Get That Far
        SetPicIDTGate(0x00,DivideByZero);
        SetPicIDTGate(0x01,DebugException);
        SetPicIDTGate(0x02,NMI);
        SetPicIDTGate(0x03,BreakPoint);
        SetPicIDTGate(0x04,OverFlow);
        SetPicIDTGate(0x05,BoundCheck);
        SetPicIDTGate(0x06,InvalidOpcode);
        SetPicIDTGate(0x07,FPUNoDev);
        SetPicIDTGate(0x08,DoubleFault);
        SetPicIDTGate(0x20,CLOCK);
        SetPicIDTGate(0x21,Keyboard);
        SetPicIDTGate(0x0E,PageFault);
        SetPicIDTGate(0x0D,GeneralProtectionFault);
    
        return 0;
    }
    
}


LOUSTATUS UpdateIDT(bool Init){
    
    if(Init){// Using PIC With Legacy Interrupt Descriptor Table
        IDTP32 idtp;
        idtp.base = (uint32_t)(uintptr_t)&idt;
        idtp.limit = 256*sizeof(Interrupt_Descriptor_Table_Pre_Acpi) - 1;
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


void SetInterruptFlags(){
    asm volatile("sti");
}
void UnSetInterruptFlags(){
    asm volatile("cli");
}
