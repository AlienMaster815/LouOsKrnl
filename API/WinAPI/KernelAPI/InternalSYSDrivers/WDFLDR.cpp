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

/*
The WdfVersionBindClass function is a key part of the Windows Driver Framework (WDF) that helps in 
establishing a connection between a driver and a class library. The function sets up the necessary 
bindings and ensures that the driver can interact properly with the class library it needs. Here’s 
the theoretical breakdown of what this function does:
Theory of WdfVersionBindClass
Initialization of Binding Information:
Structure Setup: The function initializes the WDF_BIND_INFO structure, which includes setting the 
size, component name, version information, function table, and module information. This setup is 
essential for the framework to understand what the driver needs and how it should be configured.
Parameter Validation:
Check Inputs: The function validates the input parameters to ensure they are not NULL. This step 
is crucial to prevent errors during the binding process and to ensure that the necessary structures 
and pointers are correctly initialized.
Class Library Binding:
Client Binding Call: The function calls the ClientBindClass function provided in the WDF_CLASS_BIND_INFO 
structure. This function is responsible for performing the actual binding of the class library to the 
driver. It typically involves setting up function pointers, initializing resources, and ensuring 
compatibility between the driver and the class library.
Error Handling:
Handling Failures: If the ClientBindClass function returns an error, WdfVersionBindClass handles this by 
logging the error and returning the appropriate status code. Proper error handling ensures that any 
issues during the binding process are correctly managed and reported.
Successful Binding:
Completion Message: If the binding is successful, the function logs a success message and returns 
STATUS_SUCCESS. This indicates that the driver is now properly bound to the class library and ready 
to interact with it.
Steps in the Binding Process
Parameter Validation:
The function first checks if any of the input pointers (BindInfo, ClassLibrary, ClassBindInfo) are NULL. 
If any are invalid, it returns STATUS_INVALID_PARAMETER.
Initialize WDF_BIND_INFO:
The function initializes the WDF_BIND_INFO structure by setting its size, component name, version details, 
function table, and module pointer.
Call ClientBindClass:
The function then calls ClientBindClass, passing in the necessary structures. This function handles the 
class-specific binding operations, such as initializing the class library, setting up the function table, 
and performing any other necessary setup.
Error Handling and Cleanup:
If ClientBindClass fails, WdfVersionBindClass handles the error by cleaning up any allocated resources and 
returning the error status.
Success Message and Return:
If everything is successful, the function logs a success message and returns STATUS_SUCCESS, indicating 
that the binding process was completed successfully.
*/

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
