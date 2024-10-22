#include <LouAPI.h>

typedef struct _USER_MODE_VMEM_TRACK{
    ListHeader TrackLink;
    uint64_t PAddress;
    uint64_t VAddress;
    uint64_t size;
}USER_MODE_VMEM_TRACK, * PUSER_MODE_VMEM_TRACK;

//static spinlock_t UserAllocLock;

uint64_t LouKeMallocFromMap(
    uint64_t BytesNeeded,
    uint64_t MapStart,
    uint64_t MapEnd,
    uint64_t MappedTrack,
    PUSER_MODE_VMEM_TRACK MappedAddresses
){

    uint64_t AlignedAddress = MapStart & ~(BytesNeeded - 1);
    AlignedAddress += BytesNeeded;
    bool AddressValid = false;

    while((AlignedAddress + BytesNeeded) <= MapEnd){
        PUSER_MODE_VMEM_TRACK Tmp = MappedAddresses;

        for(uint64_t i = 0 ; i <= MappedTrack; i++){
            AddressValid = RangeDoesNotInterfere(
                AlignedAddress, 
                BytesNeeded,
                Tmp->VAddress,
                Tmp->size
            );
            if(!AddressValid){
                break;
            }
            if(Tmp->TrackLink.NextHeader){
                Tmp = (PUSER_MODE_VMEM_TRACK)Tmp->TrackLink.NextHeader; 
            }
        }

        if(AddressValid){
            //found a new allocation
            return AlignedAddress; 
        }
        AlignedAddress += BytesNeeded;
    }
    return 0x00;
}