#include <LouDDK.h>
#include <NtAPI.h>

bool isIornlakeGPU(
uint8_t bus, 
uint8_t slot,
 uint8_t function
 ){

    uint16_t vendorID = PciGetVendorID(bus, slot);
	uint16_t deviceID = PciGetDeviceID(bus, slot, function);

    if((VendorID == INTEL_PCI) 
    && (deviceID ==(INTEL_CORE_PROCESSOR_INTEGRATED_GRAPHICS_CONTROLLER_1 || INTEL_CORE_PROCESSOR_INTEGRATED_GRAPHICS_CONTROLLER_2 
    ||  INTEL_CORE_PROCESSOR_INTEGRATED_GRAPHICS_CONTROLLER_3 || INTEL_CORE_PROCESSOR_SECONDARY_PCI_EXPRESS_ROOT_PORT_3))){
        void InitializeIornlakeGPU(
            bus, 
            slot,
            function
            );
        
        return true;
    }

    return false;
}

void InitializeIornlakeGPU(
uint8_t bus, 
uint8_t slot, 
uint8_t function
){



}