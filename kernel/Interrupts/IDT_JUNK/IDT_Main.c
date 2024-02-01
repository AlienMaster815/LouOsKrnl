#include <kernel/memmory.h>
#include <stdio.h>
#include <kernel/interrupts.h>
#include <stdlib.h>
#include <kernel/gdt.h>
#include <kernel/errors.h>
#include <kernel/kernel.h>



#ifdef __i386__


extern void SetPicIDTGate(int index, void (*handler)());

extern LOUSTATUS InitializeMainInterruptHandleing();
extern LOUSTATUS InitializeStartupInterruptHandleing();

extern LOUSTATUS UpdateIDT(bool Init);
#endif

extern void ISR0();
extern void ISR1();
extern void ISR2();
extern void ISR3();
extern void ISR4();
extern void ISR5();
extern void ISR6();
extern void ISR7();
extern void ISR8();
extern void ISR9();
extern void ISR10();
extern void ISR11();
extern void ISR12();
extern void ISR13();
extern void ISR14();
extern void ISR15();
extern void ISR16();
extern void ISR17();
extern void ISR18();
extern void ISR19();
extern void ISR20();
extern void ISR21();
extern void ISR22();
extern void ISR23();
extern void ISR24();
extern void ISR25();
extern void ISR26();
extern void ISR27();
extern void ISR28();
extern void ISR29();
extern void ISR30();
extern void ISR31();
extern void ISR32();
extern void ISR33();
extern void ISR34();
extern void ISR35();
extern void ISR36();
extern void ISR37();
extern void ISR38();
extern void ISR39();
extern void ISR40();
extern void ISR41();
extern void ISR42();
extern void ISR43();
extern void ISR44();
extern void ISR45();
extern void ISR46();
extern void ISR47();

void(*Handler[48])() = {
    ISR0,
    ISR1,
    ISR2,
    ISR3,
    ISR4,
    ISR5,
    ISR6,
    ISR7,
    ISR8,
    ISR9,
    ISR10,
    ISR11,
    ISR12,
    ISR13,
    ISR14,
    ISR15,
    ISR16,
    ISR17,
    ISR18,
    ISR19,
    ISR20,
    ISR21,
    ISR22,
    ISR23,
    ISR24,
    ISR25,
    ISR26,
    ISR27,
    ISR28,
    ISR29,
    ISR30,
    ISR31,
    ISR32,
    ISR33,
    ISR34,
    ISR35,
    ISR36,
    ISR37,
    ISR38,
    ISR39,
    ISR40,
    ISR41,
    ISR42,
    ISR43,
    ISR44,
    ISR45,
    ISR46,
    ISR47
}; 

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
    unsigned short cs_value;

    // Inline assembly to read the CS register
    asm("mov %%cs, %0" : "=r" (cs_value));

    LOUSTATUS result;    
    #ifdef __x86_64__
    if(Init){

        for (uint8_t i = 0; i < 48; i++ ) {
            set_idt_gate(i, Handler[i], 0x38, 0, 0);
        }
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
