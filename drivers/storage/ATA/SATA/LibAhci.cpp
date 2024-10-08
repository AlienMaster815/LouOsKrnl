
#define _KERNEL_MODULE_

#include <LouDDK.h>
#include "Ahci.h"

void AhciSetEmMessage(PAHCI_DRIVER_EXTENDED_OBJECT HostPrivate, PATA_PORT AtaPortInfo) {

}

LOUSTATUS AhciResetEm(PATA_HOST Host) {

	return STATUS_SUCCESS;
}



void AhciRestoreInitialConfig(PATA_HOST Host) {

}

LOUSTATUS ResetAhciController(PATA_HOST Host) {


	return STATUS_SUCCESS;
}

PULONG AhciGetPortBase(
	PAHCI_DRIVER_EXTENDED_OBJECT Ext,
	uint8_t PortNumber
) {
	return (PULONG)(Ext->Host + (0x100 + PortNumber * 0x80));
}

LOUSTATUS AhciStopFisRx(PATA_PORT Ap) {

	return STATUS_SUCCESS;
}

LOUSTATUS AhciDeInitPort(PATA_PORT Ap, string* EMsg) {
	LOUSTATUS Status = STATUS_SUCCESS;

	return Status;
}

void AhciPortClearPendingInterrupt(PATA_PORT Ap) {

}

void AhciPortInit(
	P_PCI_DEVICE_OBJECT PDEV, 
	PATA_PORT Ap, 
	uint32_t PortNumber, 
	PULONG HbaMmio, 
	PULONG PortMmio
){

}

void AhciIntitializeController(PATA_HOST Host) {

}


LOUSTATUS SataPmpQcDeferCmdSwitch(PATA_QUEUED_COMMAND Qc) {

	return STATUS_UNSUCCESSFUL;
}

LOUSTATUS AhciPmpQcDefer(PATA_QUEUED_COMMAND Qc) {

	return STATUS_SUCCESS;
}

void AtaTfToFis(PATA_TASKFILE Tf, int Pmp, int IsCmd, uint8_t* Fis) {

}

unsigned int AhciFillSg(PATA_QUEUED_COMMAND Qc, uint8_t* CmdTable) {
	//we are going to do this later

	return 0;
}

void AhciFillCmdSlot(PAHCI_PORT_PRIVATE pp, uint32_t HwTag, uint32_t Options) {

	
}

// Assuming a maximum of 32 slots, but adjust based on your specific AHCI controller's capabilities
#define AHCI_MAX_SLOTS 32

int FindOpenSlot(PATA_PORT Ap) {

	return 0;
}


AtaCompletionErrors AhciQcPrep(PATA_QUEUED_COMMAND Qc) {

	return AC_ERR_OK;
}

void AhciSwActivity(PATA_LINK Link) {

}

#define PORT_TFD 0x20            // Task File Data Register Offset
#define ERROR_FLAG 0x01          // Error bit in the Task File Data Register

LOUSTATUS AhciQcPollCompletion(PATA_QUEUED_COMMAND Qc) {

	return STATUS_TIMEOUT;
}

LOUSTATUS AhciQcIssue(PATA_QUEUED_COMMAND Qc) {

	return STATUS_SUCCESS;
}

void AhciQcFillRtf(PATA_QUEUED_COMMAND Qc) {

}

void AhciQcNcqFillRtf(PATA_PORT Ap, uint64_t DoneMask) {

}





void AhciFreeze(PATA_PORT Ap) {

}

void AhciThaw(PATA_PORT Ap) {

}
 
LOUSTATUS AhciSoftReset(PATA_LINK Link, unsigned int* Class, unsigned long DeadLine) {

	return STATUS_SUCCESS;
}

LOUSTATUS AhciHardReset(PATA_LINK Link, unsigned int* Class, unsigned long Deadline) {

	return STATUS_SUCCESS;
}

LOUSTATUS AhciPostReset(PATA_LINK Link, unsigned int* Class) {

	return STATUS_SUCCESS;
}

void AhciErrorHandler(PATA_PORT Ap) {

}

void AhciPostInternalCmd(PATA_QUEUED_COMMAND Qc) {

}

void AhciDevConfig(PATA_DEVICE Dev) {

}




LOUSTATUS AhciScrRead(PATA_LINK Link, unsigned int ScReg, uint32_t* Val) {

	return 0;
}

LOUSTATUS AhciScrWrite(PATA_LINK Link, unsigned int ScReg, uint32_t Val) {

	return 0;
}

void AhciPmpAttatch(PATA_PORT Ap) {

}

void AhciPmpDetatch(PATA_PORT Ap) {

}

LOUSTATUS AhciSetLpm(PATA_LINK Link, AtaLpmPolicy Policy, unsigned int Hints) {

	return STATUS_SUCCESS;
}

size_t AhciLedShow(PATA_PORT Ap, string Buffer){

	return 0;
}

size_t AhciLedStore(PATA_PORT Ap, string Buffer, size_t size) {

	return 0;
}

size_t AhciActivityShow(PATA_DEVICE dev, string Buffer){

	return 0;
}

size_t AhciActivityStore(PATA_DEVICE dev, SwAvtivity Val) {

	return 0;
}

size_t AhciTransmitLedMessage(PATA_PORT Ap, uint32_t State, size_t size) {

	return 0;
}

LOUSTATUS AhciPortSuspend(PATA_PORT Ap, PmMessage Mes) {

	return STATUS_SUCCESS;
}

LOUSTATUS AhciPortResume(PATA_PORT Ap) {

	return STATUS_SUCCESS;
}

LOUSTATUS AhciPortStart(PATA_PORT Ap) {

	return STATUS_SUCCESS;
}

void AhciPortStop(PATA_PORT Ap) {

}

void GetGenericAhciOperations(PATA_PORT_OPERATIONS_TABLE Ops) {

	Ops->QcDefer = AhciPmpQcDefer;
	Ops->QcPrep = AhciQcPrep;
	Ops->QcIssue = AhciQcIssue;
	Ops->QcFillRtf = AhciQcFillRtf;
	Ops->QcNcqFillRtf = AhciQcNcqFillRtf;
	
	Ops->Freeze = AhciFreeze;
	Ops->Thaw = AhciThaw;
	Ops->SoftReset = AhciSoftReset;
	Ops->HardRest = AhciHardReset;
	Ops->PostReset = AhciPostReset;
	Ops->PMPSoftReset = AhciSoftReset;
	Ops->ErrorHandler = AhciErrorHandler;
	Ops->PostInternalCommand = AhciPostInternalCmd;
	Ops->DevConfig = AhciDevConfig;

	Ops->ScrRead = AhciScrRead;
	Ops->ScrWrite = AhciScrWrite;
	Ops->PmpAttatch = AhciPmpAttatch;
	Ops->PmpDetatch = AhciPmpDetatch;

	Ops->SetLpm = AhciSetLpm;
	Ops->EmShow = AhciLedShow;
	Ops->EmStore = AhciLedStore;
	Ops->SwActivityShow = AhciActivityShow;
	Ops->SwActivityStore = AhciActivityStore;
	Ops->TransmitLedMessage = AhciTransmitLedMessage;

	Ops->PortSuspend = AhciPortSuspend;
	Ops->PortResume = AhciPortResume;

	Ops->PortStart = AhciPortStart;
	Ops->PortStop = AhciPortStop;
}