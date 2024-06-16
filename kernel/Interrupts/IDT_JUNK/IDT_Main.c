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
extern void ISR48();
extern void ISR49();
extern void ISR50();

extern void ISR51();
extern void ISR52();
extern void ISR53();
extern void ISR54();
extern void ISR55();
extern void ISR56();
extern void ISR57();
extern void ISR58();
extern void ISR59();
extern void ISR60();
extern void ISR61();
extern void ISR62();
extern void ISR63();
extern void ISR64();
extern void ISR65();
extern void ISR66();
extern void ISR67();
extern void ISR68();
extern void ISR69();
extern void ISR70();
extern void ISR71();
extern void ISR72();
extern void ISR73();
extern void ISR74();
extern void ISR75();
extern void ISR76();
extern void ISR77();
extern void ISR78();
extern void ISR79();
extern void ISR80();
extern void ISR81();
extern void ISR82();
extern void ISR83();
extern void ISR84();
extern void ISR85();
extern void ISR86();
extern void ISR87();
extern void ISR88();
extern void ISR89();
extern void ISR90();
extern void ISR91();
extern void ISR92();
extern void ISR93();
extern void ISR94();
extern void ISR95();
extern void ISR96();
extern void ISR97();
extern void ISR98();
extern void ISR99();
extern void ISR100();

extern void ISR101();
extern void ISR102();
extern void ISR103();
extern void ISR104();
extern void ISR105();
extern void ISR106();
extern void ISR107();
extern void ISR108();
extern void ISR109();
extern void ISR110();
extern void ISR111();
extern void ISR112();
extern void ISR113();
extern void ISR114();
extern void ISR115();
extern void ISR116();
extern void ISR117();
extern void ISR118();
extern void ISR119();
extern void ISR120();
extern void ISR121();
extern void ISR122();
extern void ISR123();
extern void ISR124();
extern void ISR125();
extern void ISR126();
extern void ISR127();
extern void ISR128();
extern void ISR129();
extern void ISR130();
extern void ISR131();
extern void ISR132();
extern void ISR133();
extern void ISR134();
extern void ISR135();
extern void ISR136();
extern void ISR137();
extern void ISR138();
extern void ISR139();
extern void ISR140();
extern void ISR141();
extern void ISR142();
extern void ISR143();
extern void ISR144();
extern void ISR145();
extern void ISR146();
extern void ISR147();
extern void ISR148();
extern void ISR149();
extern void ISR150();

extern void ISR151();
extern void ISR152();
extern void ISR153();
extern void ISR154();
extern void ISR155();
extern void ISR156();
extern void ISR157();
extern void ISR158();
extern void ISR159();
extern void ISR160();
extern void ISR161();
extern void ISR162();
extern void ISR163();
extern void ISR164();
extern void ISR165();
extern void ISR166();
extern void ISR167();
extern void ISR168();
extern void ISR169();
extern void ISR170();
extern void ISR171();
extern void ISR172();
extern void ISR173();
extern void ISR174();
extern void ISR175();
extern void ISR176();
extern void ISR177();
extern void ISR178();
extern void ISR179();
extern void ISR180();
extern void ISR181();
extern void ISR182();
extern void ISR183();
extern void ISR184();
extern void ISR185();
extern void ISR186();
extern void ISR187();
extern void ISR188();
extern void ISR189();
extern void ISR190();
extern void ISR191();
extern void ISR192();
extern void ISR193();
extern void ISR194();
extern void ISR195();
extern void ISR196();
extern void ISR197();
extern void ISR198();
extern void ISR199();
extern void ISR200();


void(*Handler[201])() = {
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
    ISR47,
    ISR48,
    ISR49,
    ISR50,
    ISR51,
    ISR52,
    ISR53,
    ISR54,
    ISR55,
    ISR56,
    ISR57,
    ISR58,
    ISR59,
    ISR60,
    ISR61,
    ISR62,
    ISR63,
    ISR64,
    ISR65,
    ISR66,
    ISR67,
    ISR68,
    ISR69,
    ISR70,
    ISR71,
    ISR72,
    ISR73,
    ISR74,
    ISR75,
    ISR76,
    ISR77,
    ISR78,
    ISR79,
    ISR80,
    ISR81,
    ISR82,
    ISR83,
    ISR84,
    ISR85,
    ISR86,
    ISR87,
    ISR88,
    ISR89,
    ISR90,
    ISR91,
    ISR92,
    ISR93,
    ISR94,
    ISR95,
    ISR96,
    ISR97,
    ISR98,
    ISR99,
    ISR100,

    ISR101,
    ISR102,
    ISR103,
    ISR104,
    ISR105,
    ISR106,
    ISR107,
    ISR108,
    ISR109,
    ISR110,
    ISR111,
    ISR112,
    ISR113,
    ISR114,
    ISR115,
    ISR116,
    ISR117,
    ISR118,
    ISR119,
    ISR120,
    ISR121,
    ISR122,
    ISR123,
    ISR124,
    ISR125,
    ISR126,
    ISR127,
    ISR128,
    ISR129,
    ISR130,
    ISR131,
    ISR132,
    ISR133,
    ISR134,
    ISR135,
    ISR136,
    ISR137,
    ISR138,
    ISR139,
    ISR140,
    ISR141,
    ISR142,
    ISR143,
    ISR144,
    ISR145,
    ISR146,
    ISR147,
    ISR148,
    ISR149,
    ISR150,
    ISR151,
    ISR152,
    ISR153,
    ISR154,
    ISR155,
    ISR156,
    ISR157,
    ISR158,
    ISR159,
    ISR160,
    ISR161,
    ISR162,
    ISR163,
    ISR164,
    ISR165,
    ISR166,
    ISR167,
    ISR168,
    ISR169,
    ISR170,
    ISR171,
    ISR172,
    ISR173,
    ISR174,
    ISR175,
    ISR176,
    ISR177,
    ISR178,
    ISR179,
    ISR180,
    ISR181,
    ISR182,
    ISR183,
    ISR184,
    ISR185,
    ISR186,
    ISR187,
    ISR188,
    ISR189,
    ISR190,
    ISR191,
    ISR192,
    ISR193,
    ISR194,
    ISR195,
    ISR196,
    ISR197,
    ISR198,
    ISR199,
    ISR200
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

    idt[index].selector = 0x38; // Interrupt code segment selector

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

        for (uint8_t i = 0; i <= 200; i++ ) {
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
        for (uint8_t i = 0; i <= 200; i++) {
            SetPicIDTGate(i, Handler[i]);
        }
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
