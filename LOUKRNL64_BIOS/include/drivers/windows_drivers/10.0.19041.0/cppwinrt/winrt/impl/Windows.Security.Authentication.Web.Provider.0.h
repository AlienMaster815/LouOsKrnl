// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authentication_Web_Provider_0_H
#define WINRT_Windows_Security_Authentication_Web_Provider_0_H
namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename K, typename V> struct IMapView;
    template <typename T> struct IVectorView;
}
namespace winrt::Windows::Security::Authentication::Web
{
    enum class TokenBindingKeyType : int32_t;
}
namespace winrt::Windows::Security::Authentication::Web::Core
{
    struct WebProviderError;
    struct WebTokenRequest;
    struct WebTokenResponse;
}
namespace winrt::Windows::Security::Credentials
{
    struct WebAccount;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStream;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::Web::Http
{
    struct HttpCookie;
}
namespace winrt::Windows::Security::Authentication::Web::Provider
{
    enum class WebAccountClientViewType : int32_t
    {
        IdOnly = 0,
        IdAndProperties = 1,
    };
    enum class WebAccountProviderOperationKind : int32_t
    {
        RequestToken = 0,
        GetTokenSilently = 1,
        AddAccount = 2,
        ManageAccount = 3,
        DeleteAccount = 4,
        RetrieveCookies = 5,
        SignOutAccount = 6,
    };
    enum class WebAccountScope : int32_t
    {
        PerUser = 0,
        PerApplication = 1,
    };
    enum class WebAccountSelectionOptions : uint32_t
    {
        Default = 0,
        New = 0x1,
    };
    struct IWebAccountClientView;
    struct IWebAccountClientViewFactory;
    struct IWebAccountManagerStatics;
    struct IWebAccountManagerStatics2;
    struct IWebAccountManagerStatics3;
    struct IWebAccountManagerStatics4;
    struct IWebAccountMapManagerStatics;
    struct IWebAccountProviderAddAccountOperation;
    struct IWebAccountProviderBaseReportOperation;
    struct IWebAccountProviderDeleteAccountOperation;
    struct IWebAccountProviderManageAccountOperation;
    struct IWebAccountProviderOperation;
    struct IWebAccountProviderRetrieveCookiesOperation;
    struct IWebAccountProviderSignOutAccountOperation;
    struct IWebAccountProviderSilentReportOperation;
    struct IWebAccountProviderTokenObjects;
    struct IWebAccountProviderTokenObjects2;
    struct IWebAccountProviderTokenOperation;
    struct IWebAccountProviderUIReportOperation;
    struct IWebAccountScopeManagerStatics;
    struct IWebProviderTokenRequest;
    struct IWebProviderTokenRequest2;
    struct IWebProviderTokenRequest3;
    struct IWebProviderTokenResponse;
    struct IWebProviderTokenResponseFactory;
    struct WebAccountClientView;
    struct WebAccountManager;
    struct WebAccountProviderAddAccountOperation;
    struct WebAccountProviderDeleteAccountOperation;
    struct WebAccountProviderGetTokenSilentOperation;
    struct WebAccountProviderManageAccountOperation;
    struct WebAccountProviderRequestTokenOperation;
    struct WebAccountProviderRetrieveCookiesOperation;
    struct WebAccountProviderSignOutAccountOperation;
    struct WebAccountProviderTriggerDetails;
    struct WebProviderTokenRequest;
    struct WebProviderTokenResponse;
}
namespace winrt::impl
{
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountClientView>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountClientView>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountProviderAddAccountOperation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountProviderDeleteAccountOperation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountProviderGetTokenSilentOperation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountProviderManageAccountOperation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountProviderRequestTokenOperation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountProviderRetrieveCookiesOperation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountProviderSignOutAccountOperation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountProviderTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountClientViewType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountProviderOperationKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountScope>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountSelectionOptions>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountClientView>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountClientView" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountClientViewFactory" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics2" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics3" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics4>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics4" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountMapManagerStatics" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderAddAccountOperation" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderDeleteAccountOperation" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderManageAccountOperation" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderRetrieveCookiesOperation" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderSignOutAccountOperation" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderSilentReportOperation" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects2" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenOperation" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderUIReportOperation" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountScopeManagerStatics" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebProviderTokenRequest" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebProviderTokenRequest2" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest3>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebProviderTokenRequest3" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebProviderTokenResponse" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebProviderTokenResponseFactory" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountClientView>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountClientView" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountManager>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountManager" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountProviderAddAccountOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountProviderAddAccountOperation" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountProviderDeleteAccountOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountProviderDeleteAccountOperation" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountProviderGetTokenSilentOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountProviderGetTokenSilentOperation" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountProviderManageAccountOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountProviderManageAccountOperation" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountProviderRequestTokenOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountProviderRequestTokenOperation" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountProviderRetrieveCookiesOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountProviderRetrieveCookiesOperation" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountProviderSignOutAccountOperation>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountProviderSignOutAccountOperation" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountProviderTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountProviderTriggerDetails" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebProviderTokenRequest" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebProviderTokenResponse" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountClientViewType>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountClientViewType" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountProviderOperationKind>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountProviderOperationKind" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountScope>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountScope" };
    };
    template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountSelectionOptions>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountSelectionOptions" };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountClientView>
    {
        static constexpr guid value{ 0xE7BD66BA,0x0BC7,0x4C66,{ 0xBF,0xD4,0x65,0xD3,0x08,0x2C,0xBC,0xA8 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory>
    {
        static constexpr guid value{ 0x616D16A4,0xDE22,0x4855,{ 0xA3,0x26,0x06,0xCE,0xBF,0x2A,0x3F,0x23 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>
    {
        static constexpr guid value{ 0xB2E8E1A6,0xD49A,0x4032,{ 0x84,0xBF,0x1A,0x28,0x47,0x74,0x7B,0xF1 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2>
    {
        static constexpr guid value{ 0x68A7A829,0x2D5F,0x4653,{ 0x8B,0xB0,0xBD,0x2F,0xA6,0xBD,0x2D,0x87 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>
    {
        static constexpr guid value{ 0xDD4523A6,0x8A4F,0x4AA2,{ 0xB1,0x5E,0x03,0xF5,0x50,0xAF,0x13,0x59 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics4>
    {
        static constexpr guid value{ 0x59EBC2D2,0xF7DB,0x412F,{ 0xBC,0x3F,0xF2,0xFE,0xA0,0x44,0x30,0xB4 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>
    {
        static constexpr guid value{ 0xE8FA446F,0x3A1B,0x48A4,{ 0x8E,0x90,0x1E,0x59,0xCA,0x6F,0x54,0xDB } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation>
    {
        static constexpr guid value{ 0x73EBDCCF,0x4378,0x4C79,{ 0x93,0x35,0xA5,0xD7,0xAB,0x81,0x59,0x4E } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
    {
        static constexpr guid value{ 0xBBA4ACBB,0x993B,0x4D57,{ 0xBB,0xE4,0x14,0x21,0xE3,0x66,0x8B,0x4C } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation>
    {
        static constexpr guid value{ 0x0ABB48B8,0x9E01,0x49C9,{ 0xA3,0x55,0x7D,0x48,0xCA,0xF7,0xD6,0xCA } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation>
    {
        static constexpr guid value{ 0xED20DC5C,0xD21B,0x463E,{ 0xA9,0xB7,0xC1,0xFD,0x0E,0xDA,0xE9,0x78 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
    {
        static constexpr guid value{ 0x6D5D2426,0x10B1,0x419A,{ 0xA4,0x4E,0xF9,0xC5,0x16,0x15,0x74,0xE6 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation>
    {
        static constexpr guid value{ 0x5A040441,0x0FA3,0x4AB1,{ 0xA0,0x1C,0x20,0xB1,0x10,0x35,0x85,0x94 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation>
    {
        static constexpr guid value{ 0xB890E21D,0x0C55,0x47BC,{ 0x8C,0x72,0x04,0xA6,0xFC,0x7C,0xAC,0x07 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation>
    {
        static constexpr guid value{ 0xE0B545F8,0x3B0F,0x44DA,{ 0x92,0x4C,0x7B,0x18,0xBA,0xAA,0x62,0xA9 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects>
    {
        static constexpr guid value{ 0x408F284B,0x1328,0x42DB,{ 0x89,0xA4,0x0B,0xCE,0x7A,0x71,0x7D,0x8E } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2>
    {
        static constexpr guid value{ 0x1020B893,0x5CA5,0x4FFF,{ 0x95,0xFB,0xB8,0x20,0x27,0x3F,0xC3,0x95 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation>
    {
        static constexpr guid value{ 0x95C613BE,0x2034,0x4C38,{ 0x94,0x34,0xD2,0x6C,0x14,0xB2,0xB4,0xB2 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation>
    {
        static constexpr guid value{ 0x28FF92D3,0x8F80,0x42FB,{ 0x94,0x4F,0xB2,0x10,0x7B,0xBD,0x42,0xE6 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics>
    {
        static constexpr guid value{ 0x5C6CE37C,0x12B2,0x423A,{ 0xBF,0x3D,0x85,0xB8,0xD7,0xE5,0x36,0x56 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest>
    {
        static constexpr guid value{ 0x1E18778B,0x8805,0x454B,{ 0x9F,0x11,0x46,0x8D,0x2A,0xF1,0x09,0x5A } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2>
    {
        static constexpr guid value{ 0xB5D72E4C,0x10B1,0x4AA6,{ 0x88,0xB1,0x0B,0x6C,0x9E,0x0C,0x1E,0x46 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest3>
    {
        static constexpr guid value{ 0x1B2716AA,0x4289,0x446E,{ 0x92,0x56,0xDA,0xFB,0x6F,0x66,0xA5,0x1E } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse>
    {
        static constexpr guid value{ 0xEF213793,0xEF55,0x4186,{ 0xB7,0xCE,0x8C,0xB2,0xE7,0xF9,0x84,0x9E } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory>
    {
        static constexpr guid value{ 0xFA49D99A,0x25BA,0x4077,{ 0x9C,0xFA,0x9D,0xB4,0xDE,0xA7,0xB7,0x1A } };
    };
    template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebAccountClientView>
    {
        using type = Windows::Security::Authentication::Web::Provider::IWebAccountClientView;
    };
    template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebAccountProviderAddAccountOperation>
    {
        using type = Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation;
    };
    template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebAccountProviderDeleteAccountOperation>
    {
        using type = Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation;
    };
    template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebAccountProviderGetTokenSilentOperation>
    {
        using type = Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation;
    };
    template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebAccountProviderManageAccountOperation>
    {
        using type = Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation;
    };
    template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebAccountProviderRequestTokenOperation>
    {
        using type = Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation;
    };
    template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebAccountProviderRetrieveCookiesOperation>
    {
        using type = Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation;
    };
    template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebAccountProviderSignOutAccountOperation>
    {
        using type = Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation;
    };
    template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebAccountProviderTriggerDetails>
    {
        using type = Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects;
    };
    template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest>
    {
        using type = Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest;
    };
    template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse>
    {
        using type = Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse;
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountClientView>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ApplicationCallbackUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AccountPairwiseId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithPairwiseId(int32_t, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall UpdateWebAccountPropertiesAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall AddWebAccountAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteWebAccountAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAllProviderWebAccountsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall PushCookiesAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetViewAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ClearViewAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetViewsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetWebAccountPictureAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ClearWebAccountPictureAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PullCookiesAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAllProviderWebAccountsForUserAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall AddWebAccountForUserAsync(void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall AddWebAccountWithScopeForUserAsync(void*, void*, void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall AddWebAccountWithScopeAndMapForUserAsync(void*, void*, void*, void*, int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InvalidateAppCacheForAllAccountsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall InvalidateAppCacheForAccountAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddWebAccountWithScopeAndMapAsync(void*, void*, void*, int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetPerAppToPerUserAccountAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetPerUserFromPerAppAccountAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ClearPerUserFromPerAppAccountAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportCompleted() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportCompleted() noexcept = 0;
            virtual int32_t __stdcall ReportError(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WebAccount(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WebAccount(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompleted() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Context(void**) noexcept = 0;
            virtual int32_t __stdcall get_Cookies(void**) noexcept = 0;
            virtual int32_t __stdcall put_Uri(void*) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall get_ApplicationCallbackUri(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WebAccount(void**) noexcept = 0;
            virtual int32_t __stdcall get_ApplicationCallbackUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_ClientId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportUserInteractionRequired() noexcept = 0;
            virtual int32_t __stdcall ReportUserInteractionRequiredWithError(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Operation(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProviderRequest(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderResponses(void**) noexcept = 0;
            virtual int32_t __stdcall put_CacheExpirationTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_CacheExpirationTime(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportUserCanceled() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddWebAccountWithScopeAsync(void*, void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SetScopeAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetScope(void*, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ClientRequest(void**) noexcept = 0;
            virtual int32_t __stdcall get_WebAccounts(void**) noexcept = 0;
            virtual int32_t __stdcall get_WebAccountSelectionOptions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ApplicationCallbackUri(void**) noexcept = 0;
            virtual int32_t __stdcall GetApplicationTokenBindingKeyAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetApplicationTokenBindingKeyIdAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ApplicationPackageFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_ApplicationProcessName(void**) noexcept = 0;
            virtual int32_t __stdcall CheckApplicationForCapabilityAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ClientResponse(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountClientView
    {
        [[nodiscard]] auto ApplicationCallbackUri() const;
        [[nodiscard]] auto Type() const;
        [[nodiscard]] auto AccountPairwiseId() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountClientView>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountClientView<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountClientViewFactory
    {
        auto Create(Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const& viewType, Windows::Foundation::Uri const& applicationCallbackUri) const;
        auto CreateWithPairwiseId(Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const& viewType, Windows::Foundation::Uri const& applicationCallbackUri, param::hstring const& accountPairwiseId) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountClientViewFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics
    {
        auto UpdateWebAccountPropertiesAsync(Windows::Security::Credentials::WebAccount const& webAccount, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& additionalProperties) const;
        auto AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props) const;
        auto DeleteWebAccountAsync(Windows::Security::Credentials::WebAccount const& webAccount) const;
        auto FindAllProviderWebAccountsAsync() const;
        auto PushCookiesAsync(Windows::Foundation::Uri const& uri, param::async_vector_view<Windows::Web::Http::HttpCookie> const& cookies) const;
        auto SetViewAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Provider::WebAccountClientView const& view) const;
        auto ClearViewAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Foundation::Uri const& applicationCallbackUri) const;
        auto GetViewsAsync(Windows::Security::Credentials::WebAccount const& webAccount) const;
        auto SetWebAccountPictureAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Storage::Streams::IRandomAccessStream const& webAccountPicture) const;
        auto ClearWebAccountPictureAsync(Windows::Security::Credentials::WebAccount const& webAccount) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics2
    {
        auto PullCookiesAsync(param::hstring const& uriString, param::hstring const& callerPFN) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics3
    {
        auto FindAllProviderWebAccountsForUserAsync(Windows::System::User const& user) const;
        auto AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props) const;
        auto AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope) const;
        auto AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope, param::hstring const& perUserWebAccountId) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics4
    {
        auto InvalidateAppCacheForAllAccountsAsync() const;
        auto InvalidateAppCacheForAccountAsync(Windows::Security::Credentials::WebAccount const& webAccount) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics4>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountMapManagerStatics
    {
        auto AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope, param::hstring const& perUserWebAccountId) const;
        auto SetPerAppToPerUserAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount, param::hstring const& perUserWebAccountId) const;
        auto GetPerUserFromPerAppAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount) const;
        auto ClearPerUserFromPerAppAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountMapManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderAddAccountOperation
    {
        auto ReportCompleted() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderAddAccountOperation<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderBaseReportOperation
    {
        auto ReportCompleted() const;
        auto ReportError(Windows::Security::Authentication::Web::Core::WebProviderError const& value) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderBaseReportOperation<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderDeleteAccountOperation
    {
        [[nodiscard]] auto WebAccount() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderDeleteAccountOperation<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderManageAccountOperation
    {
        [[nodiscard]] auto WebAccount() const;
        auto ReportCompleted() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderManageAccountOperation<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderOperation
    {
        [[nodiscard]] auto Kind() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderOperation<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderRetrieveCookiesOperation
    {
        [[nodiscard]] auto Context() const;
        [[nodiscard]] auto Cookies() const;
        auto Uri(Windows::Foundation::Uri const& uri) const;
        [[nodiscard]] auto Uri() const;
        [[nodiscard]] auto ApplicationCallbackUri() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderRetrieveCookiesOperation<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSignOutAccountOperation
    {
        [[nodiscard]] auto WebAccount() const;
        [[nodiscard]] auto ApplicationCallbackUri() const;
        [[nodiscard]] auto ClientId() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSignOutAccountOperation<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSilentReportOperation
    {
        auto ReportUserInteractionRequired() const;
        auto ReportUserInteractionRequired(Windows::Security::Authentication::Web::Core::WebProviderError const& value) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSilentReportOperation<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenObjects
    {
        [[nodiscard]] auto Operation() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenObjects<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenObjects2
    {
        [[nodiscard]] auto User() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenObjects2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenOperation
    {
        [[nodiscard]] auto ProviderRequest() const;
        [[nodiscard]] auto ProviderResponses() const;
        auto CacheExpirationTime(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] auto CacheExpirationTime() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenOperation<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderUIReportOperation
    {
        auto ReportUserCanceled() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderUIReportOperation<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountScopeManagerStatics
    {
        auto AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope) const;
        auto SetScopeAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope) const;
        auto GetScope(Windows::Security::Credentials::WebAccount const& webAccount) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountScopeManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest
    {
        [[nodiscard]] auto ClientRequest() const;
        [[nodiscard]] auto WebAccounts() const;
        [[nodiscard]] auto WebAccountSelectionOptions() const;
        [[nodiscard]] auto ApplicationCallbackUri() const;
        auto GetApplicationTokenBindingKeyAsync(Windows::Security::Authentication::Web::TokenBindingKeyType const& keyType, Windows::Foundation::Uri const& target) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest2
    {
        auto GetApplicationTokenBindingKeyIdAsync(Windows::Security::Authentication::Web::TokenBindingKeyType const& keyType, Windows::Foundation::Uri const& target) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest3
    {
        [[nodiscard]] auto ApplicationPackageFamilyName() const;
        [[nodiscard]] auto ApplicationProcessName() const;
        auto CheckApplicationForCapabilityAsync(param::hstring const& capabilityName) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest3>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest3<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenResponse
    {
        [[nodiscard]] auto ClientResponse() const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenResponse<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenResponseFactory
    {
        auto Create(Windows::Security::Authentication::Web::Core::WebTokenResponse const& webTokenResponse) const;
    };
    template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenResponseFactory<D>;
    };
}
#endif
