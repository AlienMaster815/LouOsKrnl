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


#ifdef __x86_64__
LOUSTATUS set_idt_gate(int num, void (*handler)(), uint16_t selector, uint8_t ist, uint8_t type_attr) {
    

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
            
    
        //Right Now We Dont have an ist or api information and we are using legacy pic 

        result = set_idt_gate(0x00,&DivideByZero,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        if(result != 0) return 1;
        result = set_idt_gate(0x01,&DebugException,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        if(result != 0) return 1;
        result = set_idt_gate(0x02,&NMI,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        if(result != 0) return 1;        
        result = set_idt_gate(0x03,&BreakPoint,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        if(result != 0) return 1;
        result = set_idt_gate(0x04,&OverFlow,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        if(result != 0) return 1;
        result = set_idt_gate(0x05,&BoundCheck,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        if(result != 0) return 1;
        result = set_idt_gate(0x06,&InvalidOpcode,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        if(result != 0) return 1;
        result = set_idt_gate(0x07,&FPUNoDev,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        if(result != 0) return 1;
        result = set_idt_gate(0x08,&DoubleFault,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        if(result != 0) return 1;
        result = set_idt_gate(0x20,&CLOCK,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        if(result != 0) return 1;
        result = set_idt_gate(0x21,&Keyboard,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        if(result != 0) return 1;
        result = set_idt_gate(0x0E,&PageFault,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        if(result != 0) return 1;
        result = set_idt_gate(0x0D,&GeneralProtectionFault,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        if(result != 0) return 1;
        return 0;
    }
    else{
        //TODO: Finish Apic Interrupts when We Get That Far
        //set_idt_gate(0x00,(uint64_t)&DivideByZero,KernelCodeSegment,0 , Present + HighestPrivledge + INTERRUPT_GATE);
        return 0;
    }
    #endif
    #ifdef __i386__
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
