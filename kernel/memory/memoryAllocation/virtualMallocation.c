#include <LouAPI.h>

void* LouVMalloc(size_t BytesToAllocate);

typedef struct __attribute__((packed)) _AllocationBlock{
    uint64_t VAddress;
    uint64_t PAddress;
    uint64_t size;
}VAllocationBlock;

uint8_t IOSlab[9 * MEGABYTE];

static VAllocationBlock* IOBlock = (VAllocationBlock*)&IOSlab;

static uint32_t VAllocations = 0x00;

uint64_t LouKeVMemmorySearchPhysicalSpace(
    uint64_t VAddress
){
    for(uint32_t i = 0 ; i < VAllocations; i++){
        if(IOBlock[i].VAddress == VAddress){
            return IOBlock[i].PAddress;
        }
    }
}

uint64_t LouKeVMemmorySearchVirtualSpace(
    uint64_t PAddress
){
    LouPrint("PAddress Is:%h\n", PAddress);
    for(uint32_t i = 0 ; i < VAllocations; i++){
        if(IOBlock[i].PAddress == PAddress){
            return IOBlock[i].VAddress;
        }
    }
}

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
        LouMapAddress(0, (uint64_t)PAddress, 0, MEGABYTE_PAGE);
        VAddress = LouVMalloc(MEGABYTE_PAGE);        
        LouMapAddress((uint64_t)PAddress, (uint64_t)VAddress, Flags, MEGABYTE_PAGE);
    }
    else{ //Small Pages
        if(PAddress == 0x00){
            PAddress = (uint64_t)LouMalloc(KILOBYTE_PAGE);
        }
        LouMapAddress(0, (uint64_t)PAddress, 0, KILOBYTE_PAGE);
        VAddress = LouVMalloc(KILOBYTE_PAGE);        
    }
    return VAddress;
}

void LouKeMallocVMmIO(
    uint64_t PAddress,
    uint64_t size,
    uint64_t FLAGS
){
    static uint64_t i = 0;

    uint64_t VAddress = (uint64_t)LouVMalloc(size);
    if(VAddress == 0x00){
        return;
    }

    while(i < size){
        if(((PAddress + i) == ((PAddress + i) & ~(MEGABYTE_PAGE-1))) && ((i + MEGABYTE_PAGE) < size)){
            LouMapAddress(PAddress + i, VAddress + i, FLAGS, MEGABYTE_PAGE);
            i += MEGABYTE_PAGE;
        }
        else{
            LouMapAddress(PAddress + i, VAddress + i, FLAGS, KILOBYTE_PAGE);
            i += KILOBYTE_PAGE;
        }
        //LouPrint("I:%h : Size:%h\n",i, size);
    }


    if(VAllocations == 0){
        IOBlock[0].VAddress = VAddress;
        IOBlock[0].PAddress = PAddress;
        IOBlock[0].size = size;
        VAllocations++;
        return;// (void*)VAddress;
    }

    for(i = 0; i < VAllocations; i++){
        if(IOBlock[i].VAddress == 0x00){
            IOBlock[i].VAddress = VAddress;
            IOBlock[i].PAddress = PAddress;
            IOBlock[i].size = size;
            VAllocations++;
            return;// (void*)VAddress;
        }
    }

    IOBlock[i].VAddress = VAddress;
    IOBlock[i].PAddress = PAddress;
    IOBlock[i].size = size;
    VAllocations++;

    return;// (void*)VAddress;
}