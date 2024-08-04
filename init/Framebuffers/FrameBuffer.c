#include <LouAPI.h>
#include <bootloader/grub/multiboot2.h>

struct multiboot_tag_framebuffer* FramebufferInformation;


void InitializeFrameBuffer(
    struct multiboot_tag_framebuffer* Frambuffer
){
    LouPrint("Parseing Framebuffer\n");

    FramebufferInformation = Frambuffer;

}