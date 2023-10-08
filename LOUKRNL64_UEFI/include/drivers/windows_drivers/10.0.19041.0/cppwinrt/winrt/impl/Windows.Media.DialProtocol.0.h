// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_DialProtocol_0_H
#define WINRT_Windows_Media_DialProtocol_0_H
namespace winrt::Windows::Devices::Enumeration
{
    struct DeviceInformation;
    struct DevicePickerAppearance;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    struct Rect;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    template <typename K, typename V> struct IKeyValuePair;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
namespace winrt::Windows::UI::Popups
{
    enum class Placement : int32_t;
}
namespace winrt::Windows::Media::DialProtocol
{
    enum class DialAppLaunchResult : int32_t
    {
        Launched = 0,
        FailedToLaunch = 1,
        NotFound = 2,
        NetworkFailure = 3,
    };
    enum class DialAppState : int32_t
    {
        Unknown = 0,
        Stopped = 1,
        Running = 2,
        NetworkFailure = 3,
    };
    enum class DialAppStopResult : int32_t
    {
        Stopped = 0,
        StopFailed = 1,
        OperationNotSupported = 2,
        NetworkFailure = 3,
    };
    enum class DialDeviceDisplayStatus : int32_t
    {
        None = 0,
        Connecting = 1,
        Connected = 2,
        Disconnecting = 3,
        Disconnected = 4,
        Error = 5,
    };
    struct IDialApp;
    struct IDialAppStateDetails;
    struct IDialDevice;
    struct IDialDevice2;
    struct IDialDevicePicker;
    struct IDialDevicePickerFilter;
    struct IDialDeviceSelectedEventArgs;
    struct IDialDeviceStatics;
    struct IDialDisconnectButtonClickedEventArgs;
    struct IDialReceiverApp;
    struct IDialReceiverApp2;
    struct IDialReceiverAppStatics;
    struct DialApp;
    struct DialAppStateDetails;
    struct DialDevice;
    struct DialDevicePicker;
    struct DialDevicePickerFilter;
    struct DialDeviceSelectedEventArgs;
    struct DialDisconnectButtonClickedEventArgs;
    struct DialReceiverApp;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::DialProtocol::IDialApp>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::DialProtocol::IDialAppStateDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::DialProtocol::IDialDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::DialProtocol::IDialDevice2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::DialProtocol::IDialDevicePicker>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::DialProtocol::IDialDevicePickerFilter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::DialProtocol::IDialDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::DialProtocol::IDialReceiverApp>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::DialProtocol::IDialReceiverApp2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::DialProtocol::IDialReceiverAppStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::DialProtocol::DialApp>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::DialProtocol::DialAppStateDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::DialProtocol::DialDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::DialProtocol::DialDevicePicker>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::DialProtocol::DialDevicePickerFilter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::DialProtocol::DialDeviceSelectedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::DialProtocol::DialReceiverApp>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::DialProtocol::DialAppLaunchResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::DialProtocol::DialAppState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::DialProtocol::DialAppStopResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Media::DialProtocol::DialDeviceDisplayStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Media::DialProtocol::IDialApp>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialApp" };
    };
    template <> struct name<Windows::Media::DialProtocol::IDialAppStateDetails>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialAppStateDetails" };
    };
    template <> struct name<Windows::Media::DialProtocol::IDialDevice>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialDevice" };
    };
    template <> struct name<Windows::Media::DialProtocol::IDialDevice2>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialDevice2" };
    };
    template <> struct name<Windows::Media::DialProtocol::IDialDevicePicker>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialDevicePicker" };
    };
    template <> struct name<Windows::Media::DialProtocol::IDialDevicePickerFilter>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialDevicePickerFilter" };
    };
    template <> struct name<Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialDeviceSelectedEventArgs" };
    };
    template <> struct name<Windows::Media::DialProtocol::IDialDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialDeviceStatics" };
    };
    template <> struct name<Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialDisconnectButtonClickedEventArgs" };
    };
    template <> struct name<Windows::Media::DialProtocol::IDialReceiverApp>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialReceiverApp" };
    };
    template <> struct name<Windows::Media::DialProtocol::IDialReceiverApp2>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialReceiverApp2" };
    };
    template <> struct name<Windows::Media::DialProtocol::IDialReceiverAppStatics>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.IDialReceiverAppStatics" };
    };
    template <> struct name<Windows::Media::DialProtocol::DialApp>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.DialApp" };
    };
    template <> struct name<Windows::Media::DialProtocol::DialAppStateDetails>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.DialAppStateDetails" };
    };
    template <> struct name<Windows::Media::DialProtocol::DialDevice>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.DialDevice" };
    };
    template <> struct name<Windows::Media::DialProtocol::DialDevicePicker>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.DialDevicePicker" };
    };
    template <> struct name<Windows::Media::DialProtocol::DialDevicePickerFilter>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.DialDevicePickerFilter" };
    };
    template <> struct name<Windows::Media::DialProtocol::DialDeviceSelectedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.DialDeviceSelectedEventArgs" };
    };
    template <> struct name<Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.DialDisconnectButtonClickedEventArgs" };
    };
    template <> struct name<Windows::Media::DialProtocol::DialReceiverApp>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.DialReceiverApp" };
    };
    template <> struct name<Windows::Media::DialProtocol::DialAppLaunchResult>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.DialAppLaunchResult" };
    };
    template <> struct name<Windows::Media::DialProtocol::DialAppState>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.DialAppState" };
    };
    template <> struct name<Windows::Media::DialProtocol::DialAppStopResult>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.DialAppStopResult" };
    };
    template <> struct name<Windows::Media::DialProtocol::DialDeviceDisplayStatus>
    {
        static constexpr auto & value{ L"Windows.Media.DialProtocol.DialDeviceDisplayStatus" };
    };
    template <> struct guid_storage<Windows::Media::DialProtocol::IDialApp>
    {
        static constexpr guid value{ 0x555FFBD3,0x45B7,0x49F3,{ 0xBB,0xD7,0x30,0x2D,0xB6,0x08,0x46,0x46 } };
    };
    template <> struct guid_storage<Windows::Media::DialProtocol::IDialAppStateDetails>
    {
        static constexpr guid value{ 0xDDC4A4A1,0xF5DE,0x400D,{ 0xBE,0xA4,0x8C,0x84,0x66,0xBB,0x29,0x61 } };
    };
    template <> struct guid_storage<Windows::Media::DialProtocol::IDialDevice>
    {
        static constexpr guid value{ 0xFFF0EDAF,0x759F,0x41D2,{ 0xA2,0x0A,0x7F,0x29,0xCE,0x0B,0x37,0x84 } };
    };
    template <> struct guid_storage<Windows::Media::DialProtocol::IDialDevice2>
    {
        static constexpr guid value{ 0xBAB7F3D5,0x5BFB,0x4EBA,{ 0x8B,0x32,0xB5,0x7C,0x5C,0x5E,0xE5,0xC9 } };
    };
    template <> struct guid_storage<Windows::Media::DialProtocol::IDialDevicePicker>
    {
        static constexpr guid value{ 0xBA7E520A,0xFF59,0x4F4B,{ 0xBD,0xAC,0xD8,0x9F,0x49,0x5A,0xD6,0xE1 } };
    };
    template <> struct guid_storage<Windows::Media::DialProtocol::IDialDevicePickerFilter>
    {
        static constexpr guid value{ 0xC17C93BA,0x86C0,0x485D,{ 0xB8,0xD6,0x0F,0x9A,0x8F,0x64,0x15,0x90 } };
    };
    template <> struct guid_storage<Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs>
    {
        static constexpr guid value{ 0x480B92AD,0xAC76,0x47EB,{ 0x9C,0x06,0xA1,0x93,0x04,0xDA,0x02,0x47 } };
    };
    template <> struct guid_storage<Windows::Media::DialProtocol::IDialDeviceStatics>
    {
        static constexpr guid value{ 0xAA69CC95,0x01F8,0x4758,{ 0x84,0x61,0x2B,0xBD,0x1C,0xDC,0x3C,0xF3 } };
    };
    template <> struct guid_storage<Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs>
    {
        static constexpr guid value{ 0x52765152,0x9C81,0x4E55,{ 0xAD,0xC2,0x0E,0xBE,0x99,0xCD,0xE3,0xB6 } };
    };
    template <> struct guid_storage<Windows::Media::DialProtocol::IDialReceiverApp>
    {
        static constexpr guid value{ 0xFD3E7C57,0x5045,0x470E,{ 0xB3,0x04,0x4D,0xD9,0xB1,0x3E,0x7D,0x11 } };
    };
    template <> struct guid_storage<Windows::Media::DialProtocol::IDialReceiverApp2>
    {
        static constexpr guid value{ 0x530C5805,0x9130,0x42AC,{ 0xA5,0x04,0x19,0x77,0xDC,0xB2,0xEA,0x8A } };
    };
    template <> struct guid_storage<Windows::Media::DialProtocol::IDialReceiverAppStatics>
    {
        static constexpr guid value{ 0x53183A3C,0x4C36,0x4D02,{ 0xB2,0x8A,0xF2,0xA9,0xDA,0x38,0xEC,0x52 } };
    };
    template <> struct default_interface<Windows::Media::DialProtocol::DialApp>
    {
        using type = Windows::Media::DialProtocol::IDialApp;
    };
    template <> struct default_interface<Windows::Media::DialProtocol::DialAppStateDetails>
    {
        using type = Windows::Media::DialProtocol::IDialAppStateDetails;
    };
    template <> struct default_interface<Windows::Media::DialProtocol::DialDevice>
    {
        using type = Windows::Media::DialProtocol::IDialDevice;
    };
    template <> struct default_interface<Windows::Media::DialProtocol::DialDevicePicker>
    {
        using type = Windows::Media::DialProtocol::IDialDevicePicker;
    };
    template <> struct default_interface<Windows::Media::DialProtocol::DialDevicePickerFilter>
    {
        using type = Windows::Media::DialProtocol::IDialDevicePickerFilter;
    };
    template <> struct default_interface<Windows::Media::DialProtocol::DialDeviceSelectedEventArgs>
    {
        using type = Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs;
    };
    template <> struct default_interface<Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs>
    {
        using type = Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs;
    };
    template <> struct default_interface<Windows::Media::DialProtocol::DialReceiverApp>
    {
        using type = Windows::Media::DialProtocol::IDialReceiverApp;
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialApp>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppName(void**) noexcept = 0;
            virtual int32_t __stdcall RequestLaunchAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall StopAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAppStateAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialAppStateDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FullXml(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall GetDialApp(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialDevice2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialDevicePicker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Filter(void**) noexcept = 0;
            virtual int32_t __stdcall get_Appearance(void**) noexcept = 0;
            virtual int32_t __stdcall add_DialDeviceSelected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DialDeviceSelected(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DisconnectButtonClicked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DisconnectButtonClicked(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DialDevicePickerDismissed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DialDevicePickerDismissed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Show(Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall ShowWithPlacement(Windows::Foundation::Rect, int32_t) noexcept = 0;
            virtual int32_t __stdcall PickSingleDialDeviceAsync(Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall PickSingleDialDeviceAsyncWithPlacement(Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall Hide() noexcept = 0;
            virtual int32_t __stdcall SetDisplayStatus(void*, int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialDevicePickerFilter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportedAppNames(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectedDialDevice(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeviceInfoSupportsDialAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Device(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialReceiverApp>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAdditionalDataAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SetAdditionalDataAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialReceiverApp2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetUniqueDeviceNameAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialReceiverAppStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialApp
    {
        [[nodiscard]] auto AppName() const;
        auto RequestLaunchAsync(param::hstring const& appArgument) const;
        auto StopAsync() const;
        auto GetAppStateAsync() const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialApp>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialApp<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialAppStateDetails
    {
        [[nodiscard]] auto State() const;
        [[nodiscard]] auto FullXml() const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialAppStateDetails>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialAppStateDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialDevice
    {
        [[nodiscard]] auto Id() const;
        auto GetDialApp(param::hstring const& appName) const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialDevice>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialDevice2
    {
        [[nodiscard]] auto FriendlyName() const;
        [[nodiscard]] auto Thumbnail() const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialDevice2>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDevice2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialDevicePicker
    {
        [[nodiscard]] auto Filter() const;
        [[nodiscard]] auto Appearance() const;
        auto DialDeviceSelected(Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Media::DialProtocol::DialDeviceSelectedEventArgs> const& handler) const;
        using DialDeviceSelected_revoker = impl::event_revoker<Windows::Media::DialProtocol::IDialDevicePicker, &impl::abi_t<Windows::Media::DialProtocol::IDialDevicePicker>::remove_DialDeviceSelected>;
        DialDeviceSelected_revoker DialDeviceSelected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Media::DialProtocol::DialDeviceSelectedEventArgs> const& handler) const;
        auto DialDeviceSelected(winrt::event_token const& token) const noexcept;
        auto DisconnectButtonClicked(Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs> const& handler) const;
        using DisconnectButtonClicked_revoker = impl::event_revoker<Windows::Media::DialProtocol::IDialDevicePicker, &impl::abi_t<Windows::Media::DialProtocol::IDialDevicePicker>::remove_DisconnectButtonClicked>;
        DisconnectButtonClicked_revoker DisconnectButtonClicked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs> const& handler) const;
        auto DisconnectButtonClicked(winrt::event_token const& token) const noexcept;
        auto DialDevicePickerDismissed(Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Foundation::IInspectable> const& handler) const;
        using DialDevicePickerDismissed_revoker = impl::event_revoker<Windows::Media::DialProtocol::IDialDevicePicker, &impl::abi_t<Windows::Media::DialProtocol::IDialDevicePicker>::remove_DialDevicePickerDismissed>;
        DialDevicePickerDismissed_revoker DialDevicePickerDismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Foundation::IInspectable> const& handler) const;
        auto DialDevicePickerDismissed(winrt::event_token const& token) const noexcept;
        auto Show(Windows::Foundation::Rect const& selection) const;
        auto Show(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
        auto PickSingleDialDeviceAsync(Windows::Foundation::Rect const& selection) const;
        auto PickSingleDialDeviceAsync(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
        auto Hide() const;
        auto SetDisplayStatus(Windows::Media::DialProtocol::DialDevice const& device, Windows::Media::DialProtocol::DialDeviceDisplayStatus const& status) const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialDevicePicker>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDevicePicker<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialDevicePickerFilter
    {
        [[nodiscard]] auto SupportedAppNames() const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialDevicePickerFilter>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDevicePickerFilter<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialDeviceSelectedEventArgs
    {
        [[nodiscard]] auto SelectedDialDevice() const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDeviceSelectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialDeviceStatics
    {
        auto GetDeviceSelector(param::hstring const& appName) const;
        auto FromIdAsync(param::hstring const& value) const;
        auto DeviceInfoSupportsDialAsync(Windows::Devices::Enumeration::DeviceInformation const& device) const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialDisconnectButtonClickedEventArgs
    {
        [[nodiscard]] auto Device() const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDisconnectButtonClickedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialReceiverApp
    {
        auto GetAdditionalDataAsync() const;
        auto SetAdditionalDataAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& additionalData) const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialReceiverApp>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialReceiverApp<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialReceiverApp2
    {
        auto GetUniqueDeviceNameAsync() const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialReceiverApp2>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialReceiverApp2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialReceiverAppStatics
    {
        [[nodiscard]] auto Current() const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialReceiverAppStatics>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialReceiverAppStatics<D>;
    };
}
#endif
