// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Input_Preview_0_H
#define WINRT_Windows_Devices_Input_Preview_0_H
namespace winrt::Windows::Devices::HumanInterfaceDevice
{
    struct HidInputReport;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Devices::Input::Preview
{
    enum class GazeDeviceConfigurationStatePreview : int32_t
    {
        Unknown = 0,
        Ready = 1,
        Configuring = 2,
        ScreenSetupNeeded = 3,
        UserCalibrationNeeded = 4,
    };
    struct IGazeDevicePreview;
    struct IGazeDeviceWatcherAddedPreviewEventArgs;
    struct IGazeDeviceWatcherPreview;
    struct IGazeDeviceWatcherRemovedPreviewEventArgs;
    struct IGazeDeviceWatcherUpdatedPreviewEventArgs;
    struct IGazeEnteredPreviewEventArgs;
    struct IGazeExitedPreviewEventArgs;
    struct IGazeInputSourcePreview;
    struct IGazeInputSourcePreviewStatics;
    struct IGazeMovedPreviewEventArgs;
    struct IGazePointPreview;
    struct GazeDevicePreview;
    struct GazeDeviceWatcherAddedPreviewEventArgs;
    struct GazeDeviceWatcherPreview;
    struct GazeDeviceWatcherRemovedPreviewEventArgs;
    struct GazeDeviceWatcherUpdatedPreviewEventArgs;
    struct GazeEnteredPreviewEventArgs;
    struct GazeExitedPreviewEventArgs;
    struct GazeInputSourcePreview;
    struct GazeMovedPreviewEventArgs;
    struct GazePointPreview;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Input::Preview::IGazeDevicePreview>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::IGazeDeviceWatcherAddedPreviewEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::IGazeDeviceWatcherRemovedPreviewEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::IGazeDeviceWatcherUpdatedPreviewEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::IGazeEnteredPreviewEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::IGazeExitedPreviewEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::IGazeInputSourcePreview>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::IGazeInputSourcePreviewStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::IGazeMovedPreviewEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::IGazePointPreview>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::GazeDevicePreview>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::GazeDeviceWatcherAddedPreviewEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::GazeDeviceWatcherRemovedPreviewEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::GazeDeviceWatcherUpdatedPreviewEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::GazeEnteredPreviewEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::GazeExitedPreviewEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::GazeInputSourcePreview>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::GazeMovedPreviewEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::GazePointPreview>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::Preview::GazeDeviceConfigurationStatePreview>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::Input::Preview::IGazeDevicePreview>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeDevicePreview" };
    };
    template <> struct name<Windows::Devices::Input::Preview::IGazeDeviceWatcherAddedPreviewEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeDeviceWatcherAddedPreviewEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeDeviceWatcherPreview" };
    };
    template <> struct name<Windows::Devices::Input::Preview::IGazeDeviceWatcherRemovedPreviewEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeDeviceWatcherRemovedPreviewEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::Preview::IGazeDeviceWatcherUpdatedPreviewEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeDeviceWatcherUpdatedPreviewEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::Preview::IGazeEnteredPreviewEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeEnteredPreviewEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::Preview::IGazeExitedPreviewEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeExitedPreviewEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::Preview::IGazeInputSourcePreview>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeInputSourcePreview" };
    };
    template <> struct name<Windows::Devices::Input::Preview::IGazeInputSourcePreviewStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeInputSourcePreviewStatics" };
    };
    template <> struct name<Windows::Devices::Input::Preview::IGazeMovedPreviewEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeMovedPreviewEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::Preview::IGazePointPreview>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazePointPreview" };
    };
    template <> struct name<Windows::Devices::Input::Preview::GazeDevicePreview>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeDevicePreview" };
    };
    template <> struct name<Windows::Devices::Input::Preview::GazeDeviceWatcherAddedPreviewEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeDeviceWatcherAddedPreviewEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeDeviceWatcherPreview" };
    };
    template <> struct name<Windows::Devices::Input::Preview::GazeDeviceWatcherRemovedPreviewEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeDeviceWatcherRemovedPreviewEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::Preview::GazeDeviceWatcherUpdatedPreviewEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeDeviceWatcherUpdatedPreviewEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::Preview::GazeEnteredPreviewEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeEnteredPreviewEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::Preview::GazeExitedPreviewEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeExitedPreviewEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::Preview::GazeInputSourcePreview>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeInputSourcePreview" };
    };
    template <> struct name<Windows::Devices::Input::Preview::GazeMovedPreviewEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeMovedPreviewEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::Preview::GazePointPreview>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazePointPreview" };
    };
    template <> struct name<Windows::Devices::Input::Preview::GazeDeviceConfigurationStatePreview>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeDeviceConfigurationStatePreview" };
    };
    template <> struct guid_storage<Windows::Devices::Input::Preview::IGazeDevicePreview>
    {
        static constexpr guid value{ 0xE79E7EE9,0xB389,0x11E7,{ 0xB2,0x01,0xC8,0xD3,0xFF,0xB7,0x57,0x21 } };
    };
    template <> struct guid_storage<Windows::Devices::Input::Preview::IGazeDeviceWatcherAddedPreviewEventArgs>
    {
        static constexpr guid value{ 0xE79E7EED,0xB389,0x11E7,{ 0xB2,0x01,0xC8,0xD3,0xFF,0xB7,0x57,0x21 } };
    };
    template <> struct guid_storage<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview>
    {
        static constexpr guid value{ 0xE79E7EE7,0xB389,0x11E7,{ 0xB2,0x01,0xC8,0xD3,0xFF,0xB7,0x57,0x21 } };
    };
    template <> struct guid_storage<Windows::Devices::Input::Preview::IGazeDeviceWatcherRemovedPreviewEventArgs>
    {
        static constexpr guid value{ 0xF2631F08,0x0E3F,0x431F,{ 0xA6,0x06,0x50,0xB3,0x5A,0xF9,0x4A,0x1C } };
    };
    template <> struct guid_storage<Windows::Devices::Input::Preview::IGazeDeviceWatcherUpdatedPreviewEventArgs>
    {
        static constexpr guid value{ 0x7FE830EF,0x7F08,0x4737,{ 0x88,0xE1,0x4A,0x83,0xAE,0x4E,0x48,0x85 } };
    };
    template <> struct guid_storage<Windows::Devices::Input::Preview::IGazeEnteredPreviewEventArgs>
    {
        static constexpr guid value{ 0x2567BF43,0x1225,0x489F,{ 0x9D,0xD1,0xDA,0xA7,0xC5,0x0F,0xBF,0x4B } };
    };
    template <> struct guid_storage<Windows::Devices::Input::Preview::IGazeExitedPreviewEventArgs>
    {
        static constexpr guid value{ 0x5D0AF07E,0x7D83,0x40EF,{ 0x9F,0x0A,0xFB,0xC1,0xBB,0xDC,0xC5,0xAC } };
    };
    template <> struct guid_storage<Windows::Devices::Input::Preview::IGazeInputSourcePreview>
    {
        static constexpr guid value{ 0xE79E7EE8,0xB389,0x11E7,{ 0xB2,0x01,0xC8,0xD3,0xFF,0xB7,0x57,0x21 } };
    };
    template <> struct guid_storage<Windows::Devices::Input::Preview::IGazeInputSourcePreviewStatics>
    {
        static constexpr guid value{ 0xE79E7EE6,0xB389,0x11E7,{ 0xB2,0x01,0xC8,0xD3,0xFF,0xB7,0x57,0x21 } };
    };
    template <> struct guid_storage<Windows::Devices::Input::Preview::IGazeMovedPreviewEventArgs>
    {
        static constexpr guid value{ 0xE79E7EEB,0xB389,0x11E7,{ 0xB2,0x01,0xC8,0xD3,0xFF,0xB7,0x57,0x21 } };
    };
    template <> struct guid_storage<Windows::Devices::Input::Preview::IGazePointPreview>
    {
        static constexpr guid value{ 0xE79E7EEA,0xB389,0x11E7,{ 0xB2,0x01,0xC8,0xD3,0xFF,0xB7,0x57,0x21 } };
    };
    template <> struct default_interface<Windows::Devices::Input::Preview::GazeDevicePreview>
    {
        using type = Windows::Devices::Input::Preview::IGazeDevicePreview;
    };
    template <> struct default_interface<Windows::Devices::Input::Preview::GazeDeviceWatcherAddedPreviewEventArgs>
    {
        using type = Windows::Devices::Input::Preview::IGazeDeviceWatcherAddedPreviewEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview>
    {
        using type = Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview;
    };
    template <> struct default_interface<Windows::Devices::Input::Preview::GazeDeviceWatcherRemovedPreviewEventArgs>
    {
        using type = Windows::Devices::Input::Preview::IGazeDeviceWatcherRemovedPreviewEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Input::Preview::GazeDeviceWatcherUpdatedPreviewEventArgs>
    {
        using type = Windows::Devices::Input::Preview::IGazeDeviceWatcherUpdatedPreviewEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Input::Preview::GazeEnteredPreviewEventArgs>
    {
        using type = Windows::Devices::Input::Preview::IGazeEnteredPreviewEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Input::Preview::GazeExitedPreviewEventArgs>
    {
        using type = Windows::Devices::Input::Preview::IGazeExitedPreviewEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Input::Preview::GazeInputSourcePreview>
    {
        using type = Windows::Devices::Input::Preview::IGazeInputSourcePreview;
    };
    template <> struct default_interface<Windows::Devices::Input::Preview::GazeMovedPreviewEventArgs>
    {
        using type = Windows::Devices::Input::Preview::IGazeMovedPreviewEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Input::Preview::GazePointPreview>
    {
        using type = Windows::Devices::Input::Preview::IGazePointPreview;
    };
    template <> struct abi<Windows::Devices::Input::Preview::IGazeDevicePreview>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CanTrackEyes(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanTrackHead(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ConfigurationState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall RequestCalibrationAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetNumericControlDescriptions(uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetBooleanControlDescriptions(uint16_t, uint16_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::Preview::IGazeDeviceWatcherAddedPreviewEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Device(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Added(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Added(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Removed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Removed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Updated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Updated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::Preview::IGazeDeviceWatcherRemovedPreviewEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Device(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::Preview::IGazeDeviceWatcherUpdatedPreviewEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Device(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::Preview::IGazeEnteredPreviewEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_CurrentPoint(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::Preview::IGazeExitedPreviewEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_CurrentPoint(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::Preview::IGazeInputSourcePreview>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_GazeMoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GazeMoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_GazeEntered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GazeEntered(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_GazeExited(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GazeExited(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::Preview::IGazeInputSourcePreviewStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall CreateWatcher(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::Preview::IGazeMovedPreviewEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_CurrentPoint(void**) noexcept = 0;
            virtual int32_t __stdcall GetIntermediatePoints(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::Preview::IGazePointPreview>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceDevice(void**) noexcept = 0;
            virtual int32_t __stdcall get_EyeGazePosition(void**) noexcept = 0;
            virtual int32_t __stdcall get_HeadGazePosition(void**) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_HidInputReport(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Input_Preview_IGazeDevicePreview
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto CanTrackEyes() const;
        [[nodiscard]] auto CanTrackHead() const;
        [[nodiscard]] auto ConfigurationState() const;
        auto RequestCalibrationAsync() const;
        auto GetNumericControlDescriptions(uint16_t usagePage, uint16_t usageId) const;
        auto GetBooleanControlDescriptions(uint16_t usagePage, uint16_t usageId) const;
    };
    template <> struct consume<Windows::Devices::Input::Preview::IGazeDevicePreview>
    {
        template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeDevicePreview<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_Preview_IGazeDeviceWatcherAddedPreviewEventArgs
    {
        [[nodiscard]] auto Device() const;
    };
    template <> struct consume<Windows::Devices::Input::Preview::IGazeDeviceWatcherAddedPreviewEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeDeviceWatcherAddedPreviewEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_Preview_IGazeDeviceWatcherPreview
    {
        auto Added(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview, Windows::Devices::Input::Preview::GazeDeviceWatcherAddedPreviewEventArgs> const& handler) const;
        using Added_revoker = impl::event_revoker<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview, &impl::abi_t<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview>::remove_Added>;
        Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview, Windows::Devices::Input::Preview::GazeDeviceWatcherAddedPreviewEventArgs> const& handler) const;
        auto Added(winrt::event_token const& token) const noexcept;
        auto Removed(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview, Windows::Devices::Input::Preview::GazeDeviceWatcherRemovedPreviewEventArgs> const& handler) const;
        using Removed_revoker = impl::event_revoker<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview, &impl::abi_t<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview>::remove_Removed>;
        Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview, Windows::Devices::Input::Preview::GazeDeviceWatcherRemovedPreviewEventArgs> const& handler) const;
        auto Removed(winrt::event_token const& token) const noexcept;
        auto Updated(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview, Windows::Devices::Input::Preview::GazeDeviceWatcherUpdatedPreviewEventArgs> const& handler) const;
        using Updated_revoker = impl::event_revoker<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview, &impl::abi_t<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview>::remove_Updated>;
        Updated_revoker Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview, Windows::Devices::Input::Preview::GazeDeviceWatcherUpdatedPreviewEventArgs> const& handler) const;
        auto Updated(winrt::event_token const& token) const noexcept;
        auto EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview, Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview, &impl::abi_t<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview>::remove_EnumerationCompleted>;
        EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview, Windows::Foundation::IInspectable> const& handler) const;
        auto EnumerationCompleted(winrt::event_token const& token) const noexcept;
        auto Start() const;
        auto Stop() const;
    };
    template <> struct consume<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview>
    {
        template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeDeviceWatcherPreview<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_Preview_IGazeDeviceWatcherRemovedPreviewEventArgs
    {
        [[nodiscard]] auto Device() const;
    };
    template <> struct consume<Windows::Devices::Input::Preview::IGazeDeviceWatcherRemovedPreviewEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeDeviceWatcherRemovedPreviewEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_Preview_IGazeDeviceWatcherUpdatedPreviewEventArgs
    {
        [[nodiscard]] auto Device() const;
    };
    template <> struct consume<Windows::Devices::Input::Preview::IGazeDeviceWatcherUpdatedPreviewEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeDeviceWatcherUpdatedPreviewEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_Preview_IGazeEnteredPreviewEventArgs
    {
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
        [[nodiscard]] auto CurrentPoint() const;
    };
    template <> struct consume<Windows::Devices::Input::Preview::IGazeEnteredPreviewEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeEnteredPreviewEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_Preview_IGazeExitedPreviewEventArgs
    {
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
        [[nodiscard]] auto CurrentPoint() const;
    };
    template <> struct consume<Windows::Devices::Input::Preview::IGazeExitedPreviewEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeExitedPreviewEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_Preview_IGazeInputSourcePreview
    {
        auto GazeMoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeInputSourcePreview, Windows::Devices::Input::Preview::GazeMovedPreviewEventArgs> const& handler) const;
        using GazeMoved_revoker = impl::event_revoker<Windows::Devices::Input::Preview::IGazeInputSourcePreview, &impl::abi_t<Windows::Devices::Input::Preview::IGazeInputSourcePreview>::remove_GazeMoved>;
        GazeMoved_revoker GazeMoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeInputSourcePreview, Windows::Devices::Input::Preview::GazeMovedPreviewEventArgs> const& handler) const;
        auto GazeMoved(winrt::event_token const& token) const noexcept;
        auto GazeEntered(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeInputSourcePreview, Windows::Devices::Input::Preview::GazeEnteredPreviewEventArgs> const& handler) const;
        using GazeEntered_revoker = impl::event_revoker<Windows::Devices::Input::Preview::IGazeInputSourcePreview, &impl::abi_t<Windows::Devices::Input::Preview::IGazeInputSourcePreview>::remove_GazeEntered>;
        GazeEntered_revoker GazeEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeInputSourcePreview, Windows::Devices::Input::Preview::GazeEnteredPreviewEventArgs> const& handler) const;
        auto GazeEntered(winrt::event_token const& token) const noexcept;
        auto GazeExited(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeInputSourcePreview, Windows::Devices::Input::Preview::GazeExitedPreviewEventArgs> const& handler) const;
        using GazeExited_revoker = impl::event_revoker<Windows::Devices::Input::Preview::IGazeInputSourcePreview, &impl::abi_t<Windows::Devices::Input::Preview::IGazeInputSourcePreview>::remove_GazeExited>;
        GazeExited_revoker GazeExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeInputSourcePreview, Windows::Devices::Input::Preview::GazeExitedPreviewEventArgs> const& handler) const;
        auto GazeExited(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Input::Preview::IGazeInputSourcePreview>
    {
        template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeInputSourcePreview<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_Preview_IGazeInputSourcePreviewStatics
    {
        auto GetForCurrentView() const;
        auto CreateWatcher() const;
    };
    template <> struct consume<Windows::Devices::Input::Preview::IGazeInputSourcePreviewStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeInputSourcePreviewStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_Preview_IGazeMovedPreviewEventArgs
    {
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
        [[nodiscard]] auto CurrentPoint() const;
        auto GetIntermediatePoints() const;
    };
    template <> struct consume<Windows::Devices::Input::Preview::IGazeMovedPreviewEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeMovedPreviewEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_Preview_IGazePointPreview
    {
        [[nodiscard]] auto SourceDevice() const;
        [[nodiscard]] auto EyeGazePosition() const;
        [[nodiscard]] auto HeadGazePosition() const;
        [[nodiscard]] auto Timestamp() const;
        [[nodiscard]] auto HidInputReport() const;
    };
    template <> struct consume<Windows::Devices::Input::Preview::IGazePointPreview>
    {
        template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazePointPreview<D>;
    };
}
#endif
