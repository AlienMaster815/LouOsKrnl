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






void LouMapAddress(uint64_t PAddress,uint64_t VAddress , uint64_t FLAGS) {
    
    UNUSED uint64_t L4Entry = 0, L3Entry = 0, L2Entry = 0;
    if (VAddress < GIGABYTE) {
        L2Entry = (VAddress / (2LL * MEGABYTE));
    }
    else if ((VAddress >= GIGABYTE) && (VAddress < (GIGABYTE * 512LL))) {
        L3Entry = (uint64_t)(VAddress / GIGABYTE);
        L2Entry = (uint64_t)((VAddress % GIGABYTE) / (2LL * MEGABYTE));
    }



    UNUSED PML* PML4 = GetPageBase();



    //LouPrint("Gig:%d\n", L3Entry);
    //LouPrint("Meg by 2:%d\n", L2Entry);

    PML4->PML2[L3Entry].entries[L2Entry] = GetPageValue(PAddress,FLAGS);
    PML4->PML3[L4Entry].entries[L3Entry] = (uint64_t) GetPageValue((uint64_t)PML4->PML2[L3Entry].entries[0],0b11);

    //LouPrint("FOO:%d\n", PML4->PML2[L3Entry].entries[L2Entry]);
    //LouPrint("FOO2:%d\n", PML4->PML3[L4Entry].entries[L3Entry]);

    PageFlush(PML4->PML2[L3Entry].entries[L2Entry]);
    PageFlush(PML4->PML3[L4Entry].entries[L3Entry]);
}


void LouUnMapAddress(uint64_t VAddress) {

    
    UNUSED uint64_t L4Entry = 0, L3Entry = 0, L2Entry = 0;
    if (VAddress < GIGABYTE) {
        L2Entry = (VAddress / (2LL * MEGABYTE));
    }
    else if ((VAddress >= GIGABYTE) && (VAddress < (GIGABYTE * 512LL))) {
        L3Entry = (uint64_t)(VAddress / GIGABYTE);
        L2Entry = (uint64_t)((VAddress % GIGABYTE) / (2LL * MEGABYTE));
    }


    UNUSED PML* PML4 = GetPageBase();


    PML4->PML2[L3Entry].entries[L2Entry] = 0;


    PageFlush(PML4->PML2[L3Entry].entries[L2Entry]);
    PageFlush(PML4->PML3[L4Entry].entries[L3Entry]);

}

uint64_t GetPageOfFaultValue(uint64_t VAddress) {
    UNUSED uint64_t L4Entry = 0, L3Entry = 0, L2Entry = 0;
    if (VAddress < GIGABYTE) {
        L2Entry = (VAddress / (2LL * MEGABYTE));
    }
    else if ((VAddress >= GIGABYTE) && (VAddress < (GIGABYTE * 512LL))) {
        L3Entry = (uint64_t)(VAddress / GIGABYTE);
        L2Entry = (uint64_t)((VAddress % GIGABYTE) / (2LL * MEGABYTE));
    }

    UNUSED PML* PML4 = GetPageBase();


    return (uint64_t)PML4->PML2[L3Entry].entries[L2Entry];

}