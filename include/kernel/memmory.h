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

#define GIGABYTE 0x40000000
#define MEGABYTE 0x100000

#define PAGE_TABLE_ALLIGNMENT 4096

RAMADD Lou_Alloc_Mem(SIZE size);
STATUS Lou_Free_Mem(RAMADD Addr, SIZE size);
void* Lou_Calloc_Mem(size_t numElements, size_t sizeOfElement);
RAMADD Lou_Alloc_Mem_Alligned(SIZE size,uint64_t allignment);


#include <stdint.h>

#define MachineMemoryBase 0 


//Paging Stub

typedef struct  __attribute__((packed, aligned(4096))) _PageTable {
    uint64_t entries[512];
} PageTable;

typedef struct __attribute__((packed, aligned(4096))) _PML {
    PageTable PML4;
    PageTable PML3[2];
    PageTable PML2[512];
    PageTable PML1;
}PML;

PML* page_table_l4;

void LouMapAddress(uint64_t PAddress,uint64_t VAddress, uint64_t FLAGS);
void LouUnMapAddress(uint64_t VAddress);
uint64_t GetPageOfFaultValue(uint64_t VAddress);
extern uint64_t GetPageValue(uint64_t PAddress, uint64_t FLAGS);


//Directory Entry FLAGS

//2mb Entry
#define KERNEL_PAGE_WRITE_PRESENT 0b10000011

typedef uint64_t pde_t; // Page Directory Entry
typedef uint64_t pte_t; // Page Table Entry

//endof Paging Stubs


void* memset(void* dest, int value, size_t count);

void* align_memory(void* ptr, size_t alignment);


// Initialize a page table



#endif
