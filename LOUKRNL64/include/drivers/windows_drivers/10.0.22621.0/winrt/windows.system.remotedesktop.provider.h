
#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __windows2Esystem2Eremotedesktop2Eprovider_h__
#define __windows2Esystem2Eremotedesktop2Eprovider_h__
#ifndef __windows2Esystem2Eremotedesktop2Eprovider_p_h__
#define __windows2Esystem2Eremotedesktop2Eprovider_p_h__


#pragma once

//
// Deprecated attribute support
//

#pragma push_macro("DEPRECATED")
#undef DEPRECATED

#if !defined(DISABLE_WINRT_DEPRECATION)
#if defined(__cplusplus)
#if __cplusplus >= 201402
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#elif defined(_MSC_VER)
#if _MSC_VER >= 1900
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#else
#define DEPRECATED(x) __declspec(deprecated(x))
#define DEPRECATEDENUMERATOR(x)
#endif // _MSC_VER >= 1900
#else // Not Standard C++ or MSVC, ignore the construct.
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  // C++ deprecation
#else // C - disable deprecation
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif
#else // Deprecation is disabled
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  /* DEPRECATED */

// Disable Deprecation for this header, MIDL verifies that cross-type access is acceptable
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#else
#pragma warning(push)
#pragma warning(disable: 4996)
#endif

// Ensure that the setting of the /ns_prefix command line switch is consistent for all headers.
// If you get an error from the compiler indicating "warning C4005: 'CHECK_NS_PREFIX_STATE': macro redefinition", this
// indicates that you have included two different headers with different settings for the /ns_prefix MIDL command line switch
#if !defined(DISABLE_NS_PREFIX_CHECKS)
#define CHECK_NS_PREFIX_STATE "always"
#endif // !defined(DISABLE_NS_PREFIX_CHECKS)


#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0xf0000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.UI.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    interface IRemoteDesktopConnectionInfo;
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo ABI::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    interface IRemoteDesktopConnectionInfoStatics;
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics ABI::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfoStatics

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Uri;
        } /* Foundation */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IUriRuntimeClass;
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIUriRuntimeClass ABI::Windows::Foundation::IUriRuntimeClass

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__

namespace ABI {
    namespace Windows {
        namespace UI {
            typedef struct WindowId WindowId;
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    typedef enum RemoteDesktopConnectionStatus : int RemoteDesktopConnectionStatus;
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    class RemoteDesktopConnectionInfo;
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */

/*
 *
 * Struct Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 15.0
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    enum RemoteDesktopConnectionStatus : int
                    {
                        RemoteDesktopConnectionStatus_Connecting = 0,
                        RemoteDesktopConnectionStatus_Connected = 1,
                        RemoteDesktopConnectionStatus_UserInputNeeded = 2,
                        RemoteDesktopConnectionStatus_Disconnected = 3,
                    };
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000

/*
 *
 * Interface Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 15.0
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo[] = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    MIDL_INTERFACE("886bde2a-46ad-5a25-9348-03e801c78575")
                    IRemoteDesktopConnectionInfo : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE SetConnectionStatus(
                            ABI::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionStatus value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_IRemoteDesktopConnectionInfo = _uuidof(IRemoteDesktopConnectionInfo);
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000

/*
 *
 * Interface Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 15.0
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfoStatics[] = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfoStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    MIDL_INTERFACE("4a7dc5a1-3368-5a75-bb78-807df7ebc439")
                    IRemoteDesktopConnectionInfoStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetForLaunchUri(
                            ABI::Windows::Foundation::IUriRuntimeClass* launchUri,
                            ABI::Windows::UI::WindowId windowId,
                            ABI::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo** result
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_IRemoteDesktopConnectionInfoStatics = _uuidof(IRemoteDesktopConnectionInfoStatics);
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000

/*
 *
 * Class Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 15.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfoStatics interface starting with version 15.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000
#ifndef RUNTIMECLASS_Windows_System_RemoteDesktop_Provider_RemoteDesktopConnectionInfo_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteDesktop_Provider_RemoteDesktopConnectionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteDesktop_Provider_RemoteDesktopConnectionInfo[] = L"Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo;

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics;

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CUI_CWindowId __x_ABI_CWindows_CUI_CWindowId;

typedef enum __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CRemoteDesktopConnectionStatus __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CRemoteDesktopConnectionStatus;

/*
 *
 * Struct Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 15.0
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000
enum __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CRemoteDesktopConnectionStatus
{
    RemoteDesktopConnectionStatus_Connecting = 0,
    RemoteDesktopConnectionStatus_Connected = 1,
    RemoteDesktopConnectionStatus_UserInputNeeded = 2,
    RemoteDesktopConnectionStatus_Disconnected = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000

/*
 *
 * Interface Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 15.0
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo[] = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo";
typedef struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* SetConnectionStatus)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo* This,
        enum __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CRemoteDesktopConnectionStatus value);

    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_SetConnectionStatus(This, value) \
    ((This)->lpVtbl->SetConnectionStatus(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000

/*
 *
 * Interface Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 15.0
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfoStatics[] = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfoStatics";
typedef struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetForLaunchUri)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics* This,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass* launchUri,
        struct __x_ABI_CWindows_CUI_CWindowId windowId,
        __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo** result);

    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_GetForLaunchUri(This, launchUri, windowId, result) \
    ((This)->lpVtbl->GetForLaunchUri(This, launchUri, windowId, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000

/*
 *
 * Class Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 15.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfoStatics interface starting with version 15.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000
#ifndef RUNTIMECLASS_Windows_System_RemoteDesktop_Provider_RemoteDesktopConnectionInfo_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteDesktop_Provider_RemoteDesktopConnectionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteDesktop_Provider_RemoteDesktopConnectionInfo[] = L"Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000

#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Esystem2Eremotedesktop2Eprovider_p_h__

#endif // __windows2Esystem2Eremotedesktop2Eprovider_h__
