#include <LouAPI.h>


#include <stdint.h>



uint64_t GetCr3() {
    uint64_t cr3_value;
    __asm__ volatile ("mov %%cr3, %0" : "=r" (cr3_value));
    return cr3_value;
}

PML* GetPageBase() {
    return (PML*)(GetCr3() & 0x000FFFFFFFFFF000LL);
}

static inline void PageFlush(uint64_t addr) {
    asm volatile("invlpg (%0)" ::"r" (addr) : "memory");
    asm("mfence");
}





void LouMapAddress(uint64_t PAddress, uint64_t VAddress, uint64_t FLAGS) {
    // Align addresses to 2MB boundary
    PAddress &= 0xFFFFFFFFFFE00000;
    VAddress &= 0xFFFFFFFFFFE00000;

    uint64_t L4Entry = 0,L3Entry = 0, L2Entry = 0;

    // Calculate L3 and L2 entries based on the virtual address
    if (VAddress >= GIGABYTE && VAddress < (GIGABYTE * 512LL)) {
        L3Entry = (VAddress / GIGABYTE);
        L2Entry = ((VAddress % GIGABYTE) / (2LL * MEGABYTE));
    }
    else {
        L2Entry = (VAddress / (2LL * MEGABYTE));
    }

    // Obtain the PML4 table
    PML* PML4 = GetPageBase();

    // Map the physical address to the L2 entry
    PML4->PML2[L3Entry].entries[L2Entry] = GetPageValue(PAddress, FLAGS);

    // If virtual address falls within 1GB to 512GB range, also map to L3 entry
    if (VAddress >= GIGABYTE && VAddress < (GIGABYTE * 512LL)) {
        PML4->PML3[L4Entry].entries[L3Entry] = (uint64_t)GetPageValue((uint64_t)&PML4->PML2[L3Entry].entries[L2Entry], 0b11);
    }

    // Flush the modified page table entries
    PageFlush(PML4->PML2[L3Entry].entries[L2Entry]);
    if (VAddress >= GIGABYTE && VAddress < (GIGABYTE * 512LL)) {
        PageFlush(PML4->PML3[L4Entry].entries[L2Entry]);
    }

    // Print debug information
    //LouPrint("L3 Entry: %d\n", L3Entry);
    //LouPrint("L2 Entry: %d\n", L2Entry);
    //LouPrint("PML2 Entry: %d\n", PML4->PML2[L3Entry].entries[L2Entry]);
    //LouPrint("PML3 Entry: %d\n", PML4->PML3[L4Entry].entries[L3Entry]);

    //uint8_t* test = (uint8_t*)VAddress;

    //uint8_t foo = *test;

    //while (1);

}


void LouUnMapAddress(uint64_t VAddress) {

    // Align addresses to 2MB boundary
    //PAddress &= 0xFFFFFFFFFFE00000;
    VAddress &= 0xFFFFFFFFFFE00000;

    uint64_t L4Entry = 0, L3Entry = 0, L2Entry = 0;

    // Calculate L3 and L2 entries based on the virtual address
    if (VAddress >= GIGABYTE && VAddress < (GIGABYTE * 512LL)) {
        L3Entry = (VAddress / GIGABYTE);
        L2Entry = ((VAddress % GIGABYTE) / (2LL * MEGABYTE));
    }
    else {
        L2Entry = (VAddress / (2LL * MEGABYTE));
    }

    // Obtain the PML4 table
    PML* PML4 = GetPageBase();

    // Map the physical address to the L2 entry
    //PML4->PML2[L3Entry].entries[L2Entry] = GetPageValue(PAddress, FLAGS);

    // If virtual address falls within 1GB to 512GB range, also map to L3 entry
    if (VAddress >= GIGABYTE && VAddress < (GIGABYTE * 512LL)) {
        PML4->PML3[L4Entry].entries[L3Entry] = 0;//(uint64_t)GetPageValue((uint64_t)&PML4->PML2[L3Entry].entries[L2Entry], 0b11);
    }

    // Flush the modified page table entries
    PageFlush(PML4->PML2[L3Entry].entries[L2Entry]);
    if (VAddress >= GIGABYTE && VAddress < (GIGABYTE * 512LL)) {
        PageFlush(PML4->PML3[L4Entry].entries[L2Entry]);
    }

}

uint64_t GetPageOfFaultValue(uint64_t VAddress) {

    // Align addresses to 2MB boundary
    //PAddress &= 0xFFFFFFFFFFE00000;
    VAddress &= 0xFFFFFFFFFFE00000;

    uint64_t L4Entry = 0, L3Entry = 0, L2Entry = 0;

    // Calculate L3 and L2 entries based on the virtual address
    if (VAddress >= GIGABYTE && VAddress < (GIGABYTE * 512LL)) {
        L3Entry = (VAddress / GIGABYTE);
        L2Entry = ((VAddress % GIGABYTE) / (2LL * MEGABYTE));
    }
    else {
        L2Entry = (VAddress / (2LL * MEGABYTE));
    }

    UNUSED PML* PML4 = GetPageBase();


    return (uint64_t)PML4->PML2[L3Entry].entries[L2Entry];

}