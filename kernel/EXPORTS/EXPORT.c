#include "ExportTable.h"


// EXPORT TABLE LOOKUP INFO

// Important Functions For WDK API To Work

//#define WdfLdrDiagnosticsValueByNameAsULONGFunc 0x02
//#define DllInitializeFunc 0x03
//#define DllUnloadFunc 0x04
//#define WdfVersionBindClassFunc 0x05
//#define WdfVersionUnbindClassFunc 0x06
//#define WdfLdrQueryInterfaceFunc 0x07
//#define WdfVersionBindFunc 0x08
//#define WdfVersionUnbindFunc 0x09
//#define WdfRegisterLibraryFunc 0x0A
//#define WdfRegisterClassLibraryFunc 0x0B

// Kernel Functions
//#define DbgPrintFunc 0x01


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
        default: break;
    }

}
