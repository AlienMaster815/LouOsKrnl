// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Display_0_H
#define WINRT_Windows_Graphics_Display_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct Point;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Graphics::Display
{
    enum class AdvancedColorKind : int32_t
    {
        StandardDynamicRange = 0,
        WideColorGamut = 1,
        HighDynamicRange = 2,
    };
    enum class DisplayBrightnessOverrideOptions : uint32_t
    {
        None = 0,
        UseDimmedPolicyWhenBatteryIsLow = 0x1,
    };
    enum class DisplayBrightnessOverrideScenario : int32_t
    {
        IdleBrightness = 0,
        BarcodeReadingBrightness = 1,
        FullBrightness = 2,
    };
    enum class DisplayBrightnessScenario : int32_t
    {
        DefaultBrightness = 0,
        IdleBrightness = 1,
        BarcodeReadingBrightness = 2,
        FullBrightness = 3,
    };
    enum class DisplayColorOverrideScenario : int32_t
    {
        Accurate = 0,
    };
    enum class DisplayOrientations : uint32_t
    {
        None = 0,
        Landscape = 0x1,
        Portrait = 0x2,
        LandscapeFlipped = 0x4,
        PortraitFlipped = 0x8,
    };
    enum class HdrMetadataFormat : int32_t
    {
        Hdr10 = 0,
        Hdr10Plus = 1,
    };
    enum class ResolutionScale : int32_t
    {
        Invalid = 0,
        Scale100Percent = 100,
        Scale120Percent = 120,
        Scale125Percent = 125,
        Scale140Percent = 140,
        Scale150Percent = 150,
        Scale160Percent = 160,
        Scale175Percent = 175,
        Scale180Percent = 180,
        Scale200Percent = 200,
        Scale225Percent = 225,
        Scale250Percent = 250,
        Scale300Percent = 300,
        Scale350Percent = 350,
        Scale400Percent = 400,
        Scale450Percent = 450,
        Scale500Percent = 500,
    };
    struct IAdvancedColorInfo;
    struct IBrightnessOverride;
    struct IBrightnessOverrideSettings;
    struct IBrightnessOverrideSettingsStatics;
    struct IBrightnessOverrideStatics;
    struct IColorOverrideSettings;
    struct IColorOverrideSettingsStatics;
    struct IDisplayEnhancementOverride;
    struct IDisplayEnhancementOverrideCapabilities;
    struct IDisplayEnhancementOverrideCapabilitiesChangedEventArgs;
    struct IDisplayEnhancementOverrideStatics;
    struct IDisplayInformation;
    struct IDisplayInformation2;
    struct IDisplayInformation3;
    struct IDisplayInformation4;
    struct IDisplayInformation5;
    struct IDisplayInformationStatics;
    struct IDisplayPropertiesStatics;
    struct AdvancedColorInfo;
    struct BrightnessOverride;
    struct BrightnessOverrideSettings;
    struct ColorOverrideSettings;
    struct DisplayEnhancementOverride;
    struct DisplayEnhancementOverrideCapabilities;
    struct DisplayEnhancementOverrideCapabilitiesChangedEventArgs;
    struct DisplayInformation;
    struct DisplayProperties;
    struct NitRange;
    struct DisplayPropertiesEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::Graphics::Display::IAdvancedColorInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::IBrightnessOverride>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::IBrightnessOverrideSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::IBrightnessOverrideSettingsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::IBrightnessOverrideStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::IColorOverrideSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::IColorOverrideSettingsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::IDisplayEnhancementOverride>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::IDisplayEnhancementOverrideStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::IDisplayInformation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::IDisplayInformation2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::IDisplayInformation3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::IDisplayInformation4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::IDisplayInformation5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::IDisplayInformationStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::IDisplayPropertiesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::AdvancedColorInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Display::BrightnessOverride>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Display::BrightnessOverrideSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Display::ColorOverrideSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Display::DisplayEnhancementOverride>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Display::DisplayEnhancementOverrideCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Display::DisplayEnhancementOverrideCapabilitiesChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Display::DisplayInformation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Display::DisplayProperties>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Display::AdvancedColorKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Display::DisplayBrightnessOverrideOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Display::DisplayBrightnessOverrideScenario>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Display::DisplayBrightnessScenario>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Display::DisplayColorOverrideScenario>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Display::DisplayOrientations>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Display::HdrMetadataFormat>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Display::ResolutionScale>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Display::NitRange>
    {
        using type = struct_category<float, float, float>;
    };
    template <> struct category<Windows::Graphics::Display::DisplayPropertiesEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct name<Windows::Graphics::Display::IAdvancedColorInfo>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.IAdvancedColorInfo" };
    };
    template <> struct name<Windows::Graphics::Display::IBrightnessOverride>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.IBrightnessOverride" };
    };
    template <> struct name<Windows::Graphics::Display::IBrightnessOverrideSettings>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.IBrightnessOverrideSettings" };
    };
    template <> struct name<Windows::Graphics::Display::IBrightnessOverrideSettingsStatics>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.IBrightnessOverrideSettingsStatics" };
    };
    template <> struct name<Windows::Graphics::Display::IBrightnessOverrideStatics>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.IBrightnessOverrideStatics" };
    };
    template <> struct name<Windows::Graphics::Display::IColorOverrideSettings>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.IColorOverrideSettings" };
    };
    template <> struct name<Windows::Graphics::Display::IColorOverrideSettingsStatics>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.IColorOverrideSettingsStatics" };
    };
    template <> struct name<Windows::Graphics::Display::IDisplayEnhancementOverride>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.IDisplayEnhancementOverride" };
    };
    template <> struct name<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.IDisplayEnhancementOverrideCapabilities" };
    };
    template <> struct name<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.IDisplayEnhancementOverrideCapabilitiesChangedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Display::IDisplayEnhancementOverrideStatics>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.IDisplayEnhancementOverrideStatics" };
    };
    template <> struct name<Windows::Graphics::Display::IDisplayInformation>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.IDisplayInformation" };
    };
    template <> struct name<Windows::Graphics::Display::IDisplayInformation2>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.IDisplayInformation2" };
    };
    template <> struct name<Windows::Graphics::Display::IDisplayInformation3>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.IDisplayInformation3" };
    };
    template <> struct name<Windows::Graphics::Display::IDisplayInformation4>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.IDisplayInformation4" };
    };
    template <> struct name<Windows::Graphics::Display::IDisplayInformation5>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.IDisplayInformation5" };
    };
    template <> struct name<Windows::Graphics::Display::IDisplayInformationStatics>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.IDisplayInformationStatics" };
    };
    template <> struct name<Windows::Graphics::Display::IDisplayPropertiesStatics>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.IDisplayPropertiesStatics" };
    };
    template <> struct name<Windows::Graphics::Display::AdvancedColorInfo>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.AdvancedColorInfo" };
    };
    template <> struct name<Windows::Graphics::Display::BrightnessOverride>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.BrightnessOverride" };
    };
    template <> struct name<Windows::Graphics::Display::BrightnessOverrideSettings>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.BrightnessOverrideSettings" };
    };
    template <> struct name<Windows::Graphics::Display::ColorOverrideSettings>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.ColorOverrideSettings" };
    };
    template <> struct name<Windows::Graphics::Display::DisplayEnhancementOverride>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.DisplayEnhancementOverride" };
    };
    template <> struct name<Windows::Graphics::Display::DisplayEnhancementOverrideCapabilities>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.DisplayEnhancementOverrideCapabilities" };
    };
    template <> struct name<Windows::Graphics::Display::DisplayEnhancementOverrideCapabilitiesChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.DisplayEnhancementOverrideCapabilitiesChangedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Display::DisplayInformation>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.DisplayInformation" };
    };
    template <> struct name<Windows::Graphics::Display::DisplayProperties>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.DisplayProperties" };
    };
    template <> struct name<Windows::Graphics::Display::AdvancedColorKind>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.AdvancedColorKind" };
    };
    template <> struct name<Windows::Graphics::Display::DisplayBrightnessOverrideOptions>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.DisplayBrightnessOverrideOptions" };
    };
    template <> struct name<Windows::Graphics::Display::DisplayBrightnessOverrideScenario>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.DisplayBrightnessOverrideScenario" };
    };
    template <> struct name<Windows::Graphics::Display::DisplayBrightnessScenario>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.DisplayBrightnessScenario" };
    };
    template <> struct name<Windows::Graphics::Display::DisplayColorOverrideScenario>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.DisplayColorOverrideScenario" };
    };
    template <> struct name<Windows::Graphics::Display::DisplayOrientations>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.DisplayOrientations" };
    };
    template <> struct name<Windows::Graphics::Display::HdrMetadataFormat>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.HdrMetadataFormat" };
    };
    template <> struct name<Windows::Graphics::Display::ResolutionScale>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.ResolutionScale" };
    };
    template <> struct name<Windows::Graphics::Display::NitRange>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.NitRange" };
    };
    template <> struct name<Windows::Graphics::Display::DisplayPropertiesEventHandler>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.DisplayPropertiesEventHandler" };
    };
    template <> struct guid_storage<Windows::Graphics::Display::IAdvancedColorInfo>
    {
        static constexpr guid value{ 0x8797DCFB,0xB229,0x4081,{ 0xAE,0x9A,0x2C,0xC8,0x5E,0x34,0xAD,0x6A } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::IBrightnessOverride>
    {
        static constexpr guid value{ 0x96C9621A,0xC143,0x4392,{ 0xBE,0xDD,0x4A,0x7E,0x95,0x74,0xC8,0xFD } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::IBrightnessOverrideSettings>
    {
        static constexpr guid value{ 0xD112AB2A,0x7604,0x4DBA,{ 0xBC,0xF8,0x4B,0x6F,0x49,0x50,0x2C,0xB0 } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::IBrightnessOverrideSettingsStatics>
    {
        static constexpr guid value{ 0xD487DC90,0x6F74,0x440B,{ 0xB3,0x83,0x5F,0xE9,0x6C,0xF0,0x0B,0x0F } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::IBrightnessOverrideStatics>
    {
        static constexpr guid value{ 0x03A7B9ED,0xE1F1,0x4A68,{ 0xA1,0x1F,0x94,0x6A,0xD8,0xCE,0x53,0x93 } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::IColorOverrideSettings>
    {
        static constexpr guid value{ 0xFBEFA134,0x4A81,0x4C4D,{ 0xA5,0xB6,0x7D,0x1B,0x5C,0x4B,0xD0,0x0B } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::IColorOverrideSettingsStatics>
    {
        static constexpr guid value{ 0xB068E05F,0xC41F,0x4AC9,{ 0xAF,0xAB,0x82,0x7A,0xB6,0x24,0x8F,0x9A } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::IDisplayEnhancementOverride>
    {
        static constexpr guid value{ 0x429594CF,0xD97A,0x4B02,{ 0xA4,0x28,0x5C,0x42,0x92,0xF7,0xF5,0x22 } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities>
    {
        static constexpr guid value{ 0x457060DE,0xEE5A,0x47B7,{ 0x99,0x18,0x1E,0x51,0xE8,0x12,0xCC,0xC8 } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs>
    {
        static constexpr guid value{ 0xDB61E664,0x15FA,0x49DA,{ 0x8B,0x77,0x07,0xDB,0xD2,0xAF,0x58,0x5D } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::IDisplayEnhancementOverrideStatics>
    {
        static constexpr guid value{ 0xCF5B7EC1,0x9791,0x4453,{ 0xB0,0x13,0x29,0xB6,0xF7,0x78,0xE5,0x19 } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::IDisplayInformation>
    {
        static constexpr guid value{ 0xBED112AE,0xADC3,0x4DC9,{ 0xAE,0x65,0x85,0x1F,0x4D,0x7D,0x47,0x99 } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::IDisplayInformation2>
    {
        static constexpr guid value{ 0x4DCD0021,0xFAD1,0x4B8E,{ 0x8E,0xDF,0x77,0x58,0x87,0xB8,0xBF,0x19 } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::IDisplayInformation3>
    {
        static constexpr guid value{ 0xDB15011D,0x0F09,0x4466,{ 0x8F,0xF3,0x11,0xDE,0x9A,0x3C,0x92,0x9A } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::IDisplayInformation4>
    {
        static constexpr guid value{ 0xC972CE2F,0x1242,0x46BE,{ 0xB5,0x36,0xE1,0xAA,0xFE,0x9E,0x7A,0xCF } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::IDisplayInformation5>
    {
        static constexpr guid value{ 0x3A5442DC,0x2CDE,0x4A8D,{ 0x80,0xD1,0x21,0xDC,0x5A,0xDC,0xC1,0xAA } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::IDisplayInformationStatics>
    {
        static constexpr guid value{ 0xC6A02A6C,0xD452,0x44DC,{ 0xBA,0x07,0x96,0xF3,0xC6,0xAD,0xF9,0xD1 } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::IDisplayPropertiesStatics>
    {
        static constexpr guid value{ 0x6937ED8D,0x30EA,0x4DED,{ 0x82,0x71,0x45,0x53,0xFF,0x02,0xF6,0x8A } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::DisplayPropertiesEventHandler>
    {
        static constexpr guid value{ 0xDBDD8B01,0xF1A1,0x46D1,{ 0x9E,0xE3,0x54,0x3B,0xCC,0x99,0x59,0x80 } };
    };
    template <> struct default_interface<Windows::Graphics::Display::AdvancedColorInfo>
    {
        using type = Windows::Graphics::Display::IAdvancedColorInfo;
    };
    template <> struct default_interface<Windows::Graphics::Display::BrightnessOverride>
    {
        using type = Windows::Graphics::Display::IBrightnessOverride;
    };
    template <> struct default_interface<Windows::Graphics::Display::BrightnessOverrideSettings>
    {
        using type = Windows::Graphics::Display::IBrightnessOverrideSettings;
    };
    template <> struct default_interface<Windows::Graphics::Display::ColorOverrideSettings>
    {
        using type = Windows::Graphics::Display::IColorOverrideSettings;
    };
    template <> struct default_interface<Windows::Graphics::Display::DisplayEnhancementOverride>
    {
        using type = Windows::Graphics::Display::IDisplayEnhancementOverride;
    };
    template <> struct default_interface<Windows::Graphics::Display::DisplayEnhancementOverrideCapabilities>
    {
        using type = Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities;
    };
    template <> struct default_interface<Windows::Graphics::Display::DisplayEnhancementOverrideCapabilitiesChangedEventArgs>
    {
        using type = Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs;
    };
    template <> struct default_interface<Windows::Graphics::Display::DisplayInformation>
    {
        using type = Windows::Graphics::Display::IDisplayInformation;
    };
    template <> struct abi<Windows::Graphics::Display::IAdvancedColorInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentAdvancedColorKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RedPrimary(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_GreenPrimary(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_BluePrimary(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_WhitePoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_MaxLuminanceInNits(float*) noexcept = 0;
            virtual int32_t __stdcall get_MinLuminanceInNits(float*) noexcept = 0;
            virtual int32_t __stdcall get_MaxAverageFullFrameLuminanceInNits(float*) noexcept = 0;
            virtual int32_t __stdcall get_SdrWhiteLevelInNits(float*) noexcept = 0;
            virtual int32_t __stdcall IsHdrMetadataFormatCurrentlySupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall IsAdvancedColorKindAvailable(int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IBrightnessOverride>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsOverrideActive(bool*) noexcept = 0;
            virtual int32_t __stdcall get_BrightnessLevel(double*) noexcept = 0;
            virtual int32_t __stdcall SetBrightnessLevel(double, uint32_t) noexcept = 0;
            virtual int32_t __stdcall SetBrightnessScenario(int32_t, uint32_t) noexcept = 0;
            virtual int32_t __stdcall GetLevelForScenario(int32_t, double*) noexcept = 0;
            virtual int32_t __stdcall StartOverride() noexcept = 0;
            virtual int32_t __stdcall StopOverride() noexcept = 0;
            virtual int32_t __stdcall add_IsSupportedChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsSupportedChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_IsOverrideActiveChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsOverrideActiveChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BrightnessLevelChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BrightnessLevelChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IBrightnessOverrideSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesiredLevel(double*) noexcept = 0;
            virtual int32_t __stdcall get_DesiredNits(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IBrightnessOverrideSettingsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromLevel(double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromNits(float, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromDisplayBrightnessOverrideScenario(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IBrightnessOverrideStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultForSystem(void**) noexcept = 0;
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall SaveForSystemAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IColorOverrideSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesiredDisplayColorOverrideScenario(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IColorOverrideSettingsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromDisplayColorOverrideScenario(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayEnhancementOverride>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ColorOverrideSettings(void**) noexcept = 0;
            virtual int32_t __stdcall put_ColorOverrideSettings(void*) noexcept = 0;
            virtual int32_t __stdcall get_BrightnessOverrideSettings(void**) noexcept = 0;
            virtual int32_t __stdcall put_BrightnessOverrideSettings(void*) noexcept = 0;
            virtual int32_t __stdcall get_CanOverride(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsOverrideActive(bool*) noexcept = 0;
            virtual int32_t __stdcall GetCurrentDisplayEnhancementOverrideCapabilities(void**) noexcept = 0;
            virtual int32_t __stdcall RequestOverride() noexcept = 0;
            virtual int32_t __stdcall StopOverride() noexcept = 0;
            virtual int32_t __stdcall add_CanOverrideChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CanOverrideChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_IsOverrideActiveChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsOverrideActiveChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DisplayEnhancementOverrideCapabilitiesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DisplayEnhancementOverrideCapabilitiesChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsBrightnessControlSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsBrightnessNitsControlSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall GetSupportedNitRanges(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Capabilities(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayEnhancementOverrideStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentOrientation(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NativeOrientation(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_OrientationChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OrientationChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_ResolutionScale(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LogicalDpi(float*) noexcept = 0;
            virtual int32_t __stdcall get_RawDpiX(float*) noexcept = 0;
            virtual int32_t __stdcall get_RawDpiY(float*) noexcept = 0;
            virtual int32_t __stdcall add_DpiChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DpiChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_StereoEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall add_StereoEnabledChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StereoEnabledChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetColorProfileAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_ColorProfileChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ColorProfileChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayInformation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RawPixelsPerViewPixel(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayInformation3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DiagonalSizeInInches(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayInformation4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ScreenWidthInRawPixels(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ScreenHeightInRawPixels(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayInformation5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAdvancedColorInfo(void**) noexcept = 0;
            virtual int32_t __stdcall add_AdvancedColorInfoChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AdvancedColorInfoChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayInformationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall get_AutoRotationPreferences(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AutoRotationPreferences(uint32_t) noexcept = 0;
            virtual int32_t __stdcall add_DisplayContentsInvalidated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DisplayContentsInvalidated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayPropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentOrientation(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NativeOrientation(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AutoRotationPreferences(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AutoRotationPreferences(uint32_t) noexcept = 0;
            virtual int32_t __stdcall add_OrientationChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OrientationChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_ResolutionScale(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LogicalDpi(float*) noexcept = 0;
            virtual int32_t __stdcall add_LogicalDpiChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LogicalDpiChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_StereoEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall add_StereoEnabledChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StereoEnabledChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetColorProfileAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_ColorProfileChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ColorProfileChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DisplayContentsInvalidated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DisplayContentsInvalidated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::DisplayPropertiesEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IAdvancedColorInfo
    {
        [[nodiscard]] auto CurrentAdvancedColorKind() const;
        [[nodiscard]] auto RedPrimary() const;
        [[nodiscard]] auto GreenPrimary() const;
        [[nodiscard]] auto BluePrimary() const;
        [[nodiscard]] auto WhitePoint() const;
        [[nodiscard]] auto MaxLuminanceInNits() const;
        [[nodiscard]] auto MinLuminanceInNits() const;
        [[nodiscard]] auto MaxAverageFullFrameLuminanceInNits() const;
        [[nodiscard]] auto SdrWhiteLevelInNits() const;
        auto IsHdrMetadataFormatCurrentlySupported(Windows::Graphics::Display::HdrMetadataFormat const& format) const;
        auto IsAdvancedColorKindAvailable(Windows::Graphics::Display::AdvancedColorKind const& kind) const;
    };
    template <> struct consume<Windows::Graphics::Display::IAdvancedColorInfo>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IAdvancedColorInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IBrightnessOverride
    {
        [[nodiscard]] auto IsSupported() const;
        [[nodiscard]] auto IsOverrideActive() const;
        [[nodiscard]] auto BrightnessLevel() const;
        auto SetBrightnessLevel(double brightnessLevel, Windows::Graphics::Display::DisplayBrightnessOverrideOptions const& options) const;
        auto SetBrightnessScenario(Windows::Graphics::Display::DisplayBrightnessScenario const& scenario, Windows::Graphics::Display::DisplayBrightnessOverrideOptions const& options) const;
        auto GetLevelForScenario(Windows::Graphics::Display::DisplayBrightnessScenario const& scenario) const;
        auto StartOverride() const;
        auto StopOverride() const;
        auto IsSupportedChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const;
        using IsSupportedChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IBrightnessOverride, &impl::abi_t<Windows::Graphics::Display::IBrightnessOverride>::remove_IsSupportedChanged>;
        IsSupportedChanged_revoker IsSupportedChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const;
        auto IsSupportedChanged(winrt::event_token const& token) const noexcept;
        auto IsOverrideActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const;
        using IsOverrideActiveChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IBrightnessOverride, &impl::abi_t<Windows::Graphics::Display::IBrightnessOverride>::remove_IsOverrideActiveChanged>;
        IsOverrideActiveChanged_revoker IsOverrideActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const;
        auto IsOverrideActiveChanged(winrt::event_token const& token) const noexcept;
        auto BrightnessLevelChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const;
        using BrightnessLevelChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IBrightnessOverride, &impl::abi_t<Windows::Graphics::Display::IBrightnessOverride>::remove_BrightnessLevelChanged>;
        BrightnessLevelChanged_revoker BrightnessLevelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const;
        auto BrightnessLevelChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Display::IBrightnessOverride>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IBrightnessOverride<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IBrightnessOverrideSettings
    {
        [[nodiscard]] auto DesiredLevel() const;
        [[nodiscard]] auto DesiredNits() const;
    };
    template <> struct consume<Windows::Graphics::Display::IBrightnessOverrideSettings>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IBrightnessOverrideSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IBrightnessOverrideSettingsStatics
    {
        auto CreateFromLevel(double level) const;
        auto CreateFromNits(float nits) const;
        auto CreateFromDisplayBrightnessOverrideScenario(Windows::Graphics::Display::DisplayBrightnessOverrideScenario const& overrideScenario) const;
    };
    template <> struct consume<Windows::Graphics::Display::IBrightnessOverrideSettingsStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IBrightnessOverrideSettingsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IBrightnessOverrideStatics
    {
        auto GetDefaultForSystem() const;
        auto GetForCurrentView() const;
        auto SaveForSystemAsync(Windows::Graphics::Display::BrightnessOverride const& value) const;
    };
    template <> struct consume<Windows::Graphics::Display::IBrightnessOverrideStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IBrightnessOverrideStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IColorOverrideSettings
    {
        [[nodiscard]] auto DesiredDisplayColorOverrideScenario() const;
    };
    template <> struct consume<Windows::Graphics::Display::IColorOverrideSettings>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IColorOverrideSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IColorOverrideSettingsStatics
    {
        auto CreateFromDisplayColorOverrideScenario(Windows::Graphics::Display::DisplayColorOverrideScenario const& overrideScenario) const;
    };
    template <> struct consume<Windows::Graphics::Display::IColorOverrideSettingsStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IColorOverrideSettingsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayEnhancementOverride
    {
        [[nodiscard]] auto ColorOverrideSettings() const;
        auto ColorOverrideSettings(Windows::Graphics::Display::ColorOverrideSettings const& value) const;
        [[nodiscard]] auto BrightnessOverrideSettings() const;
        auto BrightnessOverrideSettings(Windows::Graphics::Display::BrightnessOverrideSettings const& value) const;
        [[nodiscard]] auto CanOverride() const;
        [[nodiscard]] auto IsOverrideActive() const;
        auto GetCurrentDisplayEnhancementOverrideCapabilities() const;
        auto RequestOverride() const;
        auto StopOverride() const;
        auto CanOverrideChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Foundation::IInspectable> const& handler) const;
        using CanOverrideChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayEnhancementOverride, &impl::abi_t<Windows::Graphics::Display::IDisplayEnhancementOverride>::remove_CanOverrideChanged>;
        CanOverrideChanged_revoker CanOverrideChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Foundation::IInspectable> const& handler) const;
        auto CanOverrideChanged(winrt::event_token const& token) const noexcept;
        auto IsOverrideActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Foundation::IInspectable> const& handler) const;
        using IsOverrideActiveChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayEnhancementOverride, &impl::abi_t<Windows::Graphics::Display::IDisplayEnhancementOverride>::remove_IsOverrideActiveChanged>;
        IsOverrideActiveChanged_revoker IsOverrideActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Foundation::IInspectable> const& handler) const;
        auto IsOverrideActiveChanged(winrt::event_token const& token) const noexcept;
        auto DisplayEnhancementOverrideCapabilitiesChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Graphics::Display::DisplayEnhancementOverrideCapabilitiesChangedEventArgs> const& handler) const;
        using DisplayEnhancementOverrideCapabilitiesChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayEnhancementOverride, &impl::abi_t<Windows::Graphics::Display::IDisplayEnhancementOverride>::remove_DisplayEnhancementOverrideCapabilitiesChanged>;
        DisplayEnhancementOverrideCapabilitiesChanged_revoker DisplayEnhancementOverrideCapabilitiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Graphics::Display::DisplayEnhancementOverrideCapabilitiesChangedEventArgs> const& handler) const;
        auto DisplayEnhancementOverrideCapabilitiesChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayEnhancementOverride>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayEnhancementOverrideCapabilities
    {
        [[nodiscard]] auto IsBrightnessControlSupported() const;
        [[nodiscard]] auto IsBrightnessNitsControlSupported() const;
        auto GetSupportedNitRanges() const;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayEnhancementOverrideCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayEnhancementOverrideCapabilitiesChangedEventArgs
    {
        [[nodiscard]] auto Capabilities() const;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayEnhancementOverrideCapabilitiesChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayEnhancementOverrideStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayEnhancementOverrideStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayEnhancementOverrideStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayInformation
    {
        [[nodiscard]] auto CurrentOrientation() const;
        [[nodiscard]] auto NativeOrientation() const;
        auto OrientationChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        using OrientationChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayInformation, &impl::abi_t<Windows::Graphics::Display::IDisplayInformation>::remove_OrientationChanged>;
        OrientationChanged_revoker OrientationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        auto OrientationChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto ResolutionScale() const;
        [[nodiscard]] auto LogicalDpi() const;
        [[nodiscard]] auto RawDpiX() const;
        [[nodiscard]] auto RawDpiY() const;
        auto DpiChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        using DpiChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayInformation, &impl::abi_t<Windows::Graphics::Display::IDisplayInformation>::remove_DpiChanged>;
        DpiChanged_revoker DpiChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        auto DpiChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto StereoEnabled() const;
        auto StereoEnabledChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        using StereoEnabledChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayInformation, &impl::abi_t<Windows::Graphics::Display::IDisplayInformation>::remove_StereoEnabledChanged>;
        StereoEnabledChanged_revoker StereoEnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        auto StereoEnabledChanged(winrt::event_token const& token) const noexcept;
        auto GetColorProfileAsync() const;
        auto ColorProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        using ColorProfileChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayInformation, &impl::abi_t<Windows::Graphics::Display::IDisplayInformation>::remove_ColorProfileChanged>;
        ColorProfileChanged_revoker ColorProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        auto ColorProfileChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayInformation>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayInformation2
    {
        [[nodiscard]] auto RawPixelsPerViewPixel() const;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayInformation2>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayInformation2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayInformation3
    {
        [[nodiscard]] auto DiagonalSizeInInches() const;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayInformation3>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayInformation3<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayInformation4
    {
        [[nodiscard]] auto ScreenWidthInRawPixels() const;
        [[nodiscard]] auto ScreenHeightInRawPixels() const;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayInformation4>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayInformation4<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayInformation5
    {
        auto GetAdvancedColorInfo() const;
        auto AdvancedColorInfoChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        using AdvancedColorInfoChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayInformation5, &impl::abi_t<Windows::Graphics::Display::IDisplayInformation5>::remove_AdvancedColorInfoChanged>;
        AdvancedColorInfoChanged_revoker AdvancedColorInfoChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        auto AdvancedColorInfoChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayInformation5>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayInformation5<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayInformationStatics
    {
        auto GetForCurrentView() const;
        [[nodiscard]] auto AutoRotationPreferences() const;
        auto AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations const& value) const;
        auto DisplayContentsInvalidated(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        using DisplayContentsInvalidated_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayInformationStatics, &impl::abi_t<Windows::Graphics::Display::IDisplayInformationStatics>::remove_DisplayContentsInvalidated>;
        DisplayContentsInvalidated_revoker DisplayContentsInvalidated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        auto DisplayContentsInvalidated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayInformationStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayInformationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayPropertiesStatics
    {
        [[nodiscard]] auto CurrentOrientation() const;
        [[nodiscard]] auto NativeOrientation() const;
        [[nodiscard]] auto AutoRotationPreferences() const;
        auto AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations const& value) const;
        auto OrientationChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        using OrientationChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_OrientationChanged>;
        OrientationChanged_revoker OrientationChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        auto OrientationChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto ResolutionScale() const;
        [[nodiscard]] auto LogicalDpi() const;
        auto LogicalDpiChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        using LogicalDpiChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_LogicalDpiChanged>;
        LogicalDpiChanged_revoker LogicalDpiChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        auto LogicalDpiChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto StereoEnabled() const;
        auto StereoEnabledChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        using StereoEnabledChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_StereoEnabledChanged>;
        StereoEnabledChanged_revoker StereoEnabledChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        auto StereoEnabledChanged(winrt::event_token const& token) const noexcept;
        auto GetColorProfileAsync() const;
        auto ColorProfileChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        using ColorProfileChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_ColorProfileChanged>;
        ColorProfileChanged_revoker ColorProfileChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        auto ColorProfileChanged(winrt::event_token const& token) const noexcept;
        auto DisplayContentsInvalidated(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        using DisplayContentsInvalidated_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_DisplayContentsInvalidated>;
        DisplayContentsInvalidated_revoker DisplayContentsInvalidated(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        auto DisplayContentsInvalidated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayPropertiesStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>;
    };
    struct struct_Windows_Graphics_Display_NitRange
    {
        float MinNits;
        float MaxNits;
        float StepSizeNits;
    };
    template <> struct abi<Windows::Graphics::Display::NitRange>
    {
        using type = struct_Windows_Graphics_Display_NitRange;
    };
}
#endif
