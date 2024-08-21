#include "VBOX/VBoxVGA.h"


void InitializeVgaDevice(
	P_PCI_DEVICE_OBJECT PDEV
);

bool IsVGA(uint8_t bus,uint8_t slot,uint8_t function) {

	PCI_DEVICE_OBJECT VGADev;

	VGADev.bus = bus;
	VGADev.slot = slot;
	VGADev.func = function;

	if(( LouKePciReadHeaderType(&VGADev) == 0)
	&&	((LouKePciReadClass(&VGADev) == 0 && LouKePciReadSubClass(&VGADev) == 1) ||
		(LouKePciReadClass(&VGADev) == 0x03 && LouKePciReadSubClass(&VGADev) == 0x00))
		){
		LouPrint("Found A VGA Controller\n");
		InitializeVgaDevice(
			&VGADev
		);
		return true;
	}
	return false;
}




// Function to initialize the VGA device
void InitializeVgaDevice(P_PCI_DEVICE_OBJECT PDEV) {	

	LouPrint("Found A VGA Device\n");

	uint16_t VendorID = PciGetVendorID(PDEV->bus, PDEV->slot);
	uint16_t DeviceID = PciGetDeviceID(PDEV->bus, PDEV->slot, PDEV->func);

	PDEV->VendorID = VendorID;
	PDEV->DeviceID = DeviceID;

	if(VendorID == 0x80EE){
		PreVBoxVGAInit(PDEV);
		InitializeVirtualBoxVgaAdapter(PDEV);
		return;
	}

}
