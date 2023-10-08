// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Appointments_0_H
#define WINRT_Windows_ApplicationModel_Appointments_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename T> struct IReference;
    struct Rect;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::UI
{
    struct Color;
}
namespace winrt::Windows::UI::Popups
{
    enum class Placement : int32_t;
}
namespace winrt::Windows::ApplicationModel::Appointments
{
    enum class AppointmentBusyStatus : int32_t
    {
        Busy = 0,
        Tentative = 1,
        Free = 2,
        OutOfOffice = 3,
        WorkingElsewhere = 4,
    };
    enum class AppointmentCalendarOtherAppReadAccess : int32_t
    {
        SystemOnly = 0,
        Limited = 1,
        Full = 2,
        None = 3,
    };
    enum class AppointmentCalendarOtherAppWriteAccess : int32_t
    {
        None = 0,
        SystemOnly = 1,
        Limited = 2,
    };
    enum class AppointmentCalendarSyncStatus : int32_t
    {
        Idle = 0,
        Syncing = 1,
        UpToDate = 2,
        AuthenticationError = 3,
        PolicyError = 4,
        UnknownError = 5,
        ManualAccountRemovalRequired = 6,
    };
    enum class AppointmentConflictType : int32_t
    {
        None = 0,
        Adjacent = 1,
        Overlap = 2,
    };
    enum class AppointmentDaysOfWeek : uint32_t
    {
        None = 0,
        Sunday = 0x1,
        Monday = 0x2,
        Tuesday = 0x4,
        Wednesday = 0x8,
        Thursday = 0x10,
        Friday = 0x20,
        Saturday = 0x40,
    };
    enum class AppointmentDetailsKind : int32_t
    {
        PlainText = 0,
        Html = 1,
    };
    enum class AppointmentParticipantResponse : int32_t
    {
        None = 0,
        Tentative = 1,
        Accepted = 2,
        Declined = 3,
        Unknown = 4,
    };
    enum class AppointmentParticipantRole : int32_t
    {
        RequiredAttendee = 0,
        OptionalAttendee = 1,
        Resource = 2,
    };
    enum class AppointmentRecurrenceUnit : int32_t
    {
        Daily = 0,
        Weekly = 1,
        Monthly = 2,
        MonthlyOnDay = 3,
        Yearly = 4,
        YearlyOnDay = 5,
    };
    enum class AppointmentSensitivity : int32_t
    {
        Public = 0,
        Private = 1,
    };
    enum class AppointmentStoreAccessType : int32_t
    {
        AppCalendarsReadWrite = 0,
        AllCalendarsReadOnly = 1,
        AllCalendarsReadWrite = 2,
    };
    enum class AppointmentStoreChangeType : int32_t
    {
        AppointmentCreated = 0,
        AppointmentModified = 1,
        AppointmentDeleted = 2,
        ChangeTrackingLost = 3,
        CalendarCreated = 4,
        CalendarModified = 5,
        CalendarDeleted = 6,
    };
    enum class AppointmentSummaryCardView : int32_t
    {
        System = 0,
        App = 1,
    };
    enum class AppointmentWeekOfMonth : int32_t
    {
        First = 0,
        Second = 1,
        Third = 2,
        Fourth = 3,
        Last = 4,
    };
    enum class FindAppointmentCalendarsOptions : uint32_t
    {
        None = 0,
        IncludeHidden = 0x1,
    };
    enum class RecurrenceType : int32_t
    {
        Master = 0,
        Instance = 1,
        ExceptionInstance = 2,
    };
    struct IAppointment;
    struct IAppointment2;
    struct IAppointment3;
    struct IAppointmentCalendar;
    struct IAppointmentCalendar2;
    struct IAppointmentCalendar3;
    struct IAppointmentCalendarSyncManager;
    struct IAppointmentCalendarSyncManager2;
    struct IAppointmentConflictResult;
    struct IAppointmentException;
    struct IAppointmentInvitee;
    struct IAppointmentManagerForUser;
    struct IAppointmentManagerStatics;
    struct IAppointmentManagerStatics2;
    struct IAppointmentManagerStatics3;
    struct IAppointmentParticipant;
    struct IAppointmentPropertiesStatics;
    struct IAppointmentPropertiesStatics2;
    struct IAppointmentRecurrence;
    struct IAppointmentRecurrence2;
    struct IAppointmentRecurrence3;
    struct IAppointmentStore;
    struct IAppointmentStore2;
    struct IAppointmentStore3;
    struct IAppointmentStoreChange;
    struct IAppointmentStoreChange2;
    struct IAppointmentStoreChangeReader;
    struct IAppointmentStoreChangeTracker;
    struct IAppointmentStoreChangeTracker2;
    struct IAppointmentStoreChangedDeferral;
    struct IAppointmentStoreChangedEventArgs;
    struct IAppointmentStoreNotificationTriggerDetails;
    struct IFindAppointmentsOptions;
    struct Appointment;
    struct AppointmentCalendar;
    struct AppointmentCalendarSyncManager;
    struct AppointmentConflictResult;
    struct AppointmentException;
    struct AppointmentInvitee;
    struct AppointmentManager;
    struct AppointmentManagerForUser;
    struct AppointmentOrganizer;
    struct AppointmentProperties;
    struct AppointmentRecurrence;
    struct AppointmentStore;
    struct AppointmentStoreChange;
    struct AppointmentStoreChangeReader;
    struct AppointmentStoreChangeTracker;
    struct AppointmentStoreChangedDeferral;
    struct AppointmentStoreChangedEventArgs;
    struct AppointmentStoreNotificationTriggerDetails;
    struct FindAppointmentsOptions;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointment>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointment2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointment3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentCalendar>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentCalendar2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentCalendar3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentConflictResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentException>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentInvitee>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentManagerForUser>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentParticipant>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentRecurrence>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStore>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStore2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStore3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStoreChange>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::IFindAppointmentsOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::Appointment>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentCalendar>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentConflictResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentException>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentInvitee>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentManagerForUser>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentOrganizer>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentProperties>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentRecurrence>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentStore>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentStoreChange>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentStoreNotificationTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::FindAppointmentsOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentBusyStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentConflictType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentDetailsKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentParticipantRole>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentSensitivity>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentStoreAccessType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentStoreChangeType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentSummaryCardView>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Appointments::RecurrenceType>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointment>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointment" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointment2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointment2" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointment3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointment3" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentCalendar>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentCalendar" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentCalendar2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentCalendar2" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentCalendar3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentCalendar3" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager2" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentConflictResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentConflictResult" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentException>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentException" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentInvitee>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentInvitee" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentManagerForUser>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentManagerForUser" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentManagerStatics2" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentManagerStatics3" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentParticipant>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentParticipant" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics2" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentRecurrence>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentRecurrence" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentRecurrence2" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentRecurrence3" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStore>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStore" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStore2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStore2" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStore3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStore3" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStoreChange>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStoreChange" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStoreChange2" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangeReader" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker2" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangedDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStoreNotificationTriggerDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::IFindAppointmentsOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IFindAppointmentsOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::Appointment>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.Appointment" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentCalendar>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentCalendar" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentCalendarSyncManager" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentConflictResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentConflictResult" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentException>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentException" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentInvitee>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentInvitee" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentManager" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentManagerForUser>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentManagerForUser" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentOrganizer>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentOrganizer" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentProperties>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentProperties" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentRecurrence>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentRecurrence" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentStore>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentStore" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentStoreChange>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentStoreChange" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentStoreChangeReader" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentStoreChangeTracker" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentStoreChangedDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentStoreChangedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentStoreNotificationTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentStoreNotificationTriggerDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::FindAppointmentsOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.FindAppointmentsOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentBusyStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentBusyStatus" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentCalendarOtherAppReadAccess" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentCalendarOtherAppWriteAccess" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentCalendarSyncStatus" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentConflictType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentConflictType" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentDaysOfWeek" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentDetailsKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentDetailsKind" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentParticipantResponse" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentParticipantRole>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentParticipantRole" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentRecurrenceUnit" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentSensitivity>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentSensitivity" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentStoreAccessType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentStoreAccessType" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentStoreChangeType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentStoreChangeType" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentSummaryCardView>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentSummaryCardView" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentWeekOfMonth" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.FindAppointmentCalendarsOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Appointments::RecurrenceType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.RecurrenceType" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointment>
    {
        static constexpr guid value{ 0xDD002F2F,0x2BDD,0x4076,{ 0x90,0xA3,0x22,0xC2,0x75,0x31,0x29,0x65 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointment2>
    {
        static constexpr guid value{ 0x5E85983C,0x540F,0x3452,{ 0x9B,0x5C,0x0D,0xD7,0xAD,0x4C,0x65,0xA2 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointment3>
    {
        static constexpr guid value{ 0xBFCC45A9,0x8961,0x4991,{ 0x93,0x4B,0xC4,0x87,0x68,0xE5,0xA9,0x6C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentCalendar>
    {
        static constexpr guid value{ 0x5273819D,0x8339,0x3D4F,{ 0xA0,0x2F,0x64,0x08,0x44,0x52,0xBB,0x5D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentCalendar2>
    {
        static constexpr guid value{ 0x18E7E422,0x2467,0x4E1C,{ 0xA4,0x59,0xD8,0xA2,0x93,0x03,0xD0,0x92 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentCalendar3>
    {
        static constexpr guid value{ 0xEB23D22B,0xA685,0x42AE,{ 0x84,0x95,0xB3,0x11,0x9A,0xDB,0x41,0x67 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>
    {
        static constexpr guid value{ 0x2B21B3A0,0x4AFF,0x4392,{ 0xBC,0x5F,0x56,0x45,0xFF,0xCF,0xFB,0x17 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>
    {
        static constexpr guid value{ 0x647528AD,0x0D29,0x4C7C,{ 0xAA,0xA7,0xBF,0x99,0x68,0x05,0x53,0x7C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentConflictResult>
    {
        static constexpr guid value{ 0xD5CDF0BE,0x2F2F,0x3B7D,{ 0xAF,0x0A,0xA7,0xE2,0x0F,0x3A,0x46,0xE3 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentException>
    {
        static constexpr guid value{ 0xA2076767,0x16F6,0x4BCE,{ 0x9F,0x5A,0x86,0x00,0xB8,0x01,0x9F,0xCB } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentInvitee>
    {
        static constexpr guid value{ 0x13BF0796,0x9842,0x495B,{ 0xB0,0xE7,0xEF,0x8F,0x79,0xC0,0x70,0x1D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentManagerForUser>
    {
        static constexpr guid value{ 0x70261423,0x73CC,0x4660,{ 0xB3,0x18,0xB0,0x13,0x65,0x30,0x2A,0x03 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>
    {
        static constexpr guid value{ 0x3A30FA01,0x5C40,0x499D,{ 0xB3,0x3F,0xA4,0x30,0x50,0xF7,0x4F,0xC4 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>
    {
        static constexpr guid value{ 0x0A81F60D,0xD04F,0x4034,{ 0xAF,0x72,0xA3,0x65,0x73,0xB4,0x5F,0xF0 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3>
    {
        static constexpr guid value{ 0x2F9AE09C,0xB34C,0x4DC7,{ 0xA3,0x5D,0xCA,0xFD,0x88,0xAE,0x3E,0xC6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentParticipant>
    {
        static constexpr guid value{ 0x615E2902,0x9718,0x467B,{ 0x83,0xFB,0xB2,0x93,0xA1,0x91,0x21,0xDE } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>
    {
        static constexpr guid value{ 0x25141FE9,0x68AE,0x3AAE,{ 0x85,0x5F,0xBC,0x44,0x41,0xCA,0xA2,0x34 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>
    {
        static constexpr guid value{ 0xDFFC434B,0xB017,0x45DD,{ 0x8A,0xF5,0xD1,0x63,0xD1,0x08,0x01,0xBB } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentRecurrence>
    {
        static constexpr guid value{ 0xD87B3E83,0x15A6,0x487B,{ 0xB9,0x59,0x0C,0x36,0x1E,0x60,0xE9,0x54 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>
    {
        static constexpr guid value{ 0x3DF3A2E0,0x05A7,0x4F50,{ 0x9F,0x86,0xB0,0x3F,0x94,0x36,0x25,0x4D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>
    {
        static constexpr guid value{ 0x89FF96D9,0xDA4D,0x4A17,{ 0x8D,0xD2,0x1C,0xEB,0xC2,0xB5,0xFF,0x9D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentStore>
    {
        static constexpr guid value{ 0xA461918C,0x7A47,0x4D96,{ 0x96,0xC9,0x15,0xCD,0x8A,0x05,0xA7,0x35 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentStore2>
    {
        static constexpr guid value{ 0x25C48C20,0x1C41,0x424F,{ 0x80,0x84,0x67,0xC1,0xCF,0xE0,0xA8,0x54 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentStore3>
    {
        static constexpr guid value{ 0x4251940B,0xB078,0x470A,{ 0x9A,0x40,0xC2,0xE0,0x17,0x61,0xF7,0x2F } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentStoreChange>
    {
        static constexpr guid value{ 0xA5A6E035,0x0A33,0x3654,{ 0x84,0x63,0xB5,0x43,0xE9,0x0C,0x3B,0x79 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>
    {
        static constexpr guid value{ 0xB37D0DCE,0x5211,0x4402,{ 0xA6,0x08,0xA9,0x6F,0xE7,0x0B,0x8E,0xE2 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader>
    {
        static constexpr guid value{ 0x8B2409F1,0x65F3,0x42A0,{ 0x96,0x1D,0x4C,0x20,0x9B,0xF3,0x03,0x70 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker>
    {
        static constexpr guid value{ 0x1B25F4B1,0x8ECE,0x4F17,{ 0x93,0xC8,0xE6,0x41,0x24,0x58,0xFD,0x5C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2>
    {
        static constexpr guid value{ 0xB66AAF45,0x9542,0x4CF7,{ 0x85,0x50,0xEB,0x37,0x0E,0x0C,0x08,0xD3 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral>
    {
        static constexpr guid value{ 0x4CB82026,0xFEDB,0x4BC3,{ 0x96,0x62,0x95,0xA9,0xBE,0xFD,0xF4,0xDF } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs>
    {
        static constexpr guid value{ 0x2285F8B9,0x0791,0x417E,{ 0xBF,0xEA,0xCC,0x6D,0x41,0x63,0x6C,0x8C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails>
    {
        static constexpr guid value{ 0x9B33CB11,0xC301,0x421E,{ 0xAF,0xEF,0x04,0x7E,0xCF,0xA7,0x6A,0xDB } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Appointments::IFindAppointmentsOptions>
    {
        static constexpr guid value{ 0x55F7DC55,0x9942,0x3086,{ 0x82,0xB5,0x2C,0xB2,0x9F,0x64,0xD5,0xF5 } };
    };
    template <> struct default_interface<Windows::ApplicationModel::Appointments::Appointment>
    {
        using type = Windows::ApplicationModel::Appointments::IAppointment;
    };
    template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentCalendar>
    {
        using type = Windows::ApplicationModel::Appointments::IAppointmentCalendar;
    };
    template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager>
    {
        using type = Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager;
    };
    template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentConflictResult>
    {
        using type = Windows::ApplicationModel::Appointments::IAppointmentConflictResult;
    };
    template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentException>
    {
        using type = Windows::ApplicationModel::Appointments::IAppointmentException;
    };
    template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentInvitee>
    {
        using type = Windows::ApplicationModel::Appointments::IAppointmentInvitee;
    };
    template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentManagerForUser>
    {
        using type = Windows::ApplicationModel::Appointments::IAppointmentManagerForUser;
    };
    template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentOrganizer>
    {
        using type = Windows::ApplicationModel::Appointments::IAppointmentParticipant;
    };
    template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentRecurrence>
    {
        using type = Windows::ApplicationModel::Appointments::IAppointmentRecurrence;
    };
    template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentStore>
    {
        using type = Windows::ApplicationModel::Appointments::IAppointmentStore;
    };
    template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentStoreChange>
    {
        using type = Windows::ApplicationModel::Appointments::IAppointmentStoreChange;
    };
    template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader>
    {
        using type = Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader;
    };
    template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker>
    {
        using type = Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker;
    };
    template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral>
    {
        using type = Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral;
    };
    template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs>
    {
        using type = Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentStoreNotificationTriggerDetails>
    {
        using type = Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails;
    };
    template <> struct default_interface<Windows::ApplicationModel::Appointments::FindAppointmentsOptions>
    {
        using type = Windows::ApplicationModel::Appointments::IFindAppointmentsOptions;
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_StartTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Duration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall put_Location(void*) noexcept = 0;
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall put_Subject(void*) noexcept = 0;
            virtual int32_t __stdcall get_Details(void**) noexcept = 0;
            virtual int32_t __stdcall put_Details(void*) noexcept = 0;
            virtual int32_t __stdcall get_Reminder(void**) noexcept = 0;
            virtual int32_t __stdcall put_Reminder(void*) noexcept = 0;
            virtual int32_t __stdcall get_Organizer(void**) noexcept = 0;
            virtual int32_t __stdcall put_Organizer(void*) noexcept = 0;
            virtual int32_t __stdcall get_Invitees(void**) noexcept = 0;
            virtual int32_t __stdcall get_Recurrence(void**) noexcept = 0;
            virtual int32_t __stdcall put_Recurrence(void*) noexcept = 0;
            virtual int32_t __stdcall get_BusyStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BusyStatus(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AllDay(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllDay(bool) noexcept = 0;
            virtual int32_t __stdcall get_Sensitivity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Sensitivity(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall put_Uri(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointment2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalId(void**) noexcept = 0;
            virtual int32_t __stdcall get_CalendarId(void**) noexcept = 0;
            virtual int32_t __stdcall get_RoamingId(void**) noexcept = 0;
            virtual int32_t __stdcall put_RoamingId(void*) noexcept = 0;
            virtual int32_t __stdcall get_OriginalStartTime(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsResponseRequested(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsResponseRequested(bool) noexcept = 0;
            virtual int32_t __stdcall get_AllowNewTimeProposal(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowNewTimeProposal(bool) noexcept = 0;
            virtual int32_t __stdcall get_OnlineMeetingLink(void**) noexcept = 0;
            virtual int32_t __stdcall put_OnlineMeetingLink(void*) noexcept = 0;
            virtual int32_t __stdcall get_ReplyTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_ReplyTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_UserResponse(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_UserResponse(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_HasInvitees(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsCanceledMeeting(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCanceledMeeting(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsOrganizedByUser(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsOrganizedByUser(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointment3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeNumber(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_RemoteChangeNumber(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall put_RemoteChangeNumber(uint64_t) noexcept = 0;
            virtual int32_t __stdcall get_DetailsKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DetailsKind(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentCalendar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_LocalId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsHidden(bool*) noexcept = 0;
            virtual int32_t __stdcall get_OtherAppReadAccess(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OtherAppReadAccess(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_OtherAppWriteAccess(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OtherAppWriteAccess(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SourceDisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SummaryCardView(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SummaryCardView(int32_t) noexcept = 0;
            virtual int32_t __stdcall FindAppointmentsAsync(int64_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindAppointmentsAsyncWithOptions(int64_t, int64_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindExceptionsFromMasterAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAllInstancesAsync(void*, int64_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindAllInstancesAsyncWithOptions(void*, int64_t, int64_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAppointmentAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAppointmentInstanceAsync(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindUnexpandedAppointmentsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindUnexpandedAppointmentsAsyncWithOptions(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAppointmentAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAppointmentInstanceAsync(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall SaveAppointmentAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentCalendar2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SyncManager(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemoteId(void**) noexcept = 0;
            virtual int32_t __stdcall put_RemoteId(void*) noexcept = 0;
            virtual int32_t __stdcall put_DisplayColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall put_IsHidden(bool) noexcept = 0;
            virtual int32_t __stdcall get_UserDataAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanCreateOrUpdateAppointments(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanCreateOrUpdateAppointments(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanCancelMeetings(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanCancelMeetings(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanForwardMeetings(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanForwardMeetings(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanProposeNewTimeForMeetings(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanProposeNewTimeForMeetings(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanUpdateMeetingResponses(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanUpdateMeetingResponses(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanNotifyInvitees(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanNotifyInvitees(bool) noexcept = 0;
            virtual int32_t __stdcall get_MustNofityInvitees(bool*) noexcept = 0;
            virtual int32_t __stdcall put_MustNofityInvitees(bool) noexcept = 0;
            virtual int32_t __stdcall TryCreateOrUpdateAppointmentAsync(void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall TryCancelMeetingAsync(void*, void*, void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall TryForwardMeetingAsync(void*, void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryProposeNewTimeForMeetingAsync(void*, int64_t, int64_t, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryUpdateMeetingResponseAsync(void*, int32_t, void*, void*, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentCalendar3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RegisterSyncManagerAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastSuccessfulSyncTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastAttemptedSyncTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall SyncAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_SyncStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SyncStatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Status(int32_t) noexcept = 0;
            virtual int32_t __stdcall put_LastSuccessfulSyncTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall put_LastAttemptedSyncTime(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentConflictResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Date(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentException>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Appointment(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExceptionProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsDeleted(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentInvitee>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Role(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Role(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Response(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Response(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentManagerForUser>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowAddAppointmentAsync(void*, Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAddAppointmentWithPlacementAsync(void*, Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowReplaceAppointmentAsync(void*, void*, Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall ShowReplaceAppointmentWithPlacementAsync(void*, void*, Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowReplaceAppointmentWithPlacementAndDateAsync(void*, void*, Windows::Foundation::Rect, int32_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowRemoveAppointmentAsync(void*, Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall ShowRemoveAppointmentWithPlacementAsync(void*, Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowRemoveAppointmentWithPlacementAndDateAsync(void*, Windows::Foundation::Rect, int32_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowTimeFrameAsync(int64_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAppointmentDetailsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAppointmentDetailsWithDateAsync(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowEditNewAppointmentAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestStoreAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowAddAppointmentAsync(void*, Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAddAppointmentWithPlacementAsync(void*, Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowReplaceAppointmentAsync(void*, void*, Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall ShowReplaceAppointmentWithPlacementAsync(void*, void*, Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowReplaceAppointmentWithPlacementAndDateAsync(void*, void*, Windows::Foundation::Rect, int32_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowRemoveAppointmentAsync(void*, Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall ShowRemoveAppointmentWithPlacementAsync(void*, Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowRemoveAppointmentWithPlacementAndDateAsync(void*, Windows::Foundation::Rect, int32_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowTimeFrameAsync(int64_t, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowAppointmentDetailsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAppointmentDetailsWithDateAsync(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowEditNewAppointmentAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestStoreAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentParticipant>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Address(void**) noexcept = 0;
            virtual int32_t __stdcall put_Address(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_StartTime(void**) noexcept = 0;
            virtual int32_t __stdcall get_Duration(void**) noexcept = 0;
            virtual int32_t __stdcall get_Reminder(void**) noexcept = 0;
            virtual int32_t __stdcall get_BusyStatus(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sensitivity(void**) noexcept = 0;
            virtual int32_t __stdcall get_OriginalStartTime(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsResponseRequested(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowNewTimeProposal(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllDay(void**) noexcept = 0;
            virtual int32_t __stdcall get_Details(void**) noexcept = 0;
            virtual int32_t __stdcall get_OnlineMeetingLink(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReplyTime(void**) noexcept = 0;
            virtual int32_t __stdcall get_Organizer(void**) noexcept = 0;
            virtual int32_t __stdcall get_UserResponse(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasInvitees(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsCanceledMeeting(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsOrganizedByUser(void**) noexcept = 0;
            virtual int32_t __stdcall get_Recurrence(void**) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall get_Invitees(void**) noexcept = 0;
            virtual int32_t __stdcall get_DefaultProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemoteChangeNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_DetailsKind(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentRecurrence>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Unit(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Unit(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Occurrences(void**) noexcept = 0;
            virtual int32_t __stdcall put_Occurrences(void*) noexcept = 0;
            virtual int32_t __stdcall get_Until(void**) noexcept = 0;
            virtual int32_t __stdcall put_Until(void*) noexcept = 0;
            virtual int32_t __stdcall get_Interval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Interval(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_DaysOfWeek(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DaysOfWeek(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_WeekOfMonth(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_WeekOfMonth(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Month(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Month(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Day(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Day(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RecurrenceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TimeZone(void**) noexcept = 0;
            virtual int32_t __stdcall put_TimeZone(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CalendarIdentifier(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeTracker(void**) noexcept = 0;
            virtual int32_t __stdcall CreateAppointmentCalendarAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAppointmentCalendarAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAppointmentAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAppointmentInstanceAsync(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindAppointmentCalendarsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindAppointmentCalendarsAsyncWithOptions(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindAppointmentsAsync(int64_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindAppointmentsAsyncWithOptions(int64_t, int64_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindConflictAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindConflictAsyncWithInstanceStart(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall MoveAppointmentAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAddAppointmentAsync(void*, Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall ShowReplaceAppointmentAsync(void*, void*, Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall ShowReplaceAppointmentWithPlacementAndDateAsync(void*, void*, Windows::Foundation::Rect, int32_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowRemoveAppointmentAsync(void*, Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall ShowRemoveAppointmentWithPlacementAndDateAsync(void*, Windows::Foundation::Rect, int32_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAppointmentDetailsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAppointmentDetailsWithDateAsync(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowEditNewAppointmentAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindLocalIdsFromRoamingIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStore2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_StoreChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StoreChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CreateAppointmentCalendarInAccountAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStore3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetChangeTracker(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStoreChange>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Appointment(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChangeType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppointmentCalendar(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReadBatchAsync(void**) noexcept = 0;
            virtual int32_t __stdcall AcceptChanges() noexcept = 0;
            virtual int32_t __stdcall AcceptChangesThrough(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetChangeReader(void**) noexcept = 0;
            virtual int32_t __stdcall Enable() noexcept = 0;
            virtual int32_t __stdcall Reset() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsTracking(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Appointments::IFindAppointmentsOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CalendarIds(void**) noexcept = 0;
            virtual int32_t __stdcall get_FetchProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_IncludeHidden(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IncludeHidden(bool) noexcept = 0;
            virtual int32_t __stdcall get_MaxCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxCount(uint32_t) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointment
    {
        [[nodiscard]] auto StartTime() const;
        auto StartTime(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] auto Duration() const;
        auto Duration(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto Location() const;
        auto Location(param::hstring const& value) const;
        [[nodiscard]] auto Subject() const;
        auto Subject(param::hstring const& value) const;
        [[nodiscard]] auto Details() const;
        auto Details(param::hstring const& value) const;
        [[nodiscard]] auto Reminder() const;
        auto Reminder(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] auto Organizer() const;
        auto Organizer(Windows::ApplicationModel::Appointments::AppointmentOrganizer const& value) const;
        [[nodiscard]] auto Invitees() const;
        [[nodiscard]] auto Recurrence() const;
        auto Recurrence(Windows::ApplicationModel::Appointments::AppointmentRecurrence const& value) const;
        [[nodiscard]] auto BusyStatus() const;
        auto BusyStatus(Windows::ApplicationModel::Appointments::AppointmentBusyStatus const& value) const;
        [[nodiscard]] auto AllDay() const;
        auto AllDay(bool value) const;
        [[nodiscard]] auto Sensitivity() const;
        auto Sensitivity(Windows::ApplicationModel::Appointments::AppointmentSensitivity const& value) const;
        [[nodiscard]] auto Uri() const;
        auto Uri(Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointment>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointment<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointment2
    {
        [[nodiscard]] auto LocalId() const;
        [[nodiscard]] auto CalendarId() const;
        [[nodiscard]] auto RoamingId() const;
        auto RoamingId(param::hstring const& value) const;
        [[nodiscard]] auto OriginalStartTime() const;
        [[nodiscard]] auto IsResponseRequested() const;
        auto IsResponseRequested(bool value) const;
        [[nodiscard]] auto AllowNewTimeProposal() const;
        auto AllowNewTimeProposal(bool value) const;
        [[nodiscard]] auto OnlineMeetingLink() const;
        auto OnlineMeetingLink(param::hstring const& value) const;
        [[nodiscard]] auto ReplyTime() const;
        auto ReplyTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] auto UserResponse() const;
        auto UserResponse(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const& value) const;
        [[nodiscard]] auto HasInvitees() const;
        [[nodiscard]] auto IsCanceledMeeting() const;
        auto IsCanceledMeeting(bool value) const;
        [[nodiscard]] auto IsOrganizedByUser() const;
        auto IsOrganizedByUser(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointment2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointment2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointment3
    {
        [[nodiscard]] auto ChangeNumber() const;
        [[nodiscard]] auto RemoteChangeNumber() const;
        auto RemoteChangeNumber(uint64_t value) const;
        [[nodiscard]] auto DetailsKind() const;
        auto DetailsKind(Windows::ApplicationModel::Appointments::AppointmentDetailsKind const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointment3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointment3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar
    {
        [[nodiscard]] auto DisplayColor() const;
        [[nodiscard]] auto DisplayName() const;
        auto DisplayName(param::hstring const& value) const;
        [[nodiscard]] auto LocalId() const;
        [[nodiscard]] auto IsHidden() const;
        [[nodiscard]] auto OtherAppReadAccess() const;
        auto OtherAppReadAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess const& value) const;
        [[nodiscard]] auto OtherAppWriteAccess() const;
        auto OtherAppWriteAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess const& value) const;
        [[nodiscard]] auto SourceDisplayName() const;
        [[nodiscard]] auto SummaryCardView() const;
        auto SummaryCardView(Windows::ApplicationModel::Appointments::AppointmentSummaryCardView const& value) const;
        auto FindAppointmentsAsync(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength) const;
        auto FindAppointmentsAsync(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength, Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& options) const;
        auto FindExceptionsFromMasterAsync(param::hstring const& masterLocalId) const;
        auto FindAllInstancesAsync(param::hstring const& masterLocalId, Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength) const;
        auto FindAllInstancesAsync(param::hstring const& masterLocalId, Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength, Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& pOptions) const;
        auto GetAppointmentAsync(param::hstring const& localId) const;
        auto GetAppointmentInstanceAsync(param::hstring const& localId, Windows::Foundation::DateTime const& instanceStartTime) const;
        auto FindUnexpandedAppointmentsAsync() const;
        auto FindUnexpandedAppointmentsAsync(Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& options) const;
        auto DeleteAsync() const;
        auto SaveAsync() const;
        auto DeleteAppointmentAsync(param::hstring const& localId) const;
        auto DeleteAppointmentInstanceAsync(param::hstring const& localId, Windows::Foundation::DateTime const& instanceStartTime) const;
        auto SaveAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& pAppointment) const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentCalendar>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2
    {
        [[nodiscard]] auto SyncManager() const;
        [[nodiscard]] auto RemoteId() const;
        auto RemoteId(param::hstring const& value) const;
        auto DisplayColor(Windows::UI::Color const& value) const;
        auto IsHidden(bool value) const;
        [[nodiscard]] auto UserDataAccountId() const;
        [[nodiscard]] auto CanCreateOrUpdateAppointments() const;
        auto CanCreateOrUpdateAppointments(bool value) const;
        [[nodiscard]] auto CanCancelMeetings() const;
        auto CanCancelMeetings(bool value) const;
        [[nodiscard]] auto CanForwardMeetings() const;
        auto CanForwardMeetings(bool value) const;
        [[nodiscard]] auto CanProposeNewTimeForMeetings() const;
        auto CanProposeNewTimeForMeetings(bool value) const;
        [[nodiscard]] auto CanUpdateMeetingResponses() const;
        auto CanUpdateMeetingResponses(bool value) const;
        [[nodiscard]] auto CanNotifyInvitees() const;
        auto CanNotifyInvitees(bool value) const;
        [[nodiscard]] auto MustNofityInvitees() const;
        auto MustNofityInvitees(bool value) const;
        auto TryCreateOrUpdateAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, bool notifyInvitees) const;
        auto TryCancelMeetingAsync(Windows::ApplicationModel::Appointments::Appointment const& meeting, param::hstring const& subject, param::hstring const& comment, bool notifyInvitees) const;
        auto TryForwardMeetingAsync(Windows::ApplicationModel::Appointments::Appointment const& meeting, param::async_iterable<Windows::ApplicationModel::Appointments::AppointmentInvitee> const& invitees, param::hstring const& subject, param::hstring const& forwardHeader, param::hstring const& comment) const;
        auto TryProposeNewTimeForMeetingAsync(Windows::ApplicationModel::Appointments::Appointment const& meeting, Windows::Foundation::DateTime const& newStartTime, Windows::Foundation::TimeSpan const& newDuration, param::hstring const& subject, param::hstring const& comment) const;
        auto TryUpdateMeetingResponseAsync(Windows::ApplicationModel::Appointments::Appointment const& meeting, Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const& response, param::hstring const& subject, param::hstring const& comment, bool sendUpdate) const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentCalendar2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar3
    {
        auto RegisterSyncManagerAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentCalendar3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto LastSuccessfulSyncTime() const;
        [[nodiscard]] auto LastAttemptedSyncTime() const;
        auto SyncAsync() const;
        auto SyncStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::Foundation::IInspectable> const& handler) const;
        using SyncStatusChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager, &impl::abi_t<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>::remove_SyncStatusChanged>;
        SyncStatusChanged_revoker SyncStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::Foundation::IInspectable> const& handler) const;
        auto SyncStatusChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager2
    {
        auto Status(Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus const& value) const;
        auto LastSuccessfulSyncTime(Windows::Foundation::DateTime const& value) const;
        auto LastAttemptedSyncTime(Windows::Foundation::DateTime const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentConflictResult
    {
        [[nodiscard]] auto Type() const;
        [[nodiscard]] auto Date() const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentConflictResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentConflictResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentException
    {
        [[nodiscard]] auto Appointment() const;
        [[nodiscard]] auto ExceptionProperties() const;
        [[nodiscard]] auto IsDeleted() const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentException>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentException<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentInvitee
    {
        [[nodiscard]] auto Role() const;
        auto Role(Windows::ApplicationModel::Appointments::AppointmentParticipantRole const& value) const;
        [[nodiscard]] auto Response() const;
        auto Response(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentInvitee>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentInvitee<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser
    {
        auto ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const;
        auto ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
        auto ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const;
        auto ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
        auto ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const;
        auto ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection) const;
        auto ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
        auto ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const;
        auto ShowTimeFrameAsync(Windows::Foundation::DateTime const& timeToShow, Windows::Foundation::TimeSpan const& duration) const;
        auto ShowAppointmentDetailsAsync(param::hstring const& appointmentId) const;
        auto ShowAppointmentDetailsAsync(param::hstring const& appointmentId, Windows::Foundation::DateTime const& instanceStartDate) const;
        auto ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment) const;
        auto RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const& options) const;
        [[nodiscard]] auto User() const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentManagerForUser>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics
    {
        auto ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const;
        auto ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
        auto ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const;
        auto ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
        auto ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const;
        auto ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection) const;
        auto ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
        auto ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const;
        auto ShowTimeFrameAsync(Windows::Foundation::DateTime const& timeToShow, Windows::Foundation::TimeSpan const& duration) const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics2
    {
        auto ShowAppointmentDetailsAsync(param::hstring const& appointmentId) const;
        auto ShowAppointmentDetailsAsync(param::hstring const& appointmentId, Windows::Foundation::DateTime const& instanceStartDate) const;
        auto ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment) const;
        auto RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const& options) const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics3
    {
        auto GetForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentParticipant
    {
        [[nodiscard]] auto DisplayName() const;
        auto DisplayName(param::hstring const& value) const;
        [[nodiscard]] auto Address() const;
        auto Address(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentParticipant>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentParticipant<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics
    {
        [[nodiscard]] auto Subject() const;
        [[nodiscard]] auto Location() const;
        [[nodiscard]] auto StartTime() const;
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto Reminder() const;
        [[nodiscard]] auto BusyStatus() const;
        [[nodiscard]] auto Sensitivity() const;
        [[nodiscard]] auto OriginalStartTime() const;
        [[nodiscard]] auto IsResponseRequested() const;
        [[nodiscard]] auto AllowNewTimeProposal() const;
        [[nodiscard]] auto AllDay() const;
        [[nodiscard]] auto Details() const;
        [[nodiscard]] auto OnlineMeetingLink() const;
        [[nodiscard]] auto ReplyTime() const;
        [[nodiscard]] auto Organizer() const;
        [[nodiscard]] auto UserResponse() const;
        [[nodiscard]] auto HasInvitees() const;
        [[nodiscard]] auto IsCanceledMeeting() const;
        [[nodiscard]] auto IsOrganizedByUser() const;
        [[nodiscard]] auto Recurrence() const;
        [[nodiscard]] auto Uri() const;
        [[nodiscard]] auto Invitees() const;
        [[nodiscard]] auto DefaultProperties() const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics2
    {
        [[nodiscard]] auto ChangeNumber() const;
        [[nodiscard]] auto RemoteChangeNumber() const;
        [[nodiscard]] auto DetailsKind() const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence
    {
        [[nodiscard]] auto Unit() const;
        auto Unit(Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit const& value) const;
        [[nodiscard]] auto Occurrences() const;
        auto Occurrences(Windows::Foundation::IReference<uint32_t> const& value) const;
        [[nodiscard]] auto Until() const;
        auto Until(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] auto Interval() const;
        auto Interval(uint32_t value) const;
        [[nodiscard]] auto DaysOfWeek() const;
        auto DaysOfWeek(Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek const& value) const;
        [[nodiscard]] auto WeekOfMonth() const;
        auto WeekOfMonth(Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth const& value) const;
        [[nodiscard]] auto Month() const;
        auto Month(uint32_t value) const;
        [[nodiscard]] auto Day() const;
        auto Day(uint32_t value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentRecurrence>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence2
    {
        [[nodiscard]] auto RecurrenceType() const;
        [[nodiscard]] auto TimeZone() const;
        auto TimeZone(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence3
    {
        [[nodiscard]] auto CalendarIdentifier() const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStore
    {
        [[nodiscard]] auto ChangeTracker() const;
        auto CreateAppointmentCalendarAsync(param::hstring const& name) const;
        auto GetAppointmentCalendarAsync(param::hstring const& calendarId) const;
        auto GetAppointmentAsync(param::hstring const& localId) const;
        auto GetAppointmentInstanceAsync(param::hstring const& localId, Windows::Foundation::DateTime const& instanceStartTime) const;
        auto FindAppointmentCalendarsAsync() const;
        auto FindAppointmentCalendarsAsync(Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions const& options) const;
        auto FindAppointmentsAsync(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength) const;
        auto FindAppointmentsAsync(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength, Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& options) const;
        auto FindConflictAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment) const;
        auto FindConflictAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::DateTime const& instanceStartTime) const;
        auto MoveAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::ApplicationModel::Appointments::AppointmentCalendar const& destinationCalendar) const;
        auto ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const;
        auto ShowReplaceAppointmentAsync(param::hstring const& localId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const;
        auto ShowReplaceAppointmentAsync(param::hstring const& localId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const;
        auto ShowRemoveAppointmentAsync(param::hstring const& localId, Windows::Foundation::Rect const& selection) const;
        auto ShowRemoveAppointmentAsync(param::hstring const& localId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const;
        auto ShowAppointmentDetailsAsync(param::hstring const& localId) const;
        auto ShowAppointmentDetailsAsync(param::hstring const& localId, Windows::Foundation::DateTime const& instanceStartDate) const;
        auto ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment) const;
        auto FindLocalIdsFromRoamingIdAsync(param::hstring const& roamingId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStore>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStore2
    {
        auto StoreChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> const& pHandler) const;
        using StoreChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Appointments::IAppointmentStore2, &impl::abi_t<Windows::ApplicationModel::Appointments::IAppointmentStore2>::remove_StoreChanged>;
        StoreChanged_revoker StoreChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> const& pHandler) const;
        auto StoreChanged(winrt::event_token const& token) const noexcept;
        auto CreateAppointmentCalendarAsync(param::hstring const& name, param::hstring const& userDataAccountId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStore2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStore2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStore3
    {
        auto GetChangeTracker(param::hstring const& identity) const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStore3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStore3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChange
    {
        [[nodiscard]] auto Appointment() const;
        [[nodiscard]] auto ChangeType() const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStoreChange>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChange<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChange2
    {
        [[nodiscard]] auto AppointmentCalendar() const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChange2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeReader
    {
        auto ReadBatchAsync() const;
        auto AcceptChanges() const;
        auto AcceptChangesThrough(Windows::ApplicationModel::Appointments::AppointmentStoreChange const& lastChangeToAccept) const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeReader<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker
    {
        auto GetChangeReader() const;
        auto Enable() const;
        auto Reset() const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker2
    {
        [[nodiscard]] auto IsTracking() const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedEventArgs
    {
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreNotificationTriggerDetails
    {
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreNotificationTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions
    {
        [[nodiscard]] auto CalendarIds() const;
        [[nodiscard]] auto FetchProperties() const;
        [[nodiscard]] auto IncludeHidden() const;
        auto IncludeHidden(bool value) const;
        [[nodiscard]] auto MaxCount() const;
        auto MaxCount(uint32_t value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Appointments::IFindAppointmentsOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions<D>;
    };
}
#endif
