// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Email_DataProvider_0_H
#define WINRT_Windows_ApplicationModel_Email_DataProvider_0_H
namespace winrt::Windows::ApplicationModel::Email
{
    enum class EmailBatchStatus : int32_t;
    enum class EmailCertificateValidationStatus : int32_t;
    struct EmailFolder;
    enum class EmailMailboxAutoReplyMessageResponseKind : int32_t;
    struct EmailMailboxAutoReplySettings;
    enum class EmailMailboxCreateFolderStatus : int32_t;
    enum class EmailMailboxDeleteFolderStatus : int32_t;
    enum class EmailMailboxEmptyFolderStatus : int32_t;
    enum class EmailMeetingResponseType : int32_t;
    struct EmailMessage;
    enum class EmailMessageBodyKind : int32_t;
    struct EmailQueryOptions;
    struct EmailRecipientResolutionResult;
}
namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::ApplicationModel::Email::DataProvider
{
    struct IEmailDataProviderConnection;
    struct IEmailDataProviderTriggerDetails;
    struct IEmailMailboxCreateFolderRequest;
    struct IEmailMailboxCreateFolderRequestEventArgs;
    struct IEmailMailboxDeleteFolderRequest;
    struct IEmailMailboxDeleteFolderRequestEventArgs;
    struct IEmailMailboxDownloadAttachmentRequest;
    struct IEmailMailboxDownloadAttachmentRequestEventArgs;
    struct IEmailMailboxDownloadMessageRequest;
    struct IEmailMailboxDownloadMessageRequestEventArgs;
    struct IEmailMailboxEmptyFolderRequest;
    struct IEmailMailboxEmptyFolderRequestEventArgs;
    struct IEmailMailboxForwardMeetingRequest;
    struct IEmailMailboxForwardMeetingRequestEventArgs;
    struct IEmailMailboxGetAutoReplySettingsRequest;
    struct IEmailMailboxGetAutoReplySettingsRequestEventArgs;
    struct IEmailMailboxMoveFolderRequest;
    struct IEmailMailboxMoveFolderRequestEventArgs;
    struct IEmailMailboxProposeNewTimeForMeetingRequest;
    struct IEmailMailboxProposeNewTimeForMeetingRequestEventArgs;
    struct IEmailMailboxResolveRecipientsRequest;
    struct IEmailMailboxResolveRecipientsRequestEventArgs;
    struct IEmailMailboxServerSearchReadBatchRequest;
    struct IEmailMailboxServerSearchReadBatchRequestEventArgs;
    struct IEmailMailboxSetAutoReplySettingsRequest;
    struct IEmailMailboxSetAutoReplySettingsRequestEventArgs;
    struct IEmailMailboxSyncManagerSyncRequest;
    struct IEmailMailboxSyncManagerSyncRequestEventArgs;
    struct IEmailMailboxUpdateMeetingResponseRequest;
    struct IEmailMailboxUpdateMeetingResponseRequestEventArgs;
    struct IEmailMailboxValidateCertificatesRequest;
    struct IEmailMailboxValidateCertificatesRequestEventArgs;
    struct EmailDataProviderConnection;
    struct EmailDataProviderTriggerDetails;
    struct EmailMailboxCreateFolderRequest;
    struct EmailMailboxCreateFolderRequestEventArgs;
    struct EmailMailboxDeleteFolderRequest;
    struct EmailMailboxDeleteFolderRequestEventArgs;
    struct EmailMailboxDownloadAttachmentRequest;
    struct EmailMailboxDownloadAttachmentRequestEventArgs;
    struct EmailMailboxDownloadMessageRequest;
    struct EmailMailboxDownloadMessageRequestEventArgs;
    struct EmailMailboxEmptyFolderRequest;
    struct EmailMailboxEmptyFolderRequestEventArgs;
    struct EmailMailboxForwardMeetingRequest;
    struct EmailMailboxForwardMeetingRequestEventArgs;
    struct EmailMailboxGetAutoReplySettingsRequest;
    struct EmailMailboxGetAutoReplySettingsRequestEventArgs;
    struct EmailMailboxMoveFolderRequest;
    struct EmailMailboxMoveFolderRequestEventArgs;
    struct EmailMailboxProposeNewTimeForMeetingRequest;
    struct EmailMailboxProposeNewTimeForMeetingRequestEventArgs;
    struct EmailMailboxResolveRecipientsRequest;
    struct EmailMailboxResolveRecipientsRequestEventArgs;
    struct EmailMailboxServerSearchReadBatchRequest;
    struct EmailMailboxServerSearchReadBatchRequestEventArgs;
    struct EmailMailboxSetAutoReplySettingsRequest;
    struct EmailMailboxSetAutoReplySettingsRequestEventArgs;
    struct EmailMailboxSyncManagerSyncRequest;
    struct EmailMailboxSyncManagerSyncRequestEventArgs;
    struct EmailMailboxUpdateMeetingResponseRequest;
    struct EmailMailboxUpdateMeetingResponseRequestEventArgs;
    struct EmailMailboxValidateCertificatesRequest;
    struct EmailMailboxValidateCertificatesRequestEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailDataProviderConnection" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailDataProviderTriggerDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxCreateFolderRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxCreateFolderRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDeleteFolderRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDeleteFolderRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadAttachmentRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadAttachmentRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadMessageRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadMessageRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxEmptyFolderRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxEmptyFolderRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxForwardMeetingRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxForwardMeetingRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxGetAutoReplySettingsRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxGetAutoReplySettingsRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxMoveFolderRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxMoveFolderRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxProposeNewTimeForMeetingRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxProposeNewTimeForMeetingRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxResolveRecipientsRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxResolveRecipientsRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxServerSearchReadBatchRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxServerSearchReadBatchRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSetAutoReplySettingsRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSetAutoReplySettingsRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSyncManagerSyncRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSyncManagerSyncRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxUpdateMeetingResponseRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxUpdateMeetingResponseRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxValidateCertificatesRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxValidateCertificatesRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailDataProviderTriggerDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxCreateFolderRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxCreateFolderRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxDeleteFolderRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxDeleteFolderRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadAttachmentRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadAttachmentRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadMessageRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadMessageRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxEmptyFolderRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxEmptyFolderRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxForwardMeetingRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxForwardMeetingRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxGetAutoReplySettingsRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxGetAutoReplySettingsRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxMoveFolderRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxMoveFolderRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxProposeNewTimeForMeetingRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxProposeNewTimeForMeetingRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxResolveRecipientsRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxResolveRecipientsRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxServerSearchReadBatchRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxServerSearchReadBatchRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxSetAutoReplySettingsRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxSetAutoReplySettingsRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxSyncManagerSyncRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxSyncManagerSyncRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxUpdateMeetingResponseRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxUpdateMeetingResponseRequestEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxValidateCertificatesRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxValidateCertificatesRequestEventArgs" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>
    {
        static constexpr guid value{ 0x3B9C9DC7,0x37B2,0x4BF0,{ 0xAE,0x30,0x7B,0x64,0x4A,0x1C,0x96,0xE1 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderTriggerDetails>
    {
        static constexpr guid value{ 0x8F3E4E50,0x341E,0x45F3,{ 0xBB,0xA0,0x84,0xA0,0x05,0xE1,0x31,0x9A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest>
    {
        static constexpr guid value{ 0x184D3775,0xC921,0x4C39,{ 0xA3,0x09,0xE1,0x6C,0x9F,0x22,0xB0,0x4B } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs>
    {
        static constexpr guid value{ 0x03E4C02C,0x241C,0x4EA9,{ 0xA6,0x8F,0xFF,0x20,0xBC,0x5A,0xFC,0x85 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest>
    {
        static constexpr guid value{ 0x9469E88A,0xA931,0x4779,{ 0x92,0x3D,0x09,0xA3,0xEA,0x29,0x2E,0x29 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs>
    {
        static constexpr guid value{ 0xB4D32D06,0x2332,0x4678,{ 0x83,0x78,0x28,0xB5,0x79,0x33,0x68,0x46 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest>
    {
        static constexpr guid value{ 0x0B1DBBB4,0x750C,0x48E1,{ 0xBC,0xE4,0x8D,0x58,0x96,0x84,0xFF,0xBC } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs>
    {
        static constexpr guid value{ 0xCCDDC46D,0xFFA8,0x4877,{ 0x9F,0x9D,0xFE,0xD7,0xBC,0xAF,0x41,0x04 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest>
    {
        static constexpr guid value{ 0x497B4187,0x5B4D,0x4B23,{ 0x81,0x6C,0xF3,0x84,0x2B,0xEB,0x75,0x3E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs>
    {
        static constexpr guid value{ 0x470409AD,0xD0A0,0x4A5B,{ 0xBB,0x2A,0x37,0x62,0x10,0x39,0xC5,0x3E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest>
    {
        static constexpr guid value{ 0xFE4B03AB,0xF86D,0x46D9,{ 0xB4,0xCE,0xBC,0x8A,0x6D,0x9E,0x92,0x68 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs>
    {
        static constexpr guid value{ 0x7183F484,0x985A,0x4AC0,{ 0xB3,0x3F,0xEE,0x0E,0x26,0x27,0xA3,0xC0 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest>
    {
        static constexpr guid value{ 0x616D6AF1,0x70D4,0x4832,{ 0xB8,0x69,0xB8,0x05,0x42,0xAE,0x9B,0xE8 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs>
    {
        static constexpr guid value{ 0x2BD8F33A,0x2974,0x4759,{ 0xA5,0xA5,0x58,0xF4,0x4D,0x3C,0x02,0x75 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest>
    {
        static constexpr guid value{ 0x9B380789,0x1E88,0x4E01,{ 0x84,0xCC,0x13,0x86,0xAD,0x9A,0x2C,0x2F } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs>
    {
        static constexpr guid value{ 0xD79F55C2,0xFD45,0x4004,{ 0x8A,0x91,0x9B,0xAC,0xF3,0x8B,0x70,0x22 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest>
    {
        static constexpr guid value{ 0x10BA2856,0x4A95,0x4068,{ 0x91,0xCC,0x67,0xCC,0x7A,0xCF,0x45,0x4F } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs>
    {
        static constexpr guid value{ 0x38623020,0x14BA,0x4C88,{ 0x86,0x98,0x72,0x39,0xE3,0xC8,0xAA,0xA7 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest>
    {
        static constexpr guid value{ 0x5AEFF152,0x9799,0x4F9F,{ 0xA3,0x99,0xFF,0x07,0xF3,0xEE,0xF0,0x4E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs>
    {
        static constexpr guid value{ 0xFB480B98,0x33AD,0x4A67,{ 0x82,0x51,0x0F,0x9C,0x24,0x9B,0x6A,0x20 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest>
    {
        static constexpr guid value{ 0xEFA4CF70,0x7B39,0x4C9B,{ 0x81,0x1E,0x41,0xEA,0xF4,0x3A,0x33,0x2D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs>
    {
        static constexpr guid value{ 0x260F9E02,0xB2CF,0x40F8,{ 0x8C,0x28,0xE3,0xED,0x43,0xB1,0xE8,0x9A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest>
    {
        static constexpr guid value{ 0x090EEBDF,0x5A96,0x41D3,{ 0x8A,0xD8,0x34,0x91,0x2F,0x9A,0xA6,0x0E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs>
    {
        static constexpr guid value{ 0x14101B4E,0xED9E,0x45D1,{ 0xAD,0x7A,0xCC,0x9B,0x7F,0x64,0x3A,0xE2 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest>
    {
        static constexpr guid value{ 0x75A422D0,0xA88E,0x4E54,{ 0x8D,0xC7,0xC2,0x43,0x18,0x6B,0x77,0x4E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs>
    {
        static constexpr guid value{ 0x09DA11AD,0xD7CA,0x4087,{ 0xAC,0x86,0x53,0xFA,0x67,0xF7,0x62,0x46 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest>
    {
        static constexpr guid value{ 0x4E10E8E4,0x7E67,0x405A,{ 0xB6,0x73,0xDC,0x60,0xC9,0x10,0x90,0xFC } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs>
    {
        static constexpr guid value{ 0x439A031A,0x8FCC,0x4AE5,{ 0xB9,0xB5,0xD4,0x34,0xE0,0xA6,0x5A,0xA8 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest>
    {
        static constexpr guid value{ 0x5B99AC93,0xB2CF,0x4888,{ 0xBA,0x4F,0x30,0x6B,0x6B,0x66,0xDF,0x30 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs>
    {
        static constexpr guid value{ 0x6898D761,0x56C9,0x4F17,{ 0xBE,0x31,0x66,0xFD,0xA9,0x4B,0xA1,0x59 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest>
    {
        static constexpr guid value{ 0xA94D3931,0xE11A,0x4F97,{ 0xB8,0x1A,0x18,0x7A,0x70,0xA8,0xF4,0x1A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs>
    {
        static constexpr guid value{ 0x2583BF17,0x02FF,0x49FE,{ 0xA7,0x3C,0x03,0xF3,0x75,0x66,0xC6,0x91 } };
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderTriggerDetails>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderTriggerDetails;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequest>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequest>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequest>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequest>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequest>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequest>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequest>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequest>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequest>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequest>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequest>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequest>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequest>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequest>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequest>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs>
    {
        using type = Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs;
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_MailboxSyncRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MailboxSyncRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DownloadMessageRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DownloadMessageRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DownloadAttachmentRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DownloadAttachmentRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CreateFolderRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CreateFolderRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DeleteFolderRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DeleteFolderRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EmptyFolderRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EmptyFolderRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MoveFolderRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MoveFolderRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_UpdateMeetingResponseRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UpdateMeetingResponseRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ForwardMeetingRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ForwardMeetingRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ProposeNewTimeForMeetingRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ProposeNewTimeForMeetingRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SetAutoReplySettingsRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SetAutoReplySettingsRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_GetAutoReplySettingsRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GetAutoReplySettingsRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ResolveRecipientsRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ResolveRecipientsRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ValidateCertificatesRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ValidateCertificatesRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ServerSearchReadBatchRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ServerSearchReadBatchRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Connection(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EmailMailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ParentFolderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EmailMailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall get_EmailFolderId(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EmailMailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall get_EmailMessageId(void**) noexcept = 0;
            virtual int32_t __stdcall get_EmailAttachmentId(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EmailMailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall get_EmailMessageId(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EmailMailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall get_EmailFolderId(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EmailMailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall get_EmailMessageId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Recipients(void**) noexcept = 0;
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall get_ForwardHeaderType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ForwardHeader(void**) noexcept = 0;
            virtual int32_t __stdcall get_Comment(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EmailMailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall get_RequestedFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EmailMailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall get_EmailFolderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_NewParentFolderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_NewFolderName(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EmailMailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall get_EmailMessageId(void**) noexcept = 0;
            virtual int32_t __stdcall get_NewStartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_NewDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall get_Comment(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EmailMailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Recipients(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SessionId(void**) noexcept = 0;
            virtual int32_t __stdcall get_EmailMailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall get_EmailFolderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Options(void**) noexcept = 0;
            virtual int32_t __stdcall get_SuggestedBatchSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall SaveMessageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EmailMailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall get_AutoReplySettings(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EmailMailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EmailMailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall get_EmailMessageId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Response(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall get_Comment(void**) noexcept = 0;
            virtual int32_t __stdcall get_SendUpdate(bool*) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EmailMailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Certificates(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection
    {
        auto MailboxSyncRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs> const& handler) const;
        using MailboxSyncRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection, &impl::abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_MailboxSyncRequested>;
        MailboxSyncRequested_revoker MailboxSyncRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs> const& handler) const;
        auto MailboxSyncRequested(winrt::event_token const& token) const noexcept;
        auto DownloadMessageRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs> const& handler) const;
        using DownloadMessageRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection, &impl::abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_DownloadMessageRequested>;
        DownloadMessageRequested_revoker DownloadMessageRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs> const& handler) const;
        auto DownloadMessageRequested(winrt::event_token const& token) const noexcept;
        auto DownloadAttachmentRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs> const& handler) const;
        using DownloadAttachmentRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection, &impl::abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_DownloadAttachmentRequested>;
        DownloadAttachmentRequested_revoker DownloadAttachmentRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs> const& handler) const;
        auto DownloadAttachmentRequested(winrt::event_token const& token) const noexcept;
        auto CreateFolderRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs> const& handler) const;
        using CreateFolderRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection, &impl::abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_CreateFolderRequested>;
        CreateFolderRequested_revoker CreateFolderRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs> const& handler) const;
        auto CreateFolderRequested(winrt::event_token const& token) const noexcept;
        auto DeleteFolderRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs> const& handler) const;
        using DeleteFolderRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection, &impl::abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_DeleteFolderRequested>;
        DeleteFolderRequested_revoker DeleteFolderRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs> const& handler) const;
        auto DeleteFolderRequested(winrt::event_token const& token) const noexcept;
        auto EmptyFolderRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs> const& handler) const;
        using EmptyFolderRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection, &impl::abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_EmptyFolderRequested>;
        EmptyFolderRequested_revoker EmptyFolderRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs> const& handler) const;
        auto EmptyFolderRequested(winrt::event_token const& token) const noexcept;
        auto MoveFolderRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs> const& handler) const;
        using MoveFolderRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection, &impl::abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_MoveFolderRequested>;
        MoveFolderRequested_revoker MoveFolderRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs> const& handler) const;
        auto MoveFolderRequested(winrt::event_token const& token) const noexcept;
        auto UpdateMeetingResponseRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs> const& handler) const;
        using UpdateMeetingResponseRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection, &impl::abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_UpdateMeetingResponseRequested>;
        UpdateMeetingResponseRequested_revoker UpdateMeetingResponseRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs> const& handler) const;
        auto UpdateMeetingResponseRequested(winrt::event_token const& token) const noexcept;
        auto ForwardMeetingRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs> const& handler) const;
        using ForwardMeetingRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection, &impl::abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_ForwardMeetingRequested>;
        ForwardMeetingRequested_revoker ForwardMeetingRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs> const& handler) const;
        auto ForwardMeetingRequested(winrt::event_token const& token) const noexcept;
        auto ProposeNewTimeForMeetingRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs> const& handler) const;
        using ProposeNewTimeForMeetingRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection, &impl::abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_ProposeNewTimeForMeetingRequested>;
        ProposeNewTimeForMeetingRequested_revoker ProposeNewTimeForMeetingRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs> const& handler) const;
        auto ProposeNewTimeForMeetingRequested(winrt::event_token const& token) const noexcept;
        auto SetAutoReplySettingsRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs> const& handler) const;
        using SetAutoReplySettingsRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection, &impl::abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_SetAutoReplySettingsRequested>;
        SetAutoReplySettingsRequested_revoker SetAutoReplySettingsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs> const& handler) const;
        auto SetAutoReplySettingsRequested(winrt::event_token const& token) const noexcept;
        auto GetAutoReplySettingsRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs> const& handler) const;
        using GetAutoReplySettingsRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection, &impl::abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_GetAutoReplySettingsRequested>;
        GetAutoReplySettingsRequested_revoker GetAutoReplySettingsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs> const& handler) const;
        auto GetAutoReplySettingsRequested(winrt::event_token const& token) const noexcept;
        auto ResolveRecipientsRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs> const& handler) const;
        using ResolveRecipientsRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection, &impl::abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_ResolveRecipientsRequested>;
        ResolveRecipientsRequested_revoker ResolveRecipientsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs> const& handler) const;
        auto ResolveRecipientsRequested(winrt::event_token const& token) const noexcept;
        auto ValidateCertificatesRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs> const& handler) const;
        using ValidateCertificatesRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection, &impl::abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_ValidateCertificatesRequested>;
        ValidateCertificatesRequested_revoker ValidateCertificatesRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs> const& handler) const;
        auto ValidateCertificatesRequested(winrt::event_token const& token) const noexcept;
        auto ServerSearchReadBatchRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs> const& handler) const;
        using ServerSearchReadBatchRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection, &impl::abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_ServerSearchReadBatchRequested>;
        ServerSearchReadBatchRequested_revoker ServerSearchReadBatchRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs> const& handler) const;
        auto ServerSearchReadBatchRequested(winrt::event_token const& token) const noexcept;
        auto Start() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderTriggerDetails
    {
        [[nodiscard]] auto Connection() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxCreateFolderRequest
    {
        [[nodiscard]] auto EmailMailboxId() const;
        [[nodiscard]] auto ParentFolderId() const;
        [[nodiscard]] auto Name() const;
        auto ReportCompletedAsync(Windows::ApplicationModel::Email::EmailFolder const& folder) const;
        auto ReportFailedAsync(Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus const& status) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxCreateFolderRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxCreateFolderRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxCreateFolderRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDeleteFolderRequest
    {
        [[nodiscard]] auto EmailMailboxId() const;
        [[nodiscard]] auto EmailFolderId() const;
        auto ReportCompletedAsync() const;
        auto ReportFailedAsync(Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus const& status) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDeleteFolderRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDeleteFolderRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDeleteFolderRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadAttachmentRequest
    {
        [[nodiscard]] auto EmailMailboxId() const;
        [[nodiscard]] auto EmailMessageId() const;
        [[nodiscard]] auto EmailAttachmentId() const;
        auto ReportCompletedAsync() const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadAttachmentRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadAttachmentRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadAttachmentRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadMessageRequest
    {
        [[nodiscard]] auto EmailMailboxId() const;
        [[nodiscard]] auto EmailMessageId() const;
        auto ReportCompletedAsync() const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadMessageRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadMessageRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadMessageRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxEmptyFolderRequest
    {
        [[nodiscard]] auto EmailMailboxId() const;
        [[nodiscard]] auto EmailFolderId() const;
        auto ReportCompletedAsync() const;
        auto ReportFailedAsync(Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus const& status) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxEmptyFolderRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxEmptyFolderRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxEmptyFolderRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequest
    {
        [[nodiscard]] auto EmailMailboxId() const;
        [[nodiscard]] auto EmailMessageId() const;
        [[nodiscard]] auto Recipients() const;
        [[nodiscard]] auto Subject() const;
        [[nodiscard]] auto ForwardHeaderType() const;
        [[nodiscard]] auto ForwardHeader() const;
        [[nodiscard]] auto Comment() const;
        auto ReportCompletedAsync() const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxGetAutoReplySettingsRequest
    {
        [[nodiscard]] auto EmailMailboxId() const;
        [[nodiscard]] auto RequestedFormat() const;
        auto ReportCompletedAsync(Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings const& autoReplySettings) const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxGetAutoReplySettingsRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxGetAutoReplySettingsRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxGetAutoReplySettingsRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxMoveFolderRequest
    {
        [[nodiscard]] auto EmailMailboxId() const;
        [[nodiscard]] auto EmailFolderId() const;
        [[nodiscard]] auto NewParentFolderId() const;
        [[nodiscard]] auto NewFolderName() const;
        auto ReportCompletedAsync() const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxMoveFolderRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxMoveFolderRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxMoveFolderRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxProposeNewTimeForMeetingRequest
    {
        [[nodiscard]] auto EmailMailboxId() const;
        [[nodiscard]] auto EmailMessageId() const;
        [[nodiscard]] auto NewStartTime() const;
        [[nodiscard]] auto NewDuration() const;
        [[nodiscard]] auto Subject() const;
        [[nodiscard]] auto Comment() const;
        auto ReportCompletedAsync() const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxProposeNewTimeForMeetingRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxProposeNewTimeForMeetingRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxProposeNewTimeForMeetingRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxResolveRecipientsRequest
    {
        [[nodiscard]] auto EmailMailboxId() const;
        [[nodiscard]] auto Recipients() const;
        auto ReportCompletedAsync(param::async_iterable<Windows::ApplicationModel::Email::EmailRecipientResolutionResult> const& resolutionResults) const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxResolveRecipientsRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxResolveRecipientsRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxResolveRecipientsRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxServerSearchReadBatchRequest
    {
        [[nodiscard]] auto SessionId() const;
        [[nodiscard]] auto EmailMailboxId() const;
        [[nodiscard]] auto EmailFolderId() const;
        [[nodiscard]] auto Options() const;
        [[nodiscard]] auto SuggestedBatchSize() const;
        auto SaveMessageAsync(Windows::ApplicationModel::Email::EmailMessage const& message) const;
        auto ReportCompletedAsync() const;
        auto ReportFailedAsync(Windows::ApplicationModel::Email::EmailBatchStatus const& batchStatus) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxServerSearchReadBatchRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxServerSearchReadBatchRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxServerSearchReadBatchRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSetAutoReplySettingsRequest
    {
        [[nodiscard]] auto EmailMailboxId() const;
        [[nodiscard]] auto AutoReplySettings() const;
        auto ReportCompletedAsync() const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSetAutoReplySettingsRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSetAutoReplySettingsRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSetAutoReplySettingsRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSyncManagerSyncRequest
    {
        [[nodiscard]] auto EmailMailboxId() const;
        auto ReportCompletedAsync() const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSyncManagerSyncRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSyncManagerSyncRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSyncManagerSyncRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxUpdateMeetingResponseRequest
    {
        [[nodiscard]] auto EmailMailboxId() const;
        [[nodiscard]] auto EmailMessageId() const;
        [[nodiscard]] auto Response() const;
        [[nodiscard]] auto Subject() const;
        [[nodiscard]] auto Comment() const;
        [[nodiscard]] auto SendUpdate() const;
        auto ReportCompletedAsync() const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxUpdateMeetingResponseRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxUpdateMeetingResponseRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxUpdateMeetingResponseRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxValidateCertificatesRequest
    {
        [[nodiscard]] auto EmailMailboxId() const;
        [[nodiscard]] auto Certificates() const;
        auto ReportCompletedAsync(param::async_iterable<Windows::ApplicationModel::Email::EmailCertificateValidationStatus> const& validationStatuses) const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxValidateCertificatesRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxValidateCertificatesRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxValidateCertificatesRequestEventArgs<D>;
    };
}
#endif
