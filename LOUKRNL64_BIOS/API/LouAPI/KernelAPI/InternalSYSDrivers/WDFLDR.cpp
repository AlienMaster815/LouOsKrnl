#include <KERNELAPI/WDFLDR.h>

int32_t WdfLdrDiagnosticsValueByNameAsULONG(UNICODE_STRING const* arg1, uint32_t* arg2){
    
    return 0;
}
int32_t DllInitialize(UNICODE_STRING* arg1){
    
    return 0;
}
int32_t DllUnload(){
    
    return 0;
}

int32_t WdfVersionBindClass(WDF_BIND_INFO* arg1, void** arg2, WDF_CLASS_BIND_INFO* arg3){
    
    return 0;
}


void WdfVersionUnbindClass(struct _WDF_BIND_INFO* arg1, void** arg2, struct _WDF_CLASS_BIND_INFO* arg3){
    
    
}

int32_t WdfLdrQueryInterface(struct _WDF_INTERFACE_HEADER* arg1){
    
    return 0;
}
int32_t WdfVersionBind(struct _DRIVER_OBJECT* arg1, struct _UNICODE_STRING* arg2, struct _WDF_BIND_INFO* arg3, void*** arg4){
    
    return 0;
}

int32_t WdfVersionUnbind(struct _UNICODE_STRING* arg1, struct _WDF_BIND_INFO* arg2, void** arg3){
    
    return 0;
}

int32_t WdfRegisterLibrary(struct _WDF_LIBRARY_INFO* arg1, struct _UNICODE_STRING* arg2, struct _UNICODE_STRING const* arg3){
    
    return 0;
}


int32_t WdfRegisterClassLibrary(struct _WDF_CLASS_LIBRARY_INFO* arg1, struct _UNICODE_STRING* arg2, struct _UNICODE_STRING const* arg3){
    
    return 0;
}
