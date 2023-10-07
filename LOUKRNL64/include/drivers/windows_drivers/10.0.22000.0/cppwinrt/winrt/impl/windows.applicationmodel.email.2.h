// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Email_2_H
#define WINRT_Windows_ApplicationModel_Email_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.ApplicationModel.Email.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Email
{
    struct __declspec(empty_bases) EmailAttachment : Windows::ApplicationModel::Email::IEmailAttachment,
        impl::require<EmailAttachment, Windows::ApplicationModel::Email::IEmailAttachment2>
    {
        EmailAttachment(std::nullptr_t) noexcept {}
        EmailAttachment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailAttachment(ptr, take_ownership_from_abi) {}
        EmailAttachment();
        EmailAttachment(param::hstring const& fileName, Windows::Storage::Streams::IRandomAccessStreamReference const& data);
        EmailAttachment(param::hstring const& fileName, Windows::Storage::Streams::IRandomAccessStreamReference const& data, param::hstring const& mimeType);
    };
    struct __declspec(empty_bases) EmailConversation : Windows::ApplicationModel::Email::IEmailConversation
    {
        EmailConversation(std::nullptr_t) noexcept {}
        EmailConversation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailConversation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailConversationBatch : Windows::ApplicationModel::Email::IEmailConversationBatch
    {
        EmailConversationBatch(std::nullptr_t) noexcept {}
        EmailConversationBatch(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailConversationBatch(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailConversationReader : Windows::ApplicationModel::Email::IEmailConversationReader
    {
        EmailConversationReader(std::nullptr_t) noexcept {}
        EmailConversationReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailConversationReader(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailFolder : Windows::ApplicationModel::Email::IEmailFolder
    {
        EmailFolder(std::nullptr_t) noexcept {}
        EmailFolder(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailFolder(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailIrmInfo : Windows::ApplicationModel::Email::IEmailIrmInfo
    {
        EmailIrmInfo(std::nullptr_t) noexcept {}
        EmailIrmInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailIrmInfo(ptr, take_ownership_from_abi) {}
        EmailIrmInfo();
        EmailIrmInfo(Windows::Foundation::DateTime const& expiration, Windows::ApplicationModel::Email::EmailIrmTemplate const& irmTemplate);
    };
    struct __declspec(empty_bases) EmailIrmTemplate : Windows::ApplicationModel::Email::IEmailIrmTemplate
    {
        EmailIrmTemplate(std::nullptr_t) noexcept {}
        EmailIrmTemplate(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailIrmTemplate(ptr, take_ownership_from_abi) {}
        EmailIrmTemplate();
        EmailIrmTemplate(param::hstring const& id, param::hstring const& name, param::hstring const& description);
    };
    struct __declspec(empty_bases) EmailItemCounts : Windows::ApplicationModel::Email::IEmailItemCounts
    {
        EmailItemCounts(std::nullptr_t) noexcept {}
        EmailItemCounts(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailItemCounts(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailMailbox : Windows::ApplicationModel::Email::IEmailMailbox,
        impl::require<EmailMailbox, Windows::ApplicationModel::Email::IEmailMailbox2, Windows::ApplicationModel::Email::IEmailMailbox3, Windows::ApplicationModel::Email::IEmailMailbox4, Windows::ApplicationModel::Email::IEmailMailbox5>
    {
        EmailMailbox(std::nullptr_t) noexcept {}
        EmailMailbox(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailMailbox(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailMailboxAction : Windows::ApplicationModel::Email::IEmailMailboxAction
    {
        EmailMailboxAction(std::nullptr_t) noexcept {}
        EmailMailboxAction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailMailboxAction(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailMailboxAutoReply : Windows::ApplicationModel::Email::IEmailMailboxAutoReply
    {
        EmailMailboxAutoReply(std::nullptr_t) noexcept {}
        EmailMailboxAutoReply(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailMailboxAutoReply(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailMailboxAutoReplySettings : Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings
    {
        EmailMailboxAutoReplySettings(std::nullptr_t) noexcept {}
        EmailMailboxAutoReplySettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings(ptr, take_ownership_from_abi) {}
        EmailMailboxAutoReplySettings();
    };
    struct __declspec(empty_bases) EmailMailboxCapabilities : Windows::ApplicationModel::Email::IEmailMailboxCapabilities,
        impl::require<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities2, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>
    {
        EmailMailboxCapabilities(std::nullptr_t) noexcept {}
        EmailMailboxCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailMailboxCapabilities(ptr, take_ownership_from_abi) {}
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>::CanCreateFolder;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanCreateFolder;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>::CanDeleteFolder;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanDeleteFolder;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>::CanEmptyFolder;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanEmptyFolder;
        using Windows::ApplicationModel::Email::IEmailMailboxCapabilities::CanForwardMeetings;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanForwardMeetings;
        using Windows::ApplicationModel::Email::IEmailMailboxCapabilities::CanGetAndSetExternalAutoReplies;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanGetAndSetExternalAutoReplies;
        using Windows::ApplicationModel::Email::IEmailMailboxCapabilities::CanGetAndSetInternalAutoReplies;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanGetAndSetInternalAutoReplies;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>::CanMoveFolder;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanMoveFolder;
        using Windows::ApplicationModel::Email::IEmailMailboxCapabilities::CanProposeNewTimeForMeetings;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanProposeNewTimeForMeetings;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>::CanResolveRecipients;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanResolveRecipients;
        using Windows::ApplicationModel::Email::IEmailMailboxCapabilities::CanServerSearchFolders;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanServerSearchFolders;
        using Windows::ApplicationModel::Email::IEmailMailboxCapabilities::CanServerSearchMailbox;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanServerSearchMailbox;
        using Windows::ApplicationModel::Email::IEmailMailboxCapabilities::CanSmartSend;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanSmartSend;
        using Windows::ApplicationModel::Email::IEmailMailboxCapabilities::CanUpdateMeetingResponses;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanUpdateMeetingResponses;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>::CanValidateCertificates;
        using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanValidateCertificates;
    };
    struct __declspec(empty_bases) EmailMailboxChange : Windows::ApplicationModel::Email::IEmailMailboxChange
    {
        EmailMailboxChange(std::nullptr_t) noexcept {}
        EmailMailboxChange(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailMailboxChange(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailMailboxChangeReader : Windows::ApplicationModel::Email::IEmailMailboxChangeReader
    {
        EmailMailboxChangeReader(std::nullptr_t) noexcept {}
        EmailMailboxChangeReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailMailboxChangeReader(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailMailboxChangeTracker : Windows::ApplicationModel::Email::IEmailMailboxChangeTracker
    {
        EmailMailboxChangeTracker(std::nullptr_t) noexcept {}
        EmailMailboxChangeTracker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailMailboxChangeTracker(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailMailboxChangedDeferral : Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral
    {
        EmailMailboxChangedDeferral(std::nullptr_t) noexcept {}
        EmailMailboxChangedDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailMailboxChangedEventArgs : Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs
    {
        EmailMailboxChangedEventArgs(std::nullptr_t) noexcept {}
        EmailMailboxChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailMailboxCreateFolderResult : Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult
    {
        EmailMailboxCreateFolderResult(std::nullptr_t) noexcept {}
        EmailMailboxCreateFolderResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailMailboxPolicies : Windows::ApplicationModel::Email::IEmailMailboxPolicies,
        impl::require<EmailMailboxPolicies, Windows::ApplicationModel::Email::IEmailMailboxPolicies2, Windows::ApplicationModel::Email::IEmailMailboxPolicies3>
    {
        EmailMailboxPolicies(std::nullptr_t) noexcept {}
        EmailMailboxPolicies(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailMailboxPolicies(ptr, take_ownership_from_abi) {}
        using Windows::ApplicationModel::Email::IEmailMailboxPolicies::AllowSmimeSoftCertificates;
        using impl::consume_t<EmailMailboxPolicies, Windows::ApplicationModel::Email::IEmailMailboxPolicies3>::AllowSmimeSoftCertificates;
        using Windows::ApplicationModel::Email::IEmailMailboxPolicies::AllowedSmimeEncryptionAlgorithmNegotiation;
        using impl::consume_t<EmailMailboxPolicies, Windows::ApplicationModel::Email::IEmailMailboxPolicies3>::AllowedSmimeEncryptionAlgorithmNegotiation;
        using impl::consume_t<EmailMailboxPolicies, Windows::ApplicationModel::Email::IEmailMailboxPolicies2>::MustEncryptSmimeMessages;
        using impl::consume_t<EmailMailboxPolicies, Windows::ApplicationModel::Email::IEmailMailboxPolicies3>::MustEncryptSmimeMessages;
        using impl::consume_t<EmailMailboxPolicies, Windows::ApplicationModel::Email::IEmailMailboxPolicies2>::MustSignSmimeMessages;
        using impl::consume_t<EmailMailboxPolicies, Windows::ApplicationModel::Email::IEmailMailboxPolicies3>::MustSignSmimeMessages;
        using Windows::ApplicationModel::Email::IEmailMailboxPolicies::RequiredSmimeEncryptionAlgorithm;
        using impl::consume_t<EmailMailboxPolicies, Windows::ApplicationModel::Email::IEmailMailboxPolicies3>::RequiredSmimeEncryptionAlgorithm;
        using Windows::ApplicationModel::Email::IEmailMailboxPolicies::RequiredSmimeSigningAlgorithm;
        using impl::consume_t<EmailMailboxPolicies, Windows::ApplicationModel::Email::IEmailMailboxPolicies3>::RequiredSmimeSigningAlgorithm;
    };
    struct __declspec(empty_bases) EmailMailboxSyncManager : Windows::ApplicationModel::Email::IEmailMailboxSyncManager,
        impl::require<EmailMailboxSyncManager, Windows::ApplicationModel::Email::IEmailMailboxSyncManager2>
    {
        EmailMailboxSyncManager(std::nullptr_t) noexcept {}
        EmailMailboxSyncManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailMailboxSyncManager(ptr, take_ownership_from_abi) {}
        using Windows::ApplicationModel::Email::IEmailMailboxSyncManager::LastAttemptedSyncTime;
        using impl::consume_t<EmailMailboxSyncManager, Windows::ApplicationModel::Email::IEmailMailboxSyncManager2>::LastAttemptedSyncTime;
        using Windows::ApplicationModel::Email::IEmailMailboxSyncManager::LastSuccessfulSyncTime;
        using impl::consume_t<EmailMailboxSyncManager, Windows::ApplicationModel::Email::IEmailMailboxSyncManager2>::LastSuccessfulSyncTime;
        using Windows::ApplicationModel::Email::IEmailMailboxSyncManager::Status;
        using impl::consume_t<EmailMailboxSyncManager, Windows::ApplicationModel::Email::IEmailMailboxSyncManager2>::Status;
    };
    struct EmailManager
    {
        EmailManager() = delete;
        static auto ShowComposeNewEmailAsync(Windows::ApplicationModel::Email::EmailMessage const& message);
        static auto RequestStoreAsync(Windows::ApplicationModel::Email::EmailStoreAccessType const& accessType);
        static auto GetForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) EmailManagerForUser : Windows::ApplicationModel::Email::IEmailManagerForUser
    {
        EmailManagerForUser(std::nullptr_t) noexcept {}
        EmailManagerForUser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailManagerForUser(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailMeetingInfo : Windows::ApplicationModel::Email::IEmailMeetingInfo,
        impl::require<EmailMeetingInfo, Windows::ApplicationModel::Email::IEmailMeetingInfo2>
    {
        EmailMeetingInfo(std::nullptr_t) noexcept {}
        EmailMeetingInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailMeetingInfo(ptr, take_ownership_from_abi) {}
        EmailMeetingInfo();
    };
    struct __declspec(empty_bases) EmailMessage : Windows::ApplicationModel::Email::IEmailMessage,
        impl::require<EmailMessage, Windows::ApplicationModel::Email::IEmailMessage2, Windows::ApplicationModel::Email::IEmailMessage3, Windows::ApplicationModel::Email::IEmailMessage4>
    {
        EmailMessage(std::nullptr_t) noexcept {}
        EmailMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailMessage(ptr, take_ownership_from_abi) {}
        EmailMessage();
    };
    struct __declspec(empty_bases) EmailMessageBatch : Windows::ApplicationModel::Email::IEmailMessageBatch
    {
        EmailMessageBatch(std::nullptr_t) noexcept {}
        EmailMessageBatch(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailMessageBatch(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailMessageReader : Windows::ApplicationModel::Email::IEmailMessageReader
    {
        EmailMessageReader(std::nullptr_t) noexcept {}
        EmailMessageReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailMessageReader(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailQueryOptions : Windows::ApplicationModel::Email::IEmailQueryOptions
    {
        EmailQueryOptions(std::nullptr_t) noexcept {}
        EmailQueryOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailQueryOptions(ptr, take_ownership_from_abi) {}
        EmailQueryOptions();
        explicit EmailQueryOptions(param::hstring const& text);
        EmailQueryOptions(param::hstring const& text, Windows::ApplicationModel::Email::EmailQuerySearchFields const& fields);
    };
    struct __declspec(empty_bases) EmailQueryTextSearch : Windows::ApplicationModel::Email::IEmailQueryTextSearch
    {
        EmailQueryTextSearch(std::nullptr_t) noexcept {}
        EmailQueryTextSearch(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailQueryTextSearch(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailRecipient : Windows::ApplicationModel::Email::IEmailRecipient
    {
        EmailRecipient(std::nullptr_t) noexcept {}
        EmailRecipient(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailRecipient(ptr, take_ownership_from_abi) {}
        EmailRecipient();
        explicit EmailRecipient(param::hstring const& address);
        EmailRecipient(param::hstring const& address, param::hstring const& name);
    };
    struct __declspec(empty_bases) EmailRecipientResolutionResult : Windows::ApplicationModel::Email::IEmailRecipientResolutionResult,
        impl::require<EmailRecipientResolutionResult, Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2>
    {
        EmailRecipientResolutionResult(std::nullptr_t) noexcept {}
        EmailRecipientResolutionResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailRecipientResolutionResult(ptr, take_ownership_from_abi) {}
        EmailRecipientResolutionResult();
        using Windows::ApplicationModel::Email::IEmailRecipientResolutionResult::Status;
        using impl::consume_t<EmailRecipientResolutionResult, Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2>::Status;
    };
    struct __declspec(empty_bases) EmailStore : Windows::ApplicationModel::Email::IEmailStore
    {
        EmailStore(std::nullptr_t) noexcept {}
        EmailStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailStore(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EmailStoreNotificationTriggerDetails : Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails
    {
        EmailStoreNotificationTriggerDetails(std::nullptr_t) noexcept {}
        EmailStoreNotificationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails(ptr, take_ownership_from_abi) {}
    };
}
#endif
