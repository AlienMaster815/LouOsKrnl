// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Management_Update_1_H
#define WINRT_Windows_Management_Update_1_H
#include "winrt/impl/Windows.Management.Update.0.h"
WINRT_EXPORT namespace winrt::Windows::Management::Update
{
    struct __declspec(empty_bases) IPreviewBuildsManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPreviewBuildsManager>
    {
        IPreviewBuildsManager(std::nullptr_t = nullptr) noexcept {}
        IPreviewBuildsManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPreviewBuildsManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPreviewBuildsManagerStatics>
    {
        IPreviewBuildsManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IPreviewBuildsManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPreviewBuildsState :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPreviewBuildsState>
    {
        IPreviewBuildsState(std::nullptr_t = nullptr) noexcept {}
        IPreviewBuildsState(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
