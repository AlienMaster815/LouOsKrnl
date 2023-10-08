// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_AppService_2_H
#define WINRT_Windows_ApplicationModel_AppService_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.System.RemoteSystems.1.h"
#include "winrt/impl/Windows.ApplicationModel.AppService.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppService
{
    struct AppServiceCatalog
    {
        AppServiceCatalog() = delete;
        static auto FindAppServiceProvidersAsync(param::hstring const& appServiceName);
    };
    struct __declspec(empty_bases) AppServiceClosedEventArgs : Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs
    {
        AppServiceClosedEventArgs(std::nullptr_t) noexcept {}
        AppServiceClosedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppServiceConnection : Windows::ApplicationModel::AppService::IAppServiceConnection,
        impl::require<AppServiceConnection, Windows::ApplicationModel::AppService::IAppServiceConnection2, Windows::Foundation::IClosable>
    {
        AppServiceConnection(std::nullptr_t) noexcept {}
        AppServiceConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::AppService::IAppServiceConnection(ptr, take_ownership_from_abi) {}
        AppServiceConnection();
        static auto SendStatelessMessageAsync(Windows::ApplicationModel::AppService::AppServiceConnection const& connection, Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& connectionRequest, Windows::Foundation::Collections::ValueSet const& message);
    };
    struct __declspec(empty_bases) AppServiceDeferral : Windows::ApplicationModel::AppService::IAppServiceDeferral
    {
        AppServiceDeferral(std::nullptr_t) noexcept {}
        AppServiceDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::AppService::IAppServiceDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppServiceRequest : Windows::ApplicationModel::AppService::IAppServiceRequest
    {
        AppServiceRequest(std::nullptr_t) noexcept {}
        AppServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::AppService::IAppServiceRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppServiceRequestReceivedEventArgs : Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs
    {
        AppServiceRequestReceivedEventArgs(std::nullptr_t) noexcept {}
        AppServiceRequestReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppServiceResponse : Windows::ApplicationModel::AppService::IAppServiceResponse
    {
        AppServiceResponse(std::nullptr_t) noexcept {}
        AppServiceResponse(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::AppService::IAppServiceResponse(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppServiceTriggerDetails : Windows::ApplicationModel::AppService::IAppServiceTriggerDetails,
        impl::require<AppServiceTriggerDetails, Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2, Windows::ApplicationModel::AppService::IAppServiceTriggerDetails3, Windows::ApplicationModel::AppService::IAppServiceTriggerDetails4>
    {
        AppServiceTriggerDetails(std::nullptr_t) noexcept {}
        AppServiceTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::AppService::IAppServiceTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StatelessAppServiceResponse : Windows::ApplicationModel::AppService::IStatelessAppServiceResponse
    {
        StatelessAppServiceResponse(std::nullptr_t) noexcept {}
        StatelessAppServiceResponse(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::AppService::IStatelessAppServiceResponse(ptr, take_ownership_from_abi) {}
    };
}
#endif
