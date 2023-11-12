/*
-- Tyler Grenier 11/3/23 10:40 PM
-- This is a file in a directory i created yesterday to hold memory probing initialization
-- All We are doing in this file is Making the code that was in the kernel init main
-- moving it to make it more readable
*/

#include <kernel/memoryprobing.h>


RSDP* Find_RSDP() {
    RSDP* pointer;
    

    // GET RSDP
    pointer = PROBE_RSDP(MachineMemoryBase,0);
    
    
    // if we are here executing code there is no
    // rsdp and the system is not supported by the kernel
    
    LouPanic("RSDP NOT FOUND",BAD);
    return 0;
}

//handle our acpi tasks
VOID HANDLE_ACPI() {
    RSDP* rsdp = Find_RSDP();
    if(!ACPI_PARSE(rsdp))LouPanic("No Valid ACPI Found\n",BAD);
    else return; // here for a bug, Compiler Be Fucky;
}
