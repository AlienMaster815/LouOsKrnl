#include <LouDDK.h>
#include <NtAPI.h>
#include <drivers/display/IntelGpu.h>
#include <bootloader/grub/multiboot2.h>
#include <Hal.h>

extern struct multiboot_tag_vbe VBE_INFO;
VOID WRITE_REGISTER_ULONGLONG(volatile PULONGLONG Register, ULONGLONG Value);

void InitializeSandyBridgeGt1(P_PCI_DEVICE_OBJECT PDEV){
    UNUSED uint64_t BAR[6];
    
    LouKeWritePciCommandRegister(PDEV, LouKeReadPciCommandRegister(PDEV) | MEMORY_SPACE_ENABLE | BUS_MASTER_ENABLE);
    PPCI_COMMON_CONFIG PciConfig = (PPCI_COMMON_CONFIG)LouMalloc(sizeof(PCI_COMMON_CONFIG));
    GetPciConfiguration(PDEV->bus, PDEV->slot, PDEV->func ,PciConfig);

    for(uint8_t i = 0; i < 6; i++){
        BAR[i] = (uint64_t)LouKeHalGetPciVirtualBaseAddress(PciConfig, i);
    }

    //set the basic display mode for system 
    VBE_INFO.vbe_mode_info.framebuffer = (uint64_t)LouMallocEx(640 * 480 * 8, KILOBYTE_PAGE);
    VBE_INFO.vbe_mode_info.height = 480;
    VBE_INFO.vbe_mode_info.width  = 640;
    VBE_INFO.vbe_mode_info.bpp    = 32;
    VBE_INFO.vbe_mode_info.pitch  = (32/8);

    WRITE_REGISTER_ULONGLONG(SANDY_BRIDGE_PFA, VBE_INFO.vbe_mode_info.framebuffer);
    WRITE_REGISTER_ULONG(SANDY_BRIDGE_PIPEA_DISPLAY_SIZE, (480 << 16) | 640);
    WRITE_REGISTER_ULONG(SANDY_BRIDGE_DPC_PLANEA, 0xC0000000);
    WRITE_REGISTER_ULONG(SANDY_BRIDGE_PIPEA_CONFIGURATION, 0x80000000);
    WRITE_REGISTER_ULONG(SANDY_BRIDGE_DISPLAY_CONTROL, 0x80000000);

    LouFree((RAMADD)PciConfig);
}

void InitializeSandyBridgeGt2(P_PCI_DEVICE_OBJECT PDEV){

}