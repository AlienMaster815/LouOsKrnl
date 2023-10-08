// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Preview_0_H
#define WINRT_Windows_System_Preview_0_H
namespace winrt::Windows::Devices::Sensors
{
    enum class SimpleOrientation : int32_t;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::System::Preview
{
    enum class HingeState : int32_t
    {
        Unknown = 0,
        Closed = 1,
        Concave = 2,
        Flat = 3,
        Convex = 4,
        Full = 5,
    };
    struct ITwoPanelHingedDevicePosturePreview;
    struct ITwoPanelHingedDevicePosturePreviewReading;
    struct ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs;
    struct ITwoPanelHingedDevicePosturePreviewStatics;
    struct TwoPanelHingedDevicePosturePreview;
    struct TwoPanelHingedDevicePosturePreviewReading;
    struct TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::System::Preview::ITwoPanelHingedDevicePosturePreview>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReading>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Preview::TwoPanelHingedDevicePosturePreview>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReading>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Preview::HingeState>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::System::Preview::ITwoPanelHingedDevicePosturePreview>
    {
        static constexpr auto & value{ L"Windows.System.Preview.ITwoPanelHingedDevicePosturePreview" };
    };
    template <> struct name<Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReading>
    {
        static constexpr auto & value{ L"Windows.System.Preview.ITwoPanelHingedDevicePosturePreviewReading" };
    };
    template <> struct name<Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.System.Preview.ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs" };
    };
    template <> struct name<Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewStatics>
    {
        static constexpr auto & value{ L"Windows.System.Preview.ITwoPanelHingedDevicePosturePreviewStatics" };
    };
    template <> struct name<Windows::System::Preview::TwoPanelHingedDevicePosturePreview>
    {
        static constexpr auto & value{ L"Windows.System.Preview.TwoPanelHingedDevicePosturePreview" };
    };
    template <> struct name<Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReading>
    {
        static constexpr auto & value{ L"Windows.System.Preview.TwoPanelHingedDevicePosturePreviewReading" };
    };
    template <> struct name<Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.System.Preview.TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs" };
    };
    template <> struct name<Windows::System::Preview::HingeState>
    {
        static constexpr auto & value{ L"Windows.System.Preview.HingeState" };
    };
    template <> struct guid_storage<Windows::System::Preview::ITwoPanelHingedDevicePosturePreview>
    {
        static constexpr guid value{ 0x72245C31,0x4B39,0x42A6,{ 0x8E,0x73,0x72,0x35,0xAD,0xE1,0x68,0x53 } };
    };
    template <> struct guid_storage<Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReading>
    {
        static constexpr guid value{ 0xA0251452,0x4AD6,0x4B38,{ 0x84,0x26,0xC5,0x9A,0x15,0x49,0x3A,0x7D } };
    };
    template <> struct guid_storage<Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs>
    {
        static constexpr guid value{ 0x2D2D1BC6,0x02CE,0x474A,{ 0xA5,0x56,0xA7,0x5B,0x1C,0xF9,0x3A,0x03 } };
    };
    template <> struct guid_storage<Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewStatics>
    {
        static constexpr guid value{ 0x0C4733D2,0x57E0,0x4180,{ 0xBD,0x5E,0xF3,0x1A,0x21,0x38,0x42,0x3E } };
    };
    template <> struct default_interface<Windows::System::Preview::TwoPanelHingedDevicePosturePreview>
    {
        using type = Windows::System::Preview::ITwoPanelHingedDevicePosturePreview;
    };
    template <> struct default_interface<Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReading>
    {
        using type = Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReading;
    };
    template <> struct default_interface<Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs>
    {
        using type = Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs;
    };
    template <> struct abi<Windows::System::Preview::ITwoPanelHingedDevicePosturePreview>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentPostureAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_PostureChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PostureChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReading>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_HingeState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Panel1Orientation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Panel1Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Panel2Orientation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Panel2Id(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reading(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_Preview_ITwoPanelHingedDevicePosturePreview
    {
        auto GetCurrentPostureAsync() const;
        auto PostureChanged(Windows::Foundation::TypedEventHandler<Windows::System::Preview::TwoPanelHingedDevicePosturePreview, Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs> const& handler) const;
        using PostureChanged_revoker = impl::event_revoker<Windows::System::Preview::ITwoPanelHingedDevicePosturePreview, &impl::abi_t<Windows::System::Preview::ITwoPanelHingedDevicePosturePreview>::remove_PostureChanged>;
        PostureChanged_revoker PostureChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::Preview::TwoPanelHingedDevicePosturePreview, Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs> const& handler) const;
        auto PostureChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::System::Preview::ITwoPanelHingedDevicePosturePreview>
    {
        template <typename D> using type = consume_Windows_System_Preview_ITwoPanelHingedDevicePosturePreview<D>;
    };
    template <typename D>
    struct consume_Windows_System_Preview_ITwoPanelHingedDevicePosturePreviewReading
    {
        [[nodiscard]] auto Timestamp() const;
        [[nodiscard]] auto HingeState() const;
        [[nodiscard]] auto Panel1Orientation() const;
        [[nodiscard]] auto Panel1Id() const;
        [[nodiscard]] auto Panel2Orientation() const;
        [[nodiscard]] auto Panel2Id() const;
    };
    template <> struct consume<Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReading>
    {
        template <typename D> using type = consume_Windows_System_Preview_ITwoPanelHingedDevicePosturePreviewReading<D>;
    };
    template <typename D>
    struct consume_Windows_System_Preview_ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs
    {
        [[nodiscard]] auto Reading() const;
    };
    template <> struct consume<Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_System_Preview_ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_Preview_ITwoPanelHingedDevicePosturePreviewStatics
    {
        auto GetDefaultAsync() const;
    };
    template <> struct consume<Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewStatics>
    {
        template <typename D> using type = consume_Windows_System_Preview_ITwoPanelHingedDevicePosturePreviewStatics<D>;
    };
}
#endif
