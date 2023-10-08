// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Perception_1_H
#define WINRT_Windows_Perception_1_H
#include "winrt/impl/Windows.Perception.0.h"
namespace winrt::Windows::Perception
{
    struct __declspec(empty_bases) IPerceptionTimestamp :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionTimestamp>
    {
        IPerceptionTimestamp(std::nullptr_t = nullptr) noexcept {}
        IPerceptionTimestamp(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionTimestamp2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionTimestamp2>
    {
        IPerceptionTimestamp2(std::nullptr_t = nullptr) noexcept {}
        IPerceptionTimestamp2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionTimestampHelperStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionTimestampHelperStatics>
    {
        IPerceptionTimestampHelperStatics(std::nullptr_t = nullptr) noexcept {}
        IPerceptionTimestampHelperStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionTimestampHelperStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionTimestampHelperStatics2>
    {
        IPerceptionTimestampHelperStatics2(std::nullptr_t = nullptr) noexcept {}
        IPerceptionTimestampHelperStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
