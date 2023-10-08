#include <kernel/memmory.h>
#include <string.h>

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




void update_page_table_entry(PageTableEntry* entry, uint64_t phys_addr, int present, int writable, uint64_t virtual_address) {
	entry->entry = 0;
	entry->entry |= (phys_addr & 0x000FFFFFFFFFF000ULL); // Physical address bits
	entry->entry |= (present ? 1ULL : 0ULL) << 0;        // Present bit (bit 0)
	entry->entry |= (writable ? 1ULL : 0ULL) << 1;       // Read/Write bit (bit 1)
	// Add other attributes as needed (e.g., User/Supervisor, Access, etc.)

	uint64_t* PML4P = (uint64_t*)&PML4;

	// Reload CR3
	uint64_t cr3_value = (uint64_t)PML4P;
	__asm__ volatile("mov %0, %%cr3" : : "r"(cr3_value));

	// Flush TLB for the specified virtual address
	__asm__ volatile("invlpg (%0)" : : "r"(virtual_address));
}


