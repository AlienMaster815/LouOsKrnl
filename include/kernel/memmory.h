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
    PageTable PML3[512];
    PageTable PML2[512];
    PageTable PML1;
}PML;



void LouMapAddress(uint64_t PAddress, uint64_t FLAGS);
//Directory Entry FLAGS

//2mb Entry
#define PRESENT                      0b1
#define WRITEABLE                   0b10
#define USERABLE                   0b100
#define ISPWT                     0b1000
#define ISPCD                    0b10000
#define ACCESSBIT               0b100000
#define DIRTY                  0b1000000
#define ISPST                 0b10000000
#define ISGLOBAL             0b100000000
#define ISAVL1B1            0b1000000000
#define ISAVL1B2           0b10000000000
#define ISAVL1B3          0b100000000000
#define ISPAT            0b1000000000000

#define NOTEXECUTE 0b1000000000000000000000000000000000000000000000000000000000000000

//endof Paging Stubs


void* memset(void* dest, int value, size_t count);

void* align_memory(void* ptr, size_t alignment);


// Initialize a page table



#endif
