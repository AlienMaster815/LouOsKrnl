#ifndef AUX_KLIB_H
#define AUX_KLIB_H
#include <NtAPI.h>

#define AUX_KLIB_MODULE_PATH_LEN 256

typedef struct _AUX_MODULE_BASIC_INFO {
	PVOID ImageBase;
}AUX_MODULE_BASIC_INFO,* PAUX_MODULE_BASIC_INFO;

typedef struct _AUX_MODULE_EXTENDED_INFO {
	AUX_MODULE_BASIC_INFO  BasicInfo;
	ULONG				   ImageSize;
	USHORT				   FileNameOffset;
	UCHAR				   FullPathName[AUX_KLIB_MODULE_PATH_LEN];
}AUX_MODULE_EXTENDED_INFO,* PAUX_MODULE_EXTENDED_INFO;


struct RawSMBIOSData
{
	BYTE  Used20CallingMethod;
	BYTE  SMBIOSMajorVersion;
	BYTE  SMBIOSMinorVersion;
	BYTE  DmiRevision;
	DWORD  Length;
	BYTE  SMBIOSTableData[];
};


typedef struct _KBUGCHECK_DATA {
	ULONG     BugCheckDataSize;
	ULONG     BugCheckCode;
	ULONG_PTR Parameter1;
	ULONG_PTR Parameter2;
	ULONG_PTR Parameter3;
	ULONG_PTR Parameter4;
} KBUGCHECK_DATA, * PKBUGCHECK_DATA;


NTSTATUS
__stdcall
AuxKlibEnumerateSystemFirmwareTables(
	_In_ ULONG FirmwareTableProviderSignature,
	_Out_writes_bytes_to_opt_(BufferLength, *ReturnLength) PVOID FirmwareTableBuffer,
	_In_ ULONG BufferLength,
	_Out_opt_ PULONG ReturnLength
);

NTSTATUS AuxKlibGetBugCheckData(
	_Out_ PKBUGCHECK_DATA BugCheckData
);

//PIMAGE_EXPORT_DIRECTORY AuxKlibGetImageExportDirectory(
//	_In_ PVOID ImageBase
//);

NTSTATUS AuxKlibGetSystemFirmwareTable(
	_In_      ULONG  FirmwareTableProviderSignature,
	_In_      ULONG  FirmwareTableID,
	_Out_opt_ PVOID  FirmwareTableBuffer,
	_In_      ULONG  BufferLength,
	_Out_opt_ PULONG ReturnLength
);

NTSTATUS AuxKlibInitialize();


NTSTATUS AuxKlibQueryModuleInformation(
	_In_ _Out_      PULONG BufferSize,
	_In_            ULONG  ElementSize,
	_Out_opt_		PVOID  QueryInfo
);



#endif