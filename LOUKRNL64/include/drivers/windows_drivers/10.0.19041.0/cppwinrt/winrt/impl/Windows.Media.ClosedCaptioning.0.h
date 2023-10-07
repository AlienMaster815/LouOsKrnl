// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_ClosedCaptioning_0_H
#define WINRT_Windows_Media_ClosedCaptioning_0_H
namespace winrt::Windows::UI
{
    struct Color;
}
namespace winrt::Windows::Media::ClosedCaptioning
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
    struct ClosedCaptionProperties;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::ClosedCaptioning::ClosedCaptionProperties>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::ClosedCaptioning::ClosedCaptionColor>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::ClosedCaptioning::ClosedCaptionSize>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::ClosedCaptioning::ClosedCaptionStyle>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>
    {
        static constexpr auto & value{ L"Windows.Media.ClosedCaptioning.IClosedCaptionPropertiesStatics" };
    };
    template <> struct name<Windows::Media::ClosedCaptioning::ClosedCaptionProperties>
    {
        static constexpr auto & value{ L"Windows.Media.ClosedCaptioning.ClosedCaptionProperties" };
    };
    template <> struct name<Windows::Media::ClosedCaptioning::ClosedCaptionColor>
    {
        static constexpr auto & value{ L"Windows.Media.ClosedCaptioning.ClosedCaptionColor" };
    };
    template <> struct name<Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect>
    {
        static constexpr auto & value{ L"Windows.Media.ClosedCaptioning.ClosedCaptionEdgeEffect" };
    };
    template <> struct name<Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>
    {
        static constexpr auto & value{ L"Windows.Media.ClosedCaptioning.ClosedCaptionOpacity" };
    };
    template <> struct name<Windows::Media::ClosedCaptioning::ClosedCaptionSize>
    {
        static constexpr auto & value{ L"Windows.Media.ClosedCaptioning.ClosedCaptionSize" };
    };
    template <> struct name<Windows::Media::ClosedCaptioning::ClosedCaptionStyle>
    {
        static constexpr auto & value{ L"Windows.Media.ClosedCaptioning.ClosedCaptionStyle" };
    };
    template <> struct guid_storage<Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>
    {
        static constexpr guid value{ 0x10AA1F84,0xCC30,0x4141,{ 0xB5,0x03,0x52,0x72,0x28,0x9E,0x0C,0x20 } };
    };
    template <> struct abi<Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>
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
    template <typename D>
    struct consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics
    {
        [[nodiscard]] auto FontColor() const;
        [[nodiscard]] auto ComputedFontColor() const;
        [[nodiscard]] auto FontOpacity() const;
        [[nodiscard]] auto FontSize() const;
        [[nodiscard]] auto FontStyle() const;
        [[nodiscard]] auto FontEffect() const;
        [[nodiscard]] auto BackgroundColor() const;
        [[nodiscard]] auto ComputedBackgroundColor() const;
        [[nodiscard]] auto BackgroundOpacity() const;
        [[nodiscard]] auto RegionColor() const;
        [[nodiscard]] auto ComputedRegionColor() const;
        [[nodiscard]] auto RegionOpacity() const;
    };
    template <> struct consume<Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>
    {
        template <typename D> using type = consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>;
    };
}
#endif
