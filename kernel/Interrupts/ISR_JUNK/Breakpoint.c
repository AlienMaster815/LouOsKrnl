#include <kernel/interrupts.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <CPUInstructionSet/CPURegisters.h>
#include <kernel/pic.h>

static bool UsingAPIC = false;


void BreakPoint(){
    UnSetInterruptFlags();
    PIC_sendEOI(1);

}
