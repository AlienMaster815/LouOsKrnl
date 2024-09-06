#include <KernelAPI/WDFLDR.h>
#include <kernel/exports.h>



// Example definitions if not already included
typedef struct _WDF_DRIVER_GLOBALS {
    ULONG Size;
    PVOID DriverContext;
} WDF_DRIVER_GLOBALS, *PWDF_DRIVER_GLOBALS;


NTSTATUS WdfLdrDiagnosticsValueByNameAsULONG(UNICODE_STRING const* arg1, uint32_t* arg2){
    LouPrint("NTSTATUS WdfLdrDiagnosticsValueByNameAsULONG(UNICODE_STRING const* arg1, uint32_t* arg2)\n");

    return STATUS_SUCCESS;
}
NTSTATUS DllInitialize(UNICODE_STRING* arg1){
    
    return STATUS_SUCCESS;
}
NTSTATUS DllUnload(){
    LouPrint("NTSTATUS DllUnload()\n");
    return STATUS_SUCCESS;
}

NTSTATUS WdfVersionBindClass(
    PDRIVER_OBJECT DrvObject,
    WDF_BIND_INFO* BindInfo, 
    PWSTR ClassLibrary, 
    WDF_CLASS_BIND_INFO* ClassBindInfo
) {
    LouPrint("WdfVersionBindClass()\n");

    if((BindInfo == 0x00) || (ClassBindInfo == 0x00) || (ClassLibrary == 0x00)){
        LouPrint("!WdfVersionBindClass() Invalid Parameters\n");
        return STATUS_INVALID_PARAMETER;
    }
    else if(strncmp("0",ConvertWCharToChar(ClassLibrary), strlen(ConvertWCharToChar(ClassLibrary))) == 0){
        LouPrint("WdfVersionBindClass() STATUS SUCCESS\n");
        return STATUS_SUCCESS;
    }


    LouPrint("Class Library String Location:%h\n", ClassLibrary);
    //tracking BindInfo     :62D8
    //tracking ClassLibrary :6050
    //tracking ClassBindInfo:62f0
    while(1);
    return STATUS_SUCCESS;
}


void WdfVersionUnbindClass(struct _WDF_BIND_INFO* arg1, void** arg2, struct _WDF_CLASS_BIND_INFO* arg3){
    
    LouPrint("WdfVersionUnbindClass(struct _WDF_BIND_INFO* arg1, void** arg2, struct _WDF_CLASS_BIND_INFO* arg3)\n");
    
}

NTSTATUS WdfLdrQueryInterface(struct _WDF_INTERFACE_HEADER* arg1){
    LouPrint("NTSTATUS WdfLdrQueryInterface(struct _WDF_INTERFACE_HEADER* arg1)\n");
    return STATUS_SUCCESS;
}
NTSTATUS WdfVersionBind(struct _DRIVER_OBJECT* arg1, struct _UNICODE_STRING* arg2, struct _WDF_BIND_INFO* arg3, void*** arg4){
    
    LouPrint("NTSTATUS WdfVersionBind(struct _DRIVER_OBJECT* arg1, struct _UNICODE_STRING* arg2, struct _WDF_BIND_INFO* arg3, void*** arg4)\n");
    return STATUS_SUCCESS;
}

NTSTATUS WdfVersionUnbind(struct _UNICODE_STRING* arg1, struct _WDF_BIND_INFO* arg2, void** arg3){
    LouPrint("NTSTATUS WdfVersionUnbind(struct _UNICODE_STRING* arg1, struct _WDF_BIND_INFO* arg2, void** arg3)\n");
    return STATUS_SUCCESS;
}

NTSTATUS WdfRegisterLibrary(struct _WDF_LIBRARY_INFO* arg1, struct _UNICODE_STRING* arg2, struct _UNICODE_STRING const* arg3){
    LouPrint("NTSTATUS WdfRegisterLibrary(struct _WDF_LIBRARY_INFO* arg1, struct _UNICODE_STRING* arg2, struct _UNICODE_STRING const* arg3)\n");
    return STATUS_SUCCESS;
}


NTSTATUS WdfRegisterClassLibrary(struct _WDF_CLASS_LIBRARY_INFO* arg1, struct _UNICODE_STRING* arg2, struct _UNICODE_STRING const* arg3){
    LouPrint("NTSTATUS WdfRegisterClassLibrary(struct _WDF_CLASS_LIBRARY_INFO* arg1, struct _UNICODE_STRING* arg2, struct _UNICODE_STRING const* arg3)\n");
    return STATUS_SUCCESS;
}
