// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_UserActivities_2_H
#define WINRT_Windows_ApplicationModel_UserActivities_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.ApplicationModel.UserActivities.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities
{
    struct __declspec(empty_bases) UserActivity : Windows::ApplicationModel::UserActivities::IUserActivity,
        impl::require<UserActivity, Windows::ApplicationModel::UserActivities::IUserActivity2, Windows::ApplicationModel::UserActivities::IUserActivity3>
    {
        UserActivity(std::nullptr_t) noexcept {}
        UserActivity(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::UserActivities::IUserActivity(ptr, take_ownership_from_abi) {}
        explicit UserActivity(param::hstring const& activityId);
        static auto TryParseFromJson(param::hstring const& json);
        static auto TryParseFromJsonArray(param::hstring const& json);
        static auto ToJsonArray(param::iterable<Windows::ApplicationModel::UserActivities::UserActivity> const& activities);
    };
    struct __declspec(empty_bases) UserActivityAttribution : Windows::ApplicationModel::UserActivities::IUserActivityAttribution
    {
        UserActivityAttribution(std::nullptr_t) noexcept {}
        UserActivityAttribution(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::UserActivities::IUserActivityAttribution(ptr, take_ownership_from_abi) {}
        UserActivityAttribution();
        explicit UserActivityAttribution(Windows::Foundation::Uri const& iconUri);
    };
    struct __declspec(empty_bases) UserActivityChannel : Windows::ApplicationModel::UserActivities::IUserActivityChannel,
        impl::require<UserActivityChannel, Windows::ApplicationModel::UserActivities::IUserActivityChannel2>
    {
        UserActivityChannel(std::nullptr_t) noexcept {}
        UserActivityChannel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::UserActivities::IUserActivityChannel(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto DisableAutoSessionCreation();
        static auto TryGetForWebAccount(Windows::Security::Credentials::WebAccount const& account);
        static auto GetForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) UserActivityContentInfo : Windows::ApplicationModel::UserActivities::IUserActivityContentInfo
    {
        UserActivityContentInfo(std::nullptr_t) noexcept {}
        UserActivityContentInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::UserActivities::IUserActivityContentInfo(ptr, take_ownership_from_abi) {}
        static auto FromJson(param::hstring const& value);
    };
    struct __declspec(empty_bases) UserActivityRequest : Windows::ApplicationModel::UserActivities::IUserActivityRequest
    {
        UserActivityRequest(std::nullptr_t) noexcept {}
        UserActivityRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::UserActivities::IUserActivityRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UserActivityRequestManager : Windows::ApplicationModel::UserActivities::IUserActivityRequestManager
    {
        UserActivityRequestManager(std::nullptr_t) noexcept {}
        UserActivityRequestManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::UserActivities::IUserActivityRequestManager(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) UserActivityRequestedEventArgs : Windows::ApplicationModel::UserActivities::IUserActivityRequestedEventArgs
    {
        UserActivityRequestedEventArgs(std::nullptr_t) noexcept {}
        UserActivityRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::UserActivities::IUserActivityRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UserActivitySession : Windows::ApplicationModel::UserActivities::IUserActivitySession,
        impl::require<UserActivitySession, Windows::Foundation::IClosable>
    {
        UserActivitySession(std::nullptr_t) noexcept {}
        UserActivitySession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::UserActivities::IUserActivitySession(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UserActivitySessionHistoryItem : Windows::ApplicationModel::UserActivities::IUserActivitySessionHistoryItem
    {
        UserActivitySessionHistoryItem(std::nullptr_t) noexcept {}
        UserActivitySessionHistoryItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::UserActivities::IUserActivitySessionHistoryItem(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UserActivityVisualElements : Windows::ApplicationModel::UserActivities::IUserActivityVisualElements,
        impl::require<UserActivityVisualElements, Windows::ApplicationModel::UserActivities::IUserActivityVisualElements2>
    {
        UserActivityVisualElements(std::nullptr_t) noexcept {}
        UserActivityVisualElements(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::UserActivities::IUserActivityVisualElements(ptr, take_ownership_from_abi) {}
    };
}
#endif
