#include <kernel/interrupts.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <CPUInstructionSet/CPURegisters.h>
#include <kernel/pic.h>
#include <drivers/Lou_drivers/keyboards.h>

void Keyboard(){
    UnSetInterruptFlags();
    if(!USBKeyboardInterrupt)PS2KeyboardHandler();
    if(USBKeyboardInterrupt)USBKeyboardHandler();
    PIC_sendEOI(1);
}
