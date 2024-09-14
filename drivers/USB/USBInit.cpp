#include <LouDDK.h>
#include<NtAPI.h> 

typedef enum{
	UHCI = 0,
	OHCI = 1,
	EHCI = 2,
	XHCI = 3
}USB_HARDWARE_TYPE;

void USB_INIT(
	P_PCI_DEVICE_OBJECT USB_DEV,
	PPCI_COMMON_CONFIG Config	
);

void 
InitializeUHCIController(
P_PCI_DEVICE_OBJECT PDEV,
PPCI_COMMON_CONFIG PciConfig
);

void 
InitializeOHCIController(
P_PCI_DEVICE_OBJECT PDEV,
PPCI_COMMON_CONFIG PciConfig
);

uint8_t 
LouKePciReadProgIf(
P_PCI_DEVICE_OBJECT PDEV,
PPCI_COMMON_CONFIG PciConfig
);

void 
InitializeEHCIController(
P_PCI_DEVICE_OBJECT PDEV,
PPCI_COMMON_CONFIG PciConfig
);

void 
InitializeXHCIController(
P_PCI_DEVICE_OBJECT PDEV,
PPCI_COMMON_CONFIG PciConfig
);

bool isUsb(uint8_t bus, uint8_t slot, uint8_t function) {

	PCI_DEVICE_OBJECT DEV; 

	DEV.bus = bus;
	DEV.slot = slot;
	DEV.func = function;

	PPCI_COMMON_CONFIG PciConfig = (PPCI_COMMON_CONFIG)LouMalloc(sizeof(PCI_COMMON_CONFIG));
	GetPciConfiguration(bus,slot,function, PciConfig);

	if((PciConfig->Header.HeaderType == 0x00) && (PciConfig->Header.BaseClass == 0x0C) && (PciConfig->Header.SubClass == 0x03)){
		USB_INIT(&DEV, PciConfig);
		LouFree((RAMADD)PciConfig);
		return true;
	}


	LouFree((RAMADD)PciConfig);

	return false;
}

void USB_INIT(
	P_PCI_DEVICE_OBJECT USB_DEV,
	PPCI_COMMON_CONFIG Config	
) {

	LouPrint("Initializing USB Controller\n");

	uint8_t Progif = Config->Header.ProgIf;

	switch (Progif){
		case 0x00: {
			InitializeUHCIController(USB_DEV, Config);
			return;
		}
		case 0x10:{
			InitializeOHCIController(USB_DEV, Config);
			return;
		}
		case 0x20: {
			InitializeEHCIController(USB_DEV, Config);
			return;
		}
		case 0x30:{	
			InitializeXHCIController(USB_DEV, Config);
			return;
		}
		default:
			return;
	}	

}