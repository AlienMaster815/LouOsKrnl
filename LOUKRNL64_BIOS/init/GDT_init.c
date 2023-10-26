#include <kernel/gdt.h>
#include <limits.h>
#include <kernel/memmory.h>
#include <kernel/errors.h>

GDT* globalGDT;

LOUSTATUS Initialize_Gdt(){
    globalGDT = 0;
    globalGDT = (GDT*)Lou_Alloc_Mem(sizeof(GDT));
    
    if(globalGDT == 0)LouPanic("Could Not Allocate Memory For GDT", BAD);
    
    uint64_t Kernel_base = 0;
    uint64_t Machine_limit = (64 * 64) - 1;
    
    uint64_t User_base = (1 * (1024 * 1024 * 1024)); // The Kernel and systems now Has 1GB of Kernel Only Memory
                             
    Set_Kernel_Segment(CODE,Kernel_base,Machine_limit,globalGDT);
    Set_Kernel_Segment(DATA,Kernel_base,Machine_limit,globalGDT);
    
}

LOUSTATUS Modify_Gdt_Registers(){
    
}

LOUSTATUS Uninitialize_Gdt(){
    
}