#include <NtAPI.h>


NTSTATUS IoAllocateAdapterChannel(
	//PADAPTER_OBJECT AdapterObject,
	PDEVICE_OBJECT  DeviceObject,
	ULONG           NumberOfMapRegisters,
	PDRIVER_CONTROL ExecutionRoutine,
	PVOID           Context
) {

	return STATUS_SUCCESS;
}

BOOLEAN WheaSignalHandlerOverrideCallback(
	_In_ _Out_opt_ UINT_PTR Context
){

	return true;
}


void BootDriverCallbackFunction(
	PVOID CallbackContext,
	BDCB_CALLBACK_TYPE Classification,
	PBDCB_IMAGE_INFORMATION ImageInformation
) {


}

void CUSTOM_SYSTEM_EVENT_TRIGGER_INIT(
	PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG Config,
	PCWSTR                              TriggerId
) {


}

void DriverReinitialize(
	_In_          _DRIVER_OBJECT* DriverObject,
	_In_opt_ PVOID Context,
	_In_           ULONG Count
) {


}

void ExFreePool(
	uintptr_t a
){

}

void ExpandStackCallout(
	_In_opt_ PVOID Parameter
) {


}

void ExRaiseAccessViolation() {
	asm volatile ("INT $0xD");
}

void ExRaiseDatatypeMisalignment() {

}

NTSTATUS ExUuidCreate(
	//_Out_ UUID* Uuid
) {

	return STATUS_SUCCESS;
}

NTSTATUS HalAllocateHardwareCounters(
	PGROUP_AFFINITY                 GroupAffinty,
	_In_  ULONG                           GroupCount//,
	//_In_  PPHYSICAL_COUNTER_RESOURCE_LIST ResourceList,
	//_Out_ PHANDLE                         CounterSetHandle
) {

	return STATUS_SUCCESS;
}

void HalExamineMBR(
	_In_  PDEVICE_OBJECT DeviceObject,
	_In_  ULONG          SectorSize,
	_In_  ULONG          MBRTypeIdentifier,
	_Out_ PVOID* Buffer
) {


}

NTSTATUS HalFreeHardwareCounters(
	//_In_ HANDLE CounterSetHandle
) {

	return STATUS_SUCCESS;
}

//WARNING BACKPATIBLE STABILITY THREAT
ULONG HalGetBusDataByOffset(
	_In_ BUS_DATA_TYPE BusDataType,
	_In_ ULONG         BusNumber,
	_In_ ULONG         SlotNumber,
	_In_ PVOID         Buffer,
	_In_ ULONG         Offset,
	_In_ ULONG         Length
) {


	return 0;
}

ULONG HalSetBusDataByOffset(
	_In_ BUS_DATA_TYPE BusDataType,
	_In_ ULONG         BusNumber,
	_In_ ULONG         SlotNumber,
	_In_ PVOID         Buffer,
	_In_ ULONG         Offset,
	_In_ ULONG         Length
) {

	return 0;
}

void IoAllocateController(
	_In_           PCONTROLLER_OBJECT ControllerObject,
	_In_           PDEVICE_OBJECT     DeviceObject,
	_In_           PDRIVER_CONTROL    ExecutionRoutine,
	_In_opt_ PVOID              Context
) {


}

void IoAssignArcName(
	_In_  ArcName,
	_In_  DeviceName
) {


}

void IoClearActivityIdThread(
	//_In_ LPCGUID OriginalId
) {


}

//PCONTROLLER_OBJECT IoCreateController(
//	[in] ULONG Size
//) {

//}

//void IoDeassignArcName(
//	_In_  ArcName
//){

//}

//void IoDeassignArcName(
//	_In_  ArcName
//){

//}
