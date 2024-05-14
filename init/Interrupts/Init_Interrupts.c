#include <stdlib.h>
#include <kernel/interrupts.h>
#include <kernel/apic.h>
#include <kernel/errors.h>
#include <kernel/pic.h>

LOUSTATUS InitApicSystems();

LOUSTATUS InitializeMainInterruptHandleing(){
    
    //if(InitializeAdvancedProgramableController() != LOUSTATUS_GOOD)LouPanic("Cunstruction Panic",BAD);

    LOUSTATUS Status = !LOUSTATUS_GOOD;

    Status = InitApicSystems();

    return Status;
}

void InvalidOpcode();
void DoubleFault();
void GPF();
void PageFault();
void TimerHandler();

LOUSTATUS InitializeStartupInterruptHandleing(){
    
    if(SetBasicInterrupts(true) != LOUSTATUS_GOOD)LouPanic("Error Setting Basic Interrupts",BAD);

    PIC_remap(0x20,0x20 + 8);

    UpdateIDT(true);
    Mask_All_Programable_Interrupts();
    LouPrint("Basic Interrupts Setup\n");
    
    IRQ_Pic_clear_mask(1);

    return 0;
}
