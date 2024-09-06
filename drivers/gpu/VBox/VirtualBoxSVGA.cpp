#include "VBoxVGA.h"
#include <bootloader/grub/multiboot2.h>

extern struct multiboot_tag_vbe VBE_INFO;

typedef struct __attribute__((packed)) _VBoxVideoControllerData{
    uint32_t VRamTotalSize;
}VBVCD, * PVBVCD;    

static PVBVCD VirtualboxVGAC = 0x00;


void RemapVirtualboxVRam(uint64_t size){

    for(
        uint64_t i = 0; 
        i < (size); 
        i+=KILOBYTE_PAGE
    ){
        LouMapAddress(VBE_INFO.vbe_mode_info.framebuffer + i, VBE_INFO.vbe_mode_info.framebuffer + i, USER_PAGE | WRITEABLE_PAGE | PRESENT_PAGE, KILOBYTE_PAGE);
    }   

}

KERNEL_IMPORT void print_clear();

LOUDDK_API_ENTRY void VirtualBoxChangeResolution(
    uint16_t Width, uint16_t Height
){

    outw(VBE_DISPI_IOPORT_INDEX, VBE_DISPI_INDEX_XRES);  // Select the X resolution register
    outw(VBE_DISPI_IOPORT_DATA, Width);                    // Set X resolution to 1024 pixels


    outw(VBE_DISPI_IOPORT_INDEX, VBE_DISPI_INDEX_YRES);  // Select the Y resolution register
    outw(VBE_DISPI_IOPORT_DATA, Height);                    // Set Y resolution to 768 pixels

    outw(VBE_DISPI_IOPORT_INDEX, VBE_DISPI_INDEX_BPP);  // Select the bits per pixel register
    outw(VBE_DISPI_IOPORT_DATA, 32);                    // Set color depth to 32 bits per pixel

    outw(VBE_DISPI_IOPORT_INDEX, VBE_DISPI_INDEX_ENABLE);                      // Select the enable register
    outw(VBE_DISPI_IOPORT_DATA, VBE_DISPI_ENABLED | VBE_DISPI_LFB_ENABLED);    // Enable display with LFB
    
    VBE_INFO.vbe_mode_info.height = Height;
    VBE_INFO.vbe_mode_info.width = Width;
    VBE_INFO.vbe_mode_info.bpp = 32;
    VBE_INFO.vbe_mode_info.pitch = Width * (32 / 8);
    

    print_clear();

}

void InitializeVirtualBoxVgaAdapter(P_PCI_DEVICE_OBJECT PDEV){

	LouPrint("Initializeng Virtualbox VGA Adapter\n");

    if(VirtualboxVGAC == 0x00){
        VirtualboxVGAC = (PVBVCD)LouMalloc(sizeof(VBVCD));
    }

    VirtualboxVGAC->VRamTotalSize = inl(VBE_DISPI_IOPORT_DATA);

    LouPrint("Total VRam:%h\n",VirtualboxVGAC->VRamTotalSize);
    BaseAddressRegister BARS(PDEV);

    VBE_INFO.vbe_mode_info.framebuffer = (uint64_t)BARS.address[0];
    
    RemapVirtualboxVRam(VirtualboxVGAC->VRamTotalSize);

    VirtualBoxChangeResolution(1024, 768);
}