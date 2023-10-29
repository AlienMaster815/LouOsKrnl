#include <stdlib.h>
#include <kernel/interrupts.h>
#include <kernel/apic.h>

LOUSTATUS Initialize_Interrupts(){
    
    
    
    SetBasicInterrupts();

    return 0;
}
