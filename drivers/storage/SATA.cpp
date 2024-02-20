#include <LouDDK.h>

uint8_t DevSet = 0;
uint8_t DeviceSelected;


LOUDDK_API_ENTRY void IsSataCheck(uint8_t bus, uint8_t slot, uint8_t func) {

	LouPrint("Checking PCI For Sata Controller\n");
	switch (PciGetVendorID(bus,slot)) {

	case 0x8086:
		if (CheckPciDeviceID(INTEL_DEVICE_8086_82801HM_HEM_ICH8M_ICH8M_E_SATA_CONTROLLER_AHCI_MODE, bus, slot, func)) {
			LouPrint("Found A Sata Device\n");
			Sata_init(bus, slot, func);
		}
		break;
	
	default:
		LouPrint("Not A Sata Device\n");
	}
}

LOUDDK_API_ENTRY void Sata_init(uint8_t bus, uint8_t slot, uint8_t func) {

	LouPrint("Enableing Device\n");
	
	//TODO: Enable PCI Device


	LouPrint("Creating SATA Object\n");

	SataDevices[DevSet] = (P_SATA_PCI_DEVICE)Lou_Alloc_Mem(sizeof(SATA_PCI_DEVICE));

	SataDevices[DevSet]->bus = bus;
	SataDevices[DevSet]->slot = slot;
	SataDevices[DevSet]->function = func;
	DeviceSelected = DevSet;
	DevSet++;

	LouPrint("Initializing Sata Device\n");


	//TODO:initialize controller
	

}
LOUDDK_API_ENTRY void UnmountSataDevice() {

}