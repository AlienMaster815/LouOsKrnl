// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Management_Core_1_H
#define WINRT_Windows_Management_Core_1_H
#include "winrt/impl/Windows.Management.Core.0.h"
namespace winrt::Windows::Management::Core
{
    struct __declspec(empty_bases) IApplicationDataManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IApplicationDataManager>
    {
        IApplicationDataManager(std::nullptr_t = nullptr) noexcept {}
        IApplicationDataManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IApplicationDataManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IApplicationDataManagerStatics>
    {
        IApplicationDataManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IApplicationDataManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
