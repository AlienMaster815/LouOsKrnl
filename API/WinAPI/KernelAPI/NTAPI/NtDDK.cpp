#include <NtAPI.h>
#include <LouDDK.h>

VOID RtlZeroMemory(void* Location ,size_t Size){
	memset(Location, 0 , Size);
}

NTSTATUS IoAllocateAdapterChannel(
	PADAPTER_OBJECT AdapterObject,
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
	LouPrint("DataTypeMissAlligned\n");
}

KERNEL_IMPORT uint64_t GetCurrentTimeInMilliseconds();

void KeQuerySystemTime(LARGE_INTEGER* TimeCurrent){ //T = OUT
    // Validate the output pointer
    if (TimeCurrent == 0x00) {
		return;
    }

    // Get the current time in milliseconds
    uint64_t current_time_ms = GetCurrentTimeInMilliseconds();
    
    // Convert milliseconds to 100-nanosecond intervals
    uint64_t time_100ns = current_time_ms * 10000;
    
    // Fill the LARGE_INTEGER with the calculated time
    TimeCurrent->QuadPart = time_100ns;

}

NTSTATUS ExUuidCreate(
	_Out_ UUID* Uuid
) {
    //LARGE_INTEGER currentTime;
    //static USHORT clockSequence = 0;
    //static BOOLEAN initialized = FALSE;
    //static UCHAR node[6] = {0};

    // Validate the output pointer
    //if (Uuid == NULL) {
    //    return STATUS_INVALID_PARAMETER;
    //}

    // Get the current system time in 100-nanosecond intervals since January 1, 1601 (UTC)
    //KeQuerySystemTime(&currentTime);

    // Initialize clock sequence and node identifier if not already done
    //if (!initialized) {
        // Generate a random clock sequence
    //    clockSequence = (USHORT)RtlRandomEx(&currentTime.LowPart);
        
        // Get a random node identifier (in a real scenario, this would use the MAC address)
    //    RtlCopyMemory(node, "\x01\x23\x45\x67\x89\xab", sizeof(node));
        
    //    initialized = TRUE;
    //}

    // Populate the UUID structure
    //Uuid->Data1 = currentTime.LowPart;
    //Uuid->Data2 = (USHORT)(currentTime.HighPart & 0xFFFF);
    //Uuid->Data3 = (USHORT)((currentTime.HighPart >> 16) & 0x0FFF) | 0x4000; // Version 4
    //Uuid->Data4[0] = (UCHAR)((clockSequence >> 8) & 0x3F) | 0x80; // Variant 1
    //Uuid->Data4[1] = (UCHAR)(clockSequence & 0xFF);
    //RtlCopyMemory(&Uuid->Data4[2], node, sizeof(node));

	

	return STATUS_SUCCESS;
}

NTSTATUS HalAllocateHardwareCounters(
	PGROUP_AFFINITY                 GroupAffinty,
	_In_  ULONG                           GroupCount,
	_In_  PPHYSICAL_COUNTER_RESOURCE_LIST ResourceList,
	_Out_ PHANDLE                         CounterSetHandle
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
	_In_ HANDLE CounterSetHandle
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
/*
void IoAssignArcName(
	_In_  ArcName,
	_In_  DeviceName
) {


}
*/

void IoClearActivityIdThread(
	_In_ LPCGUID OriginalId
) {


}

PCONTROLLER_OBJECT IoCreateController(
	_In_ ULONG Size
) {

	return 0;
}

//void IoDeassignArcName(
//	_In_  ArcName
//){

//}

//void IoDeassignArcName(
//	_In_  ArcName
//){

//}

NTSTATUS IoDecrementKeepAliveCount(
	_In_ _Out_ PFILE_OBJECT FileObject,
	_In_ _Out_ PEPROCESS    Process
) {

	return STATUS_SUCCESS;
}

void IoDeleteController(
  _In_ PCONTROLLER_OBJECT ControllerObject
){

}

bool NT_SUCCESS(NTSTATUS Status){
	switch(Status){
		case 0:
			return true;
		default:
			return false;
	}
}

void IoFreeController(
  _In_ PCONTROLLER_OBJECT ControllerObject
){

}

NTSTATUS IoGetActivityIdIrp(
  _In_  PIRP   Irp,
  _Out_ LPGUID Guid
){


	return STATUS_SUCCESS;
}

LPCGUID IoGetActivityIdThread(){

	return 0x00;
}

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(){
	


	return 0x00;
}

PGENERIC_MAPPING IoGetFileObjectGenericMapping(){


	return 0x00;
}

PEPROCESS IoGetInitiatorProcess(
  _In_ PFILE_OBJECT FileObject
){



	return 0x00;
}

IO_PAGING_PRIORITY IoGetPagingIoPriority(
  _In_ PIRP Irp
){

	return IoPagingPriorityInvalid;

}

NTSTATUS IoIncrementKeepAliveCount(
	_In_ _Out_ PFILE_OBJECT FileObject,
	_In_ _Out_ PEPROCESS    Process
){


	return STATUS_SUCCESS;
}

LOGICAL IoIsValidIrpStatus(
  _In_ NTSTATUS Status
){


	return 0x00;
}