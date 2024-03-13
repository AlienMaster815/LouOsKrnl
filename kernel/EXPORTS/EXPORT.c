#include "ExportTable.h"


// EXPORT TABLE LOOKUP INFO




//EXPORT FUNCTIONS
void DefineExport(uint64_t ExportNumber, void (*Handler)()){

    switch (ExportNumber){
    
        case DbgPrintFunc :{ DbgPrint = Handler; break;}
        case WdfLdrDiagnosticsValueByNameAsULONGFunc:{ WdfLdrDiagnosticsValueByNameAsULONG = Handler; break;}
        case DllInitializeFunc:{ DllInitialize = Handler; break; }
        case DllUnloadFunc:{DllUnload = Handler; break;}
        case WdfVersionBindClassFunc:{WdfVersionBindClass = Handler; break;}
        case WdfVersionUnbindClassFunc:{WdfVersionUnbindClass = Handler; break;}
        case WdfLdrQueryInterfaceFunc:{WdfLdrQueryInterface = Handler; break;}
        case WdfVersionBindFunc:{WdfVersionBind = Handler; break;}
        case WdfVersionUnbindFunc:{WdfVersionUnbind = Handler; break;}
        case WdfRegisterLibraryFunc:{WdfRegisterLibrary = Handler; break;}
        case WdfRegisterClassLibraryFunc:{WdfRegisterClassLibrary = Handler; break;}
        case DbgPrintExFunc:{DbgPrintEx = Handler; break;}
        case Imp_WppRecordReplayFunc: {Imp_WppRecordReplay = Handler; break;}
        case WppAutoLogStartFunc: {WppAutoLogStart = Handler; break; }
        case WppAutoLogTraceFunc: {WppAutoLogTrace = Handler; break; }
        case WppAutoLogStopFunc: {WppAutoLogStop = Handler; break; }
        case RtlCopyUnicodeStringFunc: {RtlCopyUnicodeString = Handler; break; }
        case RtlInitUnicodeStringFunc: {RtlInitUnicodeString = Handler; break; }
        case MmGetSytemRoutineAddressFunc: {MmGetSytemRoutineAddress = Handler; break; }
        default: break;
    }

}
