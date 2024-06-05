#include <LouAPI.h>


#include <stdint.h>



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

int count_gigabytes(uint64_t number) {
    int gigabytes = 0;

    // Align the number to a gigabyte boundary
    uint64_t aligned_number = number & ~(0x3FFFFFFF); // Mask out the least significant 30 bits

    // Calculate the number of gigabytes
    gigabytes = aligned_number >> 30;

    return gigabytes;
}



bool LouMapAddressEx(uint64_t PAddress, uint64_t VAddress, uint64_t FLAGS, uint64_t PageSize);

void LouMapAddress(uint64_t PAddress, uint64_t VAddress, uint64_t FLAGS) {
    LouMapAddressEx(PAddress, VAddress,FLAGS,MEGABYTE_PAGE);
}


bool LouMapAddressEx(uint64_t PAddress, uint64_t VAddress, uint64_t FLAGS, uint64_t PageSize){
        
    if(PageSize == MEGABYTE_PAGE){

    // Align addresses to 2MB boundary
    PAddress &= 0xFFFFFFFFFFE00000;
    VAddress &= 0xFFFFFFFFFFE00000;
    uint64_t L4Entry = 0,L3Entry = 0, L2Entry = 0;

// Calculate L3 and L2 entries based on the virtual address
    if (VAddress >= GIGABYTE && VAddress < (GIGABYTE * 512ULL)) {
        // Within the range of a single gigabyte
        L3Entry = count_gigabytes(VAddress);
        if ((VAddress - (count_gigabytes(VAddress) * GIGABYTE)) != 0) {
            L2Entry = (VAddress - (count_gigabytes(VAddress) * GIGABYTE)) / (2ULL * MEGABYTE);
        }
    }
    else {
        // Beyond the range of a single gigabyte
        L2Entry = VAddress / (2ULL * MEGABYTE);
    }


    // Obtain the PML4 table
    PML* PML4 = GetPageBase();

    // Map the physical address to the L2 entry
    PML4->PML2[L3Entry].entries[L2Entry] = GetPageValue(PAddress, FLAGS);

    // If virtual address falls within 1GB to 512GB range, also map to L3 & L4 entry
    if (VAddress >= GIGABYTE && VAddress < (GIGABYTE * 512ULL)) {
        PML4->PML3[L4Entry].entries[L3Entry] = (uint64_t)GetPageValue((uint64_t)&PML4->PML2[L3Entry].entries[L2Entry], 0b11);
    }

    // Flush the modified page table entries
    PageFlush(PML4->PML2[L3Entry].entries[L2Entry]);
    if (VAddress >= GIGABYTE && VAddress < (GIGABYTE * 512ULL)) {
        PageFlush(PML4->PML3[L4Entry].entries[L3Entry]);
    }

        // Print debug information
        //LouPrint("L3 Entry: %d\n", L3Entry);
        //LouPrint("L2 Entry: %d\n", L2Entry);
        //LouPrint("PML2 Entry: %h\n", PML4->PML2[L3Entry].entries[L2Entry]);
        //LouPrint("PML3 Entry: %h\n", PML4->PML3[L4Entry].entries[L3Entry]);    
        
        
        return true;
    }
    else if(PageSize == KILOBYTE_PAGE){
        // PARAMETERs FOR REFERENCE uint64_t PAddress, uint64_t VAddress, uint64_t FLAGS, uint64_t PageSize
        VAddress &= 0xFFFFFFFFFFFFF800;
        PAddress &= 0xFFFFFFFFFFFFF800;
        uint64_t L4Entry = 0,L3Entry = 0, L2Entry = 0, L1Entry = 0;

        if (VAddress >= GIGABYTE && VAddress < (GIGABYTE * 512ULL)) {
        // Within the range of a single gigabyte
            L3Entry = VAddress / GIGABYTE;
            L2Entry = (VAddress - (L3Entry * GIGABYTE)) / (2ULL * MEGABYTE);
            L1Entry = (VAddress - ((L3Entry * GIGABYTE) + (L2Entry * (2ULL * MEGABYTE)))) / KILOBYTE_PAGE;
        }
        else {
            LouPrint("Could Not Create Page");
            return false;
        }
        //create an l1 entry that is alingged by the table
        uint64_t* L1Table = (uint64_t*)LouMallocEx(sizeof(uint64_t) * 512, KERNEL_PAGE_WRITE_PRESENT, PAGE_TABLE_ALLIGNMENT);

        //LouPrint("L1 Is:%d\n", L1Entry);

        //obtain the PML 4 Table
        PML* PML4 = GetPageBase();

        //Map the Kilobyte page to the L1 Entry
        L1Table[L1Entry] = GetPageValue(PAddress,FLAGS);

        //Map L1 To the L2 Entry
        PML4->PML2[L3Entry].entries[L2Entry] = (uint64_t)GetPageValue((uint64_t)&L1Table[L1Entry], FLAGS);

        if (VAddress >= GIGABYTE && VAddress < (GIGABYTE * 512ULL)) {
            PML4->PML3[L4Entry].entries[L3Entry] = (uint64_t)GetPageValue((uint64_t)&PML4->PML2[L3Entry].entries[L2Entry], FLAGS);
        }

        // Flush the modified page table entries
        PageFlush((uint64_t)L1Table[L1Entry]);
        PageFlush(PML4->PML2[L3Entry].entries[L2Entry]);
        if (VAddress >= GIGABYTE && VAddress < (GIGABYTE * 512ULL)) {
            PageFlush(PML4->PML3[L4Entry].entries[L3Entry]);
        }

        // Print debug information
        //LouPrint("L3 Entry: %d\n", L3Entry);
        //LouPrint("L2 Entry: %d\n", L2Entry);
        //LouPrint("L1 Entry: %d\n", L1Entry);

        //LouPrint("PML2 Entry: %h\n", PML4->PML2[L3Entry].entries[L2Entry]);
        //LouPrint("PML3 Entry: %h\n", PML4->PML3[L4Entry].entries[L3Entry]); 

        LouFree((RAMADD)L1Table,sizeof(uint64_t) * 512);

        return true;
    }
    else{
        LouPrint("Could Not Create Page");
    }
    return false;
}

void LouUnMapAddress(uint64_t VAddress) {

    // Align addresses to 2MB boundary
    //PAddress &= 0xFFFFFFFFFFE00000;
    VAddress &= 0xFFFFFFFFFFE00000;

    uint64_t L4Entry = 0, L3Entry = 0, L2Entry = 0;

    // Calculate L3 and L2 entries based on the virtual address
    if (VAddress >= GIGABYTE && VAddress < (GIGABYTE * 512ULL)) {
        // Within the range of a single gigabyte
        L3Entry = count_gigabytes(VAddress);
        if ((VAddress - (count_gigabytes(VAddress) * GIGABYTE)) != 0) {
            L2Entry = (VAddress - (count_gigabytes(VAddress) * GIGABYTE)) / (2ULL * MEGABYTE);
        }
    }
    else {
        // Beyond the range of a single gigabyte
        L2Entry = VAddress / (2ULL * MEGABYTE);
    }


    // Obtain the PML4 table
    PML* PML4 = GetPageBase();

    // Map the physical address to the L2 entry
    //PML4->PML2[L3Entry].entries[L2Entry] = GetPageValue(PAddress, FLAGS);

    // If virtual address falls within 1GB to 512GB range, also map to L3 entry
    if (VAddress >= GIGABYTE && VAddress < (GIGABYTE * 512ULL)) {
        PML4->PML3[L4Entry].entries[L3Entry] = 0;//(uint64_t)GetPageValue((uint64_t)&PML4->PML2[L3Entry].entries[L2Entry], 0b11);
    }

    // Flush the modified page table entries
    PageFlush(PML4->PML2[L3Entry].entries[L2Entry]);
    if (VAddress >= GIGABYTE && VAddress < (GIGABYTE * 512ULL)) {
        PageFlush(PML4->PML3[L4Entry].entries[L2Entry]);
    }

}

uint64_t GetPageOfFaultValue(uint64_t VAddress) {

    // Align addresses to 2MB boundary
    //PAddress &= 0xFFFFFFFFFFE00000;
    VAddress &= 0xFFFFFFFFFFE00000;

    uint64_t L4Entry = 0, L3Entry = 0, L2Entry = 0;

    // Calculate L3 and L2 entries based on the virtual address
    if (VAddress >= GIGABYTE && VAddress < (GIGABYTE * 512ULL)) {
        // Within the range of a single gigabyte
        L3Entry = count_gigabytes(VAddress);
        if ((VAddress - (count_gigabytes(VAddress) * GIGABYTE)) != 0) {
            L2Entry = (VAddress - (count_gigabytes(VAddress) * GIGABYTE)) / (2ULL * MEGABYTE);
        }
    }
    else {
        // Beyond the range of a single gigabyte
        L2Entry = VAddress / (2ULL * MEGABYTE);
    }


    UNUSED PML* PML4 = GetPageBase();


    return (uint64_t)PML4->PML2[L3Entry].entries[L2Entry];

}


//void LouMapAddressEx(uint64_t PAddress, uint64_t VAddress, uint64_t PageSize, uint64_t FLAGS) {


//}