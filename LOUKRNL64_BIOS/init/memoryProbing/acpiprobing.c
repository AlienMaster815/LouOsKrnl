/*
-- Tyler Grenier 11/3/23 10:40 PM
-- This is a file in a directory i created yesterday to hold memory probing initialization
-- All We are doing in this file is Making the code that was in the kernel init main
-- moving it to make it more readable
*/

#include <kernel/memoryprobing.h>


RSDP* Find_RSDP() {
    RSDP* pointer;
    
    //Probe Common RSDP Spaces
    pointer = PROBE_RSDP(0x00000000, 0x0000E000);
    if (pointer != NULL) return pointer;
    pointer = PROBE_RSDP(0x0000E000, 0x000FFFFF);
    if (pointer != NULL) return pointer;
    pointer = PROBE_RSDP(0x000A0000, 0x000FFFFF);
    if (pointer != NULL) return pointer;
    
    // If above Fails Probe All Of 32 Bit space available
    // i say available because some machines are do not have 4GB
    // even though they are 64 bit machines
    
    pointer = PROBE_RSDP(MachineMemoryBase,ProtectedModeMemoryMapLimit);
    
    
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
