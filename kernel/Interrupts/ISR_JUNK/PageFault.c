#include <kernel/interrupts.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <CPUInstructionSet/CPURegisters.h>
#include <kernel/pic.h>

static bool MemoryProbing;
static bool PageTableDeletion;

static bool UsingAPIC = false;


void RegisterPageTableDeletion(){
    PageTableDeletion = true;
}

void PageFault(){

    UnSetInterruptFlags();
    
    LouPrint("Page Fault Detected Handleing Now\n");
       
    if(PageTableDeletion){
        PageTableDeletion = false;
        PIC_sendEOI(1);
        return;
    }

    LouPanic("Page Fault Couldent Be Handled",BAD);
    PIC_sendEOI(1);
    
}



