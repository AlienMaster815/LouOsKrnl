#include <kernel/interrupts.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <CPUInstructionSet/CPURegisters.h>

void GeneralProtectionFault(){
    //uint64_t RSP = get_rsp();

    if(PageTableDeletion) return;
    if(MemoryProbing) return;

    LouPanic("General Protection Fault Detected", BAD);

}
