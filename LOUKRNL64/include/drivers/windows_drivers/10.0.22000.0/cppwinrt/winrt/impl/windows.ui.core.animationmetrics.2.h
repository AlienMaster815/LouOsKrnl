// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Core_AnimationMetrics_2_H
#define WINRT_Windows_UI_Core_AnimationMetrics_2_H
#include "winrt/impl/Windows.UI.Core.AnimationMetrics.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Core::AnimationMetrics
{
    struct __declspec(empty_bases) AnimationDescription : Windows::UI::Core::AnimationMetrics::IAnimationDescription
    {
        AnimationDescription(std::nullptr_t) noexcept {}
        AnimationDescription(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::AnimationMetrics::IAnimationDescription(ptr, take_ownership_from_abi) {}
        AnimationDescription(Windows::UI::Core::AnimationMetrics::AnimationEffect const& effect, Windows::UI::Core::AnimationMetrics::AnimationEffectTarget const& target);
    };
    struct __declspec(empty_bases) OpacityAnimation : Windows::UI::Core::AnimationMetrics::IOpacityAnimation
    {
        OpacityAnimation(std::nullptr_t) noexcept {}
        OpacityAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::AnimationMetrics::IOpacityAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PropertyAnimation : Windows::UI::Core::AnimationMetrics::IPropertyAnimation
    {
        PropertyAnimation(std::nullptr_t) noexcept {}
        PropertyAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::AnimationMetrics::IPropertyAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ScaleAnimation : Windows::UI::Core::AnimationMetrics::IScaleAnimation
    {
        ScaleAnimation(std::nullptr_t) noexcept {}
        ScaleAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::AnimationMetrics::IScaleAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TranslationAnimation : Windows::UI::Core::AnimationMetrics::IPropertyAnimation
    {
        TranslationAnimation(std::nullptr_t) noexcept {}
        TranslationAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::AnimationMetrics::IPropertyAnimation(ptr, take_ownership_from_abi) {}
    };
}
#endif
