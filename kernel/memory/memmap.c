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

void SetCr3(uint64_t cr3_value) {
    __asm__ volatile ("mov %0, %%cr3" : : "r" (cr3_value));
}



static inline void PageFlush(uint64_t addr) {
    asm volatile("invlpg (%0)" ::"r" (addr) : "memory");
    asm("mfence");
}





extern uint64_t GetPageValue(uint64_t PAddress, uint64_t FLAGS);





void LouMapAddress(uint64_t PAddress,uint64_t VAddress , uint64_t FLAGS) {
    
    uint64_t foo = VAddress/(2LL * MEGABYTE);

    PML* PML4 = GetPageBase();

    PML4->PML2.entries[foo] = GetPageValue(PAddress,FLAGS);

}