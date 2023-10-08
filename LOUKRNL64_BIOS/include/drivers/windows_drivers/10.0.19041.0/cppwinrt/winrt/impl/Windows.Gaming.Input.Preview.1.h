// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_Input_Preview_1_H
#define WINRT_Windows_Gaming_Input_Preview_1_H
#include "winrt/impl/Windows.Gaming.Input.Preview.0.h"
namespace winrt::Windows::Gaming::Input::Preview
{
    struct __declspec(empty_bases) IGameControllerProviderInfoStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGameControllerProviderInfoStatics>
    {
        IGameControllerProviderInfoStatics(std::nullptr_t = nullptr) noexcept {}
        IGameControllerProviderInfoStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
