#include <LouDDK.h>
#include <Hal.h>

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
bool PciExternalModuleScan(uint8_t bus, uint8_t slot, uint8_t func);

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
    PCI_DEVICE_OBJECT Dev;
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
                    Dev.bus = bus;
                    Dev.slot = device;
                    Dev.func = function;
                    LouKeHalRegisterPCiDevice(
                        &Dev
                    );
                }
            }
        }
        return;
    }
    else{
        LouPrint("Single Function PCI Device Found Vedor Is: %h and Device Is: %h\n", vendorID, PciGetDeviceID(bus, device, function));
        Dev.bus = bus;
        Dev.slot = device;
        Dev.func = function;
        LouKeHalRegisterPCiDevice(
            &Dev
        );
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

LOUDDK_API_ENTRY uint8_t LouKeReadPciUint8(P_PCI_DEVICE_OBJECT PDEV, uint32_t Offset){
    return pciConfigReadByte(PDEV->bus,PDEV->slot,PDEV->func, Offset);
}

LOUDDK_API_ENTRY uint16_t LouKeReadPciUint16(P_PCI_DEVICE_OBJECT PDEV, uint32_t Offset){
    return pciConfigReadWord(PDEV->bus,PDEV->slot,PDEV->func, Offset);

}

LOUDDK_API_ENTRY uint32_t LouKeReadPciUint32(P_PCI_DEVICE_OBJECT PDEV, uint32_t Offset){
    return pci_read(PDEV->bus,PDEV->slot,PDEV->func, Offset);
}


LOUDDK_API_ENTRY void LouKeWritePciUint8(P_PCI_DEVICE_OBJECT PDEV, uint32_t Offset, uint8_t Value){
    pciConfigWriteByte(PDEV->bus,PDEV->slot,PDEV->func,Offset,Value);
}

LOUDDK_API_ENTRY void LouKeWritePciUint16(P_PCI_DEVICE_OBJECT PDEV, uint32_t Offset, uint16_t Value){
    pciConfigWriteWord(PDEV->bus, PDEV->slot,PDEV->func,Offset,Value);
}

LOUDDK_API_ENTRY void LouKeWritePciUint32(P_PCI_DEVICE_OBJECT PDEV, uint32_t Offset, uint32_t Value){
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
                    if(PciExternalModuleScan(bus, device, function))return;
               }
            }
        }
        return;
    }
    else{
        LouPrint("Single Function PCI Device Found Vedor Is: %h and Device Is: %h\n", vendorID, PciGetDeviceID(bus, device, function));
        if(PciExternalModuleScan(bus, device, function))return;

    }
}

LOUDDK_API_ENTRY void checkBusStorage(uint8_t bus) {
    uint8_t device;

    for (device = 0; device < 32; device++) {
        checkForStorageDevice(bus, device);
    }
}

static spinlock_t StorageScanLock;

LOUDDK_API_ENTRY void LookForStorageDevices(){
    LouKIRQL OldIrql;
    LouKeAcquireSpinLock(&StorageScanLock, &OldIrql);
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
    LouPrint("Done Scanning For Storage Devices\n");
    LouKeReleaseSpinLock(&StorageScanLock, &OldIrql);

}

KERNEL_IMPORT 
void LouKeRunOnNewStack(void (*func)(void*), void* FunctionParameters, size_t stack_size) ;

LOUDDK_API_ENTRY 
void LouKeMapPciMemory(){
    PCI_Scan_Bus();
}

LOUDDK_API_ENTRY
void ScanTheRestOfHarware(){
    LouPrint("Scanning For All Other Hardware\n");
}

KERNEL_IMPORT
bool LouKeSeachPreLoadedSystemModules(P_PCI_DEVICE_OBJECT PDEV);

bool IsAtaController(P_PCI_DEVICE_OBJECT PDEV);
void InitializeAtaDevice();

bool PciExternalModuleScan(uint8_t bus, uint8_t slot, uint8_t func){

    P_PCI_DEVICE_OBJECT PDEV = (P_PCI_DEVICE_OBJECT)LouMalloc(sizeof(PCI_DEVICE_OBJECT));
    PDEV->bus = bus;
    PDEV->slot = slot;
    PDEV->func = func;

    if(IsAtaController(PDEV)){
        InitializeAtaDevice();
        return true;
    }

    return false;
}