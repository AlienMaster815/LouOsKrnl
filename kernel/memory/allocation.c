
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
    for (SIZE i = 0; i < size; i++) *(Addr + i) = 0;
    return 0;
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

//void* malloc(size_t BytesToAllocate) {

//}

struct master_multiboot_mmap_entry* LousineMemoryMapTable;

void SendMapToAllocation(struct master_multiboot_mmap_entry* mmap) {
    LousineMemoryMapTable = mmap;
}


void LouFree(RAMADD Addr, SIZE size) {
    for (SIZE i = 0; i < size; i++) *(Addr + i) = 0;
}

void* LouMalloc(size_t BytesToAllocate) {

#ifdef IS_X86_64
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
                if ((mmap_entry->addr + mmap_entry->len) < (500ULL * MEGABYTE))continue;
                else if (mmap_entry->addr < (500ULL * MEGABYTE)) {
                    limit = (mmap_entry->addr + mmap_entry->len) - (500 * MEGABYTE);
                    address = (500 * MEGABYTE);
                }
                //LouPrint("Starting Address Is:%d\n", mmap_entry->addr);
                //LouPrint("Address Buffer Is:%d\n", limit);
                if ((address + limit) > limit)continue;

                for (uint64_t i = address; i < limit;i+=PAGE_SIZE) {
                    LouMapAddress(i, i, KERNEL_PAGE_WRITE_PRESENT);
                }
                
                bool FoundAnAddress = true;
                size_t i;
                for (uint8_t* CurrentAddress = (uint8_t*)address; CurrentAddress < (CurrentAddress + limit); true) {
                    FoundAnAddress = true;
                    for (i = 0; i < BytesToAllocate;i++) {
                        if (*(CurrentAddress + i) != 0) {
                            FoundAnAddress = false;
                            break;
                        }
                    }
                    if (FoundAnAddress) {
                        for (i = 0; i < BytesToAllocate;i++) {
                            *(CurrentAddress + i) = 255;
                        }
                        return CurrentAddress;
                    }
                    else {
                        CurrentAddress = (CurrentAddress + i + 1);
                    }
                }

            }
            else if (mmap_entry->type == 2) continue;
            else if (mmap_entry->type == 3) continue;
            else continue;
        }
    }
    return 0x00000000;
#endif
}

