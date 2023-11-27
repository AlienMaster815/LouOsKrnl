#include <kernel/gdt.h>
#include <limits.h>
#include <kernel/memmory.h>
#include <kernel/errors.h>
#include <stdio.h>

GDT* globalGDT;

LOUSTATUS Initialize_Gdt(){
    LOUSTATUS stat;
    LouPrint("Initializing GDT\n");
    globalGDT = 0;
    globalGDT = (GDT*)Lou_Alloc_Mem(sizeof(GDT));
    
    if(globalGDT == 0)LouPanic("Could Not Allocate Memory For GDT\n", BAD);
    
    uint64_t Kernel_base = 0;
    uint64_t Machine_limit = (64 * 64) - 1;
    
    uint64_t User_base = (1 * (1024 * 1024 * 1024)); // The Kernel and systems now Has 1GB of Kernel Only Memory
                             
    if(Set_Kernel_Segment(CODE,Kernel_base,Machine_limit,globalGDT) != 0) LouPanic("Error Setting Kernel Code Segment",BAD);
    if(Set_Kernel_Segment(DATA,Kernel_base,Machine_limit,globalGDT) != 0) LouPanic("Error Setting Kernel Data Segment",BAD);
    
    
    
    if(Load_Gdt(globalGDT) != 0)LouPanic("Error Loading GDT\n",BAD);
    
    
    LouPrint("GDT Initialized\n");
    
    return 0;
}

LOUSTATUS Modify_Gdt_Registers(){
    
    return 0;
    
}

LOUSTATUS Uninitialize_Gdt(){
    Lou_Free_Mem((RAMADD)globalGDT, sizeof(GDT));
    return 0;
}
