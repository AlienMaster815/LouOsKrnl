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
#define MAXMEM 0xFFFFFFFFFFFFFFFF
#define RAMADD unsigned char*
#define RAMADDDATA unsigned char *
#define BLOCK 4096
#define SIZE unsigned long long

RAMADD Lou_Alloc_Mem(SIZE size);
STATUS Lou_Free_Mem(RAMADD Addr, SIZE size);

typedef struct {
	uint64_t entry; //this defines out memory that is mapped down the road
}__attribute__((packed)) PageTableEntry;


typedef struct {
	PageTableEntry entries[512]; 
}__attribute__((packed)) PageTable;;



static PageTable PML4;
static PageTable PDPTT;
static PageTable PDT;



VOID init_paging();
STATUS DEL_PAGE_ENTRY(uint64_t entry,char *table);
STATUS ADD_PAGE_ENTRY(uint64_t entry,char *table);
void* memset(void* dest, int value, size_t count);
void setup_page_tables();
uint64_t Parse_Mem_Map(multiboot_info_t* mbi);

void* align_memory(void* ptr, size_t alignment);

void Reset_All_Pages();

#endif