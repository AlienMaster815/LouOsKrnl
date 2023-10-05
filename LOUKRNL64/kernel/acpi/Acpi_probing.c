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
-- this one piece of hardware has been
-- a pain in my ass for three days now
-- i have a few words for the incel that
-- designed this shit and they aint good
-- the memory addresses are scattered
-- the posibilities are endles of addresses
-- this whole thing is fubar because i dont
-- know if its my compiler or if im doing 
-- somthing wrong because GUESS WHAT!!!!!
-- there isnt a fucking Piece of usefull 
-- documentation that helps me debug this 
-- in the way i need it too this one piece 
-- of hardware made me create a FUCKING BSOD
-- so that i have a gooc crash system thats 
-- readable... anyways im gonna clean some 
-- stuff up because im hopefull tomorrow i can
-- see some progress... 
*/

/*
-- Tyler Grenier 9/26/23 4:18 AM
-- The Problem Was A Compiler Error, Da Fuck.
-- the problem was alignment so im going to
-- leave this alone dont fix whats not broken
-- im going to parse this now i dont want to 
-- look at this anymore...
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

        if (((uintptr_t)rsdp_ptr & 0xF) == 0) {

            // Check the RSDP signature
            if (memcmp(rsdp_ptr->signature, "RSD PTR ", 8) == 0) {
                // Checksum and version check
                if (((uintptr_t)rsdp_ptr & 0xF) == 0) {
                    LouPrint("", rsdp_ptr->signature); // NOBODY TOUCH THIS ITS A COMPILER GLITCH
                                                       // THAT SCREWS UP MEMORY ACCESS
                    return rsdp_ptr;
                }
                
            }
        }
    }

    // RSDP not found in the specified range
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