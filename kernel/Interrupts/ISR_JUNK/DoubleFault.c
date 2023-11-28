#include <kernel/interrupts.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <CPUInstructionSet/CPURegisters.h>
#include <kernel/pic.h>


#ifdef __i386__
void UnSetInterruptFlags();
#endif

static bool UsingAPIC = false;

void DoubleFault(){
    UnSetInterruptFlags();
    LouPanic("Double Fault Detected",BAD);
    PIC_sendEOI(1);

}
