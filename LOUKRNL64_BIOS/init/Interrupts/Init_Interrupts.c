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
    UpdateIDT(true);
    
    return loustat;
}
