
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
#ifndef __windows2Eui2Euiautomation2Ecore_h__
#define __windows2Eui2Euiautomation2Ecore_h__
#ifndef __windows2Eui2Euiautomation2Ecore_p_h__
#define __windows2Eui2Euiautomation2Ecore_p_h__


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
#if !defined(WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION)
#define WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.UI.UIAutomation.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace UIAutomation {
                namespace Core {
                    interface IAutomationRemoteOperationResult;
                } /* Core */
            } /* UIAutomation */
        } /* UI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult ABI::Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult

#endif // ____x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace UIAutomation {
                namespace Core {
                    interface ICoreAutomationRemoteOperation;
                } /* Core */
            } /* UIAutomation */
        } /* UI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation ABI::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation

#endif // ____x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace UIAutomation {
                class AutomationElement;
            } /* UIAutomation */
        } /* UI */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace UIAutomation {
                interface IAutomationElement;
            } /* UIAutomation */
        } /* UI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement ABI::Windows::UI::UIAutomation::IAutomationElement

#endif // ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement_FWD_DEFINED__

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace UIAutomation {
                class AutomationTextRange;
            } /* UIAutomation */
        } /* UI */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace UIAutomation {
                interface IAutomationTextRange;
            } /* UIAutomation */
        } /* UI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange ABI::Windows::UI::UIAutomation::IAutomationTextRange

#endif // ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange_FWD_DEFINED__

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace UIAutomation {
                namespace Core {
                    typedef enum AutomationRemoteOperationStatus : int AutomationRemoteOperationStatus;
                } /* Core */
            } /* UIAutomation */
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace UIAutomation {
                namespace Core {
                    typedef struct AutomationRemoteOperationOperandId AutomationRemoteOperationOperandId;
                } /* Core */
            } /* UIAutomation */
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace UIAutomation {
                namespace Core {
                    class AutomationRemoteOperationResult;
                } /* Core */
            } /* UIAutomation */
        } /* UI */
    } /* Windows */
} /* ABI */

/*
 *
 * Struct Windows.UI.UIAutomation.Core.AutomationRemoteOperationStatus
 *
 * Introduced to Windows.UI.UIAutomation.UIAutomationContract in version 1.0
 *
 */
#if WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace UIAutomation {
                namespace Core {
                    enum AutomationRemoteOperationStatus : int
                    {
                        AutomationRemoteOperationStatus_Success = 0,
                        AutomationRemoteOperationStatus_MalformedBytecode = 1,
                        AutomationRemoteOperationStatus_InstructionLimitExceeded = 2,
                        AutomationRemoteOperationStatus_UnhandledException = 3,
                        AutomationRemoteOperationStatus_ExecutionFailure = 4,
                    };
                } /* Core */
            } /* UIAutomation */
        } /* UI */
    } /* Windows */
} /* ABI */
#endif // WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Windows.UI.UIAutomation.Core.AutomationRemoteOperationOperandId
 *
 * Introduced to Windows.UI.UIAutomation.UIAutomationContract in version 1.0
 *
 */
#if WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace UIAutomation {
                namespace Core {
                    struct AutomationRemoteOperationOperandId
                    {
                        INT32 Value;
                    };
                } /* Core */
            } /* UIAutomation */
        } /* UI */
    } /* Windows */
} /* ABI */
#endif // WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.UI.UIAutomation.Core.IAutomationRemoteOperationResult
 *
 * Introduced to Windows.UI.UIAutomation.UIAutomationContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.UI.UIAutomation.Core.AutomationRemoteOperationResult
 *
 */
#if WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_UIAutomation_Core_IAutomationRemoteOperationResult[] = L"Windows.UI.UIAutomation.Core.IAutomationRemoteOperationResult";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace UIAutomation {
                namespace Core {
                    MIDL_INTERFACE("e0f80c42-4a67-5534-bf5a-09e8a99b36b1")
                    IAutomationRemoteOperationResult : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_Status(
                            ABI::Windows::UI::UIAutomation::Core::AutomationRemoteOperationStatus* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_ExtendedError(
                            HRESULT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_ErrorLocation(
                            INT32* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE HasOperand(
                            ABI::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId operandId,
                            boolean* result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetOperand(
                            ABI::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId operandId,
                            IInspectable** result
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_IAutomationRemoteOperationResult = _uuidof(IAutomationRemoteOperationResult);
                } /* Core */
            } /* UIAutomation */
        } /* UI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult;
#endif /* !defined(____x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.UI.UIAutomation.Core.ICoreAutomationRemoteOperation
 *
 * Introduced to Windows.UI.UIAutomation.UIAutomationContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.UI.UIAutomation.Core.CoreAutomationRemoteOperation
 *
 */
#if WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_UIAutomation_Core_ICoreAutomationRemoteOperation[] = L"Windows.UI.UIAutomation.Core.ICoreAutomationRemoteOperation";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace UIAutomation {
                namespace Core {
                    MIDL_INTERFACE("3ac656f4-e2bc-5c6e-b8e7-b224fb74b060")
                    ICoreAutomationRemoteOperation : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE IsOpcodeSupported(
                            UINT32 opcode,
                            boolean* result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ImportElement(
                            ABI::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId operandId,
                            ABI::Windows::UI::UIAutomation::IAutomationElement* element
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ImportTextRange(
                            ABI::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId operandId,
                            ABI::Windows::UI::UIAutomation::IAutomationTextRange* textRange
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddToResults(
                            ABI::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId operandId
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Execute(
                            UINT32 bytecodeBufferLength,
                            BYTE* bytecodeBuffer,
                            ABI::Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult** result
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICoreAutomationRemoteOperation = _uuidof(ICoreAutomationRemoteOperation);
                } /* Core */
            } /* UIAutomation */
        } /* UI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation;
#endif /* !defined(____x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Windows.UI.UIAutomation.Core.AutomationRemoteOperationResult
 *
 * Introduced to Windows.UI.UIAutomation.UIAutomationContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Windows.UI.UIAutomation.Core.IAutomationRemoteOperationResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_UI_UIAutomation_Core_AutomationRemoteOperationResult_DEFINED
#define RUNTIMECLASS_Windows_UI_UIAutomation_Core_AutomationRemoteOperationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_UIAutomation_Core_AutomationRemoteOperationResult[] = L"Windows.UI.UIAutomation.Core.AutomationRemoteOperationResult";
#endif
#endif // WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Windows.UI.UIAutomation.Core.CoreAutomationRemoteOperation
 *
 * Introduced to Windows.UI.UIAutomation.UIAutomationContract in version 1.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.UI.UIAutomation.UIAutomationContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.UIAutomation.Core.ICoreAutomationRemoteOperation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_UI_UIAutomation_Core_CoreAutomationRemoteOperation_DEFINED
#define RUNTIMECLASS_Windows_UI_UIAutomation_Core_CoreAutomationRemoteOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_UIAutomation_Core_CoreAutomationRemoteOperation[] = L"Windows.UI.UIAutomation.Core.CoreAutomationRemoteOperation";
#endif
#endif // WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult;

#endif // ____x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation __x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation;

#endif // ____x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement;

#endif // ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange;

#endif // ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange_FWD_DEFINED__

typedef enum __x_ABI_CWindows_CUI_CUIAutomation_CCore_CAutomationRemoteOperationStatus __x_ABI_CWindows_CUI_CUIAutomation_CCore_CAutomationRemoteOperationStatus;

typedef struct __x_ABI_CWindows_CUI_CUIAutomation_CCore_CAutomationRemoteOperationOperandId __x_ABI_CWindows_CUI_CUIAutomation_CCore_CAutomationRemoteOperationOperandId;

/*
 *
 * Struct Windows.UI.UIAutomation.Core.AutomationRemoteOperationStatus
 *
 * Introduced to Windows.UI.UIAutomation.UIAutomationContract in version 1.0
 *
 */
#if WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000
enum __x_ABI_CWindows_CUI_CUIAutomation_CCore_CAutomationRemoteOperationStatus
{
    AutomationRemoteOperationStatus_Success = 0,
    AutomationRemoteOperationStatus_MalformedBytecode = 1,
    AutomationRemoteOperationStatus_InstructionLimitExceeded = 2,
    AutomationRemoteOperationStatus_UnhandledException = 3,
    AutomationRemoteOperationStatus_ExecutionFailure = 4,
};
#endif // WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Windows.UI.UIAutomation.Core.AutomationRemoteOperationOperandId
 *
 * Introduced to Windows.UI.UIAutomation.UIAutomationContract in version 1.0
 *
 */
#if WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000
struct __x_ABI_CWindows_CUI_CUIAutomation_CCore_CAutomationRemoteOperationOperandId
{
    INT32 Value;
};
#endif // WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.UI.UIAutomation.Core.IAutomationRemoteOperationResult
 *
 * Introduced to Windows.UI.UIAutomation.UIAutomationContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.UI.UIAutomation.Core.AutomationRemoteOperationResult
 *
 */
#if WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_UIAutomation_Core_IAutomationRemoteOperationResult[] = L"Windows.UI.UIAutomation.Core.IAutomationRemoteOperationResult";
typedef struct __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Status)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult* This,
        enum __x_ABI_CWindows_CUI_CUIAutomation_CCore_CAutomationRemoteOperationStatus* value);
    HRESULT (STDMETHODCALLTYPE* get_ExtendedError)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult* This,
        HRESULT* value);
    HRESULT (STDMETHODCALLTYPE* get_ErrorLocation)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult* This,
        INT32* value);
    HRESULT (STDMETHODCALLTYPE* HasOperand)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult* This,
        struct __x_ABI_CWindows_CUI_CUIAutomation_CCore_CAutomationRemoteOperationOperandId operandId,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetOperand)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult* This,
        struct __x_ABI_CWindows_CUI_CUIAutomation_CCore_CAutomationRemoteOperationOperandId operandId,
        IInspectable** result);

    END_INTERFACE
} __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResultVtbl;

interface __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResultVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_get_Status(This, value) \
    ((This)->lpVtbl->get_Status(This, value))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_get_ExtendedError(This, value) \
    ((This)->lpVtbl->get_ExtendedError(This, value))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_get_ErrorLocation(This, value) \
    ((This)->lpVtbl->get_ErrorLocation(This, value))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_HasOperand(This, operandId, result) \
    ((This)->lpVtbl->HasOperand(This, operandId, result))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_GetOperand(This, operandId, result) \
    ((This)->lpVtbl->GetOperand(This, operandId, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult;
#endif /* !defined(____x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.UI.UIAutomation.Core.ICoreAutomationRemoteOperation
 *
 * Introduced to Windows.UI.UIAutomation.UIAutomationContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.UI.UIAutomation.Core.CoreAutomationRemoteOperation
 *
 */
#if WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_UIAutomation_Core_ICoreAutomationRemoteOperation[] = L"Windows.UI.UIAutomation.Core.ICoreAutomationRemoteOperation";
typedef struct __x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperationVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* IsOpcodeSupported)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation* This,
        UINT32 opcode,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* ImportElement)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation* This,
        struct __x_ABI_CWindows_CUI_CUIAutomation_CCore_CAutomationRemoteOperationOperandId operandId,
        __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement* element);
    HRESULT (STDMETHODCALLTYPE* ImportTextRange)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation* This,
        struct __x_ABI_CWindows_CUI_CUIAutomation_CCore_CAutomationRemoteOperationOperandId operandId,
        __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange* textRange);
    HRESULT (STDMETHODCALLTYPE* AddToResults)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation* This,
        struct __x_ABI_CWindows_CUI_CUIAutomation_CCore_CAutomationRemoteOperationOperandId operandId);
    HRESULT (STDMETHODCALLTYPE* Execute)(__x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation* This,
        UINT32 bytecodeBufferLength,
        BYTE* bytecodeBuffer,
        __x_ABI_CWindows_CUI_CUIAutomation_CCore_CIAutomationRemoteOperationResult** result);

    END_INTERFACE
} __x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperationVtbl;

interface __x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperationVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_IsOpcodeSupported(This, opcode, result) \
    ((This)->lpVtbl->IsOpcodeSupported(This, opcode, result))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_ImportElement(This, operandId, element) \
    ((This)->lpVtbl->ImportElement(This, operandId, element))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_ImportTextRange(This, operandId, textRange) \
    ((This)->lpVtbl->ImportTextRange(This, operandId, textRange))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_AddToResults(This, operandId) \
    ((This)->lpVtbl->AddToResults(This, operandId))

#define __x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_Execute(This, bytecodeBufferLength, bytecodeBuffer, result) \
    ((This)->lpVtbl->Execute(This, bytecodeBufferLength, bytecodeBuffer, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation;
#endif /* !defined(____x_ABI_CWindows_CUI_CUIAutomation_CCore_CICoreAutomationRemoteOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Windows.UI.UIAutomation.Core.AutomationRemoteOperationResult
 *
 * Introduced to Windows.UI.UIAutomation.UIAutomationContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Windows.UI.UIAutomation.Core.IAutomationRemoteOperationResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_UI_UIAutomation_Core_AutomationRemoteOperationResult_DEFINED
#define RUNTIMECLASS_Windows_UI_UIAutomation_Core_AutomationRemoteOperationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_UIAutomation_Core_AutomationRemoteOperationResult[] = L"Windows.UI.UIAutomation.Core.AutomationRemoteOperationResult";
#endif
#endif // WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Windows.UI.UIAutomation.Core.CoreAutomationRemoteOperation
 *
 * Introduced to Windows.UI.UIAutomation.UIAutomationContract in version 1.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.UI.UIAutomation.UIAutomationContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.UIAutomation.Core.ICoreAutomationRemoteOperation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_UI_UIAutomation_Core_CoreAutomationRemoteOperation_DEFINED
#define RUNTIMECLASS_Windows_UI_UIAutomation_Core_CoreAutomationRemoteOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_UIAutomation_Core_CoreAutomationRemoteOperation[] = L"Windows.UI.UIAutomation.Core.CoreAutomationRemoteOperation";
#endif
#endif // WINDOWS_UI_UIAUTOMATION_UIAUTOMATIONCONTRACT_VERSION >= 0x10000

#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eui2Euiautomation2Ecore_p_h__

#endif // __windows2Eui2Euiautomation2Ecore_h__
