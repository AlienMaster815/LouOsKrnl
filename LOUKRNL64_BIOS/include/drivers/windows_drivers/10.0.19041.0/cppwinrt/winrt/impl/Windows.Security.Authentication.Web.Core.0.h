// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authentication_Web_Core_0_H
#define WINRT_Windows_Security_Authentication_Web_Core_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Security::Credentials
{
    struct WebAccount;
    struct WebAccountProvider;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::Security::Authentication::Web::Core
{
    enum class FindAllWebAccountsStatus : int32_t
    {
        Success = 0,
        NotAllowedByProvider = 1,
        NotSupportedByProvider = 2,
        ProviderError = 3,
    };
    enum class WebTokenRequestPromptType : int32_t
    {
        Default = 0,
        ForceAuthentication = 1,
    };
    enum class WebTokenRequestStatus : int32_t
    {
        Success = 0,
        UserCancel = 1,
        AccountSwitch = 2,
        UserInteractionRequired = 3,
        AccountProviderNotAvailable = 4,
        ProviderError = 5,
    };
    struct IFindAllAccountsResult;
    struct IWebAccountEventArgs;
    struct IWebAccountMonitor;
    struct IWebAccountMonitor2;
    struct IWebAuthenticationCoreManagerStatics;
    struct IWebAuthenticationCoreManagerStatics2;
    struct IWebAuthenticationCoreManagerStatics3;
    struct IWebAuthenticationCoreManagerStatics4;
    struct IWebProviderError;
    struct IWebProviderErrorFactory;
    struct IWebTokenRequest;
    struct IWebTokenRequest2;
    struct IWebTokenRequest3;
    struct IWebTokenRequestFactory;
    struct IWebTokenRequestResult;
    struct IWebTokenResponse;
    struct IWebTokenResponseFactory;
    struct FindAllAccountsResult;
    struct WebAccountEventArgs;
    struct WebAccountMonitor;
    struct WebAuthenticationCoreManager;
    struct WebProviderError;
    struct WebTokenRequest;
    struct WebTokenRequestResult;
    struct WebTokenResponse;
}
namespace winrt::impl
{
    template <> struct category<Windows::Security::Authentication::Web::Core::IFindAllAccountsResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::IWebAccountEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::IWebAccountMonitor2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::IWebProviderError>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::IWebTokenRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::IWebTokenRequest2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::IWebTokenRequest3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::IWebTokenRequestResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::IWebTokenResponse>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::FindAllAccountsResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::WebAccountEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::WebAccountMonitor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::WebAuthenticationCoreManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::WebProviderError>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::WebTokenRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::WebTokenRequestResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::WebTokenResponse>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::FindAllWebAccountsStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Core::WebTokenRequestStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::IFindAllAccountsResult>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IFindAllAccountsResult" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::IWebAccountEventArgs>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebAccountEventArgs" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebAccountMonitor" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::IWebAccountMonitor2>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebAccountMonitor2" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics2" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics3" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics4" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::IWebProviderError>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebProviderError" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebProviderErrorFactory" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::IWebTokenRequest>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebTokenRequest" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::IWebTokenRequest2>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebTokenRequest2" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::IWebTokenRequest3>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebTokenRequest3" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebTokenRequestFactory" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::IWebTokenRequestResult>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebTokenRequestResult" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::IWebTokenResponse>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebTokenResponse" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebTokenResponseFactory" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::FindAllAccountsResult>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.FindAllAccountsResult" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::WebAccountEventArgs>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.WebAccountEventArgs" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::WebAccountMonitor>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.WebAccountMonitor" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::WebAuthenticationCoreManager>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::WebProviderError>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.WebProviderError" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::WebTokenRequest>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.WebTokenRequest" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::WebTokenRequestResult>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.WebTokenRequestResult" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::WebTokenResponse>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.WebTokenResponse" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::FindAllWebAccountsStatus>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.FindAllWebAccountsStatus" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.WebTokenRequestPromptType" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Core::WebTokenRequestStatus>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.WebTokenRequestStatus" };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Core::IFindAllAccountsResult>
    {
        static constexpr guid value{ 0xA5812B5D,0xB72E,0x420C,{ 0x86,0xAB,0xAA,0xC0,0xD7,0xB7,0x26,0x1F } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Core::IWebAccountEventArgs>
    {
        static constexpr guid value{ 0x6FB7037D,0x424E,0x44EC,{ 0x97,0x7C,0xEF,0x24,0x15,0x46,0x2A,0x5A } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>
    {
        static constexpr guid value{ 0x7445F5FD,0xAA9D,0x4619,{ 0x8D,0x5D,0xC1,0x38,0xA4,0xED,0xE3,0xE5 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Core::IWebAccountMonitor2>
    {
        static constexpr guid value{ 0xA7ADC1F8,0x24B8,0x4F01,{ 0x9A,0xE5,0x24,0x54,0x5E,0x71,0x23,0x3A } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>
    {
        static constexpr guid value{ 0x6ACA7C92,0xA581,0x4479,{ 0x9C,0x10,0x75,0x2E,0xFF,0x44,0xFD,0x34 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2>
    {
        static constexpr guid value{ 0xF584184A,0x8B57,0x4820,{ 0xB6,0xA4,0x70,0xA5,0xB6,0xFC,0xF4,0x4A } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3>
    {
        static constexpr guid value{ 0x2404EEB2,0x8924,0x4D93,{ 0xAB,0x3A,0x99,0x68,0x8B,0x41,0x9D,0x56 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4>
    {
        static constexpr guid value{ 0x54E633FE,0x96E0,0x41E8,{ 0x98,0x32,0x12,0x98,0x89,0x7C,0x2A,0xAF } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Core::IWebProviderError>
    {
        static constexpr guid value{ 0xDB191BB1,0x50C5,0x4809,{ 0x8D,0xCA,0x09,0xC9,0x94,0x10,0x24,0x5C } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory>
    {
        static constexpr guid value{ 0xE3C40A2D,0x89EF,0x4E37,{ 0x84,0x7F,0xA8,0xB9,0xD5,0xA3,0x29,0x10 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Core::IWebTokenRequest>
    {
        static constexpr guid value{ 0xB77B4D68,0xADCB,0x4673,{ 0xB3,0x64,0x0C,0xF7,0xB3,0x5C,0xAF,0x97 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Core::IWebTokenRequest2>
    {
        static constexpr guid value{ 0xD700C079,0x30C8,0x4397,{ 0x96,0x54,0x96,0x1C,0x3B,0xE8,0xB8,0x55 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Core::IWebTokenRequest3>
    {
        static constexpr guid value{ 0x5A755B51,0x3BB1,0x41A5,{ 0xA6,0x3D,0x90,0xBC,0x32,0xC7,0xDB,0x9A } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>
    {
        static constexpr guid value{ 0x6CF2141C,0x0FF0,0x4C67,{ 0xB8,0x4F,0x99,0xDD,0xBE,0x4A,0x72,0xC9 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Core::IWebTokenRequestResult>
    {
        static constexpr guid value{ 0xC12A8305,0xD1F8,0x4483,{ 0x8D,0x54,0x38,0xFE,0x29,0x27,0x84,0xFF } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Core::IWebTokenResponse>
    {
        static constexpr guid value{ 0x67A7C5CA,0x83F6,0x44C6,{ 0xA3,0xB1,0x0E,0xB6,0x9E,0x41,0xFA,0x8A } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory>
    {
        static constexpr guid value{ 0xAB6BF7F8,0x5450,0x4EF6,{ 0x97,0xF7,0x05,0x2B,0x04,0x31,0xC0,0xF0 } };
    };
    template <> struct default_interface<Windows::Security::Authentication::Web::Core::FindAllAccountsResult>
    {
        using type = Windows::Security::Authentication::Web::Core::IFindAllAccountsResult;
    };
    template <> struct default_interface<Windows::Security::Authentication::Web::Core::WebAccountEventArgs>
    {
        using type = Windows::Security::Authentication::Web::Core::IWebAccountEventArgs;
    };
    template <> struct default_interface<Windows::Security::Authentication::Web::Core::WebAccountMonitor>
    {
        using type = Windows::Security::Authentication::Web::Core::IWebAccountMonitor;
    };
    template <> struct default_interface<Windows::Security::Authentication::Web::Core::WebProviderError>
    {
        using type = Windows::Security::Authentication::Web::Core::IWebProviderError;
    };
    template <> struct default_interface<Windows::Security::Authentication::Web::Core::WebTokenRequest>
    {
        using type = Windows::Security::Authentication::Web::Core::IWebTokenRequest;
    };
    template <> struct default_interface<Windows::Security::Authentication::Web::Core::WebTokenRequestResult>
    {
        using type = Windows::Security::Authentication::Web::Core::IWebTokenRequestResult;
    };
    template <> struct default_interface<Windows::Security::Authentication::Web::Core::WebTokenResponse>
    {
        using type = Windows::Security::Authentication::Web::Core::IWebTokenResponse;
    };
    template <> struct abi<Windows::Security::Authentication::Web::Core::IFindAllAccountsResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Accounts(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProviderError(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Core::IWebAccountEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Account(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Updated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Updated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Removed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Removed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DefaultSignInAccountChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DefaultSignInAccountChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Core::IWebAccountMonitor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_AccountPictureUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AccountPictureUpdated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetTokenSilentlyAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetTokenSilentlyWithWebAccountAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestTokenAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestTokenWithWebAccountAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAccountAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAccountProviderAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAccountProviderWithAuthorityAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAccountProviderWithAuthorityForUserAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWebAccountMonitor(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAllAccountsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAllAccountsWithClientIdAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindSystemAccountProviderAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindSystemAccountProviderWithAuthorityAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindSystemAccountProviderWithAuthorityForUserAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Core::IWebProviderError>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ErrorCode(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(uint32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Core::IWebTokenRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WebAccountProvider(void**) noexcept = 0;
            virtual int32_t __stdcall get_Scope(void**) noexcept = 0;
            virtual int32_t __stdcall get_ClientId(void**) noexcept = 0;
            virtual int32_t __stdcall get_PromptType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Core::IWebTokenRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Core::IWebTokenRequest3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CorrelationId(void**) noexcept = 0;
            virtual int32_t __stdcall put_CorrelationId(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithPromptType(void*, void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithProvider(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithScope(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Core::IWebTokenRequestResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ResponseData(void**) noexcept = 0;
            virtual int32_t __stdcall get_ResponseStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ResponseError(void**) noexcept = 0;
            virtual int32_t __stdcall InvalidateCacheAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Core::IWebTokenResponse>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Token(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderError(void**) noexcept = 0;
            virtual int32_t __stdcall get_WebAccount(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithToken(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithTokenAndAccount(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithTokenAccountAndError(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Core_IFindAllAccountsResult
    {
        [[nodiscard]] auto Accounts() const;
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ProviderError() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Core::IFindAllAccountsResult>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IFindAllAccountsResult<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Core_IWebAccountEventArgs
    {
        [[nodiscard]] auto Account() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Core::IWebAccountEventArgs>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebAccountEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor
    {
        auto Updated(Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const& handler) const;
        using Updated_revoker = impl::event_revoker<Windows::Security::Authentication::Web::Core::IWebAccountMonitor, &impl::abi_t<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>::remove_Updated>;
        Updated_revoker Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const& handler) const;
        auto Updated(winrt::event_token const& token) const noexcept;
        auto Removed(Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const& handler) const;
        using Removed_revoker = impl::event_revoker<Windows::Security::Authentication::Web::Core::IWebAccountMonitor, &impl::abi_t<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>::remove_Removed>;
        Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const& handler) const;
        auto Removed(winrt::event_token const& token) const noexcept;
        auto DefaultSignInAccountChanged(Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Foundation::IInspectable> const& handler) const;
        using DefaultSignInAccountChanged_revoker = impl::event_revoker<Windows::Security::Authentication::Web::Core::IWebAccountMonitor, &impl::abi_t<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>::remove_DefaultSignInAccountChanged>;
        DefaultSignInAccountChanged_revoker DefaultSignInAccountChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Foundation::IInspectable> const& handler) const;
        auto DefaultSignInAccountChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor2
    {
        auto AccountPictureUpdated(Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const& handler) const;
        using AccountPictureUpdated_revoker = impl::event_revoker<Windows::Security::Authentication::Web::Core::IWebAccountMonitor2, &impl::abi_t<Windows::Security::Authentication::Web::Core::IWebAccountMonitor2>::remove_AccountPictureUpdated>;
        AccountPictureUpdated_revoker AccountPictureUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const& handler) const;
        auto AccountPictureUpdated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Core::IWebAccountMonitor2>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics
    {
        auto GetTokenSilentlyAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request) const;
        auto GetTokenSilentlyAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount) const;
        auto RequestTokenAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request) const;
        auto RequestTokenAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount) const;
        auto FindAccountAsync(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& webAccountId) const;
        auto FindAccountProviderAsync(param::hstring const& webAccountProviderId) const;
        auto FindAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics2
    {
        auto FindAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority, Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics3
    {
        auto CreateWebAccountMonitor(param::iterable<Windows::Security::Credentials::WebAccount> const& webAccounts) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics4
    {
        auto FindAllAccountsAsync(Windows::Security::Credentials::WebAccountProvider const& provider) const;
        auto FindAllAccountsAsync(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& clientId) const;
        auto FindSystemAccountProviderAsync(param::hstring const& webAccountProviderId) const;
        auto FindSystemAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority) const;
        auto FindSystemAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority, Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Core_IWebProviderError
    {
        [[nodiscard]] auto ErrorCode() const;
        [[nodiscard]] auto ErrorMessage() const;
        [[nodiscard]] auto Properties() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Core::IWebProviderError>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebProviderError<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Core_IWebProviderErrorFactory
    {
        auto Create(uint32_t errorCode, param::hstring const& errorMessage) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebProviderErrorFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest
    {
        [[nodiscard]] auto WebAccountProvider() const;
        [[nodiscard]] auto Scope() const;
        [[nodiscard]] auto ClientId() const;
        [[nodiscard]] auto PromptType() const;
        [[nodiscard]] auto Properties() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Core::IWebTokenRequest>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest2
    {
        [[nodiscard]] auto AppProperties() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Core::IWebTokenRequest2>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest3
    {
        [[nodiscard]] auto CorrelationId() const;
        auto CorrelationId(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Core::IWebTokenRequest3>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest3<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestFactory
    {
        auto Create(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope, param::hstring const& clientId) const;
        auto CreateWithPromptType(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope, param::hstring const& clientId, Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType const& promptType) const;
        auto CreateWithProvider(Windows::Security::Credentials::WebAccountProvider const& provider) const;
        auto CreateWithScope(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestResult
    {
        [[nodiscard]] auto ResponseData() const;
        [[nodiscard]] auto ResponseStatus() const;
        [[nodiscard]] auto ResponseError() const;
        auto InvalidateCacheAsync() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Core::IWebTokenRequestResult>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestResult<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Core_IWebTokenResponse
    {
        [[nodiscard]] auto Token() const;
        [[nodiscard]] auto ProviderError() const;
        [[nodiscard]] auto WebAccount() const;
        [[nodiscard]] auto Properties() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Core::IWebTokenResponse>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebTokenResponse<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Core_IWebTokenResponseFactory
    {
        auto CreateWithToken(param::hstring const& token) const;
        auto CreateWithTokenAndAccount(param::hstring const& token, Windows::Security::Credentials::WebAccount const& webAccount) const;
        auto CreateWithTokenAccountAndError(param::hstring const& token, Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Core::WebProviderError const& error) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebTokenResponseFactory<D>;
    };
}
#endif
