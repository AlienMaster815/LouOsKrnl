
// allocation.c
// Tyler Grenier
// this will not compile for a while so
// if your looking for this to compile 
// go Fuck Yourself



//include headers from freestanding

#include <LouAPI.h>
// define constants
#include <bootloader/grub/multiboot2.h>

void* LouMalloc(size_t BytesToAllocate);

RAMADD Lou_Alloc_Mem(SIZE size) {
    return (RAMADD)LouMalloc(size);
}

STATUS Lou_Free_Mem(RAMADD Addr, SIZE size) {
    LouFree(Addr,size);
    return GOOD;
}

void* Lou_Calloc_Mem(size_t numElements, size_t sizeOfElement) {
    // Check for overflow in the multiplication
    if (numElements == 0 || sizeOfElement == 0 || SIZE_MAX / numElements < sizeOfElement) {
        return NULL; // Overflow occurred, return NULL
    }

    // Calculate the total size needed
    size_t totalSize = numElements * sizeOfElement;

    // Allocate memory using malloc
    void* ptr = Lou_Alloc_Mem(totalSize);

    // Check if memory allocation was successful
    if (ptr != NULL) {
        // Clear the allocated memory by setting all bytes to zero
        memset(ptr, 0, totalSize);
    }

    return ptr;
}

RAMADD Lou_Alloc_Mem_Alligned(SIZE size, uint64_t allignment) {
    RAMADD foo = (RAMADD)align_memory(Lou_Alloc_Mem(size),allignment);

    CHECK_AGAIN:

    LouPrint("Checking If Address Is Free\n");

    for (uint32_t i = 0; i < size; i++) {
        if (0 != *(foo + i))goto FIX;
    }

    LouPrint("Found A Free Block\n");

    return foo;
 
    FIX:

    LouPrint("Address Givien For Allignment Is Not Free Fixing Now\n");

    foo += allignment;

    goto CHECK_AGAIN;
}



struct master_multiboot_mmap_entry* LousineMemoryMapTable;

void SendMapToAllocation(struct master_multiboot_mmap_entry* mmap) {
    LousineMemoryMapTable = mmap;
}

#define LongLongBitDemention 64
#define LongLongBitDimension 64
#define BlockDemention 1024
#define StartMap (10ULL * MEGABYTE)




static uint64_t* BitMap;

void LouFree(RAMADD Addr, SIZE size) {
    uint16_t Number_Of_Entries = (LousineMemoryMapTable->tag.size - sizeof(struct master_multiboot_mmap_entry)) / LousineMemoryMapTable->entry_size;
    if (LousineMemoryMapTable->entry_version == 0) {
        struct multiboot_mmap_entry* mmap_entry;
        for (uint16_t i = 0; i < Number_Of_Entries; i++) {
            mmap_entry = (struct multiboot_mmap_entry*)(uintptr_t)((uint64_t)LousineMemoryMapTable + (uint64_t)sizeof(struct master_multiboot_mmap_entry) + (uint64_t)i * (uint64_t)LousineMemoryMapTable->entry_size);
            uint64_t limit = mmap_entry->len;
            uint64_t address = mmap_entry->addr;
            if (mmap_entry->type == 0) continue; // don't touch
            else if (mmap_entry->type == 1) {
                // skip if system memory or not part of the address table
                if ((mmap_entry->addr + mmap_entry->len) < StartMap) continue;
                else if (mmap_entry->addr < StartMap) {
                    limit = (mmap_entry->addr + mmap_entry->len) - StartMap;
                    address = StartMap;
                }

                if ((Addr > (RAMADD)(address + limit)) || Addr < (RAMADD)address) continue;

                //for (uint64_t i = address; i < limit; i += PAGE_SIZE) {
                    //LouMapAddress(i, i, KERNEL_PAGE_WRITE_PRESENT);
                //}

                uint64_t Sector = limit - address;
                uint64_t TotalAllocation = (Sector / 72) / 8;

                for (uint64_t TableSelect = 0; TableSelect < TotalAllocation; TableSelect++) {
                    for (uint8_t TableEntry = 0; TableEntry < LongLongBitDimension; TableEntry++) {
                        // Calculate the current address
                        uint64_t currentAddress = (uintptr_t)(address + TableSelect * LongLongBitDimension * sizeof(uint64_t)) + TableEntry * sizeof(uint64_t);

                        if ((RAMADD)currentAddress == Addr) {
                            size_t SizeDone = 0;

                            for (; TableSelect < TotalAllocation; TableSelect++) {
                                // Read a 64-bit value into the stack buffer
                                uint64_t stackBuffer = *((uint64_t*)(address + TableSelect * LongLongBitDimension * sizeof(uint64_t)));

                                for (; TableEntry < LongLongBitDimension; TableEntry++) {
                                    // Modify the stack buffer
                                    stackBuffer &= ~(1ULL << TableEntry);
                                    SizeDone++;

                                    // Check if the modification size is met
                                    if (SizeDone == size) {
                                        // Write the modified value back to RAM
                                        *((uint64_t*)(address + TableSelect * LongLongBitDimension * sizeof(uint64_t))) = stackBuffer;
                                        return;
                                    }
                                }

                                // Write the modified value back to RAM
                                *((uint64_t*)(address + TableSelect * LongLongBitDimension * sizeof(uint64_t))) = stackBuffer;

                                // Reset TableEntry for the next 64-bit value
                                TableEntry = 0;
                            }
                        }
                    }
                }

                return;
            }
            else if (mmap_entry->type == 2) continue;
            else if (mmap_entry->type == 3) continue;
            else continue;
        }
    }
}

static inline void LouKeMapByteToTable(uint64_t* MapStart,uint64_t StartTableSelect, uint8_t StartTableEntry, size_t BytesToAllocate) {

    size_t BytesAllocated = 0;

    for (uint64_t TS = StartTableSelect; BytesAllocated < BytesToAllocate; TS++) {
        for (uint8_t TE = StartTableEntry; TE < LongLongBitDemention; TE++){
            MapStart[TS] |= (1ULL << TE);
            BytesAllocated++;
            if (BytesAllocated >= BytesToAllocate)return;
        }
        StartTableEntry = 0;
    }
}


void* LouMallocEx(size_t BytesToAllocate, uint64_t Flags) {

    if (BytesToAllocate >= (LongLongBitDemention * BlockDemention)) return NULL;

    uint16_t Number_Of_Entries = (LousineMemoryMapTable->tag.size - sizeof(struct master_multiboot_mmap_entry)) / LousineMemoryMapTable->entry_size;
    if (LousineMemoryMapTable->entry_version == 0) {
        struct multiboot_mmap_entry* mmap_entry;
        for (uint16_t i = 0; i < Number_Of_Entries; i++) {
            mmap_entry = (struct multiboot_mmap_entry*)(uintptr_t)((uint64_t)LousineMemoryMapTable + (uint64_t)sizeof(struct master_multiboot_mmap_entry) + (uint64_t)i * (uint64_t)LousineMemoryMapTable->entry_size);
            uint64_t limit = mmap_entry->len;
            uint64_t address = mmap_entry->addr;
            if (mmap_entry->type == 0)continue;//dont touch shit
            else if (mmap_entry->type == 1) {
                //skip if system memory


                if ((mmap_entry->addr + mmap_entry->len) < (StartMap))continue;
                else if (mmap_entry->addr < (StartMap)) {
                    limit = (mmap_entry->addr + mmap_entry->len) - (StartMap);
                    address = (StartMap);
                }
                //LouPrint("Starting Address Is:%d\n", mmap_entry->addr);
                //LouPrint("Address Buffer Is:%d\n", limit);


                uint64_t Sector = limit - address;
                uint64_t TotoalAllocation = (Sector / 72) / 8; //Calculate the bitmap ratio of the memory by 8 for 64 bits per 64 bytes


                for (uint64_t i = address; i < TotoalAllocation; i += PAGE_SIZE) {
                    LouMapAddress(i, i, Flags);
                }

                BitMap = (uint64_t*)(uintptr_t)address;

                size_t BitsChecked = 0;

                uint64_t StartTableSelect = 0;
                uint8_t StartTableEntry = 0;

                for (uint64_t TableSelect = 0; TableSelect < TotoalAllocation; TableSelect++) {
                    uint64_t TableEntry = *(BitMap + TableSelect);// store a temp variable so we dont hog system memory
                    for (uint8_t BitCheck = 0; BitCheck < LongLongBitDemention; BitCheck++) {
                        //Check If the Bit Is FLipped
                        if ((TableEntry >> BitCheck) & 0x01){
                            BitsChecked = 0;
                            if (BitCheck < (LongLongBitDemention - 1)) {
                                StartTableSelect = TableSelect;
                                StartTableEntry =  BitCheck++;
                            }
                            else {
                                StartTableSelect = TableSelect++;
                                StartTableEntry  = 0;
                            }
                        }
                        else {
                            BitsChecked++;
                        }
                        if (BitsChecked >= BytesToAllocate) {
                            //Found An address

                            LouKeMapByteToTable(BitMap, StartTableSelect, StartTableEntry, BytesToAllocate);
                            return (void*)(uintptr_t)((&BitMap[StartTableSelect] + StartTableEntry) + TotoalAllocation);
                        }
                    }
                }
            }
            else if (mmap_entry->type == 2) continue;
            else if (mmap_entry->type == 3) continue;
            else continue;
        }
    }
    return (void*)0x00000000;

}


void* LouMalloc(size_t BytesToAllocate) {

    return LouMallocEx(BytesToAllocate, KERNEL_PAGE_WRITE_PRESENT);

}


