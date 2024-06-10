#ifndef _MEMMORY_H
#define _MEMMORY_H

// Tyler Grenier 9/21/23 9:38 PM
// added Section 1:1 RAM ADDRESS

#include <stat.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <bootloader/grub/multiboot.h>


#define KILOBYTE_PAGE 4096
#define MEGABYTE_PAGE 2 * 1024 * 1024
#define KILOBYTE 1 * 1024

#define PRESENT_PAGE           0b1
#define WRITEABLE_PAGE        0b10
#define KERNEL_PAGE          0b100
#define WRITE_THROUGH_PAGE  0b1000
#define CACHE_DISABLED_PAGE 0b10000

#define PAGE_PRESENT        (1 << 0)
#define PAGE_WRITE          (1 << 1)
#define PAGE_USER           (1 << 2)
#define PAGE_PWT            (1 << 3)
#define PAGE_PCD            (1 << 4)
#define END_PAGE            (1 << 4)

#ifndef __cplusplus
// Section 1:1 RAM ADDRESS
#define MAXMEM 0xFFFFFFFFFFFFFFFFULL
#define RAMADD unsigned char*
#define RAMADDDATA unsigned char *
#define BLOCK 4096
#define SIZE unsigned long long

// Constants for gigabyte and megabyte sizes
#define GIGABYTE (1ULL << 30)  // 1 GB in bytes
#define MEGABYTE (1ULL << 20)  // 1 MB in bytes
#define KILOBYTE 1 * 1024

#define PAGE_TABLE_ALLIGNMENT 4096
#define PAGE_SIZE 4096

#define FLAGSSPACE 0x1FF

#include <LouAPI.h>

extern void Write16BitValueToAddress(uint64_t Address, uint16_t Value);
extern uint16_t Get16BitValueFromAddress(uint64_t Address);
extern void Write8BitValueToAddress(uint64_t Address, uint8_t Value);
extern uint8_t Get8BitValueFromAddress(uint64_t Address);
extern void Write32BitValueFromAddress(uint64_t Address, uint32_t Value);
extern uint32_t Get32BitValueFromAddress(uint64_t Address);
extern void Write64BitValueToAddress(uint64_t Address, uint64_t Value);
extern uint64_t Get64BitValueFromAddress(uint64_t Address);

RAMADD Lou_Alloc_Mem(SIZE size);
STATUS Lou_Free_Mem(RAMADD Addr, SIZE size);
void* Lou_Calloc_Mem(size_t numElements, size_t sizeOfElement);
RAMADD Lou_Alloc_Mem_Alligned(SIZE size,uint64_t allignment);
void* LouMalloc(size_t BytesToAllocate);
void LouFree(RAMADD Addr, SIZE size);
void* LouMalloc(size_t BytesToAllocate);
void* LouMallocEx(size_t BytesToAllocate, size_t Aligned);

#include <stdint.h>

#define MachineMemoryBase 0 
#define Pack (__attribute__((packed)))

//Paging Stub

typedef struct  __attribute__((packed, aligned(4096))) _PageTable {
    uint64_t entries[512];
} PageTable;

typedef struct __attribute__((packed, aligned(4096))) _PML {
    PageTable PML4;
    PageTable PML3;
    PageTable PML2;
    PageTable PML1;
}PML;

PML* page_table_l4;

bool LouMapAddress(uint64_t PAddress, uint64_t VAddress, uint64_t FLAGS, uint64_t PageSize);
bool LouUnMapAddress(uint64_t VAddress);
uint64_t GetPageOfFaultValue(uint64_t VAddress);
extern uint64_t GetPageValue(uint64_t PAddress, uint64_t FLAGS);
uint64_t GetRamSize();

//Directory Entry FLAGS

//2mb Entry
#define KERNEL_PAGE_WRITE_PRESENT 0b10000011
#define KERNEL_PAGE_WRITE_UNCAHEABLE_PRESENT 0b10010011


typedef uint64_t pde_t; // Page Directory Entry
typedef uint64_t pte_t; // Page Table Entry

//endof Paging Stubs


void* memset(void* dest, int value, size_t count);

void* align_memory(void* ptr, size_t alignment);


// Initialize a page table
#else
#include <LouDDK.h>


#define GIGABYTE 0x40000000
#define MEGABYTE 0x100000
#define KILOBYTE 1 * 1024

#define KERNEL_PAGE_WRITE_PRESENT 0b10000011
#define KERNEL_PAGE_WRITE_UNCAHEABLE_PRESENT 0b10010011


KERNEL_IMPORT bool LouMapAddress(uint64_t PAddress, uint64_t VAddress, uint64_t FLAGS, uint64_t PageSize);
KERNEL_IMPORT void remove_padding(const void* struct_ptr, size_t struct_size, uint8_t* buffer);
KERNEL_IMPORT void LouFree(uint8_t* Addr, uint32_t size);
KERNEL_IMPORT void* LouMalloc(size_t BytesToAllocate);
KERNEL_IMPORT LOUSTATUS LouKeMapIO(uint64_t PADDRESS, uint64_t MemoryBuffer, uint64_t FLAGS);
KERNEL_IMPORT bool LouMapAddressEx(uint64_t PAddress, uint64_t VAddress, uint64_t FLAGS, uint64_t PageSize);
KERNEL_IMPORT void* LouMallocEx(size_t BytesToAllocate, size_t Aligned);
KERNEL_IMPORT void* memset(void* dest, int value, size_t count);

#endif
#endif
