#ifndef _HAL_H
#define _HAL_H

//only c++ code 

#include <LouDDK.h>

#pragma pack(push, 1)
typedef struct _LINUX_PCI_DEVICE_ID {
	uint32_t vendor, device;		/* Vendor and device ID or PCI_ANY_ID*/
	uint32_t subvendor, subdevice;	/* Subsystem ID's or PCI_ANY_ID */
	uint32_t Class, class_mask;	/* (class,subclass,prog-if) triplet */
	uint64_t Flags;	    /* Data private to the driver */
}LINUX_PCI_DEVICE_ID, * PLINUX_PCI_DEVICE_ID;

#ifndef _KERNEL_MODULE_
void* LouKeHalGetPciVirtualBaseAddress(
    PPCI_COMMON_CONFIG Config,
    uint8_t BarNumber
);

void LouKeHalRegisterPCiDevice(
    P_PCI_DEVICE_OBJECT PDEV
);

PPCI_CONTEXT LouKeHalPciSaveContext(
    P_PCI_DEVICE_OBJECT PDEV
);

void LouKeHalPciRestoreContext(
    PPCI_CONTEXT PciContext
);

void LouKeHalPciClearMaster(
    P_PCI_DEVICE_OBJECT PDEV
);



uint64_t LouKeHalLinuxPciCheckForCompatibleConfiguration(
    PPCI_COMMON_CONFIG PciSearch, 
    PLINUX_PCI_DEVICE_ID LinuxCmpatibleDirectory
);

LOUSTATUS LouKeHalEnablePciDevice(P_PCI_DEVICE_OBJECT PDEV);
#else 
KERNEL_EXPORT uint64_t LouKeHalLinuxPciCheckForCompatibleConfiguration(
    PPCI_COMMON_CONFIG PciSearch, 
    PLINUX_PCI_DEVICE_ID LinuxCmpatibleDirectory
);


KERNEL_EXPORT void GetPciConfiguration(ULONG SystemIoBusNumber,ULONG SlotNumber,ULONG Function,PPCI_COMMON_CONFIG ConfigBuffer);

#endif

#pragma pack(pop)
#endif //HAL_H