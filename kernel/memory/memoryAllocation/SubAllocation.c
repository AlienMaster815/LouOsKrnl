#include <LouAPI.h>

typedef struct __attribute__((packed)) _SUB_ALLOCATION_BLOCK{
    ListHeader  BlockLists;
    uint64_t    Address;
    size_t      size;
}SUB_ALLOCATION_BLOCK, * PSUB_ALLOCATION_BLOCK;

typedef struct __attribute__((packed)) _SUB_ALLOCATION_DIRECTORY{
    ListHeader DirectoryList;
    uint64_t PhysicalAllocatedPagePointer;
    uint64_t VirtualAllocatedPagePointer;
    uint32_t AllocationsMade;
    SUB_ALLOCATION_BLOCK AllocationBlock;
    uint64_t PageFLags;
}SUB_ALLOCATION_DIRECTORY, * PSUB_ALLOCATION_DIRECTORY;

static PSUB_ALLOCATION_DIRECTORY SubDir = 0x00;

static spinlock_t SubMallocationLock;

static uint32_t SubBlocksAllocated = 0;

static inline uint64_t SubAllocateGetFreeAddress(size_t size, size_t Alignment,uint64_t PagePointer){

    return 0;
}

void* LouMallocSpecialAttributesEx(
    size_t size, 
    size_t Alignment, 
    uint64_t PageFlags, 
    bool IdentityMaped
){
    //since we are doing a critical task using a static variable on the heap
    //we are going to use a spinlock
    LouKIRQL LouIrql;
    LouKeAcquireSpinLock(&SubMallocationLock, &LouIrql);
    uint64_t TmpAddr;
    if(!SubDir){
        //alocate the sub directory if not already done
        SubDir = (PSUB_ALLOCATION_DIRECTORY)LouMalloc(sizeof(SUB_ALLOCATION_DIRECTORY));
    }
   
    if(!SubBlocksAllocated){
        if(IdentityMaped){
            //allocate the first page
            TmpAddr = (uint64_t)LouMalloc(MEGABYTE_PAGE);
            SubDir->PhysicalAllocatedPagePointer = TmpAddr;
            SubDir->VirtualAllocatedPagePointer = TmpAddr;
            LouMapAddress(TmpAddr, TmpAddr, PageFlags, MEGABYTE_PAGE);
        }
        else {
            //allocate the first page
            TmpAddr = (uint64_t)LouMalloc(MEGABYTE_PAGE);
            SubDir->PhysicalAllocatedPagePointer = TmpAddr;
            TmpAddr = (uint64_t)LouVMalloc(MEGABYTE_PAGE);
            SubDir->VirtualAllocatedPagePointer = TmpAddr;
            LouMapAddress(
                SubDir->PhysicalAllocatedPagePointer, 
                TmpAddr, PageFlags, MEGABYTE_PAGE
            );

        }
        SubBlocksAllocated++;
    }

    TmpAddr = SubAllocateGetFreeAddress(
        size, Alignment, 
        SubDir->VirtualAllocatedPagePointer
    );

    //release the lock
    LouKeReleaseSpinLock(&SubMallocationLock, &LouIrql);
    return (void*)TmpAddr;
}

void* LouMallocSpecialAttributes(
    size_t size, 
    uint64_t PageFlags, 
    bool IdentityMaped
){
    return LouMallocSpecialAttributesEx(
        size, 
        size, 
        PageFlags, 
        IdentityMaped
    );
}