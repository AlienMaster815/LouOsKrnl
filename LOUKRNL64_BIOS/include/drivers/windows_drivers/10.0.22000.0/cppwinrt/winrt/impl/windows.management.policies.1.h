// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Management_Policies_1_H
#define WINRT_Windows_Management_Policies_1_H
#include "winrt/impl/Windows.Management.Policies.0.h"
WINRT_EXPORT namespace winrt::Windows::Management::Policies
{
    struct __declspec(empty_bases) INamedPolicyData :
        Windows::Foundation::IInspectable,
        impl::consume_t<INamedPolicyData>
    {
        INamedPolicyData(std::nullptr_t = nullptr) noexcept {}
        INamedPolicyData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INamedPolicyStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<INamedPolicyStatics>
    {
        INamedPolicyStatics(std::nullptr_t = nullptr) noexcept {}
        INamedPolicyStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
