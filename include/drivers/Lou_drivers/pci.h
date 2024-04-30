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

#include "pcireg.h"
#include <kernel/atomic.h>

//Define World Wide Constant

typedef struct _PCIDev {

}PCIDev, * P_PCIDEV;

typedef struct _PCIBuffer {

}PCIBuffer, * P_PCIBuffer;

typedef int pci_power_t;


typedef struct _PCI_DEVICE_OBJECT {
	uint16_t VendorID;
	uint16_t DeviceID;
	uint8_t bus;
	uint8_t slot;
	uint8_t func;
	pci_power_t CurrentState;
	uint8_t PmCap;
	atomic_t enable_cnt;
	
	//IO SPACES
	uint32_t BAR0;
	uint32_t BAR1;
	uint32_t BAR2;
	uint32_t BAR3;
	uint32_t BAR4;
	uint32_t BAR5;

}PCI_DEVICE_OBJECT,*P_PCI_DEVICE_OBJECT;


#define PCI_CONFIG_ADDRESS_PORT 0xCF8
#define PCI_CONFIG_DATA_PORT    0xCFC

// Define the PCI configuration space address space
#define PCI_CONFIG_ADDRESS 0xCF8
#define PCI_CONFIG_DATA    0xCFC

// Define PCI configuration space registers
#define PCI_VENDOR_ID      0x00
#define PCI_COMMAND        0x04
#define PCI_STATUS         0x06
#define PCI_REVISION_ID    0x08
#define PCI_CLASS_CODE     0x0B

#define PCI_D0		((pci_power_t) 0)
#define PCI_D1		((pci_power_t) 1)
#define PCI_D2		((pci_power_t) 2)
#define PCI_D3hot	((pci_power_t) 3)
#define PCI_D3cold	((pci_power_t) 4)
#define PCI_UNKNOWN	((pci_power_t) 5)
#define PCI_POWER_ERROR	((pci_power_t) -1)

enum BaseAddressRegisterType {
	MemoryMapping = 0,
	InputOutPut = 1
};

#ifdef __cplusplus
#include <LouDDK.h>


KERNEL_IMPORT uint32_t pci_read(uint8_t bus, uint8_t slot, uint8_t func, uint8_t offset);
KERNEL_IMPORT uint32_t write_pci(uint8_t bus, uint8_t slot, uint8_t func, uint8_t offset,uint32_t Value);
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
KERNEL_IMPORT bool PciEnableDevice(uint8_t bus, uint8_t slot, uint8_t function);
KERNEL_IMPORT bool IsPciEnable(uint8_t bus, uint8_t slot, uint8_t func);
KERNEL_IMPORT void pciConfigWriteByte(uint8_t bus, uint8_t device, uint8_t function, uint8_t reg, uint8_t value);
KERNEL_IMPORT void pciConfigWriteWord(uint8_t bus, uint8_t slot, uint8_t func, uint8_t offset, uint16_t value);


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


class BaseAddressRegister {
public:
	bool prefetchable[6];
	uint8_t* address[6];
	uint32_t size[6];
	BaseAddressRegisterType type[6];

	BaseAddressRegister(P_PCI_DEVICE_OBJECT PDEV);
	~BaseAddressRegister();

};

BaseAddressRegister GetAllIoSpaces(P_PCI_DEVICE_OBJECT PDEV);

#else

#include <LouAPI.h>



//Is C Land
P_PCIBuffer PCI_Read(P_PCIDEV Device);
void PCI_Write(P_PCIDEV Device, P_PCIBuffer buffer);
void PCI_Setup();

bool PciEnableDevice(uint8_t bus, uint8_t slot, uint8_t function);

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
bool IsPciEnable(uint8_t bus, uint8_t slot, uint8_t func);

void pciConfigWriteByte(uint8_t bus, uint8_t device, uint8_t function, uint8_t reg, uint8_t value);
void pciConfigWriteWord(uint8_t bus, uint8_t slot, uint8_t func, uint8_t offset, uint16_t value);

#endif

#ifndef PCI_GLOBAL_VAR
#define PCI_GLOBAL_VAR

#endif


#endif