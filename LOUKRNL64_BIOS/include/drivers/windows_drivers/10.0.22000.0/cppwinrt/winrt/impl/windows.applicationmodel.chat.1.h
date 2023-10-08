// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Chat_1_H
#define WINRT_Windows_ApplicationModel_Chat_1_H
#include "winrt/impl/Windows.ApplicationModel.Chat.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Chat
{
    struct __declspec(empty_bases) IChatCapabilities :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatCapabilities>
    {
        IChatCapabilities(std::nullptr_t = nullptr) noexcept {}
        IChatCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatCapabilitiesManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatCapabilitiesManagerStatics>
    {
        IChatCapabilitiesManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IChatCapabilitiesManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatCapabilitiesManagerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatCapabilitiesManagerStatics2>
    {
        IChatCapabilitiesManagerStatics2(std::nullptr_t = nullptr) noexcept {}
        IChatCapabilitiesManagerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatConversation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatConversation>
    {
        IChatConversation(std::nullptr_t = nullptr) noexcept {}
        IChatConversation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatConversation2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatConversation2>
    {
        IChatConversation2(std::nullptr_t = nullptr) noexcept {}
        IChatConversation2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatConversationReader :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatConversationReader>
    {
        IChatConversationReader(std::nullptr_t = nullptr) noexcept {}
        IChatConversationReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatConversationThreadingInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatConversationThreadingInfo>
    {
        IChatConversationThreadingInfo(std::nullptr_t = nullptr) noexcept {}
        IChatConversationThreadingInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatItem :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatItem>
    {
        IChatItem(std::nullptr_t = nullptr) noexcept {}
        IChatItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessage>
    {
        IChatMessage(std::nullptr_t = nullptr) noexcept {}
        IChatMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessage2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessage2>,
        impl::require<Windows::ApplicationModel::Chat::IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage, Windows::ApplicationModel::Chat::IChatMessage3>
    {
        IChatMessage2(std::nullptr_t = nullptr) noexcept {}
        IChatMessage2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        using impl::consume_t<IChatMessage2, IChatMessage2>::From;
        using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage>::From;
        using impl::consume_t<IChatMessage2, IChatMessage2>::IsForwardingDisabled;
        using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage>::IsForwardingDisabled;
        using impl::consume_t<IChatMessage2, IChatMessage2>::IsIncoming;
        using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage>::IsIncoming;
        using impl::consume_t<IChatMessage2, IChatMessage2>::IsRead;
        using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage>::IsRead;
        using impl::consume_t<IChatMessage2, IChatMessage2>::LocalTimestamp;
        using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage>::LocalTimestamp;
        using impl::consume_t<IChatMessage2, IChatMessage2>::NetworkTimestamp;
        using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage>::NetworkTimestamp;
        using impl::consume_t<IChatMessage2, IChatMessage2>::RemoteId;
        using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage3>::RemoteId;
        using impl::consume_t<IChatMessage2, IChatMessage2>::Status;
        using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage>::Status;
        using impl::consume_t<IChatMessage2, IChatMessage2>::Subject;
        using impl::consume_t<IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage>::Subject;
    };
    struct __declspec(empty_bases) IChatMessage3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessage3>,
        impl::require<Windows::ApplicationModel::Chat::IChatMessage3, Windows::ApplicationModel::Chat::IChatMessage>
    {
        IChatMessage3(std::nullptr_t = nullptr) noexcept {}
        IChatMessage3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessage4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessage4>,
        impl::require<Windows::ApplicationModel::Chat::IChatMessage4, Windows::ApplicationModel::Chat::IChatMessage>
    {
        IChatMessage4(std::nullptr_t = nullptr) noexcept {}
        IChatMessage4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageAttachment :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageAttachment>
    {
        IChatMessageAttachment(std::nullptr_t = nullptr) noexcept {}
        IChatMessageAttachment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageAttachment2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageAttachment2>,
        impl::require<Windows::ApplicationModel::Chat::IChatMessageAttachment2, Windows::ApplicationModel::Chat::IChatMessageAttachment>
    {
        IChatMessageAttachment2(std::nullptr_t = nullptr) noexcept {}
        IChatMessageAttachment2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageAttachmentFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageAttachmentFactory>
    {
        IChatMessageAttachmentFactory(std::nullptr_t = nullptr) noexcept {}
        IChatMessageAttachmentFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageBlockingStatic :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageBlockingStatic>
    {
        IChatMessageBlockingStatic(std::nullptr_t = nullptr) noexcept {}
        IChatMessageBlockingStatic(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageChange :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageChange>
    {
        IChatMessageChange(std::nullptr_t = nullptr) noexcept {}
        IChatMessageChange(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageChangeReader :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageChangeReader>
    {
        IChatMessageChangeReader(std::nullptr_t = nullptr) noexcept {}
        IChatMessageChangeReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageChangeTracker :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageChangeTracker>
    {
        IChatMessageChangeTracker(std::nullptr_t = nullptr) noexcept {}
        IChatMessageChangeTracker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageChangedDeferral :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageChangedDeferral>
    {
        IChatMessageChangedDeferral(std::nullptr_t = nullptr) noexcept {}
        IChatMessageChangedDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageChangedEventArgs>
    {
        IChatMessageChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IChatMessageChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageManager2Statics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageManager2Statics>,
        impl::require<Windows::ApplicationModel::Chat::IChatMessageManager2Statics, Windows::ApplicationModel::Chat::IChatMessageManagerStatic>
    {
        IChatMessageManager2Statics(std::nullptr_t = nullptr) noexcept {}
        IChatMessageManager2Statics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageManagerStatic :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageManagerStatic>
    {
        IChatMessageManagerStatic(std::nullptr_t = nullptr) noexcept {}
        IChatMessageManagerStatic(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageManagerStatics3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageManagerStatics3>,
        impl::require<Windows::ApplicationModel::Chat::IChatMessageManagerStatics3, Windows::ApplicationModel::Chat::IChatMessageManagerStatic>
    {
        IChatMessageManagerStatics3(std::nullptr_t = nullptr) noexcept {}
        IChatMessageManagerStatics3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageNotificationTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageNotificationTriggerDetails>
    {
        IChatMessageNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IChatMessageNotificationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageNotificationTriggerDetails2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageNotificationTriggerDetails2>,
        impl::require<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2, Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails>
    {
        IChatMessageNotificationTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
        IChatMessageNotificationTriggerDetails2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageReader :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageReader>
    {
        IChatMessageReader(std::nullptr_t = nullptr) noexcept {}
        IChatMessageReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageReader2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageReader2>
    {
        IChatMessageReader2(std::nullptr_t = nullptr) noexcept {}
        IChatMessageReader2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageStore :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageStore>
    {
        IChatMessageStore(std::nullptr_t = nullptr) noexcept {}
        IChatMessageStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageStore2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageStore2>,
        impl::require<Windows::ApplicationModel::Chat::IChatMessageStore2, Windows::ApplicationModel::Chat::IChatMessageStore>
    {
        IChatMessageStore2(std::nullptr_t = nullptr) noexcept {}
        IChatMessageStore2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageStore3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageStore3>,
        impl::require<Windows::ApplicationModel::Chat::IChatMessageStore3, Windows::ApplicationModel::Chat::IChatMessageStore>
    {
        IChatMessageStore3(std::nullptr_t = nullptr) noexcept {}
        IChatMessageStore3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageStoreChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageStoreChangedEventArgs>
    {
        IChatMessageStoreChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IChatMessageStoreChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageTransport :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageTransport>
    {
        IChatMessageTransport(std::nullptr_t = nullptr) noexcept {}
        IChatMessageTransport(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageTransport2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageTransport2>,
        impl::require<Windows::ApplicationModel::Chat::IChatMessageTransport2, Windows::ApplicationModel::Chat::IChatMessageTransport>
    {
        IChatMessageTransport2(std::nullptr_t = nullptr) noexcept {}
        IChatMessageTransport2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageTransportConfiguration :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageTransportConfiguration>
    {
        IChatMessageTransportConfiguration(std::nullptr_t = nullptr) noexcept {}
        IChatMessageTransportConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatMessageValidationResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatMessageValidationResult>
    {
        IChatMessageValidationResult(std::nullptr_t = nullptr) noexcept {}
        IChatMessageValidationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatQueryOptions :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatQueryOptions>
    {
        IChatQueryOptions(std::nullptr_t = nullptr) noexcept {}
        IChatQueryOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatRecipientDeliveryInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatRecipientDeliveryInfo>
    {
        IChatRecipientDeliveryInfo(std::nullptr_t = nullptr) noexcept {}
        IChatRecipientDeliveryInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatSearchReader :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatSearchReader>
    {
        IChatSearchReader(std::nullptr_t = nullptr) noexcept {}
        IChatSearchReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatSyncConfiguration :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatSyncConfiguration>
    {
        IChatSyncConfiguration(std::nullptr_t = nullptr) noexcept {}
        IChatSyncConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IChatSyncManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IChatSyncManager>
    {
        IChatSyncManager(std::nullptr_t = nullptr) noexcept {}
        IChatSyncManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRcsEndUserMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRcsEndUserMessage>
    {
        IRcsEndUserMessage(std::nullptr_t = nullptr) noexcept {}
        IRcsEndUserMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRcsEndUserMessageAction :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRcsEndUserMessageAction>
    {
        IRcsEndUserMessageAction(std::nullptr_t = nullptr) noexcept {}
        IRcsEndUserMessageAction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRcsEndUserMessageAvailableEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRcsEndUserMessageAvailableEventArgs>
    {
        IRcsEndUserMessageAvailableEventArgs(std::nullptr_t = nullptr) noexcept {}
        IRcsEndUserMessageAvailableEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRcsEndUserMessageAvailableTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRcsEndUserMessageAvailableTriggerDetails>
    {
        IRcsEndUserMessageAvailableTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IRcsEndUserMessageAvailableTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRcsEndUserMessageManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRcsEndUserMessageManager>
    {
        IRcsEndUserMessageManager(std::nullptr_t = nullptr) noexcept {}
        IRcsEndUserMessageManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRcsManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRcsManagerStatics>
    {
        IRcsManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IRcsManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRcsManagerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRcsManagerStatics2>
    {
        IRcsManagerStatics2(std::nullptr_t = nullptr) noexcept {}
        IRcsManagerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRcsServiceKindSupportedChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRcsServiceKindSupportedChangedEventArgs>
    {
        IRcsServiceKindSupportedChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IRcsServiceKindSupportedChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRcsTransport :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRcsTransport>
    {
        IRcsTransport(std::nullptr_t = nullptr) noexcept {}
        IRcsTransport(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRcsTransportConfiguration :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRcsTransportConfiguration>
    {
        IRcsTransportConfiguration(std::nullptr_t = nullptr) noexcept {}
        IRcsTransportConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRemoteParticipantComposingChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRemoteParticipantComposingChangedEventArgs>
    {
        IRemoteParticipantComposingChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IRemoteParticipantComposingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
