#include <KernelAPI/WDFLDR.h>
#include <kernel/exports.h>





NTSTATUS WdfLdrDiagnosticsValueByNameAsULONG(UNICODE_STRING const* arg1, uint32_t* arg2){
    
    return STATUS_SUCCESS;
}
NTSTATUS DllInitialize(UNICODE_STRING* arg1){
    
    return STATUS_SUCCESS;
}
NTSTATUS DllUnload(){
    
    return STATUS_SUCCESS;
}

NTSTATUS WdfVersionBindClass(WDF_BIND_INFO* arg1, void** arg2, WDF_CLASS_BIND_INFO* arg3){
    
    return STATUS_SUCCESS;
}


void WdfVersionUnbindClass(struct _WDF_BIND_INFO* arg1, void** arg2, struct _WDF_CLASS_BIND_INFO* arg3){
    
    
}

NTSTATUS WdfLdrQueryInterface(struct _WDF_INTERFACE_HEADER* arg1){
    
    return STATUS_SUCCESS;
}
NTSTATUS WdfVersionBind(struct _DRIVER_OBJECT* arg1, struct _UNICODE_STRING* arg2, struct _WDF_BIND_INFO* arg3, void*** arg4){
    
    
    return STATUS_SUCCESS;
}

NTSTATUS WdfVersionUnbind(struct _UNICODE_STRING* arg1, struct _WDF_BIND_INFO* arg2, void** arg3){
    
    return STATUS_SUCCESS;
}

NTSTATUS WdfRegisterLibrary(struct _WDF_LIBRARY_INFO* arg1, struct _UNICODE_STRING* arg2, struct _UNICODE_STRING const* arg3){
    
    return STATUS_SUCCESS;
}


NTSTATUS WdfRegisterClassLibrary(struct _WDF_CLASS_LIBRARY_INFO* arg1, struct _UNICODE_STRING* arg2, struct _UNICODE_STRING const* arg3){
    
    return STATUS_SUCCESS;
}
