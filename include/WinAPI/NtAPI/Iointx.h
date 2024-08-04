#ifndef _IOINTEX_H
#define _IOINTEX_H

#include <NtAPI.h>

NTSTATUS WdmlibIoGetAffinityInterrupt(
	_In_  PKINTERRUPT     InterruptObject,
	_Out_ PGROUP_AFFINITY GroupAffinity
);


NTSTATUS WdmlibIoDisconnectInterruptEx(
	_In_ _Out_ PIO_DISCONNECT_INTERRUPT_PARAMETERS Parameters
);

NTSTATUS WdmlibIoConnectInterruptEx(
	_In_ _Out_ PIO_CONNECT_INTERRUPT_PARAMETERS Parameters
);

#endif