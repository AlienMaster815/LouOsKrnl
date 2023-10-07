// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authentication_OnlineId_0_H
#define WINRT_Windows_Security_Authentication_OnlineId_0_H
namespace winrt::Windows::Foundation
{
    struct HResult;
    struct IAsyncAction;
    template <typename TResult> struct IAsyncOperation;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::Security::Authentication::OnlineId
{
    enum class CredentialPromptType : int32_t
    {
        PromptIfNeeded = 0,
        RetypeCredentials = 1,
        DoNotPrompt = 2,
    };
    enum class OnlineIdSystemTicketStatus : int32_t
    {
        Success = 0,
        Error = 1,
        ServiceConnectionError = 2,
    };
    struct IOnlineIdAuthenticator;
    struct IOnlineIdServiceTicket;
    struct IOnlineIdServiceTicketRequest;
    struct IOnlineIdServiceTicketRequestFactory;
    struct IOnlineIdSystemAuthenticatorForUser;
    struct IOnlineIdSystemAuthenticatorStatics;
    struct IOnlineIdSystemIdentity;
    struct IOnlineIdSystemTicketResult;
    struct IUserIdentity;
    struct OnlineIdAuthenticator;
    struct OnlineIdServiceTicket;
    struct OnlineIdServiceTicketRequest;
    struct OnlineIdSystemAuthenticator;
    struct OnlineIdSystemAuthenticatorForUser;
    struct OnlineIdSystemIdentity;
    struct OnlineIdSystemTicketResult;
    struct SignOutUserOperation;
    struct UserAuthenticationOperation;
    struct UserIdentity;
}
namespace winrt::impl
{
    template <> struct category<Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequestFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::IUserIdentity>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::OnlineIdAuthenticator>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticator>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::OnlineIdSystemIdentity>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::SignOutUserOperation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::UserAuthenticationOperation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::UserIdentity>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::CredentialPromptType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.IOnlineIdAuthenticator" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.IOnlineIdServiceTicket" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.IOnlineIdServiceTicketRequest" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequestFactory>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.IOnlineIdServiceTicketRequestFactory" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.IOnlineIdSystemAuthenticatorForUser" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.IOnlineIdSystemAuthenticatorStatics" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.IOnlineIdSystemIdentity" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.IOnlineIdSystemTicketResult" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::IUserIdentity>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.IUserIdentity" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::OnlineIdAuthenticator>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.OnlineIdAuthenticator" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.OnlineIdServiceTicket" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.OnlineIdServiceTicketRequest" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticator>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.OnlineIdSystemAuthenticator" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.OnlineIdSystemAuthenticatorForUser" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::OnlineIdSystemIdentity>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.OnlineIdSystemIdentity" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketResult>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.OnlineIdSystemTicketResult" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::SignOutUserOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.SignOutUserOperation" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::UserAuthenticationOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.UserAuthenticationOperation" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::UserIdentity>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.UserIdentity" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::CredentialPromptType>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.CredentialPromptType" };
    };
    template <> struct name<Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketStatus>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.OnlineId.OnlineIdSystemTicketStatus" };
    };
    template <> struct guid_storage<Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator>
    {
        static constexpr guid value{ 0xA003F58A,0x29AB,0x4817,{ 0xB8,0x84,0xD7,0x51,0x6D,0xAD,0x18,0xB9 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket>
    {
        static constexpr guid value{ 0xC95C547F,0xD781,0x4A94,{ 0xAC,0xB8,0xC5,0x98,0x74,0x23,0x8C,0x26 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest>
    {
        static constexpr guid value{ 0x297445D3,0xFB63,0x4135,{ 0x89,0x09,0x4E,0x35,0x4C,0x06,0x14,0x66 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequestFactory>
    {
        static constexpr guid value{ 0xBEBB0A08,0x9E73,0x4077,{ 0x96,0x14,0x08,0x61,0x4C,0x0B,0xC2,0x45 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser>
    {
        static constexpr guid value{ 0x5798BEFB,0x1DE4,0x4186,{ 0xA2,0xE6,0xB5,0x63,0xF8,0x6A,0xAF,0x44 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorStatics>
    {
        static constexpr guid value{ 0x85047792,0xF634,0x41E3,{ 0x96,0xA4,0x51,0x64,0xE9,0x02,0xC7,0x40 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity>
    {
        static constexpr guid value{ 0x743CD20D,0xB6CA,0x434D,{ 0x81,0x24,0x53,0xEA,0x12,0x68,0x53,0x07 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult>
    {
        static constexpr guid value{ 0xDB0A5FF8,0xB098,0x4ACD,{ 0x9D,0x13,0x9E,0x64,0x06,0x52,0xB5,0xB6 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::OnlineId::IUserIdentity>
    {
        static constexpr guid value{ 0x2146D9CD,0x0742,0x4BE3,{ 0x8A,0x1C,0x7C,0x7A,0xE6,0x79,0xAA,0x88 } };
    };
    template <> struct default_interface<Windows::Security::Authentication::OnlineId::OnlineIdAuthenticator>
    {
        using type = Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator;
    };
    template <> struct default_interface<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket>
    {
        using type = Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket;
    };
    template <> struct default_interface<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest>
    {
        using type = Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest;
    };
    template <> struct default_interface<Windows::Security::Authentication::OnlineId::OnlineIdSystemAuthenticatorForUser>
    {
        using type = Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser;
    };
    template <> struct default_interface<Windows::Security::Authentication::OnlineId::OnlineIdSystemIdentity>
    {
        using type = Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity;
    };
    template <> struct default_interface<Windows::Security::Authentication::OnlineId::OnlineIdSystemTicketResult>
    {
        using type = Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult;
    };
    template <> struct default_interface<Windows::Security::Authentication::OnlineId::SignOutUserOperation>
    {
        using type = Windows::Foundation::IAsyncAction;
    };
    template <> struct default_interface<Windows::Security::Authentication::OnlineId::UserAuthenticationOperation>
    {
        using type = Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::OnlineId::UserIdentity>;
    };
    template <> struct default_interface<Windows::Security::Authentication::OnlineId::UserIdentity>
    {
        using type = Windows::Security::Authentication::OnlineId::IUserIdentity;
    };
    template <> struct abi<Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AuthenticateUserAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall AuthenticateUserAsyncAdvanced(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SignOutUserAsync(void**) noexcept = 0;
            virtual int32_t __stdcall put_ApplicationId(winrt::guid) noexcept = 0;
            virtual int32_t __stdcall get_ApplicationId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_CanSignOut(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AuthenticatedSafeCustomerId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Service(void**) noexcept = 0;
            virtual int32_t __stdcall get_Policy(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequestFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateOnlineIdServiceTicketRequest(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateOnlineIdServiceTicketRequestAdvanced(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetTicketAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall put_ApplicationId(winrt::guid) noexcept = 0;
            virtual int32_t __stdcall get_ApplicationId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Default(void**) noexcept = 0;
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Ticket(void**) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Identity(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::OnlineId::IUserIdentity>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tickets(void**) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_SafeCustomerId(void**) noexcept = 0;
            virtual int32_t __stdcall get_SignInName(void**) noexcept = 0;
            virtual int32_t __stdcall get_FirstName(void**) noexcept = 0;
            virtual int32_t __stdcall get_LastName(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsBetaAccount(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsConfirmedPC(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_OnlineId_IOnlineIdAuthenticator
    {
        auto AuthenticateUserAsync(Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest const& request) const;
        auto AuthenticateUserAsync(param::iterable<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest> const& requests, Windows::Security::Authentication::OnlineId::CredentialPromptType const& credentialPromptType) const;
        auto SignOutUserAsync() const;
        auto ApplicationId(winrt::guid const& value) const;
        [[nodiscard]] auto ApplicationId() const;
        [[nodiscard]] auto CanSignOut() const;
        [[nodiscard]] auto AuthenticatedSafeCustomerId() const;
    };
    template <> struct consume<Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_OnlineId_IOnlineIdAuthenticator<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicket
    {
        [[nodiscard]] auto Value() const;
        [[nodiscard]] auto Request() const;
        [[nodiscard]] auto ErrorCode() const;
    };
    template <> struct consume<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicket<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicketRequest
    {
        [[nodiscard]] auto Service() const;
        [[nodiscard]] auto Policy() const;
    };
    template <> struct consume<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicketRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicketRequestFactory
    {
        auto CreateOnlineIdServiceTicketRequest(param::hstring const& service, param::hstring const& policy) const;
        auto CreateOnlineIdServiceTicketRequestAdvanced(param::hstring const& service) const;
    };
    template <> struct consume<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequestFactory>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicketRequestFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemAuthenticatorForUser
    {
        auto GetTicketAsync(Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest const& request) const;
        auto ApplicationId(winrt::guid const& value) const;
        [[nodiscard]] auto ApplicationId() const;
        [[nodiscard]] auto User() const;
    };
    template <> struct consume<Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemAuthenticatorForUser<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemAuthenticatorStatics
    {
        [[nodiscard]] auto Default() const;
        auto GetForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorStatics>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemAuthenticatorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemIdentity
    {
        [[nodiscard]] auto Ticket() const;
        [[nodiscard]] auto Id() const;
    };
    template <> struct consume<Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemIdentity<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemTicketResult
    {
        [[nodiscard]] auto Identity() const;
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<Windows::Security::Authentication::OnlineId::IOnlineIdSystemTicketResult>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemTicketResult<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_OnlineId_IUserIdentity
    {
        [[nodiscard]] auto Tickets() const;
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto SafeCustomerId() const;
        [[nodiscard]] auto SignInName() const;
        [[nodiscard]] auto FirstName() const;
        [[nodiscard]] auto LastName() const;
        [[nodiscard]] auto IsBetaAccount() const;
        [[nodiscard]] auto IsConfirmedPC() const;
    };
    template <> struct consume<Windows::Security::Authentication::OnlineId::IUserIdentity>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_OnlineId_IUserIdentity<D>;
    };
}
#endif
