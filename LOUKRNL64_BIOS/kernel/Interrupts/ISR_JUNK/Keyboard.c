#include <kernel/interrupts.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <CPUInstructionSet/CPURegisters.h>
#include <kernel/pic.h>

void Keyboard(){
    UnSetInterruptFlags();
    LouPrint("Keyboard Interrupt!!! \n");
    PIC_sendEOI(1);
}
