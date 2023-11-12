#include <kernel/interrupts.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <CPUInstructionSet/CPURegisters.h>

void BreakPoint(){
    uint64_t RSP = get_rsp();

}
