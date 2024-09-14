#include <LouAPI.h>
/* Defined in <Kernel/interrupts.h>
#define PASSIVE_LEVEL 0
#define APC_LEVEL 1
#define DISPATCH_LEVEL 2
#define DIRQL 3
#define CLOCK_LEVEL 13
#define HIGH_LEVEL 15
*/

void ioapic_mask_irq(uint8_t irq);
void ioapic_unmask_irq(uint8_t irq);
bool GetAPICStatus();

static LouKIRQL SystemInterruptLevel = HIGH_LEVEL;

void SetSystemInterrupts(bool Enable){
    if(Enable){
        ioapic_unmask_irq(1);
    }
    else{
        ioapic_mask_irq(1);
    }
}

void SetAllInterrupts(bool Enable){
    if(Enable){
        SetInterruptFlags();
        SetSystemInterrupts(true);
    }
    else {
        UnSetInterruptFlags();
        SetSystemInterrupts(false);
    }
}


void LouKeSetIrql(
    LouKIRQL  NewIrql,
    LouKIRQL* OldIrql
){
    if(GetAPICStatus()){
        if(OldIrql != 0x00){//0x00 is null in this system and is excplicitly checked for sanity
            *OldIrql = SystemInterruptLevel; // save the old irql1
        }
        //TODO: Once User Mode Gets hacked up a bit will implement user things and drivers when drivers are hacked up

        switch (NewIrql){
            case PASSIVE_LEVEL:{
                SystemInterruptLevel = PASSIVE_LEVEL;
                SetAllInterrupts(true);
                return;
            }
            case APC_LEVEL:{
                
                return;
            }
            case DISPATCH_LEVEL:{

                return;
            }
            case DIRQL:{

                return;
            } 
            case CLOCK_LEVEL:{

                return;
            }
            case HIGH_LEVEL:{
                SystemInterruptLevel = HIGH_LEVEL;
                SetSystemInterrupts(false);
            }
            default: // error case
                return;
        }
    }
}

void KeRaiseIrql( // for wdk compatibility
    LouKIRQL DispatchLevel, 
    LouKIRQL* OldIrql
){
    LouKeSetIrql(DispatchLevel, OldIrql);
}

void KeLowerIrql(LouKIRQL DispatchLevel){//For WDK Compatibility
    LouKeSetIrql(DispatchLevel, 0x00);
}