#include <LouDDK.h>

void isUsb(uint8_t bus, uint8_t slot, uint8_t function);
void IsVGA(uint8_t bus, uint8_t slot, uint8_t function);
void IsSerial(uint8_t bus, uint8_t slot, uint8_t function);
void IsEithernet(uint8_t bus, uint8_t slot, uint8_t function);
void IsChipset(uint8_t bus, uint8_t slot, uint8_t function);
void IsAudioDevice(uint8_t bus, uint8_t slot, uint8_t function);
void IsAGPDevice(uint8_t bus, uint8_t slot, uint8_t function);

//CPP Land
DRIVER_IO_FUNCTION P_PCIBuffer PCI::PCI_Read(P_PCIDEV Device) {
    P_PCIBuffer PCIBuff = (P_PCIBuffer)Lou_Alloc_Mem(sizeof(PCIBuffer));


    return PCIBuff;
}

DRIVER_IO_FUNCTION void PCI::PCI_Write(P_PCIDEV Device, P_PCIBuffer buffer) {

}


LOUDDK_API_ENTRY void checkBus(uint8_t bus) {
    uint8_t device;

    for (device = 0; device < 32; device++) {
        checkDevice(bus, device);
    }
}

LOUDDK_API_ENTRY void checkDevice(uint8_t bus, uint8_t device) {
    uint8_t function = 0;

    uint16_t vendorID = PciGetVendorID(bus, device);
    if (vendorID == 0xFFFF) return; // Device doesn't exist
    checkFunction(bus, device, function);
    LouPrint("PCI Device Found Vedor Is: %h and Device Is: %h\n", vendorID, PciGetDeviceID( bus , device, function));
    uint8_t headerType = getHeaderType(bus, device, function);
    if ((headerType & 0x80) != 0) {
        LouPrint("Device Is MultiFunction\n");
        // It's a multi-function device, so check remaining functions
        for (function = 1; function < 8; function++) {
            if (PciGetVendorID(bus, device) != 0xFFFF) {
                checkFunction(bus, device, function);
                if (PciGetDeviceID(bus,device,function) == 0xffff) continue;
                else {
                    LouPrint("PCI Device Found Vedor Is: %h and Device Is: %h\n", vendorID, PciGetDeviceID(bus, device, function));
                    //Parse Funxtios and have fun
                    IsSataCheck(bus, device, function);
                    isUsb( bus,  device,  function);
                    IsVGA( bus,  device,  function);
                    IsSerial( bus,  device,  function);
                    IsEithernet( bus,  device,  function);
                    IsChipset( bus,  device,  function);
                    IsAudioDevice( bus,  device, function);
                    IsAGPDevice(bus,device, function);
                    //IsSataCheck(bus, device, function);
                }
            }
        }
    }
    else{
        //device is single function have fun
        IsSataCheck(bus, device, function);
        isUsb(bus, device, function);
        IsVGA(bus, device, function);
        IsSerial(bus, device, function);
        IsEithernet(bus, device, function);
        IsChipset(bus, device, function);
        IsAudioDevice(bus, device, function);
        IsAGPDevice(bus, device, function);
    }
}



LOUDDK_API_ENTRY void checkFunction(uint8_t bus, uint8_t device, uint8_t function) {
    uint8_t baseClass;
    uint8_t subClass;
    uint8_t secondaryBus;

    baseClass = getBaseClass(bus, device, function);
    subClass = getSubClass(bus, device, function);
    if ((baseClass == 0x6) && (subClass == 0x4)) {
        secondaryBus = getSecondaryBus(bus, device, function);
        checkBus(secondaryBus);
    }
}


LOUDDK_API_ENTRY void PCI_Scan_Bus(){
    
    LouPrint("Scanning PCI Bus\n");
    
    uint8_t function;
    uint8_t bus;

    uint8_t headerType = getHeaderType(0, 0, 0);
    if ((headerType & 0x80) == 0) {
        // Single PCI host controller
        checkBus(0);
    }
    else {
        // Multiple PCI host controllers
        for (function = 0; function < 8; function++) {
            if (PciGetVendorID(0, 0) != 0xFFFF) break;
            bus = function;
            checkBus(bus);
        }
    }

}



// C Land

P_PCIBuffer PCI_Read(P_PCIDEV Device) {
    P_PCIBuffer PCIBuff;
    PCI Read;
    PCIBuff = Read.PCI_Read(Device);
    return PCIBuff;
}

void PCI_Write(P_PCIDEV Device, P_PCIBuffer buffer) {
    PCI Write;
    Write.PCI_Write(Device, buffer);
}