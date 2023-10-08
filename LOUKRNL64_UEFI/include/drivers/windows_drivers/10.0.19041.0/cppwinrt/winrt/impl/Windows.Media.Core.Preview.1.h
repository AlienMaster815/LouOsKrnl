// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Core_Preview_1_H
#define WINRT_Windows_Media_Core_Preview_1_H
#include "winrt/impl/Windows.Media.Core.Preview.0.h"
namespace winrt::Windows::Media::Core::Preview
{
    struct __declspec(empty_bases) ISoundLevelBrokerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISoundLevelBrokerStatics>
    {
        ISoundLevelBrokerStatics(std::nullptr_t = nullptr) noexcept {}
        ISoundLevelBrokerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
