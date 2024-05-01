#include <LouDDK.h>

#define PciGadgetHeader 0x00
#define PciBridgeHeader 0x01
#define PciCardHeader	0x02
#define BAR0Offset 0x10
#define BAR1Offset 0x14
#define BAR2Offset 0x18
#define BAR3Offset 0x1C
#define BAR4Offset 0x20
#define BAR5Offset 0x24


BaseAddressRegister::BaseAddressRegister(P_PCI_DEVICE_OBJECT PDEV) {
	uint32_t Bar[6];
	Bar[0] = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR0Offset);
	Bar[1] = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR1Offset);
	Bar[2] = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR2Offset);
	Bar[3] = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR3Offset);
	Bar[4] = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR4Offset);
	Bar[5] = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR5Offset);
	
	for (uint8_t BarNum = 0; BarNum < 6; BarNum++) {
		
		type[BarNum] = (Bar[BarNum] & 0x01) ? InputOutPut : MemoryMapping;

		if (type[BarNum] == MemoryMapping) {
			// store temp
			// write 1
			// read value
			// write back temp;
			// device will cancel
			// upper is how big the memory mapping is
			LouPrint("Memory Map Is ");
			switch ((Bar[BarNum] >> 1) & 0x03) {
				case 0: { // 32 bit
					LouPrint("32 Bit\n");
					//LouPrint("Bar %d Is:%bi\n",BarNum,Bar[BarNum]);
					
					size[BarNum] = 32;

					address[BarNum] = (uint8_t*)(uintptr_t)(Bar[BarNum] & 0xFFFFFFF0);
					
					//uint32_t Temp;
					continue;
				}
				case 1: { // 20 bit
					LouPrint("20 Bit\n");

					size[BarNum] = 20;

					continue;
				}
				case 2: { // 64 bit
					LouPrint("64 Bit\n");
					size[BarNum] = 64;

					address[BarNum] = (uint8_t*)(uintptr_t)(Bar[BarNum] & 0xFFFFFFF0);

					continue;
				}
				default:
					continue;
			}
		}
		else {
			address[BarNum] = (uint8_t*)(uintptr_t)(Bar[BarNum] & 0x03);
			prefetchable[BarNum] = false;
		}

	}

}


BaseAddressRegister::~BaseAddressRegister() {

}
