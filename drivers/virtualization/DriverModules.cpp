#include <LouDDK.h>
#include <NtAPI.h>
#define PRE_LOADED_SYSTEM_FILES 1

PDRIVER_OBJECT PreLoadedDriverObjects[PRE_LOADED_SYSTEM_FILES];
LOUSTATUS (*DriverEntry)(PDRIVER_OBJECT, PUNICODE_STRING);

LOUDDK_API_ENTRY
void InitializePreLoadedModule(uintptr_t Entry, uint8_t DriverNumber){
    DriverEntry = (LOUSTATUS (*)(PDRIVER_OBJECT, PUNICODE_STRING))Entry;
    DriverEntry(PreLoadedDriverObjects[DriverNumber], 0);
}

LOUDDK_API_ENTRY bool PciScanBusCheck(P_PCI_DEVICE_OBJECT PDEV, uint8_t DriverNumber){
    DRIVER_OBJECT Driver = *PreLoadedDriverObjects[DriverNumber];
    if(Driver.PciScanBus != 0x00){
        if(Driver.PciScanBus(PDEV, &Driver, 0)){ //pre loaded modules don have registry enties    
            if(Driver.InitializePciDevice){
                Driver.InitializePciDevice(PDEV, &Driver, 0);
                return true;
            }
            return false;
        }
    }
    return false;
}