#include <kernel/interrupts.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <CPUInstructionSet/CPURegisters.h>
#include <kernel/pic.h>

void DivideByZero(){
    UnSetInterruptFlags();
    PIC_sendEOI(1);

}