#include <LouDDK.h>
#include <NtAPI.h>
//#include <bootloader/grub/multiboot2.h>

void InitializeR600GPU(P_PCI_DEVICE_OBJECT PDEV);
void InitializeEverGreenGPU(P_PCI_DEVICE_OBJECT PDEV);

bool InitializeTeraScaleGpu(P_PCI_DEVICE_OBJECT PDEV){

    uint16_t DeviceID = PDEV->DeviceID;

    if (
        DeviceID == 0x9400 ||  // Radeon HD 2900 XT
        DeviceID == 0x9401 ||  // Radeon HD 2900 Pro
        DeviceID == 0x9402 ||  // Radeon HD 2900 GT
        DeviceID == 0x9403 ||  // FireGL V8600
        DeviceID == 0x9405 ||  // FireGL V8650
        DeviceID == 0x940A ||  // Radeon HD 2900 XT (OEM)
        DeviceID == 0x940B ||  // Radeon HD 2900 GT (OEM)
        DeviceID == 0x94C1 ||  // Radeon HD 2400 XT
        DeviceID == 0x94C3 ||  // Radeon HD 2400 Pro
        DeviceID == 0x94C4 ||  // Radeon HD 2400 LE
        DeviceID == 0x94C5 ||  // Radeon HD 2400 Pro (PCI)
        DeviceID == 0x94C7 ||  // Radeon HD 2350
        DeviceID == 0x94CC ||  // FireMV 2260
        DeviceID == 0x94CD ||  // FireMV 2260 (Secondary)
        DeviceID == 0x9580 ||  // Radeon HD 2600 XT AGP
        DeviceID == 0x9581 ||  // Radeon HD 2600 XT
        DeviceID == 0x9583 ||  // Radeon HD 2600 Pro
        DeviceID == 0x9586 ||  // Radeon HD 2600 Pro AGP
        DeviceID == 0x9587 ||  // Radeon HD 2600 X2
        DeviceID == 0x9588 ||  // Radeon HD 2600 XT
        DeviceID == 0x9589 ||  // Radeon HD 2600 Pro
        DeviceID == 0x958A ||  // Radeon HD 2600 X2
        DeviceID == 0x958B ||  // FireGL V5600
        DeviceID == 0x958C ||  // FireGL V3600
        DeviceID == 0x9501 ||  // Radeon HD 3850
        DeviceID == 0x9505 ||  // Radeon HD 3870
        DeviceID == 0x9507 ||  // Radeon HD 3850 X2
        DeviceID == 0x9509 ||  // Radeon HD 3870 X2
        DeviceID == 0x950F ||  // FireStream 9170
        DeviceID == 0x95C0 ||  // Radeon HD 3450
        DeviceID == 0x95C5 ||  // Radeon HD 3470
        DeviceID == 0x9598 ||  // Radeon HD 3650
        DeviceID == 0x9599     // Radeon HD 3670
    ) {
        // Device is compatible with r600.c
        InitializeR600GPU(PDEV);
        return true;
    }

    if (
        DeviceID == 0x6898 ||  // Radeon HD 5970
        DeviceID == 0x6899 ||  // Radeon HD 5950
        DeviceID == 0x68A0 ||  // Radeon HD 5870
        DeviceID == 0x68A1 ||  // Radeon HD 5850
        DeviceID == 0x68A8 ||  // Radeon HD 5830
        DeviceID == 0x68A9 ||  // Radeon HD 5830 (Alternate ID)
        DeviceID == 0x68B0 ||  // Radeon HD 5770
        DeviceID == 0x68B1 ||  // Radeon HD 5770 (Alternate ID)
        DeviceID == 0x68B8 ||  // Radeon HD 5750
        DeviceID == 0x68B9 ||  // Radeon HD 5730
        DeviceID == 0x68BA ||  // Radeon HD 5770 Eyefinity 5 Edition
        DeviceID == 0x68BE ||  // FirePro V5800
        DeviceID == 0x68BF ||  // FirePro V5800 (Alternate ID)
        DeviceID == 0x68C0 ||  // Radeon HD 5670
        DeviceID == 0x68C1 ||  // Radeon HD 5570
        DeviceID == 0x68C7 ||  // Radeon HD 5670 (Alternate ID)
        DeviceID == 0x68C8 ||  // FirePro V3800
        DeviceID == 0x68C9 ||  // FirePro V3800 (Alternate ID)
        DeviceID == 0x68D8 ||  // Radeon HD 5550/5570
        DeviceID == 0x68D9 ||  // Radeon HD 5500
        DeviceID == 0x68DA ||  // Radeon HD 5570/5670 (Alternate ID)
        DeviceID == 0x68E0 ||  // Radeon HD 5450
        DeviceID == 0x68E1 ||  // Radeon HD 5430/5450
        DeviceID == 0x68E4 ||  // Radeon HD 5430
        DeviceID == 0x68E5 ||  // Radeon HD 5430 (Alternate ID)
        DeviceID == 0x68F1 ||  // Mobility Radeon HD 5850
        DeviceID == 0x68F2 ||  // Mobility Radeon HD 5750
        DeviceID == 0x68F8 ||  // Mobility Radeon HD 5870
        DeviceID == 0x68F9 ||  // Mobility Radeon HD 5850
        DeviceID == 0x68FA ||  // Mobility Radeon HD 5830
        DeviceID == 0x68FE ||  // Mobility Radeon HD 5730
        DeviceID == 0x68FF ||  // Mobility Radeon HD 5770
        DeviceID == 0x689C ||  // FireStream 9270
        DeviceID == 0x689D    // FireStream 9250
    ) {
        // Your code here to handle Evergreen GPUs
        InitializeEverGreenGPU(PDEV);
        return true;
    }

    return false;
}