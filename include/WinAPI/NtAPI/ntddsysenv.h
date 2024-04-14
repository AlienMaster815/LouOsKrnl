#ifndef _NTDDSYSENV_H
#define _NTDDSYSENV_H

#include <NtAPI.h>

typedef struct _SYSENV_VALUE {
	ULONG Attributes;
	ULONG ValueLength;
	//UCHAR ValueData[ANYSIZE_ARRAY];
} SYSENV_VALUE, * PSYSENV_VALUE;

typedef struct _SYSENV_VARIABLE {
	//GUID  VendorGuid;
	ULONG VariableNameLength;
	//WCHAR VariableName[ANYSIZE_ARRAY];
} SYSENV_VARIABLE, * PSYSENV_VARIABLE;

typedef struct _SYSENV_VARIABLE_INFO {
	ULONGLONG MaximumVariableStorageSize;
	ULONGLONG RemainingVariableStorageSize;
	ULONGLONG MaximumVariableSize;
} SYSENV_VARIABLE_INFO, * PSYSENV_VARIABLE_INFO;

typedef struct _XVARIABLE_NAME {
	ULONG NextEntryOffset;
	//GUID  VendorGuid;
	//WCHAR Name[ANYSIZE_ARRAY];
} XVARIABLE_NAME, * PXVARIABLE_NAME;

typedef struct _XVARIABLE_NAME_AND_VALUE {
	ULONG NextEntryOffset;
	ULONG ValueOffset;
	ULONG ValueLength;
	ULONG Attributes;
	//GUID  VendorGuid;
	//WCHAR Name[ANYSIZE_ARRAY];
} XVARIABLE_NAME_AND_VALUE, * PXVARIABLE_NAME_AND_VALUE;

#endif