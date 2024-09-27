#include <LouDDK.h>
#include <NtAPI.h>
#include <Hal.h>


uint64_t LouKeHalLinuxPciCheckForCompatibleConfiguration(
    PPCI_COMMON_CONFIG PciSearch, 
    PLINUX_PCI_DEVICE_ID LinuxCmpatibleDirectory
) {
    for (uint64_t i = 0; ; i++) {
        if((LinuxCmpatibleDirectory[i].vendor == 0) && (LinuxCmpatibleDirectory[i].device == 0) && 
        (LinuxCmpatibleDirectory[i].subvendor == 0) && (LinuxCmpatibleDirectory[i].subdevice == 0) &&
        (LinuxCmpatibleDirectory[i].Class == 0) && (LinuxCmpatibleDirectory[i].class_mask == 0)){
            return i;
        }
        uint32_t pci_class_code = (PciSearch->Header.BaseClass << 16) | (PciSearch->Header.SubClass << 8) | PciSearch->Header.ProgIf;
        if (((LinuxCmpatibleDirectory[i].vendor != PciSearch->Header.VendorID) && (LinuxCmpatibleDirectory[i].vendor != ANY_PCI_ID)) 
        || ((LinuxCmpatibleDirectory[i].device != PciSearch->Header.DeviceID) && (LinuxCmpatibleDirectory[i].device != ANY_PCI_ID))
        || ((LinuxCmpatibleDirectory[i].subvendor != PciSearch->Header.u.type0.SubVendorID) && (LinuxCmpatibleDirectory[i].subvendor != ANY_PCI_ID))
        || ((LinuxCmpatibleDirectory[i].subdevice != PciSearch->Header.u.type0.SubSystemID) && (LinuxCmpatibleDirectory[i].subdevice != ANY_PCI_ID))
        || (pci_class_code & LinuxCmpatibleDirectory[i].class_mask) != (LinuxCmpatibleDirectory[i].Class & LinuxCmpatibleDirectory[i].class_mask)
        ) {
            continue;
        }

        return i;
    }

    // leave for no compiler error
    return 0;
}