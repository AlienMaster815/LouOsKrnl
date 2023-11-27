#ifndef _NTAPI_FUNC_H
#define _NTAPI_FUNC_H
#include <WinAPI/NtAPI.h>

VOID RtlCopyUnicodeString(_Inout_ PUNICODE_STRING DestinationString, _In_opt_ PUNICODE_STRING SourceString);
ULONG DbgPrint(_In_z_ _Printf_format_string_ PCSTR Format, ...);
ULONG DbgPrintEx ( _In_ ULONG ComponentId, _In_ ULONG Level, _In_z_ _Printf_format_string_ PCSTR Format, ...);

#endif
