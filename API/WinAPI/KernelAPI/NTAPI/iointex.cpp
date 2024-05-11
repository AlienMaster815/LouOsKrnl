#include <NtAPI.h>
#include <LouDDK.h>

NTSTATUS WdmlibIoConnectInterruptEx(
	_In_ _Out_ PIO_CONNECT_INTERRUPT_PARAMETERS Parameters
) {


	return STATUS_SUCCESS;
}

NTSTATUS WdmlibIoDisconnectInterruptEx(
	_In_ _Out_ PIO_DISCONNECT_INTERRUPT_PARAMETERS Parameters
) {

	return STATUS_SUCCESS;
}


NTSTATUS WdmlibIoGetAffinityInterrupt(
	_In_  PKINTERRUPT     InterruptObject,
	_Out_ PGROUP_AFFINITY GroupAffinity
) {


	return STATUS_SUCCESS;
}