// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Display_Core_0_H
#define WINRT_Windows_Graphics_Display_Core_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Graphics::Display::Core
{
    enum class HdmiDisplayColorSpace : int32_t
    {
        RgbLimited = 0,
        RgbFull = 1,
        BT2020 = 2,
        BT709 = 3,
    };
    enum class HdmiDisplayHdrOption : int32_t
    {
        None = 0,
        EotfSdr = 1,
        Eotf2084 = 2,
        DolbyVisionLowLatency = 3,
    };
    enum class HdmiDisplayPixelEncoding : int32_t
    {
        Rgb444 = 0,
        Ycc444 = 1,
        Ycc422 = 2,
        Ycc420 = 3,
    };
    struct IHdmiDisplayInformation;
    struct IHdmiDisplayInformationStatics;
    struct IHdmiDisplayMode;
    struct IHdmiDisplayMode2;
    struct HdmiDisplayInformation;
    struct HdmiDisplayMode;
    struct HdmiDisplayHdr2086Metadata;
}
namespace winrt::impl
{
    template <> struct category<Windows::Graphics::Display::Core::IHdmiDisplayInformation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::Core::IHdmiDisplayMode>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::Core::IHdmiDisplayMode2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Display::Core::HdmiDisplayInformation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Display::Core::HdmiDisplayMode>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Display::Core::HdmiDisplayColorSpace>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Display::Core::HdmiDisplayHdrOption>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Display::Core::HdmiDisplayPixelEncoding>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Display::Core::HdmiDisplayHdr2086Metadata>
    {
        using type = struct_category<uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t>;
    };
    template <> struct name<Windows::Graphics::Display::Core::IHdmiDisplayInformation>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.Core.IHdmiDisplayInformation" };
    };
    template <> struct name<Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.Core.IHdmiDisplayInformationStatics" };
    };
    template <> struct name<Windows::Graphics::Display::Core::IHdmiDisplayMode>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.Core.IHdmiDisplayMode" };
    };
    template <> struct name<Windows::Graphics::Display::Core::IHdmiDisplayMode2>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.Core.IHdmiDisplayMode2" };
    };
    template <> struct name<Windows::Graphics::Display::Core::HdmiDisplayInformation>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.Core.HdmiDisplayInformation" };
    };
    template <> struct name<Windows::Graphics::Display::Core::HdmiDisplayMode>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.Core.HdmiDisplayMode" };
    };
    template <> struct name<Windows::Graphics::Display::Core::HdmiDisplayColorSpace>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.Core.HdmiDisplayColorSpace" };
    };
    template <> struct name<Windows::Graphics::Display::Core::HdmiDisplayHdrOption>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.Core.HdmiDisplayHdrOption" };
    };
    template <> struct name<Windows::Graphics::Display::Core::HdmiDisplayPixelEncoding>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.Core.HdmiDisplayPixelEncoding" };
    };
    template <> struct name<Windows::Graphics::Display::Core::HdmiDisplayHdr2086Metadata>
    {
        static constexpr auto & value{ L"Windows.Graphics.Display.Core.HdmiDisplayHdr2086Metadata" };
    };
    template <> struct guid_storage<Windows::Graphics::Display::Core::IHdmiDisplayInformation>
    {
        static constexpr guid value{ 0x130B3C0A,0xF565,0x476E,{ 0xAB,0xD5,0xEA,0x05,0xAE,0xE7,0x4C,0x69 } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics>
    {
        static constexpr guid value{ 0x6CE6B260,0xF42A,0x4A15,{ 0x91,0x4C,0x7B,0x8E,0x2A,0x5A,0x65,0xDF } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::Core::IHdmiDisplayMode>
    {
        static constexpr guid value{ 0x0C06D5AD,0x1B90,0x4F51,{ 0x99,0x81,0xEF,0x5A,0x1C,0x0D,0xDF,0x66 } };
    };
    template <> struct guid_storage<Windows::Graphics::Display::Core::IHdmiDisplayMode2>
    {
        static constexpr guid value{ 0x07CD4E9F,0x4B3C,0x42B8,{ 0x84,0xE7,0x89,0x53,0x68,0x71,0x8A,0xF2 } };
    };
    template <> struct default_interface<Windows::Graphics::Display::Core::HdmiDisplayInformation>
    {
        using type = Windows::Graphics::Display::Core::IHdmiDisplayInformation;
    };
    template <> struct default_interface<Windows::Graphics::Display::Core::HdmiDisplayMode>
    {
        using type = Windows::Graphics::Display::Core::IHdmiDisplayMode;
    };
    template <> struct abi<Windows::Graphics::Display::Core::IHdmiDisplayInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetSupportedDisplayModes(void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentDisplayMode(void**) noexcept = 0;
            virtual int32_t __stdcall SetDefaultDisplayModeAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestSetCurrentDisplayModeAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestSetCurrentDisplayModeWithHdrAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestSetCurrentDisplayModeWithHdrAndMetadataAsync(void*, int32_t, struct struct_Windows_Graphics_Display_Core_HdmiDisplayHdr2086Metadata, void**) noexcept = 0;
            virtual int32_t __stdcall add_DisplayModesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DisplayModesChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::Core::IHdmiDisplayMode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ResolutionWidthInRawPixels(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ResolutionHeightInRawPixels(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RefreshRate(double*) noexcept = 0;
            virtual int32_t __stdcall get_StereoEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_BitsPerPixel(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall IsEqual(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall get_ColorSpace(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PixelEncoding(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsSdrLuminanceSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSmpte2084Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Is2086MetadataSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::Core::IHdmiDisplayMode2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsDolbyVisionLowLatencySupported(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_Core_IHdmiDisplayInformation
    {
        auto GetSupportedDisplayModes() const;
        auto GetCurrentDisplayMode() const;
        auto SetDefaultDisplayModeAsync() const;
        auto RequestSetCurrentDisplayModeAsync(Windows::Graphics::Display::Core::HdmiDisplayMode const& mode) const;
        auto RequestSetCurrentDisplayModeAsync(Windows::Graphics::Display::Core::HdmiDisplayMode const& mode, Windows::Graphics::Display::Core::HdmiDisplayHdrOption const& hdrOption) const;
        auto RequestSetCurrentDisplayModeAsync(Windows::Graphics::Display::Core::HdmiDisplayMode const& mode, Windows::Graphics::Display::Core::HdmiDisplayHdrOption const& hdrOption, Windows::Graphics::Display::Core::HdmiDisplayHdr2086Metadata const& hdrMetadata) const;
        auto DisplayModesChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::Core::HdmiDisplayInformation, Windows::Foundation::IInspectable> const& value) const;
        using DisplayModesChanged_revoker = impl::event_revoker<Windows::Graphics::Display::Core::IHdmiDisplayInformation, &impl::abi_t<Windows::Graphics::Display::Core::IHdmiDisplayInformation>::remove_DisplayModesChanged>;
        DisplayModesChanged_revoker DisplayModesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::Core::HdmiDisplayInformation, Windows::Foundation::IInspectable> const& value) const;
        auto DisplayModesChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Display::Core::IHdmiDisplayInformation>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_Core_IHdmiDisplayInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_Core_IHdmiDisplayInformationStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_Core_IHdmiDisplayInformationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_Core_IHdmiDisplayMode
    {
        [[nodiscard]] auto ResolutionWidthInRawPixels() const;
        [[nodiscard]] auto ResolutionHeightInRawPixels() const;
        [[nodiscard]] auto RefreshRate() const;
        [[nodiscard]] auto StereoEnabled() const;
        [[nodiscard]] auto BitsPerPixel() const;
        auto IsEqual(Windows::Graphics::Display::Core::HdmiDisplayMode const& mode) const;
        [[nodiscard]] auto ColorSpace() const;
        [[nodiscard]] auto PixelEncoding() const;
        [[nodiscard]] auto IsSdrLuminanceSupported() const;
        [[nodiscard]] auto IsSmpte2084Supported() const;
        [[nodiscard]] auto Is2086MetadataSupported() const;
    };
    template <> struct consume<Windows::Graphics::Display::Core::IHdmiDisplayMode>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_Core_IHdmiDisplayMode<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_Core_IHdmiDisplayMode2
    {
        [[nodiscard]] auto IsDolbyVisionLowLatencySupported() const;
    };
    template <> struct consume<Windows::Graphics::Display::Core::IHdmiDisplayMode2>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_Core_IHdmiDisplayMode2<D>;
    };
    struct struct_Windows_Graphics_Display_Core_HdmiDisplayHdr2086Metadata
    {
        uint16_t RedPrimaryX;
        uint16_t RedPrimaryY;
        uint16_t GreenPrimaryX;
        uint16_t GreenPrimaryY;
        uint16_t BluePrimaryX;
        uint16_t BluePrimaryY;
        uint16_t WhitePointX;
        uint16_t WhitePointY;
        uint16_t MaxMasteringLuminance;
        uint16_t MinMasteringLuminance;
        uint16_t MaxContentLightLevel;
        uint16_t MaxFrameAverageLightLevel;
    };
    template <> struct abi<Windows::Graphics::Display::Core::HdmiDisplayHdr2086Metadata>
    {
        using type = struct_Windows_Graphics_Display_Core_HdmiDisplayHdr2086Metadata;
    };
}
#endif
