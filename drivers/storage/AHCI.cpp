#include <NtAPI.h>

#include <LouDDK.h>

/// Tyler Grenier 4/11/24 9:55 PM
/// Im back fuckers and its good to be back
/// first up on the agenda lets start programming
/// some basic drivers to get us throught the day
/// while we finish the wdk kit for our readability/
/// portabilility now first up we have ahci...
/// and our progress on the wdk is half way...


#define CAP_S64A_MASK BITMASK(31)
#define CAP_SNCQ_MASK BITMASK(30)
#define CAP_SSNTF_MASK BITMASK(29)
#define CAP_SMPS_MASK BITMASK(28)
#define CAP_SSS_MASK BITMASK(27)
#define CAP_SALP_MASK BITMASK(26)
#define CAP_SAL_MASK BITMASK(25)
#define CAP_SCLO_MASK BITMASK(24)
#define CAP_ISS_MASK (0x0F << 20)
#define CAP_RESERVED_MASK BITMASK(19)
#define CAP_SAM_MASK BITMASK(18)
#define CAP_SPM_MASK BITMASK(17)
#define CAP_FBSS_MASK BITMASK(16)
#define CAP_PMD_MASK BITMASK(15)
#define CAP_SSC_MASK BITMASK(14)
#define CAP_PSC_MASK BITMASK(13)
#define CAP_NCS_MASK (0x1F << 8)
#define CAP_CCCS_MASK BITMASK(7)
#define CAP_EMS_MASK BITMASK(6)
#define CAP_SXS_MASK BITMASK(5)
#define CAP_NP_MASK (0x1F)


//Get ABAR

uint32_t GetAhciHba(P_PCI_DEVICE_OBJECT PDEV, uint8_t BAR = 0x24);
KERNEL_IMPORT LOUSTATUS LouEnablePciDevice(P_PCI_DEVICE_OBJECT PDEV);

void GetAllIoSpaces(P_PCI_DEVICE_OBJECT PDEV);

#include <stdint.h>

//well come back to this
BOOLEAN IsMcp89Apple()
{

	return true;
}


uint32_t GetAhciHba(P_PCI_DEVICE_OBJECT PDEV, uint8_t BAR) {
	uint32_t value = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR);
	// Mask out non-AHCI bits (assuming 64-bit addressing, and assuming ABAR is 32 bits)
	value &= 0xFFFFFFF0; // Assuming the AHCI ABAR is aligned to 16 bytes

	return value;
}

#define ICH_MAP 0x90
#define ENODEV 19



void GetHbaCapabilities(P_HBA_DEVICE HBA, P_HBA_INFORMATION_PACKET HBA_PACKET) {

	uint32_t CAP = HBA->CAP;

	HBA_PACKET->CAP.S64A = (CAP & CAP_S64A_MASK) ? 1 : 0;
	HBA_PACKET->CAP.SNCQ = (CAP & CAP_SNCQ_MASK) ? 1 : 0;
	HBA_PACKET->CAP.SSNTF = (CAP & CAP_SSNTF_MASK) ? 1 : 0;
	HBA_PACKET->CAP.SMPS = (CAP & CAP_SMPS_MASK) ? 1 : 0;
	HBA_PACKET->CAP.SSS = (CAP & CAP_SSS_MASK) ? 1 : 0;
	HBA_PACKET->CAP.SALP = (CAP & CAP_SALP_MASK) ? 1 : 0;
	HBA_PACKET->CAP.SAL = (CAP & CAP_SAL_MASK) ? 1 : 0;
	HBA_PACKET->CAP.SCLO = (CAP & CAP_SCLO_MASK) ? 1 : 0;
	HBA_PACKET->CAP.ISS = (CAP & CAP_ISS_MASK) >> 20;
	HBA_PACKET->CAP.RESERVED = (CAP & CAP_RESERVED_MASK) ? 1 : 0;
	HBA_PACKET->CAP.SAM = CAP & (CAP_SAM_MASK) ? 1 : 0;
	HBA_PACKET->CAP.SPM = CAP & (CAP_SPM_MASK) ? 1 : 0;
	HBA_PACKET->CAP.FBSS = CAP & (CAP_FBSS_MASK) ? 1 : 0;
	HBA_PACKET->CAP.PMD = CAP & (CAP_PMD_MASK) ? 1 : 0;
	HBA_PACKET->CAP.SSC = CAP & (CAP_SSC_MASK) ? 1 : 0;
	HBA_PACKET->CAP.PSC = CAP & (CAP_PSC_MASK) ? 1 : 0;
	HBA_PACKET->CAP.NCS = CAP & (CAP_NCS_MASK) >> 8;
	HBA_PACKET->CAP.CCCS = CAP & (CAP_CCCS_MASK) ? 1 : 0;
	HBA_PACKET->CAP.EMS = CAP & (CAP_EMS_MASK) ? 1 : 0;
	HBA_PACKET->CAP.SXS = CAP & (CAP_SXS_MASK) ? 1 : 0;
	HBA_PACKET->CAP.NP = CAP & (CAP_NP_MASK);

}

void GetHbaDeviceInfo(P_HBA_DEVICE HBA,P_HBA_INFORMATION_PACKET HBA_PACKET) {

	GetHbaCapabilities(HBA, HBA_PACKET);

}


//Later we will turn this into a win api driver stle for readability

LOUSTATUS LouInitAhciDevice(P_PCI_DEVICE_OBJECT PDEV) {

	UNUSED int32_t n_ports, i, rc;

	//we dont have a defined kit yet as previously stated so well just do things manually
	//uint8_t BAR; //Later we will get other bar types

	LouPrint("Hello Driver World\n");

	///
	/// parse device ids to make sure the system dosen use
	/// alternitive BARS
	/// 

	uint32_t HbaAddress = GetAhciHba(PDEV);

	if (HbaAddress != 0x00000000)
		LouMapAddress(HbaAddress, HbaAddress, KERNEL_PAGE_WRITE_PRESENT);

	P_HBA_DEVICE HBA = (P_HBA_DEVICE)(uintptr_t)HbaAddress;
	HBA_INFORMATION_PACKET HBA_PACKET;

	GetHbaDeviceInfo(HBA, &HBA_PACKET);


	if (HBA_PACKET.CAP.S64A == 1)LouPrint("Device Supports 64 Bit Addressing\n");
	if (HBA_PACKET.CAP.SNCQ == 1)LouPrint("Device Supports Native Command Queing\n");
	if (HBA_PACKET.CAP.SSNTF == 1)LouPrint("Device Supports SNotification Registers\n");
	if (HBA_PACKET.CAP.SMPS == 1)LouPrint("Device Supports Mechanical Presence Switch\n");
	if (HBA_PACKET.CAP.SSS == 1)LouPrint("Device Supports Stagered Spinup\n");
	if (HBA_PACKET.CAP.SALP == 1)LouPrint("Device Supports Aggressive Link Power Management\n");
	if (HBA_PACKET.CAP.SAL == 1)LouPrint("Device Supports Activity Light Emitting Diode\n");
	if (HBA_PACKET.CAP.SCLO == 1)LouPrint("Device Supports Command List Overide\n");
	if (HBA_PACKET.CAP.ISS == 1)LouPrint("Device Supports Speed 1.5/gbs\n");
	else if (HBA_PACKET.CAP.ISS == 2)LouPrint("Device Supports Speed 3/gbs\n");
	else if (HBA_PACKET.CAP.ISS == 3)LouPrint("Device Supports Speed 6/gbs\n");
	if (HBA_PACKET.CAP.SAM == 1)LouPrint("Device Supports AHCI Mode Only\n");
	if (HBA_PACKET.CAP.SPM == 1)LouPrint("Device Supports Port Multiplyer\n");
	if (HBA_PACKET.CAP.FBSS == 1)LouPrint("Device Supports FIS-BASED Switching\n");
	if (HBA_PACKET.CAP.PMD == 1)LouPrint("Device Supports PIO Multiple DRQ Block\n");
	if (HBA_PACKET.CAP.SSC == 1)LouPrint("Device Supports Slumber State\n");
	if (HBA_PACKET.CAP.PSC == 1)LouPrint("Device Supports Partial State\n");
	LouPrint("Number Of Command Slots Is:%d\n",HBA_PACKET.CAP.NCS);
	if (HBA_PACKET.CAP.CCCS == 1)LouPrint("Device Supports Command Completion Coalescing\n");
	if (HBA_PACKET.CAP.EMS == 1)LouPrint("Device Supports Enclosure Management\n");
	if (HBA_PACKET.CAP.SXS == 1)LouPrint("Device Supports External SATA\n");
	LouPrint("Number Of Ports:%d\n");


	//LouPrint("Address is:%h\n", HbaAddress);
	//Enable PCI Device
	rc = LouEnablePciDevice(PDEV);
	if (rc)
		return rc;

	if  (PDEV->VendorID == INTEL_PCI &&
		(PDEV->DeviceID == INTEL_DEVICE_8086_82801FR_FRW_ICH6R_ICH6RW_SATA_CONTROLLER ||
		PDEV->DeviceID == INTEL_DEVICE_8086_82801FBM_ICH6M_SATA_CONTROLLER)) {
		//This One spechial 
		LouPrint("Dis One Speshal\n");
		uint8_t MAP = pciConfigReadByte(PDEV->bus,PDEV->slot,PDEV->func,ICH_MAP);

		if (MAP & 0x3) {
			LouPrint("Device Cannot Enable AHCI Mode\n");
			return -ENODEV;
		}

	}

	GetAllIoSpaces(PDEV);



	return STATUS_SUCCESS;
}
