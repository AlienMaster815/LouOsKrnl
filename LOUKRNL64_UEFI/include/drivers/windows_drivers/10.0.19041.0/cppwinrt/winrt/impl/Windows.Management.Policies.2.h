// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Management_Policies_2_H
#define WINRT_Windows_Management_Policies_2_H
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Management.Policies.1.h"
namespace winrt::Windows::Management::Policies
{
    struct NamedPolicy
    {
        NamedPolicy() = delete;
        static auto GetPolicyFromPath(param::hstring const& area, param::hstring const& name);
        static auto GetPolicyFromPathForUser(Windows::System::User const& user, param::hstring const& area, param::hstring const& name);
    };
    struct __declspec(empty_bases) NamedPolicyData : Windows::Management::Policies::INamedPolicyData
    {
        NamedPolicyData(std::nullptr_t) noexcept {}
        NamedPolicyData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Policies::INamedPolicyData(ptr, take_ownership_from_abi) {}
    };
}
#endif
