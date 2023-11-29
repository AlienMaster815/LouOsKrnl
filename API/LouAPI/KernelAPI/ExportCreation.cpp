#include <kernel/exports.h>

void DeclareExports(){

    //WDF Exports Required For The WDK Kit

    DefineExport(0x02, (KRNLEXPORT)WdfLdrDiagnosticsValueByNameAsULONG);
    DefineExport(0x03, (KRNLEXPORT)DllInitialize);
    DefineExport(0x04, (KRNLEXPORT)DllUnload);
    DefineExport(0x05, (KRNLEXPORT)WdfVersionBindClass);
    DefineExport(0x06, (KRNLEXPORT)WdfVersionUnbindClass);
    DefineExport(0x07, (KRNLEXPORT)WdfLdrQueryInterface);
    DefineExport(0x08, (KRNLEXPORT)WdfVersionBind);
    DefineExport(0x09, (KRNLEXPORT)WdfVersionUnbind);
    DefineExport(0x0A, (KRNLEXPORT)WdfRegisterLibrary);
    DefineExport(0x0B, (KRNLEXPORT)WdfRegisterClassLibrary);

    //Kernel Exports For Drivers

    DefineExport(0x01,(KRNLEXPORT)DbgPrint);
    DefineExport(0x0C,(KRNLEXPORT)DbgPrintEx);

}
