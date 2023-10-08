// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_UI_1_H
#define WINRT_Windows_Gaming_UI_1_H
#include "winrt/impl/Windows.ApplicationModel.Activation.0.h"
#include "winrt/impl/Windows.Gaming.UI.0.h"
WINRT_EXPORT namespace winrt::Windows::Gaming::UI
{
    struct __declspec(empty_bases) IGameBarStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGameBarStatics>
    {
        IGameBarStatics(std::nullptr_t = nullptr) noexcept {}
        IGameBarStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGameChatMessageReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGameChatMessageReceivedEventArgs>
    {
        IGameChatMessageReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGameChatMessageReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGameChatOverlay :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGameChatOverlay>
    {
        IGameChatOverlay(std::nullptr_t = nullptr) noexcept {}
        IGameChatOverlay(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGameChatOverlayMessageSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGameChatOverlayMessageSource>
    {
        IGameChatOverlayMessageSource(std::nullptr_t = nullptr) noexcept {}
        IGameChatOverlayMessageSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGameChatOverlayStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGameChatOverlayStatics>
    {
        IGameChatOverlayStatics(std::nullptr_t = nullptr) noexcept {}
        IGameChatOverlayStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGameUIProviderActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGameUIProviderActivatedEventArgs>,
        impl::require<Windows::Gaming::UI::IGameUIProviderActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IGameUIProviderActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGameUIProviderActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
