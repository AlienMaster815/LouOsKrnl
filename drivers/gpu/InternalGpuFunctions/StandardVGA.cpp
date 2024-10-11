#include <LouDDK.h>
#include <Hal.h>
#include "StandardVGARegisters.h"

KERNEL_IMPORT void StartDebugger();

unsigned char g_640x480x16[] =
{
    /* MISC */
    0xE3, // Miscellaneous Output Register: 640x480, 60 Hz, disable internal clock divider

    /* SEQ */
    0x03, // Reset: Asynchronous reset
    0x01, // Clocking Mode: 8 dots/clock
    0x0F, // Map Mask: Enable all planes
    0x00, // Character Map Select: Use maps 0 and 1
    0x06, // Sequencer Memory Mode: Chain 4 mode enabled

    /* CRTC */
    0x5F, // Horizontal Total: Total horizontal pixels
    0x4F, // Horizontal Display End
    0x50, // Horizontal Blank Start
    0x82, // Horizontal Blank End
    0x54, // Horizontal Retrace Start
    0x80, // Horizontal Retrace End
    0xBF, // Vertical Total
    0x1F, // Overflow Register
    0x00, // Preset Row Scan
    0x41, // Maximum Scan Line: 2x character clock
    0x00, // Cursor Start
    0x00, // Cursor End
    0x00, // Start Address High: Start of video memory
    0x00, // Start Address Low
    0x9C, // Vertical Retrace Start
    0x0E, // Vertical Retrace End
    0x8F, // Vertical Display End
    0x28, // Offset
    0x40, // Underline Location
    0x96, // Vertical Blank Start
    0xB9, // Vertical Blank End
    0xA3, // Mode Control
    0xFF, // Line Compare

    /* GC */
    0x00, // Set/Reset Register
    0x00, // Enable Set/Reset Register
    0x00, // Color Compare Register
    0x00, // Data Rotate Register
    0x00, // Read Map Select Register
    0x40, // Graphics Mode Register: Use graphics mode
    0x05, // Miscellaneous Register: Use odd/even addressing and memory mode
    0x0F, // Color Don't Care Register
    0xFF, // Bit Mask Register

    /* AC */
    0x00, 0x01, 0x02, 0x03, // Palette Registers 0-3
    0x04, 0x05, 0x06, 0x07, // Palette Registers 4-7
    0x08, 0x09, 0x0A, 0x0B, // Palette Registers 8-11
    0x0C, 0x0D, 0x0E, 0x0F, // Palette Registers 12-15
    0x01, // Attribute Mode Control Register: Enable graphics, disable blink
    0x00, // Overscan Color Register
    0x0F, // Color Plane Enable
    0x00, // Horizontal PEL Panning Register
    0x00  // Color Select Register
};

void VgaRegisterFastWrite(uint8_t* DataBuffer, PVOID PciIoBase) {
    outb(MISCELLANEOUS_REGISTER(PciIoBase), *(DataBuffer++));

    for (uint8_t i = 0; i < 5; i++) {
        outb(SEQUENCER_INDEX_REGISTER(PciIoBase), i);
        outb(SEQUENCER_DATA_REGISTER(PciIoBase), *(DataBuffer++));
    }

    outb(CRTC_INDEX_REGISTER(PciIoBase), 0x03);
    outb(CRTC_DATA_REGISTER(PciIoBase), 
         inb(CRTC_DATA_REGISTER(PciIoBase)) | 0x80);
    outb(CRTC_INDEX_REGISTER(PciIoBase), 0x11);
    outb(CRTC_DATA_REGISTER(PciIoBase), 
         inb(CRTC_DATA_REGISTER(PciIoBase)) & ~(0x80));

    DataBuffer[0x03] |= 0x80;
    DataBuffer[0x11] &= ~(0x80);

    for (uint8_t i = 0; i < 25; i++) {
        outb(CRTC_INDEX_REGISTER(PciIoBase), i);
        outb(CRTC_DATA_REGISTER(PciIoBase), *(DataBuffer++));
    }

    for (uint8_t i = 0; i < 9; i++) {
        outb(GRAPHICS_CONTROLLER_INDEX_REGISTER(PciIoBase), i);
        outb(GRAPHICS_CONTROLLER_DATA_REGISTER(PciIoBase), *(DataBuffer++));
    }

    for (uint8_t i = 0; i < 21; i++) {
        inb(ACC_RESET(PciIoBase));
        outb(ACC_INDEX(PciIoBase), i);
        outb(ACC_WRITE(PciIoBase), *(DataBuffer++));
    }

    inb(ACC_RESET(PciIoBase));
    outb(ACC_INDEX(PciIoBase), 0x20);
}

static inline uint8_t ConvertRGBToVGA16(uint8_t r, uint8_t g, uint8_t b) {
    // Divide each RGB channel into two levels: 0 or 1
    // Assuming 0-127 maps to 0, and 128-255 maps to 1
    uint8_t ri = (r > 127) ? 1 : 0;
    uint8_t gi = (g > 127) ? 1 : 0;
    uint8_t bi = (b > 127) ? 1 : 0;

    // Create a 4-bit index for the 16-color palette
    return (ri << 2) | (gi << 1) | bi;
}

void VgaPutPixel640x480x16(
    PDrsdVRamObject FBDEV,
    uint16_t x, 
    uint16_t y, 
    uint8_t r, 
    uint8_t g, 
    uint8_t b,
    uint8_t a
) {
    // Convert RGB to VGA 16 color index
    uint8_t colorIndex = ConvertRGBToVGA16(r, g, b);
    
    // Calculate the byte offset (two pixels per byte)
    uint32_t offset = (y * 320) + (x / 2);  // 320 bytes per row for 640 pixels with 2 pixels per byte

    // Get pointer to framebuffer
    uint8_t* framebuffer = (uint8_t*)FBDEV->FrameBuffer.FramebufferBase;

    // Determine if we're setting the high nibble or low nibble of the byte
    if (x % 2 == 0) {
        // Clear and set the lower 4 bits for the left pixel
        framebuffer[offset] = (framebuffer[offset] & 0xF0) | (colorIndex & 0x0F);
    } else {
        // Clear and set the upper 4 bits for the right pixel
        framebuffer[offset] = (framebuffer[offset] & 0x0F) | ((colorIndex & 0x0F) << 4);
    }
}


void FillScreenTeal16Color(uint8_t* framebuffer) {
    // Total pixels in 640x480 resolution, which is 640 * 480 = 307200 pixels
    // Since each byte can store two pixels in 16-color mode, you need half the bytes
    uint32_t totalBytes = (640 * 480) / 2;

    for (uint32_t i = 0; i < totalBytes; i++) {
        // Filling with 0x33 sets both pixels in each byte to color index 3 (teal)
        framebuffer[i] = 0x33;
    }
}

LOUSTATUS InitializeStandardVga(
    P_PCI_DEVICE_OBJECT PDEV, 
    PPCI_COMMON_CONFIG PciConfig
) {
    //VGA Compatible Devices Need to be overidden in efi states
    //Enable Pallete Snooping
    LouKeHalEnablePciDevice(PDEV);
    LouKeWritePciCommandRegister(PDEV, LouKeReadPciCommandRegister(PDEV) | (1 << 5));
    //Enable VGA in bridge Controll
    uint16_t BridgeControl = LouKeReadPciUint16(PDEV, 0x3E);
    BridgeControl |= (1 << 3);
    LouKeWritePciUint16(PDEV, 0x3E, BridgeControl);

    UNUSED PVOID VgaPortBase = (PVOID)((uintptr_t)PciConfig->Header.u.type0.BaseAddresses[1] & ~(0x03));    

    VgaRegisterFastWrite(g_640x480x16, VgaPortBase);

    uint8_t* FrameBuffer = (uint8_t*)LouKeHalGetPciVirtualBaseAddress(PciConfig, 0);

    PFrameBufferModeDefinition SupportedModes = (PFrameBufferModeDefinition)LouMalloc(sizeof(FrameBufferModeDefinition));

    SupportedModes->Width = 640;
    SupportedModes->Height = 480;
    SupportedModes->Bpp = 4;
    SupportedModes->FrameBufferType = RGB_DRSD_FRAMEBUFFER;

    PDrsdStandardFrameworkObject DrsdFrameWork = (PDrsdStandardFrameworkObject)LouMalloc(sizeof(DrsdStandardFrameworkObject));

    DrsdFrameWork->RgbPutPixel = VgaPutPixel640x480x16;

    LouKeRegisterFrameBufferDevice(
        (void*)PDEV, 
        (uint64_t)FrameBuffer, ((640 * 480) / 2), 
        640, 480,
        4, 
        RGB_DRSD_FRAMEBUFFER,
        SupportedModes,
        DrsdFrameWork
    );

    return STATUS_SUCCESS;
}

LOUSTATUS InitializeGenericVgaDriver(P_PCI_DEVICE_OBJECT PDEV){
    //LouPrint("Initializing VGA Controller\n");
    //initialize the controler as a standard
    PPCI_COMMON_CONFIG PciConfig = (PPCI_COMMON_CONFIG)LouMalloc(sizeof(PCI_COMMON_CONFIG));
    LouKeHalGetPciConfiguration(PDEV, PciConfig);
    
    if(PciConfig->Header.SubClass == 0x00){
        InitializeStandardVga(PDEV, PciConfig);
    }
    else if(PciConfig->Header.SubClass == 0x01){
        //type 1 is XGA Standard

    }
    
    //UNUSED uint8_t GpuCount = LouKeDeviceManagerGetGpuCount();

    LouKeDrsdPciResetScreen(PDEV);

    StartDebugger();
    
    
    while(1);
    LouFree((RAMADD)PciConfig);
    return STATUS_SUCCESS;
}