#ifndef _HAL_H
#define _HAL_H

//only c++ code 

#include <LouDDK.h>

void* LouKeHalGetPciVirtualBaseAddress(
    PPCI_COMMON_CONFIG Config,
    uint8_t BarNumber
);

void LouKeHalRegisterPCiDevice(
    P_PCI_DEVICE_OBJECT PDEV
);

#endif //HAL_H