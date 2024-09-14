
// allocation.c
// Tyler Grenier

//include headers from freestanding

#include <LouAPI.h>
// define constants
#include <bootloader/grub/multiboot2.h>

void* LouMalloc(size_t BytesToAllocate);

#define BITMAP_TABLE_BASE 0
#define TABLE_SIZE  8

uint64_t GetRamSize();


RAMADD Lou_Alloc_Mem(SIZE size) {
    return (RAMADD)LouMalloc(size);
}

STATUS Lou_Free_Mem(RAMADD Addr, SIZE size) {
    LouFree(Addr);
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

RAMADD Lou_Alloc_Mem_Alligned(SIZE size, uint64_t alignment) {
    // Ensure the alignment is at least the size of a pointer and is a power of 2
    if (alignment < sizeof(void*) || (alignment & (alignment - 1)) != 0) {
        alignment = sizeof(void*); // Set minimum alignment to pointer size
    }

    // Allocate extra memory to ensure we can align properly within it
    SIZE totalSize = size + alignment - 1 + sizeof(uintptr_t); // Include space to store the base address
    uintptr_t rawAddress = (uintptr_t)Lou_Alloc_Mem(totalSize);

    if (!rawAddress) {
        return NULL; // Allocation failed
    }

    // Calculate the aligned memory address
    uintptr_t alignedAddress = (rawAddress + sizeof(uintptr_t) + alignment - 1) & ~(alignment - 1);

    // Store the original address just before the aligned address
    *((uintptr_t*)(alignedAddress - sizeof(uintptr_t))) = rawAddress;

    return (RAMADD)alignedAddress;
}


void LouFreeAlignedMemory(RAMADD alignedAddr, SIZE size) {
    // Retrieve the original address stored just before the aligned address
    uintptr_t originalAddress = *((uintptr_t*)((uintptr_t)alignedAddr - sizeof(uintptr_t)));

    // Calculate the total size allocated originally
    uintptr_t alignmentOffset = (uintptr_t)alignedAddr - originalAddress;
    SIZE totalSize = size + alignmentOffset + sizeof(uintptr_t);

    // Free the original memory block
    Lou_Free_Mem((void*)originalAddress, totalSize);
}

void* LouMallocAlligned(SIZE size, uint64_t allignment){
    return (void*)Lou_Alloc_Mem_Alligned(size,allignment);
}


struct master_multiboot_mmap_entry* LousineMemoryMapTable;

void SendMapToAllocation(struct master_multiboot_mmap_entry* mmap) {
    LousineMemoryMapTable = mmap;
}

struct master_multiboot_mmap_entry* LouKeGetMemoryMapTable(){
    return LousineMemoryMapTable;
}

#define LongLongBitDemention 64
#define LongLongBitDimension 64
#define BlockDemention 1024

#define BitMapDivisor 1

static uint64_t* BitMap;
#define StartMap (64ULL * MEGABYTE)



bool is_aligned(void *address, size_t alignment) {
    // Cast the address to uintptr_t to perform arithmetic on it
    uintptr_t addr = (uintptr_t)address;
    // Check if the address is aligned by checking if it is divisible by the alignment
    return addr % alignment == 0;
}


bool GetNextAllignedBitmap(){



    return true;
}

typedef struct __attribute__((packed)) _AllocationBlock{
    uint64_t Address;
    uint64_t size;
}AllocationBlock;

static uint8_t DataSlab[12 * MEGABYTE];

static AllocationBlock* AddressBlock = (AllocationBlock*)&DataSlab;

static uint32_t AddressesLogged = 0;

uint64_t GetAllocationBlockSize(uint64_t Address){

    for(uint16_t i = 0; i < AddressesLogged; i++){
        if((AddressBlock[i].Address <= Address) && ((AddressBlock[i].Address + AddressBlock[i].size) > Address)){
            return AddressBlock[i].size - (Address - AddressBlock[i].Address);
        }
    }

    return 0x00;
}

bool EnforceSystemMemoryMap(
    uint64_t Address, 
    uint64_t size
){

    for(uint32_t i = 0 ; i < AddressesLogged; i++){
        if(AddressBlock[i].Address == 0x00){
            AddressBlock[i].Address = Address;
            AddressBlock[i].size = size;
            return true;
        }
    }

    AddressBlock[AddressesLogged].Address = Address;
    AddressBlock[AddressesLogged].size = size;
    AddressesLogged++;

    return true;
}

static bool IsEarlyMallocation = true;

void LouFree(RAMADD Addr) {
    if(IsEarlyMallocation == true){
        for(uint32_t i = 0 ; i < AddressesLogged; i++){
            if(AddressBlock[i].Address == (uint64_t)Addr){
                AddressBlock[i].Address = 0x00;
                AddressBlock[i].size = 0x00;
            }
        }
    }
}

void* LouVMallocEx(size_t BytesToAllocate, uint64_t Alignment){
    uint64_t AlignmentCheck = GetRamSize();
    AlignmentCheck &= ~(Alignment - 1);
    
    while (1) {
        AlignmentCheck += Alignment;

        bool addrssSpaceCheck = true;

        for (uint32_t i = 0; i < AddressesLogged; i++) {
            uint64_t start = AddressBlock[i].Address;
            uint64_t end = start + AddressBlock[i].size;

                                // Check if the new allocation overlaps with an existing block
            if ((AlignmentCheck >= start && AlignmentCheck < end) ||  // Start within an existing block
            ((AlignmentCheck + BytesToAllocate) > start && (AlignmentCheck + BytesToAllocate) <= end) || // End within an existing block
            (AlignmentCheck <= start && (AlignmentCheck + BytesToAllocate) >= end)) { // Encompasses an existing block
                addrssSpaceCheck = false;
                break;
            }
        }


        if (!addrssSpaceCheck) {
            continue;
        }

        // Found an address
        for (uint32_t i = 0; i < AddressesLogged; i++) {
            if (AddressBlock[i].Address == 0x00) {
                AddressBlock[i].Address = AlignmentCheck;
                AddressBlock[i].size = BytesToAllocate;
                //LouPrint("Address:%h\n", AlignmentCheck);
                return (void*)AlignmentCheck;
            }
        }

        if (AddressesLogged >= (786432)) {
            // System overload
            return NULL;
        }

        AddressBlock[AddressesLogged].Address = AlignmentCheck;
        AddressBlock[AddressesLogged].size = BytesToAllocate;
        AddressesLogged++; // Increment after logging the new address
        //LouPrint("Address:%h\n", AlignmentCheck);
        return (void*)AlignmentCheck;
    }
}

void* LouVMalloc(size_t BytesToAllocate){
    return LouVMallocEx(BytesToAllocate, BytesToAllocate);
}

void* LouMallocEx(size_t BytesToAllocate, uint64_t Alignment) {
    uint16_t Number_Of_Entries = (LousineMemoryMapTable->tag.size - sizeof(struct master_multiboot_mmap_entry)) / LousineMemoryMapTable->entry_size;
    if (LousineMemoryMapTable->entry_version == 0) {
        struct multiboot_mmap_entry* mmap_entry;
        for (uint16_t i = 0; i < Number_Of_Entries; i++) {
            mmap_entry = (struct multiboot_mmap_entry*)(uintptr_t)((uint64_t)LousineMemoryMapTable + (uint64_t)sizeof(struct master_multiboot_mmap_entry) + (uint64_t)i * (uint64_t)LousineMemoryMapTable->entry_size);
            uint64_t limit = mmap_entry->len;
            uint64_t address = mmap_entry->addr;
            if (mmap_entry->type == 0) continue; // Skip unusable memory
            else if (mmap_entry->type == 1) {
                // Skip if system memory

                if ((mmap_entry->addr + mmap_entry->len) < StartMap) continue;
                else if (mmap_entry->addr < StartMap) {
                    limit = (mmap_entry->addr + mmap_entry->len) - StartMap;
                    address = StartMap;
                }

                uint64_t AlignmentCheck = (address & ~(Alignment - 1));
                if(IsEarlyMallocation == true){
                    if (AddressesLogged == 0) {
                        AddressBlock[0].Address = AlignmentCheck;
                        AddressBlock[0].size = BytesToAllocate;
                        AddressesLogged++; // Increment after logging the first address
                        memset((void*)AlignmentCheck, 0 , BytesToAllocate);
                        return (void*)AlignmentCheck;
                    }

                    while (1) {
                        if (((AlignmentCheck + Alignment) > limit) || ((AlignmentCheck + BytesToAllocate + Alignment) > limit)) {
                            break;
                        }
                        AlignmentCheck += Alignment;

                        bool addrssSpaceCheck = true;

                        for (uint32_t i = 0; i < AddressesLogged; i++) {
                            uint64_t start = AddressBlock[i].Address;
                            uint64_t end = start + AddressBlock[i].size;

                            // Check if the new allocation overlaps with an existing block
                            if ((AlignmentCheck >= start && AlignmentCheck < end) ||  // Start within an existing block
                                ((AlignmentCheck + BytesToAllocate) > start && (AlignmentCheck + BytesToAllocate) <= end) || // End within an existing block
                                (AlignmentCheck <= start && (AlignmentCheck + BytesToAllocate) >= end)) { // Encompasses an existing block
                                addrssSpaceCheck = false;
                                break;
                            }
                        }


                        if (!addrssSpaceCheck) {
                            continue;
                        }

                        // Found an address
                        for (uint32_t i = 0; i < AddressesLogged; i++) {
                            if (AddressBlock[i].Address == 0x00) {
                                AddressBlock[i].Address = AlignmentCheck;
                                AddressBlock[i].size = BytesToAllocate;
                                //LouPrint("Address:%h\n", AlignmentCheck);
                                memset((void*)AlignmentCheck, 0 , BytesToAllocate);
                                return (void*)AlignmentCheck;
                            }
                        }

                        if (AddressesLogged >= (786432)) {
                            // System overload
                            return NULL;
                        }

                        AddressBlock[AddressesLogged].Address = AlignmentCheck;
                        AddressBlock[AddressesLogged].size = BytesToAllocate;
                        AddressesLogged++; // Increment after logging the new address
                        //LouPrint("Address:%h\n", AlignmentCheck);
                        memset((void*)AlignmentCheck, 0 , BytesToAllocate);                    
                        return (void*)AlignmentCheck;
                    }
                }
            }
            else if (mmap_entry->type == 2) continue;
            else if (mmap_entry->type == 3) continue;
            else continue;
        }
    }
    return NULL;    
}

void* LouMalloc(size_t BytesToAllocate) {

    return LouMallocEx(BytesToAllocate, BytesToAllocate);

}

void ListUsedAddresses(){
    for(uint32_t i = 0 ; i < AddressesLogged; i++){
        LouPrint("Address:%d : Size:%d\n",AddressBlock[i].Address,AddressBlock[i].size);
        sleep(250);
    }   
}

uint64_t SearchForMappedAddressSize(uint64_t Address){
    for(uint32_t i = 0; i < AddressesLogged; i++){
        if(Address == AddressBlock[i].Address){
            return AddressBlock[i].size;
        }
    }
}