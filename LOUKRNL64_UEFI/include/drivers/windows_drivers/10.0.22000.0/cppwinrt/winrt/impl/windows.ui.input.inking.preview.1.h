// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Input_Inking_Preview_1_H
#define WINRT_Windows_UI_Input_Inking_Preview_1_H
#include "winrt/impl/Windows.UI.Input.Inking.Preview.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking::Preview
{
    struct __declspec(empty_bases) IPalmRejectionDelayZonePreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPalmRejectionDelayZonePreview>
    {
        IPalmRejectionDelayZonePreview(std::nullptr_t = nullptr) noexcept {}
        IPalmRejectionDelayZonePreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPalmRejectionDelayZonePreviewStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPalmRejectionDelayZonePreviewStatics>
    {
        IPalmRejectionDelayZonePreviewStatics(std::nullptr_t = nullptr) noexcept {}
        IPalmRejectionDelayZonePreviewStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
