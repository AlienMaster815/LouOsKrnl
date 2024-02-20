#ifndef _MEMMORY_H
#define _MEMMORY_H

// Tyler Grenier 9/21/23 9:38 PM
// added Section 1:1 RAM ADDRESS

#include <stat.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <bootloader/grub/multiboot.h>

// Section 1:1 RAM ADDRESS
#define MAXMEM 0xFFFFFFFFFFFFFFFFULL
#define RAMADD unsigned char*
#define RAMADDDATA unsigned char *
#define BLOCK 4096
#define SIZE unsigned long long

RAMADD Lou_Alloc_Mem(SIZE size);
STATUS Lou_Free_Mem(RAMADD Addr, SIZE size);
void* Lou_Calloc_Mem(size_t numElements, size_t sizeOfElement);
#ifdef __x86_64__
typedef struct {
	uint64_t entry; //this defines out memory that is mapped down the road
}__attribute__((packed)) PageTableEntry;
#endif

#ifdef __i386__
#include <stdint.h>

typedef struct {
    uint32_t present : 1;  // Page present in memory
    uint32_t rw : 1;       // Read/write access
    uint32_t user : 1;     // User/supervisor mode
    uint32_t accessed : 1; // Page accessed since last refresh
    uint32_t dirty : 1;    // Page written to since last refresh
    uint32_t unused : 7;   // Unused and available for software use
    uint32_t frame : 20;   // Frame address (physical address of the page frame)
} __attribute__((packed)) PageTableEntry;

#endif

#define MachineMemoryBase 0 

#define PAGE_SIZE_BYTES 4096  // 4KB page size
#define PAGE_TABLE_SIZE_ENTRIES 1024 // 1GB page table size (1GB / 4KB = 262144 entries)

// Define the page table entry structure



VOID init_paging();



void* memset(void* dest, int value, size_t count);
uint64_t Parse_Mem_Map(multiboot_info_t* mbi);

void* align_memory(void* ptr, size_t alignment);

void Reset_All_Pages();

void* get_physaddr(void* virtualaddr);

#endif
