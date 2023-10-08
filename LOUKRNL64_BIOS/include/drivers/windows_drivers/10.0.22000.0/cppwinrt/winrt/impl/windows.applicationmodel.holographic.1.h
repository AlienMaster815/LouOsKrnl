// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Holographic_1_H
#define WINRT_Windows_ApplicationModel_Holographic_1_H
#include "winrt/impl/Windows.ApplicationModel.Holographic.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Holographic
{
    struct __declspec(empty_bases) IHolographicKeyboard :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHolographicKeyboard>
    {
        IHolographicKeyboard(std::nullptr_t = nullptr) noexcept {}
        IHolographicKeyboard(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHolographicKeyboardStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHolographicKeyboardStatics>
    {
        IHolographicKeyboardStatics(std::nullptr_t = nullptr) noexcept {}
        IHolographicKeyboardStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
