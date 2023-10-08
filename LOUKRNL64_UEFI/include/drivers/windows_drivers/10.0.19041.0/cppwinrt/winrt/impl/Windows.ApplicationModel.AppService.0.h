// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_AppService_0_H
#define WINRT_Windows_ApplicationModel_AppService_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    struct ValueSet;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::System::RemoteSystems
{
    struct RemoteSystemConnectionRequest;
}
namespace winrt::Windows::ApplicationModel::AppService
{
    enum class AppServiceClosedStatus : int32_t
    {
        Completed = 0,
        Canceled = 1,
        ResourceLimitsExceeded = 2,
        Unknown = 3,
    };
    enum class AppServiceConnectionStatus : int32_t
    {
        Success = 0,
        AppNotInstalled = 1,
        AppUnavailable = 2,
        AppServiceUnavailable = 3,
        Unknown = 4,
        RemoteSystemUnavailable = 5,
        RemoteSystemNotSupportedByApp = 6,
        NotAuthorized = 7,
        AuthenticationError = 8,
        NetworkNotAvailable = 9,
        DisabledByPolicy = 10,
        WebServiceUnavailable = 11,
    };
    enum class AppServiceResponseStatus : int32_t
    {
        Success = 0,
        Failure = 1,
        ResourceLimitsExceeded = 2,
        Unknown = 3,
        RemoteSystemUnavailable = 4,
        MessageSizeTooLarge = 5,
        AppUnavailable = 6,
        AuthenticationError = 7,
        NetworkNotAvailable = 8,
        DisabledByPolicy = 9,
        WebServiceUnavailable = 10,
    };
    enum class StatelessAppServiceResponseStatus : int32_t
    {
        Success = 0,
        AppNotInstalled = 1,
        AppUnavailable = 2,
        AppServiceUnavailable = 3,
        RemoteSystemUnavailable = 4,
        RemoteSystemNotSupportedByApp = 5,
        NotAuthorized = 6,
        ResourceLimitsExceeded = 7,
        MessageSizeTooLarge = 8,
        Failure = 9,
        Unknown = 10,
        AuthenticationError = 11,
        NetworkNotAvailable = 12,
        DisabledByPolicy = 13,
        WebServiceUnavailable = 14,
    };
    struct IAppServiceCatalogStatics;
    struct IAppServiceClosedEventArgs;
    struct IAppServiceConnection;
    struct IAppServiceConnection2;
    struct IAppServiceConnectionStatics;
    struct IAppServiceDeferral;
    struct IAppServiceRequest;
    struct IAppServiceRequestReceivedEventArgs;
    struct IAppServiceResponse;
    struct IAppServiceTriggerDetails;
    struct IAppServiceTriggerDetails2;
    struct IAppServiceTriggerDetails3;
    struct IAppServiceTriggerDetails4;
    struct IStatelessAppServiceResponse;
    struct AppServiceCatalog;
    struct AppServiceClosedEventArgs;
    struct AppServiceConnection;
    struct AppServiceDeferral;
    struct AppServiceRequest;
    struct AppServiceRequestReceivedEventArgs;
    struct AppServiceResponse;
    struct AppServiceTriggerDetails;
    struct StatelessAppServiceResponse;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::AppService::IAppServiceCatalogStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::IAppServiceConnection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::IAppServiceConnection2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::IAppServiceConnectionStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::IAppServiceDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::IAppServiceRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::IAppServiceResponse>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::IStatelessAppServiceResponse>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::AppServiceCatalog>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::AppServiceClosedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::AppServiceConnection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::AppServiceDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::AppServiceRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::AppServiceResponse>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::AppServiceTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::StatelessAppServiceResponse>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::AppServiceClosedStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::AppServiceConnectionStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::AppServiceResponseStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::AppService::StatelessAppServiceResponseStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::AppService::IAppServiceCatalogStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceCatalogStatics" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceClosedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::IAppServiceConnection>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceConnection" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::IAppServiceConnection2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceConnection2" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::IAppServiceConnectionStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceConnectionStatics" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::IAppServiceDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::IAppServiceRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceRequest" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceRequestReceivedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::IAppServiceResponse>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceResponse" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceTriggerDetails" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceTriggerDetails2" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceTriggerDetails3" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails4>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IAppServiceTriggerDetails4" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::IStatelessAppServiceResponse>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.IStatelessAppServiceResponse" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::AppServiceCatalog>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceCatalog" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::AppServiceClosedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceClosedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::AppServiceConnection>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceConnection" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::AppServiceDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::AppServiceRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceRequest" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceRequestReceivedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::AppServiceResponse>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceResponse" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::AppServiceTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceTriggerDetails" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::StatelessAppServiceResponse>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.StatelessAppServiceResponse" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::AppServiceClosedStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceClosedStatus" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::AppServiceConnectionStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceConnectionStatus" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::AppServiceResponseStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.AppServiceResponseStatus" };
    };
    template <> struct name<Windows::ApplicationModel::AppService::StatelessAppServiceResponseStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.AppService.StatelessAppServiceResponseStatus" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::AppService::IAppServiceCatalogStatics>
    {
        static constexpr guid value{ 0xEF0D2507,0xD132,0x4C85,{ 0x83,0x95,0x3C,0x31,0xD5,0xA1,0xE9,0x41 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs>
    {
        static constexpr guid value{ 0xDE6016F6,0xCB03,0x4D35,{ 0xAC,0x8D,0xCC,0x63,0x03,0x23,0x97,0x31 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::AppService::IAppServiceConnection>
    {
        static constexpr guid value{ 0x9DD474A2,0x871F,0x4D52,{ 0x89,0xA9,0x9E,0x09,0x05,0x31,0xBD,0x27 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::AppService::IAppServiceConnection2>
    {
        static constexpr guid value{ 0x8BDFCD5F,0x2302,0x4FBD,{ 0x80,0x61,0x52,0x51,0x1C,0x2F,0x8B,0xF9 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::AppService::IAppServiceConnectionStatics>
    {
        static constexpr guid value{ 0xADC56CE9,0xD408,0x5673,{ 0x86,0x37,0x82,0x7A,0x4B,0x27,0x41,0x68 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::AppService::IAppServiceDeferral>
    {
        static constexpr guid value{ 0x7E1B5322,0xEAB0,0x4248,{ 0xAE,0x04,0xFD,0xF9,0x38,0x38,0xE4,0x72 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::AppService::IAppServiceRequest>
    {
        static constexpr guid value{ 0x20E58D9D,0x18DE,0x4B01,{ 0x80,0xBA,0x90,0xA7,0x62,0x04,0xE3,0xC8 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs>
    {
        static constexpr guid value{ 0x6E122360,0xFF65,0x44AE,{ 0x9E,0x45,0x85,0x7F,0xE4,0x18,0x06,0x81 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::AppService::IAppServiceResponse>
    {
        static constexpr guid value{ 0x8D503CEC,0x9AA3,0x4E68,{ 0x95,0x59,0x9D,0xE6,0x3E,0x37,0x2C,0xE4 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails>
    {
        static constexpr guid value{ 0x88A2DCAC,0xAD28,0x41B8,{ 0x80,0xBB,0xBD,0xF1,0xB2,0x16,0x9E,0x19 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2>
    {
        static constexpr guid value{ 0xE83D54B2,0x28CC,0x43F2,{ 0xB4,0x65,0xC0,0x48,0x2E,0x59,0xE2,0xDC } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails3>
    {
        static constexpr guid value{ 0xFBD71E21,0x7939,0x4E68,{ 0x9E,0x3C,0x77,0x80,0x14,0x7A,0xAB,0xB6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails4>
    {
        static constexpr guid value{ 0x1185B180,0x8861,0x5E30,{ 0xAB,0x55,0x1C,0xF4,0xD0,0x8B,0xBF,0x6D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::AppService::IStatelessAppServiceResponse>
    {
        static constexpr guid value{ 0x43754AF7,0xA9EC,0x52FE,{ 0x82,0xE7,0x93,0x9B,0x68,0xDC,0x93,0x88 } };
    };
    template <> struct default_interface<Windows::ApplicationModel::AppService::AppServiceClosedEventArgs>
    {
        using type = Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::AppService::AppServiceConnection>
    {
        using type = Windows::ApplicationModel::AppService::IAppServiceConnection;
    };
    template <> struct default_interface<Windows::ApplicationModel::AppService::AppServiceDeferral>
    {
        using type = Windows::ApplicationModel::AppService::IAppServiceDeferral;
    };
    template <> struct default_interface<Windows::ApplicationModel::AppService::AppServiceRequest>
    {
        using type = Windows::ApplicationModel::AppService::IAppServiceRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs>
    {
        using type = Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::AppService::AppServiceResponse>
    {
        using type = Windows::ApplicationModel::AppService::IAppServiceResponse;
    };
    template <> struct default_interface<Windows::ApplicationModel::AppService::AppServiceTriggerDetails>
    {
        using type = Windows::ApplicationModel::AppService::IAppServiceTriggerDetails;
    };
    template <> struct default_interface<Windows::ApplicationModel::AppService::StatelessAppServiceResponse>
    {
        using type = Windows::ApplicationModel::AppService::IStatelessAppServiceResponse;
    };
    template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceCatalogStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAppServiceProvidersAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceConnection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppServiceName(void**) noexcept = 0;
            virtual int32_t __stdcall put_AppServiceName(void*) noexcept = 0;
            virtual int32_t __stdcall get_PackageFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall put_PackageFamilyName(void*) noexcept = 0;
            virtual int32_t __stdcall OpenAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SendMessageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_RequestReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RequestReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ServiceClosed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ServiceClosed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceConnection2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OpenRemoteAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
            virtual int32_t __stdcall put_User(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceConnectionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SendStatelessMessageAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
            virtual int32_t __stdcall SendResponseAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceResponse>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_CallerPackageFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppServiceConnection(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsRemoteSystemConnection(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CheckCallerForCapabilityAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CallerRemoteConnectionToken(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppService::IStatelessAppServiceResponse>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppService_IAppServiceCatalogStatics
    {
        auto FindAppServiceProvidersAsync(param::hstring const& appServiceName) const;
    };
    template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceCatalogStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceCatalogStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppService_IAppServiceClosedEventArgs
    {
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceClosedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppService_IAppServiceConnection
    {
        [[nodiscard]] auto AppServiceName() const;
        auto AppServiceName(param::hstring const& value) const;
        [[nodiscard]] auto PackageFamilyName() const;
        auto PackageFamilyName(param::hstring const& value) const;
        auto OpenAsync() const;
        auto SendMessageAsync(Windows::Foundation::Collections::ValueSet const& message) const;
        auto RequestReceived(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs> const& handler) const;
        using RequestReceived_revoker = impl::event_revoker<Windows::ApplicationModel::AppService::IAppServiceConnection, &impl::abi_t<Windows::ApplicationModel::AppService::IAppServiceConnection>::remove_RequestReceived>;
        RequestReceived_revoker RequestReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs> const& handler) const;
        auto RequestReceived(winrt::event_token const& token) const noexcept;
        auto ServiceClosed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceClosedEventArgs> const& handler) const;
        using ServiceClosed_revoker = impl::event_revoker<Windows::ApplicationModel::AppService::IAppServiceConnection, &impl::abi_t<Windows::ApplicationModel::AppService::IAppServiceConnection>::remove_ServiceClosed>;
        ServiceClosed_revoker ServiceClosed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection, Windows::ApplicationModel::AppService::AppServiceClosedEventArgs> const& handler) const;
        auto ServiceClosed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceConnection>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceConnection<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppService_IAppServiceConnection2
    {
        auto OpenRemoteAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest) const;
        [[nodiscard]] auto User() const;
        auto User(Windows::System::User const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceConnection2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceConnection2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppService_IAppServiceConnectionStatics
    {
        auto SendStatelessMessageAsync(Windows::ApplicationModel::AppService::AppServiceConnection const& connection, Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& connectionRequest, Windows::Foundation::Collections::ValueSet const& message) const;
    };
    template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceConnectionStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceConnectionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppService_IAppServiceDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppService_IAppServiceRequest
    {
        [[nodiscard]] auto Message() const;
        auto SendResponseAsync(Windows::Foundation::Collections::ValueSet const& message) const;
    };
    template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppService_IAppServiceRequestReceivedEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceRequestReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppService_IAppServiceResponse
    {
        [[nodiscard]] auto Message() const;
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceResponse>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceResponse<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto CallerPackageFamilyName() const;
        [[nodiscard]] auto AppServiceConnection() const;
    };
    template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails2
    {
        [[nodiscard]] auto IsRemoteSystemConnection() const;
    };
    template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails3
    {
        auto CheckCallerForCapabilityAsync(param::hstring const& capabilityName) const;
    };
    template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails4
    {
        [[nodiscard]] auto CallerRemoteConnectionToken() const;
    };
    template <> struct consume<Windows::ApplicationModel::AppService::IAppServiceTriggerDetails4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppService_IStatelessAppServiceResponse
    {
        [[nodiscard]] auto Message() const;
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::ApplicationModel::AppService::IStatelessAppServiceResponse>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppService_IStatelessAppServiceResponse<D>;
    };
}
#endif
