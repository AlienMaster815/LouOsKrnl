
#define _KERNEL_MODULE_

#include <LouDDK.h>
#include "Ahci.h"

void AhciSetEmMessage(PAHCI_DRIVER_EXTENDED_OBJECT HostPrivate, PAHCI_PORT_INFO AtaPortInfo) {
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

PATA_HOST AhciHostAllocatePortInfo(
	P_PCI_DEVICE_OBJECT PDEV,
	PAHCI_DRIVER_EXTENDED_OBJECT ExtendedObject,
	int NumberOfPorts	
) {


	return 0;
}