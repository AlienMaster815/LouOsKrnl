#include <NtAPI.h>
#include "../SATA/sata.h"
#include <LouDDK.h>
#include "ahci.h"

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

KERNEL_IMPORT LOUSTATUS LouEnablePciDevice(P_PCI_DEVICE_OBJECT PDEV);


#include <stdint.h>

#define ICH_MAP 0x90
#define ENODEV 19

LOUDDK_API_ENTRY void AhciInterruptHandler();

#define ABAR 5

static inline void start_cmd(P_HBA_Port Px) {
	// wait untill the command register is ready for a neww command
	while (Px->cmd & HBA_PxCMD_CR) {
		sleep(100);
	}
	//set fre and st
	Px->cmd |= HBA_PxCMD_FRE;
	Px->cmd |= HBA_PxCMD_ST;
}

static inline void stop_cmd(P_HBA_Port Px) {
	//clear ST then fre
	Px->cmd &= ~HBA_PxCMD_ST;
	Px->cmd &= ~HBA_PxCMD_FRE;

	while (1) {
		sleep(100);
		if (Px->cmd & HBA_PxCMD_FR) {
			continue;
		}
		if (Px->cmd & HBA_PxCMD_CR) {
			continue;
		}
		break;
	}
}


LOUSTATUS ResetHba(P_HBA_Memory hba) {

	//Set AHCI Mode If not already
	if (!((hba->ghc >> 31) & 0x01)) { hba->ghc |= (1U << 31); }
	
	//Give HBA Reset Command
	hba->ghc |= 1;

	//check for reset to complete
	while (hba->ghc & 0x01) {
		sleep(100);
	}


	return LOUSTATUS_GOOD;
}

static inline int CheckType(P_HBA_Port Px) {

	uint32_t ssts = Px->ssts;
	uint8_t ipm = (ssts >> 8) & 0x0F;
	uint8_t det = ssts & 0x0F;

	if (det != HBA_PORT_DET_PRESENT) {
		return AHCI_DEV_NULL;
	}
	if (ipm != HBA_PORT_IPM_ACTIVE) {
		return AHCI_DEV_NULL;
	}

	switch (Px->sig) {
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

static inline void port_rebase(P_HBA_Port Px,uint8_t PortNum) {

	stop_cmd(Px);

	Px->clb = AHCI_BASE + (PortNum << 10);
	Px->clbu = 0;
	memset((void*)(uintptr_t)Px->clb, 0, 1024);

	Px->fb = AHCI_BASE + (32 << 10) + (PortNum << 8);
	Px->fbu = 0;
	memset((void*)(uintptr_t)(Px->fb), 0, 256);

	HBA_CMD_HEADER* CmdHeader = (HBA_CMD_HEADER*)(uintptr_t)(Px->clb);

	for (uint8_t i = 0; i < 32; i++) {
		CmdHeader[i].prdtl = 8;
		CmdHeader[i].ctba = AHCI_BASE + (40 << 10) + (PortNum << 13) + (i << 8);
		CmdHeader[i].ctbau = 0;
		memset((void*)(uintptr_t)CmdHeader[i].ctba, 0, 256);
	}
	start_cmd(Px);	// Start command engine

}

void SataRegisterPort(P_HBA_Port Px, uint8_t PortNum, uint8_t DevType);

void InitializePort(P_HBA_Port Px, uint8_t PortNum) {
	port_rebase(Px, PortNum);



}

static inline void ProbePort(P_HBA_Memory hba) {
	uint32_t PortInformation = hba->pi;
	int i = 0;

	while (i < 32) {

		if (PortInformation & 1) {

			int dt = CheckType((P_HBA_Port)((uint64_t)hba + 0x100 + (i * 0x80)));

			if (dt == AHCI_DEV_SATA) {
				LouPrint("Sata SATA Device Found On:%d\n",i);
			}
			else if (dt == AHCI_DEV_SATAPI) {
				LouPrint("Sata SATAPI Device Found:%d\n",i);
				InitializePort((P_HBA_Port)((uint64_t)hba + 0x100 + (i * 0x80)), i);
			}
			else if (dt == AHCI_DEV_SEMB) {
				LouPrint("Sata SEMB Device Found:%d\n",i);
				InitializePort((P_HBA_Port)((uint64_t)hba + 0x100 + (i * 0x80)), i);
			}
			else if (dt == AHCI_DEV_PM) {
				LouPrint("Sata PM Device Found:%d\n",i);
				InitializePort((P_HBA_Port)((uint64_t)hba + 0x100 + (i * 0x80)), i);
			}
			else {
				LouPrint("No Drive Found On Port:%d\n",i);
			}

		}

		PortInformation >>= 1;
		i++;

	}

}

void SataRegisterHBA(uintptr_t Address);

LOUSTATUS LouInitAhciDevice(P_PCI_DEVICE_OBJECT PDEV) {

	UNUSED int32_t n_ports, i, rc;

	//we dont have a defined kit yet as previously stated so well just do things manually
	//uint8_t BAR; //Later we will get other bar types

	LouPrint("Hello Driver World\n");

	///
	/// parse device ids to make sure the system dosen use
	/// alternitive BARS
	/// 
	
	BaseAddressRegister Bars(PDEV);

	LouMapAddress((uint64_t)Bars.address[ABAR], (uint64_t)Bars.address[ABAR], KERNEL_PAGE_WRITE_PRESENT);

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

	LouPrint("Setting up Ahci Device\n");
	RegisterInterruptHandler(AhciInterruptHandler,50);

	//register the interrupt pin for 50
	uint8_t iline = pciConfigReadByte(PDEV->bus, PDEV->slot, PDEV->func, 0x3C);
	LouPrint("Current Interrupt Line Is|%d\n",iline);
	iline = 50;
	pciConfigWriteWord(PDEV->bus, PDEV->slot, PDEV->func, 0x3C, iline);
	while (pciConfigReadByte(PDEV->bus, PDEV->slot, PDEV->func, 0x3C) != iline);
	LouPrint("Interrupt Line Succeffuly Changed\n");


	LouPrint("AHCI Abar Address Is:%h\n", Bars.address[ABAR]);
	
	//uint32_t FOOBAR = *(uint32_t*)(uintptr_t)Bars.address[ABAR];
	
	SataRegisterHBA((uintptr_t)Bars.address[ABAR]);

	P_HBA_Memory hba = (P_HBA_Memory)(uintptr_t)Bars.address[ABAR];

	//Reset System
	ResetHba(hba);

	ProbePort(hba);

	return STATUS_SUCCESS;
}

LOUDDK_API_ENTRY void AhciInterruptHandler() {
	LouPrint("AHCI INTERRUPT\n");
	while (1);
}