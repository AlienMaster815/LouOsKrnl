#include <kernel/interrupts.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <CPUInstructionSet/CPURegisters.h>

void PageFault(){
    //uint64_t RSP = get_rsp();

    if(PageTableDeletion) return;
    if(MemoryProbing) return;

    LouPanic("Page Fault Detected",BAD);
}
