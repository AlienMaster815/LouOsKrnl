#include <kernel/interrupts.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <CPUInstructionSet/CPURegisters.h>
#include <kernel/pic.h>


#ifdef __i386__
void UnSetInterruptFlags();
#endif

static bool UsingAPIC = false;

void GeneralProtectionFault(){
    UnSetInterruptFlags();
    
    LouPanic("General Protection Fault Detected", BAD);

}
