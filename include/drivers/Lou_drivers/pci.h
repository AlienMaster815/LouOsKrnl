/*
-- Tyler Grenier 2/6/24 11:14:45 AM
*/
#pragma pack(push, 1)

//Define the Lou Driver Kit For Our Constants

#ifndef _PCI_H
#define _PCI_H
#include "PciIds.h"

#define PROGIF 9

#define PCI_INTERRUPT_DISABLE (1 << 10)
#define PCI_INTERRUPT_ENABLE ~(1 << 10)
#define SERR_ENABLE (1 << 8)
#define SERR_DISABLE ~(1 << 8)
#define PARITY_NORMAL (1 << 6)
#define PARITY_SPECIAL ~(1 << 6)
#define BUS_MASTER_ENABLE (1 << 2)
#define BUS_MASTER_DISABLE ~(1 << 2)
#define MEMORY_SPACE_ENABLE (1 << 1)
#define MEMORY_SPACE_DISABLE ~(1 << 1)
#define IO_SPACE_ENABLE (1)
#define IO_SPACE_DISABLE ~(1)
#define PCI_IRQ_MSI (1 << 0)
#define PCI_IRQ_MSIX (1 << 1)

#include "pcireg.h"
#include <kernel/atomic.h>
//Define World Wide Constant

typedef struct _PCIDev {

}PCIDev, * P_PCIDEV;

typedef struct _PCIBuffer {

}PCIBuffer, * P_PCIBuffer;

typedef int pci_power_t;

#ifndef _PCI_DEVICE_OBJECT_
#define _PCI_DEVICE_OBJECT_
typedef struct _PCI_DEVICE_OBJECT {
	uint16_t VendorID;
	uint16_t DeviceID;
	uint8_t bus;
	uint8_t slot;
	uint8_t func;
	int NumberOfSAssignedVectors;
	uint64_t* InterruptVectors;
	void* Dev;
	pci_power_t CurrentState;
	uint8_t PmCap;
	atomic_t enable_cnt;
	uintptr_t DeviceExtendedObject; 
}PCI_DEVICE_OBJECT,*P_PCI_DEVICE_OBJECT;
#endif


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

#define ANY_PCI_ID 0xFFFF

enum BaseAddressRegisterType {
	MemoryMapping = 0,
	InputOutPut = 1
};

#ifdef __cplusplus
#include <LouDDK.h>

#ifndef _KERNEL_MODULE_
uint8_t LouKePciReadHeaderType(P_PCI_DEVICE_OBJECT PDEV);
uint32_t LouKeReadPciVendorId(P_PCI_DEVICE_OBJECT PDEV);
uint32_t LouKeReadPciDeviceId(P_PCI_DEVICE_OBJECT PDEV);
uint8_t LouKePciReadSubClass(P_PCI_DEVICE_OBJECT PDEV);
uint8_t LouKePciReadClass(P_PCI_DEVICE_OBJECT PDEV);
uint8_t LouKeGetPciInterruptPin(P_PCI_DEVICE_OBJECT PDEV);
uint8_t LouKeGetPciInterruptLine(P_PCI_DEVICE_OBJECT PDEV);
void LouKeConfigureInterrupt(P_PCI_DEVICE_OBJECT PDEV,  bool Mask, uint8_t Pin, uint8_t Destination);
void LouKeWritePciCommandRegister(P_PCI_DEVICE_OBJECT PDEV,uint16_t Value);
uint16_t LouKeReadPciCommandRegister(P_PCI_DEVICE_OBJECT PDEV);

LOUDDK_API_ENTRY uint8_t LouKeReadPciUint8(P_PCI_DEVICE_OBJECT PDEV, uint32_t Offset);
LOUDDK_API_ENTRY uint16_t LouKeReadPciUint16(P_PCI_DEVICE_OBJECT PDEV, uint32_t Offset);
LOUDDK_API_ENTRY uint32_t LouKeReadPciUint32(P_PCI_DEVICE_OBJECT PDEV, uint32_t Offset);
LOUDDK_API_ENTRY void LouKeWritePciUint8(P_PCI_DEVICE_OBJECT PDEV, uint32_t Offset, uint8_t Value);
LOUDDK_API_ENTRY void LouKeWritePciUint16(P_PCI_DEVICE_OBJECT PDEV, uint32_t Offset, uint16_t Value);
LOUDDK_API_ENTRY void LouKeWritePciUint32(P_PCI_DEVICE_OBJECT PDEV, uint32_t Offset, uint32_t Value);

KERNEL_IMPORT uint32_t pci_read(uint8_t bus, uint8_t slot, uint8_t func, uint32_t offset);
KERNEL_IMPORT void write_pci(uint8_t bus, uint8_t slot, uint8_t func, uint32_t offset,uint32_t Value);
KERNEL_IMPORT uint16_t pciConfigReadWord(uint8_t bus, uint8_t slot, uint8_t func, uint32_t offset);
KERNEL_IMPORT uint32_t pciConfigAddress(uint8_t bus, uint8_t device, uint8_t function, uint32_t reg);
KERNEL_IMPORT uint8_t pciConfigReadByte(uint8_t bus, uint8_t device, uint8_t function, uint32_t reg);
KERNEL_IMPORT uint8_t getBaseClass(uint8_t bus, uint8_t device, uint8_t function);
KERNEL_IMPORT uint8_t getSubClass(uint8_t bus, uint8_t device, uint8_t function);
KERNEL_IMPORT uint8_t getSecondaryBus(uint8_t bus, uint8_t device, uint8_t function);
KERNEL_IMPORT uint16_t PciGetVendorID(uint8_t bus, uint8_t slot);
KERNEL_IMPORT uint8_t getHeaderType(uint8_t bus, uint8_t device, uint8_t function);
KERNEL_IMPORT bool CheckPciDeviceID(uint16_t device_id, uint8_t bus, uint8_t slot, uint8_t func);
KERNEL_IMPORT uint16_t PciGetDeviceID(uint8_t bus, uint8_t slot, uint8_t func);
KERNEL_IMPORT bool PciEnableDevice(uint8_t bus, uint8_t slot, uint8_t function);
KERNEL_IMPORT bool IsPciEnable(uint8_t bus, uint8_t slot, uint8_t func);
KERNEL_IMPORT void pciConfigWriteByte(uint8_t bus, uint8_t device, uint8_t function, uint32_t reg, uint8_t value);
KERNEL_IMPORT void pciConfigWriteWord(uint8_t bus, uint8_t slot, uint8_t func, uint32_t offset, uint16_t value);


LOUDDK_API_ENTRY void PCI_Scan_Bus();
LOUDDK_API_ENTRY void checkDevice(uint8_t bus, uint8_t device);
LOUDDK_API_ENTRY void checkBus(uint8_t bus);
LOUDDK_API_ENTRY void checkFunction(uint8_t bus, uint8_t device, uint8_t function);
LOUDDK_API_ENTRY void PCI_Scan_Bus();
LOUDDK_API_ENTRY void Sata_init(P_PCI_DEVICE_OBJECT PDEV);

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
	bool MMIO[6];
	BaseAddressRegisterType type[6];

	BaseAddressRegister(P_PCI_DEVICE_OBJECT PDEV);
	~BaseAddressRegister();

private:
	bool DisableChildProofing(P_PCI_DEVICE_OBJECT PDEV);
	bool EnableChildProofing(P_PCI_DEVICE_OBJECT PDEV);
	uint16_t command;
};

BaseAddressRegister GetAllIoSpaces(P_PCI_DEVICE_OBJECT PDEV);

#else

#include <LouAPI.h>



//Is C Land
P_PCIBuffer PCI_Read(P_PCIDEV Device);
void PCI_Write(P_PCIDEV Device, P_PCIBuffer buffer);
void PCI_Setup();

bool PciEnableDevice(uint8_t bus, uint8_t slot, uint8_t function);

uint16_t pciConfigReadWord(uint8_t bus, uint8_t slot, uint8_t func, uint32_t offset);

uint32_t pciConfigAddress(uint8_t bus, uint8_t device, uint8_t function, uint32_t reg);

uint8_t pciConfigReadByte(uint8_t bus, uint8_t device, uint8_t function, uint32_t reg);

P_PCIBuffer PCI_Read(P_PCIDEV Device);
void PCI_Write(P_PCIDEV Device, P_PCIBuffer buffer);

uint16_t pciConfigReadWord(uint8_t bus, uint8_t slot, uint8_t func, uint32_t offset);

void PCI_Scan_Bus();
uint16_t PciGetVendorID(uint8_t bus, uint8_t slot);
void checkDevice(uint8_t bus, uint8_t device);
void checkBus(uint8_t bus);
void checkFunction(uint8_t bus, uint8_t device, uint8_t function);
void PCI_Scan_Bus();
bool CheckPciDeviceID(uint16_t device_id, uint8_t bus, uint8_t slot, uint8_t func);
uint16_t PciGetDeviceID(uint8_t bus, uint8_t slot, uint8_t func);
bool IsPciEnable(uint8_t bus, uint8_t slot, uint8_t func);

void pciConfigWriteByte(uint8_t bus, uint8_t device, uint8_t function, uint32_t reg, uint8_t value);
void pciConfigWriteWord(uint8_t bus, uint8_t slot, uint8_t func, uint32_t offset, uint16_t value);
#endif

#endif

#ifndef PCI_GLOBAL_VAR
#define PCI_GLOBAL_VAR

#endif


#endif
#pragma pack(pop)


#ifdef _KERNEL_MODULE_


KERNEL_EXPORT uint32_t pci_read(uint8_t bus, uint8_t slot, uint8_t func, uint8_t offset);
KERNEL_EXPORT void write_pci(uint8_t bus, uint8_t slot, uint8_t func, uint8_t offset,uint32_t Value);

KERNEL_EXPORT uint8_t LouKeReadPciUint8(P_PCI_DEVICE_OBJECT PDEV, uint32_t Offset);
KERNEL_EXPORT uint16_t LouKeReadPciUint16(P_PCI_DEVICE_OBJECT PDEV, uint32_t Offset);
KERNEL_EXPORT LouKeReadPciUint32(P_PCI_DEVICE_OBJECT PDEV, uint32_t Offset);
KERNEL_EXPORT void LouKeWritePciUint8(P_PCI_DEVICE_OBJECT PDEV, uint32_t Offset, uint8_t Value);
KERNEL_EXPORT void LouKeWritePciUint16(P_PCI_DEVICE_OBJECT PDEV, uint32_t Offset, uint16_t Value);
KERNEL_EXPORT void LouKeWritePciUint32(P_PCI_DEVICE_OBJECT PDEV, uint32_t Offset, uint32_t Value);


#endif