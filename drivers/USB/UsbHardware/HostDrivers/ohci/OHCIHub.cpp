#include <LouDDK.h>
#include <NtAPI.h>
#include "Ohci.h"

void IsOHCIHub(
    P_PCI_DEVICE_OBJECT PDEV,
    PPCI_COMMON_CONFIG PciConfig,
    void* MasterDeviceMemorySpace,
    bool MasterIsHost,
    uint8_t Port
){

    if(MasterIsHost){
        UNUSED POHCI_MEM OHCIMem = (POHCI_MEM)MasterDeviceMemorySpace;
    }else{
        //the master is a hub well get here later
    }

}