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
			MMIO[BarNum] = true;
			// Store the original value of the BAR
			uint32_t originalBarValue = Bar[BarNum];
			// Write all 1s to the BAR
			write_pci(PDEV->bus, PDEV->slot, PDEV->func, BAR0Offset + (BarNum * 4), 0xFFFFFFFF);

			// Read back the value to determine the size
			uint32_t sizeValue = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR0Offset + (BarNum * 4));

			// Restore the original BAR value
			write_pci(PDEV->bus, PDEV->slot, PDEV->func, BAR0Offset + (BarNum * 4), originalBarValue);

			// Calculate the size
			if(sizeValue != originalBarValue){
				uint32_t barSize = ~(sizeValue & 0xFFFFFFF0) + 1;
				size[BarNum] = barSize;
			}
			else{
				uint32_t barSize = 0x20000;
				size[BarNum] = barSize;
			}


			LouPrint("Memory Map Is ");
			switch ((Bar[BarNum] >> 1) & 0x03) {
				case 0: { // 32 bit
					LouPrint("32 Bit\n");
					//LouPrint("Bar %d Is:%bi\n",BarNum,Bar[BarNum]);
					
					//size[BarNum] = 32;

					address[BarNum] = (uint8_t*)(uintptr_t)(Bar[BarNum] & 0xFFFFFFF0);
					
					//uint32_t Temp;
					continue;
				}
				case 1: { // 20 bit
					LouPrint("20 Bit\n");

					//size[BarNum] = 20;

					continue;
				}
				case 2: { // 64 bit
					LouPrint("64 Bit\n");
					//size[BarNum] = 64;

					address[BarNum] = (uint8_t*)(uintptr_t)((Bar[BarNum] & 0xFFFFFFF0) |
												((uint64_t)pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR0Offset + (BarNum + 1) * 4) << 32));

					// Skip the next BAR as it is part of this 64-bit address
					BarNum++;
					continue;
				}
				default:
					continue;
			}
		}
		else {
			// Correctly mask out the lower bits to get the base I/O address
			address[BarNum] = (uint8_t*)(uintptr_t)(Bar[BarNum] & 0xFFFFFFFC);
			prefetchable[BarNum] = false;
			MMIO[BarNum] = false;

			LouPrint("IO Map\n");

			// Calculate the size of the I/O region
			uint32_t originalBarValue = Bar[BarNum];
			write_pci(PDEV->bus, PDEV->slot, PDEV->func, BAR0Offset + (BarNum * 4), 0xFFFFFFFF);
			uint32_t sizeValue = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR0Offset + (BarNum * 4));
			write_pci(PDEV->bus, PDEV->slot, PDEV->func, BAR0Offset + (BarNum * 4), originalBarValue);
			
			uint32_t ioSize = ~(sizeValue & 0xFFFFFFFC) + 1; // Correct mask for I/O size calculation
			size[BarNum] = ioSize;
		}

	}

}


BaseAddressRegister::~BaseAddressRegister() {

}
