#include <bootloader/grub/multiboot.h>
#include <stdint.h>
#include <kernel/memmory.h>
#include <stdio.h>
#include <kernel/interrupts.h>

// This Will Probe Memory For Our Limit But This Will Only Be Good For Real Hardware
// Once We Probe RSDP We Will See If The System Is A virtual Machine And If So We
// Will Do VirtualBox Specific Tasks To initialize

uint64_t ProbeForMemoryLimit(){
    MemoryProbing = true;
    uint8_t* i = 0;
    while(MemoryProbing){
        // Write A Simple Read Memory Algorithim
        uint8_t Data = *i;
        i++;
    }
    LouPrint("Found Memmory Limit\n");
    return (uint64_t)(i + 7);
}
