#include <kernel/memmory.h>
#include <string.h>
#include <kernel/interrupts.h>

/* Tyler Grenier 9/22/23 8:21
-- Today we are setting up our 
-- initial paging system were 
-- gonna have an initial paging
-- system that sets everything up
-- and functions to dynamically 
-- set up pages
*/

//TODO make functions to reset
//specific Page Tables




void Reset_All_Pages() {
	// Set all Pages to 0s
	memset(&PML4, 0, sizeof(PageTable));
	memset(&PDPTT, 0, sizeof(PageTable));
	memset(&PDT, 0, sizeof(PageTable));
}


/*
Bit 0 (P) is the Present flag.
Bit 1 (R/W) is the Read/Write flag.
Bit 2 (U/S) is the User/Supervisor flag.
Bit 3 (RSVD) indicates whether a reserved bit was set in some page-structure entry
Bit 4 (I/D) is the Instruction/Data flag (1=instruction fetch, 0=data access)
Bit 5 (PK) indicates a protection-key violation
Bit 6 (SS) indicates a shadow-stack access fault
Bit 15 (SGX) indicates an SGX violaton
*/


void map_page(void *physaddr, void *virtualaddr, unsigned int flags) {

    unsigned long pdindex = (unsigned long)virtualaddr >> 22;
    unsigned long ptindex = (unsigned long)virtualaddr >> 12 & 0x03FF;
 
    unsigned long *pd = (unsigned long *)0xFFFFF000;
    // Here you need to check whether the PD entry is present.
    // When it is not present, you need to create a new empty PT and
    // adjust the PDE accordingly.
 
    unsigned long *pt = ((unsigned long *)0xFFC00000) + (0x400 * pdindex);
    // Here you need to check whether the PT entry is present.
    // When it is, then there is already a mapping present. What do you do now?
 
    pt[ptindex] = ((unsigned long)physaddr) | (flags & 0xFFF) | 0x01; // Present

	// Flush TLB for the specified virtual address
	__asm__ volatile("invlpg (%0)" : : "r"(virtualaddr));
}


void unmap_page(void *physaddr, void *virtualaddr) {
    // Make sure that both addresses are page-aligned.
 
    unsigned long pdindex = (unsigned long)virtualaddr >> 22;
    unsigned long ptindex = (unsigned long)virtualaddr >> 12 & 0x03FF;
 
    unsigned long *pd = (unsigned long *)0xFFFFF000;
    // Here you need to check whether the PD entry is present.
    // When it is not present, you need to create a new empty PT and
    // adjust the PDE accordingly.
 
    unsigned long *pt = ((unsigned long *)0xFFC00000) + (0x400 * pdindex);
    // Here you need to check whether the PT entry is present.
    // When it is, then there is already a mapping present. What do you do now?
 
    pt[ptindex] = 0x00000000;
 
    PageTableDeletion = true;
    
    // Now you need to flush the entry in the TLB
    // or you might not notice the change.
    __asm__ volatile("invlpg (%0)" : : "r"(virtualaddr));
}
