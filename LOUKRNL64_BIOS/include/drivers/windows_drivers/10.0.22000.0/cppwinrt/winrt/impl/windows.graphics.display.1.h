// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Display_1_H
#define WINRT_Windows_Graphics_Display_1_H
#include "winrt/impl/Windows.Graphics.Display.0.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Display
{
    struct __declspec(empty_bases) IAdvancedColorInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdvancedColorInfo>
    {
        IAdvancedColorInfo(std::nullptr_t = nullptr) noexcept {}
        IAdvancedColorInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBrightnessOverride :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBrightnessOverride>
    {
        IBrightnessOverride(std::nullptr_t = nullptr) noexcept {}
        IBrightnessOverride(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBrightnessOverrideSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBrightnessOverrideSettings>
    {
        IBrightnessOverrideSettings(std::nullptr_t = nullptr) noexcept {}
        IBrightnessOverrideSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBrightnessOverrideSettingsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBrightnessOverrideSettingsStatics>
    {
        IBrightnessOverrideSettingsStatics(std::nullptr_t = nullptr) noexcept {}
        IBrightnessOverrideSettingsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBrightnessOverrideStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBrightnessOverrideStatics>
    {
        IBrightnessOverrideStatics(std::nullptr_t = nullptr) noexcept {}
        IBrightnessOverrideStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IColorOverrideSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IColorOverrideSettings>
    {
        IColorOverrideSettings(std::nullptr_t = nullptr) noexcept {}
        IColorOverrideSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IColorOverrideSettingsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IColorOverrideSettingsStatics>
    {
        IColorOverrideSettingsStatics(std::nullptr_t = nullptr) noexcept {}
        IColorOverrideSettingsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayEnhancementOverride :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayEnhancementOverride>
    {
        IDisplayEnhancementOverride(std::nullptr_t = nullptr) noexcept {}
        IDisplayEnhancementOverride(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayEnhancementOverrideCapabilities :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayEnhancementOverrideCapabilities>
    {
        IDisplayEnhancementOverrideCapabilities(std::nullptr_t = nullptr) noexcept {}
        IDisplayEnhancementOverrideCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayEnhancementOverrideCapabilitiesChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayEnhancementOverrideCapabilitiesChangedEventArgs>
    {
        IDisplayEnhancementOverrideCapabilitiesChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDisplayEnhancementOverrideCapabilitiesChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayEnhancementOverrideStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayEnhancementOverrideStatics>
    {
        IDisplayEnhancementOverrideStatics(std::nullptr_t = nullptr) noexcept {}
        IDisplayEnhancementOverrideStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayInformation>
    {
        IDisplayInformation(std::nullptr_t = nullptr) noexcept {}
        IDisplayInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayInformation2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayInformation2>,
        impl::require<Windows::Graphics::Display::IDisplayInformation2, Windows::Graphics::Display::IDisplayInformation>
    {
        IDisplayInformation2(std::nullptr_t = nullptr) noexcept {}
        IDisplayInformation2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayInformation3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayInformation3>
    {
        IDisplayInformation3(std::nullptr_t = nullptr) noexcept {}
        IDisplayInformation3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayInformation4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayInformation4>
    {
        IDisplayInformation4(std::nullptr_t = nullptr) noexcept {}
        IDisplayInformation4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayInformation5 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayInformation5>
    {
        IDisplayInformation5(std::nullptr_t = nullptr) noexcept {}
        IDisplayInformation5(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayInformationStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayInformationStatics>
    {
        IDisplayInformationStatics(std::nullptr_t = nullptr) noexcept {}
        IDisplayInformationStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayPropertiesStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayPropertiesStatics>
    {
        IDisplayPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
        IDisplayPropertiesStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayServices :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayServices>
    {
        IDisplayServices(std::nullptr_t = nullptr) noexcept {}
        IDisplayServices(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayServicesStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayServicesStatics>
    {
        IDisplayServicesStatics(std::nullptr_t = nullptr) noexcept {}
        IDisplayServicesStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
