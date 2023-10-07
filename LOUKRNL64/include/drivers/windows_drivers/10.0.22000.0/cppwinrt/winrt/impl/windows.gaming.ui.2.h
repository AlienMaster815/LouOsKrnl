// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_UI_2_H
#define WINRT_Windows_Gaming_UI_2_H
#include "winrt/impl/Windows.ApplicationModel.Activation.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Gaming.UI.1.h"
WINRT_EXPORT namespace winrt::Windows::Gaming::UI
{
    struct GameBar
    {
        GameBar() = delete;
        static auto VisibilityChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using VisibilityChanged_revoker = impl::factory_event_revoker<Windows::Gaming::UI::IGameBarStatics, &impl::abi_t<Windows::Gaming::UI::IGameBarStatics>::remove_VisibilityChanged>;
        [[nodiscard]] static VisibilityChanged_revoker VisibilityChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto VisibilityChanged(winrt::event_token const& token);
        static auto IsInputRedirectedChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using IsInputRedirectedChanged_revoker = impl::factory_event_revoker<Windows::Gaming::UI::IGameBarStatics, &impl::abi_t<Windows::Gaming::UI::IGameBarStatics>::remove_IsInputRedirectedChanged>;
        [[nodiscard]] static IsInputRedirectedChanged_revoker IsInputRedirectedChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto IsInputRedirectedChanged(winrt::event_token const& token);
        [[nodiscard]] static auto Visible();
        [[nodiscard]] static auto IsInputRedirected();
    };
    struct __declspec(empty_bases) GameChatMessageReceivedEventArgs : Windows::Gaming::UI::IGameChatMessageReceivedEventArgs
    {
        GameChatMessageReceivedEventArgs(std::nullptr_t) noexcept {}
        GameChatMessageReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::UI::IGameChatMessageReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GameChatOverlay : Windows::Gaming::UI::IGameChatOverlay
    {
        GameChatOverlay(std::nullptr_t) noexcept {}
        GameChatOverlay(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::UI::IGameChatOverlay(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
    };
    struct __declspec(empty_bases) GameChatOverlayMessageSource : Windows::Gaming::UI::IGameChatOverlayMessageSource
    {
        GameChatOverlayMessageSource(std::nullptr_t) noexcept {}
        GameChatOverlayMessageSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::UI::IGameChatOverlayMessageSource(ptr, take_ownership_from_abi) {}
        GameChatOverlayMessageSource();
    };
    struct __declspec(empty_bases) GameUIProviderActivatedEventArgs : Windows::Gaming::UI::IGameUIProviderActivatedEventArgs
    {
        GameUIProviderActivatedEventArgs(std::nullptr_t) noexcept {}
        GameUIProviderActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::UI::IGameUIProviderActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
