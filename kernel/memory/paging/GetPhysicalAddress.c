#include <LouAPI.h>

//later were going to add thread checks for other modes


PML* GetPageBase();


LOUSTATUS RequestPhysicalAddress(
    uint64_t VAddress,
    uint64_t* PAddress
){

    LouPrint("Requesting A Physical Address Of Virtual Address:%h\n", VAddress);

    OperatingMode OM = LouKeCheckOperatingMode();

    if((OM == Kernel) || (OM == System)){
        uint64_t L4Entry = 0, L3Entry = 0, L2Entry = 0, L1Entry = 0; 

        uint64_t TVAddress = VAddress;

        VAddress &= ~(KILOBYTE_PAGE - 1);       

        L4Entry = VAddress/(512ULL * GIGABYTE);
        L3Entry = (VAddress - (L4Entry * (512ULL * GIGABYTE))) / GIGABYTE; 
        L2Entry = (VAddress - ((L4Entry * (512ULL * GIGABYTE)) + (L3Entry * GIGABYTE))) / (2ULL * MEGABYTE);
        L1Entry = (VAddress - ((L4Entry * (512ULL * GIGABYTE)) + (L3Entry * GIGABYTE) + (L2Entry * (2ULL * MEGABYTE))));
        L1Entry /= KILOBYTE_PAGE;//fixes weird bug    

        UNUSED PML* PML4 = GetPageBase();

        if((L4Entry == 0)
        && (L3Entry == 0)){
            uint64_t L2Directory = PML4->PML2.entries[L2Entry];

            if((L2Directory >> 7) & 0x01){
                L2Directory &= ~(FLAGSSPACE);
                VAddress &= ~(MEGABYTE_PAGE - 1);
                TVAddress -= VAddress;
                L2Directory += TVAddress;
                LouPrint("Request Complete\n");
                *PAddress = L2Directory;
                return STATUS_SUCCESS;
            }

            L2Directory &= ~(FLAGSSPACE);
            uint64_t* L2DirectoryTable = (uint64_t*)L2Directory;
            uint64_t L1Directory = (L2DirectoryTable[L1Entry] & ~(FLAGSSPACE));

            TVAddress -= VAddress;
            L1Directory += TVAddress;
            LouPrint("Request Complete\n");

            *PAddress = L1Directory;
            return STATUS_SUCCESS;

        }

    }
    else{
        return STATUS_PRIVILEGE_NOT_HELD;
    }

    LouPrint("Request Complete\n");
    return STATUS_UNSUCCESSFUL;
}