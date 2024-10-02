
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