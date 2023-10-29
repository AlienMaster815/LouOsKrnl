#include <stdlib.h>
#include <kernel/interrupts.h>

LOUSTATUS Initialize_Interrupts(){
    
    SetBasicInterrupts();

    return 0;
}
