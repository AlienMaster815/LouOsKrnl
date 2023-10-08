// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Contacts_2_H
#define WINRT_Windows_ApplicationModel_Contacts_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.UI.Popups.1.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts
{
    struct __declspec(empty_bases) AggregateContactManager : Windows::ApplicationModel::Contacts::IAggregateContactManager,
        impl::require<AggregateContactManager, Windows::ApplicationModel::Contacts::IAggregateContactManager2>
    {
        AggregateContactManager(std::nullptr_t) noexcept {}
        AggregateContactManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IAggregateContactManager(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Contact : Windows::ApplicationModel::Contacts::IContact,
        impl::require<Contact, Windows::ApplicationModel::Contacts::IContact2, Windows::ApplicationModel::Contacts::IContactName, Windows::ApplicationModel::Contacts::IContact3>
    {
        Contact(std::nullptr_t) noexcept {}
        Contact(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContact(ptr, take_ownership_from_abi) {}
        Contact();
    };
    struct __declspec(empty_bases) ContactAddress : Windows::ApplicationModel::Contacts::IContactAddress
    {
        ContactAddress(std::nullptr_t) noexcept {}
        ContactAddress(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactAddress(ptr, take_ownership_from_abi) {}
        ContactAddress();
    };
    struct __declspec(empty_bases) ContactAnnotation : Windows::ApplicationModel::Contacts::IContactAnnotation,
        impl::require<ContactAnnotation, Windows::ApplicationModel::Contacts::IContactAnnotation2>
    {
        ContactAnnotation(std::nullptr_t) noexcept {}
        ContactAnnotation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactAnnotation(ptr, take_ownership_from_abi) {}
        ContactAnnotation();
    };
    struct __declspec(empty_bases) ContactAnnotationList : Windows::ApplicationModel::Contacts::IContactAnnotationList
    {
        ContactAnnotationList(std::nullptr_t) noexcept {}
        ContactAnnotationList(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactAnnotationList(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactAnnotationStore : Windows::ApplicationModel::Contacts::IContactAnnotationStore,
        impl::require<ContactAnnotationStore, Windows::ApplicationModel::Contacts::IContactAnnotationStore2>
    {
        ContactAnnotationStore(std::nullptr_t) noexcept {}
        ContactAnnotationStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactAnnotationStore(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactBatch : Windows::ApplicationModel::Contacts::IContactBatch
    {
        ContactBatch(std::nullptr_t) noexcept {}
        ContactBatch(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactBatch(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactCardDelayedDataLoader : Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader
    {
        ContactCardDelayedDataLoader(std::nullptr_t) noexcept {}
        ContactCardDelayedDataLoader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactCardOptions : Windows::ApplicationModel::Contacts::IContactCardOptions,
        impl::require<ContactCardOptions, Windows::ApplicationModel::Contacts::IContactCardOptions2>
    {
        ContactCardOptions(std::nullptr_t) noexcept {}
        ContactCardOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactCardOptions(ptr, take_ownership_from_abi) {}
        ContactCardOptions();
    };
    struct __declspec(empty_bases) ContactChange : Windows::ApplicationModel::Contacts::IContactChange
    {
        ContactChange(std::nullptr_t) noexcept {}
        ContactChange(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactChange(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactChangeReader : Windows::ApplicationModel::Contacts::IContactChangeReader
    {
        ContactChangeReader(std::nullptr_t) noexcept {}
        ContactChangeReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactChangeReader(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactChangeTracker : Windows::ApplicationModel::Contacts::IContactChangeTracker,
        impl::require<ContactChangeTracker, Windows::ApplicationModel::Contacts::IContactChangeTracker2>
    {
        ContactChangeTracker(std::nullptr_t) noexcept {}
        ContactChangeTracker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactChangeTracker(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactChangedDeferral : Windows::ApplicationModel::Contacts::IContactChangedDeferral
    {
        ContactChangedDeferral(std::nullptr_t) noexcept {}
        ContactChangedDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactChangedDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactChangedEventArgs : Windows::ApplicationModel::Contacts::IContactChangedEventArgs
    {
        ContactChangedEventArgs(std::nullptr_t) noexcept {}
        ContactChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactConnectedServiceAccount : Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount
    {
        ContactConnectedServiceAccount(std::nullptr_t) noexcept {}
        ContactConnectedServiceAccount(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount(ptr, take_ownership_from_abi) {}
        ContactConnectedServiceAccount();
    };
    struct __declspec(empty_bases) ContactDate : Windows::ApplicationModel::Contacts::IContactDate
    {
        ContactDate(std::nullptr_t) noexcept {}
        ContactDate(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactDate(ptr, take_ownership_from_abi) {}
        ContactDate();
    };
    struct __declspec(empty_bases) ContactEmail : Windows::ApplicationModel::Contacts::IContactEmail
    {
        ContactEmail(std::nullptr_t) noexcept {}
        ContactEmail(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactEmail(ptr, take_ownership_from_abi) {}
        ContactEmail();
    };
    struct __declspec(empty_bases) ContactField : Windows::ApplicationModel::Contacts::IContactField
    {
        ContactField(std::nullptr_t) noexcept {}
        ContactField(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactField(ptr, take_ownership_from_abi) {}
        ContactField(param::hstring const& value, Windows::ApplicationModel::Contacts::ContactFieldType const& type);
        ContactField(param::hstring const& value, Windows::ApplicationModel::Contacts::ContactFieldType const& type, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category);
        ContactField(param::hstring const& name, param::hstring const& value, Windows::ApplicationModel::Contacts::ContactFieldType const& type, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category);
    };
    struct __declspec(empty_bases) ContactFieldFactory : Windows::ApplicationModel::Contacts::IContactFieldFactory,
        impl::require<ContactFieldFactory, Windows::ApplicationModel::Contacts::IContactLocationFieldFactory, Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory>
    {
        ContactFieldFactory(std::nullptr_t) noexcept {}
        ContactFieldFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactFieldFactory(ptr, take_ownership_from_abi) {}
        ContactFieldFactory();
    };
    struct __declspec(empty_bases) ContactGroup : Windows::ApplicationModel::Contacts::IContactGroup
    {
        ContactGroup(std::nullptr_t) noexcept {}
        ContactGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactGroup(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactInformation : Windows::ApplicationModel::Contacts::IContactInformation
    {
        ContactInformation(std::nullptr_t) noexcept {}
        ContactInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactInformation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactInstantMessageField : Windows::ApplicationModel::Contacts::IContactInstantMessageField
    {
        ContactInstantMessageField(std::nullptr_t) noexcept {}
        ContactInstantMessageField(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactInstantMessageField(ptr, take_ownership_from_abi) {}
        explicit ContactInstantMessageField(param::hstring const& userName);
        ContactInstantMessageField(param::hstring const& userName, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category);
        ContactInstantMessageField(param::hstring const& userName, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category, param::hstring const& service, param::hstring const& displayText, Windows::Foundation::Uri const& verb);
    };
    struct __declspec(empty_bases) ContactJobInfo : Windows::ApplicationModel::Contacts::IContactJobInfo
    {
        ContactJobInfo(std::nullptr_t) noexcept {}
        ContactJobInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactJobInfo(ptr, take_ownership_from_abi) {}
        ContactJobInfo();
    };
    struct ContactLaunchActionVerbs
    {
        ContactLaunchActionVerbs() = delete;
        [[nodiscard]] static auto Call();
        [[nodiscard]] static auto Message();
        [[nodiscard]] static auto Map();
        [[nodiscard]] static auto Post();
        [[nodiscard]] static auto VideoCall();
    };
    struct __declspec(empty_bases) ContactList : Windows::ApplicationModel::Contacts::IContactList,
        impl::require<ContactList, Windows::ApplicationModel::Contacts::IContactList2, Windows::ApplicationModel::Contacts::IContactList3>
    {
        ContactList(std::nullptr_t) noexcept {}
        ContactList(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactList(ptr, take_ownership_from_abi) {}
        using Windows::ApplicationModel::Contacts::IContactList::SupportsServerSearch;
        using impl::consume_t<ContactList, Windows::ApplicationModel::Contacts::IContactList2>::SupportsServerSearch;
    };
    struct __declspec(empty_bases) ContactListLimitedWriteOperations : Windows::ApplicationModel::Contacts::IContactListLimitedWriteOperations
    {
        ContactListLimitedWriteOperations(std::nullptr_t) noexcept {}
        ContactListLimitedWriteOperations(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactListLimitedWriteOperations(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactListSyncConstraints : Windows::ApplicationModel::Contacts::IContactListSyncConstraints
    {
        ContactListSyncConstraints(std::nullptr_t) noexcept {}
        ContactListSyncConstraints(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactListSyncConstraints(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactListSyncManager : Windows::ApplicationModel::Contacts::IContactListSyncManager,
        impl::require<ContactListSyncManager, Windows::ApplicationModel::Contacts::IContactListSyncManager2>
    {
        ContactListSyncManager(std::nullptr_t) noexcept {}
        ContactListSyncManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactListSyncManager(ptr, take_ownership_from_abi) {}
        using Windows::ApplicationModel::Contacts::IContactListSyncManager::LastAttemptedSyncTime;
        using impl::consume_t<ContactListSyncManager, Windows::ApplicationModel::Contacts::IContactListSyncManager2>::LastAttemptedSyncTime;
        using Windows::ApplicationModel::Contacts::IContactListSyncManager::LastSuccessfulSyncTime;
        using impl::consume_t<ContactListSyncManager, Windows::ApplicationModel::Contacts::IContactListSyncManager2>::LastSuccessfulSyncTime;
        using Windows::ApplicationModel::Contacts::IContactListSyncManager::Status;
        using impl::consume_t<ContactListSyncManager, Windows::ApplicationModel::Contacts::IContactListSyncManager2>::Status;
    };
    struct __declspec(empty_bases) ContactLocationField : Windows::ApplicationModel::Contacts::IContactLocationField
    {
        ContactLocationField(std::nullptr_t) noexcept {}
        ContactLocationField(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactLocationField(ptr, take_ownership_from_abi) {}
        explicit ContactLocationField(param::hstring const& unstructuredAddress);
        ContactLocationField(param::hstring const& unstructuredAddress, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category);
        ContactLocationField(param::hstring const& unstructuredAddress, Windows::ApplicationModel::Contacts::ContactFieldCategory const& category, param::hstring const& street, param::hstring const& city, param::hstring const& region, param::hstring const& country, param::hstring const& postalCode);
    };
    struct ContactManager
    {
        ContactManager() = delete;
        static auto ShowContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection);
        static auto ShowContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement);
        static auto ShowDelayLoadedContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement);
        static auto RequestStoreAsync();
        static auto ConvertContactToVCardAsync(Windows::ApplicationModel::Contacts::Contact const& contact);
        static auto ConvertContactToVCardAsync(Windows::ApplicationModel::Contacts::Contact const& contact, uint32_t maxBytes);
        static auto ConvertVCardToContactAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& vCard);
        static auto RequestStoreAsync(Windows::ApplicationModel::Contacts::ContactStoreAccessType const& accessType);
        static auto RequestAnnotationStoreAsync(Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType const& accessType);
        static auto IsShowContactCardSupported();
        static auto ShowContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::ApplicationModel::Contacts::ContactCardOptions const& contactCardOptions);
        static auto IsShowDelayLoadedContactCardSupported();
        static auto ShowDelayLoadedContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::ApplicationModel::Contacts::ContactCardOptions const& contactCardOptions);
        static auto ShowFullContactCard(Windows::ApplicationModel::Contacts::Contact const& contact, Windows::ApplicationModel::Contacts::FullContactCardOptions const& fullContactCardOptions);
        [[nodiscard]] static auto SystemDisplayNameOrder();
        static auto SystemDisplayNameOrder(Windows::ApplicationModel::Contacts::ContactNameOrder const& value);
        [[nodiscard]] static auto SystemSortOrder();
        static auto SystemSortOrder(Windows::ApplicationModel::Contacts::ContactNameOrder const& value);
        static auto GetForUser(Windows::System::User const& user);
        static auto IsShowFullContactCardSupportedAsync();
        [[nodiscard]] static auto IncludeMiddleNameInSystemDisplayAndSort();
        static auto IncludeMiddleNameInSystemDisplayAndSort(bool value);
    };
    struct __declspec(empty_bases) ContactManagerForUser : Windows::ApplicationModel::Contacts::IContactManagerForUser,
        impl::require<ContactManagerForUser, Windows::ApplicationModel::Contacts::IContactManagerForUser2>
    {
        ContactManagerForUser(std::nullptr_t) noexcept {}
        ContactManagerForUser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactManagerForUser(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactMatchReason : Windows::ApplicationModel::Contacts::IContactMatchReason
    {
        ContactMatchReason(std::nullptr_t) noexcept {}
        ContactMatchReason(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactMatchReason(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactPanel : Windows::ApplicationModel::Contacts::IContactPanel
    {
        ContactPanel(std::nullptr_t) noexcept {}
        ContactPanel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactPanel(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactPanelClosingEventArgs : Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs
    {
        ContactPanelClosingEventArgs(std::nullptr_t) noexcept {}
        ContactPanelClosingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactPanelClosingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactPanelLaunchFullAppRequestedEventArgs : Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs
    {
        ContactPanelLaunchFullAppRequestedEventArgs(std::nullptr_t) noexcept {}
        ContactPanelLaunchFullAppRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactPanelLaunchFullAppRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactPhone : Windows::ApplicationModel::Contacts::IContactPhone
    {
        ContactPhone(std::nullptr_t) noexcept {}
        ContactPhone(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactPhone(ptr, take_ownership_from_abi) {}
        ContactPhone();
    };
    struct __declspec(empty_bases) ContactPicker : Windows::ApplicationModel::Contacts::IContactPicker,
        impl::require<ContactPicker, Windows::ApplicationModel::Contacts::IContactPicker2, Windows::ApplicationModel::Contacts::IContactPicker3>
    {
        ContactPicker(std::nullptr_t) noexcept {}
        ContactPicker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactPicker(ptr, take_ownership_from_abi) {}
        ContactPicker();
        static auto CreateForUser(Windows::System::User const& user);
        static auto IsSupportedAsync();
    };
    struct __declspec(empty_bases) ContactQueryOptions : Windows::ApplicationModel::Contacts::IContactQueryOptions
    {
        ContactQueryOptions(std::nullptr_t) noexcept {}
        ContactQueryOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactQueryOptions(ptr, take_ownership_from_abi) {}
        ContactQueryOptions();
        explicit ContactQueryOptions(param::hstring const& text);
        ContactQueryOptions(param::hstring const& text, Windows::ApplicationModel::Contacts::ContactQuerySearchFields const& fields);
    };
    struct __declspec(empty_bases) ContactQueryTextSearch : Windows::ApplicationModel::Contacts::IContactQueryTextSearch
    {
        ContactQueryTextSearch(std::nullptr_t) noexcept {}
        ContactQueryTextSearch(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactQueryTextSearch(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactReader : Windows::ApplicationModel::Contacts::IContactReader
    {
        ContactReader(std::nullptr_t) noexcept {}
        ContactReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactReader(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactSignificantOther : Windows::ApplicationModel::Contacts::IContactSignificantOther,
        impl::require<ContactSignificantOther, Windows::ApplicationModel::Contacts::IContactSignificantOther2>
    {
        ContactSignificantOther(std::nullptr_t) noexcept {}
        ContactSignificantOther(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactSignificantOther(ptr, take_ownership_from_abi) {}
        ContactSignificantOther();
    };
    struct __declspec(empty_bases) ContactStore : Windows::ApplicationModel::Contacts::IContactStore,
        impl::require<ContactStore, Windows::ApplicationModel::Contacts::IContactStore2, Windows::ApplicationModel::Contacts::IContactStore3>
    {
        ContactStore(std::nullptr_t) noexcept {}
        ContactStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactStore(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactStoreNotificationTriggerDetails : Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails
    {
        ContactStoreNotificationTriggerDetails(std::nullptr_t) noexcept {}
        ContactStoreNotificationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactStoreNotificationTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactWebsite : Windows::ApplicationModel::Contacts::IContactWebsite,
        impl::require<ContactWebsite, Windows::ApplicationModel::Contacts::IContactWebsite2>
    {
        ContactWebsite(std::nullptr_t) noexcept {}
        ContactWebsite(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IContactWebsite(ptr, take_ownership_from_abi) {}
        ContactWebsite();
    };
    struct __declspec(empty_bases) FullContactCardOptions : Windows::ApplicationModel::Contacts::IFullContactCardOptions
    {
        FullContactCardOptions(std::nullptr_t) noexcept {}
        FullContactCardOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IFullContactCardOptions(ptr, take_ownership_from_abi) {}
        FullContactCardOptions();
    };
    struct KnownContactField
    {
        KnownContactField() = delete;
        [[nodiscard]] static auto Email();
        [[nodiscard]] static auto PhoneNumber();
        [[nodiscard]] static auto Location();
        [[nodiscard]] static auto InstantMessage();
        static auto ConvertNameToType(param::hstring const& name);
        static auto ConvertTypeToName(Windows::ApplicationModel::Contacts::ContactFieldType const& type);
    };
    struct __declspec(empty_bases) PinnedContactIdsQueryResult : Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult
    {
        PinnedContactIdsQueryResult(std::nullptr_t) noexcept {}
        PinnedContactIdsQueryResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IPinnedContactIdsQueryResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PinnedContactManager : Windows::ApplicationModel::Contacts::IPinnedContactManager
    {
        PinnedContactManager(std::nullptr_t) noexcept {}
        PinnedContactManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::IPinnedContactManager(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetForUser(Windows::System::User const& user);
        static auto IsSupported();
    };
}
#endif
