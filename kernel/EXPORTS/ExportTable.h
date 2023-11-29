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

#endif
