/*
-- Tyler Grenier 2/6/24 11:14:45 AM
-- Great Im in a fucking mood now the cunt
-- accross from me that I liked and thought 
-- I had somthing going on said I was aa creep
-- and that she said she had a boyfreind so...
-- Rather than blow my brains out im doing this to
-- calm me down yet this dosent FUCKING CALM ME 
-- DOWN!!!!!
*/


//Define the Lou Driver Kit For Our Constants

#ifndef _PCI_H
#define _PCI_H

//Define World Wide Constant

typedef struct _PCIDev {

}PCIDev, * P_PCIDEV;

typedef struct _PCIBuffer {

}PCIBuffer, * P_PCIBuffer;

typedef struct _PCI_DEVICE_OBJECT {
	uint16_t VendorID;
	uint16_t DeviceID;
	uint8_t bus;
	uint8_t slot;
	uint8_t func;
}PCI_DEVICE_OBJECT,*P_PCI_DEVICE_OBJECT;

#define PCI_CONFIG_ADDRESS_PORT 0xCF8
#define PCI_CONFIG_DATA_PORT    0xCFC



#ifdef __cplusplus
#include <LouDDK.h>

DRIVER_IO_FUNCTION P_PCIBuffer PCI_Read(P_PCIDEV Device);
DRIVER_IO_FUNCTION void PCI_Write(P_PCIDEV Device, P_PCIBuffer buffer);

KERNEL_IMPORT uint16_t pciConfigReadWord(uint8_t bus, uint8_t slot, uint8_t func, uint8_t offset);
KERNEL_IMPORT uint32_t pciConfigAddress(uint8_t bus, uint8_t device, uint8_t function, uint8_t reg);
KERNEL_IMPORT uint8_t pciConfigReadByte(uint8_t bus, uint8_t device, uint8_t function, uint8_t reg);
KERNEL_IMPORT uint8_t getBaseClass(uint8_t bus, uint8_t device, uint8_t function);
KERNEL_IMPORT uint8_t getSubClass(uint8_t bus, uint8_t device, uint8_t function);
KERNEL_IMPORT uint8_t getSecondaryBus(uint8_t bus, uint8_t device, uint8_t function);
KERNEL_IMPORT uint16_t PciGetVendorID(uint8_t bus, uint8_t slot);
KERNEL_IMPORT uint8_t getHeaderType(uint8_t bus, uint8_t device, uint8_t function);
KERNEL_IMPORT bool CheckPciDeviceID(uint16_t device_id, uint8_t bus, uint8_t slot, uint8_t func);
KERNEL_IMPORT uint16_t PciGetDeviceID(uint8_t bus, uint8_t slot, uint8_t func);

LOUDDK_API_ENTRY void PCI_Scan_Bus();
LOUDDK_API_ENTRY void checkDevice(uint8_t bus, uint8_t device);
LOUDDK_API_ENTRY void checkBus(uint8_t bus);
LOUDDK_API_ENTRY void checkFunction(uint8_t bus, uint8_t device, uint8_t function);
LOUDDK_API_ENTRY void PCI_Scan_Bus();

class PCI{

	public:
		P_PCIBuffer PCI_Read(P_PCIDEV Device);
		void PCI_Write(P_PCIDEV Device, P_PCIBuffer buffer);

	private:

};



#else

#include <LouAPI.h>

//Is C Land
P_PCIBuffer PCI_Read(P_PCIDEV Device);
void PCI_Write(P_PCIDEV Device, P_PCIBuffer buffer);
void PCI_Setup();

uint16_t pciConfigReadWord(uint8_t bus, uint8_t slot, uint8_t func, uint8_t offset);

uint32_t pciConfigAddress(uint8_t bus, uint8_t device, uint8_t function, uint8_t reg);

uint8_t pciConfigReadByte(uint8_t bus, uint8_t device, uint8_t function, uint8_t reg);

P_PCIBuffer PCI_Read(P_PCIDEV Device);
void PCI_Write(P_PCIDEV Device, P_PCIBuffer buffer);

uint16_t pciConfigReadWord(uint8_t bus, uint8_t slot, uint8_t func, uint8_t offset);

void PCI_Scan_Bus();
uint16_t PciGetVendorID(uint8_t bus, uint8_t slot);
void checkDevice(uint8_t bus, uint8_t device);
void checkBus(uint8_t bus);
void checkFunction(uint8_t bus, uint8_t device, uint8_t function);
void PCI_Scan_Bus();
bool CheckPciDeviceID(uint16_t device_id, uint8_t bus, uint8_t slot, uint8_t func);
uint16_t PciGetDeviceID(uint8_t bus, uint8_t slot, uint8_t func);

#endif

#endif