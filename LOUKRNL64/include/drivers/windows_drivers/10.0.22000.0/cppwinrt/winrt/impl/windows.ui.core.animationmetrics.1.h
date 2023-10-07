// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Core_AnimationMetrics_1_H
#define WINRT_Windows_UI_Core_AnimationMetrics_1_H
#include "winrt/impl/Windows.UI.Core.AnimationMetrics.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Core::AnimationMetrics
{
    struct __declspec(empty_bases) IAnimationDescription :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAnimationDescription>
    {
        IAnimationDescription(std::nullptr_t = nullptr) noexcept {}
        IAnimationDescription(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAnimationDescriptionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAnimationDescriptionFactory>
    {
        IAnimationDescriptionFactory(std::nullptr_t = nullptr) noexcept {}
        IAnimationDescriptionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IOpacityAnimation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOpacityAnimation>,
        impl::require<Windows::UI::Core::AnimationMetrics::IOpacityAnimation, Windows::UI::Core::AnimationMetrics::IPropertyAnimation>
    {
        IOpacityAnimation(std::nullptr_t = nullptr) noexcept {}
        IOpacityAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPropertyAnimation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPropertyAnimation>
    {
        IPropertyAnimation(std::nullptr_t = nullptr) noexcept {}
        IPropertyAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IScaleAnimation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IScaleAnimation>,
        impl::require<Windows::UI::Core::AnimationMetrics::IScaleAnimation, Windows::UI::Core::AnimationMetrics::IPropertyAnimation>
    {
        IScaleAnimation(std::nullptr_t = nullptr) noexcept {}
        IScaleAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
