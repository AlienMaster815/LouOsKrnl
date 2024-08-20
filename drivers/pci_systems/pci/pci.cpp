#include <LouDDK.h>

#define NOT_A_PCI_DEVICE 0xFFFF 


bool isUsb(uint8_t bus, uint8_t slot, uint8_t function);
bool IsVGA(uint8_t bus, uint8_t slot, uint8_t function);
bool IsSerial(uint8_t bus, uint8_t slot, uint8_t function);
bool IsEithernet(uint8_t bus, uint8_t slot, uint8_t function);
bool IsChipset(uint8_t bus, uint8_t slot, uint8_t function);
bool IsAudioDevice(uint8_t bus, uint8_t slot, uint8_t function);
bool IsAGPDevice(uint8_t bus, uint8_t slot, uint8_t function);
bool isVirtualizationDevice(uint8_t bus, uint8_t slot, uint8_t function);

void RegisterUnkownDevice(uint8_t bus,uint8_t device,uint8_t function);

LOUDDK_API_ENTRY void scan_pci_bridges();

DRIVER_IO_FUNCTION P_PCIBuffer PCI::PCI_Read(P_PCIDEV Device) {
    P_PCIBuffer PCIBuff = (P_PCIBuffer)Lou_Alloc_Mem(sizeof(PCIBuffer));


    return PCIBuff;
}

DRIVER_IO_FUNCTION void PCI::PCI_Write(P_PCIDEV Device, P_PCIBuffer buffer) {

}

bool IsPciBus(uint8_t bus, uint8_t slot, uint8_t func);

LOUDDK_API_ENTRY void checkBus(uint8_t bus) {
    uint8_t device;

    for (device = 0; device < 32; device++) {
        checkDevice(bus, device);
    }
}

LOUDDK_API_ENTRY void checkDevice(uint8_t bus, uint8_t device) {
    uint8_t function = 0;

    bool DeviceIdentified = false;

    uint16_t vendorID = PciGetVendorID(bus, device);
    if (vendorID == NOT_A_PCI_DEVICE) return; // Device doesn't exist
    checkFunction(bus, device, function);

    //LouPrint("PCI Device Found Vedor Is: %h and Device Is: %h\n", vendorID, PciGetDeviceID( bus , device, function));
    uint8_t headerType = getHeaderType(bus, device, function);
    if ((headerType & 0x80) != 0) {
        LouPrint("Device Is MultiFunction\n");
        // It's a multi-function device, so check remaining functions
        for (function = 1; function < 8; function++) {
            if (PciGetVendorID(bus, device) != NOT_A_PCI_DEVICE) {
                checkFunction(bus, device, function);
                if (PciGetDeviceID(bus,device,function) == NOT_A_PCI_DEVICE) continue;
                else {
                    LouPrint("Multi Function PCI Device Found Vedor Is: %h and Device Is: %h\n", vendorID, PciGetDeviceID(bus, device, function));
                        //Parse Funxtios and have fun
                        if (!DeviceIdentified)DeviceIdentified = IsSataCheck(bus, device, function);
                        //if (!DeviceIdentified)DeviceIdentified = isUsb( bus,  device,  function);
                       // if (!DeviceIdentified)DeviceIdentified = IsVGA( bus,  device,  function);
                        //if (!DeviceIdentified)DeviceIdentified = IsSerial( bus,  device,  function);
                        //if (!DeviceIdentified)DeviceIdentified = IsEithernet( bus,  device,  function);
                        //if (!DeviceIdentified)DeviceIdentified = IsChipset( bus,  device,  function);
                        //if (!DeviceIdentified)DeviceIdentified = IsAudioDevice( bus,  device, function);
                        //if (!DeviceIdentified)DeviceIdentified = IsAGPDevice(bus,device, function);
                        //if (!DeviceIdentified)DeviceIdentified = isVirtualizationDevice( bus, device, function);
                        //IsSataCheck(bus, device, function);
                        //if (!DeviceIdentified)RegisterUnkownDevice(bus, device, function);
                        //if (!DeviceIdentified)IsPciBus(bus, device, function);
                }
            }
        }
        return;
    }
    else{
         LouPrint("Single Function PCI Device Found Vedor Is: %h and Device Is: %h\n", vendorID, PciGetDeviceID(bus, device, function));
            //Parse Funxtios and have fun
           // if (!DeviceIdentified)DeviceIdentified = IsSataCheck(bus, device, function);
            //if (!DeviceIdentified)DeviceIdentified = isUsb( bus,  device,  function);
           // if (!DeviceIdentified)DeviceIdentified = IsVGA( bus,  device,  function);
            //if (!DeviceIdentified)DeviceIdentified = IsSerial( bus,  device,  function);
            //if (!DeviceIdentified)DeviceIdentified = IsEithernet( bus,  device,  function);
            //if (!DeviceIdentified)DeviceIdentified = IsChipset( bus,  device,  function);
            //if (!DeviceIdentified)DeviceIdentified = IsAudioDevice( bus,  device, function);
            //if (!DeviceIdentified)DeviceIdentified = IsAGPDevice(bus,device, function);
            //if (!DeviceIdentified)DeviceIdentified = isVirtualizationDevice( bus, device, function);
            //IsSataCheck(bus, device, function);
            //if (!DeviceIdentified)RegisterUnkownDevice(bus, device, function);
            //if (!DeviceIdentified)IsPciBus(bus, device, function);
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
            if (PciGetVendorID(0, 0) != NOT_A_PCI_DEVICE) break;
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

uint8_t LouKeReadPciUint8(P_PCI_DEVICE_OBJECT PDEV, uint8_t Offset){
    return pciConfigReadByte(PDEV->bus,PDEV->slot,PDEV->func, Offset);
}

uint16_t LouKeReadPciUint16(P_PCI_DEVICE_OBJECT PDEV, uint8_t Offset){
    return pciConfigReadWord(PDEV->bus,PDEV->slot,PDEV->func, Offset);

}

uint32_t LouKeReadPciUint32(P_PCI_DEVICE_OBJECT PDEV, uint8_t Offset){
    return pci_read(PDEV->bus,PDEV->slot,PDEV->func, Offset);
}


void LouKeWritePciUint8(P_PCI_DEVICE_OBJECT PDEV, uint8_t Offset, uint8_t Value){
    pciConfigWriteByte(PDEV->bus,PDEV->slot,PDEV->func,Offset,Value);
}

void LouKeWritePciUint16(P_PCI_DEVICE_OBJECT PDEV, uint8_t Offset, uint16_t Value){
    pciConfigWriteWord(PDEV->bus, PDEV->slot,PDEV->func,Offset,Value);
}

void LouKeWritePciUint32(P_PCI_DEVICE_OBJECT PDEV, uint8_t Offset, uint32_t Value){
    write_pci(PDEV->bus,PDEV->slot,PDEV->func, Offset, Value);
}

LOUDDK_API_ENTRY void checkForVgaDevice(uint8_t bus, uint8_t device);
LOUDDK_API_ENTRY void checkForVgaDevice(uint8_t bus, uint8_t device);

LOUDDK_API_ENTRY void checkBusVideo(uint8_t bus) {
    uint8_t device;

    for (device = 0; device < 32; device++) {
        checkForVgaDevice(bus, device);
    }
}

LOUDDK_API_ENTRY void ScanForVideoHardware(){
    //LouPrint("Scanning PCI Bus For VGA Devices\n");
    

    uint8_t function;
    uint8_t bus;

    uint8_t headerType = getHeaderType(0, 0, 0);
    if ((headerType & 0x80) == 0) {
        // Single PCI host controller
        checkBusVideo(0);
    }
    else {
        // Multiple PCI host controllers
        for (function = 0; function < 8; function++) {
            if (PciGetVendorID(0, 0) != NOT_A_PCI_DEVICE) break;
            bus = function;
            checkBusVideo(bus);
        }
    }
}


LOUDDK_API_ENTRY void checkForVgaDevice(uint8_t bus, uint8_t device) {
    uint8_t function = 0;

    bool DeviceIdentified = false;

    uint16_t vendorID = PciGetVendorID(bus, device);
    if (vendorID == NOT_A_PCI_DEVICE) return; // Device doesn't exist
    checkFunction(bus, device, function);

    //LouPrint("PCI Device Found Vedor Is: %h and Device Is: %h\n", vendorID, PciGetDeviceID( bus , device, function));
    uint8_t headerType = getHeaderType(bus, device, function);
    if ((headerType & 0x80) != 0) {
        LouPrint("Device Is MultiFunction\n");
        // It's a multi-function device, so check remaining functions
        for (function = 1; function < 8; function++) {
            if (PciGetVendorID(bus, device) != NOT_A_PCI_DEVICE) {
                checkFunction(bus, device, function);
                if (PciGetDeviceID(bus,device,function) == NOT_A_PCI_DEVICE) continue;
                else {
                    LouPrint("Multi Function PCI Device Found Vedor Is: %h and Device Is: %h\n", vendorID, PciGetDeviceID(bus, device, function));
                    if (!DeviceIdentified)DeviceIdentified = IsVGA( bus,  device,  function);
                }
            }
        }
        return;
    }
    else{
        LouPrint("Single Function PCI Device Found Vedor Is: %h and Device Is: %h\n", vendorID, PciGetDeviceID(bus, device, function));
        if (!DeviceIdentified)DeviceIdentified = IsVGA( bus,  device,  function);
    }
}

bool IsPataCheck(uint8_t bus, uint8_t slot, uint8_t function);

LOUDDK_API_ENTRY void checkForStorageDevice(uint8_t bus, uint8_t device) {
    uint8_t function = 0;

    bool DeviceIdentified = false;

    uint16_t vendorID = PciGetVendorID(bus, device);
    if (vendorID == NOT_A_PCI_DEVICE) return; // Device doesn't exist
    checkFunction(bus, device, function);

    //LouPrint("PCI Device Found Vedor Is: %h and Device Is: %h\n", vendorID, PciGetDeviceID( bus , device, function));
    uint8_t headerType = getHeaderType(bus, device, function);
    if ((headerType & 0x80) != 0) {
        LouPrint("Device Is MultiFunction\n");
        // It's a multi-function device, so check remaining functions
        for (function = 1; function < 8; function++) {
            if (PciGetVendorID(bus, device) != NOT_A_PCI_DEVICE) {
                checkFunction(bus, device, function);
                if (PciGetDeviceID(bus,device,function) == NOT_A_PCI_DEVICE) continue;
                else {
                    LouPrint("Multi Function PCI Device Found Vedor Is: %h and Device Is: %h\n", vendorID, PciGetDeviceID(bus, device, function));
                    if (!DeviceIdentified)DeviceIdentified = IsSataCheck(bus, device, function);
                    if (!DeviceIdentified)DeviceIdentified = IsPataCheck(bus, device, function);
               }
            }
        }
        return;
    }
    else{
        LouPrint("Single Function PCI Device Found Vedor Is: %h and Device Is: %h\n", vendorID, PciGetDeviceID(bus, device, function));
        if (!DeviceIdentified)DeviceIdentified = IsSataCheck(bus, device, function);
        if (!DeviceIdentified)DeviceIdentified = IsPataCheck(bus, device, function);
    }
}

LOUDDK_API_ENTRY void checkBusStorage(uint8_t bus) {
    uint8_t device;

    for (device = 0; device < 32; device++) {
        checkForStorageDevice(bus, device);
    }
}

LOUDDK_API_ENTRY void LookForStorageDevices(){

    LouPrint("Scanning PCI Bus For Storage Devices\n");
    

    uint8_t function;
    uint8_t bus;

    uint8_t headerType = getHeaderType(0, 0, 0);
    if ((headerType & 0x80) == 0) {
        // Single PCI host controller
        checkBusStorage(0);
    }
    else {
        // Multiple PCI host controllers
        for (function = 0; function < 8; function++) {
            if (PciGetVendorID(0, 0) != NOT_A_PCI_DEVICE) break;
            bus = function;
            checkBusStorage(bus);
        }
    }

}