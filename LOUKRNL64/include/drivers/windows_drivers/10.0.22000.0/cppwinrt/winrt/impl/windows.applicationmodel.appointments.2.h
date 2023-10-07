// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Appointments_2_H
#define WINRT_Windows_ApplicationModel_Appointments_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.UI.Popups.1.h"
#include "winrt/impl/Windows.ApplicationModel.Appointments.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments
{
    struct __declspec(empty_bases) Appointment : Windows::ApplicationModel::Appointments::IAppointment,
        impl::require<Appointment, Windows::ApplicationModel::Appointments::IAppointment2, Windows::ApplicationModel::Appointments::IAppointment3>
    {
        Appointment(std::nullptr_t) noexcept {}
        Appointment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointment(ptr, take_ownership_from_abi) {}
        Appointment();
    };
    struct __declspec(empty_bases) AppointmentCalendar : Windows::ApplicationModel::Appointments::IAppointmentCalendar,
        impl::require<AppointmentCalendar, Windows::ApplicationModel::Appointments::IAppointmentCalendar2, Windows::ApplicationModel::Appointments::IAppointmentCalendar3>
    {
        AppointmentCalendar(std::nullptr_t) noexcept {}
        AppointmentCalendar(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentCalendar(ptr, take_ownership_from_abi) {}
        using Windows::ApplicationModel::Appointments::IAppointmentCalendar::DisplayColor;
        using impl::consume_t<AppointmentCalendar, Windows::ApplicationModel::Appointments::IAppointmentCalendar2>::DisplayColor;
        using Windows::ApplicationModel::Appointments::IAppointmentCalendar::IsHidden;
        using impl::consume_t<AppointmentCalendar, Windows::ApplicationModel::Appointments::IAppointmentCalendar2>::IsHidden;
    };
    struct __declspec(empty_bases) AppointmentCalendarSyncManager : Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager,
        impl::require<AppointmentCalendarSyncManager, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>
    {
        AppointmentCalendarSyncManager(std::nullptr_t) noexcept {}
        AppointmentCalendarSyncManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager(ptr, take_ownership_from_abi) {}
        using Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager::LastAttemptedSyncTime;
        using impl::consume_t<AppointmentCalendarSyncManager, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>::LastAttemptedSyncTime;
        using Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager::LastSuccessfulSyncTime;
        using impl::consume_t<AppointmentCalendarSyncManager, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>::LastSuccessfulSyncTime;
        using Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager::Status;
        using impl::consume_t<AppointmentCalendarSyncManager, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>::Status;
    };
    struct __declspec(empty_bases) AppointmentConflictResult : Windows::ApplicationModel::Appointments::IAppointmentConflictResult
    {
        AppointmentConflictResult(std::nullptr_t) noexcept {}
        AppointmentConflictResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentConflictResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppointmentException : Windows::ApplicationModel::Appointments::IAppointmentException
    {
        AppointmentException(std::nullptr_t) noexcept {}
        AppointmentException(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentException(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppointmentInvitee : Windows::ApplicationModel::Appointments::IAppointmentInvitee
    {
        AppointmentInvitee(std::nullptr_t) noexcept {}
        AppointmentInvitee(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentInvitee(ptr, take_ownership_from_abi) {}
        AppointmentInvitee();
    };
    struct AppointmentManager
    {
        AppointmentManager() = delete;
        static auto ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection);
        static auto ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement);
        static auto ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection);
        static auto ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement);
        static auto ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate);
        static auto ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection);
        static auto ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement);
        static auto ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate);
        static auto ShowTimeFrameAsync(Windows::Foundation::DateTime const& timeToShow, Windows::Foundation::TimeSpan const& duration);
        static auto ShowAppointmentDetailsAsync(param::hstring const& appointmentId);
        static auto ShowAppointmentDetailsAsync(param::hstring const& appointmentId, Windows::Foundation::DateTime const& instanceStartDate);
        static auto ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment);
        static auto RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const& options);
        static auto GetForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) AppointmentManagerForUser : Windows::ApplicationModel::Appointments::IAppointmentManagerForUser
    {
        AppointmentManagerForUser(std::nullptr_t) noexcept {}
        AppointmentManagerForUser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentManagerForUser(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppointmentOrganizer : Windows::ApplicationModel::Appointments::IAppointmentParticipant
    {
        AppointmentOrganizer(std::nullptr_t) noexcept {}
        AppointmentOrganizer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentParticipant(ptr, take_ownership_from_abi) {}
        AppointmentOrganizer();
    };
    struct AppointmentProperties
    {
        AppointmentProperties() = delete;
        [[nodiscard]] static auto Subject();
        [[nodiscard]] static auto Location();
        [[nodiscard]] static auto StartTime();
        [[nodiscard]] static auto Duration();
        [[nodiscard]] static auto Reminder();
        [[nodiscard]] static auto BusyStatus();
        [[nodiscard]] static auto Sensitivity();
        [[nodiscard]] static auto OriginalStartTime();
        [[nodiscard]] static auto IsResponseRequested();
        [[nodiscard]] static auto AllowNewTimeProposal();
        [[nodiscard]] static auto AllDay();
        [[nodiscard]] static auto Details();
        [[nodiscard]] static auto OnlineMeetingLink();
        [[nodiscard]] static auto ReplyTime();
        [[nodiscard]] static auto Organizer();
        [[nodiscard]] static auto UserResponse();
        [[nodiscard]] static auto HasInvitees();
        [[nodiscard]] static auto IsCanceledMeeting();
        [[nodiscard]] static auto IsOrganizedByUser();
        [[nodiscard]] static auto Recurrence();
        [[nodiscard]] static auto Uri();
        [[nodiscard]] static auto Invitees();
        [[nodiscard]] static auto DefaultProperties();
        [[nodiscard]] static auto ChangeNumber();
        [[nodiscard]] static auto RemoteChangeNumber();
        [[nodiscard]] static auto DetailsKind();
    };
    struct __declspec(empty_bases) AppointmentRecurrence : Windows::ApplicationModel::Appointments::IAppointmentRecurrence,
        impl::require<AppointmentRecurrence, Windows::ApplicationModel::Appointments::IAppointmentRecurrence2, Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>
    {
        AppointmentRecurrence(std::nullptr_t) noexcept {}
        AppointmentRecurrence(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentRecurrence(ptr, take_ownership_from_abi) {}
        AppointmentRecurrence();
    };
    struct __declspec(empty_bases) AppointmentStore : Windows::ApplicationModel::Appointments::IAppointmentStore,
        impl::require<AppointmentStore, Windows::ApplicationModel::Appointments::IAppointmentStore2, Windows::ApplicationModel::Appointments::IAppointmentStore3>
    {
        AppointmentStore(std::nullptr_t) noexcept {}
        AppointmentStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentStore(ptr, take_ownership_from_abi) {}
        using Windows::ApplicationModel::Appointments::IAppointmentStore::CreateAppointmentCalendarAsync;
        using impl::consume_t<AppointmentStore, Windows::ApplicationModel::Appointments::IAppointmentStore2>::CreateAppointmentCalendarAsync;
    };
    struct __declspec(empty_bases) AppointmentStoreChange : Windows::ApplicationModel::Appointments::IAppointmentStoreChange,
        impl::require<AppointmentStoreChange, Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>
    {
        AppointmentStoreChange(std::nullptr_t) noexcept {}
        AppointmentStoreChange(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentStoreChange(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppointmentStoreChangeReader : Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader
    {
        AppointmentStoreChangeReader(std::nullptr_t) noexcept {}
        AppointmentStoreChangeReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppointmentStoreChangeTracker : Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker,
        impl::require<AppointmentStoreChangeTracker, Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2>
    {
        AppointmentStoreChangeTracker(std::nullptr_t) noexcept {}
        AppointmentStoreChangeTracker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppointmentStoreChangedDeferral : Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral
    {
        AppointmentStoreChangedDeferral(std::nullptr_t) noexcept {}
        AppointmentStoreChangedDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppointmentStoreChangedEventArgs : Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs
    {
        AppointmentStoreChangedEventArgs(std::nullptr_t) noexcept {}
        AppointmentStoreChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppointmentStoreNotificationTriggerDetails : Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails
    {
        AppointmentStoreNotificationTriggerDetails(std::nullptr_t) noexcept {}
        AppointmentStoreNotificationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FindAppointmentsOptions : Windows::ApplicationModel::Appointments::IFindAppointmentsOptions
    {
        FindAppointmentsOptions(std::nullptr_t) noexcept {}
        FindAppointmentsOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IFindAppointmentsOptions(ptr, take_ownership_from_abi) {}
        FindAppointmentsOptions();
    };
}
#endif
