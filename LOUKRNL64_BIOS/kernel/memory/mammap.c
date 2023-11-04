#include <bootloader/grub/multiboot.h>
#include <stdint.h>
#include <kernel/memmory.h>
#include <stdio.h>

const uintptr_t FindProtectedMemoryLimit(){
    uintptr_t max_memory_address = 0;

    multiboot_memory_map_t* mmap;
    uintptr_t mmap_addr = mbi->mmap_addr;  // Store the mmap_addr in an integer

    for (uintptr_t mmap_ptr = mmap_addr;
         mmap_ptr < mmap_addr + mbi->mmap_length;
         mmap_ptr += ((multiboot_memory_map_t*)mmap_ptr)->size + sizeof(((multiboot_memory_map_t*)mmap_ptr)->size)) {

        mmap = (multiboot_memory_map_t*)mmap_ptr;

        if (mmap->type == MULTIBOOT_MEMORY_AVAILABLE && mmap->addr + mmap->len > max_memory_address) {
            max_memory_address = mmap->addr + mmap->len;
            return max_memory_address;
        }
    }

}
