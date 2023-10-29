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

/*
-- This File Will hold our systems main interrupt Sevice Routines so this should bi interesting We Will Start by defineing
-- necissary For Operating Sytems to operate in a safe way but interrupts are Fucking pains in the ass and we will probably
-- fight with this shit for a few days...
*/

//0x0E
void PageFault(){
    
    if(PageTableDeletion) return;
    
    LouPanic("Page Fault Detected",BAD);
}

//0x08
void DoubleFault(){
    
    LouPanic("Double Fault Detected",BAD);
    
}

//0x0D
void GeneralProtectionFault(){
    
    LouPanic("General Protection Fault Detected", BAD);
    
}

//0x00
void DivideByZero(){
    
}
//0x01
void DebugException(){

}

//0x02

void NMI(){

}

//0x03
void BreakPoint(){
    
}

//0x04
void OverFlow(){
    
}

//0x05
void BoundCheck(){
    
}

//0x06
void InvalidOpcode(){
    
}

//0x07
void FPUNoDev(){
    
}

//0x20
void CLOCK(){
    
}

//0x21

void Keyboard(){
    
}
