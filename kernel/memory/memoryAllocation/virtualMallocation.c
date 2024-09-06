#include <LouAPI.h>

void* LouVMalloc(size_t BytesToAllocate);

typedef struct __attribute__((packed)) _AllocationBlock{
    uint64_t VAddress;
    uint64_t PAddress;
    uint64_t size;
}VAllocationBlock;

uint8_t IOSlab[2 * MEGABYTE];

static VAllocationBlock* IOBlock = (VAllocationBlock*)&IOSlab;

static uint32_t VAllocations = 0x00;

//allocates Virtual Page 
void* LouKeMallocVirtualPage(
    uint64_t PAddress, //in opt
    uint64_t Flags,
    bool LargePage
){
    //void* PAddress = 0x00;
    void* VAddress = 0x00;

    if(LargePage){
        if(PAddress == 0x00){
            PAddress = (uint64_t)LouMalloc(MEGABYTE_PAGE);
        }
        memset((void*)PAddress, 0 , MEGABYTE_PAGE);
        LouMapAddress(0, (uint64_t)PAddress, 0, MEGABYTE_PAGE);
        VAddress = LouVMalloc(MEGABYTE_PAGE);        
        LouMapAddress((uint64_t)PAddress, (uint64_t)VAddress, Flags, MEGABYTE_PAGE);
    }
    else{ //Small Pages
        if(PAddress == 0x00){
            PAddress = (uint64_t)LouMalloc(KILOBYTE_PAGE);
        }
        memset((void*)PAddress, 0, KILOBYTE_PAGE);
        LouMapAddress(0, (uint64_t)PAddress, 0, KILOBYTE_PAGE);
        VAddress = LouVMalloc(KILOBYTE_PAGE);        
    }
    return VAddress;
}

