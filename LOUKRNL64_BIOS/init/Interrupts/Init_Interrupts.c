#include <stdlib.h>
#include <kernel/interrupts.h>
#include <kernel/apic.h>
#include <kernel/errors.h>

LOUSTATUS InitializeInterruptHandleing(){
    
    if(InitializeAdvancedProgramableController() != LOUSTATUS_GOOD)LouPanic("Cunstruction Panic",BAD);

    

    return 0;
}
