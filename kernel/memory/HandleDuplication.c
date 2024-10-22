#include <LouAPI.h>

void LouUserMalloc(uint64_t DataP);
uint64_t GetAllocationBlockSize(uint64_t Address);

void* LouKeForkToUserModeSection(uint64_t OriginalLocation){
    uint64_t AllocationSize = GetAllocationBlockSize(OriginalLocation);    
    LouUserMalloc((uint64_t)&AllocationSize);
    //Allocation Size Now Has the allocated Buffer
    if(!AllocationSize){
        return 0x00;
    }
    memcpy((void*)OriginalLocation, (void*)AllocationSize, GetAllocationBlockSize(OriginalLocation));
    return (void*)AllocationSize;
}