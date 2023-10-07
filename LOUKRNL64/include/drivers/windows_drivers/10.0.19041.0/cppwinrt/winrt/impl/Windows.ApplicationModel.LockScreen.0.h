// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_LockScreen_0_H
#define WINRT_Windows_ApplicationModel_LockScreen_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStream;
}
namespace winrt::Windows::ApplicationModel::LockScreen
{
    struct ILockApplicationHost;
    struct ILockApplicationHostStatics;
    struct ILockScreenBadge;
    struct ILockScreenInfo;
    struct ILockScreenUnlockingDeferral;
    struct ILockScreenUnlockingEventArgs;
    struct LockApplicationHost;
    struct LockScreenBadge;
    struct LockScreenInfo;
    struct LockScreenUnlockingDeferral;
    struct LockScreenUnlockingEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::LockScreen::ILockApplicationHost>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::LockScreen::ILockScreenBadge>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::LockScreen::ILockScreenInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::LockScreen::LockApplicationHost>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::LockScreen::LockScreenBadge>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::LockScreen::LockScreenInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::LockScreen::LockScreenUnlockingDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs>
    {
        using type = class_category;
    };
    template <> struct name<Windows::ApplicationModel::LockScreen::ILockApplicationHost>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.ILockApplicationHost" };
    };
    template <> struct name<Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.ILockApplicationHostStatics" };
    };
    template <> struct name<Windows::ApplicationModel::LockScreen::ILockScreenBadge>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.ILockScreenBadge" };
    };
    template <> struct name<Windows::ApplicationModel::LockScreen::ILockScreenInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.ILockScreenInfo" };
    };
    template <> struct name<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.ILockScreenUnlockingDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.ILockScreenUnlockingEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::LockScreen::LockApplicationHost>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.LockApplicationHost" };
    };
    template <> struct name<Windows::ApplicationModel::LockScreen::LockScreenBadge>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.LockScreenBadge" };
    };
    template <> struct name<Windows::ApplicationModel::LockScreen::LockScreenInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.LockScreenInfo" };
    };
    template <> struct name<Windows::ApplicationModel::LockScreen::LockScreenUnlockingDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.LockScreenUnlockingDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.LockScreen.LockScreenUnlockingEventArgs" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::LockScreen::ILockApplicationHost>
    {
        static constexpr guid value{ 0x38EE31AD,0xD94F,0x4E7C,{ 0x81,0xFA,0x4F,0x44,0x36,0x50,0x62,0x81 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics>
    {
        static constexpr guid value{ 0xF48FAB8E,0x23D7,0x4E63,{ 0x96,0xA1,0x66,0x6F,0xF5,0x2D,0x3B,0x2C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::LockScreen::ILockScreenBadge>
    {
        static constexpr guid value{ 0xE95105D9,0x2BFF,0x4DB0,{ 0x9B,0x4F,0x38,0x24,0x77,0x8B,0x9C,0x9A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::LockScreen::ILockScreenInfo>
    {
        static constexpr guid value{ 0xF59AA65C,0x9711,0x4DC9,{ 0xA6,0x30,0x95,0xB6,0xCB,0x8C,0xDA,0xD0 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral>
    {
        static constexpr guid value{ 0x7E7D1AD6,0x5203,0x43E7,{ 0x9B,0xD6,0x7C,0x39,0x47,0xD1,0xE3,0xFE } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs>
    {
        static constexpr guid value{ 0x44E6C007,0x75FB,0x4ABB,{ 0x9F,0x8B,0x82,0x47,0x48,0x90,0x0C,0x71 } };
    };
    template <> struct default_interface<Windows::ApplicationModel::LockScreen::LockApplicationHost>
    {
        using type = Windows::ApplicationModel::LockScreen::ILockApplicationHost;
    };
    template <> struct default_interface<Windows::ApplicationModel::LockScreen::LockScreenBadge>
    {
        using type = Windows::ApplicationModel::LockScreen::ILockScreenBadge;
    };
    template <> struct default_interface<Windows::ApplicationModel::LockScreen::LockScreenInfo>
    {
        using type = Windows::ApplicationModel::LockScreen::ILockScreenInfo;
    };
    template <> struct default_interface<Windows::ApplicationModel::LockScreen::LockScreenUnlockingDeferral>
    {
        using type = Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral;
    };
    template <> struct default_interface<Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs>
    {
        using type = Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs;
    };
    template <> struct abi<Windows::ApplicationModel::LockScreen::ILockApplicationHost>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestUnlock() noexcept = 0;
            virtual int32_t __stdcall add_Unlocking(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Unlocking(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::LockScreen::ILockScreenBadge>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Logo(void**) noexcept = 0;
            virtual int32_t __stdcall get_Glyph(void**) noexcept = 0;
            virtual int32_t __stdcall get_Number(void**) noexcept = 0;
            virtual int32_t __stdcall get_AutomationName(void**) noexcept = 0;
            virtual int32_t __stdcall LaunchApp() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::LockScreen::ILockScreenInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_LockScreenImageChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LockScreenImageChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_LockScreenImage(void**) noexcept = 0;
            virtual int32_t __stdcall add_BadgesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BadgesChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Badges(void**) noexcept = 0;
            virtual int32_t __stdcall add_DetailTextChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DetailTextChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_DetailText(void**) noexcept = 0;
            virtual int32_t __stdcall add_AlarmIconChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AlarmIconChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_AlarmIcon(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall get_Deadline(int64_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_LockScreen_ILockApplicationHost
    {
        auto RequestUnlock() const;
        auto Unlocking(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockApplicationHost, Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> const& handler) const;
        using Unlocking_revoker = impl::event_revoker<Windows::ApplicationModel::LockScreen::ILockApplicationHost, &impl::abi_t<Windows::ApplicationModel::LockScreen::ILockApplicationHost>::remove_Unlocking>;
        Unlocking_revoker Unlocking(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockApplicationHost, Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> const& handler) const;
        auto Unlocking(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::LockScreen::ILockApplicationHost>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_LockScreen_ILockApplicationHost<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_LockScreen_ILockApplicationHostStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_LockScreen_ILockApplicationHostStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_LockScreen_ILockScreenBadge
    {
        [[nodiscard]] auto Logo() const;
        [[nodiscard]] auto Glyph() const;
        [[nodiscard]] auto Number() const;
        [[nodiscard]] auto AutomationName() const;
        auto LaunchApp() const;
    };
    template <> struct consume<Windows::ApplicationModel::LockScreen::ILockScreenBadge>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_LockScreen_ILockScreenBadge<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo
    {
        auto LockScreenImageChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const;
        using LockScreenImageChanged_revoker = impl::event_revoker<Windows::ApplicationModel::LockScreen::ILockScreenInfo, &impl::abi_t<Windows::ApplicationModel::LockScreen::ILockScreenInfo>::remove_LockScreenImageChanged>;
        LockScreenImageChanged_revoker LockScreenImageChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const;
        auto LockScreenImageChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto LockScreenImage() const;
        auto BadgesChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const;
        using BadgesChanged_revoker = impl::event_revoker<Windows::ApplicationModel::LockScreen::ILockScreenInfo, &impl::abi_t<Windows::ApplicationModel::LockScreen::ILockScreenInfo>::remove_BadgesChanged>;
        BadgesChanged_revoker BadgesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const;
        auto BadgesChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto Badges() const;
        auto DetailTextChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const;
        using DetailTextChanged_revoker = impl::event_revoker<Windows::ApplicationModel::LockScreen::ILockScreenInfo, &impl::abi_t<Windows::ApplicationModel::LockScreen::ILockScreenInfo>::remove_DetailTextChanged>;
        DetailTextChanged_revoker DetailTextChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const;
        auto DetailTextChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto DetailText() const;
        auto AlarmIconChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const;
        using AlarmIconChanged_revoker = impl::event_revoker<Windows::ApplicationModel::LockScreen::ILockScreenInfo, &impl::abi_t<Windows::ApplicationModel::LockScreen::ILockScreenInfo>::remove_AlarmIconChanged>;
        AlarmIconChanged_revoker AlarmIconChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const;
        auto AlarmIconChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto AlarmIcon() const;
    };
    template <> struct consume<Windows::ApplicationModel::LockScreen::ILockScreenInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingEventArgs
    {
        auto GetDeferral() const;
        [[nodiscard]] auto Deadline() const;
    };
    template <> struct consume<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingEventArgs<D>;
    };
}
#endif
