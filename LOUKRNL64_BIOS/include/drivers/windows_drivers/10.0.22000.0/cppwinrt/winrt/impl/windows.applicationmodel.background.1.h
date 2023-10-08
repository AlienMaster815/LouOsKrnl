// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Background_1_H
#define WINRT_Windows_ApplicationModel_Background_1_H
#include "winrt/impl/Windows.ApplicationModel.Background.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Background
{
    struct __declspec(empty_bases) IActivitySensorTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IActivitySensorTrigger>,
        impl::require<Windows::ApplicationModel::Background::IActivitySensorTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IActivitySensorTrigger(std::nullptr_t = nullptr) noexcept {}
        IActivitySensorTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IActivitySensorTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IActivitySensorTriggerFactory>
    {
        IActivitySensorTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        IActivitySensorTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAlarmApplicationManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAlarmApplicationManagerStatics>
    {
        IAlarmApplicationManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IAlarmApplicationManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppBroadcastTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppBroadcastTrigger>,
        impl::require<Windows::ApplicationModel::Background::IAppBroadcastTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IAppBroadcastTrigger(std::nullptr_t = nullptr) noexcept {}
        IAppBroadcastTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppBroadcastTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppBroadcastTriggerFactory>
    {
        IAppBroadcastTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        IAppBroadcastTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppBroadcastTriggerProviderInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppBroadcastTriggerProviderInfo>
    {
        IAppBroadcastTriggerProviderInfo(std::nullptr_t = nullptr) noexcept {}
        IAppBroadcastTriggerProviderInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IApplicationTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IApplicationTrigger>,
        impl::require<Windows::ApplicationModel::Background::IApplicationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IApplicationTrigger(std::nullptr_t = nullptr) noexcept {}
        IApplicationTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IApplicationTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IApplicationTriggerDetails>
    {
        IApplicationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IApplicationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppointmentStoreNotificationTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentStoreNotificationTrigger>,
        impl::require<Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IAppointmentStoreNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
        IAppointmentStoreNotificationTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundCondition :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundCondition>
    {
        IBackgroundCondition(std::nullptr_t = nullptr) noexcept {}
        IBackgroundCondition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundExecutionManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundExecutionManagerStatics>
    {
        IBackgroundExecutionManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IBackgroundExecutionManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundExecutionManagerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundExecutionManagerStatics2>
    {
        IBackgroundExecutionManagerStatics2(std::nullptr_t = nullptr) noexcept {}
        IBackgroundExecutionManagerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundExecutionManagerStatics3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundExecutionManagerStatics3>
    {
        IBackgroundExecutionManagerStatics3(std::nullptr_t = nullptr) noexcept {}
        IBackgroundExecutionManagerStatics3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTask :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTask>
    {
        IBackgroundTask(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTask(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTaskBuilder :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTaskBuilder>
    {
        IBackgroundTaskBuilder(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTaskBuilder(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTaskBuilder2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTaskBuilder2>,
        impl::require<Windows::ApplicationModel::Background::IBackgroundTaskBuilder2, Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
    {
        IBackgroundTaskBuilder2(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTaskBuilder2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTaskBuilder3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTaskBuilder3>,
        impl::require<Windows::ApplicationModel::Background::IBackgroundTaskBuilder3, Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
    {
        IBackgroundTaskBuilder3(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTaskBuilder3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTaskBuilder4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTaskBuilder4>,
        impl::require<Windows::ApplicationModel::Background::IBackgroundTaskBuilder4, Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
    {
        IBackgroundTaskBuilder4(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTaskBuilder4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTaskBuilder5 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTaskBuilder5>
    {
        IBackgroundTaskBuilder5(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTaskBuilder5(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTaskCompletedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTaskCompletedEventArgs>
    {
        IBackgroundTaskCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTaskCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTaskDeferral :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTaskDeferral>
    {
        IBackgroundTaskDeferral(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTaskDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTaskInstance :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTaskInstance>
    {
        IBackgroundTaskInstance(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTaskInstance(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTaskInstance2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTaskInstance2>,
        impl::require<Windows::ApplicationModel::Background::IBackgroundTaskInstance2, Windows::ApplicationModel::Background::IBackgroundTaskInstance>
    {
        IBackgroundTaskInstance2(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTaskInstance2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTaskInstance4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTaskInstance4>,
        impl::require<Windows::ApplicationModel::Background::IBackgroundTaskInstance4, Windows::ApplicationModel::Background::IBackgroundTaskInstance>
    {
        IBackgroundTaskInstance4(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTaskInstance4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTaskProgressEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTaskProgressEventArgs>
    {
        IBackgroundTaskProgressEventArgs(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTaskProgressEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTaskRegistration :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTaskRegistration>
    {
        IBackgroundTaskRegistration(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTaskRegistration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTaskRegistration2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTaskRegistration2>,
        impl::require<Windows::ApplicationModel::Background::IBackgroundTaskRegistration2, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
    {
        IBackgroundTaskRegistration2(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTaskRegistration2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTaskRegistration3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTaskRegistration3>,
        impl::require<Windows::ApplicationModel::Background::IBackgroundTaskRegistration3, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
    {
        IBackgroundTaskRegistration3(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTaskRegistration3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTaskRegistrationGroup :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTaskRegistrationGroup>
    {
        IBackgroundTaskRegistrationGroup(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTaskRegistrationGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTaskRegistrationGroupFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTaskRegistrationGroupFactory>
    {
        IBackgroundTaskRegistrationGroupFactory(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTaskRegistrationGroupFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTaskRegistrationStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTaskRegistrationStatics>
    {
        IBackgroundTaskRegistrationStatics(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTaskRegistrationStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTaskRegistrationStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTaskRegistrationStatics2>
    {
        IBackgroundTaskRegistrationStatics2(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTaskRegistrationStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundTrigger>
    {
        IBackgroundTrigger(std::nullptr_t = nullptr) noexcept {}
        IBackgroundTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundWorkCostStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundWorkCostStatics>
    {
        IBackgroundWorkCostStatics(std::nullptr_t = nullptr) noexcept {}
        IBackgroundWorkCostStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBluetoothLEAdvertisementPublisherTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementPublisherTrigger>,
        impl::require<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IBluetoothLEAdvertisementPublisherTrigger(std::nullptr_t = nullptr) noexcept {}
        IBluetoothLEAdvertisementPublisherTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBluetoothLEAdvertisementPublisherTrigger2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementPublisherTrigger2>
    {
        IBluetoothLEAdvertisementPublisherTrigger2(std::nullptr_t = nullptr) noexcept {}
        IBluetoothLEAdvertisementPublisherTrigger2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBluetoothLEAdvertisementWatcherTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementWatcherTrigger>,
        impl::require<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IBluetoothLEAdvertisementWatcherTrigger(std::nullptr_t = nullptr) noexcept {}
        IBluetoothLEAdvertisementWatcherTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBluetoothLEAdvertisementWatcherTrigger2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothLEAdvertisementWatcherTrigger2>
    {
        IBluetoothLEAdvertisementWatcherTrigger2(std::nullptr_t = nullptr) noexcept {}
        IBluetoothLEAdvertisementWatcherTrigger2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICachedFileUpdaterTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICachedFileUpdaterTrigger>,
        impl::require<Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        ICachedFileUpdaterTrigger(std::nullptr_t = nullptr) noexcept {}
        ICachedFileUpdaterTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICachedFileUpdaterTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICachedFileUpdaterTriggerDetails>
    {
        ICachedFileUpdaterTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        ICachedFileUpdaterTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageNotificationTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageNotificationTrigger>,
        impl::require<Windows::ApplicationModel::Background::IChatMessageNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IChatMessageNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
        IChatMessageNotificationTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageReceivedNotificationTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageReceivedNotificationTrigger>,
        impl::require<Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IChatMessageReceivedNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
        IChatMessageReceivedNotificationTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICommunicationBlockingAppSetAsActiveTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICommunicationBlockingAppSetAsActiveTrigger>,
        impl::require<Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        ICommunicationBlockingAppSetAsActiveTrigger(std::nullptr_t = nullptr) noexcept {}
        ICommunicationBlockingAppSetAsActiveTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactStoreNotificationTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContactStoreNotificationTrigger>,
        impl::require<Windows::ApplicationModel::Background::IContactStoreNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IContactStoreNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
        IContactStoreNotificationTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContentPrefetchTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContentPrefetchTrigger>,
        impl::require<Windows::ApplicationModel::Background::IContentPrefetchTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IContentPrefetchTrigger(std::nullptr_t = nullptr) noexcept {}
        IContentPrefetchTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContentPrefetchTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContentPrefetchTriggerFactory>
    {
        IContentPrefetchTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        IContentPrefetchTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICustomSystemEventTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICustomSystemEventTrigger>
    {
        ICustomSystemEventTrigger(std::nullptr_t = nullptr) noexcept {}
        ICustomSystemEventTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICustomSystemEventTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICustomSystemEventTriggerFactory>
    {
        ICustomSystemEventTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        ICustomSystemEventTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceConnectionChangeTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceConnectionChangeTrigger>,
        impl::require<Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IDeviceConnectionChangeTrigger(std::nullptr_t = nullptr) noexcept {}
        IDeviceConnectionChangeTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceConnectionChangeTriggerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceConnectionChangeTriggerStatics>
    {
        IDeviceConnectionChangeTriggerStatics(std::nullptr_t = nullptr) noexcept {}
        IDeviceConnectionChangeTriggerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceManufacturerNotificationTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceManufacturerNotificationTrigger>,
        impl::require<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IDeviceManufacturerNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
        IDeviceManufacturerNotificationTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceManufacturerNotificationTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceManufacturerNotificationTriggerFactory>
    {
        IDeviceManufacturerNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        IDeviceManufacturerNotificationTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceServicingTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceServicingTrigger>,
        impl::require<Windows::ApplicationModel::Background::IDeviceServicingTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IDeviceServicingTrigger(std::nullptr_t = nullptr) noexcept {}
        IDeviceServicingTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceUseTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceUseTrigger>,
        impl::require<Windows::ApplicationModel::Background::IDeviceUseTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IDeviceUseTrigger(std::nullptr_t = nullptr) noexcept {}
        IDeviceUseTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceWatcherTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceWatcherTrigger>,
        impl::require<Windows::ApplicationModel::Background::IDeviceWatcherTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IDeviceWatcherTrigger(std::nullptr_t = nullptr) noexcept {}
        IDeviceWatcherTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailStoreNotificationTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailStoreNotificationTrigger>,
        impl::require<Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IEmailStoreNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
        IEmailStoreNotificationTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattCharacteristicNotificationTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattCharacteristicNotificationTrigger>,
        impl::require<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IGattCharacteristicNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
        IGattCharacteristicNotificationTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattCharacteristicNotificationTrigger2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattCharacteristicNotificationTrigger2>
    {
        IGattCharacteristicNotificationTrigger2(std::nullptr_t = nullptr) noexcept {}
        IGattCharacteristicNotificationTrigger2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattCharacteristicNotificationTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattCharacteristicNotificationTriggerFactory>
    {
        IGattCharacteristicNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        IGattCharacteristicNotificationTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattCharacteristicNotificationTriggerFactory2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattCharacteristicNotificationTriggerFactory2>
    {
        IGattCharacteristicNotificationTriggerFactory2(std::nullptr_t = nullptr) noexcept {}
        IGattCharacteristicNotificationTriggerFactory2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattServiceProviderTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattServiceProviderTrigger>
    {
        IGattServiceProviderTrigger(std::nullptr_t = nullptr) noexcept {}
        IGattServiceProviderTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattServiceProviderTriggerResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattServiceProviderTriggerResult>
    {
        IGattServiceProviderTriggerResult(std::nullptr_t = nullptr) noexcept {}
        IGattServiceProviderTriggerResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGattServiceProviderTriggerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGattServiceProviderTriggerStatics>
    {
        IGattServiceProviderTriggerStatics(std::nullptr_t = nullptr) noexcept {}
        IGattServiceProviderTriggerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGeovisitTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeovisitTrigger>,
        impl::require<Windows::ApplicationModel::Background::IGeovisitTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IGeovisitTrigger(std::nullptr_t = nullptr) noexcept {}
        IGeovisitTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILocationTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILocationTrigger>,
        impl::require<Windows::ApplicationModel::Background::ILocationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        ILocationTrigger(std::nullptr_t = nullptr) noexcept {}
        ILocationTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILocationTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILocationTriggerFactory>
    {
        ILocationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        ILocationTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMaintenanceTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMaintenanceTrigger>,
        impl::require<Windows::ApplicationModel::Background::IMaintenanceTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IMaintenanceTrigger(std::nullptr_t = nullptr) noexcept {}
        IMaintenanceTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMaintenanceTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMaintenanceTriggerFactory>
    {
        IMaintenanceTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        IMaintenanceTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaProcessingTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaProcessingTrigger>,
        impl::require<Windows::ApplicationModel::Background::IMediaProcessingTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IMediaProcessingTrigger(std::nullptr_t = nullptr) noexcept {}
        IMediaProcessingTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INetworkOperatorHotspotAuthenticationTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<INetworkOperatorHotspotAuthenticationTrigger>,
        impl::require<Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        INetworkOperatorHotspotAuthenticationTrigger(std::nullptr_t = nullptr) noexcept {}
        INetworkOperatorHotspotAuthenticationTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INetworkOperatorNotificationTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<INetworkOperatorNotificationTrigger>,
        impl::require<Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        INetworkOperatorNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
        INetworkOperatorNotificationTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INetworkOperatorNotificationTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<INetworkOperatorNotificationTriggerFactory>
    {
        INetworkOperatorNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        INetworkOperatorNotificationTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhoneTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneTrigger>,
        impl::require<Windows::ApplicationModel::Background::IPhoneTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IPhoneTrigger(std::nullptr_t = nullptr) noexcept {}
        IPhoneTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhoneTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneTriggerFactory>
    {
        IPhoneTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        IPhoneTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPushNotificationTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPushNotificationTriggerFactory>
    {
        IPushNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        IPushNotificationTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRcsEndUserMessageAvailableTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRcsEndUserMessageAvailableTrigger>,
        impl::require<Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IRcsEndUserMessageAvailableTrigger(std::nullptr_t = nullptr) noexcept {}
        IRcsEndUserMessageAvailableTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRfcommConnectionTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRfcommConnectionTrigger>,
        impl::require<Windows::ApplicationModel::Background::IRfcommConnectionTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IRfcommConnectionTrigger(std::nullptr_t = nullptr) noexcept {}
        IRfcommConnectionTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISecondaryAuthenticationFactorAuthenticationTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISecondaryAuthenticationFactorAuthenticationTrigger>,
        impl::require<Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        ISecondaryAuthenticationFactorAuthenticationTrigger(std::nullptr_t = nullptr) noexcept {}
        ISecondaryAuthenticationFactorAuthenticationTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISensorDataThresholdTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISensorDataThresholdTrigger>,
        impl::require<Windows::ApplicationModel::Background::ISensorDataThresholdTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        ISensorDataThresholdTrigger(std::nullptr_t = nullptr) noexcept {}
        ISensorDataThresholdTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISensorDataThresholdTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISensorDataThresholdTriggerFactory>
    {
        ISensorDataThresholdTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        ISensorDataThresholdTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISmartCardTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISmartCardTrigger>,
        impl::require<Windows::ApplicationModel::Background::ISmartCardTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        ISmartCardTrigger(std::nullptr_t = nullptr) noexcept {}
        ISmartCardTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISmartCardTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISmartCardTriggerFactory>
    {
        ISmartCardTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        ISmartCardTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISmsMessageReceivedTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISmsMessageReceivedTriggerFactory>
    {
        ISmsMessageReceivedTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        ISmsMessageReceivedTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISocketActivityTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISocketActivityTrigger>
    {
        ISocketActivityTrigger(std::nullptr_t = nullptr) noexcept {}
        ISocketActivityTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageLibraryChangeTrackerTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageLibraryChangeTrackerTriggerFactory>
    {
        IStorageLibraryChangeTrackerTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        IStorageLibraryChangeTrackerTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageLibraryContentChangedTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageLibraryContentChangedTrigger>,
        impl::require<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        IStorageLibraryContentChangedTrigger(std::nullptr_t = nullptr) noexcept {}
        IStorageLibraryContentChangedTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageLibraryContentChangedTriggerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageLibraryContentChangedTriggerStatics>
    {
        IStorageLibraryContentChangedTriggerStatics(std::nullptr_t = nullptr) noexcept {}
        IStorageLibraryContentChangedTriggerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISystemCondition :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISystemCondition>,
        impl::require<Windows::ApplicationModel::Background::ISystemCondition, Windows::ApplicationModel::Background::IBackgroundCondition>
    {
        ISystemCondition(std::nullptr_t = nullptr) noexcept {}
        ISystemCondition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISystemConditionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISystemConditionFactory>
    {
        ISystemConditionFactory(std::nullptr_t = nullptr) noexcept {}
        ISystemConditionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISystemTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISystemTrigger>,
        impl::require<Windows::ApplicationModel::Background::ISystemTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        ISystemTrigger(std::nullptr_t = nullptr) noexcept {}
        ISystemTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISystemTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISystemTriggerFactory>
    {
        ISystemTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        ISystemTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimeTrigger :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimeTrigger>,
        impl::require<Windows::ApplicationModel::Background::ITimeTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        ITimeTrigger(std::nullptr_t = nullptr) noexcept {}
        ITimeTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimeTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimeTriggerFactory>
    {
        ITimeTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        ITimeTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IToastNotificationActionTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IToastNotificationActionTriggerFactory>
    {
        IToastNotificationActionTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        IToastNotificationActionTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IToastNotificationHistoryChangedTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IToastNotificationHistoryChangedTriggerFactory>
    {
        IToastNotificationHistoryChangedTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        IToastNotificationHistoryChangedTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserNotificationChangedTriggerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserNotificationChangedTriggerFactory>
    {
        IUserNotificationChangedTriggerFactory(std::nullptr_t = nullptr) noexcept {}
        IUserNotificationChangedTriggerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
