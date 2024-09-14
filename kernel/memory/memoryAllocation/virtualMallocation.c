#include <LouAPI.h>

void* LouVMallocEx(size_t BytesToAllocate, uint64_t Alignment);
void* LouVMalloc(size_t BytesToAllocate);

typedef struct __attribute__((packed)) _AllocationBlock{
    uint64_t VAddress;
    uint64_t PAddress;
    uint64_t size;
}VAllocationBlock;

static uint8_t IOSlab[9 * MEGABYTE];

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
    return 0x00;
}

uint64_t LouKeVMemmorySearchVirtualSpace(
    uint64_t PAddress
){
    for(uint32_t i = 0 ; i < VAllocations; i++){
        if(IOBlock[i].PAddress == PAddress){
            return IOBlock[i].VAddress;
        }
    }
    return 0x00;
}

void LouKeMapcontinuousMemmoryBlock(
    uint64_t PAddress, 
    uint64_t VAddress,
    uint64_t size, 
    uint64_t FLAGS
    ){
    uint64_t i = 0;

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

    uint64_t VAddress = (uint64_t)LouVMalloc(size);

    LouKeMapcontinuousMemmoryBlock(
        PAddress,
        VAddress,
        size,
        FLAGS
    );

    if(VAllocations == 0){
        IOBlock[0].VAddress = VAddress;
        IOBlock[0].PAddress = PAddress;
        IOBlock[0].size = size;
        VAllocations++;
        return;// (void*)VAddress;
    }

    for(uint64_t i = 0; i < VAllocations; i++){
        if(IOBlock[i].VAddress == 0x00){
            IOBlock[i].VAddress = VAddress;
            IOBlock[i].PAddress = PAddress;
            IOBlock[i].size = size;
            return;// (void*)VAddress;
        }
    }

    IOBlock[VAllocations].VAddress = VAddress;
    IOBlock[VAllocations].PAddress = PAddress;
    IOBlock[VAllocations].size = size;
    VAllocations++;

    return;// (void*)VAddress;
}


void* LouKeAllocateUncachedVMemoryEx(
    uint64_t NumberOfBytes,
    uint64_t Alignment
){
    void* AllocatedPMemory = LouMallocEx(sizeof(NumberOfBytes), Alignment);
    void* AllocatedVMemory = LouVMallocEx(sizeof(NumberOfBytes), Alignment);

    LouKeMapcontinuousMemmoryBlock((uint64_t)AllocatedPMemory, (uint64_t)AllocatedVMemory, NumberOfBytes, KERNEL_PAGE_WRITE_PRESENT | CACHE_DISABLED_PAGE);

    return AllocatedVMemory;
}

void* LouKeAllocateUncachedVMemory(
    uint64_t NumberOfBytes
){
    return LouKeAllocateUncachedVMemoryEx(NumberOfBytes, NumberOfBytes);
}