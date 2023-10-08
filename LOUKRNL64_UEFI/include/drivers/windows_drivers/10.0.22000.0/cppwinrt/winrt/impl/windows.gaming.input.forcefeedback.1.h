// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_Input_ForceFeedback_1_H
#define WINRT_Windows_Gaming_Input_ForceFeedback_1_H
#include "winrt/impl/Windows.Gaming.Input.ForceFeedback.0.h"
WINRT_EXPORT namespace winrt::Windows::Gaming::Input::ForceFeedback
{
    struct __declspec(empty_bases) IConditionForceEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConditionForceEffect>,
        impl::require<Windows::Gaming::Input::ForceFeedback::IConditionForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        IConditionForceEffect(std::nullptr_t = nullptr) noexcept {}
        IConditionForceEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IConditionForceEffectFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConditionForceEffectFactory>
    {
        IConditionForceEffectFactory(std::nullptr_t = nullptr) noexcept {}
        IConditionForceEffectFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IConstantForceEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConstantForceEffect>,
        impl::require<Windows::Gaming::Input::ForceFeedback::IConstantForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        IConstantForceEffect(std::nullptr_t = nullptr) noexcept {}
        IConstantForceEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IForceFeedbackEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IForceFeedbackEffect>
    {
        IForceFeedbackEffect(std::nullptr_t = nullptr) noexcept {}
        IForceFeedbackEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IForceFeedbackMotor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IForceFeedbackMotor>
    {
        IForceFeedbackMotor(std::nullptr_t = nullptr) noexcept {}
        IForceFeedbackMotor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPeriodicForceEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPeriodicForceEffect>,
        impl::require<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        IPeriodicForceEffect(std::nullptr_t = nullptr) noexcept {}
        IPeriodicForceEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPeriodicForceEffectFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPeriodicForceEffectFactory>
    {
        IPeriodicForceEffectFactory(std::nullptr_t = nullptr) noexcept {}
        IPeriodicForceEffectFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRampForceEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRampForceEffect>,
        impl::require<Windows::Gaming::Input::ForceFeedback::IRampForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        IRampForceEffect(std::nullptr_t = nullptr) noexcept {}
        IRampForceEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
