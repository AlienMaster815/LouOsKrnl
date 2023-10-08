// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Email_DataProvider_1_H
#define WINRT_Windows_ApplicationModel_Email_DataProvider_1_H
#include "winrt/impl/Windows.ApplicationModel.Email.DataProvider.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Email::DataProvider
{
    struct __declspec(empty_bases) IEmailDataProviderConnection :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailDataProviderConnection>
    {
        IEmailDataProviderConnection(std::nullptr_t = nullptr) noexcept {}
        IEmailDataProviderConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailDataProviderTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailDataProviderTriggerDetails>
    {
        IEmailDataProviderTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IEmailDataProviderTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxCreateFolderRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxCreateFolderRequest>
    {
        IEmailMailboxCreateFolderRequest(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxCreateFolderRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxCreateFolderRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxCreateFolderRequestEventArgs>
    {
        IEmailMailboxCreateFolderRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxCreateFolderRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxDeleteFolderRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxDeleteFolderRequest>
    {
        IEmailMailboxDeleteFolderRequest(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxDeleteFolderRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxDeleteFolderRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxDeleteFolderRequestEventArgs>
    {
        IEmailMailboxDeleteFolderRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxDeleteFolderRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxDownloadAttachmentRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxDownloadAttachmentRequest>
    {
        IEmailMailboxDownloadAttachmentRequest(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxDownloadAttachmentRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxDownloadAttachmentRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxDownloadAttachmentRequestEventArgs>
    {
        IEmailMailboxDownloadAttachmentRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxDownloadAttachmentRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxDownloadMessageRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxDownloadMessageRequest>
    {
        IEmailMailboxDownloadMessageRequest(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxDownloadMessageRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxDownloadMessageRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxDownloadMessageRequestEventArgs>
    {
        IEmailMailboxDownloadMessageRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxDownloadMessageRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxEmptyFolderRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxEmptyFolderRequest>
    {
        IEmailMailboxEmptyFolderRequest(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxEmptyFolderRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxEmptyFolderRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxEmptyFolderRequestEventArgs>
    {
        IEmailMailboxEmptyFolderRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxEmptyFolderRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxForwardMeetingRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxForwardMeetingRequest>
    {
        IEmailMailboxForwardMeetingRequest(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxForwardMeetingRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxForwardMeetingRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxForwardMeetingRequestEventArgs>
    {
        IEmailMailboxForwardMeetingRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxForwardMeetingRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxGetAutoReplySettingsRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxGetAutoReplySettingsRequest>
    {
        IEmailMailboxGetAutoReplySettingsRequest(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxGetAutoReplySettingsRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxGetAutoReplySettingsRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxGetAutoReplySettingsRequestEventArgs>
    {
        IEmailMailboxGetAutoReplySettingsRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxGetAutoReplySettingsRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxMoveFolderRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxMoveFolderRequest>
    {
        IEmailMailboxMoveFolderRequest(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxMoveFolderRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxMoveFolderRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxMoveFolderRequestEventArgs>
    {
        IEmailMailboxMoveFolderRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxMoveFolderRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxProposeNewTimeForMeetingRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxProposeNewTimeForMeetingRequest>
    {
        IEmailMailboxProposeNewTimeForMeetingRequest(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxProposeNewTimeForMeetingRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxProposeNewTimeForMeetingRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxProposeNewTimeForMeetingRequestEventArgs>
    {
        IEmailMailboxProposeNewTimeForMeetingRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxProposeNewTimeForMeetingRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxResolveRecipientsRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxResolveRecipientsRequest>
    {
        IEmailMailboxResolveRecipientsRequest(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxResolveRecipientsRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxResolveRecipientsRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxResolveRecipientsRequestEventArgs>
    {
        IEmailMailboxResolveRecipientsRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxResolveRecipientsRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxServerSearchReadBatchRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxServerSearchReadBatchRequest>
    {
        IEmailMailboxServerSearchReadBatchRequest(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxServerSearchReadBatchRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxServerSearchReadBatchRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxServerSearchReadBatchRequestEventArgs>
    {
        IEmailMailboxServerSearchReadBatchRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxServerSearchReadBatchRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxSetAutoReplySettingsRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxSetAutoReplySettingsRequest>
    {
        IEmailMailboxSetAutoReplySettingsRequest(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxSetAutoReplySettingsRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxSetAutoReplySettingsRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxSetAutoReplySettingsRequestEventArgs>
    {
        IEmailMailboxSetAutoReplySettingsRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxSetAutoReplySettingsRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxSyncManagerSyncRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxSyncManagerSyncRequest>
    {
        IEmailMailboxSyncManagerSyncRequest(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxSyncManagerSyncRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxSyncManagerSyncRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxSyncManagerSyncRequestEventArgs>
    {
        IEmailMailboxSyncManagerSyncRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxSyncManagerSyncRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxUpdateMeetingResponseRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxUpdateMeetingResponseRequest>
    {
        IEmailMailboxUpdateMeetingResponseRequest(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxUpdateMeetingResponseRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxUpdateMeetingResponseRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxUpdateMeetingResponseRequestEventArgs>
    {
        IEmailMailboxUpdateMeetingResponseRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxUpdateMeetingResponseRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxValidateCertificatesRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxValidateCertificatesRequest>
    {
        IEmailMailboxValidateCertificatesRequest(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxValidateCertificatesRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEmailMailboxValidateCertificatesRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEmailMailboxValidateCertificatesRequestEventArgs>
    {
        IEmailMailboxValidateCertificatesRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IEmailMailboxValidateCertificatesRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
