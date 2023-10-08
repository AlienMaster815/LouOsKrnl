// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Core_Preview_1_H
#define WINRT_Windows_UI_Core_Preview_1_H
#include "winrt/impl/Windows.UI.Core.Preview.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Core::Preview
{
    struct __declspec(empty_bases) ICoreAppWindowPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreAppWindowPreview>
    {
        ICoreAppWindowPreview(std::nullptr_t = nullptr) noexcept {}
        ICoreAppWindowPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreAppWindowPreviewStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreAppWindowPreviewStatics>
    {
        ICoreAppWindowPreviewStatics(std::nullptr_t = nullptr) noexcept {}
        ICoreAppWindowPreviewStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISystemNavigationCloseRequestedPreviewEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISystemNavigationCloseRequestedPreviewEventArgs>
    {
        ISystemNavigationCloseRequestedPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISystemNavigationCloseRequestedPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISystemNavigationManagerPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISystemNavigationManagerPreview>
    {
        ISystemNavigationManagerPreview(std::nullptr_t = nullptr) noexcept {}
        ISystemNavigationManagerPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISystemNavigationManagerPreviewStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISystemNavigationManagerPreviewStatics>
    {
        ISystemNavigationManagerPreviewStatics(std::nullptr_t = nullptr) noexcept {}
        ISystemNavigationManagerPreviewStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
