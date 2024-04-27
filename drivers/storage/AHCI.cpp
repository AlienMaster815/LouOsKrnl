#include <NtAPI.h>
#include "SATA/sata.h"
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

#define GHC_AE_BIT BITMASK(31)
#define GHC_MRSM_BIT BITMASK(2)
#define GHC_IE_BIT BITMASK(1)
#define GHC_HR_BIT BITMASK(0)


//Get ABAR

uint32_t GetAhciHba(P_PCI_DEVICE_OBJECT PDEV, uint8_t BAR = 0x24);
KERNEL_IMPORT LOUSTATUS LouEnablePciDevice(P_PCI_DEVICE_OBJECT PDEV);

void GetAllIoSpaces(P_PCI_DEVICE_OBJECT PDEV);

#include <stdint.h>




uint32_t GetAhciHba(P_PCI_DEVICE_OBJECT PDEV, uint8_t BAR) {
	uint32_t value = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR);
	// Mask out non-AHCI bits (assuming 64-bit addressing, and assuming ABAR is 32 bits)
	value &= 0xFFFFFFF0; // Assuming the AHCI ABAR is aligned to 16 bytes

	return value;
}

#define ICH_MAP 0x90
#define ENODEV 19

P_FIS_PACKET GetFisPacketBase(uint8_t PortNum, P_HBA_PORTx HbaPort,BOOLEAN S64A) {
	if(!S64A){
		 return (P_FIS_PACKET)(uintptr_t)(HbaPort[PortNum].PxFB.FB);
	}
	else {
		 return (P_FIS_PACKET)(uintptr_t)(HbaPort[PortNum].PxFB.FB + HbaPort[PortNum].PxFBU.FBU);
	}
}

void InitializeOnePort(uint8_t PortNum, P_HBA_PORTx HbaPort,BOOLEAN S64A) {
	LouPrint("Initializing Port:%d\n",PortNum);
	
	UNUSED P_FIS_PACKET PF = GetFisPacketBase(PortNum, HbaPort, S64A);

	LouPrint("Port:%d Initialized\n",PortNum);
}

void InitializePorts(P_HBA_DEVICE HBA,P_HBA_PORTx HbaPort) {//32 Port Array

	if (HBA->PI.Port0 )InitializeOnePort(0,  HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port1 )InitializeOnePort(1,  HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port2 )InitializeOnePort(2,  HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port3 )InitializeOnePort(3,  HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port4 )InitializeOnePort(4,  HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port5 )InitializeOnePort(5,  HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port6 )InitializeOnePort(6,  HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port7 )InitializeOnePort(7,  HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port8 )InitializeOnePort(8,  HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port9 )InitializeOnePort(9,  HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port10)InitializeOnePort(10, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port11)InitializeOnePort(11, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port12)InitializeOnePort(12, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port13)InitializeOnePort(13, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port14)InitializeOnePort(14, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port15)InitializeOnePort(15, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port16)InitializeOnePort(16, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port17)InitializeOnePort(17, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port18)InitializeOnePort(18, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port19)InitializeOnePort(19, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port20)InitializeOnePort(20, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port21)InitializeOnePort(21, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port22)InitializeOnePort(22, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port23)InitializeOnePort(23, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port24)InitializeOnePort(24, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port25)InitializeOnePort(25, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port26)InitializeOnePort(26, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port27)InitializeOnePort(27, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port28)InitializeOnePort(28, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port29)InitializeOnePort(29, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port30)InitializeOnePort(30, HbaPort, HBA->CAP.S64A);
	if (HBA->PI.Port31)InitializeOnePort(31, HbaPort, HBA->CAP.S64A);
}

//Later we will turn this into a win api driver stle for readability



void GetAhciFeatures(P_HBA_DEVICE HBA) {

	//Print Values Of HBA
	LouPrint("CAP Values Are\n");
	if (BIT_SET == HBA->CAP.S64A)	LouPrint("Device Supports 64 Bit Address\n");
	if (BIT_SET == HBA->CAP.SNCQ)	LouPrint("Device Supports Native Queing\n");
	if (BIT_SET == HBA->CAP.SSNTF)	LouPrint("Device Supports SNotification\n");
	if (BIT_SET == HBA->CAP.SSNTF)	LouPrint("Device Supports SNotification\n");
	if (BIT_SET == HBA->CAP.SMPS)	LouPrint("Device Supports Mechanical Presence Switch\n");
	if (BIT_SET == HBA->CAP.SSS)	LouPrint("Device Supports Staggered Spin Up\n");
	if (BIT_SET == HBA->CAP.SALP)	LouPrint("Device Supports Aggressive Link Power Management\n");
	if (BIT_SET == HBA->CAP.SAL)	LouPrint("Device Supports Activity Light Emitting Diode\n");
	if (BIT_SET == HBA->CAP.SCLO)	LouPrint("Device Supports Command List Overide\n");
	if (1 == HBA->CAP.ISS)			LouPrint("Device Supports 1.5/Gbps Transfer Speed\n");
	if (2 == HBA->CAP.ISS)			LouPrint("Device Supports 3.0/Gbps Transfer Speed\n");
	if (3 == HBA->CAP.ISS)			LouPrint("Device Supports 6.0/Gbps Transfer Speed\n");
	if (BIT_SET == HBA->CAP.SAM)	LouPrint("Device Supports Sata AHCI Only Mode\n");
	if (BIT_SET == HBA->CAP.SPM)	LouPrint("Device Supports Sata Port Multiplyer\n");
	if (BIT_SET == HBA->CAP.FBSS)	LouPrint("Device Supports Fis Based Switching\n");
	if (BIT_SET == HBA->CAP.PMD)	LouPrint("Device Supports PIO Multiple DRQ Block\n");
	if (BIT_SET == HBA->CAP.SSC)	LouPrint("Device Supports Slumber State\n");
	if (BIT_SET == HBA->CAP.PSC)	LouPrint("Device Supports Partial State\n");
	LouPrint("Number Of Command Slots Is:%d\n", HBA->CAP.NCS);
	if (BIT_SET == HBA->CAP.CCCS)	LouPrint("Device Supports Command Completion Coalescing\n");
	if (BIT_SET == HBA->CAP.EMS)	LouPrint("Device Supports Enclosure Management\n");
	if (BIT_SET == HBA->CAP.SXS)	LouPrint("Device Supports External SATA\n");
	LouPrint("Number Of Ports Is:%d\n", HBA->CAP.NP);

	LouPrint("GHC Values Are\n");

	LouPrint("AE Bit Is:");
	if (HBA->GHC.AE)LouPrint("Enabled\n"); else LouPrint("Disabled\n");
	LouPrint("Is MSI Panic:");
	if (HBA->GHC.MSRM)LouPrint("YES\n"); else LouPrint("NO\n");
	LouPrint("Is Interrupts Enabled:");
	if (HBA->GHC.IE)LouPrint("YES\n"); else LouPrint("NO\n");
	LouPrint("Is Controller Hard Reseting:");
	if (HBA->GHC.HR)LouPrint("YES\n"); else LouPrint("NO\n");

	if (HBA->CAP2.DESO)LouPrint("Device Is DevSleep Entrance from Slumber Only\n");
	if (HBA->CAP2.SADM)LouPrint("Device Supports Aggressive Device Sleep Management\n");
	if (HBA->CAP2.SDS)LouPrint("Device Supports Device Sleep\n");
	if (HBA->CAP2.APST)LouPrint("Device Supports Automatic Partial to Slumber Transitions\n");
	if (HBA->CAP2.NVMP)LouPrint("Device Supports Automatic NVMHCI Present\n");
	if (HBA->CAP2.BOH)LouPrint("Device Supports BIOS/OS Handoff\n");
}

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
	P_HBA_PORTx  HbaPorts = 0x00000000;

	HbaPorts = (P_HBA_PORTx)(HBA + 0x100);

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

	GetAhciFeatures(HBA);

	InitializePorts(HBA, HbaPorts);

	return STATUS_SUCCESS;
}
