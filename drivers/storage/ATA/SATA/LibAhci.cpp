
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

int AhciPmpQcDefer(PATA_QUEUED_COMMAND Qc) {


	return 0;
}

AtaCompletionErrors AhciQcPrep(PATA_QUEUED_COMMAND Qc) {


	return 0;
}

unsigned int AhciQcIssue(PATA_QUEUED_COMMAND Qc) {


	return 0;
}

void AhciQcFillRtf(PATA_QUEUED_COMMAND Qc) {

}

void AhciQcNcqFillRtf(PATA_PORT Ap, uint64_t DoneMask) {



}





void AhciFreeze(PATA_PORT Ap) {

}

void AhciThaw(PATA_PORT Ap) {

}
 
void AhciSoftReset(PATA_LINK Link, unsigned int* Class, unsigned long DeadLine) {

}

int AhciHardReset(PATA_LINK Link, unsigned int* Class, unsigned long Deadline) {


	return 0;
}

void AhciPostReset(PATA_LINK Link, unsigned int* Class) {

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