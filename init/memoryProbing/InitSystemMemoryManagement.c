#include <LouAPI.h>
#include <Bootloader/grub/multiboot2.h>

struct master_multiboot_mmap_entry* LouKeGetMemoryMapTable();

void MapSystemMemoryRegions(){

    struct master_multiboot_mmap_entry* LousineMemoryMapTable = LouKeGetMemoryMapTable();

 uint16_t Number_Of_Entries = (LousineMemoryMapTable->tag.size - sizeof(struct master_multiboot_mmap_entry)) / LousineMemoryMapTable->entry_size;
    if (LousineMemoryMapTable->entry_version == 0) {
        struct multiboot_mmap_entry* mmap_entry;
        for (uint16_t i = 0; i < Number_Of_Entries; i++) {
            mmap_entry = (struct multiboot_mmap_entry*)(uintptr_t)((uint64_t)LousineMemoryMapTable + (uint64_t)sizeof(struct master_multiboot_mmap_entry) + (uint64_t)i * (uint64_t)LousineMemoryMapTable->entry_size);
            uint64_t limit = mmap_entry->len;
            uint64_t address = mmap_entry->addr;
            if ((mmap_entry->type == 0) || (mmap_entry->type == 2) || (mmap_entry->type == 3)
             || (mmap_entry->type == 4) || (mmap_entry->type == 5)){
                EnforceSystemMemoryMap(address, limit);
                for(; address < limit; address += KILOBYTE_PAGE){
                    LouMapAddress(address, address, KERNEL_PAGE_WRITE_PRESENT, KILOBYTE_PAGE);
                }
                LouPrint("address:%h Limit:%h\n", address, limit);
            }
        }
    }
    LouPrint("Done Mapping Memory Regions\n");

}