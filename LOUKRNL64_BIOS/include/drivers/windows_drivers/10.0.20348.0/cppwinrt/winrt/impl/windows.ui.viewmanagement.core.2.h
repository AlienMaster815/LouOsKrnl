// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_ViewManagement_Core_2_H
#define WINRT_Windows_UI_ViewManagement_Core_2_H
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.UI.ViewManagement.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement::Core
{
    struct __declspec(empty_bases) CoreInputView : Windows::UI::ViewManagement::Core::ICoreInputView,
        impl::require<CoreInputView, Windows::UI::ViewManagement::Core::ICoreInputView2, Windows::UI::ViewManagement::Core::ICoreInputView3, Windows::UI::ViewManagement::Core::ICoreInputView4>
    {
        CoreInputView(std::nullptr_t) noexcept {}
        CoreInputView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::Core::ICoreInputView(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
        static auto GetForUIContext(Windows::UI::UIContext const& context);
    };
    struct __declspec(empty_bases) CoreInputViewHidingEventArgs : Windows::UI::ViewManagement::Core::ICoreInputViewHidingEventArgs
    {
        CoreInputViewHidingEventArgs(std::nullptr_t) noexcept {}
        CoreInputViewHidingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::Core::ICoreInputViewHidingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreInputViewOcclusion : Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion
    {
        CoreInputViewOcclusion(std::nullptr_t) noexcept {}
        CoreInputViewOcclusion(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreInputViewOcclusionsChangedEventArgs : Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs
    {
        CoreInputViewOcclusionsChangedEventArgs(std::nullptr_t) noexcept {}
        CoreInputViewOcclusionsChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreInputViewShowingEventArgs : Windows::UI::ViewManagement::Core::ICoreInputViewShowingEventArgs
    {
        CoreInputViewShowingEventArgs(std::nullptr_t) noexcept {}
        CoreInputViewShowingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::Core::ICoreInputViewShowingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreInputViewTransferringXYFocusEventArgs : Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs
    {
        CoreInputViewTransferringXYFocusEventArgs(std::nullptr_t) noexcept {}
        CoreInputViewTransferringXYFocusEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UISettingsController : Windows::UI::ViewManagement::Core::IUISettingsController
    {
        UISettingsController(std::nullptr_t) noexcept {}
        UISettingsController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::Core::IUISettingsController(ptr, take_ownership_from_abi) {}
        static auto RequestDefaultAsync();
    };
}
#endif
