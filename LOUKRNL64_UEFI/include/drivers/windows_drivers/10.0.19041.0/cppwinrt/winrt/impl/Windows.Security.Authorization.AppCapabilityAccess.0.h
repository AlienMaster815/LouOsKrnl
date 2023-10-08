// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authorization_AppCapabilityAccess_0_H
#define WINRT_Windows_Security_Authorization_AppCapabilityAccess_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::Security::Authorization::AppCapabilityAccess
{
    enum class AppCapabilityAccessStatus : int32_t
    {
        DeniedBySystem = 0,
        NotDeclaredByApp = 1,
        DeniedByUser = 2,
        UserPromptRequired = 3,
        Allowed = 4,
    };
    struct IAppCapability;
    struct IAppCapabilityAccessChangedEventArgs;
    struct IAppCapabilityStatics;
    struct AppCapability;
    struct AppCapabilityAccessChangedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::Security::Authorization::AppCapabilityAccess::IAppCapability>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authorization::AppCapabilityAccess::IAppCapabilityAccessChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authorization::AppCapabilityAccess::IAppCapabilityStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authorization::AppCapabilityAccess::AppCapability>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Security::Authorization::AppCapabilityAccess::IAppCapability>
    {
        static constexpr auto & value{ L"Windows.Security.Authorization.AppCapabilityAccess.IAppCapability" };
    };
    template <> struct name<Windows::Security::Authorization::AppCapabilityAccess::IAppCapabilityAccessChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Security.Authorization.AppCapabilityAccess.IAppCapabilityAccessChangedEventArgs" };
    };
    template <> struct name<Windows::Security::Authorization::AppCapabilityAccess::IAppCapabilityStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Authorization.AppCapabilityAccess.IAppCapabilityStatics" };
    };
    template <> struct name<Windows::Security::Authorization::AppCapabilityAccess::AppCapability>
    {
        static constexpr auto & value{ L"Windows.Security.Authorization.AppCapabilityAccess.AppCapability" };
    };
    template <> struct name<Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Security.Authorization.AppCapabilityAccess.AppCapabilityAccessChangedEventArgs" };
    };
    template <> struct name<Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessStatus>
    {
        static constexpr auto & value{ L"Windows.Security.Authorization.AppCapabilityAccess.AppCapabilityAccessStatus" };
    };
    template <> struct guid_storage<Windows::Security::Authorization::AppCapabilityAccess::IAppCapability>
    {
        static constexpr guid value{ 0x4C49D915,0x8A2A,0x4295,{ 0x94,0x37,0x2D,0xF7,0xC3,0x96,0xAF,0xF4 } };
    };
    template <> struct guid_storage<Windows::Security::Authorization::AppCapabilityAccess::IAppCapabilityAccessChangedEventArgs>
    {
        static constexpr guid value{ 0x0A578D15,0xBDD7,0x457E,{ 0x8C,0xCA,0x6F,0x53,0xBD,0x2E,0x59,0x44 } };
    };
    template <> struct guid_storage<Windows::Security::Authorization::AppCapabilityAccess::IAppCapabilityStatics>
    {
        static constexpr guid value{ 0x7C353E2A,0x46EE,0x44E5,{ 0xAF,0x3D,0x6A,0xD3,0xFC,0x49,0xBD,0x22 } };
    };
    template <> struct default_interface<Windows::Security::Authorization::AppCapabilityAccess::AppCapability>
    {
        using type = Windows::Security::Authorization::AppCapabilityAccess::IAppCapability;
    };
    template <> struct default_interface<Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessChangedEventArgs>
    {
        using type = Windows::Security::Authorization::AppCapabilityAccess::IAppCapabilityAccessChangedEventArgs;
    };
    template <> struct abi<Windows::Security::Authorization::AppCapabilityAccess::IAppCapability>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CapabilityName(void**) noexcept = 0;
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
            virtual int32_t __stdcall CheckAccess(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_AccessChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AccessChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authorization::AppCapabilityAccess::IAppCapabilityAccessChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Security::Authorization::AppCapabilityAccess::IAppCapabilityStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAccessForCapabilitiesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessForCapabilitiesForUserAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithProcessIdForUser(void*, void*, uint32_t, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Security_Authorization_AppCapabilityAccess_IAppCapability
    {
        [[nodiscard]] auto CapabilityName() const;
        [[nodiscard]] auto User() const;
        auto RequestAccessAsync() const;
        auto CheckAccess() const;
        auto AccessChanged(Windows::Foundation::TypedEventHandler<Windows::Security::Authorization::AppCapabilityAccess::AppCapability, Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessChangedEventArgs> const& handler) const;
        using AccessChanged_revoker = impl::event_revoker<Windows::Security::Authorization::AppCapabilityAccess::IAppCapability, &impl::abi_t<Windows::Security::Authorization::AppCapabilityAccess::IAppCapability>::remove_AccessChanged>;
        AccessChanged_revoker AccessChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Security::Authorization::AppCapabilityAccess::AppCapability, Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessChangedEventArgs> const& handler) const;
        auto AccessChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Security::Authorization::AppCapabilityAccess::IAppCapability>
    {
        template <typename D> using type = consume_Windows_Security_Authorization_AppCapabilityAccess_IAppCapability<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authorization_AppCapabilityAccess_IAppCapabilityAccessChangedEventArgs
    {
    };
    template <> struct consume<Windows::Security::Authorization::AppCapabilityAccess::IAppCapabilityAccessChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Security_Authorization_AppCapabilityAccess_IAppCapabilityAccessChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authorization_AppCapabilityAccess_IAppCapabilityStatics
    {
        auto RequestAccessForCapabilitiesAsync(param::async_iterable<hstring> const& capabilityNames) const;
        auto RequestAccessForCapabilitiesForUserAsync(Windows::System::User const& user, param::async_iterable<hstring> const& capabilityNames) const;
        auto Create(param::hstring const& capabilityName) const;
        auto CreateWithProcessIdForUser(Windows::System::User const& user, param::hstring const& capabilityName, uint32_t pid) const;
    };
    template <> struct consume<Windows::Security::Authorization::AppCapabilityAccess::IAppCapabilityStatics>
    {
        template <typename D> using type = consume_Windows_Security_Authorization_AppCapabilityAccess_IAppCapabilityStatics<D>;
    };
}
#endif
