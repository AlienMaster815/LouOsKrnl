/*=====================================================================================================================================
 --                                                                                                                                  --
 --                                            Tyler Grenier 10/28/23 11:04 PM                                                       --
 --                                                                                                                                  --
 --                                                       ISR_Main.C                                                                 --
 --                                                                                                                                  --
 ====================================================================================================================================*/

#include <kernel/interrupts.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <CPUInstructionSet/CPURegisters.h>


/*
-- This File Will hold our systems main interrupt Sevice Routines so this should bi interesting We Will Start by defineing
-- necissary For Operating Sytems to operate in a safe way but interrupts are Fucking pains in the ass and we will probably
-- fight with this shit for a few days...
*/

//0x0E
void PageFault(){
    uint64_t RSP = get_rsp();
    
    if(PageTableDeletion) return;
    if(MemoryProbing) return;
    
    LouPanic("Page Fault Detected",BAD);
}

//0x08
void DoubleFault(){
    uint64_t RSP = get_rsp();

    LouPanic("Double Fault Detected",BAD);
    
}

//0x0D
void GeneralProtectionFault(){
    uint64_t RSP = get_rsp();

    if(PageTableDeletion) return;
    if(MemoryProbing) return;
    
    LouPanic("General Protection Fault Detected", BAD);
    
}

//0x00
void DivideByZero(){
    uint64_t RSP = get_rsp();

}
//0x01
void DebugException(){
    uint64_t RSP = get_rsp();

}

//0x02

void NMI(){
    uint64_t RSP = get_rsp();

}

//0x03
void BreakPoint(){
    uint64_t RSP = get_rsp();

}

//0x04
void OverFlow(){
    uint64_t RSP = get_rsp();

}

//0x05
void BoundCheck(){
    uint64_t RSP = get_rsp();

}

//0x06
void InvalidOpcode(){
    uint64_t RSP = get_rsp();

}

//0x07
void FPUNoDev(){
    uint64_t RSP = get_rsp();

}

//0x20
void CLOCK(){
    uint64_t RSP = get_rsp();

}

//0x21

void Keyboard(){
    uint64_t RSP = get_rsp();

}
