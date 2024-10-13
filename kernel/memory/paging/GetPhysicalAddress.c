#include <LouAPI.h>

//later were going to add thread checks for other modes

PML* GetPageBase();

static inline uint64_t GetAddressFromPage(uint64_t PageValue, uint16_t PageOffset, bool* IsDir){
    uint64_t* NextAddress = (uint64_t*)(PageValue & 0x000FFFFFFFFFF000);
    if(( NextAddress[PageOffset] >> 7) & 0x01){
        *IsDir = true;
    }
    return NextAddress[PageOffset];
}

static spinlock_t RPALock;

LOUSTATUS RequestPhysicalAddress(
    uint64_t VAddress,
    uint64_t* PAddress
){

    //LouPrint("Requesting A Physical Address Of Virtual Address:%d\n", VAddress);
    LouKIRQL Old;
    LouKeAcquireSpinLock(&RPALock, &Old);
    OperatingMode OM = LouKeCheckOperatingMode();

    if((OM == Kernel) || (OM == System)){
        uint64_t TVAddress;
        uint64_t Tmp;
        uint64_t Offset =  0;
        bool IsDirectory = false;
        // Calculate the entries for each page level
        uint64_t L4Entry = VAddress / (512ULL * GIGABYTE);
        uint64_t L3Entry = (VAddress % (512ULL * GIGABYTE)) / GIGABYTE;
        uint64_t L2Entry = (VAddress % GIGABYTE) / (2ULL * MEGABYTE);
        uint64_t L1Entry = (VAddress % (2ULL * MEGABYTE)) / KILOBYTE_PAGE;
        UNUSED PML* PML4 = GetPageBase();

        TVAddress = (L4Entry * (512 * GIGABYTE)) + (L3Entry * GIGABYTE) + (L2Entry * (2ULL * MEGABYTE) + (L1Entry * KILOBYTE_PAGE));

        Offset = VAddress - TVAddress;

  //      LouPrint("L4:%d : L3:%d : L2:%d : L1:%d\n", L4Entry, L3Entry, L2Entry, L1Entry);

        Tmp = GetAddressFromPage((uint64_t)PML4->PML4.entries, L4Entry, &IsDirectory); //get L4 value
        if(!Tmp){
            LouKeReleaseSpinLock(&RPALock, &Old);
            return STATUS_UNSUCCESSFUL;
        }
        Tmp = GetAddressFromPage(Tmp, L3Entry, &IsDirectory); //get L3 value
        if(!Tmp){
            LouKeReleaseSpinLock(&RPALock, &Old);
            return STATUS_UNSUCCESSFUL;
        }
        Tmp = GetAddressFromPage(Tmp, L2Entry, &IsDirectory); //get L2 value
        if(!Tmp){
            LouKeReleaseSpinLock(&RPALock, &Old);
            return STATUS_UNSUCCESSFUL;
        }
        else if(IsDirectory){
            *PAddress = (Tmp & 0x000FFFFFFFFFF000) + Offset;
            LouKeReleaseSpinLock(&RPALock, &Old);
            return STATUS_SUCCESS;
        }       
        Tmp = GetAddressFromPage(Tmp, L1Entry, &IsDirectory); //get L1 value
        if(!Tmp){
            LouKeReleaseSpinLock(&RPALock, &Old);
            return STATUS_UNSUCCESSFUL;
        }
        *PAddress = (Tmp & 0x000FFFFFFFFFF000) + Offset;
        LouKeReleaseSpinLock(&RPALock, &Old);
        return STATUS_SUCCESS;
    }
    else{
        return STATUS_PRIVILEGE_NOT_HELD;
    }

    //LouPrint("Request Complete\n");
    return STATUS_UNSUCCESSFUL;
}