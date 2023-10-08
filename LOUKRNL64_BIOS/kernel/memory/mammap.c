#include <bootloader/grub/multiboot.h>
#include <stdint.h>
#include <kernel/memmory.h>
#include <stdio.h>

uint64_t Parse_Mem_Map(multiboot_info_t* mbi) {
		
	uint32_t total_memory = mbi->mem_upper * 1024 + mbi->mem_lower * 1024;
	return (uint64_t)total_memory;
}