#include <LouAPI.h>






static LMPOOL_DIRECTORY PoolDirectory;
static uint64_t AllocatedPools = 0;

static inline 
void InitializePool(
    uint64_t LastHeader,
    PLMPOOL_DIRECTORY NewDirectory,
    string Tag,
    uint64_t Location,
    uint64_t PoolSize,
    uint64_t ObjectSize,
    uint64_t Flags
){

    NewDirectory->List.LastHeader = (PListHeader)LastHeader;
    
    NewDirectory->List.NextHeader = 0x00;
    NewDirectory->Tag = Tag;
    NewDirectory->Location = Location;
    NewDirectory->ObjectSize = ObjectSize; 
    NewDirectory->Flags = Flags;
    NewDirectory->PoolSize = PoolSize;
    NewDirectory->PoolBitMap = LouMalloc((PoolSize / ObjectSize + 7) / 8);
}

PLMPOOL_DIRECTORY LouKeMapPool(
    uint64_t LocationOfPool,
    uint64_t PoolSize,
    uint64_t ObjectSize,
    string Tag,
    uint64_t Flags
){

    if(!AllocatedPools){
        InitializePool(
            0x00, 
            &PoolDirectory, 
            Tag, 
            LocationOfPool, 
            PoolSize, 
            ObjectSize, 
            Flags
        );
        AllocatedPools++;
        return &PoolDirectory;
    }

    PLMPOOL_DIRECTORY Tmp = &PoolDirectory;

    for(uint64_t i = 0; i < AllocatedPools; i++){
        if(Tmp->Location == 0x00){
            InitializePool(
                (uint64_t)Tmp->List.LastHeader, 
                Tmp, 
                Tag, 
                LocationOfPool, 
                PoolSize, 
                ObjectSize, 
                Flags
            );
            return Tmp;
        }
        if(Tmp->List.NextHeader){
            Tmp = (PLMPOOL_DIRECTORY)Tmp->List.NextHeader;
        }
    }

    PLMPOOL_DIRECTORY NewDir = (PLMPOOL_DIRECTORY)LouMalloc(sizeof(LMPOOL_DIRECTORY));

    InitializePool(
                (uint64_t)Tmp,
                NewDir,                
                Tag, 
                LocationOfPool, 
                PoolSize, 
                ObjectSize, 
                Flags
            );
    

    return NewDir;
}

void LouKeFreePool(PLMPOOL_DIRECTORY PoolToFree){
    PLMPOOL_DIRECTORY Tmp = &PoolDirectory;
    for(uint64_t i = 0; i < AllocatedPools; i++){
        if(Tmp == PoolToFree){
            Tmp->Location = 0x00;
        }
        Tmp = (PLMPOOL_DIRECTORY)Tmp->List.NextHeader;
    }
}

void* LouKeMallocFromPool(
    PLMPOOL_DIRECTORY Pool, 
    uint64_t size, 
    uint64_t* Offset
){
    uint64_t MapEntrys = (Pool->PoolSize / Pool->ObjectSize + 7) / 8;
    uint64_t BytesAllocated = 0;

    for (uint64_t i = 0; i < MapEntrys; i++) {
        uint8_t Map = Pool->PoolBitMap[i];
        for (uint8_t j = 0; j < 8; j++) {
            if (!((Map >> j) & 0x01)) {  // Check if the bit is free (0)
                BytesAllocated += Pool->ObjectSize;
                if (BytesAllocated >= size) {
                    // Calculate the offset within the pool
                    uint64_t calculated_offset = (i * (Pool->ObjectSize * 8)) + (j * Pool->ObjectSize);
                    
                    // Assign the offset to the provided pointer
                    if (Offset) {
                        *Offset = calculated_offset;
                    }

                    // Return the address of the allocated memory
                    return (void*)(Pool->Location + calculated_offset);
                }
            } else {
                BytesAllocated = 0;  // Reset if not consecutive
            }
        }
    }

    // Return an error or null if no block was found
    return 0;
}

void LouKeFreeFromPool(PLMPOOL_DIRECTORY Pool, void* Address, uint64_t size) {
    // Ensure the address is within the pool's range
    if ((uint64_t)Address < Pool->Location || (uint64_t)Address >= (Pool->Location + Pool->PoolSize)) {
        // Address is outside of the pool range, handle error (return or log)
        return;
    }

    // Calculate the offset from the base of the pool
    uint64_t offset = (uint64_t)Address - Pool->Location;

    // Calculate the starting index and bit position in the bitmap
    uint64_t start_index = offset / (Pool->ObjectSize * 8);
    uint64_t start_bit = (offset % (Pool->ObjectSize * 8)) / Pool->ObjectSize;

    uint64_t BytesFreed = 0;

    // Traverse through the bitmap and free the relevant blocks
    for (uint64_t i = start_index; i < (Pool->PoolSize / Pool->ObjectSize + 7) / 8; i++) {
        for (uint8_t j = (i == start_index) ? start_bit : 0; j < 8; j++) {
            // Mark the bit as free (set to 0)
            Pool->PoolBitMap[i] &= ~(1 << j);  // Clear the bit to mark as free

            BytesFreed += Pool->ObjectSize;
            if (BytesFreed >= size) {
                return;  // All requested bytes freed
            }
        }
    }
}
