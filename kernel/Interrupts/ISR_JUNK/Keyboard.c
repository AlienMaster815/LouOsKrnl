#include <kernel/interrupts.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <CPUInstructionSet/CPURegisters.h>
#include <kernel/pic.h>
#include <drivers/Lou_drivers/keyboards.h>


#ifdef __i386__
void UnSetInterruptFlags();
extern bool USBKeyboardInterrupt;
#endif


static bool UsingAPIC = false;

void Keyboard(){
    UnSetInterruptFlags();


    if(!USBKeyboardInterrupt)PS2KeyboardHandler();
    if(USBKeyboardInterrupt)USBKeyboardHandler();
    PIC_sendEOI(1);
}
