#include <kernel/interrupts.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <CPUInstructionSet/CPURegisters.h>
#include <kernel/pic.h>

void CLOCK(){
    UnSetInterruptFlags();
    PIC_sendEOI(1);
}