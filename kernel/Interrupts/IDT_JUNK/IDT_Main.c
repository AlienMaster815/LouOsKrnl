#include <kernel/memmory.h>
#include <stdio.h>
#include <kernel/interrupts.h>
#include <stdlib.h>
#include <kernel/gdt.h>
#include <kernel/errors.h>
#include <kernel/kernel.h>


LOUSTATUS set_idt_gate(int num, void (*handler)(), uint16_t selector, uint8_t ist, uint8_t type_attr) {
    

    #ifdef __x86_64__
    uintptr_t base = (uintptr_t)handler;    
        IDT[num].base_low = base & 0xFFFF;
        IDT[num].base_mid = (base >> 16) & 0xFFFF;
        IDT[num].base_high = (base >> 32) & 0xFFFFFFFF;
        IDT[num].selector = selector;
        IDT[num].ist = ist;
        IDT[num].type_attr = 0x8E;//type_attr;
        IDT[num].reserved = 0;
    
        return 0;
    #endif
        
    return 1;
}


void SetPicIDTGate(int index, void (*handler)()) {
    #ifdef __i386__
    uint32_t address = (uint32_t)handler;



    IDT[index].base_low = (uint16_t)(address & 0xFFFF);

    IDT[index].selector = KernelCodeSegment; // Kernel code segment selector

    IDT[index].zero = 0;

    IDT[index].type_attr = 0x8E; // Present (P), Ring 0 (DPL), Interrupt Gate (Type)

    IDT[index].base_high = (uint16_t)((address >> 16) & 0xFFFF);
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
    return 0;
    
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
