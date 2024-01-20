#include <kernel/memmory.h>
#include <stdio.h>
#include <kernel/interrupts.h>
#include <stdlib.h>
#include <kernel/gdt.h>
#include <kernel/errors.h>
#include <kernel/kernel.h>

__attribute__((interrupt)) void ISR0(struct interrupt_frame* frame); // Start of Intel Reserved
__attribute__((interrupt)) void ISR1(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR2(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR3(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR4(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR5(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR6(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR7(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR8(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR9(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR10(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR11(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR12(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR13(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR14(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR15(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR16(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR17(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR18(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR19(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR20(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR21(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR22(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR23(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR24(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR25(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR26(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR27(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR28(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR29(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR30(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR31(struct interrupt_frame* frame);

__attribute__((interrupt)) void ISR32(struct interrupt_frame* frame); //Start Of Hardware Programable
__attribute__((interrupt)) void ISR33(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR34(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR35(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR36(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR37(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR38(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR39(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR40(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR41(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR42(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR43(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR44(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR45(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR46(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR47(struct interrupt_frame* frame);

__attribute__((interrupt)) void ISR32(struct interrupt_frame* frame); //Start Of extended interrupts
__attribute__((interrupt)) void ISR33(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR34(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR35(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR36(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR37(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR38(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR39(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR40(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR41(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR42(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR43(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR44(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR45(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR46(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR47(struct interrupt_frame* frame);

__attribute__((interrupt)) void ISR48(struct interrupt_frame* frame); //Start Of extended interrupts
__attribute__((interrupt)) void ISR49(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR50(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR51(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR52(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR53(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR54(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR55(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR56(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR57(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR58(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR59(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR60(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR61(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR62(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR63(struct interrupt_frame* frame);

__attribute__((interrupt)) void ISR64(struct interrupt_frame* frame); //Start Of extended interrupts
__attribute__((interrupt)) void ISR65(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR66(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR67(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR68(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR69(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR70(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR71(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR72(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR73(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR74(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR75(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR76(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR77(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR78(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR79(struct interrupt_frame* frame);

__attribute__((interrupt)) void ISR80(struct interrupt_frame* frame); //Start Of extended interrupts
__attribute__((interrupt)) void ISR81(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR82(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR83(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR84(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR84(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR85(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR86(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR87(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR88(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR89(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR90(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR91(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR92(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR93(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR94(struct interrupt_frame* frame);

__attribute__((interrupt)) void ISR95(struct interrupt_frame* frame); //Start Of extended interrupts
__attribute__((interrupt)) void ISR96(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR97(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR98(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR99(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR100(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR101(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR102(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR103(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR104(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR105(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR106(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR107(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR108(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR109(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR110(struct interrupt_frame* frame);

__attribute__((interrupt)) void ISR111(struct interrupt_frame* frame); //Start Of extended interrupts
__attribute__((interrupt)) void ISR112(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR113(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR114(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR115(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR116(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR117(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR118(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR119(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR120(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR121(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR122(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR123(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR124(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR125(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR126(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR127(struct interrupt_frame* frame); //Start Of extended interrupts
__attribute__((interrupt)) void ISR128(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR129(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR130(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR131(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR132(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR133(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR134(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR135(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR136(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR137(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR138(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR139(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR140(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR141(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR142(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR143(struct interrupt_frame* frame); //Start Of extended interrupts
__attribute__((interrupt)) void ISR144(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR145(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR146(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR147(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR148(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR149(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR150(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR151(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR152(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR153(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR154(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR155(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR156(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR157(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR158(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR159(struct interrupt_frame* frame); //Start Of extended interrupts
__attribute__((interrupt)) void ISR160(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR161(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR162(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR163(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR164(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR165(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR166(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR167(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR168(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR169(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR170(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR171(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR172(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR173(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR174(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR175(struct interrupt_frame* frame); //Start Of extended interrupts
__attribute__((interrupt)) void ISR176(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR177(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR178(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR179(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR180(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR181(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR182(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR183(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR184(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR185(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR186(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR187(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR188(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR189(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR190(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR191(struct interrupt_frame* frame); //Start Of extended interrupts
__attribute__((interrupt)) void ISR192(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR193(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR194(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR195(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR196(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR197(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR198(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR199(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR200(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR201(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR202(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR203(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR204(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR205(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR206(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR207(struct interrupt_frame* frame); //Start Of extended interrupts
__attribute__((interrupt)) void ISR208(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR209(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR210(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR211(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR212(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR213(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR214(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR215(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR216(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR217(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR218(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR219(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR220(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR221(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR222(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR223(struct interrupt_frame* frame); //Start Of extended interrupts
__attribute__((interrupt)) void ISR224(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR225(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR226(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR227(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR228(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR229(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR230(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR231(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR232(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR233(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR234(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR235(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR236(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR237(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR238(struct interrupt_frame* frame);

__attribute__((interrupt)) void ISR239(struct interrupt_frame* frame); //Start Of extended interrupts
__attribute__((interrupt)) void ISR240(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR241(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR242(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR243(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR244(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR245(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR246(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR247(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR248(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR249(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR250(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR251(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR252(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR253(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR254(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR255(struct interrupt_frame* frame);
__attribute__((interrupt)) void ISR256(struct interrupt_frame* frame);



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
        set_idt_gate(0x00,ISR0 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x01,ISR1 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x02,ISR2 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x03,ISR3 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x04,ISR4 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x05,ISR5 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x06,ISR6 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x07,ISR7 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x08,ISR8 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x09,ISR9 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x0A,ISR10 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x0B,ISR11 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x0C,ISR12 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x0E,ISR13 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x0F,ISR14 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x10,ISR15 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x11,ISR16 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x12,ISR17 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x13,ISR18 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x14,ISR19 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x15,ISR20 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x16,ISR21 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x17,ISR22 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x18,ISR23 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x19,ISR24 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x1A,ISR25 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x1B,ISR26 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x1C,ISR27 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x1D,ISR28 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x1E,ISR29 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x1F,ISR30 , KernelCodeSegment, 0, 0);
        set_idt_gate(0x1A,ISR31 , KernelCodeSegment, 0, 0);

        set_idt_gate(0x20, ISR32, KernelCodeSegment, 0, 0);
        set_idt_gate(0x21, ISR33, KernelCodeSegment, 0, 0);
        set_idt_gate(0x22, ISR34, KernelCodeSegment, 0, 0);
        set_idt_gate(0x23, ISR35, KernelCodeSegment, 0, 0);
        set_idt_gate(0x24, ISR36, KernelCodeSegment, 0, 0);
        set_idt_gate(0x25, ISR37, KernelCodeSegment, 0, 0);
        set_idt_gate(0x26, ISR38, KernelCodeSegment, 0, 0);
        set_idt_gate(0x27, ISR39, KernelCodeSegment, 0, 0);
        set_idt_gate(0x28, ISR40, KernelCodeSegment, 0, 0);
        set_idt_gate(0x29, ISR41, KernelCodeSegment, 0, 0);
        set_idt_gate(0x2A, ISR42, KernelCodeSegment, 0, 0);
        set_idt_gate(0x2B, ISR43, KernelCodeSegment, 0, 0);
        set_idt_gate(0x2C, ISR44, KernelCodeSegment, 0, 0);
        set_idt_gate(0x2E, ISR45, KernelCodeSegment, 0, 0);
        set_idt_gate(0x2F, ISR46, KernelCodeSegment, 0, 0);
        set_idt_gate(0x30, ISR47, KernelCodeSegment, 0, 0);
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
