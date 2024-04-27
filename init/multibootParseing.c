#include <LouAPI.h>
#include <bootloader/grub/multiboot2.h>

void ParseMemoryMap(struct multiboot_tag* MBOOT);

void ParseMBootTags(struct multiboot_tag* MBOOT) {

    // Iterate through tags until end tag is encountered
    while (MBOOT->type != 0) {
        // Check if tag is memory map tag
        switch (MBOOT->type) {
        case (6): {
            ParseMemoryMap(MBOOT);
            break;
        }
        default:
            break;
        }
        // Move to next tag
        MBOOT = (struct multiboot_tag*)(uint8_t*)MBOOT + (MBOOT->size);
    }

}