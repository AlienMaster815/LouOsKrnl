
// allocation.c
// Tyler Grenier

//include headers from freestanding

#include <LouAPI.h>
// define constants
#include <bootloader/grub/multiboot2.h>

void* LouMalloc(size_t BytesToAllocate);

#define BITMAP_TABLE_BASE 0
#define TABLE_SIZE  8

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

                uint64_t* Mapping = (uint64_t*)(uintptr_t)address;

                uint64_t TableSelect = 0, TableEntry = 0;

                while(1){
                    if((uint64_t)((uint64_t)&Mapping[TableSelect] + (uint64_t)TableEntry + (uint64_t)TotalAllocation) == (uint64_t)Addr)break;
                    if(TableEntry > (LongLongBitDimension - 1)){
                        TableEntry = 0;
                        TableSelect++;
                    }
                    else TableEntry++;
                }

                while(size > 0){
                    uint64_t Foowy = Mapping[TableSelect];
                    while(TableEntry < (LongLongBitDimension - 1)){
                        Foowy &= ~(1 << TableEntry);
                        TableEntry++;
                        Mapping[TableSelect] = Foowy;
                        if(TableEntry < (LongLongBitDimension - 1))break;
                     }
                    TableEntry = 0;
                    TableSelect++;
                    size--;
                } 


            }
            else if (mmap_entry->type == 2) continue;
            else if (mmap_entry->type == 3) continue;
            else continue;
        }
    }
}


bool is_aligned(void *address, size_t alignment) {
    // Cast the address to uintptr_t to perform arithmetic on it
    uintptr_t addr = (uintptr_t)address;
    // Check if the address is aligned by checking if it is divisible by the alignment
    return addr % alignment == 0;
}


bool GetNextAllignedBitmap(){



    return true;
}

void* LouMallocEx(size_t BytesToAllocate, uint64_t Flags, uint64_t Alignment){


    //if (BytesToAllocate >= (LongLongBitDemention * BlockDemention)) return NULL;

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
                uint64_t Sector = limit - address;
                uint64_t TotoalAllocation = (Sector / 72) / 8; //Calculate the bitmap ratio of the memory by 8 for 64 bits per 64 bytes

                if(address > GIGABYTE){
                    for (uint64_t i = address; i < TotoalAllocation; i += PAGE_SIZE) {
                        LouMapAddress(i, i, Flags);
                    }
                }

                uint64_t TEMPBTA = BytesToAllocate;
                BitMap = (uint64_t*)(uintptr_t)address;
                uint64_t TableSelect = 0;
                uint64_t StartTableSelect = 0;
                uint8_t TableEntry = 0;
                uint64_t StartTableEntry = 0;

                uint64_t AddressCheck = (uint64_t)&BitMap[BITMAP_TABLE_BASE] + (uint64_t)TotoalAllocation;  //create an address to check address alignment
                AddressCheck &= ~(Alignment - 1);                                                           //align address by setting the bits that arent aligned to 0
                AddressCheck += Alignment;                                                                  //add an alignment to get back to the bitmap space
                                                                                                            //calculate the new table select and TableEntry
                uint64_t CheckMap = AddressCheck;                                                           //create a temp value so we dont overwrite data
                CheckMap -= ((uint64_t)&BitMap[BITMAP_TABLE_BASE] + (uint64_t)TotoalAllocation);            //Subtract the offset of the table and the bitmaps base
                TableSelect = CheckMap / TABLE_SIZE;                                                        //divide the check for the Table Select
                TableEntry = CheckMap - (TableSelect * TABLE_SIZE);                                         //subtract the diference due to the fload affect
                                                                                                            //Start To Find An Open Address
                for(size_t BytesAllocated = 0; BytesAllocated < BytesToAllocate; BytesAllocated++){         //iterate until number of free bytes found
                    if((BitMap[TableSelect] >> TableEntry) & 0x01){                                         //check if the byte entry in the table is already being used
                        AddressCheck += Alignment;                                                          //if it is get the next alligned address
                        CheckMap = AddressCheck;                                                            //do what we did before to get the map entry
                        CheckMap -= ((uint64_t)&BitMap[BITMAP_TABLE_BASE] + (uint64_t)TotoalAllocation);            
                        TableSelect = CheckMap / TABLE_SIZE;                                                        
                        TableEntry = CheckMap - (TableSelect * TABLE_SIZE);
                        BytesAllocated = 0;
                    }
                    else{                                                                                   //otherwise continue with the checks
                        if(TableEntry > (LongLongBitDemention - 1)){
                            TableEntry = 0;
                            TableSelect++;
                        }
                        else{
                            TableEntry++;
                        }   
                    }
                }
                CheckMap = AddressCheck;                                                                    //create a temp value so we dont overwrite data
                CheckMap -= ((uint64_t)&BitMap[BITMAP_TABLE_BASE] + (uint64_t)TotoalAllocation);            //Subtract the offset of the table and the bitmaps base
                TableSelect = CheckMap / TABLE_SIZE;                                                        //divide the check for the Table Select
                TableEntry = CheckMap - (TableSelect * TABLE_SIZE);                                         //subtract the diference due to the fload affect
                //define the result as taken
                
                for(size_t BytesAllocated = 0; BytesAllocated < BytesToAllocate; BytesAllocated++){
                    if(TableEntry > (LongLongBitDemention - 1)){
                        BytesAllocated--;
                        TableEntry = 0;
                        TableSelect++;
                    }
                    else{
                        uint64_t TEMP = BitMap[TableSelect];
                        TEMP |= (1 << TableEntry);
                        BitMap[TableSelect] = TEMP;
                        TableEntry++;
                    }
                }

                return (void*)AddressCheck;
            }
            else if (mmap_entry->type == 2) continue;
            else if (mmap_entry->type == 3) continue;
            else continue;
        }
    }
    return (void*)0x00000000;    

}

void* LouMalloc(size_t BytesToAllocate) {

    return LouMallocEx(BytesToAllocate, KERNEL_PAGE_WRITE_PRESENT,BytesToAllocate);

}