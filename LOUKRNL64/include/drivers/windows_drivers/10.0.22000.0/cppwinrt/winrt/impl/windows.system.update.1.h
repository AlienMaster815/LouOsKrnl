// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Update_1_H
#define WINRT_Windows_System_Update_1_H
#include "winrt/impl/Windows.System.Update.0.h"
WINRT_EXPORT namespace winrt::Windows::System::Update
{
    struct __declspec(empty_bases) ISystemUpdateItem :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISystemUpdateItem>
    {
        ISystemUpdateItem(std::nullptr_t = nullptr) noexcept {}
        ISystemUpdateItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISystemUpdateLastErrorInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISystemUpdateLastErrorInfo>
    {
        ISystemUpdateLastErrorInfo(std::nullptr_t = nullptr) noexcept {}
        ISystemUpdateLastErrorInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISystemUpdateManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISystemUpdateManagerStatics>
    {
        ISystemUpdateManagerStatics(std::nullptr_t = nullptr) noexcept {}
        ISystemUpdateManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
