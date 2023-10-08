// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_UserDataTasks_DataProvider_1_H
#define WINRT_Windows_ApplicationModel_UserDataTasks_DataProvider_1_H
#include "winrt/impl/Windows.ApplicationModel.UserDataTasks.DataProvider.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataTasks::DataProvider
{
    struct __declspec(empty_bases) IUserDataTaskDataProviderConnection :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataTaskDataProviderConnection>
    {
        IUserDataTaskDataProviderConnection(std::nullptr_t = nullptr) noexcept {}
        IUserDataTaskDataProviderConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataTaskDataProviderTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataTaskDataProviderTriggerDetails>
    {
        IUserDataTaskDataProviderTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IUserDataTaskDataProviderTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataTaskListCompleteTaskRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataTaskListCompleteTaskRequest>
    {
        IUserDataTaskListCompleteTaskRequest(std::nullptr_t = nullptr) noexcept {}
        IUserDataTaskListCompleteTaskRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataTaskListCompleteTaskRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataTaskListCompleteTaskRequestEventArgs>
    {
        IUserDataTaskListCompleteTaskRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IUserDataTaskListCompleteTaskRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataTaskListCreateOrUpdateTaskRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataTaskListCreateOrUpdateTaskRequest>
    {
        IUserDataTaskListCreateOrUpdateTaskRequest(std::nullptr_t = nullptr) noexcept {}
        IUserDataTaskListCreateOrUpdateTaskRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataTaskListCreateOrUpdateTaskRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataTaskListCreateOrUpdateTaskRequestEventArgs>
    {
        IUserDataTaskListCreateOrUpdateTaskRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IUserDataTaskListCreateOrUpdateTaskRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataTaskListDeleteTaskRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataTaskListDeleteTaskRequest>
    {
        IUserDataTaskListDeleteTaskRequest(std::nullptr_t = nullptr) noexcept {}
        IUserDataTaskListDeleteTaskRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataTaskListDeleteTaskRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataTaskListDeleteTaskRequestEventArgs>
    {
        IUserDataTaskListDeleteTaskRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IUserDataTaskListDeleteTaskRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataTaskListSkipOccurrenceRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataTaskListSkipOccurrenceRequest>
    {
        IUserDataTaskListSkipOccurrenceRequest(std::nullptr_t = nullptr) noexcept {}
        IUserDataTaskListSkipOccurrenceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataTaskListSkipOccurrenceRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataTaskListSkipOccurrenceRequestEventArgs>
    {
        IUserDataTaskListSkipOccurrenceRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IUserDataTaskListSkipOccurrenceRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataTaskListSyncManagerSyncRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataTaskListSyncManagerSyncRequest>
    {
        IUserDataTaskListSyncManagerSyncRequest(std::nullptr_t = nullptr) noexcept {}
        IUserDataTaskListSyncManagerSyncRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataTaskListSyncManagerSyncRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataTaskListSyncManagerSyncRequestEventArgs>
    {
        IUserDataTaskListSyncManagerSyncRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IUserDataTaskListSyncManagerSyncRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
