// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_UserActivities_Core_0_H
#define WINRT_Windows_ApplicationModel_UserActivities_Core_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities
{
    struct UserActivity;
    struct UserActivityChannel;
    struct UserActivitySession;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities::Core
{
    struct ICoreUserActivityManagerStatics;
    struct CoreUserActivityManager;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::Core::CoreUserActivityManager>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::Core::CoreUserActivityManager> = L"Windows.ApplicationModel.UserActivities.Core.CoreUserActivityManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics> = L"Windows.ApplicationModel.UserActivities.Core.ICoreUserActivityManagerStatics";
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics>{ 0xCA3ADB02,0xA4BE,0x4D4D,{ 0xBF,0xA8,0x67,0x95,0xF4,0x26,0x4E,0xFB } }; // CA3ADB02-A4BE-4D4D-BFA8-6795F4264EFB
    template <> struct abi<Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateUserActivitySessionInBackground(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteUserActivitySessionsInTimeRangeAsync(void*, int64_t, int64_t, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_Core_ICoreUserActivityManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::UserActivities::UserActivitySession) CreateUserActivitySessionInBackground(Windows::ApplicationModel::UserActivities::UserActivity const& activity) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) DeleteUserActivitySessionsInTimeRangeAsync(Windows::ApplicationModel::UserActivities::UserActivityChannel const& channel, Windows::Foundation::DateTime const& startTime, Windows::Foundation::DateTime const& endTime) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_Core_ICoreUserActivityManagerStatics<D>;
    };
}
#endif
