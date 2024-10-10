#include <LouDDK.h>
#include <Hal.h>
#include "StandardVGARegisters.h"

//Key Notes From Vga Specification:
// Video Memory Is Mapped By 4 Plane
// 64 Kilobyte * 8 Bits;
// The DAC Drives Anolog Output;
// The TC Determines the monitor Attatched;
// Video Subsytem Abstracts The Real Hardware
// And controlls System Memory;
// The DAC will automatically handle the MONOCHROME
// Devices meaning the framebuffer is a high level
// Abstraction;
// Video Sub system when disabled will not respond
// to port or mmio comunictaion but image will still
// be displayed;
// MAJOR COMPONENTS: ROM_BIOS, SUPPORT_LOGIC, VGA_COMPONENTS,
// CRTC_CONTROLLER, and the VGA inteface itself
//

LOUSTATUS InitializeStandardVga(
    P_PCI_DEVICE_OBJECT PDEV, 
    PPCI_COMMON_CONFIG PciConfig
){
    LouPrint("Initializing VGA Standard Inteface\n");

    

    return STATUS_SUCCESS;
}

LOUSTATUS InitializeGenericVgaDriver(P_PCI_DEVICE_OBJECT PDEV){
    LouPrint("Initializing VGA Controller\n");
    //initialize the controler as a standard
    PPCI_COMMON_CONFIG PciConfig = (PPCI_COMMON_CONFIG)LouMalloc(sizeof(PCI_COMMON_CONFIG));
    LouKeHalGetPciConfiguration(PDEV, PciConfig);

    if(PciConfig->Header.SubClass == 0x00){
        //type 0 is VGA Standard
        InitializeStandardVga(PDEV, PciConfig);
        //Check For SVGA Extention Support
    }
    else if(PciConfig->Header.SubClass == 0x01){
        //type 1 is XGA Standard

    }
    

    LouFree((RAMADD)PciConfig);
    return STATUS_SUCCESS;
}