#include <LouDDK.h>

//CPP Land
DRIVER_IO_FUNCTION P_PCIBuffer PCI::PCI_Read(P_PCIDEV Device) {
    P_PCIBuffer PCIBuff = (P_PCIBuffer)Lou_Alloc_Mem(sizeof(PCIBuffer));


    return PCIBuff;
}

DRIVER_IO_FUNCTION void PCI::PCI_Write(P_PCIDEV Device, P_PCIBuffer buffer) {

}


LOUDDK_API_ENTRY uint8_t getHeaderType(uint8_t bus, uint8_t device, uint8_t function) {
    // Assuming pciConfigReadByte is a function to read a byte from PCI configuration space
    // You might need to replace it with the appropriate function from your hardware access library
    uint8_t headerType;

    if (function == 0) {
        // For function 0, directly read the header type from offset 0xE
        headerType = pciConfigReadByte(bus, device, function, 0xE); // Offset 0xE contains header type
    }
    else {
        // For non-function 0, read the header type from offset 0x0E in the multi-function header
        headerType = pciConfigReadByte(bus, device, 0, 0xE); // Offset 0xE contains header type
    }

    return headerType;
}


LOUDDK_API_ENTRY uint16_t pciCheckVendor(uint8_t bus, uint8_t slot) {
    UNUSED uint16_t vendor, device;
    /* Try and read the first configuration register. Since there are no
     * vendors that == 0xFFFF, it must be a non-existent device. */
    if ((vendor = pciConfigReadWord(bus, slot, 0, 0)) != 0xFFFF) {
        device = pciConfigReadWord(bus, slot, 0, 2);
        //TODO: Is Vendor Part Of System
    } return (vendor);
}



LOUDDK_API_ENTRY void checkDevice(uint8_t bus, uint8_t device) {
    uint8_t function = 0;

    uint16_t vendorID = pciCheckVendor(bus, device);
    if (vendorID == 0xFFFF) return; // Device doesn't exist
    LouPrint("PCI Device Found\n");
    checkFunction(bus, device, function);
    uint8_t headerType = getHeaderType(bus, device, function);
    if ((headerType & 0x80) != 0) {
        LouPrint("Device Is MultiFunction\n");
        // It's a multi-function device, so check remaining functions
        for (function = 1; function < 8; function++) {
            if (pciCheckVendor(bus, device) != 0xFFFF) {
                checkFunction(bus, device, function);
            }
        }
    }
}


LOUDDK_API_ENTRY void checkBus(uint8_t bus) {
    uint8_t device;

    for (device = 0; device < 32; device++) {
        checkDevice(bus, device);
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
            if (pciCheckVendor(0, 0) != 0xFFFF) break;
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