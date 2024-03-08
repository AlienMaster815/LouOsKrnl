#include <LouDDK.h>
#include "sata.h"




LOUDDK_API_ENTRY void IsSataCheck(uint8_t bus, uint8_t slot, uint8_t func) {
	LouPrint("Checking PCI For Sata Controller\n");

	uint16_t vendorID = PciGetVendorID(bus, slot);
	uint16_t deviceID = PciGetDeviceID(bus, slot, func);

	switch (vendorID) {
	case 0x8086:
		switch (deviceID) {
		case INTEL_DEVICE_8086_82801HM_HEM_ICH8M_ICH8M_E_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_COMET_LAKE_SATA_AHCI_CONTROLLER:
		case INTEL_COMET_LAKE_SATA_AHCI_CONTROLLER_2:
		case INTEL_ATOM_PROCESSOR_E3800_SERIES_SATA_AHCI_CONTROLLER_0f22:
		case INTEL_ATOM_PROCESSOR_E3800_SERIES_SATA_AHCI_CONTROLLER_0f23:
		case INTEL_CORP_8086_SAPPHIRE_RAPIDS_SATA_AHCI_CONTROLLER:
		case INTEL_CORP_8086_SAPPHIRE_RAPIDS_SATA_AHCI_CONTROLLER_1:
		case INTEL_CORP_8086_6_SERIES_C200_SERIES_CHIPSET_FAMILY_6_PORT_DESKTOP_SATA_AHCI_CONTROLLER:
		case INTEL_CORP_8086_6_SERIES_C200_SERIES_CHIPSET_FAMILY_6_PORT_MOBILE_SATA_AHCI_CONTROLLER:
		case INTEL_CORP_8086_C600_X79_SERIES_CHIPSET_6_PORT_SATA_AHCI_CONTROLLER:
		case INTEL_CORP_8086_7_SERIES_C210_SERIES_CHIPSET_FAMILY_6_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_CORP_8086_7_SERIES_CHIPSET_FAMILY_6_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_631XESB_632XESB_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_NM10_ICH7_FAMILY_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_82801GBM_GHM_ICH7_M_FAMILY_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_82801HR_HO_HH_ICH8R_DO_DH_6_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_82801HB_ICH8_4_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_82801IR_IO_IH_ICH9R_DO_DH_6_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_82801IB_ICH9_4_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_82801IBM_IEM_ICH9M_ICH9M_E_4_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_ICE_LAKE_LP_SATA_CONTROLLER_AHCI_MODE_34d3:
		case INTEL_DEVICE_8086_82801JD_DO_ICH10_FAMILY_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_82801JI_ICH10_FAMILY_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_6_PORT_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_4_PORT_SATA_AHCI_CONTROLLER_2:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_4_PORT_SATA_AHCI_CONTROLLER_3:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_6_PORT_SATA_AHCI_CONTROLLER_2:
		case INTEL_DEVICE_8086_TIGER_LAKE_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_ELKHART_LAKE_SATA_AHCI:
		case INTEL_DEVICE_8086_JASPER_LAKE_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_EP80579_S_ATA_AHCI:
		case INTEL_DEVICE_8086_ALDER_LAKE_PCH_P_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_CELERON_N3350_PENTIUM_N4200_ATOM_E3900_SERIES_SATA_AHCI_CONTROLLER:
		case INTEL_RAPTOR_LAKE_SATA_AHCI_CONTROLLER:
		case INTEL_ALDER_LAKE_S_PCH_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_PLATFORM_CONTROLLER_HUB_EG20T_SATA_AHCI_CONTROLLER:
		case INTEL_8_SERIES_C220_SERIES_6_PORT_SATA_CONTROLLER_1_AHCI_MODE:
		case INTEL_8_SERIES_C220_SERIES_6_PORT_SATA_CONTROLLER_1_AHCI_MODE_2:
		case INTEL_9_SERIES_CHIPSET_FAMILY_SATA_CONTROLLER_AHCI_MODE_1:
		case INTEL_9_SERIES_CHIPSET_FAMILY_SATA_CONTROLLER_AHCI_MODE_2:
		case INTEL_C610_X99_SERIES_CHIPSET_FAMILY_6_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_C610_X99_SERIES_CHIPSET_FAMILY_SSATA_CONTROLLER_AHCI_MODE_1:
		case INTEL_8_SERIES_SATA_CONTROLLER_1_AHCI_MODE_1:
		case INTEL_8_SERIES_SATA_CONTROLLER_1_AHCI_MODE_2:
		case INTEL_WILDCAT_POINT_LP_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_SUNRISE_POINT_LP_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_CANNON_POINT_LP_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_Q170_Q150_B150_H170_H110_Z170_CM236_CHIPSET_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_HM170_QM170_CHIPSET_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_C620_SERIES_CHIPSET_FAMILY_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_C620_SERIES_CHIPSET_FAMILY_SSATA_CONTROLLER_AHCI_MODE:
		case INTEL_LEWISBURG_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_200_SERIES_PCH_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_CANNON_LAKE_PCH_SATA_AHCI_CONTROLLER:
		case INTEL_CANNON_LAKE_MOBILE_PCH_SATA_AHCI_CONTROLLER:
		case INTEL_400_SERIES_CHIPSET_FAMILY_SATA_AHCI_CONTROLLER:
			LouPrint("Found An Intel Sata Controller\n");
			Sata_init(bus, slot, func);
			break;

		default:
			LouPrint("Non Sata Intel Device\n");
			break;
		}
		break;
	default:
		LouPrint("Not A Sata Device\n");
		break;
	}
}

uint32_t FindAhciAddress(uint8_t bus,uint8_t slot,uint8_t function) {
	// Read the BAR5 register (assuming it contains the MMIO base address)
	uint32_t bar5 = pci_read(bus, slot, function, AHCI_BAR_OFFSET); // Offset for BAR5 register

	// Extract the MMIO base address from BAR5 (bits 31:4)
	uint32_t mmio_base = bar5 & ~0xF;

	return mmio_base;
}

void probe_port(HBA_MEM* abar);

LOUDDK_API_ENTRY void Sata_init(uint8_t bus, uint8_t slot, uint8_t func) {


	// Read the current value of the PCI command register
	uint16_t command_register = pciConfigReadWord(bus, slot, func, 0x04);

	// Enable interrupts, DMA, and memory space access by setting the appropriate bits
	command_register |= (1 << 0); // Enable Memory Space Access (bit 0)
	command_register |= (1 << 2); // Enable Bus Master (DMA) (bit 2)
	command_register |= (1 << 10); // Enable Interrupts (bit 10)

	// Write the updated value back to the PCI command register
	pciConfigWriteWord(bus, slot, func, 0x04, command_register);

	uint32_t bar5_register = pci_read(bus, slot, func, 0x24);

	// Set the uncacheable bit
	bar5_register |= (1 << 3); // Assuming bit 3 indicates uncacheable

	// Write the updated value back to the BAR 5 register
	write_pci(bus, slot, func, 0x24, bar5_register);

	UNUSED HBA_MEM* HBA = (HBA_MEM*)(uintptr_t)FindAhciAddress(bus, slot, func);


}

LOUDDK_API_ENTRY void UnmountSataDevice(uint8_t Device) {


}

#define	SATA_SIG_ATA	0x00000101	// SATA drive
#define	SATA_SIG_ATAPI	0xEB140101	// SATAPI drive
#define	SATA_SIG_SEMB	0xC33C0101	// Enclosure management bridge
#define	SATA_SIG_PM	0x96690101	// Port multiplier

#define AHCI_DEV_NULL 0
#define AHCI_DEV_SATA 1
#define AHCI_DEV_SEMB 2
#define AHCI_DEV_PM 3
#define AHCI_DEV_SATAPI 4

#define HBA_PORT_IPM_ACTIVE 1
#define HBA_PORT_DET_PRESENT 3

static int check_type(HBA_PORT* port);



void probe_port(HBA_MEM* abar)
{
	// Search disk in implemented ports
	uint32_t pi = abar->pi;
	int i = 0;
	while (i < 32)
	{
		if (pi & 1)
		{
			int dt = check_type(&abar->ports[i]);
			if (dt == AHCI_DEV_SATA)
			{
				LouPrint("SATA drive found at port %d\n", i);
			}
			else if (dt == AHCI_DEV_SATAPI)
			{
				LouPrint("SATAPI drive found at port %d\n", i);
			}
			else if (dt == AHCI_DEV_SEMB)
			{
				LouPrint("SEMB drive found at port %d\n", i);
			}
			else if (dt == AHCI_DEV_PM)
			{
				LouPrint("PM drive found at port %d\n", i);
			}
			else
			{
				LouPrint("No drive found at port %d\n", i);
			}
		}

		pi >>= 1;
		i++;
	}
}

// Check device type
static int check_type(HBA_PORT* port)
{
	uint32_t ssts = port->ssts;

	uint8_t ipm = (ssts >> 8) & 0x0F;
	uint8_t det = ssts & 0x0F;

	if (det != HBA_PORT_DET_PRESENT)	// Check drive status
		return AHCI_DEV_NULL;
	if (ipm != HBA_PORT_IPM_ACTIVE)
		return AHCI_DEV_NULL;

	switch (port->sig)
	{
	case SATA_SIG_ATAPI:
		return AHCI_DEV_SATAPI;
	case SATA_SIG_SEMB:
		return AHCI_DEV_SEMB;
	case SATA_SIG_PM:
		return AHCI_DEV_PM;
	default:
		return AHCI_DEV_SATA;
	}
}