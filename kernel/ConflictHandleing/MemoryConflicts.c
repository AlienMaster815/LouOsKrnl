#include <LouAPI.h>

PML* GetPageBase();

LOUSTATUS RequestPhysicalAddress(
    uint64_t VAddress,
    uint64_t* PAddress
);

bool CheckForVMemoryConflicts(
    uintptr_t VAddress
    ){

    uint64_t PAddress;        

    if(PAddress != 0x00){
        LouPrint("Conflict At Address:%h\n", VAddress);
        //return true;
    }


    return false;
}
