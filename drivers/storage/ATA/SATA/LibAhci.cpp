
#define _KERNEL_MODULE_

#include <LouDDK.h>
#include "Ahci.h"

void AhciSetEmMessage(PAHCI_DRIVER_EXTENDED_OBJECT HostPrivate, PATA_PORT AtaPortInfo) {
	uint8_t Messages;
	PULONG Mmio = (PULONG)HostPrivate->Host;
	PAHCI_MEMORY_REGISTERS Host = (PAHCI_MEMORY_REGISTERS)HostPrivate->Host;
	uint32_t EmLoc = READ_REGISTER_ULONG(Mmio + HOST_EM_LOC);
	uint32_t EmCtl = READ_REGISTER_ULONG(Mmio + HOST_EM_CTL);

	if (!(Host->Capabilities & HOST_CAP_EMS)) {
		return;
	}
	Messages = (uint8_t)((EmCtl & EM_CTRL_MSG_TYPE) >> 16);

    if(Messages){
		HostPrivate->StoredEmLoc = ((EmLoc >> 16) * 4);
		HostPrivate->EmLocBufferSize = ((EmLoc & 0xFF) * 4);
		HostPrivate->EmMessageType = Messages;
		AtaPortInfo->Flags |= ATA_FLAG_EM;
		if (!(EmCtl & EM_CTL_ALHD)) {
			AtaPortInfo->Flags |= ATA_FLAG_SW_ACTIVITY;
		}
    }
}

LOUSTATUS AhciResetEm(PATA_HOST Host) {

	PULONG mmio = (PULONG)Host->IoMap;
	ULONG em_ctl;

	em_ctl = READ_REGISTER_ULONG(mmio + HOST_EM_CTL);
	if ((em_ctl & EM_CTL_TM) || (em_ctl & EM_CTL_RST))
		return STATUS_INVALID_PARAMETER;

	WRITE_REGISTER_ULONG(mmio + HOST_EM_CTL,em_ctl | EM_CTL_RST);
	return STATUS_SUCCESS;
}



void AhciRestoreInitialConfig(PATA_HOST Host) {
	//PAHCI_DRIVER_EXTENDED_OBJECT ExtendedObject = (PAHCI_DRIVER_EXTENDED_OBJECT)Host->PrivateData;
	//TODO: Re Write the Changed Data Back To the Original  

}

LOUSTATUS ResetAhciController(PATA_HOST Host) {
	PAHCI_DRIVER_EXTENDED_OBJECT ExtendedObject = (PAHCI_DRIVER_EXTENDED_OBJECT)Host->PrivateData;
	PULONG Mmio = (PULONG)ExtendedObject->Host;
	ULONG Tmp = 0;
	uint8_t Counter = 0;

	uint32_t Ghc = ExtendedObject->Host->GlobalHost;

	if (!(Ghc & HOST_AHCI_ENABLE)) {
		Ghc |= HOST_AHCI_ENABLE;
		ExtendedObject->Host->GlobalHost = Ghc;
		for (Counter = 0; Counter < 5; Counter++) {
			if (Ghc == ExtendedObject->Host->GlobalHost)break;
			sleep(1000);
		}
	}

	if (Counter == 4) {
		LouPrint("Warning GHC Did Not Reset\n");
	}

	Tmp = READ_REGISTER_ULONG(Mmio + HOST_CTL);
	if (!(Tmp & HOST_REST)) {
		WRITE_REGISTER_ULONG(Mmio + HOST_CTL, Tmp | HOST_REST);
		READ_REGISTER_ULONG(Mmio + HOST_CTL); //flush
	}

	while (Tmp & HOST_REST) {
		Tmp = READ_REGISTER_ULONG(Mmio + HOST_CTL);
		sleep(100);
		Counter++;
		if (Counter == 10) {
			return STATUS_DEVICE_HARDWARE_ERROR; //after 1 second the system is assumed fried
		}
	}

	if (!(Ghc & HOST_AHCI_ENABLE)) {
		Ghc |= HOST_AHCI_ENABLE;
		ExtendedObject->Host->GlobalHost = Ghc;
		for (Counter = 0; Counter < 5; Counter++) {
			if (Ghc == ExtendedObject->Host->GlobalHost)break;
			sleep(1000);
		}
	}
	if (Counter == 4) {
		LouPrint("Warning GHC Did Not Reset\n");
	}
	else {
		LouPrint("Ghc Successfully Reset\n");
	}

	return STATUS_SUCCESS;
}

PULONG AhciGetPortBase(
	PAHCI_DRIVER_EXTENDED_OBJECT Ext,
	uint8_t PortNumber
) {
	return (PULONG)(Ext->Host + (0x100 + PortNumber * 0x80));
}

LOUSTATUS AhciStopFisRx(PATA_PORT Ap) {
	PULONG PortMmio = (PULONG)Ap->PortMmio;
	ULONG Tmp;

	Tmp = READ_REGISTER_ULONG(PortMmio + PORT_CMD);
	Tmp &= ~(PORT_CMD_FIS_RX);
	WRITE_REGISTER_ULONG(PortMmio + PORT_CMD ,Tmp);

	sleep(1000);

	Tmp = READ_REGISTER_ULONG(PortMmio + PORT_CMD);
	if (Tmp & PORT_CMD_FIS_ON) {
		return STATUS_JOB_NOT_EMPTY;
	}
	
	return STATUS_SUCCESS;

}

LOUSTATUS AhciDeInitPort(PATA_PORT Ap, string* EMsg) {
	LOUSTATUS Status = STATUS_SUCCESS;
	PAHCI_DRIVER_EXTENDED_OBJECT Ext = (PAHCI_DRIVER_EXTENDED_OBJECT)Ap->PrivateData;

	Status = Ext->StopEngine(Ap);

	if (Status != STATUS_SUCCESS) {
		*EMsg = "Failed To Stop Engine";
	}

	Status = AhciStopFisRx(Ap);
	if (Status != STATUS_SUCCESS) {
		*EMsg = "Failed To Stop FIS RX";
		return Status;
	}

	return Status;
}

void AhciPortClearPendingInterrupt(PATA_PORT Ap) {
	PAHCI_DRIVER_EXTENDED_OBJECT Ext = (PAHCI_DRIVER_EXTENDED_OBJECT)Ap->PrivateData;
	PULONG PortMmio = (PULONG)Ap->PortMmio;
	ULONG Tmp = 0x00; 

	Tmp = READ_REGISTER_ULONG(PortMmio + PORT_SCR_ERROR);
	WRITE_REGISTER_ULONG(PortMmio + PORT_SCR_ERROR, Tmp);
	Tmp = READ_REGISTER_ULONG(PortMmio + PORT_IRQ_STATUS);
	if (Tmp) {
		WRITE_REGISTER_ULONG(PortMmio + PORT_IRQ_STATUS,Tmp);
	}

	WRITE_REGISTER_ULONG((PULONG)Ext->Host + HOST_IRQ_STATUS, 1 << Ap->PortNumber);

}

void AhciPortInit(
	P_PCI_DEVICE_OBJECT PDEV, 
	PATA_PORT Ap, 
	uint32_t PortNumber, 
	PULONG HbaMmio, 
	PULONG PortMmio
){

	string Emsg = 0x00;
	LOUSTATUS Status;



	Status = AhciDeInitPort(Ap, &Emsg);
	if (Status != STATUS_SUCCESS) {
		LouPrint("AHCI WARNING:%s\n", Emsg);
	}
	AhciPortClearPendingInterrupt(Ap);
}

void AhciIntitializeController(PATA_HOST Host) {

	PAHCI_DRIVER_EXTENDED_OBJECT Ext = (PAHCI_DRIVER_EXTENDED_OBJECT)Host->PrivateData;
	PULONG Mmio = (PULONG)Ext->Host;
	uint8_t i;

	for (i = 0; i < Host->NumPorts; i++) {
		if (!(Ext->Host->PortImplementation & (1 << i))) {
			continue; //skip dumby ports
		}
		PULONG PortMmio = AhciGetPortBase(Ext, i);
		PATA_PORT Ap = &Host->Ports[i];

		AhciPortInit(
			(P_PCI_DEVICE_OBJECT)Host->PDev, 
			Ap, 
			i, 
			Mmio, 
			PortMmio
		);

	}

}


LOUSTATUS SataPmpQcDeferCmdSwitch(PATA_QUEUED_COMMAND Qc) {
	PATA_LINK Link = Qc->Dev->Link;
	PATA_PORT Port = Qc->Port;

	if ((Port->ExeclLink == 0x00) || (Port->ExeclLink == Link)) {
		if ((Port->NrActiveLinks == 0) || (AtaLinkActive(Link))) {
			Qc->Flags |= ATA_QCFLAG_CLEAR_EXCL;
			return AtaStdQcDefer(Qc);
		}
	}

	return STATUS_UNSUCCESSFUL;
}

LOUSTATUS AhciPmpQcDefer(PATA_QUEUED_COMMAND Qc) {

	PATA_PORT Port = Qc->Port;
	PAHCI_PORT_PRIVATE pp = (PAHCI_PORT_PRIVATE)Port->PrivateData;

	if (pp->FbsEnabled) {
		return AtaStdQcDefer(Qc);
	}
	else {
		return SataPmpQcDeferCmdSwitch(Qc);
	}
}

AtaCompletionErrors AhciQcPrep(PATA_QUEUED_COMMAND Qc) {

	while (1);
	return 0;
}

LOUSTATUS AhciQcIssue(PATA_QUEUED_COMMAND Qc) {

	while (1);
	return STATUS_SUCCESS;
}

void AhciQcFillRtf(PATA_QUEUED_COMMAND Qc) {
	while (1);

}

void AhciQcNcqFillRtf(PATA_PORT Ap, uint64_t DoneMask) {

	while (1);


}





void AhciFreeze(PATA_PORT Ap) {
	while (1);

}

void AhciThaw(PATA_PORT Ap) {
	while (1);

}
 
LOUSTATUS AhciSoftReset(PATA_LINK Link, unsigned int* Class, unsigned long DeadLine) {
	while (1);

	return STATUS_SUCCESS;
}

LOUSTATUS AhciHardReset(PATA_LINK Link, unsigned int* Class, unsigned long Deadline) {
	while (1);


	return STATUS_SUCCESS;
}

LOUSTATUS AhciPostReset(PATA_LINK Link, unsigned int* Class) {
	while (1);

	return STATUS_SUCCESS;
}

void AhciErrorHandler(PATA_PORT Ap) {
	while (1);

}

void AhciPostInternalCmd(PATA_QUEUED_COMMAND Qc) {
	while (1);

}

void AhciDevConfig(PATA_DEVICE Dev) {
	while (1);

}




LOUSTATUS AhciScrRead(PATA_LINK Link, unsigned int ScReg, uint32_t* Val) {
	while (1);

	return 0;
}

LOUSTATUS AhciScrWrite(PATA_LINK Link, unsigned int ScReg, uint32_t Val) {
	while (1);

	return 0;
}

void AhciPmpAttatch(PATA_PORT Ap) {
	while (1);

}

void AhciPmpDetatch(PATA_PORT Ap) {
	while (1);

}

LOUSTATUS AhciSetLpm(PATA_LINK Link, AtaLpmPolicy Policy, unsigned int Hints) {
		
	while (1);


	return STATUS_SUCCESS;
}

size_t AhciLedShow(PATA_PORT Ap, string Buffer){
	while (1);

	return 0;
}

size_t AhciLedStore(PATA_PORT Ap, string Buffer, size_t size) {
	while (1);

	return 0;
}

size_t AhciActivityShow(PATA_DEVICE dev, string Buffer){
	while (1);

	return 0;
}

size_t AhciActivityStore(PATA_DEVICE dev, SwAvtivity Val) {

	while (1);


	return 0;
}

size_t AhciTransmitLedMessage(PATA_PORT Ap, uint32_t State, size_t size) {
	while (1);



	return 0;
}

LOUSTATUS AhciPortSuspend(PATA_PORT Ap, PmMessage Mes) {
	while (1);

	return STATUS_SUCCESS;
}

LOUSTATUS AhciPortResume(PATA_PORT Ap) {

	while (1);


	return STATUS_SUCCESS;
}

LOUSTATUS AhciPortStart(PATA_PORT Ap) {
	while (1);

	return STATUS_SUCCESS;
}

void AhciPortStop(PATA_PORT Ap) {
	while (1);

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