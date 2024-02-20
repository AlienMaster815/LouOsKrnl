#include <LouAPI.h>

uint32_t pci_read(uint8_t bus, uint8_t slot, uint8_t func, uint8_t offset) {
    uint32_t address;
    uint32_t lbus = (uint32_t)bus;
    uint32_t lslot = (uint32_t)slot;
    uint32_t lfunc = (uint32_t)func;

    // Create the PCI configuration address
    address = (uint32_t)((lbus << 16) | (lslot << 11) |
        (lfunc << 8) | (offset & 0xFC) | ((uint32_t)0x80000000));

    // Write the address to the PCI configuration address register
    outl(PCI_CONFIG_ADDRESS_PORT, address);
    // Read and return the data from the PCI configuration data register
    return inl(PCI_CONFIG_DATA_PORT);
}


uint16_t pciConfigReadWord(uint8_t bus, uint8_t slot, uint8_t func, uint8_t offset) {
    uint32_t address;
    uint32_t lbus = (uint32_t)bus;
    uint32_t lslot = (uint32_t)slot;
    uint32_t lfunc = (uint32_t)func;
    uint16_t tmp = 0;

    // Create configuration address as per Figure 1
    address = (uint32_t)((lbus << 16) | (lslot << 11) |
        (lfunc << 8) | (offset & 0xFC) | ((uint32_t)0x80000000));

    // Write out the address
    outl(0xCF8, address);
    // Read in the data
    // (offset & 2) * 8) = 0 will choose the first word of the 32-bit register
    tmp = (uint16_t)((inl(0xCFC) >> ((offset & 2) * 8)) & 0xFFFF);
    return tmp;
}


uint32_t pciConfigAddress(uint8_t bus, uint8_t device, uint8_t function, uint8_t reg) {
    // Construct the address for PCI configuration space access
    return (1U << 31) | (bus << 16) | (device << 11) | (function << 8) | (reg & 0xFC);
}

uint8_t pciConfigReadByte(uint8_t bus, uint8_t device, uint8_t function, uint8_t reg) {
    // Calculate the address for PCI configuration space access
    uint32_t address = pciConfigAddress(bus, device, function, reg);

    // Write the address to the address port
    outl(PCI_CONFIG_ADDRESS_PORT, address);

    // Read and return the byte from the data port
    return inb(PCI_CONFIG_DATA_PORT + (reg & 3));
}

uint8_t getBaseClass(uint8_t bus, uint8_t device, uint8_t function) {
    // Offset 0xB in the PCI configuration space contains the base class
    return pciConfigReadByte(bus, device, function, 0xB);
}

uint8_t getSubClass(uint8_t bus, uint8_t device, uint8_t function) {
    // Offset 0xA in the PCI configuration space contains the subclass
    return pciConfigReadByte(bus, device, function, 0xA);
}

uint8_t getSecondaryBus(uint8_t bus, uint8_t device, uint8_t function) {
    // Offset 0x19 in the PCI configuration space contains the Secondary Bus Number
    return pciConfigReadByte(bus, device, function, 0x19);
}


uint8_t getHeaderType(uint8_t bus, uint8_t device, uint8_t function) {
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

uint16_t PciGetVendorID(uint8_t bus, uint8_t slot) {
    UNUSED uint16_t vendor, device;
    /* Try and read the first configuration register. Since there are no
     * vendors that == 0xFFFF, it must be a non-existent device. */
    if ((vendor = pciConfigReadWord(bus, slot, 0, 0)) != 0xFFFF) {
        device = pciConfigReadWord(bus, slot, 0, 2);
        //TODO: Is Vendor Part Of System
    } return (vendor);
}


bool CheckPciDeviceID(uint16_t device_id, uint8_t bus, uint8_t slot,uint8_t func) {
    // Read the vendor ID and device ID from the PCI configuration space
    uint32_t data = pci_read(bus, slot, func, 0x00);
    uint16_t vendor_id = data & 0xFFFF;
    uint16_t dev_id = (data >> 16) & 0xFFFF;

    // Check if the device ID matches
    if (dev_id == device_id) {
        return true;  // Match found
    }
    return false;  // No match found
}



// Function to retrieve the device ID of a PCI device
uint16_t PciGetDeviceID(uint8_t bus ,uint8_t slot,uint8_t func) {
    // Read the vendor ID from the PCI configuration space
    uint32_t data = pci_read(bus, slot, func, 0x00);
    // Extract and return the vendor ID
    return (data >> 16) & 0xFFFF;
}

bool IsPartOfVendorDictionary() {

}

bool IsPartOfDeviceDictionary() {

}