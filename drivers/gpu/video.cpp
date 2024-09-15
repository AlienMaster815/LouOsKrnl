#include "VBOX/VBoxVGA.h"
#include <drivers/display/IntelGpu.h>
#include <drivers/display/AmdGpu.h>

void InitializeAmdGpu(P_PCI_DEVICE_OBJECT PDEV);

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
	//else if(VendorID == 0x1002){
		//jump to AMDGPU
	//	InitializeAmdGpu(PDEV);
	//}
	else if(VendorID == 0x8086){
		if(IsWESTMERE(DeviceID)){
			InitializeWestmere(PDEV);
		}
		else if(IsSANDYBRIDGEGT1(DeviceID)){
			InitializeSandyBridgeGt1(PDEV);
		}
		else if(IsSANDYBRIDGEGT2(DeviceID)){
			InitializeSandyBridgeGt2(PDEV);
		}
	}
	else{
		//here for a known compiler bug with if statements
	}

}
