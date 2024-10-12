#define _KERNEL_MODULE_
#include <LouDDK.h>
#include "ahci.h"


bool AtaIsAtapi(uint32_t Protocol) {
	return Protocol & ATA_PROT_FLAG_ATAPI;
}

int AhciFindFreeSlot(PATA_PORT Ap){
	PAHCI_PORT Port = (PAHCI_PORT)Ap->PortMmio;
	uint32_t CommandIssue = Port->CoomandIssue;
	uint32_t Active = Port->SataActive;
	uint32_t Mask;
	for (uint8_t slot = 0; slot < 32; slot++) {
		Mask = (1 << slot);
		if ((!(CommandIssue & Mask)) && (!(Active & Mask))) {
			return slot;
		}
	}
	return -1;
}

void AtaTfToFis(PATA_TASKFILE tf, int pmp, bool IsCommand, void* FisPointer) {
	uint8_t* fis = (uint8_t*)FisPointer;

	fis[0] = 0x27;			/* Register - Host to Device FIS */
	fis[1] = pmp & 0xf;		/* Port multiplier number*/
	if (IsCommand)
		fis[1] |= (1 << 7);	/* bit 7 indicates Command FIS */

	fis[2] = tf->Command;
	fis[3] = tf->Feature;

	fis[4] = tf->Lbal;
	fis[5] = tf->Lbam;
	fis[6] = tf->Lbah;
	fis[7] = tf->Device;

	fis[8] = tf->HobLbal;
	fis[9] = tf->HobLbam;
	fis[10] = tf->HobLbah;
	fis[11] = tf->HobFeature;

	fis[12] = tf->NSect;
	fis[13] = tf->HobNSect;
	fis[14] = 0;
	fis[15] = tf->Ctl;

	fis[16] = tf->Auxillery & 0xff;
	fis[17] = (tf->Auxillery >> 8) & 0xff;
	fis[18] = (tf->Auxillery >> 16) & 0xff;
	fis[19] = (tf->Auxillery >> 24) & 0xff;

}

void AhciFillCmdSlot(PATA_PORT Ap, int Slot, uint32_t Opts) {
	
	uint32_t cmd_tbl_dma;
	PAHCI_PORT_PRIVATE pp = (PAHCI_PORT_PRIVATE)Ap->PrivateData;
	cmd_tbl_dma = (uint32_t)pp->CommandTableDma + Slot * 32;

	pp->CmdSlots[Slot].Options = CPU_TO_LE32(Opts);
	pp->CmdSlots[Slot].Status = 0;
	pp->CmdSlots[Slot].TableAddress = CPU_TO_LE32(cmd_tbl_dma & 0xffffffff);
	pp->CmdSlots[Slot].TableAddressHi = CPU_TO_LE32((cmd_tbl_dma >> 16) >> 16);
}

AtaCompletionErrors AhciQcPrep(PATA_QUEUED_COMMAND Qc) {
	LouPrint("Preping Qc\n");
	PATA_PORT Ap = (PATA_PORT)Qc->Port;
	PAHCI_PORT_PRIVATE pp = (PAHCI_PORT_PRIVATE)Ap->PrivateData;
	bool IsAtapi = AtaIsAtapi(Qc->TaskFile.Protocol);
	void* CmdTable;
	uint32_t Opts;
	const uint32_t CmdFisLength = 5;
	unsigned int NumElements;

	Qc->HwTag = AhciFindFreeSlot(Ap);
	
	LouPrint("Using Slot:%d\n", Qc->HwTag);

	if (Qc->HwTag == -1) {
		LouPrint("Ahci:No Free Command Slot\n");
		return AC_ERR_ATA_BUS;
	}

	CmdTable = (void*)(pp->CommandTable + (Qc->HwTag * 32));

	AtaTfToFis(&Qc->TaskFile,Qc->Link.PMP, true, CmdTable);
	if (IsAtapi) {
		memset((void*)((uint64_t)CmdTable + AHCI_CMD_TABLE_CDB), 0, 32);
		memcpy((void*)((uint64_t)CmdTable + AHCI_CMD_TABLE_CDB), Qc->Cdb, Qc->CdbLength);
	}
	NumElements = 0;
	if (Qc->Flags & ATA_QCFLAG_DMAMAP) {
		//were gonna do this later
	}
	Opts = CmdFisLength | (NumElements << 16);

	if (Qc->TaskFile.Flags & ATA_TFLAG_WRITE) {
		Opts |= AHCI_CMD_WRITE;
	}
	if (IsAtapi) {
		Opts |= AHCI_CMD_ATAPI | AHCI_CMD_PREFETCH;
	}

	AhciFillCmdSlot(Ap, Qc->HwTag, Opts);

	return AC_ERR_OK;
}

void GetGenericAhciOperations(PATA_PORT_OPERATIONS_TABLE Ops) {
	Ops->QcPrep = AhciQcPrep;
}