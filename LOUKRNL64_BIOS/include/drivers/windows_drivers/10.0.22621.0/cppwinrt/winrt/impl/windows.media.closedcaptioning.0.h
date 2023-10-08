// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_ClosedCaptioning_0_H
#define WINRT_Windows_Media_ClosedCaptioning_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::Media::ClosedCaptioning
{
    enum class ClosedCaptionColor : int32_t
    {
        Default = 0,
        White = 1,
        Black = 2,
        Red = 3,
        Green = 4,
        Blue = 5,
        Yellow = 6,
        Magenta = 7,
        Cyan = 8,
    };
    enum class ClosedCaptionEdgeEffect : int32_t
    {
        Default = 0,
        None = 1,
        Raised = 2,
        Depressed = 3,
        Uniform = 4,
        DropShadow = 5,
    };
    enum class ClosedCaptionOpacity : int32_t
    {
        Default = 0,
        OneHundredPercent = 1,
        SeventyFivePercent = 2,
        TwentyFivePercent = 3,
        ZeroPercent = 4,
    };
    enum class ClosedCaptionSize : int32_t
    {
        Default = 0,
        FiftyPercent = 1,
        OneHundredPercent = 2,
        OneHundredFiftyPercent = 3,
        TwoHundredPercent = 4,
    };
    enum class ClosedCaptionStyle : int32_t
    {
        Default = 0,
        MonospacedWithSerifs = 1,
        ProportionalWithSerifs = 2,
        MonospacedWithoutSerifs = 3,
        ProportionalWithoutSerifs = 4,
        Casual = 5,
        Cursive = 6,
        SmallCapitals = 7,
    };
    struct IClosedCaptionPropertiesStatics;
    struct IClosedCaptionPropertiesStatics2;
    struct ClosedCaptionProperties;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionSize>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionStyle>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties> = L"Windows.Media.ClosedCaptioning.ClosedCaptionProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor> = L"Windows.Media.ClosedCaptioning.ClosedCaptionColor";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect> = L"Windows.Media.ClosedCaptioning.ClosedCaptionEdgeEffect";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity> = L"Windows.Media.ClosedCaptioning.ClosedCaptionOpacity";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionSize> = L"Windows.Media.ClosedCaptioning.ClosedCaptionSize";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionStyle> = L"Windows.Media.ClosedCaptioning.ClosedCaptionStyle";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics> = L"Windows.Media.ClosedCaptioning.IClosedCaptionPropertiesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2> = L"Windows.Media.ClosedCaptioning.IClosedCaptionPropertiesStatics2";
    template <> inline constexpr guid guid_v<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>{ 0x10AA1F84,0xCC30,0x4141,{ 0xB5,0x03,0x52,0x72,0x28,0x9E,0x0C,0x20 } }; // 10AA1F84-CC30-4141-B503-5272289E0C20
    template <> inline constexpr guid guid_v<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>{ 0x9DE26870,0x37DE,0x4197,{ 0x88,0x45,0x9A,0x48,0xDC,0x5A,0xC3,0x17 } }; // 9DE26870-37DE-4197-8845-9A48DC5AC317
    template <> struct abi<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FontColor(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ComputedFontColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_FontOpacity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FontSize(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FontStyle(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FontEffect(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundColor(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ComputedBackgroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundOpacity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RegionColor(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ComputedRegionColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_RegionOpacity(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_PropertiesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PropertiesChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor) FontColor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) ComputedFontColor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity) FontOpacity() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionSize) FontSize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionStyle) FontStyle() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect) FontEffect() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor) BackgroundColor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) ComputedBackgroundColor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity) BackgroundOpacity() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor) RegionColor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) ComputedRegionColor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity) RegionOpacity() const;
    };
    template <> struct consume<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>
    {
        template <typename D> using type = consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics2
    {
        WINRT_IMPL_AUTO(winrt::event_token) PropertiesChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using PropertiesChanged_revoker = impl::event_revoker<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2, &impl::abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>::remove_PropertiesChanged>;
        [[nodiscard]] PropertiesChanged_revoker PropertiesChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) PropertiesChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>
    {
        template <typename D> using type = consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics2<D>;
    };
}
#endif