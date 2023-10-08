// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Web_Http_Filters_0_H
#define WINRT_Windows_Web_Http_Filters_0_H
namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Networking::Sockets
{
    enum class SocketSslErrorSeverity : int32_t;
}
namespace winrt::Windows::Security::Credentials
{
    struct PasswordCredential;
}
namespace winrt::Windows::Security::Cryptography::Certificates
{
    struct Certificate;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::Web::Http
{
    struct HttpCookieManager;
    struct HttpRequestMessage;
    enum class HttpVersion : int32_t;
}
namespace winrt::Windows::Web::Http::Filters
{
    enum class HttpCacheReadBehavior : int32_t
    {
        Default = 0,
        MostRecent = 1,
        OnlyFromCache = 2,
        NoCache = 3,
    };
    enum class HttpCacheWriteBehavior : int32_t
    {
        Default = 0,
        NoCache = 1,
    };
    enum class HttpCookieUsageBehavior : int32_t
    {
        Default = 0,
        NoCookies = 1,
    };
    struct IHttpBaseProtocolFilter;
    struct IHttpBaseProtocolFilter2;
    struct IHttpBaseProtocolFilter3;
    struct IHttpBaseProtocolFilter4;
    struct IHttpBaseProtocolFilter5;
    struct IHttpBaseProtocolFilterStatics;
    struct IHttpCacheControl;
    struct IHttpFilter;
    struct IHttpServerCustomValidationRequestedEventArgs;
    struct HttpBaseProtocolFilter;
    struct HttpCacheControl;
    struct HttpServerCustomValidationRequestedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::Web::Http::Filters::IHttpBaseProtocolFilter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Http::Filters::IHttpBaseProtocolFilter2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Http::Filters::IHttpBaseProtocolFilter3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Http::Filters::IHttpBaseProtocolFilter4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Http::Filters::IHttpBaseProtocolFilter5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Http::Filters::IHttpCacheControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Http::Filters::IHttpFilter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::Http::Filters::HttpBaseProtocolFilter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Http::Filters::HttpCacheControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::Http::Filters::HttpCacheReadBehavior>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Web::Http::Filters::HttpCacheWriteBehavior>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Web::Http::Filters::HttpCookieUsageBehavior>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Web::Http::Filters::IHttpBaseProtocolFilter>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter" };
    };
    template <> struct name<Windows::Web::Http::Filters::IHttpBaseProtocolFilter2>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter2" };
    };
    template <> struct name<Windows::Web::Http::Filters::IHttpBaseProtocolFilter3>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter3" };
    };
    template <> struct name<Windows::Web::Http::Filters::IHttpBaseProtocolFilter4>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter4" };
    };
    template <> struct name<Windows::Web::Http::Filters::IHttpBaseProtocolFilter5>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter5" };
    };
    template <> struct name<Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Filters.IHttpBaseProtocolFilterStatics" };
    };
    template <> struct name<Windows::Web::Http::Filters::IHttpCacheControl>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Filters.IHttpCacheControl" };
    };
    template <> struct name<Windows::Web::Http::Filters::IHttpFilter>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Filters.IHttpFilter" };
    };
    template <> struct name<Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Filters.IHttpServerCustomValidationRequestedEventArgs" };
    };
    template <> struct name<Windows::Web::Http::Filters::HttpBaseProtocolFilter>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Filters.HttpBaseProtocolFilter" };
    };
    template <> struct name<Windows::Web::Http::Filters::HttpCacheControl>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Filters.HttpCacheControl" };
    };
    template <> struct name<Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Filters.HttpServerCustomValidationRequestedEventArgs" };
    };
    template <> struct name<Windows::Web::Http::Filters::HttpCacheReadBehavior>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Filters.HttpCacheReadBehavior" };
    };
    template <> struct name<Windows::Web::Http::Filters::HttpCacheWriteBehavior>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Filters.HttpCacheWriteBehavior" };
    };
    template <> struct name<Windows::Web::Http::Filters::HttpCookieUsageBehavior>
    {
        static constexpr auto & value{ L"Windows.Web.Http.Filters.HttpCookieUsageBehavior" };
    };
    template <> struct guid_storage<Windows::Web::Http::Filters::IHttpBaseProtocolFilter>
    {
        static constexpr guid value{ 0x71C89B09,0xE131,0x4B54,{ 0xA5,0x3C,0xEB,0x43,0xFF,0x37,0xE9,0xBB } };
    };
    template <> struct guid_storage<Windows::Web::Http::Filters::IHttpBaseProtocolFilter2>
    {
        static constexpr guid value{ 0x2EC30013,0x9427,0x4900,{ 0xA0,0x17,0xFA,0x7D,0xA3,0xB5,0xC9,0xAE } };
    };
    template <> struct guid_storage<Windows::Web::Http::Filters::IHttpBaseProtocolFilter3>
    {
        static constexpr guid value{ 0xD43F4D4C,0xBD42,0x43AE,{ 0x87,0x17,0xAD,0x2C,0x8F,0x4B,0x29,0x37 } };
    };
    template <> struct guid_storage<Windows::Web::Http::Filters::IHttpBaseProtocolFilter4>
    {
        static constexpr guid value{ 0x9FE36CCF,0x2983,0x4893,{ 0x94,0x1F,0xEB,0x51,0x8C,0xA8,0xCE,0xF9 } };
    };
    template <> struct guid_storage<Windows::Web::Http::Filters::IHttpBaseProtocolFilter5>
    {
        static constexpr guid value{ 0x416E4993,0x31E3,0x4816,{ 0xBF,0x09,0xE0,0x18,0xEE,0x8D,0xC1,0xF5 } };
    };
    template <> struct guid_storage<Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics>
    {
        static constexpr guid value{ 0x6D4DEE0C,0xE908,0x494E,{ 0xB5,0xA3,0x12,0x63,0xC9,0xB8,0x24,0x2A } };
    };
    template <> struct guid_storage<Windows::Web::Http::Filters::IHttpCacheControl>
    {
        static constexpr guid value{ 0xC77E1CB4,0x3CEA,0x4EB5,{ 0xAC,0x85,0x04,0xE1,0x86,0xE6,0x3A,0xB7 } };
    };
    template <> struct guid_storage<Windows::Web::Http::Filters::IHttpFilter>
    {
        static constexpr guid value{ 0xA4CB6DD5,0x0902,0x439E,{ 0xBF,0xD7,0xE1,0x25,0x52,0xB1,0x65,0xCE } };
    };
    template <> struct guid_storage<Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs>
    {
        static constexpr guid value{ 0x3165FE32,0xE7DD,0x48B7,{ 0xA3,0x61,0x93,0x9C,0x75,0x0E,0x63,0xCC } };
    };
    template <> struct default_interface<Windows::Web::Http::Filters::HttpBaseProtocolFilter>
    {
        using type = Windows::Web::Http::Filters::IHttpBaseProtocolFilter;
    };
    template <> struct default_interface<Windows::Web::Http::Filters::HttpCacheControl>
    {
        using type = Windows::Web::Http::Filters::IHttpCacheControl;
    };
    template <> struct default_interface<Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs>
    {
        using type = Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs;
    };
    template <> struct abi<Windows::Web::Http::Filters::IHttpBaseProtocolFilter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowAutoRedirect(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowAutoRedirect(bool) noexcept = 0;
            virtual int32_t __stdcall get_AllowUI(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowUI(bool) noexcept = 0;
            virtual int32_t __stdcall get_AutomaticDecompression(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AutomaticDecompression(bool) noexcept = 0;
            virtual int32_t __stdcall get_CacheControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_CookieManager(void**) noexcept = 0;
            virtual int32_t __stdcall get_ClientCertificate(void**) noexcept = 0;
            virtual int32_t __stdcall put_ClientCertificate(void*) noexcept = 0;
            virtual int32_t __stdcall get_IgnorableServerCertificateErrors(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxConnectionsPerServer(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxConnectionsPerServer(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ProxyCredential(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProxyCredential(void*) noexcept = 0;
            virtual int32_t __stdcall get_ServerCredential(void**) noexcept = 0;
            virtual int32_t __stdcall put_ServerCredential(void*) noexcept = 0;
            virtual int32_t __stdcall get_UseProxy(bool*) noexcept = 0;
            virtual int32_t __stdcall put_UseProxy(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Filters::IHttpBaseProtocolFilter2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxVersion(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxVersion(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Filters::IHttpBaseProtocolFilter3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CookieUsageBehavior(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CookieUsageBehavior(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Filters::IHttpBaseProtocolFilter4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ServerCustomValidationRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ServerCustomValidationRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall ClearAuthenticationCache() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Filters::IHttpBaseProtocolFilter5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Filters::IHttpCacheControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReadBehavior(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReadBehavior(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_WriteBehavior(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_WriteBehavior(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Filters::IHttpFilter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SendRequestAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServerCertificate(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServerCertificateErrorSeverity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ServerCertificateErrors(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServerIntermediateCertificates(void**) noexcept = 0;
            virtual int32_t __stdcall Reject() noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter
    {
        [[nodiscard]] auto AllowAutoRedirect() const;
        auto AllowAutoRedirect(bool value) const;
        [[nodiscard]] auto AllowUI() const;
        auto AllowUI(bool value) const;
        [[nodiscard]] auto AutomaticDecompression() const;
        auto AutomaticDecompression(bool value) const;
        [[nodiscard]] auto CacheControl() const;
        [[nodiscard]] auto CookieManager() const;
        [[nodiscard]] auto ClientCertificate() const;
        auto ClientCertificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const;
        [[nodiscard]] auto IgnorableServerCertificateErrors() const;
        [[nodiscard]] auto MaxConnectionsPerServer() const;
        auto MaxConnectionsPerServer(uint32_t value) const;
        [[nodiscard]] auto ProxyCredential() const;
        auto ProxyCredential(Windows::Security::Credentials::PasswordCredential const& value) const;
        [[nodiscard]] auto ServerCredential() const;
        auto ServerCredential(Windows::Security::Credentials::PasswordCredential const& value) const;
        [[nodiscard]] auto UseProxy() const;
        auto UseProxy(bool value) const;
    };
    template <> struct consume<Windows::Web::Http::Filters::IHttpBaseProtocolFilter>
    {
        template <typename D> using type = consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter2
    {
        [[nodiscard]] auto MaxVersion() const;
        auto MaxVersion(Windows::Web::Http::HttpVersion const& value) const;
    };
    template <> struct consume<Windows::Web::Http::Filters::IHttpBaseProtocolFilter2>
    {
        template <typename D> using type = consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter2<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter3
    {
        [[nodiscard]] auto CookieUsageBehavior() const;
        auto CookieUsageBehavior(Windows::Web::Http::Filters::HttpCookieUsageBehavior const& value) const;
    };
    template <> struct consume<Windows::Web::Http::Filters::IHttpBaseProtocolFilter3>
    {
        template <typename D> using type = consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter3<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4
    {
        auto ServerCustomValidationRequested(Windows::Foundation::TypedEventHandler<Windows::Web::Http::Filters::HttpBaseProtocolFilter, Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> const& handler) const;
        using ServerCustomValidationRequested_revoker = impl::event_revoker<Windows::Web::Http::Filters::IHttpBaseProtocolFilter4, &impl::abi_t<Windows::Web::Http::Filters::IHttpBaseProtocolFilter4>::remove_ServerCustomValidationRequested>;
        ServerCustomValidationRequested_revoker ServerCustomValidationRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::Http::Filters::HttpBaseProtocolFilter, Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> const& handler) const;
        auto ServerCustomValidationRequested(winrt::event_token const& token) const noexcept;
        auto ClearAuthenticationCache() const;
    };
    template <> struct consume<Windows::Web::Http::Filters::IHttpBaseProtocolFilter4>
    {
        template <typename D> using type = consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter5
    {
        [[nodiscard]] auto User() const;
    };
    template <> struct consume<Windows::Web::Http::Filters::IHttpBaseProtocolFilter5>
    {
        template <typename D> using type = consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter5<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilterStatics
    {
        auto CreateForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Filters_IHttpCacheControl
    {
        [[nodiscard]] auto ReadBehavior() const;
        auto ReadBehavior(Windows::Web::Http::Filters::HttpCacheReadBehavior const& value) const;
        [[nodiscard]] auto WriteBehavior() const;
        auto WriteBehavior(Windows::Web::Http::Filters::HttpCacheWriteBehavior const& value) const;
    };
    template <> struct consume<Windows::Web::Http::Filters::IHttpCacheControl>
    {
        template <typename D> using type = consume_Windows_Web_Http_Filters_IHttpCacheControl<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Filters_IHttpFilter
    {
        auto SendRequestAsync(Windows::Web::Http::HttpRequestMessage const& request) const;
    };
    template <> struct consume<Windows::Web::Http::Filters::IHttpFilter>
    {
        template <typename D> using type = consume_Windows_Web_Http_Filters_IHttpFilter<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs
    {
        [[nodiscard]] auto RequestMessage() const;
        [[nodiscard]] auto ServerCertificate() const;
        [[nodiscard]] auto ServerCertificateErrorSeverity() const;
        [[nodiscard]] auto ServerCertificateErrors() const;
        [[nodiscard]] auto ServerIntermediateCertificates() const;
        auto Reject() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>;
    };
}
#endif
