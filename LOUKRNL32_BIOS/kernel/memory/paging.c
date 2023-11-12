#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <kernel/interrupts.h>
#include <kernel/memmory.h>

// TODO: Define the PageTable and other necessary structures

void Reset_All_Pages() {
    // Set all Pages to 0s
    memset((void*)&PML4, 0, sizeof(PageTable));  // Assuming PageTable is defined somewhere
    memset((void*)&PDPTT, 0, sizeof(PageTable));
    memset((void*)&PDT, 0, sizeof(PageTable));
}

/*
Bit 0 (P) is the Present flag.
Bit 1 (R/W) is the Read/Write flag.
Bit 2 (U/S) is the User/Supervisor flag.
Bit 3 (RSVD) indicates whether a reserved bit was set in some page-structure entry
Bit 4 (I/D) is the Instruction/Data flag (1=instruction fetch, 0=data access)
Bit 5 (PK) indicates a protection-key violation
Bit 6 (SS) indicates a shadow-stack access fault
Bit 15 (SGX) indicates an SGX violation
*/

void map_page(void *physaddr, void *virtualaddr, unsigned int flags) {
    // Adjust these constants based on your system's memory layout
    unsigned long *pd = (unsigned long *)0xFFFFF000;
    unsigned long *pt = (unsigned long *)0xFFC00000;

    unsigned long pdindex = (uintptr_t)virtualaddr >> 22;
    unsigned long ptindex = (uintptr_t)virtualaddr >> 12 & 0x03FF;

    // Check whether the PD entry is present
    if (!(pd[pdindex] & 0x1)) {
        // Create a new empty PT and adjust the PDE accordingly
        // TODO: Implement this part
    }

    // Check whether the PT entry is present
    if (!(pt[ptindex] & 0x1)) {
        // Handle the case when the mapping is already present
        // TODO: Implement this part
    }

    pt[ptindex] = ((uintptr_t)physaddr) | (flags & 0xFFF) | 0x1; // Present

    // Flush TLB for the specified virtual address
    __asm__ volatile("invlpg (%0)" : : "r"(virtualaddr));
}

void unmap_page(void *physaddr, void *virtualaddr) {
    // Adjust these constants based on your system's memory layout
    unsigned long *pd = (unsigned long *)0xFFFFF000;
    unsigned long *pt = (unsigned long *)0xFFC00000;

    unsigned long pdindex = (uintptr_t)virtualaddr >> 22;
    unsigned long ptindex = (uintptr_t)virtualaddr >> 12 & 0x03FF;

    // Check whether the PD entry is present
    if (!(pd[pdindex] & 0x1)) {
        // Handle the case when the PD entry is not present
        // TODO: Implement this part
    }

    // Check whether the PT entry is present
    if (!(pt[ptindex] & 0x1)) {
        // Handle the case when the PT entry is not present
        // TODO: Implement this part
    }

    pt[ptindex] = 0x00000000;

    // Now you need to flush the entry in the TLB
    // or you might not notice the change.
    __asm__ volatile("invlpg (%0)" : : "r"(virtualaddr));
}

