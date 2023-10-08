// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Composition_Effects_2_H
#define WINRT_Windows_UI_Composition_Effects_2_H
#include "winrt/impl/Windows.Graphics.Effects.1.h"
#include "winrt/impl/Windows.UI.Composition.Effects.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Composition::Effects
{
    struct __declspec(empty_bases) SceneLightingEffect : Windows::UI::Composition::Effects::ISceneLightingEffect,
        impl::require<SceneLightingEffect, Windows::UI::Composition::Effects::ISceneLightingEffect2, Windows::Graphics::Effects::IGraphicsEffectSource, Windows::Graphics::Effects::IGraphicsEffect>
    {
        SceneLightingEffect(std::nullptr_t) noexcept {}
        SceneLightingEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Effects::ISceneLightingEffect(ptr, take_ownership_from_abi) {}
        SceneLightingEffect();
    };
}
#endif
