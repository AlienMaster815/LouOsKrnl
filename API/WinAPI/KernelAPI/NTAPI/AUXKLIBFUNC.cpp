#include <NtAPI.h>

NTSTATUS
__stdcall
AuxKlibEnumerateSystemFirmwareTables(
	_In_ ULONG FirmwareTableProviderSignature,
	_Out_writes_bytes_to_opt_(BufferLength, *ReturnLength) PVOID FirmwareTableBuffer,
	_In_ ULONG BufferLength,
	_Out_opt_ PULONG ReturnLength
) {



	return STATUS_SUCCESS;
}


NTSTATUS AuxKlibGetBugCheckData(
	_Out_ PKBUGCHECK_DATA BugCheckData
) {

	return STATUS_SUCCESS;
}

PIMAGE_EXPORT_DIRECTORY AuxKlibGetImageExportDirectory(
	_In_ PVOID ImageBase
) {

	return 0;
}


NTSTATUS AuxKlibGetSystemFirmwareTable(
	_In_      ULONG  FirmwareTableProviderSignature,
	_In_      ULONG  FirmwareTableID,
	_Out_opt_ PVOID  FirmwareTableBuffer,
	_In_      ULONG  BufferLength,
	_Out_opt_ PULONG ReturnLength
) {

	return STATUS_SUCCESS;
}


NTSTATUS AuxKlibInitialize() {


	return STATUS_SUCCESS;
}

NTSTATUS AuxKlibQueryModuleInformation(
	_In_ _Out_      PULONG BufferSize,
	_In_            ULONG  ElementSize,
	_Out_opt_		PVOID  QueryInfo
) {


	return STATUS_SUCCESS;
}