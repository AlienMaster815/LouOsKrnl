// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Composition_Diagnostics_1_H
#define WINRT_Windows_UI_Composition_Diagnostics_1_H
#include "winrt/impl/Windows.UI.Composition.Diagnostics.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Composition::Diagnostics
{
    struct __declspec(empty_bases) ICompositionDebugHeatMaps :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICompositionDebugHeatMaps>
    {
        ICompositionDebugHeatMaps(std::nullptr_t = nullptr) noexcept {}
        ICompositionDebugHeatMaps(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICompositionDebugSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICompositionDebugSettings>
    {
        ICompositionDebugSettings(std::nullptr_t = nullptr) noexcept {}
        ICompositionDebugSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICompositionDebugSettingsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICompositionDebugSettingsStatics>
    {
        ICompositionDebugSettingsStatics(std::nullptr_t = nullptr) noexcept {}
        ICompositionDebugSettingsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
