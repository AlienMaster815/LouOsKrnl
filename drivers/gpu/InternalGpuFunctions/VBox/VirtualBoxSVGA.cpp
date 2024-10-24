#include "VBoxVGA.h"
#include "VBoxAceleration/vbox_drv.h"
#include <bootloader/grub/multiboot2.h>
#include <hal.h>

extern struct multiboot_tag_vbe VBE_INFO;

typedef struct __attribute__((packed)) _VBoxVideoControllerData{
    uint32_t VRamTotalSize;
}VBVCD, * PVBVCD;    

static PVBVCD VirtualboxVGAC = 0x00;

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
    
    //VBE_INFO.vbe_mode_info.height = Height;
    //VBE_INFO.vbe_mode_info.width = Width;
    //VBE_INFO.vbe_mode_info.bpp = 32;
    //VBE_INFO.vbe_mode_info.pitch = Width * (32 / 8);
    
}


LOUSTATUS VboxHwInit(struct vbox_private *vbox);

KERNEL_IMPORT void StartDebugger();

UNUSED static LINUX_PCI_DEVICE_ID VBoxDeviceIds[] = {
    {0x80EE, ANY_PCI_ID, ANY_PCI_ID, ANY_PCI_ID, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0} // Correctly initializing all fields to 0
};


void VBoxPutPixelRgbEx(
    PDrsdVRamObject FBDEV,
    uint16_t x, 
    uint16_t y, 
    uint8_t r, uint8_t g, uint8_t b, uint8_t a
){
    
        // Calculate the offset in the framebuffer
    uint32_t bytes_per_pixel = FBDEV->FrameBuffer.Bpp / 8;
    uint8_t* framebuffer = (uint8_t*)(uintptr_t)FBDEV->FrameBuffer.FramebufferBase;

    // Ensure x and y are within the screen bounds
    if (x >= FBDEV->FrameBuffer.Width || y >= FBDEV->FrameBuffer.Height) {
        return; // Out of bounds, do nothing
    }

    // Calculate the position in the framebuffer
    uint32_t pixel_offset = (y * FBDEV->FrameBuffer.Pitch) + (x * bytes_per_pixel);

    // Set the pixel value based on the framebuffer format
    if (FBDEV->FrameBuffer.Bpp == 32) {
        // 32-bit color (RGBA)
        framebuffer[pixel_offset] = b;        // Blue
        framebuffer[pixel_offset + 1] = g;    // Green
        framebuffer[pixel_offset + 2] = r;    // Red
        framebuffer[pixel_offset + 3] = a;    // Alpha (or reserved)
    } else if (FBDEV->FrameBuffer.Bpp == 24) {
        // 24-bit color (RGB)
        framebuffer[pixel_offset] = b;        // Blue
        framebuffer[pixel_offset + 1] = g;    // Green
        framebuffer[pixel_offset + 2] = r;    // Red
    } else if (FBDEV->FrameBuffer.Bpp == 16) {
        // 16-bit color (5-6-5 RGB)
        uint16_t color = ((r & 0x1F) << 11) | ((g & 0x3F) << 5) | (b & 0x1F);
        *((uint16_t*)(framebuffer + pixel_offset)) = color;
    }

}

KERNEL_IMPORT
void LouKeDrsdPutPixelMirrored(
    uint16_t x, uint16_t y, 
    uint8_t r, uint8_t g, uint8_t b
);

void InitializeVirtualBoxVgaAdapter(P_PCI_DEVICE_OBJECT PDEV){

	LouPrint("Initializeng Virtualbox VGA Adapter\n");


    if(VirtualboxVGAC == 0x00){
        VirtualboxVGAC = (PVBVCD)LouMalloc(sizeof(VBVCD));
    }

    PPCI_COMMON_CONFIG PciConfig = (PPCI_COMMON_CONFIG)LouMalloc(sizeof(PCI_COMMON_CONFIG));

    VirtualboxVGAC->VRamTotalSize = inl(VBE_DISPI_IOPORT_DATA);

    LouPrint("Total VRam:%h\n",VirtualboxVGAC->VRamTotalSize);

    GetPciConfiguration(PDEV->bus, PDEV->slot, PDEV->func, PciConfig);

    VirtualBoxChangeResolution(1024, 768);

    PFrameBufferModeDefinition SupportedModes = (PFrameBufferModeDefinition)LouMalloc(sizeof(FrameBufferModeDefinition));

    SupportedModes->Width = 1024;
    SupportedModes->Height = 768;
    SupportedModes->Bpp = 32;
    SupportedModes->Pitch = (1024 * (32 / 8));
    SupportedModes->FrameBufferType = RGB_DRSD_FRAMEBUFFER;

    PDrsdStandardFrameworkObject DrsdFrameWork = (PDrsdStandardFrameworkObject)LouMalloc(sizeof(DrsdStandardFrameworkObject));

    DrsdFrameWork->RgbPutPixel = VBoxPutPixelRgbEx;

    LouKeRegisterFrameBufferDevice(
        (void*)PDEV, 
        (uint64_t)LouKeHalGetPciVirtualBaseAddress(PciConfig, 0), 
        VirtualboxVGAC->VRamTotalSize, 
        1024, 768,
        32, 
        RGB_DRSD_FRAMEBUFFER,
        SupportedModes,
        DrsdFrameWork
    );
    LouKeDrsdPciResetScreen(PDEV);

    StartDebugger();

    LouFree((RAMADD)PciConfig);
    //while(1);
}