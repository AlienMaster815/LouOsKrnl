#include <bootloader/grub/multiboot.h>
#include <stdint.h>
#include <kernel/memmory.h>
#include <stdio.h>


uintptr_t FindMemoryLimit(){
    size_t total_ram_kb = (mbi->mem_lower + mbi->mem_upper);  // Total RAM size in kilobytes
    return total_ram_kb * 1024;
}
