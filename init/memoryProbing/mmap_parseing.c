#include <LouAPI.h>
#include <bootloader/grub/multiboot2.h>

void SendMapToAllocation(struct master_multiboot_mmap_entry* mmap);

static uint64_t mlimit;

uint64_t GetRamSize() {
    return mlimit;
}


void RegisterRamMap(struct multiboot_mmap_entry* mmap_entry) {

    //LouKeMapContinuousMemmoryBlock(mmap_entry->addr, mmap_entry->addr,mmap_entry->len, KERNEL_PAGE_WRITE_PRESENT);
    if((mmap_entry->addr + mmap_entry->len) > mlimit)mlimit = mmap_entry->addr + mmap_entry->len;
}

static struct multiboot_mmap_entry* AcpiMapEntry;

void RegisterACPIMap(struct multiboot_mmap_entry* mmap_entry) {

    EnforceSystemMemoryMap(mmap_entry->addr, mmap_entry->len);
    for(uint64_t i = mmap_entry->addr; i < (mmap_entry->addr + mmap_entry->len);i += KILOBYTE_PAGE){
        LouMapAddress(i,i, KERNEL_PAGE_WRITE_PRESENT, KILOBYTE_PAGE);
    }
    AcpiMapEntry = mmap_entry;
    if((mmap_entry->addr + mmap_entry->len) > mlimit)mlimit = mmap_entry->addr + mmap_entry->len;
}



void RegisterNotUsable(struct multiboot_mmap_entry* mmap_entry) {
    EnforceSystemMemoryMap(mmap_entry->addr, mmap_entry->len);
}

void ParseMemoryMap(struct multiboot_tag* MBOOT) {

    struct master_multiboot_mmap_entry* mmap = (struct master_multiboot_mmap_entry*)MBOOT;

    //LouPrint("Memory Map Tag Type:%d\n", mmap->tag.type);
    //LouPrint("Memory Map Tag Size:%d\n", mmap->tag.size);
    //LouPrint("Memory map entry size:%d\n", mmap->entry_size);
    //LouPrint("Memory map entry version:%d\n", mmap->entry_version);

    uint16_t Number_Of_Entries = (mmap->tag.size - sizeof(struct master_multiboot_mmap_entry)) / mmap->entry_size;

    //LouPrint("Number Of Map Entries:%d\n", Number_Of_Entries);

    //parse version 0
    if (mmap->entry_version == 0) {
        SendMapToAllocation(mmap);
        struct multiboot_mmap_entry* mmap_entry;
        for (uint16_t i = 0; i < Number_Of_Entries; i++) {
            mmap_entry = (struct multiboot_mmap_entry*)(uintptr_t)((uint64_t)mmap + (uint64_t)sizeof(struct master_multiboot_mmap_entry) + (uint64_t)i * (uint64_t)mmap->entry_size);

            if (mmap_entry->type == 0){
                //dont touch shit just map it
                EnforceSystemMemoryMap(mmap_entry->addr, mmap_entry->len);
            }
            else if (mmap_entry->type == 1)RegisterRamMap(mmap_entry);
            else if (mmap_entry->type == 2)RegisterNotUsable(mmap_entry);
            else if (mmap_entry->type == 3)RegisterACPIMap(mmap_entry);
            else {
                if ((mmap_entry->addr + mmap_entry->len) > mlimit)mlimit = mmap_entry->addr + mmap_entry->len;
                //LouPrint("address is:%d\n", mmap_entry->addr);
                //LouPrint("length is:%d\n", mmap_entry->len);
                //LouPrint("type is:%d\n", mmap_entry->type);
            }
        }
    }
    //LouPrint("Ram Installed is:%h BYTES\n", mlimit);

}