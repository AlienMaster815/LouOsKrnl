#include <LouAPI.h>

//for reduced overhead pages are 2mb
typedef struct _MEMORY_CHUNK{
    ListHeader TrackLink;
    uint64_t PAddress;
    uint64_t VAddress;
    uint8_t NumPages;
}MEMORY_CHUNK, * PMEMORY_CHUNK;

typedef struct _USER_MODE_VMEM_TRACK{
    ListHeader TrackLink;
    uint64_t PAddress;
    uint64_t VAddress;
    uint64_t size;
}USER_MODE_VMEM_TRACK, * PUSER_MODE_VMEM_TRACK;

static USER_MODE_VMEM_TRACK MasterTrack;
static MEMORY_CHUNK MasterChunk;

static uint64_t AllocationTracks = 0;
static uint64_t ChunkTrack = 0;

uint64_t LouKeMallocFromMap(
    uint64_t BytesNeeded,
    uint64_t MapStart,
    uint64_t MapEnd,
    uint64_t MappedTrack,
    PUSER_MODE_VMEM_TRACK MappedAddresses
);

static spinlock_t UserMallocLock;

void LouUserMalloc(uint64_t DataP){
    LouKIRQL LouIrql;
    LouKeAcquireSpinLock(&UserMallocLock, &LouIrql);

    uint64_t* Data = (uint64_t*)DataP;

    if(ChunkTrack == 0){
        if(*Data < MEGABYTE_PAGE){
            MasterChunk.PAddress = (uint64_t)LouMalloc(MEGABYTE_PAGE);
            MasterChunk.VAddress = (uint64_t)LouVMalloc(MEGABYTE_PAGE);
            MasterChunk.NumPages = 1;
            LouKeMapContinuousMemmoryBlock(MasterChunk.PAddress, MasterChunk.VAddress, MEGABYTE_PAGE, PAGE_USER | PAGE_PRESENT | WRITEABLE_PAGE);
            ChunkTrack++;
        }else{
            uint8_t NeededPages = ROUND_UP64(*Data, MEGABYTE_PAGE);
            MasterChunk.PAddress = (uint64_t)LouMalloc(MEGABYTE_PAGE * NeededPages);
            MasterChunk.VAddress = (uint64_t)LouVMalloc(MEGABYTE_PAGE * NeededPages);
            MasterChunk.NumPages = NeededPages;
            LouKeMapContinuousMemmoryBlock(MasterChunk.PAddress, MasterChunk.VAddress, MEGABYTE_PAGE * NeededPages, PAGE_USER | PAGE_PRESENT | WRITEABLE_PAGE);
            ChunkTrack++;
        }
    }

    PMEMORY_CHUNK TmpChunk = (PMEMORY_CHUNK)&MasterChunk;

    uint64_t Pointer = 0x00;
    while(!Pointer){
        Pointer = LouKeMallocFromMap(
            *Data, MasterChunk.VAddress,
            TmpChunk->VAddress + ((2 * MEGABYTE_PAGE) * TmpChunk->NumPages),
            AllocationTracks,
            &MasterTrack
        );
        if(TmpChunk->TrackLink.NextHeader){
            TmpChunk = (PMEMORY_CHUNK)TmpChunk->TrackLink.NextHeader;
        }else{
            TmpChunk->TrackLink.NextHeader = LouMalloc(sizeof(MEMORY_CHUNK));
            TmpChunk = (PMEMORY_CHUNK)TmpChunk->TrackLink.NextHeader;
            if(*Data < MEGABYTE_PAGE){
                TmpChunk->PAddress = (uint64_t)LouMalloc(MEGABYTE_PAGE);
                TmpChunk->VAddress = (uint64_t)LouVMalloc(MEGABYTE_PAGE);
                TmpChunk->NumPages = 1;
                LouKeMapContinuousMemmoryBlock(TmpChunk->PAddress, TmpChunk->VAddress, MEGABYTE_PAGE, PAGE_USER | PAGE_PRESENT | WRITEABLE_PAGE);
                ChunkTrack++;
            }else{
                uint8_t NeededPages = ROUND_UP64(*Data, MEGABYTE_PAGE);
                TmpChunk->PAddress = (uint64_t)LouMalloc(MEGABYTE_PAGE * NeededPages);
                TmpChunk->VAddress = (uint64_t)LouVMalloc(MEGABYTE_PAGE * NeededPages);
                TmpChunk->NumPages = NeededPages;
                LouKeMapContinuousMemmoryBlock(TmpChunk->PAddress, TmpChunk->VAddress, MEGABYTE_PAGE * NeededPages, PAGE_USER | PAGE_PRESENT | WRITEABLE_PAGE);
                ChunkTrack++;
            }
        }
    }

    *Data = Pointer;
    LouKeReleaseSpinLock(&UserMallocLock, &LouIrql);
    return;//Endof SYSTEMCALL
}