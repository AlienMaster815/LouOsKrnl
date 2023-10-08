// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Contacts_0_H
#define WINRT_Windows_ApplicationModel_Contacts_0_H
namespace winrt::Windows::Foundation
{
    struct Deferral;
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
    struct IPropertySet;
    struct ValueSet;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
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
namespace winrt::Windows::UI::ViewManagement
{
    enum class ViewSizePreference : int32_t;
}
namespace winrt::Windows::ApplicationModel::Contacts
{
    enum class ContactAddressKind : int32_t
    {
        Home = 0,
        Work = 1,
        Other = 2,
    };
    enum class ContactAnnotationOperations : uint32_t
    {
        None = 0,
        ContactProfile = 0x1,
        Message = 0x2,
        AudioCall = 0x4,
        VideoCall = 0x8,
        SocialFeeds = 0x10,
        Share = 0x20,
    };
    enum class ContactAnnotationStoreAccessType : int32_t
    {
        AppAnnotationsReadWrite = 0,
        AllAnnotationsReadWrite = 1,
    };
    enum class ContactBatchStatus : int32_t
    {
        Success = 0,
        ServerSearchSyncManagerError = 1,
        ServerSearchUnknownError = 2,
    };
    enum class ContactCardHeaderKind : int32_t
    {
        Default = 0,
        Basic = 1,
        Enterprise = 2,
    };
    enum class ContactCardTabKind : int32_t
    {
        Default = 0,
        Email = 1,
        Messaging = 2,
        Phone = 3,
        Video = 4,
        OrganizationalHierarchy = 5,
    };
    enum class ContactChangeType : int32_t
    {
        Created = 0,
        Modified = 1,
        Deleted = 2,
        ChangeTrackingLost = 3,
    };
    enum class ContactDateKind : int32_t
    {
        Birthday = 0,
        Anniversary = 1,
        Other = 2,
    };
    enum class ContactEmailKind : int32_t
    {
        Personal = 0,
        Work = 1,
        Other = 2,
    };
    enum class ContactFieldCategory : int32_t
    {
        None = 0,
        Home = 1,
        Work = 2,
        Mobile = 3,
        Other = 4,
    };
    enum class ContactFieldType : int32_t
    {
        Email = 0,
        PhoneNumber = 1,
        Location = 2,
        InstantMessage = 3,
        Custom = 4,
        ConnectedServiceAccount = 5,
        ImportantDate = 6,
        Address = 7,
        SignificantOther = 8,
        Notes = 9,
        Website = 10,
        JobInfo = 11,
    };
    enum class ContactListOtherAppReadAccess : int32_t
    {
        SystemOnly = 0,
        Limited = 1,
        Full = 2,
        None = 3,
    };
    enum class ContactListOtherAppWriteAccess : int32_t
    {
        None = 0,
        SystemOnly = 1,
        Limited = 2,
    };
    enum class ContactListSyncStatus : int32_t
    {
        Idle = 0,
        Syncing = 1,
        UpToDate = 2,
        AuthenticationError = 3,
        PolicyError = 4,
        UnknownError = 5,
        ManualAccountRemovalRequired = 6,
    };
    enum class ContactMatchReasonKind : int32_t
    {
        Name = 0,
        EmailAddress = 1,
        PhoneNumber = 2,
        JobInfo = 3,
        YomiName = 4,
        Other = 5,
    };
    enum class ContactNameOrder : int32_t
    {
        FirstNameLastName = 0,
        LastNameFirstName = 1,
    };
    enum class ContactPhoneKind : int32_t
    {
        Home = 0,
        Mobile = 1,
        Work = 2,
        Other = 3,
        Pager = 4,
        BusinessFax = 5,
        HomeFax = 6,
        Company = 7,
        Assistant = 8,
        Radio = 9,
    };
    enum class ContactQueryDesiredFields : uint32_t
    {
        None = 0,
        PhoneNumber = 0x1,
        EmailAddress = 0x2,
        PostalAddress = 0x4,
    };
    enum class ContactQuerySearchFields : uint32_t
    {
        None = 0,
        Name = 0x1,
        Email = 0x2,
        Phone = 0x4,
        All = 0xffffffff,
    };
    enum class ContactQuerySearchScope : int32_t
    {
        Local = 0,
        Server = 1,
    };
    enum class ContactRelationship : int32_t
    {
        Other = 0,
        Spouse = 1,
        Partner = 2,
        Sibling = 3,
        Parent = 4,
        Child = 5,
    };
    enum class ContactSelectionMode : int32_t
    {
        Contacts = 0,
        Fields = 1,
    };
    enum class ContactStoreAccessType : int32_t
    {
        AppContactsReadWrite = 0,
        AllContactsReadOnly = 1,
        AllContactsReadWrite = 2,
    };
    enum class PinnedContactSurface : int32_t
    {
        StartMenu = 0,
        Taskbar = 1,
    };
    struct IAggregateContactManager;
    struct IAggregateContactManager2;
    struct IContact;
    struct IContact2;
    struct IContact3;
    struct IContactAddress;
    struct IContactAnnotation;
    struct IContactAnnotation2;
    struct IContactAnnotationList;
    struct IContactAnnotationStore;
    struct IContactAnnotationStore2;
    struct IContactBatch;
    struct IContactCardDelayedDataLoader;
    struct IContactCardOptions;
    struct IContactCardOptions2;
    struct IContactChange;
    struct IContactChangeReader;
    struct IContactChangeTracker;
    struct IContactChangeTracker2;
    struct IContactChangedDeferral;
    struct IContactChangedEventArgs;
    struct IContactConnectedServiceAccount;
    struct IContactDate;
    struct IContactEmail;
    struct IContactField;
    struct IContactFieldFactory;
    struct IContactGroup;
    struct IContactInformation;
    struct IContactInstantMessageField;
    struct IContactInstantMessageFieldFactory;
    struct IContactJobInfo;
    struct IContactLaunchActionVerbsStatics;
    struct IContactList;
    struct IContactList2;
    struct IContactList3;
    struct IContactListLimitedWriteOperations;
    struct IContactListSyncConstraints;
    struct IContactListSyncManager;
    struct IContactListSyncManager2;
    struct IContactLocationField;
    struct IContactLocationFieldFactory;
    struct IContactManagerForUser;
    struct IContactManagerForUser2;
    struct IContactManagerStatics;
    struct IContactManagerStatics2;
    struct IContactManagerStatics3;
    struct IContactManagerStatics4;
    struct IContactManagerStatics5;
    struct IContactMatchReason;
    struct IContactName;
    struct IContactPanel;
    struct IContactPanelClosingEventArgs;
    struct IContactPanelLaunchFullAppRequestedEventArgs;
    struct IContactPhone;
    struct IContactPicker;
    struct IContactPicker2;
    struct IContactPicker3;
    struct IContactPickerStatics;
    struct IContactQueryOptions;
    struct IContactQueryOptionsFactory;
    struct IContactQueryTextSearch;
    struct IContactReader;
    struct IContactSignificantOther;
    struct IContactSignificantOther2;
    struct IContactStore;
    struct IContactStore2;
    struct IContactStore3;
    struct IContactStoreNotificationTriggerDetails;
    struct IContactWebsite;
    struct IContactWebsite2;
    struct IFullContactCardOptions;
    struct IKnownContactFieldStatics;
    struct IPinnedContactIdsQueryResult;
    struct IPinnedContactManager;
    struct IPinnedContactManagerStatics;
    struct AggregateContactManager;
    struct Contact;
    struct ContactAddress;
    struct ContactAnnotation;
    struct ContactAnnotationList;
    struct ContactAnnotationStore;
    struct ContactBatch;
    struct ContactCardDelayedDataLoader;
    struct ContactCardOptions;
    struct ContactChange;
    struct ContactChangeReader;
    struct ContactChangeTracker;
    struct ContactChangedDeferral;
    struct ContactChangedEventArgs;
    struct ContactConnectedServiceAccount;
    struct ContactDate;
    struct ContactEmail;
    struct ContactField;
    struct ContactFieldFactory;
    struct ContactGroup;
    struct ContactInformation;
    struct ContactInstantMessageField;
    struct ContactJobInfo;
    struct ContactLaunchActionVerbs;
    struct ContactList;
    struct ContactListLimitedWriteOperations;
    struct ContactListSyncConstraints;
    struct ContactListSyncManager;
    struct ContactLocationField;
    struct ContactManager;
    struct ContactManagerForUser;
    struct ContactMatchReason;
    struct ContactPanel;
    struct ContactPanelClosingEventArgs;
    struct ContactPanelLaunchFullAppRequestedEventArgs;
    struct ContactPhone;
    struct ContactPicker;
    struct ContactQueryOptions;
    struct ContactQueryTextSearch;
    struct ContactReader;
    struct ContactSignificantOther;
    struct ContactStore;
    struct ContactStoreNotificationTriggerDetails;
    struct ContactWebsite;
    struct FullContactCardOptions;
    struct KnownContactField;
    struct PinnedContactIdsQueryResult;
    struct PinnedContactManager;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Contacts::IAggregateContactManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IAggregateContactManager2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContact>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContact2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContact3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactAddress>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactAnnotation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactAnnotation2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactAnnotationList>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactAnnotationStore>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactAnnotationStore2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactBatch>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactCardOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactCardOptions2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactChange>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactChangeReader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactChangeTracker>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactChangeTracker2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactChangedDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactDate>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactEmail>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactField>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactFieldFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactGroup>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactInformation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactInstantMessageField>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactJobInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactList>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactList2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactList3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactListLimitedWriteOperations>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactListSyncConstraints>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactListSyncManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactListSyncManager2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactLocationField>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactLocationFieldFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactManagerForUser>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactManagerForUser2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactManagerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactManagerStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactManagerStatics4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactManagerStatics5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactMatchReason>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactName>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactPanel>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactPhone>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactPicker>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactPicker2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactPicker3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactPickerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactQueryOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactQueryOptionsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactQueryTextSearch>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactReader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactSignificantOther>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactSignificantOther2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactStore>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactStore2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactStore3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactWebsite>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IContactWebsite2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IFullContactCardOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IKnownContactFieldStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IPinnedContactManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::AggregateContactManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::Contact>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactAddress>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactAnnotation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactAnnotationList>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactAnnotationStore>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactBatch>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactCardOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactChange>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactChangeReader>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactChangeTracker>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactChangedDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactConnectedServiceAccount>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactDate>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactEmail>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactField>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactFieldFactory>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactGroup>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactInformation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactInstantMessageField>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactJobInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactLaunchActionVerbs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactList>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactListLimitedWriteOperations>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactListSyncConstraints>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactListSyncManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactLocationField>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactManagerForUser>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactMatchReason>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactPanel>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactPanelClosingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactPanelLaunchFullAppRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactPhone>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactPicker>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactQueryOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactQueryTextSearch>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactReader>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactSignificantOther>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactStore>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactStoreNotificationTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactWebsite>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::FullContactCardOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::KnownContactField>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::PinnedContactIdsQueryResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::PinnedContactManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactAddressKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactAnnotationOperations>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactBatchStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactCardHeaderKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactCardTabKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactChangeType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactDateKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactEmailKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactFieldCategory>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactFieldType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactListSyncStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactMatchReasonKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactNameOrder>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactPhoneKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactQueryDesiredFields>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactQuerySearchFields>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactQuerySearchScope>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactRelationship>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactSelectionMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::ContactStoreAccessType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::PinnedContactSurface>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IAggregateContactManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IAggregateContactManager" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IAggregateContactManager2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IAggregateContactManager2" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContact>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContact" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContact2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContact2" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContact3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContact3" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactAddress>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactAddress" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactAnnotation>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactAnnotation" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactAnnotation2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactAnnotation2" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactAnnotationList>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactAnnotationList" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactAnnotationStore>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactAnnotationStore" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactAnnotationStore2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactAnnotationStore2" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactBatch>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactBatch" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactCardDelayedDataLoader" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactCardOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactCardOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactCardOptions2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactCardOptions2" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactChange>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactChange" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactChangeReader>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactChangeReader" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactChangeTracker>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactChangeTracker" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactChangeTracker2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactChangeTracker2" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactChangedDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactChangedDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactChangedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactConnectedServiceAccount" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactDate>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactDate" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactEmail>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactEmail" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactField>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactField" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactFieldFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactFieldFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactGroup>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactGroup" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactInformation>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactInformation" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactInstantMessageField>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactInstantMessageField" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactInstantMessageFieldFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactJobInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactJobInfo" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactLaunchActionVerbsStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactList>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactList" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactList2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactList2" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactList3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactList3" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactListLimitedWriteOperations>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactListLimitedWriteOperations" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactListSyncConstraints>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactListSyncConstraints" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactListSyncManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactListSyncManager" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactListSyncManager2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactListSyncManager2" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactLocationField>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactLocationField" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactLocationFieldFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactLocationFieldFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactManagerForUser>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactManagerForUser" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactManagerForUser2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactManagerForUser2" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactManagerStatics2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactManagerStatics2" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactManagerStatics3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactManagerStatics3" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactManagerStatics4>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactManagerStatics4" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactManagerStatics5>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactManagerStatics5" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactMatchReason>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactMatchReason" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactName>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactName" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactPanel>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactPanel" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactPanelClosingEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactPanelLaunchFullAppRequestedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactPhone>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactPhone" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactPicker>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactPicker" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactPicker2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactPicker2" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactPicker3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactPicker3" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactPickerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactPickerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactQueryOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactQueryOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactQueryOptionsFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactQueryOptionsFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactQueryTextSearch>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactQueryTextSearch" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactReader>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactReader" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactSignificantOther>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactSignificantOther" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactSignificantOther2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactSignificantOther2" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactStore>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactStore" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactStore2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactStore2" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactStore3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactStore3" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactStoreNotificationTriggerDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactWebsite>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactWebsite" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IContactWebsite2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IContactWebsite2" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IFullContactCardOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IFullContactCardOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IKnownContactFieldStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IKnownContactFieldStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IPinnedContactIdsQueryResult" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IPinnedContactManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IPinnedContactManager" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.IPinnedContactManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::AggregateContactManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.AggregateContactManager" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::Contact>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.Contact" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactAddress>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactAddress" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactAnnotation>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactAnnotation" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactAnnotationList>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactAnnotationList" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactAnnotationStore>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactAnnotationStore" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactBatch>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactBatch" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactCardDelayedDataLoader" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactCardOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactCardOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactChange>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactChange" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactChangeReader>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactChangeReader" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactChangeTracker>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactChangeTracker" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactChangedDeferral>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactChangedDeferral" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactChangedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactConnectedServiceAccount>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactConnectedServiceAccount" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactDate>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactDate" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactEmail>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactEmail" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactField>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactField" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactFieldFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactFieldFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactGroup>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactGroup" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactInformation>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactInformation" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactInstantMessageField>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactInstantMessageField" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactJobInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactJobInfo" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactLaunchActionVerbs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactLaunchActionVerbs" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactList>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactList" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactListLimitedWriteOperations>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactListLimitedWriteOperations" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactListSyncConstraints>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactListSyncConstraints" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactListSyncManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactListSyncManager" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactLocationField>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactLocationField" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactManager" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactManagerForUser>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactManagerForUser" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactMatchReason>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactMatchReason" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactPanel>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactPanel" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactPanelClosingEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactPanelClosingEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactPanelLaunchFullAppRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactPanelLaunchFullAppRequestedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactPhone>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactPhone" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactPicker>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactPicker" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactQueryOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactQueryOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactQueryTextSearch>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactQueryTextSearch" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactReader>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactReader" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactSignificantOther>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactSignificantOther" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactStore>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactStore" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactStoreNotificationTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactStoreNotificationTriggerDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactWebsite>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactWebsite" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::FullContactCardOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.FullContactCardOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::KnownContactField>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.KnownContactField" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::PinnedContactIdsQueryResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.PinnedContactIdsQueryResult" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::PinnedContactManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.PinnedContactManager" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactAddressKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactAddressKind" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactAnnotationOperations>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactAnnotationOperations" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactAnnotationStoreAccessType" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactBatchStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactBatchStatus" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactCardHeaderKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactCardHeaderKind" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactCardTabKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactCardTabKind" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactChangeType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactChangeType" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactDateKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactDateKind" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactEmailKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactEmailKind" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactFieldCategory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactFieldCategory" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactFieldType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactFieldType" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactListOtherAppReadAccess" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactListOtherAppWriteAccess" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactListSyncStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactListSyncStatus" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactMatchReasonKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactMatchReasonKind" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactNameOrder>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactNameOrder" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactPhoneKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactPhoneKind" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactQueryDesiredFields>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactQueryDesiredFields" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactQuerySearchFields>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactQuerySearchFields" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactQuerySearchScope>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactQuerySearchScope" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactRelationship>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactRelationship" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactSelectionMode>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactSelectionMode" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::ContactStoreAccessType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.ContactStoreAccessType" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::PinnedContactSurface>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.PinnedContactSurface" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IAggregateContactManager>
    {
        static constexpr guid value{ 0x0379D5DD,0xDB5A,0x4FD3,{ 0xB5,0x4E,0x4D,0xF1,0x79,0x17,0xA2,0x12 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IAggregateContactManager2>
    {
        static constexpr guid value{ 0x5E8CC2D8,0xA9CD,0x4430,{ 0x9C,0x4B,0x01,0x34,0x8D,0xB2,0xCA,0x50 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContact>
    {
        static constexpr guid value{ 0xEC0072F3,0x2118,0x4049,{ 0x9E,0xBC,0x17,0xF0,0xAB,0x69,0x2B,0x64 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContact2>
    {
        static constexpr guid value{ 0xF312F365,0xBB77,0x4C94,{ 0x80,0x2D,0x83,0x28,0xCE,0xE4,0x0C,0x08 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContact3>
    {
        static constexpr guid value{ 0x48201E67,0xE08E,0x42A4,{ 0xB5,0x61,0x41,0xD0,0x8C,0xA9,0x57,0x5D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactAddress>
    {
        static constexpr guid value{ 0x9739D39A,0x42CE,0x4872,{ 0x8D,0x70,0x30,0x63,0xAA,0x58,0x4B,0x70 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactAnnotation>
    {
        static constexpr guid value{ 0x821FC2EF,0x7D41,0x44A2,{ 0x84,0xC3,0x60,0xA2,0x81,0xDD,0x7B,0x86 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactAnnotation2>
    {
        static constexpr guid value{ 0xB691ECF3,0x4AB7,0x4A1F,{ 0x99,0x41,0x0C,0x9C,0xF3,0x17,0x1B,0x75 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactAnnotationList>
    {
        static constexpr guid value{ 0x92A486AA,0x5C88,0x45B9,{ 0xAA,0xD0,0x46,0x18,0x88,0xE6,0x8D,0x8A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactAnnotationStore>
    {
        static constexpr guid value{ 0x23ACF4AA,0x7A77,0x457D,{ 0x82,0x03,0x98,0x7F,0x4B,0x31,0xAF,0x09 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactAnnotationStore2>
    {
        static constexpr guid value{ 0x7EDE23FD,0x61E7,0x4967,{ 0x8E,0xC5,0xBD,0xF2,0x80,0xA2,0x40,0x63 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactBatch>
    {
        static constexpr guid value{ 0x35D1972D,0xBFCE,0x46BB,{ 0x93,0xF8,0xA5,0xB0,0x6E,0xC5,0xE2,0x01 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader>
    {
        static constexpr guid value{ 0xB60AF902,0x1546,0x434D,{ 0x86,0x9C,0x6E,0x35,0x20,0x76,0x0E,0xF3 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactCardOptions>
    {
        static constexpr guid value{ 0x8C0A4F7E,0x6AB6,0x4F3F,{ 0xBE,0x72,0x81,0x72,0x36,0xEE,0xEA,0x5B } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactCardOptions2>
    {
        static constexpr guid value{ 0x8F271BA0,0xD74B,0x4CC6,{ 0x9F,0x53,0x1B,0x0E,0xB5,0xD1,0x27,0x3C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactChange>
    {
        static constexpr guid value{ 0x951D4B10,0x6A59,0x4720,{ 0xA4,0xE1,0x36,0x3D,0x98,0xC1,0x35,0xD5 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactChangeReader>
    {
        static constexpr guid value{ 0x217319FA,0x2D0C,0x42E0,{ 0xA9,0xDA,0x3E,0xCD,0x56,0xA7,0x8A,0x47 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactChangeTracker>
    {
        static constexpr guid value{ 0x6E992952,0x309B,0x404D,{ 0x97,0x12,0xB3,0x7B,0xD3,0x02,0x78,0xAA } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactChangeTracker2>
    {
        static constexpr guid value{ 0x7F8AD0FC,0x9321,0x4D18,{ 0x9C,0x09,0xD7,0x08,0xC6,0x3F,0xCD,0x31 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactChangedDeferral>
    {
        static constexpr guid value{ 0xC5143AE8,0x1B03,0x46F8,{ 0xB6,0x94,0xA5,0x23,0xE8,0x3C,0xFC,0xB6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactChangedEventArgs>
    {
        static constexpr guid value{ 0x525E7FD1,0x73F3,0x4B7D,{ 0xA9,0x18,0x58,0x0B,0xE4,0x36,0x61,0x21 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount>
    {
        static constexpr guid value{ 0xF6F83553,0xAA27,0x4731,{ 0x8E,0x4A,0x3D,0xEC,0x5C,0xE9,0xEE,0xC9 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactDate>
    {
        static constexpr guid value{ 0xFE98AE66,0xB205,0x4934,{ 0x91,0x74,0x0F,0xF2,0xB0,0x56,0x57,0x07 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactEmail>
    {
        static constexpr guid value{ 0x90A219A9,0xE3D3,0x4D63,{ 0x99,0x3B,0x05,0xB9,0xA5,0x39,0x3A,0xBF } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactField>
    {
        static constexpr guid value{ 0xB176486A,0xD293,0x492C,{ 0xA0,0x58,0xDB,0x57,0x5B,0x3E,0x3C,0x0F } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactFieldFactory>
    {
        static constexpr guid value{ 0x85E2913F,0x0E4A,0x4A3E,{ 0x89,0x94,0x40,0x6A,0xE7,0xED,0x64,0x6E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactGroup>
    {
        static constexpr guid value{ 0x59BDEB01,0x9E9A,0x475D,{ 0xBF,0xE5,0xA3,0x7B,0x80,0x6D,0x85,0x2C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactInformation>
    {
        static constexpr guid value{ 0x275EB6D4,0x6A2E,0x4278,{ 0xA9,0x14,0xE4,0x60,0xD5,0xF0,0x88,0xF6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactInstantMessageField>
    {
        static constexpr guid value{ 0xCCE33B37,0x0D85,0x41FA,{ 0xB4,0x3D,0xDA,0x59,0x9C,0x3E,0xB0,0x09 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory>
    {
        static constexpr guid value{ 0xBA0B6794,0x91A3,0x4BB2,{ 0xB1,0xB9,0x69,0xA5,0xDF,0xF0,0xBA,0x09 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactJobInfo>
    {
        static constexpr guid value{ 0x6D117B4C,0xCE50,0x4B43,{ 0x9E,0x69,0xB1,0x82,0x58,0xEA,0x53,0x15 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics>
    {
        static constexpr guid value{ 0xFB1232D6,0xEE73,0x46E7,{ 0x87,0x61,0x11,0xCD,0x01,0x57,0x72,0x8F } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactList>
    {
        static constexpr guid value{ 0x16DDEC75,0x392C,0x4845,{ 0x9D,0xFB,0x51,0xA3,0xE7,0xEF,0x3E,0x42 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactList2>
    {
        static constexpr guid value{ 0xCB3943B4,0x4550,0x4DCB,{ 0x92,0x29,0x40,0xFF,0x91,0xFB,0x02,0x03 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactList3>
    {
        static constexpr guid value{ 0x1578EE57,0x26FC,0x41E8,{ 0xA8,0x50,0x5A,0xA3,0x25,0x14,0xAC,0xA9 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactListLimitedWriteOperations>
    {
        static constexpr guid value{ 0xE19813DA,0x4A0B,0x44B8,{ 0x9A,0x1F,0xA0,0xF3,0xD2,0x18,0x17,0x5F } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactListSyncConstraints>
    {
        static constexpr guid value{ 0xB2B0BF01,0x3062,0x4E2E,{ 0x96,0x9D,0x01,0x8D,0x19,0x87,0xF3,0x14 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactListSyncManager>
    {
        static constexpr guid value{ 0x146E83BE,0x7925,0x4ACC,{ 0x9D,0xE5,0x21,0xDD,0xD0,0x6F,0x86,0x74 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactListSyncManager2>
    {
        static constexpr guid value{ 0xA9591247,0xBB55,0x4E23,{ 0x81,0x28,0x37,0x01,0x34,0xA8,0x5D,0x0D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactLocationField>
    {
        static constexpr guid value{ 0x9EC00F82,0xAB6E,0x4B36,{ 0x89,0xE3,0xB2,0x3B,0xC0,0xA1,0xDA,0xCC } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactLocationFieldFactory>
    {
        static constexpr guid value{ 0xF79932D7,0x2FDF,0x43FE,{ 0x8F,0x18,0x41,0x89,0x73,0x90,0xBC,0xFE } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactManagerForUser>
    {
        static constexpr guid value{ 0xB74BBA57,0x1076,0x4BEF,{ 0xAE,0xF3,0x54,0x68,0x6D,0x18,0x38,0x7D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactManagerForUser2>
    {
        static constexpr guid value{ 0x4D469C2E,0x3B75,0x4A73,{ 0xBB,0x30,0x73,0x66,0x45,0x47,0x22,0x56 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactManagerStatics>
    {
        static constexpr guid value{ 0x81F21AC0,0xF661,0x4708,{ 0xBA,0x4F,0xD3,0x86,0xBD,0x0D,0x62,0x2E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactManagerStatics2>
    {
        static constexpr guid value{ 0xA178E620,0x47D8,0x48CC,{ 0x96,0x3C,0x95,0x92,0xB6,0xE5,0x10,0xC6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactManagerStatics3>
    {
        static constexpr guid value{ 0xC4CC3D42,0x7586,0x492A,{ 0x93,0x0B,0x7B,0xC1,0x38,0xFC,0x21,0x39 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactManagerStatics4>
    {
        static constexpr guid value{ 0x24982272,0x347B,0x46DC,{ 0x8D,0x95,0x51,0xBD,0x41,0xE1,0x5A,0xAF } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactManagerStatics5>
    {
        static constexpr guid value{ 0xF7591A87,0xACB7,0x4FAD,{ 0x90,0xF2,0xA8,0xAB,0x64,0xCD,0xBB,0xA4 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactMatchReason>
    {
        static constexpr guid value{ 0xBC922504,0xE7D8,0x413E,{ 0x95,0xF4,0xB7,0x5C,0x54,0xC7,0x40,0x77 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactName>
    {
        static constexpr guid value{ 0xF404E97B,0x9034,0x453C,{ 0x8E,0xBF,0x14,0x0A,0x38,0xC8,0x6F,0x1D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactPanel>
    {
        static constexpr guid value{ 0x41BF1265,0xD2EE,0x4B97,{ 0xA8,0x0A,0x7D,0x8D,0x64,0xCC,0xA6,0xF5 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs>
    {
        static constexpr guid value{ 0x222174D3,0xCF4B,0x46D7,{ 0xB7,0x39,0x6E,0xDC,0x16,0x11,0x0B,0xFB } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs>
    {
        static constexpr guid value{ 0x88D61C0E,0x23B4,0x4BE8,{ 0x8A,0xFC,0x07,0x2C,0x25,0xA4,0x19,0x0D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactPhone>
    {
        static constexpr guid value{ 0x467DAB65,0x2712,0x4F52,{ 0xB7,0x83,0x9E,0xA8,0x11,0x1C,0x63,0xCD } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactPicker>
    {
        static constexpr guid value{ 0x0E09FD91,0x42F8,0x4055,{ 0x90,0xA0,0x89,0x6F,0x96,0x73,0x89,0x36 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactPicker2>
    {
        static constexpr guid value{ 0xB35011CF,0x5CEF,0x4D24,{ 0xAA,0x0C,0x34,0x0C,0x52,0x08,0x72,0x5D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactPicker3>
    {
        static constexpr guid value{ 0x0E723315,0xB243,0x4BED,{ 0x85,0x16,0x22,0xB1,0xA7,0xAC,0x0A,0xCE } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactPickerStatics>
    {
        static constexpr guid value{ 0x7488C029,0x6A53,0x4258,{ 0xA3,0xE9,0x62,0xDF,0xF6,0x78,0x4B,0x6C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactQueryOptions>
    {
        static constexpr guid value{ 0x4408CC9E,0x7D7C,0x42F0,{ 0x8A,0xC7,0xF5,0x07,0x33,0xEC,0xDB,0xC1 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactQueryOptionsFactory>
    {
        static constexpr guid value{ 0x543FBA47,0x8CE7,0x46CB,{ 0x9D,0xAC,0x9A,0xA4,0x2A,0x1B,0xC8,0xE2 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactQueryTextSearch>
    {
        static constexpr guid value{ 0xF7E3F9CB,0xA957,0x439B,{ 0xA0,0xB7,0x1C,0x02,0xA1,0x96,0x3F,0xF0 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactReader>
    {
        static constexpr guid value{ 0xD397E42E,0x1488,0x42F2,{ 0xBF,0x64,0x25,0x3F,0x48,0x84,0xBF,0xED } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactSignificantOther>
    {
        static constexpr guid value{ 0x8873B5AB,0xC5FB,0x46D8,{ 0x93,0xFE,0xDA,0x3F,0xF1,0x93,0x40,0x54 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactSignificantOther2>
    {
        static constexpr guid value{ 0x8D7BD474,0x3F03,0x45F8,{ 0xBA,0x0F,0xC4,0xED,0x37,0xD6,0x42,0x19 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactStore>
    {
        static constexpr guid value{ 0x2C220B10,0x3A6C,0x4293,{ 0xB9,0xBC,0xFE,0x98,0x7F,0x6E,0x0D,0x52 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactStore2>
    {
        static constexpr guid value{ 0x18CE1C22,0xEBD5,0x4BFB,{ 0xB6,0x90,0x5F,0x4F,0x27,0xC4,0xF0,0xE8 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactStore3>
    {
        static constexpr guid value{ 0xCB882C6C,0x004E,0x4050,{ 0x87,0xF0,0x84,0x04,0x07,0xEE,0x68,0x18 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails>
    {
        static constexpr guid value{ 0xABB298D6,0x878A,0x4F8B,{ 0xA9,0xCE,0x46,0xBB,0x7D,0x1C,0x84,0xCE } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactWebsite>
    {
        static constexpr guid value{ 0x9F130176,0xDC1B,0x4055,{ 0xAD,0x66,0x65,0x2F,0x39,0xD9,0x90,0xE8 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IContactWebsite2>
    {
        static constexpr guid value{ 0xF87EE91E,0x5647,0x4068,{ 0xBB,0x5E,0x4B,0x6F,0x43,0x7C,0xE3,0x08 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IFullContactCardOptions>
    {
        static constexpr guid value{ 0x8744436C,0x5CF9,0x4683,{ 0xBD,0xCA,0xA1,0xFD,0xEB,0xF8,0xDB,0xCE } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IKnownContactFieldStatics>
    {
        static constexpr guid value{ 0x2E0E1B12,0xD627,0x4FCA,{ 0xBA,0xD4,0x1F,0xAF,0x16,0x8C,0x7D,0x14 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult>
    {
        static constexpr guid value{ 0x7D9B2552,0x1579,0x4DDC,{ 0x87,0x1F,0xA3,0x0A,0x3A,0xEA,0x9B,0xA1 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IPinnedContactManager>
    {
        static constexpr guid value{ 0xFCBC740C,0xE1D6,0x45C3,{ 0xB8,0xB6,0xA3,0x56,0x04,0xE1,0x67,0xA0 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics>
    {
        static constexpr guid value{ 0xF65CCC7E,0xFDF9,0x486A,{ 0xAC,0xE9,0xBC,0x31,0x1D,0x0A,0xE7,0xF0 } };
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::AggregateContactManager>
    {
        using type = Windows::ApplicationModel::Contacts::IAggregateContactManager;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::Contact>
    {
        using type = Windows::ApplicationModel::Contacts::IContact;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactAddress>
    {
        using type = Windows::ApplicationModel::Contacts::IContactAddress;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactAnnotation>
    {
        using type = Windows::ApplicationModel::Contacts::IContactAnnotation;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactAnnotationList>
    {
        using type = Windows::ApplicationModel::Contacts::IContactAnnotationList;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactAnnotationStore>
    {
        using type = Windows::ApplicationModel::Contacts::IContactAnnotationStore;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactBatch>
    {
        using type = Windows::ApplicationModel::Contacts::IContactBatch;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader>
    {
        using type = Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactCardOptions>
    {
        using type = Windows::ApplicationModel::Contacts::IContactCardOptions;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactChange>
    {
        using type = Windows::ApplicationModel::Contacts::IContactChange;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactChangeReader>
    {
        using type = Windows::ApplicationModel::Contacts::IContactChangeReader;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactChangeTracker>
    {
        using type = Windows::ApplicationModel::Contacts::IContactChangeTracker;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactChangedDeferral>
    {
        using type = Windows::ApplicationModel::Contacts::IContactChangedDeferral;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactChangedEventArgs>
    {
        using type = Windows::ApplicationModel::Contacts::IContactChangedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactConnectedServiceAccount>
    {
        using type = Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactDate>
    {
        using type = Windows::ApplicationModel::Contacts::IContactDate;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactEmail>
    {
        using type = Windows::ApplicationModel::Contacts::IContactEmail;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactField>
    {
        using type = Windows::ApplicationModel::Contacts::IContactField;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactFieldFactory>
    {
        using type = Windows::ApplicationModel::Contacts::IContactFieldFactory;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactGroup>
    {
        using type = Windows::ApplicationModel::Contacts::IContactGroup;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactInformation>
    {
        using type = Windows::ApplicationModel::Contacts::IContactInformation;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactInstantMessageField>
    {
        using type = Windows::ApplicationModel::Contacts::IContactInstantMessageField;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactJobInfo>
    {
        using type = Windows::ApplicationModel::Contacts::IContactJobInfo;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactList>
    {
        using type = Windows::ApplicationModel::Contacts::IContactList;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactListLimitedWriteOperations>
    {
        using type = Windows::ApplicationModel::Contacts::IContactListLimitedWriteOperations;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactListSyncConstraints>
    {
        using type = Windows::ApplicationModel::Contacts::IContactListSyncConstraints;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactListSyncManager>
    {
        using type = Windows::ApplicationModel::Contacts::IContactListSyncManager;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactLocationField>
    {
        using type = Windows::ApplicationModel::Contacts::IContactLocationField;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactManagerForUser>
    {
        using type = Windows::ApplicationModel::Contacts::IContactManagerForUser;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactMatchReason>
    {
        using type = Windows::ApplicationModel::Contacts::IContactMatchReason;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactPanel>
    {
        using type = Windows::ApplicationModel::Contacts::IContactPanel;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactPanelClosingEventArgs>
    {
        using type = Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactPanelLaunchFullAppRequestedEventArgs>
    {
        using type = Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactPhone>
    {
        using type = Windows::ApplicationModel::Contacts::IContactPhone;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactPicker>
    {
        using type = Windows::ApplicationModel::Contacts::IContactPicker;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactQueryOptions>
    {
        using type = Windows::ApplicationModel::Contacts::IContactQueryOptions;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactQueryTextSearch>
    {
        using type = Windows::ApplicationModel::Contacts::IContactQueryTextSearch;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactReader>
    {
        using type = Windows::ApplicationModel::Contacts::IContactReader;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactSignificantOther>
    {
        using type = Windows::ApplicationModel::Contacts::IContactSignificantOther;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactStore>
    {
        using type = Windows::ApplicationModel::Contacts::IContactStore;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactStoreNotificationTriggerDetails>
    {
        using type = Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::ContactWebsite>
    {
        using type = Windows::ApplicationModel::Contacts::IContactWebsite;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::FullContactCardOptions>
    {
        using type = Windows::ApplicationModel::Contacts::IFullContactCardOptions;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::PinnedContactIdsQueryResult>
    {
        using type = Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::PinnedContactManager>
    {
        using type = Windows::ApplicationModel::Contacts::IPinnedContactManager;
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IAggregateContactManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindRawContactsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryLinkContactsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall UnlinkRawContactAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySetPreferredSourceForPictureAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IAggregateContactManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetRemoteIdentificationInformationAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContact>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall put_Thumbnail(void*) noexcept = 0;
            virtual int32_t __stdcall get_Fields(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContact2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall put_Id(void*) noexcept = 0;
            virtual int32_t __stdcall get_Notes(void**) noexcept = 0;
            virtual int32_t __stdcall put_Notes(void*) noexcept = 0;
            virtual int32_t __stdcall get_Phones(void**) noexcept = 0;
            virtual int32_t __stdcall get_Emails(void**) noexcept = 0;
            virtual int32_t __stdcall get_Addresses(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConnectedServiceAccounts(void**) noexcept = 0;
            virtual int32_t __stdcall get_ImportantDates(void**) noexcept = 0;
            virtual int32_t __stdcall get_DataSuppliers(void**) noexcept = 0;
            virtual int32_t __stdcall get_JobInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_SignificantOthers(void**) noexcept = 0;
            virtual int32_t __stdcall get_Websites(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContact3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactListId(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayPictureUserUpdateTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_DisplayPictureUserUpdateTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_IsMe(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AggregateId(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemoteId(void**) noexcept = 0;
            virtual int32_t __stdcall put_RemoteId(void*) noexcept = 0;
            virtual int32_t __stdcall get_RingToneToken(void**) noexcept = 0;
            virtual int32_t __stdcall put_RingToneToken(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsDisplayPictureManuallySet(bool*) noexcept = 0;
            virtual int32_t __stdcall get_LargeDisplayPicture(void**) noexcept = 0;
            virtual int32_t __stdcall get_SmallDisplayPicture(void**) noexcept = 0;
            virtual int32_t __stdcall get_SourceDisplayPicture(void**) noexcept = 0;
            virtual int32_t __stdcall put_SourceDisplayPicture(void*) noexcept = 0;
            virtual int32_t __stdcall get_TextToneToken(void**) noexcept = 0;
            virtual int32_t __stdcall put_TextToneToken(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsAggregate(bool*) noexcept = 0;
            virtual int32_t __stdcall get_FullName(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayNameOverride(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayNameOverride(void*) noexcept = 0;
            virtual int32_t __stdcall get_Nickname(void**) noexcept = 0;
            virtual int32_t __stdcall put_Nickname(void*) noexcept = 0;
            virtual int32_t __stdcall get_SortName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactAddress>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StreetAddress(void**) noexcept = 0;
            virtual int32_t __stdcall put_StreetAddress(void*) noexcept = 0;
            virtual int32_t __stdcall get_Locality(void**) noexcept = 0;
            virtual int32_t __stdcall put_Locality(void*) noexcept = 0;
            virtual int32_t __stdcall get_Region(void**) noexcept = 0;
            virtual int32_t __stdcall put_Region(void*) noexcept = 0;
            virtual int32_t __stdcall get_Country(void**) noexcept = 0;
            virtual int32_t __stdcall put_Country(void*) noexcept = 0;
            virtual int32_t __stdcall get_PostalCode(void**) noexcept = 0;
            virtual int32_t __stdcall put_PostalCode(void*) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Kind(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactAnnotation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_AnnotationListId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContactId(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContactId(void*) noexcept = 0;
            virtual int32_t __stdcall get_RemoteId(void**) noexcept = 0;
            virtual int32_t __stdcall put_RemoteId(void*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedOperations(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SupportedOperations(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsDisabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ProviderProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactAnnotation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactListId(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContactListId(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactAnnotationList>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderPackageFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_UserDataAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TrySaveAnnotationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAnnotationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAnnotationsByRemoteIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAnnotationsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAnnotationAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactAnnotationStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindContactIdsByEmailAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindContactIdsByPhoneNumberAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAnnotationsForContactAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DisableAnnotationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAnnotationListAsync(void**) noexcept = 0;
            virtual int32_t __stdcall CreateAnnotationListInAccountAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAnnotationListAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAnnotationListsAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactAnnotationStore2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAnnotationsForContactListAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactBatch>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Contacts(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetData(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactCardOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HeaderKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HeaderKind(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_InitialTabKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_InitialTabKind(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactCardOptions2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServerSearchContactListIds(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactChange>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactChangeReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AcceptChanges() noexcept = 0;
            virtual int32_t __stdcall AcceptChangesThrough(void*) noexcept = 0;
            virtual int32_t __stdcall ReadBatchAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactChangeTracker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Enable() noexcept = 0;
            virtual int32_t __stdcall GetChangeReader(void**) noexcept = 0;
            virtual int32_t __stdcall Reset() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactChangeTracker2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsTracking(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactChangedDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall put_Id(void*) noexcept = 0;
            virtual int32_t __stdcall get_ServiceName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ServiceName(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactDate>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Day(void**) noexcept = 0;
            virtual int32_t __stdcall put_Day(void*) noexcept = 0;
            virtual int32_t __stdcall get_Month(void**) noexcept = 0;
            virtual int32_t __stdcall put_Month(void*) noexcept = 0;
            virtual int32_t __stdcall get_Year(void**) noexcept = 0;
            virtual int32_t __stdcall put_Year(void*) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Kind(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactEmail>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Address(void**) noexcept = 0;
            virtual int32_t __stdcall put_Address(void*) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Kind(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactField>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Category(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactFieldFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateField_Default(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateField_Category(void*, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateField_Custom(void*, void*, int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall GetThumbnailAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_Emails(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhoneNumbers(void**) noexcept = 0;
            virtual int32_t __stdcall get_Locations(void**) noexcept = 0;
            virtual int32_t __stdcall get_InstantMessages(void**) noexcept = 0;
            virtual int32_t __stdcall get_CustomFields(void**) noexcept = 0;
            virtual int32_t __stdcall QueryCustomFields(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactInstantMessageField>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UserName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Service(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayText(void**) noexcept = 0;
            virtual int32_t __stdcall get_LaunchUri(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstantMessage_Default(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstantMessage_Category(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstantMessage_All(void*, int32_t, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactJobInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CompanyName(void**) noexcept = 0;
            virtual int32_t __stdcall put_CompanyName(void*) noexcept = 0;
            virtual int32_t __stdcall get_CompanyYomiName(void**) noexcept = 0;
            virtual int32_t __stdcall put_CompanyYomiName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Department(void**) noexcept = 0;
            virtual int32_t __stdcall put_Department(void*) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Manager(void**) noexcept = 0;
            virtual int32_t __stdcall put_Manager(void*) noexcept = 0;
            virtual int32_t __stdcall get_Office(void**) noexcept = 0;
            virtual int32_t __stdcall put_Office(void*) noexcept = 0;
            virtual int32_t __stdcall get_CompanyAddress(void**) noexcept = 0;
            virtual int32_t __stdcall put_CompanyAddress(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Call(void**) noexcept = 0;
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
            virtual int32_t __stdcall get_Map(void**) noexcept = 0;
            virtual int32_t __stdcall get_Post(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoCall(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactList>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_SourceDisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsHidden(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsHidden(bool) noexcept = 0;
            virtual int32_t __stdcall get_OtherAppReadAccess(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OtherAppReadAccess(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_OtherAppWriteAccess(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OtherAppWriteAccess(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ChangeTracker(void**) noexcept = 0;
            virtual int32_t __stdcall get_SyncManager(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportsServerSearch(bool*) noexcept = 0;
            virtual int32_t __stdcall get_UserDataAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall add_ContactChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ContactChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetContactFromRemoteIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetMeContactAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetContactReader(void**) noexcept = 0;
            virtual int32_t __stdcall GetContactReaderWithOptions(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SaveContactAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteContactAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetContactAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactList2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RegisterSyncManagerAsync(void**) noexcept = 0;
            virtual int32_t __stdcall put_SupportsServerSearch(bool) noexcept = 0;
            virtual int32_t __stdcall get_SyncConstraints(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactList3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LimitedWriteOperations(void**) noexcept = 0;
            virtual int32_t __stdcall GetChangeTracker(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactListLimitedWriteOperations>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCreateOrUpdateContactAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryDeleteContactAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactListSyncConstraints>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanSyncDescriptions(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanSyncDescriptions(bool) noexcept = 0;
            virtual int32_t __stdcall get_MaxHomePhoneNumbers(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxHomePhoneNumbers(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxMobilePhoneNumbers(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxMobilePhoneNumbers(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxWorkPhoneNumbers(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxWorkPhoneNumbers(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxOtherPhoneNumbers(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxOtherPhoneNumbers(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxPagerPhoneNumbers(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxPagerPhoneNumbers(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxBusinessFaxPhoneNumbers(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxBusinessFaxPhoneNumbers(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxHomeFaxPhoneNumbers(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxHomeFaxPhoneNumbers(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxCompanyPhoneNumbers(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxCompanyPhoneNumbers(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxAssistantPhoneNumbers(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxAssistantPhoneNumbers(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxRadioPhoneNumbers(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxRadioPhoneNumbers(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxPersonalEmailAddresses(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxPersonalEmailAddresses(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxWorkEmailAddresses(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxWorkEmailAddresses(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxOtherEmailAddresses(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxOtherEmailAddresses(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxHomeAddresses(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxHomeAddresses(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxWorkAddresses(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxWorkAddresses(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxOtherAddresses(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxOtherAddresses(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxBirthdayDates(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxBirthdayDates(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxAnniversaryDates(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxAnniversaryDates(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxOtherDates(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxOtherDates(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxOtherRelationships(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxOtherRelationships(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxSpouseRelationships(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxSpouseRelationships(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxPartnerRelationships(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxPartnerRelationships(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxSiblingRelationships(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxSiblingRelationships(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxParentRelationships(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxParentRelationships(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxChildRelationships(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxChildRelationships(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxJobInfo(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxJobInfo(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxWebsites(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxWebsites(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactListSyncManager>
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
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactListSyncManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Status(int32_t) noexcept = 0;
            virtual int32_t __stdcall put_LastSuccessfulSyncTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall put_LastAttemptedSyncTime(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactLocationField>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UnstructuredAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_Street(void**) noexcept = 0;
            virtual int32_t __stdcall get_City(void**) noexcept = 0;
            virtual int32_t __stdcall get_Region(void**) noexcept = 0;
            virtual int32_t __stdcall get_Country(void**) noexcept = 0;
            virtual int32_t __stdcall get_PostalCode(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactLocationFieldFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateLocation_Default(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateLocation_Category(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateLocation_All(void*, int32_t, void*, void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactManagerForUser>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ConvertContactToVCardAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ConvertContactToVCardAsyncWithMaxBytes(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ConvertVCardToContactAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestStoreAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAnnotationStoreAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemDisplayNameOrder(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SystemDisplayNameOrder(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SystemSortOrder(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SystemSortOrder(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactManagerForUser2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowFullContactCard(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowContactCard(void*, Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall ShowContactCardWithPlacement(void*, Windows::Foundation::Rect, int32_t) noexcept = 0;
            virtual int32_t __stdcall ShowDelayLoadedContactCard(void*, Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestStoreAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactManagerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ConvertContactToVCardAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ConvertContactToVCardAsyncWithMaxBytes(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ConvertVCardToContactAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestStoreAsyncWithAccessType(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAnnotationStoreAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall IsShowContactCardSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall ShowContactCardWithOptions(void*, Windows::Foundation::Rect, int32_t, void*) noexcept = 0;
            virtual int32_t __stdcall IsShowDelayLoadedContactCardSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall ShowDelayLoadedContactCardWithOptions(void*, Windows::Foundation::Rect, int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowFullContactCard(void*, void*) noexcept = 0;
            virtual int32_t __stdcall get_SystemDisplayNameOrder(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SystemDisplayNameOrder(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SystemSortOrder(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SystemSortOrder(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactManagerStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactManagerStatics5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsShowFullContactCardSupportedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_IncludeMiddleNameInSystemDisplayAndSort(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IncludeMiddleNameInSystemDisplayAndSort(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactMatchReason>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Field(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Segments(void**) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactName>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FirstName(void**) noexcept = 0;
            virtual int32_t __stdcall put_FirstName(void*) noexcept = 0;
            virtual int32_t __stdcall get_LastName(void**) noexcept = 0;
            virtual int32_t __stdcall put_LastName(void*) noexcept = 0;
            virtual int32_t __stdcall get_MiddleName(void**) noexcept = 0;
            virtual int32_t __stdcall put_MiddleName(void*) noexcept = 0;
            virtual int32_t __stdcall get_YomiGivenName(void**) noexcept = 0;
            virtual int32_t __stdcall put_YomiGivenName(void*) noexcept = 0;
            virtual int32_t __stdcall get_YomiFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall put_YomiFamilyName(void*) noexcept = 0;
            virtual int32_t __stdcall get_HonorificNameSuffix(void**) noexcept = 0;
            virtual int32_t __stdcall put_HonorificNameSuffix(void*) noexcept = 0;
            virtual int32_t __stdcall get_HonorificNamePrefix(void**) noexcept = 0;
            virtual int32_t __stdcall put_HonorificNamePrefix(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_YomiDisplayName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactPanel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ClosePanel() noexcept = 0;
            virtual int32_t __stdcall get_HeaderColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_HeaderColor(void*) noexcept = 0;
            virtual int32_t __stdcall add_LaunchFullAppRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LaunchFullAppRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Closing(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closing(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactPhone>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Number(void**) noexcept = 0;
            virtual int32_t __stdcall put_Number(void*) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Kind(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactPicker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CommitButtonText(void**) noexcept = 0;
            virtual int32_t __stdcall put_CommitButtonText(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SelectionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DesiredFields(void**) noexcept = 0;
            virtual int32_t __stdcall PickSingleContactAsync(void**) noexcept = 0;
            virtual int32_t __stdcall PickMultipleContactsAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactPicker2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesiredFieldsWithContactFieldType(void**) noexcept = 0;
            virtual int32_t __stdcall PickContactAsync(void**) noexcept = 0;
            virtual int32_t __stdcall PickContactsAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactPicker3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactPickerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForUser(void*, void**) noexcept = 0;
            virtual int32_t __stdcall IsSupportedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactQueryOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TextSearch(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContactListIds(void**) noexcept = 0;
            virtual int32_t __stdcall get_IncludeContactsFromHiddenLists(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IncludeContactsFromHiddenLists(bool) noexcept = 0;
            virtual int32_t __stdcall get_DesiredFields(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredFields(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_DesiredOperations(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredOperations(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_AnnotationListIds(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactQueryOptionsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithText(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithTextAndFields(void*, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactQueryTextSearch>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Fields(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Fields(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall put_Text(void*) noexcept = 0;
            virtual int32_t __stdcall get_SearchScope(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SearchScope(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReadBatchAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetMatchingPropertiesWithMatchReason(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactSignificantOther>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactSignificantOther2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Relationship(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Relationship(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindContactsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindContactsWithSearchTextAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetContactAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactStore2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeTracker(void**) noexcept = 0;
            virtual int32_t __stdcall add_ContactChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ContactChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_AggregateContactManager(void**) noexcept = 0;
            virtual int32_t __stdcall FindContactListsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetContactListAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateContactListAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetMeContactAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetContactReader(void**) noexcept = 0;
            virtual int32_t __stdcall GetContactReaderWithOptions(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateContactListInAccountAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactStore3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetChangeTracker(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactWebsite>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall put_Uri(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IContactWebsite2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RawValue(void**) noexcept = 0;
            virtual int32_t __stdcall put_RawValue(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IFullContactCardOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesiredRemainingView(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredRemainingView(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IKnownContactFieldStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Email(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhoneNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_InstantMessage(void**) noexcept = 0;
            virtual int32_t __stdcall ConvertNameToType(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall ConvertTypeToName(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactIds(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IPinnedContactManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
            virtual int32_t __stdcall IsPinSurfaceSupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall IsContactPinned(void*, int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall RequestPinContactAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestPinContactsAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestUnpinContactAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SignalContactActivity(void*) noexcept = 0;
            virtual int32_t __stdcall GetPinnedContactIdsAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IAggregateContactManager
    {
        auto FindRawContactsAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const;
        auto TryLinkContactsAsync(Windows::ApplicationModel::Contacts::Contact const& primaryContact, Windows::ApplicationModel::Contacts::Contact const& secondaryContact) const;
        auto UnlinkRawContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const;
        auto TrySetPreferredSourceForPictureAsync(Windows::ApplicationModel::Contacts::Contact const& aggregateContact, Windows::ApplicationModel::Contacts::Contact const& rawContact) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IAggregateContactManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IAggregateContactManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IAggregateContactManager2
    {
        auto SetRemoteIdentificationInformationAsync(param::hstring const& contactListId, param::hstring const& remoteSourceId, param::hstring const& accountId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IAggregateContactManager2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IAggregateContactManager2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContact
    {
        [[nodiscard]] auto Name() const;
        auto Name(param::hstring const& value) const;
        [[nodiscard]] auto Thumbnail() const;
        auto Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] auto Fields() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContact>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContact<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContact2
    {
        [[nodiscard]] auto Id() const;
        auto Id(param::hstring const& value) const;
        [[nodiscard]] auto Notes() const;
        auto Notes(param::hstring const& value) const;
        [[nodiscard]] auto Phones() const;
        [[nodiscard]] auto Emails() const;
        [[nodiscard]] auto Addresses() const;
        [[nodiscard]] auto ConnectedServiceAccounts() const;
        [[nodiscard]] auto ImportantDates() const;
        [[nodiscard]] auto DataSuppliers() const;
        [[nodiscard]] auto JobInfo() const;
        [[nodiscard]] auto SignificantOthers() const;
        [[nodiscard]] auto Websites() const;
        [[nodiscard]] auto ProviderProperties() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContact2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContact2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContact3
    {
        [[nodiscard]] auto ContactListId() const;
        [[nodiscard]] auto DisplayPictureUserUpdateTime() const;
        auto DisplayPictureUserUpdateTime(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] auto IsMe() const;
        [[nodiscard]] auto AggregateId() const;
        [[nodiscard]] auto RemoteId() const;
        auto RemoteId(param::hstring const& value) const;
        [[nodiscard]] auto RingToneToken() const;
        auto RingToneToken(param::hstring const& value) const;
        [[nodiscard]] auto IsDisplayPictureManuallySet() const;
        [[nodiscard]] auto LargeDisplayPicture() const;
        [[nodiscard]] auto SmallDisplayPicture() const;
        [[nodiscard]] auto SourceDisplayPicture() const;
        auto SourceDisplayPicture(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] auto TextToneToken() const;
        auto TextToneToken(param::hstring const& value) const;
        [[nodiscard]] auto IsAggregate() const;
        [[nodiscard]] auto FullName() const;
        [[nodiscard]] auto DisplayNameOverride() const;
        auto DisplayNameOverride(param::hstring const& value) const;
        [[nodiscard]] auto Nickname() const;
        auto Nickname(param::hstring const& value) const;
        [[nodiscard]] auto SortName() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContact3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContact3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactAddress
    {
        [[nodiscard]] auto StreetAddress() const;
        auto StreetAddress(param::hstring const& value) const;
        [[nodiscard]] auto Locality() const;
        auto Locality(param::hstring const& value) const;
        [[nodiscard]] auto Region() const;
        auto Region(param::hstring const& value) const;
        [[nodiscard]] auto Country() const;
        auto Country(param::hstring const& value) const;
        [[nodiscard]] auto PostalCode() const;
        auto PostalCode(param::hstring const& value) const;
        [[nodiscard]] auto Kind() const;
        auto Kind(Windows::ApplicationModel::Contacts::ContactAddressKind const& value) const;
        [[nodiscard]] auto Description() const;
        auto Description(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactAddress>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactAddress<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactAnnotation
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto AnnotationListId() const;
        [[nodiscard]] auto ContactId() const;
        auto ContactId(param::hstring const& value) const;
        [[nodiscard]] auto RemoteId() const;
        auto RemoteId(param::hstring const& value) const;
        [[nodiscard]] auto SupportedOperations() const;
        auto SupportedOperations(Windows::ApplicationModel::Contacts::ContactAnnotationOperations const& value) const;
        [[nodiscard]] auto IsDisabled() const;
        [[nodiscard]] auto ProviderProperties() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactAnnotation>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactAnnotation<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactAnnotation2
    {
        [[nodiscard]] auto ContactListId() const;
        auto ContactListId(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactAnnotation2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactAnnotation2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactAnnotationList
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto ProviderPackageFamilyName() const;
        [[nodiscard]] auto UserDataAccountId() const;
        auto DeleteAsync() const;
        auto TrySaveAnnotationAsync(Windows::ApplicationModel::Contacts::ContactAnnotation const& annotation) const;
        auto GetAnnotationAsync(param::hstring const& annotationId) const;
        auto FindAnnotationsByRemoteIdAsync(param::hstring const& remoteId) const;
        auto FindAnnotationsAsync() const;
        auto DeleteAnnotationAsync(Windows::ApplicationModel::Contacts::ContactAnnotation const& annotation) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactAnnotationList>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactAnnotationList<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactAnnotationStore
    {
        auto FindContactIdsByEmailAsync(param::hstring const& emailAddress) const;
        auto FindContactIdsByPhoneNumberAsync(param::hstring const& phoneNumber) const;
        auto FindAnnotationsForContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const;
        auto DisableAnnotationAsync(Windows::ApplicationModel::Contacts::ContactAnnotation const& annotation) const;
        auto CreateAnnotationListAsync() const;
        auto CreateAnnotationListAsync(param::hstring const& userDataAccountId) const;
        auto GetAnnotationListAsync(param::hstring const& annotationListId) const;
        auto FindAnnotationListsAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactAnnotationStore>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactAnnotationStore<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactAnnotationStore2
    {
        auto FindAnnotationsForContactListAsync(param::hstring const& contactListId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactAnnotationStore2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactAnnotationStore2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactBatch
    {
        [[nodiscard]] auto Contacts() const;
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactBatch>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactBatch<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactCardDelayedDataLoader
    {
        auto SetData(Windows::ApplicationModel::Contacts::Contact const& contact) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactCardDelayedDataLoader<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactCardOptions
    {
        [[nodiscard]] auto HeaderKind() const;
        auto HeaderKind(Windows::ApplicationModel::Contacts::ContactCardHeaderKind const& value) const;
        [[nodiscard]] auto InitialTabKind() const;
        auto InitialTabKind(Windows::ApplicationModel::Contacts::ContactCardTabKind const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactCardOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactCardOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactCardOptions2
    {
        [[nodiscard]] auto ServerSearchContactListIds() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactCardOptions2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactCardOptions2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactChange
    {
        [[nodiscard]] auto ChangeType() const;
        [[nodiscard]] auto Contact() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactChange>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactChange<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactChangeReader
    {
        auto AcceptChanges() const;
        auto AcceptChangesThrough(Windows::ApplicationModel::Contacts::ContactChange const& lastChangeToAccept) const;
        auto ReadBatchAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactChangeReader>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactChangeReader<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactChangeTracker
    {
        auto Enable() const;
        auto GetChangeReader() const;
        auto Reset() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactChangeTracker>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactChangeTracker<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactChangeTracker2
    {
        [[nodiscard]] auto IsTracking() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactChangeTracker2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactChangeTracker2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactChangedDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactChangedDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactChangedDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactChangedEventArgs
    {
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactConnectedServiceAccount
    {
        [[nodiscard]] auto Id() const;
        auto Id(param::hstring const& value) const;
        [[nodiscard]] auto ServiceName() const;
        auto ServiceName(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactConnectedServiceAccount<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactDate
    {
        [[nodiscard]] auto Day() const;
        auto Day(Windows::Foundation::IReference<uint32_t> const& value) const;
        [[nodiscard]] auto Month() const;
        auto Month(Windows::Foundation::IReference<uint32_t> const& value) const;
        [[nodiscard]] auto Year() const;
        auto Year(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto Kind() const;
        auto Kind(Windows::ApplicationModel::Contacts::ContactDateKind const& value) const;
        [[nodiscard]] auto Description() const;
        auto Description(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactDate>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactDate<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactEmail
    {
        [[nodiscard]] auto Address() const;
        auto Address(param::hstring const& value) const;
        [[nodiscard]] auto Kind() const;
        auto Kind(Windows::ApplicationModel::Contacts::ContactEmailKind const& value) const;
        [[nodiscard]] auto Description() const;
        auto Description(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactEmail>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactEmail<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactField
    {
        [[nodiscard]] auto Type() const;
        [[nodiscard]] auto Category() const;
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto Value() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactField>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactField<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactFieldFactory
    {
        auto CreateField(param::hstring const& value, Windows::ApplicationModel::Contacts::ContactFieldType const& type) const;
        auto CreateField(param::hstring const& value, Windows::ApplicationModel::Contacts::ContactFieldType const& type, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category) const;
        auto CreateField(param::hstring const& name, param::hstring const& value, Windows::ApplicationModel::Contacts::ContactFieldType const& type, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactFieldFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactFieldFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactGroup
    {
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactGroup>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactGroup<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactInformation
    {
        [[nodiscard]] auto Name() const;
        auto GetThumbnailAsync() const;
        [[nodiscard]] auto Emails() const;
        [[nodiscard]] auto PhoneNumbers() const;
        [[nodiscard]] auto Locations() const;
        [[nodiscard]] auto InstantMessages() const;
        [[nodiscard]] auto CustomFields() const;
        auto QueryCustomFields(param::hstring const& customName) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactInformation>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactInformation<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactInstantMessageField
    {
        [[nodiscard]] auto UserName() const;
        [[nodiscard]] auto Service() const;
        [[nodiscard]] auto DisplayText() const;
        [[nodiscard]] auto LaunchUri() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactInstantMessageField>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactInstantMessageField<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactInstantMessageFieldFactory
    {
        auto CreateInstantMessage(param::hstring const& userName) const;
        auto CreateInstantMessage(param::hstring const& userName, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category) const;
        auto CreateInstantMessage(param::hstring const& userName, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category, param::hstring const& service, param::hstring const& displayText, Windows::Foundation::Uri const& verb) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactInstantMessageFieldFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactJobInfo
    {
        [[nodiscard]] auto CompanyName() const;
        auto CompanyName(param::hstring const& value) const;
        [[nodiscard]] auto CompanyYomiName() const;
        auto CompanyYomiName(param::hstring const& value) const;
        [[nodiscard]] auto Department() const;
        auto Department(param::hstring const& value) const;
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Manager() const;
        auto Manager(param::hstring const& value) const;
        [[nodiscard]] auto Office() const;
        auto Office(param::hstring const& value) const;
        [[nodiscard]] auto CompanyAddress() const;
        auto CompanyAddress(param::hstring const& value) const;
        [[nodiscard]] auto Description() const;
        auto Description(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactJobInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactJobInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactLaunchActionVerbsStatics
    {
        [[nodiscard]] auto Call() const;
        [[nodiscard]] auto Message() const;
        [[nodiscard]] auto Map() const;
        [[nodiscard]] auto Post() const;
        [[nodiscard]] auto VideoCall() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactLaunchActionVerbsStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactLaunchActionVerbsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactList
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto DisplayName() const;
        auto DisplayName(param::hstring const& value) const;
        [[nodiscard]] auto SourceDisplayName() const;
        [[nodiscard]] auto IsHidden() const;
        auto IsHidden(bool value) const;
        [[nodiscard]] auto OtherAppReadAccess() const;
        auto OtherAppReadAccess(Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess const& value) const;
        [[nodiscard]] auto OtherAppWriteAccess() const;
        auto OtherAppWriteAccess(Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess const& value) const;
        [[nodiscard]] auto ChangeTracker() const;
        [[nodiscard]] auto SyncManager() const;
        [[nodiscard]] auto SupportsServerSearch() const;
        [[nodiscard]] auto UserDataAccountId() const;
        auto ContactChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactList, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> const& value) const;
        using ContactChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Contacts::IContactList, &impl::abi_t<Windows::ApplicationModel::Contacts::IContactList>::remove_ContactChanged>;
        ContactChanged_revoker ContactChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactList, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> const& value) const;
        auto ContactChanged(winrt::event_token const& value) const noexcept;
        auto SaveAsync() const;
        auto DeleteAsync() const;
        auto GetContactFromRemoteIdAsync(param::hstring const& remoteId) const;
        auto GetMeContactAsync() const;
        auto GetContactReader() const;
        auto GetContactReader(Windows::ApplicationModel::Contacts::ContactQueryOptions const& options) const;
        auto SaveContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const;
        auto DeleteContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const;
        auto GetContactAsync(param::hstring const& contactId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactList>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactList<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactList2
    {
        auto RegisterSyncManagerAsync() const;
        auto SupportsServerSearch(bool value) const;
        [[nodiscard]] auto SyncConstraints() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactList2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactList2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactList3
    {
        [[nodiscard]] auto LimitedWriteOperations() const;
        auto GetChangeTracker(param::hstring const& identity) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactList3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactList3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactListLimitedWriteOperations
    {
        auto TryCreateOrUpdateContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const;
        auto TryDeleteContactAsync(param::hstring const& contactId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactListLimitedWriteOperations>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactListLimitedWriteOperations<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints
    {
        [[nodiscard]] auto CanSyncDescriptions() const;
        auto CanSyncDescriptions(bool value) const;
        [[nodiscard]] auto MaxHomePhoneNumbers() const;
        auto MaxHomePhoneNumbers(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxMobilePhoneNumbers() const;
        auto MaxMobilePhoneNumbers(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxWorkPhoneNumbers() const;
        auto MaxWorkPhoneNumbers(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxOtherPhoneNumbers() const;
        auto MaxOtherPhoneNumbers(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxPagerPhoneNumbers() const;
        auto MaxPagerPhoneNumbers(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxBusinessFaxPhoneNumbers() const;
        auto MaxBusinessFaxPhoneNumbers(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxHomeFaxPhoneNumbers() const;
        auto MaxHomeFaxPhoneNumbers(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxCompanyPhoneNumbers() const;
        auto MaxCompanyPhoneNumbers(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxAssistantPhoneNumbers() const;
        auto MaxAssistantPhoneNumbers(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxRadioPhoneNumbers() const;
        auto MaxRadioPhoneNumbers(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxPersonalEmailAddresses() const;
        auto MaxPersonalEmailAddresses(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxWorkEmailAddresses() const;
        auto MaxWorkEmailAddresses(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxOtherEmailAddresses() const;
        auto MaxOtherEmailAddresses(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxHomeAddresses() const;
        auto MaxHomeAddresses(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxWorkAddresses() const;
        auto MaxWorkAddresses(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxOtherAddresses() const;
        auto MaxOtherAddresses(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxBirthdayDates() const;
        auto MaxBirthdayDates(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxAnniversaryDates() const;
        auto MaxAnniversaryDates(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxOtherDates() const;
        auto MaxOtherDates(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxOtherRelationships() const;
        auto MaxOtherRelationships(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxSpouseRelationships() const;
        auto MaxSpouseRelationships(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxPartnerRelationships() const;
        auto MaxPartnerRelationships(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxSiblingRelationships() const;
        auto MaxSiblingRelationships(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxParentRelationships() const;
        auto MaxParentRelationships(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxChildRelationships() const;
        auto MaxChildRelationships(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxJobInfo() const;
        auto MaxJobInfo(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxWebsites() const;
        auto MaxWebsites(Windows::Foundation::IReference<int32_t> const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactListSyncConstraints>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactListSyncConstraints<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactListSyncManager
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto LastSuccessfulSyncTime() const;
        [[nodiscard]] auto LastAttemptedSyncTime() const;
        auto SyncAsync() const;
        auto SyncStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactListSyncManager, Windows::Foundation::IInspectable> const& handler) const;
        using SyncStatusChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Contacts::IContactListSyncManager, &impl::abi_t<Windows::ApplicationModel::Contacts::IContactListSyncManager>::remove_SyncStatusChanged>;
        SyncStatusChanged_revoker SyncStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactListSyncManager, Windows::Foundation::IInspectable> const& handler) const;
        auto SyncStatusChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactListSyncManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactListSyncManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactListSyncManager2
    {
        auto Status(Windows::ApplicationModel::Contacts::ContactListSyncStatus const& value) const;
        auto LastSuccessfulSyncTime(Windows::Foundation::DateTime const& value) const;
        auto LastAttemptedSyncTime(Windows::Foundation::DateTime const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactListSyncManager2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactListSyncManager2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactLocationField
    {
        [[nodiscard]] auto UnstructuredAddress() const;
        [[nodiscard]] auto Street() const;
        [[nodiscard]] auto City() const;
        [[nodiscard]] auto Region() const;
        [[nodiscard]] auto Country() const;
        [[nodiscard]] auto PostalCode() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactLocationField>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactLocationField<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactLocationFieldFactory
    {
        auto CreateLocation(param::hstring const& unstructuredAddress) const;
        auto CreateLocation(param::hstring const& unstructuredAddress, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category) const;
        auto CreateLocation(param::hstring const& unstructuredAddress, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category, param::hstring const& street, param::hstring const& city, param::hstring const& region, param::hstring const& country, param::hstring const& postalCode) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactLocationFieldFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactLocationFieldFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactManagerForUser
    {
        auto ConvertContactToVCardAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const;
        auto ConvertContactToVCardAsync(Windows::ApplicationModel::Contacts::Contact const& contact, uint32_t maxBytes) const;
        auto ConvertVCardToContactAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& vCard) const;
        auto RequestStoreAsync(Windows::ApplicationModel::Contacts::ContactStoreAccessType const& accessType) const;
        auto RequestAnnotationStoreAsync(Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType const& accessType) const;
        [[nodiscard]] auto SystemDisplayNameOrder() const;
        auto SystemDisplayNameOrder(Windows::ApplicationModel::Contacts::ContactNameOrder const& value) const;
        [[nodiscard]] auto SystemSortOrder() const;
        auto SystemSortOrder(Windows::ApplicationModel::Contacts::ContactNameOrder const& value) const;
        [[nodiscard]] auto User() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactManagerForUser>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactManagerForUser<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactManagerForUser2
    {
        auto ShowFullContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::ApplicationModel::Contacts::FullContactCardOptions const& fullContactCardOptions) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactManagerForUser2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactManagerForUser2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactManagerStatics
    {
        auto ShowContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection) const;
        auto ShowContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
        auto ShowDelayLoadedContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactManagerStatics2
    {
        auto RequestStoreAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactManagerStatics3
    {
        auto ConvertContactToVCardAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const;
        auto ConvertContactToVCardAsync(Windows::ApplicationModel::Contacts::Contact const& contact, uint32_t maxBytes) const;
        auto ConvertVCardToContactAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& vCard) const;
        auto RequestStoreAsync(Windows::ApplicationModel::Contacts::ContactStoreAccessType const& accessType) const;
        auto RequestAnnotationStoreAsync(Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType const& accessType) const;
        auto IsShowContactCardSupported() const;
        auto ShowContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::ApplicationModel::Contacts::ContactCardOptions const& contactCardOptions) const;
        auto IsShowDelayLoadedContactCardSupported() const;
        auto ShowDelayLoadedContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::ApplicationModel::Contacts::ContactCardOptions const& contactCardOptions) const;
        auto ShowFullContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::ApplicationModel::Contacts::FullContactCardOptions const& fullContactCardOptions) const;
        [[nodiscard]] auto SystemDisplayNameOrder() const;
        auto SystemDisplayNameOrder(Windows::ApplicationModel::Contacts::ContactNameOrder const& value) const;
        [[nodiscard]] auto SystemSortOrder() const;
        auto SystemSortOrder(Windows::ApplicationModel::Contacts::ContactNameOrder const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactManagerStatics3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactManagerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactManagerStatics4
    {
        auto GetForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactManagerStatics4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactManagerStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactManagerStatics5
    {
        auto IsShowFullContactCardSupportedAsync() const;
        [[nodiscard]] auto IncludeMiddleNameInSystemDisplayAndSort() const;
        auto IncludeMiddleNameInSystemDisplayAndSort(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactManagerStatics5>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactManagerStatics5<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactMatchReason
    {
        [[nodiscard]] auto Field() const;
        [[nodiscard]] auto Segments() const;
        [[nodiscard]] auto Text() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactMatchReason>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactMatchReason<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactName
    {
        [[nodiscard]] auto FirstName() const;
        auto FirstName(param::hstring const& value) const;
        [[nodiscard]] auto LastName() const;
        auto LastName(param::hstring const& value) const;
        [[nodiscard]] auto MiddleName() const;
        auto MiddleName(param::hstring const& value) const;
        [[nodiscard]] auto YomiGivenName() const;
        auto YomiGivenName(param::hstring const& value) const;
        [[nodiscard]] auto YomiFamilyName() const;
        auto YomiFamilyName(param::hstring const& value) const;
        [[nodiscard]] auto HonorificNameSuffix() const;
        auto HonorificNameSuffix(param::hstring const& value) const;
        [[nodiscard]] auto HonorificNamePrefix() const;
        auto HonorificNamePrefix(param::hstring const& value) const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto YomiDisplayName() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactName>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactName<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactPanel
    {
        auto ClosePanel() const;
        [[nodiscard]] auto HeaderColor() const;
        auto HeaderColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        auto LaunchFullAppRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactPanel, Windows::ApplicationModel::Contacts::ContactPanelLaunchFullAppRequestedEventArgs> const& handler) const;
        using LaunchFullAppRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Contacts::IContactPanel, &impl::abi_t<Windows::ApplicationModel::Contacts::IContactPanel>::remove_LaunchFullAppRequested>;
        LaunchFullAppRequested_revoker LaunchFullAppRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactPanel, Windows::ApplicationModel::Contacts::ContactPanelLaunchFullAppRequestedEventArgs> const& handler) const;
        auto LaunchFullAppRequested(winrt::event_token const& token) const noexcept;
        auto Closing(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactPanel, Windows::ApplicationModel::Contacts::ContactPanelClosingEventArgs> const& handler) const;
        using Closing_revoker = impl::event_revoker<Windows::ApplicationModel::Contacts::IContactPanel, &impl::abi_t<Windows::ApplicationModel::Contacts::IContactPanel>::remove_Closing>;
        Closing_revoker Closing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactPanel, Windows::ApplicationModel::Contacts::ContactPanelClosingEventArgs> const& handler) const;
        auto Closing(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactPanel>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactPanel<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactPanelClosingEventArgs
    {
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactPanelClosingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactPanelLaunchFullAppRequestedEventArgs
    {
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactPanelLaunchFullAppRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactPhone
    {
        [[nodiscard]] auto Number() const;
        auto Number(param::hstring const& value) const;
        [[nodiscard]] auto Kind() const;
        auto Kind(Windows::ApplicationModel::Contacts::ContactPhoneKind const& value) const;
        [[nodiscard]] auto Description() const;
        auto Description(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactPhone>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactPhone<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactPicker
    {
        [[nodiscard]] auto CommitButtonText() const;
        auto CommitButtonText(param::hstring const& value) const;
        [[nodiscard]] auto SelectionMode() const;
        auto SelectionMode(Windows::ApplicationModel::Contacts::ContactSelectionMode const& value) const;
        [[nodiscard]] auto DesiredFields() const;
        auto PickSingleContactAsync() const;
        auto PickMultipleContactsAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactPicker>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactPicker<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactPicker2
    {
        [[nodiscard]] auto DesiredFieldsWithContactFieldType() const;
        auto PickContactAsync() const;
        auto PickContactsAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactPicker2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactPicker2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactPicker3
    {
        [[nodiscard]] auto User() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactPicker3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactPicker3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactPickerStatics
    {
        auto CreateForUser(Windows::System::User const& user) const;
        auto IsSupportedAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactPickerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactPickerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactQueryOptions
    {
        [[nodiscard]] auto TextSearch() const;
        [[nodiscard]] auto ContactListIds() const;
        [[nodiscard]] auto IncludeContactsFromHiddenLists() const;
        auto IncludeContactsFromHiddenLists(bool value) const;
        [[nodiscard]] auto DesiredFields() const;
        auto DesiredFields(Windows::ApplicationModel::Contacts::ContactQueryDesiredFields const& value) const;
        [[nodiscard]] auto DesiredOperations() const;
        auto DesiredOperations(Windows::ApplicationModel::Contacts::ContactAnnotationOperations const& value) const;
        [[nodiscard]] auto AnnotationListIds() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactQueryOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactQueryOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactQueryOptionsFactory
    {
        auto CreateWithText(param::hstring const& text) const;
        auto CreateWithTextAndFields(param::hstring const& text, Windows::ApplicationModel::Contacts::ContactQuerySearchFields const& fields) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactQueryOptionsFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactQueryOptionsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactQueryTextSearch
    {
        [[nodiscard]] auto Fields() const;
        auto Fields(Windows::ApplicationModel::Contacts::ContactQuerySearchFields const& value) const;
        [[nodiscard]] auto Text() const;
        auto Text(param::hstring const& value) const;
        [[nodiscard]] auto SearchScope() const;
        auto SearchScope(Windows::ApplicationModel::Contacts::ContactQuerySearchScope const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactQueryTextSearch>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactQueryTextSearch<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactReader
    {
        auto ReadBatchAsync() const;
        auto GetMatchingPropertiesWithMatchReason(Windows::ApplicationModel::Contacts::Contact const& contact) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactReader>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactReader<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactSignificantOther
    {
        [[nodiscard]] auto Name() const;
        auto Name(param::hstring const& value) const;
        [[nodiscard]] auto Description() const;
        auto Description(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactSignificantOther>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactSignificantOther<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactSignificantOther2
    {
        [[nodiscard]] auto Relationship() const;
        auto Relationship(Windows::ApplicationModel::Contacts::ContactRelationship const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactSignificantOther2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactSignificantOther2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactStore
    {
        auto FindContactsAsync() const;
        auto FindContactsAsync(param::hstring const& searchText) const;
        auto GetContactAsync(param::hstring const& contactId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactStore>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactStore<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactStore2
    {
        [[nodiscard]] auto ChangeTracker() const;
        auto ContactChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactStore, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> const& value) const;
        using ContactChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Contacts::IContactStore2, &impl::abi_t<Windows::ApplicationModel::Contacts::IContactStore2>::remove_ContactChanged>;
        ContactChanged_revoker ContactChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::ContactStore, Windows::ApplicationModel::Contacts::ContactChangedEventArgs> const& value) const;
        auto ContactChanged(winrt::event_token const& value) const noexcept;
        [[nodiscard]] auto AggregateContactManager() const;
        auto FindContactListsAsync() const;
        auto GetContactListAsync(param::hstring const& contactListId) const;
        auto CreateContactListAsync(param::hstring const& displayName) const;
        auto GetMeContactAsync() const;
        auto GetContactReader() const;
        auto GetContactReader(Windows::ApplicationModel::Contacts::ContactQueryOptions const& options) const;
        auto CreateContactListAsync(param::hstring const& displayName, param::hstring const& userDataAccountId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactStore2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactStore2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactStore3
    {
        auto GetChangeTracker(param::hstring const& identity) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactStore3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactStore3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactStoreNotificationTriggerDetails
    {
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactStoreNotificationTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactWebsite
    {
        [[nodiscard]] auto Uri() const;
        auto Uri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto Description() const;
        auto Description(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactWebsite>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactWebsite<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IContactWebsite2
    {
        [[nodiscard]] auto RawValue() const;
        auto RawValue(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IContactWebsite2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IContactWebsite2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IFullContactCardOptions
    {
        [[nodiscard]] auto DesiredRemainingView() const;
        auto DesiredRemainingView(Windows::UI::ViewManagement::ViewSizePreference const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IFullContactCardOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IFullContactCardOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IKnownContactFieldStatics
    {
        [[nodiscard]] auto Email() const;
        [[nodiscard]] auto PhoneNumber() const;
        [[nodiscard]] auto Location() const;
        [[nodiscard]] auto InstantMessage() const;
        auto ConvertNameToType(param::hstring const& name) const;
        auto ConvertTypeToName(Windows::ApplicationModel::Contacts::ContactFieldType const& type) const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IKnownContactFieldStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IKnownContactFieldStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IPinnedContactIdsQueryResult
    {
        [[nodiscard]] auto ContactIds() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IPinnedContactIdsQueryResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IPinnedContactManager
    {
        [[nodiscard]] auto User() const;
        auto IsPinSurfaceSupported(Windows::ApplicationModel::Contacts::PinnedContactSurface const& surface) const;
        auto IsContactPinned(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::ApplicationModel::Contacts::PinnedContactSurface const& surface) const;
        auto RequestPinContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::ApplicationModel::Contacts::PinnedContactSurface const& surface) const;
        auto RequestPinContactsAsync(param::async_iterable<Windows::ApplicationModel::Contacts::Contact> const& contacts, Windows::ApplicationModel::Contacts::PinnedContactSurface const& surface) const;
        auto RequestUnpinContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::ApplicationModel::Contacts::PinnedContactSurface const& surface) const;
        auto SignalContactActivity(Windows::ApplicationModel::Contacts::Contact const& contact) const;
        auto GetPinnedContactIdsAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IPinnedContactManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IPinnedContactManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_IPinnedContactManagerStatics
    {
        auto GetDefault() const;
        auto GetForUser(Windows::System::User const& user) const;
        auto IsSupported() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::IPinnedContactManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_IPinnedContactManagerStatics<D>;
    };
}
#endif
