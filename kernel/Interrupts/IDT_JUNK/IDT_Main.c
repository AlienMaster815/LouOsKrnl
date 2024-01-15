#include <kernel/memmory.h>
#include <stdio.h>
#include <kernel/interrupts.h>
#include <stdlib.h>
#include <kernel/gdt.h>
#include <kernel/errors.h>
#include <kernel/kernel.h>

extern void Interrupt_RouterLong();

#ifdef __i386__


extern void SetPicIDTGate(int index, void (*handler)());

extern LOUSTATUS InitializeMainInterruptHandleing();
extern LOUSTATUS InitializeStartupInterruptHandleing();

extern LOUSTATUS UpdateIDT(bool Init);
#endif


#ifdef __x86_64__
LOUSTATUS set_idt_gate(int num, void (*handler)(), uint16_t selector, uint8_t ist, uint8_t type_attr) {
    
    //LouPrint("%d", num);

    uintptr_t base = (uintptr_t)handler;
        IDT[num].base_low = base & 0xFFFF;
        IDT[num].base_mid = (base >> 16) & 0xFFFF;
        IDT[num].base_high = (base >> 32) & 0xFFFFFFFF;
        IDT[num].selector = selector;
        IDT[num].ist = ist;
        IDT[num].type_attr = 0x8E;//type_attr;
        IDT[num].reserved = 0;
    
        return 0;
        
}
#endif


void SetPicIDTGate(int index, void (*handler)()) {
    #ifdef __i386__
    uint32_t address = (uint32_t)handler;

    //LouPrint("Index: %d ,Handler Address: %d\n",index , handler);

    idt[index].base_low = (uint16_t)(address & 0xFFFF);

    idt[index].selector = KernelCodeSegment; // Kernel code segment selector

    idt[index].always0 = 0;

    idt[index].flags = 0x8E; // Present (P), Ring 0 (DPL), Interrupt Gate (Type)

    idt[index].base_high = (uint16_t)((address >> 16) & 0xFFFF);
    #endif
}

LOUSTATUS SetBasicInterrupts(bool Init){
    
    LOUSTATUS result;    
    #ifdef __x86_64__
    if(Init){
        for (uint16_t i = 0; i < 256; i++) set_idt_gate(i, &Interrupt_RouterLong, KernelCodeSegment, 0, 0);
        //LouPrint("Hallo!!!\n");
        return 0;
    }
    else{

        return 0;
    }
    #endif
    #ifdef __i386__
    if(Init){

        return 0;
    }

    else{

        //TODO: Finish Apic Interrupts when We Get That Far

        return 0;

    }
    #endif

}


LOUSTATUS UpdateIDT(bool Init){
    #ifdef __x86_64__
    IDTP idtp;
    if(Init){// Using PIC With Legacy Interrupt Descriptor Table
        idtp.base = (uint64_t)(uintptr_t)&IDT;
        idtp.limit = 256*sizeof(Interrupt_Descriptor_Table) - 1;
        asm volatile("lidt %0" : : "m" (idtp) : "memory");
        return 0;
    }
    else{ // Using APIC With Interrupt Descriptor Table 64

        idtp.base = (uint64_t)(uintptr_t)&IDT;
        idtp.limit = 256*sizeof(Interrupt_Descriptor_Table) - 1;
        asm volatile("lidt %0" : : "m" (idtp) : "memory");
        return 0;
    }
    
    #endif
    #ifdef __i386__
    IDTP32 idtp;



    if(Init){// Using PIC With Legacy Interrupt Descriptor Table

        idtp.base = (uint32_t)(uintptr_t)&idt;

        idtp.limit = 256*sizeof(Interrupt_Descriptor_Table) - 1;

        asm volatile("lidt %0" : : "m" (idtp) : "memory");

        //LouPrint("ADDRESS OF IDT: %d, ADDRESS OF IDTP: %d\n",&idt, &idtp);

    unsigned short cs_value;

    // Inline assembly to get CS value
    asm("mov %%cs, %0" : "=r" (cs_value));

    // Print the CS value
    //LouPrint("CS register value: %d\n", cs_value);

    }
    else{ // Using APIC With Interrupt Descriptor Table 64



        idtp.base = (uint32_t)(uintptr_t)&idt;

        idtp.limit = 256*sizeof(Interrupt_Descriptor_Table) - 1;

        asm volatile("lidt %0" : : "m" (idtp) : "memory");

        return 0;


    }


    #endif
    return 1;
    
}

void SetInterruptFlags(){
    asm volatile("sti");

}

void UnSetInterruptFlags(){
    asm volatile("cli");
}

void WaitForInterrupt(){
    asm volatile("hlt");
}
