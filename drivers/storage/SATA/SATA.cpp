#include <LouDDK.h>





LOUDDK_API_ENTRY void IsSataCheck(uint8_t bus, uint8_t slot, uint8_t func) {
	LouPrint("Checking PCI For Sata Controller\n");

	uint16_t vendorID = PciGetVendorID(bus, slot);
	uint16_t deviceID = PciGetDeviceID(bus, slot, func);

	switch (vendorID) {
	case 0x8086:
		switch (deviceID) {
		case INTEL_DEVICE_8086_82801HM_HEM_ICH8M_ICH8M_E_SATA_CONTROLLER_AHCI_MODE:
			LouPrint("Found A Sata Device\n");
			Sata_init(bus, slot, func);
			break;
		default:
			LouPrint("Not A Recognized Sata Device: No Driver Available\n");
			break;
		}
		break;
	default:
		LouPrint("Not A Sata Device\n");
		break;
	}
}


LOUDDK_API_ENTRY void Sata_init(uint8_t bus, uint8_t slot, uint8_t func) {


	LouPrint("Creating SATA Object\n");

	SataDevices[DevSet] = (P_SATA_PCI_DEVICE)Lou_Alloc_Mem(sizeof(SATA_PCI_DEVICE));

	SataDevices[DevSet]->bus = bus;
	SataDevices[DevSet]->slot = slot;
	SataDevices[DevSet]->function = func;
	DeviceSelected = DevSet;
	DevSet++;

	SataDevices[DeviceSelected]->AHCI_Address = FindAhciAddress(SataDevices[DeviceSelected]);

	LouMapAddress(SataDevices[DeviceSelected]->AHCI_Address, SataDevices[DeviceSelected]->AHCI_Address, KERNEL_PAGE_WRITE_PRESENT);


	//INITIALIZE CONTROLLER
	if (!SetAHCIMode(SataDevices[DeviceSelected])) {
		LouPrint("Error Initializing Device\n");
		return;
	}

	//find implemented ports

	LouPrint("AHCI Address Is:%d\n", SataDevices[DeviceSelected]->AHCI_Address);




	LouPrint("SATA Device Initialized\n");

}

LOUDDK_API_ENTRY void UnmountSataDevice(uint8_t Device) {


}



