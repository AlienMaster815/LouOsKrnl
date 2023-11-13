#include <kernel/interrupts.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <CPUInstructionSet/CPURegisters.h>
#include <kernel/pic.h>

void PageFault(){
    UnSetInterruptFlags();
    
    if(PageTableDeletion){
        PageTableDeletion = false;
        PIC_sendEOI(1);
        return;
    }
    if(MemoryProbing){
        MemoryProbing = false;
        PIC_sendEOI(1);
        return;
    }
    LouPanic("Page Fault Detected",BAD);
    PIC_sendEOI(1);

}
