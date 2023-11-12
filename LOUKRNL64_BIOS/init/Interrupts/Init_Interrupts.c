#include <stdlib.h>
#include <kernel/interrupts.h>
#include <kernel/apic.h>
#include <kernel/errors.h>
#include <kernel/pic.h>

LOUSTATUS InitializeMainInterruptHandleing(){
    
    if(InitializeAdvancedProgramableController() != LOUSTATUS_GOOD)LouPanic("Cunstruction Panic",BAD);

    

    return 0;
}


LOUSTATUS InitializeStartupInterruptHandleing(){
    LOUSTATUS loustat = SetBasicInterrupts(true);
   

    PIC_remap(0x20,0x20 + 8);

    UpdateIDT(true);
    Mask_All_Programable_Interrupts();
    LouPrint("Basic Interrupts Setup\n");

    return loustat;
}
