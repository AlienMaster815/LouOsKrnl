#include <kernel/interrupts.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <CPUInstructionSet/CPURegisters.h>
#include <kernel/pic.h>

bool MemoryProbing;
bool PageTableDeletion;


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



