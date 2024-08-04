#include <NtAPI.h>
#include <LouDDK.h>

NTSTATUS WdmlibIoConnectInterruptEx(
	_In_ _Out_ PIO_CONNECT_INTERRUPT_PARAMETERS Parameters
) {
	return IoConnectInterruptEx(Parameters);
}

NTSTATUS WdmlibIoDisconnectInterruptEx(
	_In_ _Out_ PIO_DISCONNECT_INTERRUPT_PARAMETERS Parameters
) {

	IoDisconnectInterruptEx(Parameters);

	return STATUS_SUCCESS;
}

NTSTATUS WdmlibIoGetAffinityInterrupt(
    _In_  PKINTERRUPT     InterruptObject,
    _Out_ PGROUP_AFFINITY GroupAffinity
) {
    if (InterruptObject == 0x00 || GroupAffinity == 0x00) {
        return STATUS_INVALID_PARAMETER;
    }

    // Assuming InterruptObject has a field for ProcessorEnableMask and Group
    // Since KINTERRUPT structure details are opaque, this is an assumed structure
    GroupAffinity->Mask = InterruptObject->ProcessorEnableMask;

	//TODO: check for group

    GroupAffinity->Group = 0; // Assuming single group (no NUMA), adjust if needed
    RtlZeroMemory(GroupAffinity->Reserved, sizeof(GroupAffinity->Reserved));

    return STATUS_SUCCESS;
}
