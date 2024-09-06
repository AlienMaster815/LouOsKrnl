#include <LouAPI.h>
#include <bootloader/grub/multiboot2.h>

void ParseMemoryMap(struct multiboot_tag* MBOOT);
void InitializeFrameBuffer(struct multiboot_tag_framebuffer* Frambuffer);
LOUSTATUS LouKeSetEfiTable(uint64_t Address);
LOUSTATUS LouKeSetSmbios(uintptr_t SMBIOS);
LOUSTATUS LouKeSetRsdp(uintptr_t RSDP, uint8_t Type);
LOUSTATUS LouKeSetApm(struct multiboot_tag_apm* APM);
void SetEfiMap(uint64_t Map);

struct multiboot_tag_vbe VBE_INFO;

void handle_module(
    uintptr_t ModuleStart,
    uintptr_t ModuleEnd
);

extern bool GOPIsUnsable;

void ParseMBootTags(struct multiboot_tag* MBOOT) {

    // Iterate through tags until end tag is encountered
    while (MBOOT->type != 0) {
        // Check if tag is memory map tag
        EnforceSystemMemoryMap((uint64_t)MBOOT, MBOOT->size);
        switch (MBOOT->type) {
        case (MULTIBOOT_TAG_TYPE_MMAP): {
            ParseMemoryMap(MBOOT);
            break;
        }
        case (MULTIBOOT_TAG_TYPE_EFI64): {
            uint64_t EFI_TABLE = (uint64_t)((uint8_t*)MBOOT);
            LouKeSetEfiTable(EFI_TABLE); 
            break;
        }
        case (MULTIBOOT_TAG_TYPE_SMBIOS): {
            uintptr_t SMBIOS_POINTER = (uintptr_t)((uint8_t*)MBOOT + sizeof(struct multiboot_tag_smbios));
            LouKeSetSmbios(SMBIOS_POINTER);
            break;
        }
        case (MULTIBOOT_TAG_TYPE_ACPI_OLD): {
            LouKeSetRsdp((uint64_t)((uint8_t*)MBOOT + sizeof(struct multiboot_tag_old_acpi)), 1);
            break;
        }
        case (MULTIBOOT_TAG_TYPE_ACPI_NEW): {
            LouKeSetRsdp((uint64_t)((uint8_t*)MBOOT + sizeof(struct multiboot_tag_new_acpi)), 2);
            break;
        }
        case (MULTIBOOT_TAG_TYPE_VBE): {
            //struct multiboot_tag_vbe* vbe_tag = (struct multiboot_tag_vbe*)MBOOT;
            // Access VBE information from vbe_tag
            // Example: uint16_t vbe_mode = vbe_tag->vbe_mode;
            //VBE_INFO = vbe_tag;
            break;
        }
        case (MULTIBOOT_TAG_TYPE_APM): {
            struct multiboot_tag_apm* apm_tag = (struct multiboot_tag_apm*)MBOOT;
            LouKeSetApm(apm_tag);
            break;
        }
        case (MULTIBOOT_TAG_TYPE_MODULE): {
            struct multiboot_tag_module *mod = (struct multiboot_tag_module *) MBOOT;
            EnforceSystemMemoryMap(mod->mod_start, mod->mod_end - mod->mod_start);
            handle_module(mod->mod_start, mod->mod_end);
            break;
        }
        case (MULTIBOOT_TAG_TYPE_FRAMEBUFFER):{
            struct multiboot_tag_framebuffer* frame = (struct multiboot_tag_framebuffer*)MBOOT;
            InitializeFrameBuffer(frame);
        }
        case(MULTIBOOT_TAG_TYPE_EFI_MMAP):{
            SetEfiMap((uint64_t)MBOOT);
            break;
        }
        default:
            break;
        }
        // Move to next tag
        if (MBOOT->size % 8 == 0)
            MBOOT = (struct multiboot_tag*)((uint8_t*)MBOOT + MBOOT->size);
        else
            MBOOT = (struct multiboot_tag*)((uint8_t*)MBOOT + MBOOT->size + (8 - MBOOT->size % 8));
    }
    //while(1);
}
