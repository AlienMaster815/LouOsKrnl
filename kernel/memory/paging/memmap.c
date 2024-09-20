#include <LouAPI.h>
#include "PageDefinitions.h"
#include <stdint.h>

#define StartMap (10ULL * MEGABYTE)

uint64_t GetCr3() {
    uint64_t cr3_value;
    __asm__ volatile ("mov %%cr3, %0" : "=r" (cr3_value));
    return cr3_value;
}

PML* GetPageBase() {
    return (PML*)(GetCr3() & 0x000FFFFFFFFFF000ULL);
}

static inline void PageFlush(uint64_t addr) {
    asm volatile("invlpg (%0)" ::"r" (addr) : "memory");
    asm("mfence");
}



// Utility functions used in LouMapAddress
void InitializePageTable(uint64_t* PageTable) {
    memset((void*)PageTable, 0, sizeof(uint64_t) * 512);
}

void InitializePageTableWithIndex(uint64_t* PageTable, uint64_t StartIndex, uint64_t PageSize) {
    static uint64_t Tmp;
    for (uint16_t i = 0; i < 512; i++) {
        Tmp =  PageTable[i];
        PageTable[i] = GetPageValue(StartIndex, 0b11);
        StartIndex += PageSize;
        if(Tmp != 0x00){
            PageFlush(Tmp);
        }
    }
}

#define PAGE_TABLE_ALIGNMENT 4096
#define nullptr 0x00

static inline 
void InitializeKilobytePage(
    uint64_t* PagePointer, 
    uint64_t Flags
){

}

static inline
void InitializeMegabytePage(
    uint64_t* PagePointer, 
    uint64_t Flags
){

}

bool LouMapAddress(uint64_t PAddress, uint64_t VAddress, uint64_t FLAGS, uint64_t PageSize) {
    //LouKIRQL OldLevel;

    // Align addresses according to page size
    if (PageSize == MEGABYTE_PAGE) {
        PAddress &= ~(MEGABYTE_PAGE - 1);
        VAddress &= ~(MEGABYTE_PAGE - 1);
    } else if (PageSize == KILOBYTE_PAGE) {
        PAddress &= ~(KILOBYTE_PAGE - 1);
        VAddress &= ~(KILOBYTE_PAGE - 1);
    }

    // Calculate the entries for each page level
    uint64_t L4Entry = VAddress / (512ULL * GIGABYTE);
    uint64_t L3Entry = (VAddress % (512ULL * GIGABYTE)) / GIGABYTE;
    uint64_t L2Entry = (VAddress % GIGABYTE) / (2ULL * MEGABYTE);
    uint64_t L1Entry = (VAddress % (2ULL * MEGABYTE)) / KILOBYTE_PAGE;

    PML* PML4 = GetPageBase();

    if (PageSize == MEGABYTE_PAGE) {
        if (L4Entry == 0 && L3Entry == 0) {
            // Case: 1 GB page
            uint64_t oldL2 = PML4->PML2.entries[L2Entry];
            PML4->PML2.entries[L2Entry] = GetPageValue(PAddress, (1 << 7) | FLAGS);
            PageFlush(oldL2);  // Flush the old address
        } else {
            uint64_t* PageDirectoryL2 = nullptr;
            uint64_t* PageDirectoryL3 = nullptr;

            if (L4Entry == 0) {
                // Case: 512 MB page
                uint64_t oldL3 = PML4->PML3.entries[L3Entry];
                if ((oldL3 & ~(FLAGSSPACE)) == 0) {
                    PageDirectoryL2 = (uint64_t*)LouMallocEx(sizeof(uint64_t) * 512, PAGE_TABLE_ALIGNMENT);
                    if (!PageDirectoryL2) return false;
                    InitializePageTable(PageDirectoryL2);
                } else {
                    PageDirectoryL2 = (uint64_t*)(oldL3 & ~(FLAGSSPACE));
                }
                uint64_t oldL2 = PageDirectoryL2[L2Entry];
                PageDirectoryL2[L2Entry] = GetPageValue(PAddress, (1 << 7) | FLAGS);
                PML4->PML3.entries[L3Entry] = GetPageValue((uint64_t)PageDirectoryL2, 0b11);
                PageFlush(oldL2);  // Flush the old address
                PageFlush(oldL3);  // Flush the old address
            } else {
                // Case: 256 MB page
                uint64_t oldL4 = PML4->PML4.entries[L4Entry];
                if ((oldL4 & ~(FLAGSSPACE)) == 0) {
                    PageDirectoryL3 = (uint64_t*)LouMallocEx(sizeof(uint64_t) * 512, PAGE_TABLE_ALIGNMENT);
                    if (!PageDirectoryL3) return false;
                    InitializePageTable(PageDirectoryL3);
                } else {
                    PageDirectoryL3 = (uint64_t*)(oldL4 & ~(FLAGSSPACE));
                }
                uint64_t oldL3 = PageDirectoryL3[L3Entry];
                if ((oldL3 & ~(FLAGSSPACE)) == 0) {
                    PageDirectoryL2 = (uint64_t*)LouMallocEx(sizeof(uint64_t) * 512, PAGE_TABLE_ALIGNMENT);
                    if (!PageDirectoryL2) return false;
                    InitializePageTable(PageDirectoryL2);
                } else {
                    PageDirectoryL2 = (uint64_t*)(oldL3 & ~(FLAGSSPACE));
                }
                uint64_t oldL2 = PageDirectoryL2[L2Entry];
                PageDirectoryL2[L2Entry] = GetPageValue(PAddress, (1 << 7) | FLAGS);
                PageDirectoryL3[L3Entry] = GetPageValue((uint64_t)PageDirectoryL2, 0b11);
                PML4->PML4.entries[L4Entry] = GetPageValue((uint64_t)PageDirectoryL3, 0b11);
                PageFlush(oldL2);  // Flush the old address
                PageFlush(oldL3);  // Flush the old address
                PageFlush(oldL4);  // Flush the old address
            }
        }
    } else if (PageSize == KILOBYTE_PAGE) {
        uint64_t* PageDirectoryL1 = nullptr;
        uint64_t* PageDirectoryL2 = nullptr;
        uint64_t* PageDirectoryL3 = nullptr;

        if (L4Entry == 0 && L3Entry == 0) {
            // Case: Small page (4KB) in L2
            uint64_t oldL2 = PML4->PML2.entries[L2Entry];
            if (((oldL2 >> 7) & 0x01) == 1) {
                PageDirectoryL1 = (uint64_t*)LouMallocEx(sizeof(uint64_t) * 512, PAGE_TABLE_ALIGNMENT);
                if (!PageDirectoryL1) return false;
                uint64_t PageIndex = oldL2 & ~(FLAGSSPACE);
                InitializePageTableWithIndex(PageDirectoryL1, PageIndex, KILOBYTE_PAGE);
            } else {
                PageDirectoryL1 = (uint64_t*)(oldL2 & ~(FLAGSSPACE));
            }
            uint64_t oldL1 = PageDirectoryL1[L1Entry];
            PageDirectoryL1[L1Entry] = GetPageValue(PAddress, FLAGS);
            PML4->PML2.entries[L2Entry] = GetPageValue((uint64_t)PageDirectoryL1, 0b11);
            PageFlush(oldL1);  // Flush the old address
            PageFlush(oldL2);  // Flush the old address
        } else {
            // Case: Small page (4KB) in L3 or L4
            if (L4Entry == 0) {
                uint64_t oldL3 = PML4->PML3.entries[L3Entry];
                if ((oldL3 & ~(FLAGSSPACE)) == 0) {
                    PageDirectoryL2 = (uint64_t*)LouMallocEx(sizeof(uint64_t) * 512, PAGE_TABLE_ALIGNMENT);
                    if (!PageDirectoryL2) return false;
                    InitializePageTable(PageDirectoryL2);
                } else {
                    PageDirectoryL2 = (uint64_t*)(oldL3 & ~(FLAGSSPACE));
                }
                uint64_t oldL2 = PageDirectoryL2[L2Entry];
                if ((oldL2 & ~(FLAGSSPACE)) == 0) {
                    PageDirectoryL1 = (uint64_t*)LouMallocEx(sizeof(uint64_t) * 512, PAGE_TABLE_ALIGNMENT);
                    if (!PageDirectoryL1) return false;
                    InitializePageTable(PageDirectoryL1);
                } else {
                    PageDirectoryL1 = (uint64_t*)(oldL2 & ~(FLAGSSPACE));
                }
                uint64_t oldL1 = PageDirectoryL1[L1Entry];
                PageDirectoryL1[L1Entry] = GetPageValue(PAddress, FLAGS);
                PageDirectoryL2[L2Entry] = GetPageValue((uint64_t)PageDirectoryL1, FLAGS & ~(1 << 7));
                PML4->PML3.entries[L3Entry] = GetPageValue((uint64_t)PageDirectoryL2, 0b11);
                PageFlush(oldL1);  // Flush the old address
                PageFlush(oldL2);  // Flush the old address
                PageFlush(oldL3);  // Flush the old address
            } else {
                uint64_t oldL4 = PML4->PML4.entries[L4Entry];
                if ((oldL4 & ~(FLAGSSPACE)) == 0) {
                    PageDirectoryL3 = (uint64_t*)LouMallocEx(sizeof(uint64_t) * 512, PAGE_TABLE_ALIGNMENT);
                    if (!PageDirectoryL3) return false;
                    InitializePageTable(PageDirectoryL3);
                } else {
                    PageDirectoryL3 = (uint64_t*)(oldL4 & ~(FLAGSSPACE));
                }
                uint64_t oldL3 = PageDirectoryL3[L3Entry];
                if ((oldL3 & ~(FLAGSSPACE)) == 0) {
                    PageDirectoryL2 = (uint64_t*)LouMallocEx(sizeof(uint64_t) * 512, PAGE_TABLE_ALIGNMENT);
                    if (!PageDirectoryL2) return false;
                    InitializePageTable(PageDirectoryL2);
                } else {
                    PageDirectoryL2 = (uint64_t*)(oldL3 & ~(FLAGSSPACE));
                }
                uint64_t oldL2 = PageDirectoryL2[L2Entry];
                if ((oldL2 & ~(FLAGSSPACE)) == 0) {
                    PageDirectoryL1 = (uint64_t*)LouMallocEx(sizeof(uint64_t) * 512, PAGE_TABLE_ALIGNMENT);
                    if (!PageDirectoryL1) return false;
                    InitializePageTable(PageDirectoryL1);
                } else {
                    PageDirectoryL1 = (uint64_t*)(oldL2 & ~(FLAGSSPACE));
                }
                uint64_t oldL1 = PageDirectoryL1[L1Entry];
                PageDirectoryL1[L1Entry] = GetPageValue(PAddress, FLAGS);
                PageDirectoryL2[L2Entry] = GetPageValue((uint64_t)PageDirectoryL1, FLAGS & ~(1 << 7));
                PageDirectoryL3[L3Entry] = GetPageValue((uint64_t)PageDirectoryL2, 0b11);
                PML4->PML4.entries[L4Entry] = GetPageValue((uint64_t)PageDirectoryL3, 0b11);
                PageFlush(oldL1);  // Flush the old address
                PageFlush(oldL2);  // Flush the old address
                PageFlush(oldL3);  // Flush the old address
                PageFlush(oldL4);  // Flush the old address
            }
        }
    } else {
        LouPrint("Could Not Map Memory\n");
        return false;
    }
    return true;
}


bool IsMegabytePage(uint64_t* PageAddress){
    if((*PageAddress >> 7) & 0x01){
        return true;
    }
    return false;
}


bool LouUnMapAddress(uint64_t VAddress, uint64_t PageSize) {

}



uint64_t GetPageOfFaultValue(uint64_t VAddress) {

    return 0;
}
