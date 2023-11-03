#include <kernel/memoryprobing.h>


RSDP* Find_RSDP() {
    RSDP* pointer;
    pointer = PROBE_RSDP(0x00000000, 0x0000E000);
    if (pointer != NULL) return pointer;
    pointer = PROBE_RSDP(0x0000E000, 0x000FFFFF);
    if (pointer != NULL) return pointer;
    pointer = PROBE_RSDP(0x000A0000, 0x000FFFFF);
    if (pointer != NULL) return pointer;
    
    // TODO: Later We Will Parse The Multiboot Structure to find out
    // if the 64 bit system has more or less than 4gb of ram intalled
    // wich will help us find our search locations
    
    LouPanic("RSDP NOT FOUND",BAD);
    return 0;
}

//handle our acpi tasks
VOID HANDLE_ACPI() {
    RSDP* rsdp = Find_RSDP();
    STATUS ACPI_VALID = ACPI_PARSE(rsdp);
    if(ACPI_VALID == BAD)LouPanic("No Valid ACPI Found\n",BAD);
    else return; // here for a bug, Compiler Be Fucky;
}
