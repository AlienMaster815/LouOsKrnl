// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Composition_Effects_1_H
#define WINRT_Windows_UI_Composition_Effects_1_H
#include "winrt/impl/Windows.UI.Composition.Effects.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Composition::Effects
{
    struct __declspec(empty_bases) ISceneLightingEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISceneLightingEffect>
    {
        ISceneLightingEffect(std::nullptr_t = nullptr) noexcept {}
        ISceneLightingEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISceneLightingEffect2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISceneLightingEffect2>
    {
        ISceneLightingEffect2(std::nullptr_t = nullptr) noexcept {}
        ISceneLightingEffect2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
