// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Chat_2_H
#define WINRT_Windows_ApplicationModel_Chat_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.ApplicationModel.Chat.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Chat
{
    struct __declspec(empty_bases) ChatCapabilities : Windows::ApplicationModel::Chat::IChatCapabilities
    {
        ChatCapabilities(std::nullptr_t) noexcept {}
        ChatCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatCapabilities(ptr, take_ownership_from_abi) {}
    };
    struct ChatCapabilitiesManager
    {
        ChatCapabilitiesManager() = delete;
        static auto GetCachedCapabilitiesAsync(param::hstring const& address);
        static auto GetCapabilitiesFromNetworkAsync(param::hstring const& address);
        static auto GetCachedCapabilitiesAsync(param::hstring const& address, param::hstring const& transportId);
        static auto GetCapabilitiesFromNetworkAsync(param::hstring const& address, param::hstring const& transportId);
    };
    struct __declspec(empty_bases) ChatConversation : Windows::ApplicationModel::Chat::IChatConversation,
        impl::require<ChatConversation, Windows::ApplicationModel::Chat::IChatConversation2, Windows::ApplicationModel::Chat::IChatItem>
    {
        ChatConversation(std::nullptr_t) noexcept {}
        ChatConversation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatConversation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ChatConversationReader : Windows::ApplicationModel::Chat::IChatConversationReader
    {
        ChatConversationReader(std::nullptr_t) noexcept {}
        ChatConversationReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatConversationReader(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ChatConversationThreadingInfo : Windows::ApplicationModel::Chat::IChatConversationThreadingInfo
    {
        ChatConversationThreadingInfo(std::nullptr_t) noexcept {}
        ChatConversationThreadingInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatConversationThreadingInfo(ptr, take_ownership_from_abi) {}
        ChatConversationThreadingInfo();
    };
    struct __declspec(empty_bases) ChatMessage : Windows::ApplicationModel::Chat::IChatMessage,
        impl::require<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage3, Windows::ApplicationModel::Chat::IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage4, Windows::ApplicationModel::Chat::IChatItem>
    {
        ChatMessage(std::nullptr_t) noexcept {}
        ChatMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatMessage(ptr, take_ownership_from_abi) {}
        ChatMessage();
        using Windows::ApplicationModel::Chat::IChatMessage::From;
        using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::From;
        using Windows::ApplicationModel::Chat::IChatMessage::IsForwardingDisabled;
        using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::IsForwardingDisabled;
        using Windows::ApplicationModel::Chat::IChatMessage::IsIncoming;
        using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::IsIncoming;
        using Windows::ApplicationModel::Chat::IChatMessage::IsRead;
        using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::IsRead;
        using Windows::ApplicationModel::Chat::IChatMessage::LocalTimestamp;
        using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::LocalTimestamp;
        using Windows::ApplicationModel::Chat::IChatMessage::NetworkTimestamp;
        using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::NetworkTimestamp;
        using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::RemoteId;
        using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage3>::RemoteId;
        using Windows::ApplicationModel::Chat::IChatMessage::Status;
        using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::Status;
        using Windows::ApplicationModel::Chat::IChatMessage::Subject;
        using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::Subject;
    };
    struct __declspec(empty_bases) ChatMessageAttachment : Windows::ApplicationModel::Chat::IChatMessageAttachment,
        impl::require<ChatMessageAttachment, Windows::ApplicationModel::Chat::IChatMessageAttachment2>
    {
        ChatMessageAttachment(std::nullptr_t) noexcept {}
        ChatMessageAttachment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatMessageAttachment(ptr, take_ownership_from_abi) {}
        ChatMessageAttachment(param::hstring const& mimeType, Windows::Storage::Streams::IRandomAccessStreamReference const& dataStreamReference);
    };
    struct ChatMessageBlocking
    {
        ChatMessageBlocking() = delete;
        static auto MarkMessageAsBlockedAsync(param::hstring const& localChatMessageId, bool blocked);
    };
    struct __declspec(empty_bases) ChatMessageChange : Windows::ApplicationModel::Chat::IChatMessageChange
    {
        ChatMessageChange(std::nullptr_t) noexcept {}
        ChatMessageChange(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatMessageChange(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ChatMessageChangeReader : Windows::ApplicationModel::Chat::IChatMessageChangeReader
    {
        ChatMessageChangeReader(std::nullptr_t) noexcept {}
        ChatMessageChangeReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatMessageChangeReader(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ChatMessageChangeTracker : Windows::ApplicationModel::Chat::IChatMessageChangeTracker
    {
        ChatMessageChangeTracker(std::nullptr_t) noexcept {}
        ChatMessageChangeTracker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatMessageChangeTracker(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ChatMessageChangedDeferral : Windows::ApplicationModel::Chat::IChatMessageChangedDeferral
    {
        ChatMessageChangedDeferral(std::nullptr_t) noexcept {}
        ChatMessageChangedDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatMessageChangedDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ChatMessageChangedEventArgs : Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs
    {
        ChatMessageChangedEventArgs(std::nullptr_t) noexcept {}
        ChatMessageChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct ChatMessageManager
    {
        ChatMessageManager() = delete;
        static auto RegisterTransportAsync();
        static auto GetTransportAsync(param::hstring const& transportId);
        static auto GetTransportsAsync();
        static auto RequestStoreAsync();
        static auto ShowComposeSmsMessageAsync(Windows::ApplicationModel::Chat::ChatMessage const& message);
        static auto ShowSmsSettings();
        static auto RequestSyncManagerAsync();
    };
    struct __declspec(empty_bases) ChatMessageNotificationTriggerDetails : Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails,
        impl::require<ChatMessageNotificationTriggerDetails, Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2>
    {
        ChatMessageNotificationTriggerDetails(std::nullptr_t) noexcept {}
        ChatMessageNotificationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ChatMessageReader : Windows::ApplicationModel::Chat::IChatMessageReader,
        impl::require<ChatMessageReader, Windows::ApplicationModel::Chat::IChatMessageReader2>
    {
        ChatMessageReader(std::nullptr_t) noexcept {}
        ChatMessageReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatMessageReader(ptr, take_ownership_from_abi) {}
        using Windows::ApplicationModel::Chat::IChatMessageReader::ReadBatchAsync;
        using impl::consume_t<ChatMessageReader, Windows::ApplicationModel::Chat::IChatMessageReader2>::ReadBatchAsync;
    };
    struct __declspec(empty_bases) ChatMessageStore : Windows::ApplicationModel::Chat::IChatMessageStore,
        impl::require<ChatMessageStore, Windows::ApplicationModel::Chat::IChatMessageStore2, Windows::ApplicationModel::Chat::IChatMessageStore3>
    {
        ChatMessageStore(std::nullptr_t) noexcept {}
        ChatMessageStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatMessageStore(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ChatMessageStoreChangedEventArgs : Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs
    {
        ChatMessageStoreChangedEventArgs(std::nullptr_t) noexcept {}
        ChatMessageStoreChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ChatMessageTransport : Windows::ApplicationModel::Chat::IChatMessageTransport,
        impl::require<ChatMessageTransport, Windows::ApplicationModel::Chat::IChatMessageTransport2>
    {
        ChatMessageTransport(std::nullptr_t) noexcept {}
        ChatMessageTransport(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatMessageTransport(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ChatMessageTransportConfiguration : Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration
    {
        ChatMessageTransportConfiguration(std::nullptr_t) noexcept {}
        ChatMessageTransportConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ChatMessageValidationResult : Windows::ApplicationModel::Chat::IChatMessageValidationResult
    {
        ChatMessageValidationResult(std::nullptr_t) noexcept {}
        ChatMessageValidationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatMessageValidationResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ChatQueryOptions : Windows::ApplicationModel::Chat::IChatQueryOptions
    {
        ChatQueryOptions(std::nullptr_t) noexcept {}
        ChatQueryOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatQueryOptions(ptr, take_ownership_from_abi) {}
        ChatQueryOptions();
    };
    struct __declspec(empty_bases) ChatRecipientDeliveryInfo : Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo
    {
        ChatRecipientDeliveryInfo(std::nullptr_t) noexcept {}
        ChatRecipientDeliveryInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo(ptr, take_ownership_from_abi) {}
        ChatRecipientDeliveryInfo();
    };
    struct __declspec(empty_bases) ChatSearchReader : Windows::ApplicationModel::Chat::IChatSearchReader
    {
        ChatSearchReader(std::nullptr_t) noexcept {}
        ChatSearchReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatSearchReader(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ChatSyncConfiguration : Windows::ApplicationModel::Chat::IChatSyncConfiguration
    {
        ChatSyncConfiguration(std::nullptr_t) noexcept {}
        ChatSyncConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatSyncConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ChatSyncManager : Windows::ApplicationModel::Chat::IChatSyncManager
    {
        ChatSyncManager(std::nullptr_t) noexcept {}
        ChatSyncManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IChatSyncManager(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RcsEndUserMessage : Windows::ApplicationModel::Chat::IRcsEndUserMessage
    {
        RcsEndUserMessage(std::nullptr_t) noexcept {}
        RcsEndUserMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IRcsEndUserMessage(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RcsEndUserMessageAction : Windows::ApplicationModel::Chat::IRcsEndUserMessageAction
    {
        RcsEndUserMessageAction(std::nullptr_t) noexcept {}
        RcsEndUserMessageAction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IRcsEndUserMessageAction(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RcsEndUserMessageAvailableEventArgs : Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs
    {
        RcsEndUserMessageAvailableEventArgs(std::nullptr_t) noexcept {}
        RcsEndUserMessageAvailableEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RcsEndUserMessageAvailableTriggerDetails : Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails
    {
        RcsEndUserMessageAvailableTriggerDetails(std::nullptr_t) noexcept {}
        RcsEndUserMessageAvailableTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RcsEndUserMessageManager : Windows::ApplicationModel::Chat::IRcsEndUserMessageManager
    {
        RcsEndUserMessageManager(std::nullptr_t) noexcept {}
        RcsEndUserMessageManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IRcsEndUserMessageManager(ptr, take_ownership_from_abi) {}
    };
    struct RcsManager
    {
        RcsManager() = delete;
        static auto GetEndUserMessageManager();
        static auto GetTransportsAsync();
        static auto GetTransportAsync(param::hstring const& transportId);
        static auto LeaveConversationAsync(Windows::ApplicationModel::Chat::ChatConversation const& conversation);
        static auto TransportListChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using TransportListChanged_revoker = impl::factory_event_revoker<Windows::ApplicationModel::Chat::IRcsManagerStatics2, &impl::abi_t<Windows::ApplicationModel::Chat::IRcsManagerStatics2>::remove_TransportListChanged>;
        [[nodiscard]] static TransportListChanged_revoker TransportListChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto TransportListChanged(winrt::event_token const& token);
    };
    struct __declspec(empty_bases) RcsServiceKindSupportedChangedEventArgs : Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs
    {
        RcsServiceKindSupportedChangedEventArgs(std::nullptr_t) noexcept {}
        RcsServiceKindSupportedChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RcsTransport : Windows::ApplicationModel::Chat::IRcsTransport
    {
        RcsTransport(std::nullptr_t) noexcept {}
        RcsTransport(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IRcsTransport(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RcsTransportConfiguration : Windows::ApplicationModel::Chat::IRcsTransportConfiguration
    {
        RcsTransportConfiguration(std::nullptr_t) noexcept {}
        RcsTransportConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IRcsTransportConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RemoteParticipantComposingChangedEventArgs : Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs
    {
        RemoteParticipantComposingChangedEventArgs(std::nullptr_t) noexcept {}
        RemoteParticipantComposingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
