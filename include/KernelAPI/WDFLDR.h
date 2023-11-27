#ifndef _WDFLDR_H
#define _WDFLDR_H

#ifdef __cplusplus

#include <WDKSubsystem/WDKSubsystem.h>

typedef struct _WDF_CLASS_VERSION
{
    uint32_t Major;
    uint32_t Minor;
    uint32_t Build;
}WDF_CLASS_VERSION, *PWDF_CLASS_VERSION;


typedef struct _WDF_VERSION
{
    uint32_t Major;
    uint32_t Minor;
    uint32_t Build;
} WDF_VERSION;

typedef struct _WDF_BIND_INFO
{
    uint32_t Size;
    wchar_t* Component;
    struct _WDF_VERSION Version;
    uint32_t FuncCount;
    void (** FuncTable )();
    struct _LIBRARY_MODULE* Module;
}WDF_BIND_INFO;

typedef WDF_BIND_INFO *PWDF_BIND_INFO;

typedef struct _WDF_INTERFACE_HEADER
{
    struct _GUID const* InterfaceType;
    uint32_t InterfaceSize;
}WDF_INTERFACE_HEADER;

typedef struct _WDF_CLASS_BIND_INFO
{
    uint32_t Size;
    wchar_t* ClassName;
    struct _WDF_CLASS_VERSION Version;
    void (** FunctionTable )();
    uint32_t FunctionTableCount;
    void* ClassBindInfo;
    int32_t (* ClientBindClass )(int32_t (*)(struct _WDF_BIND_INFO*, void**, struct _WDF_CLASS_BIND_INFO*), struct _WDF_BIND_INFO*, void**, struct _WDF_CLASS_BIND_INFO*);
    void (* ClientUnbindClass )(void (*)(struct _WDF_BIND_INFO*, void**, struct _WDF_CLASS_BIND_INFO*), struct _WDF_BIND_INFO*, void**, struct _WDF_CLASS_BIND_INFO*);
    void* ClassModule;
}WDF_CLASS_BIND_INFO;

typedef WDF_CLASS_BIND_INFO *PWDF_CLASS_BIND_INFO;


typedef struct _WDF_CLASS_LIBRARY_INFO
{
    uint32_t Size;
    struct _WDF_CLASS_VERSION Version;
    int32_t (* ClassLibraryInitialize )();
    void (* ClassLibraryDeinitialize )();
    int32_t (* ClassLibraryBindClient )(struct _WDF_CLASS_BIND_INFO*, void**);
    void (* ClassLibraryUnbindClient )(struct _WDF_CLASS_BIND_INFO*, void**);
}WDF_CLASS_LIBRARY_INFO;

struct _WDF_LIBRARY_INFO
{
    uint32_t Size;
    int32_t (* LibraryCommission )();
    int32_t (* LibraryDecommission )();
    int32_t (* LibraryRegisterClient )(struct _WDF_BIND_INFO*, void***, void**);
    int32_t (* LibraryUnregisterClient )(struct _WDF_BIND_INFO*, void**);
    struct _WDF_VERSION Version;
};

int32_t WdfLdrDiagnosticsValueByNameAsULONG(UNICODE_STRING const* arg1, uint32_t* arg2);
int32_t DllInitialize(UNICODE_STRING* arg1);
int32_t DllUnload();
int32_t WdfVersionBindClass(WDF_BIND_INFO* arg1, void** arg2, WDF_CLASS_BIND_INFO* arg3);
void WdfVersionUnbindClass(struct _WDF_BIND_INFO* arg1, void** arg2, struct _WDF_CLASS_BIND_INFO* arg3);

int32_t WdfLdrQueryInterface(struct _WDF_INTERFACE_HEADER* arg1);
int32_t WdfVersionBind(struct _DRIVER_OBJECT* arg1, struct _UNICODE_STRING* arg2, struct _WDF_BIND_INFO* arg3, void*** arg4);

int32_t WdfVersionUnbind(struct _UNICODE_STRING* arg1, struct _WDF_BIND_INFO* arg2, void** arg3);

int32_t WdfRegisterLibrary(struct _WDF_LIBRARY_INFO* arg1, struct _UNICODE_STRING* arg2, struct _UNICODE_STRING const* arg3);


int32_t WdfRegisterClassLibrary(struct _WDF_CLASS_LIBRARY_INFO* arg1, struct _UNICODE_STRING* arg2,
    struct _UNICODE_STRING const* arg3);
#else
// C Code Goes Here


#endif

#endif
