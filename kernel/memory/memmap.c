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


void MapEntryToTable(uint16_t L4Entry, uint16_t L3Entry, uint16_t L2Entry, uint64_t PAddress,uint64_t FLAGS) {



}



void LouMapAddress(uint64_t PAddress , uint64_t FLAGS) {
    UNUSED uint64_t L4Entry = 0, L3Entry = 0, L2Entry = 0;

    PAddress &= ~( (2 * MEGABYTE) - 1); // Clear the 21 least significant bits

    // Calculate the entries
    if (PAddress < GIGABYTE) {
        L2Entry = (PAddress / (2LL * MEGABYTE));
    }
    else if ((PAddress >= GIGABYTE) && (PAddress < (GIGABYTE * 512LL))) {
        L3Entry = (uint64_t)(PAddress / GIGABYTE);
        L2Entry = (uint64_t)((PAddress % GIGABYTE) / (2LL * MEGABYTE));
    }
    else {
        L4Entry = (uint64_t)(PAddress / (GIGABYTE * 512LL));
        L3Entry = (uint64_t)((PAddress % (512LL * GIGABYTE)) / GIGABYTE);
        L2Entry = (uint64_t)((PAddress % GIGABYTE) / (2LL * MEGABYTE));
    }

    LouPrint("Mapping L4 Enrty:%d\n", L4Entry);
    LouPrint("Mapping L3 Enrty:%d\n", L3Entry);
    LouPrint("Mapping L2 Enrty:%d\n", L2Entry);

    MapEntryToTable(L4Entry,L3Entry,L2Entry,PAddress,FLAGS);

}