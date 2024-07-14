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

bool Pagingdebug = false;
bool PagingDump = false;
void SetPageingDebug() {
    Pagingdebug = true;
}
void StartPagingDump() {
    PagingDump = true;
}



bool LouMapAddress(uint64_t PAddress, uint64_t VAddress, uint64_t FLAGS ,uint64_t PageSize){

    uint64_t L4Entry = 0, L3Entry = 0, L2Entry = 0, L1Entry = 0; 
    
    if(PageSize == MEGABYTE_PAGE){
        PAddress &= ~(MEGABYTE_PAGE - 1); 
        VAddress &= ~(MEGABYTE_PAGE - 1);       
    }
    else if(PageSize == KILOBYTE_PAGE){
        PAddress &= ~(KILOBYTE_PAGE - 1);
        VAddress &= ~(KILOBYTE_PAGE - 1);       
    }

    L4Entry = VAddress/(512ULL * GIGABYTE);
    L3Entry = (VAddress - (L4Entry * (512ULL * GIGABYTE))) / GIGABYTE; 
    L2Entry = (VAddress - ((L4Entry * (512ULL * GIGABYTE)) + (L3Entry * GIGABYTE))) / (2ULL * MEGABYTE);
    L1Entry = (VAddress - ((L4Entry * (512ULL * GIGABYTE)) + (L3Entry * GIGABYTE) + (L2Entry * (2ULL * MEGABYTE))));
    L1Entry /= KILOBYTE_PAGE;//fixes weird bug    

    //LouPrint("PAddress is:%d\nVAddress IS:%d\nFLAGS ARE:%d\nPAGE_SIZE_IS:%d\n",PAddress, VAddress, FLAGS,PageSize);

    PML* PML4 = GetPageBase();

    if((PageSize == MEGABYTE_PAGE) 
    && (L4Entry == 0)
    && (L3Entry == 0)
    ){
        PML4->PML2.entries[L2Entry] = GetPageValue(PAddress, (1 << 7) | FLAGS);
        PageFlush(PML4->PML2.entries[L2Entry]);
    }
    else if((PageSize == MEGABYTE_PAGE)
         && ((L4Entry == 0) && (L3Entry > 0))
         ){
            uint64_t* PageDirectoryL2;
            if((PML4->PML3.entries[L3Entry] & ~(FLAGSSPACE)) == 0){
                PageDirectoryL2 = (uint64_t*)LouMallocEx(sizeof(uint64_t) * 512, PAGE_TABLE_ALLIGNMENT);
                //initialize table
                for(uint16_t i = 0 ; i < 512; i++){
                    PageDirectoryL2[i] = 0b11;
                } 
            }
            else{
                //if(((PageDirectoryL2[L2Entry] >> 8) & 0x01) != 1)LouFree((RAMADD)(PageDirectoryL2[L2Entry] & ~(KILOBYTE_PAGE - 1)), sizeof(uint64_t) * 512);
                PageDirectoryL2 = (uint64_t*)(PML4->PML3.entries[L3Entry] & ~(FLAGSSPACE));
            }

            PageDirectoryL2[L2Entry] = GetPageValue(PAddress, (1 << 7) | FLAGS);
            PML4->PML3.entries[L3Entry] = GetPageValue((uint64_t)PageDirectoryL2, 0b11);

            PageFlush(PageDirectoryL2[L2Entry]);
            PageFlush(PML4->PML3.entries[L3Entry]);

            //LouPrint("PML3:%d\n",PML4->PML3.entries[L3Entry]);

    }
    else if((PageSize == MEGABYTE_PAGE)
         && (L4Entry > 0)
         ){
            uint64_t* PageDirectoryL2;
            uint64_t* PageDirectoryL3;

            if((PML4->PML4.entries[L4Entry] & ~(FLAGSSPACE)) == 0){
                PageDirectoryL3 = LouMallocEx(sizeof(uint64_t) * 512, PAGE_TABLE_ALLIGNMENT);
                //initialize table
                for(uint16_t i = 0 ; i < 512; i++){
                    PageDirectoryL3[i] = 0b11;
                } 
            }
            else{
                PageDirectoryL3 = (uint64_t*)(PML4->PML4.entries[L4Entry] & ~(FLAGSSPACE));
            }

            if((PageDirectoryL3[L3Entry] & ~(FLAGSSPACE)) == 0){
                PageDirectoryL2 = (uint64_t*)LouMallocEx(sizeof(uint64_t) * 512, PAGE_TABLE_ALLIGNMENT);
                //initialize table
                for(uint16_t i = 0 ; i < 512; i++){
                    PageDirectoryL2[i] = 0b11;
                } 
            }
            else{
                //if(((PageDirectoryL2[L2Entry] >> 8) & 0x01) != 1)LouFree((RAMADD)(PageDirectoryL2[L2Entry] & ~(KILOBYTE_PAGE - 1)), sizeof(uint64_t) * 512);
                PageDirectoryL2 = (uint64_t*)(PML4->PML3.entries[L3Entry] & ~(FLAGSSPACE));
            }

            PageDirectoryL2[L2Entry] = GetPageValue(PAddress, (1 << 7) | FLAGS);
            PageDirectoryL3[L3Entry] = GetPageValue((uint64_t)PageDirectoryL2, 0b11);
            PML4->PML4.entries[L4Entry] = GetPageValue((uint64_t)PageDirectoryL3, 0b11);

            PageFlush(PageDirectoryL2[L2Entry]);
            PageFlush(PageDirectoryL3[L3Entry]);
            PageFlush(PML4->PML4.entries[L4Entry]);
    }
    else if((PageSize == KILOBYTE_PAGE)
         && (L4Entry == 0)
         && (L3Entry == 0)){
            uint64_t* PageDirectoryL1;
            //Check that the page is not a megabyte
            if(((PML4->PML2.entries[L2Entry] >> 7) & 0x01) == 1){
                //system is using a megabyte page change that
                PageDirectoryL1 = LouMallocEx(sizeof(uint64_t) * 512, PAGE_TABLE_ALLIGNMENT);
                uint64_t PageIndex = PML4->PML2.entries[L2Entry] & ~(FLAGSSPACE);
                for(uint16_t i = 0; i < 512; i++){
                    PageDirectoryL1[i] = GetPageValue(PageIndex, 0b11);
                    PageIndex += KILOBYTE_PAGE;
                    PageFlush(PageDirectoryL1[i]);
                }
            }
            else{
                PageDirectoryL1 = (uint64_t*)(PML4->PML2.entries[L2Entry] & ~(FLAGSSPACE));
            }

            PageDirectoryL1[L1Entry] = GetPageValue(PAddress, FLAGS);
            PML4->PML2.entries[L2Entry] = GetPageValue((uint64_t)PageDirectoryL1, 0b11);

            PageFlush(PageDirectoryL1[L1Entry]);
            PageFlush(PML4->PML2.entries[L2Entry]);

    }
    else if((PageSize == KILOBYTE_PAGE)
         && ((L4Entry == 0) && (L3Entry > 0))
         ){
            uint64_t* PageDirectoryL2;
            uint64_t* PageDirectoryL1;
            if((PML4->PML3.entries[L3Entry] & ~(FLAGSSPACE)) == 0){
                PageDirectoryL2 = (uint64_t*)LouMallocEx(sizeof(uint64_t) * 512, PAGE_TABLE_ALLIGNMENT);
                //initialize table
                for(uint16_t i = 0 ; i < 512; i++){
                    PageDirectoryL2[i] = 0b11;
                } 
            }
            else{
                //if(((PageDirectoryL2[L2Entry] >> 8) & 0x01) != 1)LouFree((RAMADD)(PageDirectoryL2[L2Entry] & ~(KILOBYTE_PAGE - 1)), sizeof(uint64_t) * 512);
                PageDirectoryL2 = (uint64_t*)(PML4->PML3.entries[L3Entry] & ~(FLAGSSPACE));
            }
            if((PageDirectoryL2[L2Entry] & ~(FLAGSSPACE)) == 0){
                PageDirectoryL2 = (uint64_t*)LouMallocEx(sizeof(uint64_t) * 512, PAGE_TABLE_ALLIGNMENT);
            }
            else{
                PageDirectoryL1 = (uint64_t*)(PML4->PML3.entries[L3Entry] & ~(FLAGSSPACE));
            }

            PageDirectoryL1[L1Entry] = GetPageValue(PAddress, FLAGS);
            PageDirectoryL2[L2Entry] = GetPageValue((uint64_t)PageDirectoryL1, FLAGS & ~(1 << 7));
            PML4->PML3.entries[L3Entry] = GetPageValue((uint64_t)PageDirectoryL2, 0b11);

            PageFlush(PageDirectoryL1[L1Entry]);
            PageFlush(PageDirectoryL2[L2Entry]); 
            PageFlush(PML4->PML3.entries[L3Entry]); 

    }
    else if((PageSize == KILOBYTE_PAGE)
         && (L4Entry > 0)
         ){
            uint64_t* PageDirectoryL2;
            uint64_t* PageDirectoryL3;
            uint64_t* PageDirectoryL1;

            if((PML4->PML4.entries[L4Entry] & ~(FLAGSSPACE)) == 0){
                PageDirectoryL3 = LouMallocEx(sizeof(uint64_t) * 512, PAGE_TABLE_ALLIGNMENT);
                //initialize table
                for(uint16_t i = 0 ; i < 512; i++){
                    PageDirectoryL3[i] = 0b11;
                } 
            }
            else{
                PageDirectoryL3 = (uint64_t*)(PML4->PML4.entries[L4Entry] & ~(FLAGSSPACE));
            }

            if((PageDirectoryL3[L3Entry] & ~(FLAGSSPACE)) == 0){
                PageDirectoryL2 = (uint64_t*)LouMallocEx(sizeof(uint64_t) * 512, PAGE_TABLE_ALLIGNMENT);
                //initialize table
                for(uint16_t i = 0 ; i < 512; i++){
                    PageDirectoryL2[i] = 0b11;
                } 
            }
            else{
                //if(((PageDirectoryL2[L2Entry] >> 8) & 0x01) != 1)LouFree((RAMADD)(PageDirectoryL2[L2Entry] & ~(KILOBYTE_PAGE - 1)), sizeof(uint64_t) * 512);
                PageDirectoryL2 = (uint64_t*)(PML4->PML3.entries[L3Entry] & ~(FLAGSSPACE));
            }
            if((PageDirectoryL2[L2Entry] & ~(FLAGSSPACE)) == 0){
                PageDirectoryL2 = (uint64_t*)LouMallocEx(sizeof(uint64_t) * 512, PAGE_TABLE_ALLIGNMENT);
            }
            else{
                PageDirectoryL1 = (uint64_t*)(PML4->PML3.entries[L3Entry] & ~(FLAGSSPACE));
            }

            PageDirectoryL1[L1Entry] = GetPageValue(PAddress, FLAGS);
            PageDirectoryL2[L2Entry] = GetPageValue((uint64_t)PageDirectoryL1, FLAGS & ~(1 << 7));
            PageDirectoryL3[L3Entry] = GetPageValue((uint64_t)PageDirectoryL2, 0b11);
            PML4->PML4.entries[L4Entry] = GetPageValue((uint64_t)PageDirectoryL3, 0b11);

            PageFlush(PageDirectoryL1[L1Entry]);
            PageFlush(PageDirectoryL2[L2Entry]);
            PageFlush(PageDirectoryL3[L3Entry]);

    }
    else{
        LouPrint("Could Not Map Memory\n");
        return false;
    }
    //LouPrint("L4:%d\nL3:%d\nL2:%d\nL1:%d\n",L4Entry, L3Entry, L2Entry, L1Entry);

    return true;
}


bool LouUnMapAddress(uint64_t VAddress, uint64_t PageSize) {

}



uint64_t GetPageOfFaultValue(uint64_t VAddress) {

    return 0;
}


//void LouMapAddressEx(uint64_t PAddress, uint64_t VAddress, uint64_t PageSize, uint64_t FLAGS) {


//}