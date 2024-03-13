#ifndef _EXPORT_TABLE_
#define _EXPORT_TABLE_
#include <stdint.h>
#include <kernel/exports.h>


// Important Functions For WDK API To Work

#define WdfLdrDiagnosticsValueByNameAsULONGFunc 0x02
#define DllInitializeFunc 0x03
#define DllUnloadFunc 0x04
#define WdfVersionBindClassFunc 0x05
#define WdfVersionUnbindClassFunc 0x06
#define WdfLdrQueryInterfaceFunc 0x07
#define WdfVersionBindFunc 0x08
#define WdfVersionUnbindFunc 0x09
#define WdfRegisterLibraryFunc 0x0A
#define WdfRegisterClassLibraryFunc 0x0B
#define Imp_WppRecordReplayFunc 0x0D
#define WppAutoLogStartFunc 0x0E
#define WppAutoLogTraceFunc 0x0F
#define WppAutoLogStopFunc 0x10
#define RtlCopyUnicodeStringFunc 0x11
#define RtlInitUnicodeStringFunc 0x12
#define MmGetSytemRoutineAddressFunc 0x13


/*
.rdata section started{ 0x140003000 - 0x140003a88 }
140003000  int64_t(* const WDFLDR : WdfVersionUnbindClass)() = WdfVersionUnbindClass
140003008  int64_t(* const WDFLDR : WdfVersionBindClass)() = WdfVersionBindClass
140003010  int64_t(* const WDFLDR : WdfVersionUnbind)() = WdfVersionUnbind
140003018  int64_t(* const WDFLDR : WdfLdrQueryInterface)() = WdfLdrQueryInterface
140003020  int64_t(* const WDFLDR : WdfVersionBind)() = WdfVersionBind

140003028  WDFLDR_NULL_THUNK_DATA:
140003028                          00 00 00 00 00 00 00 00          ........

140003030  int64_t(* const WppRecorder : imp_WppRecorderReplay)() = imp_WppRecorderReplay
140003038  int64_t(* const WppRecorder : WppAutoLogStart)() = WppAutoLogStart
140003040  int64_t(* const WppRecorder : WppAutoLogTrace)() = WppAutoLogTrace
140003048  int64_t(* const WppRecorder : WppAutoLogStop)() = WppAutoLogStop

140003050  WppRecorder_NULL_THUNK_DATA:
140003050  00 00 00 00 00 00 00 00                          ........

140003058  void (* const ntoskrnl : RtlCopyUnicodeString)(UNICODE_STRING * DestinationString, UNICODE_STRING * SourceString) = RtlCopyUnicodeString
140003060  void (* const ntoskrnl : RtlInitUnicodeString)(UNICODE_STRING * DestinationString, wchar16 * SourceString) = RtlInitUnicodeString
140003068  NTSTATUS(* const ntoskrnl : IoWMIRegistrationControl)(DEVICE_OBJECT * DeviceObject, uint32_t Action) = IoWMIRegistrationControl
140003070  void* (* const ntoskrnl : MmGetSystemRoutineAddress)(UNICODE_STRING * SystemRoutineName) = MmGetSystemRoutineAddress
140003078  uint32_t(* const ntoskrnl : DbgPrintEx)(uint32_t ComponentId, uint32_t Level, char* Format, ...) = DbgPrintEx

140003080  ntoskrnl_NULL_THUNK_DATA:
*/

// Kernel Functions
#define DbgPrintFunc 0x01
#define DbgPrintExFunc 0x0C

KRNLEXPORT DbgPrint;
KRNLEXPORT WdfLdrDiagnosticsValueByNameAsULONG;
KRNLEXPORT DllInitialize;
KRNLEXPORT DllUnload;
KRNLEXPORT WdfVersionBindClass;
KRNLEXPORT WdfVersionUnbindClass;
KRNLEXPORT WdfLdrQueryInterface;
KRNLEXPORT WdfVersionBind;
KRNLEXPORT WdfVersionUnbind;
KRNLEXPORT WdfRegisterLibrary;
KRNLEXPORT WdfRegisterClassLibrary;
KRNLEXPORT DbgPrintEx;
KRNLEXPORT Imp_WppRecordReplay;
KRNLEXPORT WppAutoLogStart;
KRNLEXPORT WppAutoLogTrace;
KRNLEXPORT WppAutoLogStop;
KRNLEXPORT RtlCopyUnicodeString;
KRNLEXPORT RtlInitUnicodeString;
KRNLEXPORT MmGetSytemRoutineAddress;


#endif
