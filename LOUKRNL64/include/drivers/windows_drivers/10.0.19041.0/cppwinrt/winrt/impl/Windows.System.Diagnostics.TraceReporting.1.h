// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Diagnostics_TraceReporting_1_H
#define WINRT_Windows_System_Diagnostics_TraceReporting_1_H
#include "winrt/impl/Windows.System.Diagnostics.TraceReporting.0.h"
namespace winrt::Windows::System::Diagnostics::TraceReporting
{
    struct __declspec(empty_bases) IPlatformDiagnosticActionsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlatformDiagnosticActionsStatics>
    {
        IPlatformDiagnosticActionsStatics(std::nullptr_t = nullptr) noexcept {}
        IPlatformDiagnosticActionsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlatformDiagnosticTraceInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlatformDiagnosticTraceInfo>
    {
        IPlatformDiagnosticTraceInfo(std::nullptr_t = nullptr) noexcept {}
        IPlatformDiagnosticTraceInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlatformDiagnosticTraceRuntimeInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlatformDiagnosticTraceRuntimeInfo>
    {
        IPlatformDiagnosticTraceRuntimeInfo(std::nullptr_t = nullptr) noexcept {}
        IPlatformDiagnosticTraceRuntimeInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
