#include <LouDDK.h>
#include <NtAPI.h>


#define PciGadgetHeader 0x00
#define PciBridgeHeader 0x01
#define PciCardHeader	0x02
#define BAR0Offset 0x10
#define BAR1Offset 0x14
#define BAR2Offset 0x18
#define BAR3Offset 0x1C
#define BAR4Offset 0x20
#define BAR5Offset 0x24



void GetAllIoSpaces(P_PCI_DEVICE_OBJECT PDEV) {

	uint8_t type = getHeaderType(PDEV->bus, PDEV->slot, PDEV->func);

	switch (type) {

	case (PciGadgetHeader): {

		PDEV->BAR0 = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR0Offset);
		PDEV->BAR1 = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR1Offset);
		PDEV->BAR2 = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR2Offset);
		PDEV->BAR3 = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR3Offset);
		PDEV->BAR4 = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR4Offset);
		PDEV->BAR5 = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR5Offset);

		break;
	}

	case (PciBridgeHeader):
		break;

	case (PciCardHeader):
		break;

	default:
		LouPrint("No Suitable Header Found\n");
		break;
	}

}