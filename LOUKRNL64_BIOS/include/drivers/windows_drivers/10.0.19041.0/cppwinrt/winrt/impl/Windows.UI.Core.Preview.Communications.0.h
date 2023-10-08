// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Core_Preview_Communications_0_H
#define WINRT_Windows_UI_Core_Preview_Communications_0_H
namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct Rect;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
namespace winrt::Windows::UI::Core::Preview::Communications
{
    enum class PreviewMeetingInfoDisplayKind : int32_t
    {
        OrganizerAndTime = 0,
        OrganizerTimeAndTitle = 1,
    };
    enum class PreviewSystemState : int32_t
    {
        Preparing = 0,
        Rebooting = 1,
        Error = 2,
        SessionPaused = 3,
        Ready = 4,
    };
    enum class PreviewTeamEndMeetingKind : int32_t
    {
        ShowDefaultView = 0,
        CloseView = 1,
    };
    enum class PreviewTeamViewCommand : int32_t
    {
        ToggleCallControl = 0,
        ShowPeople = 1,
        ShowMessaging = 2,
        ShowContent = 3,
        ToggleMicrophone = 4,
        ToggleCamera = 5,
        ShowCalendar = 6,
        ToggleScreenSharing = 7,
        ToggleFullScreen = 8,
    };
    struct IPreviewTeamCleanupRequestedEventArgs;
    struct IPreviewTeamCommandInvokedEventArgs;
    struct IPreviewTeamDeviceCredentials;
    struct IPreviewTeamEndMeetingRequestedEventArgs;
    struct IPreviewTeamJoinMeetingRequestedEventArgs;
    struct IPreviewTeamView;
    struct IPreviewTeamView2;
    struct IPreviewTeamViewStatics;
    struct PreviewTeamCleanupRequestedEventArgs;
    struct PreviewTeamCommandInvokedEventArgs;
    struct PreviewTeamDeviceCredentials;
    struct PreviewTeamEndMeetingRequestedEventArgs;
    struct PreviewTeamJoinMeetingRequestedEventArgs;
    struct PreviewTeamView;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Core::Preview::Communications::IPreviewTeamCleanupRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Core::Preview::Communications::IPreviewTeamCommandInvokedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Core::Preview::Communications::IPreviewTeamDeviceCredentials>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Core::Preview::Communications::IPreviewTeamEndMeetingRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Core::Preview::Communications::IPreviewTeamJoinMeetingRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Core::Preview::Communications::IPreviewTeamView>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Core::Preview::Communications::IPreviewTeamView2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Core::Preview::Communications::IPreviewTeamViewStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Core::Preview::Communications::PreviewTeamCleanupRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Core::Preview::Communications::PreviewTeamCommandInvokedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Core::Preview::Communications::PreviewTeamDeviceCredentials>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Core::Preview::Communications::PreviewTeamEndMeetingRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Core::Preview::Communications::PreviewTeamJoinMeetingRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Core::Preview::Communications::PreviewTeamView>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Core::Preview::Communications::PreviewMeetingInfoDisplayKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Core::Preview::Communications::PreviewSystemState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Core::Preview::Communications::PreviewTeamEndMeetingKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Core::Preview::Communications::PreviewTeamViewCommand>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::UI::Core::Preview::Communications::IPreviewTeamCleanupRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.Communications.IPreviewTeamCleanupRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Core::Preview::Communications::IPreviewTeamCommandInvokedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.Communications.IPreviewTeamCommandInvokedEventArgs" };
    };
    template <> struct name<Windows::UI::Core::Preview::Communications::IPreviewTeamDeviceCredentials>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.Communications.IPreviewTeamDeviceCredentials" };
    };
    template <> struct name<Windows::UI::Core::Preview::Communications::IPreviewTeamEndMeetingRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.Communications.IPreviewTeamEndMeetingRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Core::Preview::Communications::IPreviewTeamJoinMeetingRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.Communications.IPreviewTeamJoinMeetingRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Core::Preview::Communications::IPreviewTeamView>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.Communications.IPreviewTeamView" };
    };
    template <> struct name<Windows::UI::Core::Preview::Communications::IPreviewTeamView2>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.Communications.IPreviewTeamView2" };
    };
    template <> struct name<Windows::UI::Core::Preview::Communications::IPreviewTeamViewStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.Communications.IPreviewTeamViewStatics" };
    };
    template <> struct name<Windows::UI::Core::Preview::Communications::PreviewTeamCleanupRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.Communications.PreviewTeamCleanupRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Core::Preview::Communications::PreviewTeamCommandInvokedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.Communications.PreviewTeamCommandInvokedEventArgs" };
    };
    template <> struct name<Windows::UI::Core::Preview::Communications::PreviewTeamDeviceCredentials>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.Communications.PreviewTeamDeviceCredentials" };
    };
    template <> struct name<Windows::UI::Core::Preview::Communications::PreviewTeamEndMeetingRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.Communications.PreviewTeamEndMeetingRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Core::Preview::Communications::PreviewTeamJoinMeetingRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.Communications.PreviewTeamJoinMeetingRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Core::Preview::Communications::PreviewTeamView>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.Communications.PreviewTeamView" };
    };
    template <> struct name<Windows::UI::Core::Preview::Communications::PreviewMeetingInfoDisplayKind>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.Communications.PreviewMeetingInfoDisplayKind" };
    };
    template <> struct name<Windows::UI::Core::Preview::Communications::PreviewSystemState>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.Communications.PreviewSystemState" };
    };
    template <> struct name<Windows::UI::Core::Preview::Communications::PreviewTeamEndMeetingKind>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.Communications.PreviewTeamEndMeetingKind" };
    };
    template <> struct name<Windows::UI::Core::Preview::Communications::PreviewTeamViewCommand>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.Communications.PreviewTeamViewCommand" };
    };
    template <> struct guid_storage<Windows::UI::Core::Preview::Communications::IPreviewTeamCleanupRequestedEventArgs>
    {
        static constexpr guid value{ 0xF0190610,0x05AF,0x4250,{ 0xB9,0x6A,0xA7,0x4E,0xDE,0xF7,0x7A,0x0D } };
    };
    template <> struct guid_storage<Windows::UI::Core::Preview::Communications::IPreviewTeamCommandInvokedEventArgs>
    {
        static constexpr guid value{ 0x661F4165,0xFE71,0x44AF,{ 0x95,0x68,0x6C,0xC7,0xCF,0x29,0xCD,0x4C } };
    };
    template <> struct guid_storage<Windows::UI::Core::Preview::Communications::IPreviewTeamDeviceCredentials>
    {
        static constexpr guid value{ 0x8959C9B9,0x02FC,0x4D1D,{ 0x89,0x21,0xD6,0x1E,0x77,0x66,0xCB,0x89 } };
    };
    template <> struct guid_storage<Windows::UI::Core::Preview::Communications::IPreviewTeamEndMeetingRequestedEventArgs>
    {
        static constexpr guid value{ 0x10B149E1,0xB6F1,0x4CA7,{ 0xB4,0xCE,0x2C,0x66,0xA4,0xA6,0x46,0x99 } };
    };
    template <> struct guid_storage<Windows::UI::Core::Preview::Communications::IPreviewTeamJoinMeetingRequestedEventArgs>
    {
        static constexpr guid value{ 0x421E6ADB,0x98D7,0x41AE,{ 0xBA,0x49,0x6C,0xAF,0x55,0x9B,0x8F,0x5A } };
    };
    template <> struct guid_storage<Windows::UI::Core::Preview::Communications::IPreviewTeamView>
    {
        static constexpr guid value{ 0x6F616677,0x02AE,0x49A0,{ 0xAA,0x50,0x86,0x2D,0x07,0x8C,0xF9,0xB1 } };
    };
    template <> struct guid_storage<Windows::UI::Core::Preview::Communications::IPreviewTeamView2>
    {
        static constexpr guid value{ 0xBD44B2A2,0x0D77,0x416D,{ 0xA3,0x70,0x9E,0xA5,0xEC,0xE4,0x62,0x29 } };
    };
    template <> struct guid_storage<Windows::UI::Core::Preview::Communications::IPreviewTeamViewStatics>
    {
        static constexpr guid value{ 0xFE241233,0xD49C,0x49EE,{ 0xB7,0x98,0xEC,0x31,0xD9,0x54,0x39,0x38 } };
    };
    template <> struct default_interface<Windows::UI::Core::Preview::Communications::PreviewTeamCleanupRequestedEventArgs>
    {
        using type = Windows::UI::Core::Preview::Communications::IPreviewTeamCleanupRequestedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Core::Preview::Communications::PreviewTeamCommandInvokedEventArgs>
    {
        using type = Windows::UI::Core::Preview::Communications::IPreviewTeamCommandInvokedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Core::Preview::Communications::PreviewTeamDeviceCredentials>
    {
        using type = Windows::UI::Core::Preview::Communications::IPreviewTeamDeviceCredentials;
    };
    template <> struct default_interface<Windows::UI::Core::Preview::Communications::PreviewTeamEndMeetingRequestedEventArgs>
    {
        using type = Windows::UI::Core::Preview::Communications::IPreviewTeamEndMeetingRequestedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Core::Preview::Communications::PreviewTeamJoinMeetingRequestedEventArgs>
    {
        using type = Windows::UI::Core::Preview::Communications::IPreviewTeamJoinMeetingRequestedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Core::Preview::Communications::PreviewTeamView>
    {
        using type = Windows::UI::Core::Preview::Communications::IPreviewTeamView;
    };
    template <> struct abi<Windows::UI::Core::Preview::Communications::IPreviewTeamCleanupRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Core::Preview::Communications::IPreviewTeamCommandInvokedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Command(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Core::Preview::Communications::IPreviewTeamDeviceCredentials>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UserPrincipalName(void**) noexcept = 0;
            virtual int32_t __stdcall get_DomainUserName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Password(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Core::Preview::Communications::IPreviewTeamEndMeetingRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Core::Preview::Communications::IPreviewTeamJoinMeetingRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall get_MeetingUri(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Core::Preview::Communications::IPreviewTeamView>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetTitle(void*) noexcept = 0;
            virtual int32_t __stdcall EnterFullScreen() noexcept = 0;
            virtual int32_t __stdcall LeaveFullScreen() noexcept = 0;
            virtual int32_t __stdcall RequestForeground() noexcept = 0;
            virtual int32_t __stdcall StartSharingScreen() noexcept = 0;
            virtual int32_t __stdcall StopSharingScreen() noexcept = 0;
            virtual int32_t __stdcall NotifyMeetingEnded(int32_t) noexcept = 0;
            virtual int32_t __stdcall JoinMeetingWithUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_MeetingUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_SharingScreenBounds(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_IsScreenSharing(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsFullScreen(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SystemState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MeetingInfoDisplayType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_JoinMeetingRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_JoinMeetingRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EndMeetingRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EndMeetingRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CleanupRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CleanupRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SharingScreenBoundsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SharingScreenBoundsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_IsScreenSharingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsScreenSharingChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_IsFullScreenChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsFullScreenChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CommandInvoked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CommandInvoked(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SystemStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SystemStateChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Core::Preview::Communications::IPreviewTeamView2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetButtonLabel(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Core::Preview::Communications::IPreviewTeamViewStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Core_Preview_Communications_IPreviewTeamCleanupRequestedEventArgs
    {
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Core::Preview::Communications::IPreviewTeamCleanupRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_Preview_Communications_IPreviewTeamCleanupRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_Preview_Communications_IPreviewTeamCommandInvokedEventArgs
    {
        [[nodiscard]] auto Command() const;
    };
    template <> struct consume<Windows::UI::Core::Preview::Communications::IPreviewTeamCommandInvokedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_Preview_Communications_IPreviewTeamCommandInvokedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_Preview_Communications_IPreviewTeamDeviceCredentials
    {
        [[nodiscard]] auto UserPrincipalName() const;
        [[nodiscard]] auto DomainUserName() const;
        [[nodiscard]] auto Password() const;
    };
    template <> struct consume<Windows::UI::Core::Preview::Communications::IPreviewTeamDeviceCredentials>
    {
        template <typename D> using type = consume_Windows_UI_Core_Preview_Communications_IPreviewTeamDeviceCredentials<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_Preview_Communications_IPreviewTeamEndMeetingRequestedEventArgs
    {
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Core::Preview::Communications::IPreviewTeamEndMeetingRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_Preview_Communications_IPreviewTeamEndMeetingRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_Preview_Communications_IPreviewTeamJoinMeetingRequestedEventArgs
    {
        auto GetDeferral() const;
        [[nodiscard]] auto MeetingUri() const;
    };
    template <> struct consume<Windows::UI::Core::Preview::Communications::IPreviewTeamJoinMeetingRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_Preview_Communications_IPreviewTeamJoinMeetingRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_Preview_Communications_IPreviewTeamView
    {
        auto SetTitle(param::hstring const& title) const;
        auto EnterFullScreen() const;
        auto LeaveFullScreen() const;
        auto RequestForeground() const;
        auto StartSharingScreen() const;
        auto StopSharingScreen() const;
        auto NotifyMeetingEnded(Windows::UI::Core::Preview::Communications::PreviewTeamEndMeetingKind const& kind) const;
        auto JoinMeetingWithUri(Windows::Foundation::Uri const& meetingUri) const;
        [[nodiscard]] auto MeetingUri() const;
        [[nodiscard]] auto SharingScreenBounds() const;
        [[nodiscard]] auto IsScreenSharing() const;
        [[nodiscard]] auto IsFullScreen() const;
        [[nodiscard]] auto SystemState() const;
        [[nodiscard]] auto MeetingInfoDisplayType() const;
        auto JoinMeetingRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Core::Preview::Communications::PreviewTeamView, Windows::UI::Core::Preview::Communications::PreviewTeamJoinMeetingRequestedEventArgs> const& handler) const;
        using JoinMeetingRequested_revoker = impl::event_revoker<Windows::UI::Core::Preview::Communications::IPreviewTeamView, &impl::abi_t<Windows::UI::Core::Preview::Communications::IPreviewTeamView>::remove_JoinMeetingRequested>;
        JoinMeetingRequested_revoker JoinMeetingRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::Preview::Communications::PreviewTeamView, Windows::UI::Core::Preview::Communications::PreviewTeamJoinMeetingRequestedEventArgs> const& handler) const;
        auto JoinMeetingRequested(winrt::event_token const& token) const noexcept;
        auto EndMeetingRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Core::Preview::Communications::PreviewTeamView, Windows::UI::Core::Preview::Communications::PreviewTeamEndMeetingRequestedEventArgs> const& handler) const;
        using EndMeetingRequested_revoker = impl::event_revoker<Windows::UI::Core::Preview::Communications::IPreviewTeamView, &impl::abi_t<Windows::UI::Core::Preview::Communications::IPreviewTeamView>::remove_EndMeetingRequested>;
        EndMeetingRequested_revoker EndMeetingRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::Preview::Communications::PreviewTeamView, Windows::UI::Core::Preview::Communications::PreviewTeamEndMeetingRequestedEventArgs> const& handler) const;
        auto EndMeetingRequested(winrt::event_token const& token) const noexcept;
        auto CleanupRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Core::Preview::Communications::PreviewTeamView, Windows::UI::Core::Preview::Communications::PreviewTeamCleanupRequestedEventArgs> const& handler) const;
        using CleanupRequested_revoker = impl::event_revoker<Windows::UI::Core::Preview::Communications::IPreviewTeamView, &impl::abi_t<Windows::UI::Core::Preview::Communications::IPreviewTeamView>::remove_CleanupRequested>;
        CleanupRequested_revoker CleanupRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::Preview::Communications::PreviewTeamView, Windows::UI::Core::Preview::Communications::PreviewTeamCleanupRequestedEventArgs> const& handler) const;
        auto CleanupRequested(winrt::event_token const& token) const noexcept;
        auto SharingScreenBoundsChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Core::Preview::Communications::PreviewTeamView, Windows::Foundation::IInspectable> const& handler) const;
        using SharingScreenBoundsChanged_revoker = impl::event_revoker<Windows::UI::Core::Preview::Communications::IPreviewTeamView, &impl::abi_t<Windows::UI::Core::Preview::Communications::IPreviewTeamView>::remove_SharingScreenBoundsChanged>;
        SharingScreenBoundsChanged_revoker SharingScreenBoundsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::Preview::Communications::PreviewTeamView, Windows::Foundation::IInspectable> const& handler) const;
        auto SharingScreenBoundsChanged(winrt::event_token const& token) const noexcept;
        auto IsScreenSharingChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Core::Preview::Communications::PreviewTeamView, Windows::Foundation::IInspectable> const& handler) const;
        using IsScreenSharingChanged_revoker = impl::event_revoker<Windows::UI::Core::Preview::Communications::IPreviewTeamView, &impl::abi_t<Windows::UI::Core::Preview::Communications::IPreviewTeamView>::remove_IsScreenSharingChanged>;
        IsScreenSharingChanged_revoker IsScreenSharingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::Preview::Communications::PreviewTeamView, Windows::Foundation::IInspectable> const& handler) const;
        auto IsScreenSharingChanged(winrt::event_token const& token) const noexcept;
        auto IsFullScreenChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Core::Preview::Communications::PreviewTeamView, Windows::Foundation::IInspectable> const& handler) const;
        using IsFullScreenChanged_revoker = impl::event_revoker<Windows::UI::Core::Preview::Communications::IPreviewTeamView, &impl::abi_t<Windows::UI::Core::Preview::Communications::IPreviewTeamView>::remove_IsFullScreenChanged>;
        IsFullScreenChanged_revoker IsFullScreenChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::Preview::Communications::PreviewTeamView, Windows::Foundation::IInspectable> const& handler) const;
        auto IsFullScreenChanged(winrt::event_token const& token) const noexcept;
        auto CommandInvoked(Windows::Foundation::TypedEventHandler<Windows::UI::Core::Preview::Communications::PreviewTeamView, Windows::UI::Core::Preview::Communications::PreviewTeamCommandInvokedEventArgs> const& handler) const;
        using CommandInvoked_revoker = impl::event_revoker<Windows::UI::Core::Preview::Communications::IPreviewTeamView, &impl::abi_t<Windows::UI::Core::Preview::Communications::IPreviewTeamView>::remove_CommandInvoked>;
        CommandInvoked_revoker CommandInvoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::Preview::Communications::PreviewTeamView, Windows::UI::Core::Preview::Communications::PreviewTeamCommandInvokedEventArgs> const& handler) const;
        auto CommandInvoked(winrt::event_token const& token) const noexcept;
        auto SystemStateChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Core::Preview::Communications::PreviewTeamView, Windows::Foundation::IInspectable> const& handler) const;
        using SystemStateChanged_revoker = impl::event_revoker<Windows::UI::Core::Preview::Communications::IPreviewTeamView, &impl::abi_t<Windows::UI::Core::Preview::Communications::IPreviewTeamView>::remove_SystemStateChanged>;
        SystemStateChanged_revoker SystemStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::Preview::Communications::PreviewTeamView, Windows::Foundation::IInspectable> const& handler) const;
        auto SystemStateChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Core::Preview::Communications::IPreviewTeamView>
    {
        template <typename D> using type = consume_Windows_UI_Core_Preview_Communications_IPreviewTeamView<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_Preview_Communications_IPreviewTeamView2
    {
        auto SetButtonLabel(param::hstring const& label) const;
    };
    template <> struct consume<Windows::UI::Core::Preview::Communications::IPreviewTeamView2>
    {
        template <typename D> using type = consume_Windows_UI_Core_Preview_Communications_IPreviewTeamView2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_Preview_Communications_IPreviewTeamViewStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::UI::Core::Preview::Communications::IPreviewTeamViewStatics>
    {
        template <typename D> using type = consume_Windows_UI_Core_Preview_Communications_IPreviewTeamViewStatics<D>;
    };
}
#endif
