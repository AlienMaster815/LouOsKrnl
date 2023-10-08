// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Preview_InkWorkspace_1_H
#define WINRT_Windows_ApplicationModel_Preview_InkWorkspace_1_H
#include "winrt/impl/Windows.ApplicationModel.Preview.InkWorkspace.0.h"
namespace winrt::Windows::ApplicationModel::Preview::InkWorkspace
{
    struct __declspec(empty_bases) IInkWorkspaceHostedAppManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInkWorkspaceHostedAppManager>
    {
        IInkWorkspaceHostedAppManager(std::nullptr_t = nullptr) noexcept {}
        IInkWorkspaceHostedAppManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInkWorkspaceHostedAppManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInkWorkspaceHostedAppManagerStatics>
    {
        IInkWorkspaceHostedAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IInkWorkspaceHostedAppManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
