#include <kernel/acpi.h>
#include <string.h>
#include <kernel/memmory.h>
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <stat.h>
/*
-- Tyler Grenier 9/26/23 12:00 AM 

*/

/*
-- Tyler Grenier 9/26/23 4:18 AM

*/

int isChecksumValid(RSDP* rsdp);


RSDP* align_rsdp(RSDP* rsdp, size_t alignment) {
    return (RSDP*)align_memory(rsdp, alignment);
}

char flag[8] = "RSD PTR ";


RSDP* PROBE_RSDP(uintptr_t memory_base, uintptr_t memory_limit) {
    

    
    // Ensure memory_limit is at least 16 bytes aligned
    memory_base &= ~0xF;

    // Size of the RSDP structure



    // Search the specified memory range for the RSDP
    for (RSDP* rsdp_ptr = (RSDP*)memory_base; (uintptr_t)rsdp_ptr < memory_limit; rsdp_ptr++) {
        // check if the adress is within system memory limits
        // because the compiler dosent like to compare diferen
        // types we will have to turn both values to somthing sane
        if ((uintptr_t)(rsdp_ptr + sizeof(RSDP)) > 0) return NULL;
        else if (((uintptr_t)rsdp_ptr & 0xF) == 0) {

            // Check the RSDP signature
            if (memcmp(rsdp_ptr->signature, "RSD PTR ", 8) == 0) {
                // Checksum and version check
                if (((uintptr_t)rsdp_ptr & 0xF) == 0) {
                    return rsdp_ptr;
                }
                
            }
        }
    }

    // RSDP not found in the specified range
    // System Will BlueScreen
    return NULL;
}

int isChecksumValid(RSDP* rsdp) {
    uint8_t* bytes = (uint8_t*)rsdp;
    size_t rsdpSize = sizeof(RSDP);
    uint8_t sum = 0;

    // Calculate the checksum (including the checksum field)
    for (size_t i = 0; i < rsdpSize; i++) {
        sum += bytes[i];
    }

    // Take the two's complement of the least significant byte
    sum = (uint8_t)(-sum);

    // Compare the calculated checksum with the stored checksum
    return (sum == rsdp->checksum);
}
