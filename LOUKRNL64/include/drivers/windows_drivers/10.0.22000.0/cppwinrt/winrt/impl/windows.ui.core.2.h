// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Core_2_H
#define WINRT_Windows_UI_Core_2_H
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Core
{
    struct DispatchedHandler : Windows::Foundation::IUnknown
    {
        DispatchedHandler(std::nullptr_t = nullptr) noexcept {}
        DispatchedHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DispatchedHandler(L lambda);
        template <typename F> DispatchedHandler(F* function);
        template <typename O, typename M> DispatchedHandler(O* object, M method);
        template <typename O, typename M> DispatchedHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DispatchedHandler(weak_ref<O>&& object, M method);
        auto operator()() const;
    };
    struct IdleDispatchedHandler : Windows::Foundation::IUnknown
    {
        IdleDispatchedHandler(std::nullptr_t = nullptr) noexcept {}
        IdleDispatchedHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> IdleDispatchedHandler(L lambda);
        template <typename F> IdleDispatchedHandler(F* function);
        template <typename O, typename M> IdleDispatchedHandler(O* object, M method);
        template <typename O, typename M> IdleDispatchedHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> IdleDispatchedHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::UI::Core::IdleDispatchedHandlerArgs const& e) const;
    };
    struct CorePhysicalKeyStatus
    {
        uint32_t RepeatCount;
        uint32_t ScanCode;
        bool IsExtendedKey;
        bool IsMenuKeyDown;
        bool WasKeyDown;
        bool IsKeyReleased;
    };
    inline bool operator==(CorePhysicalKeyStatus const& left, CorePhysicalKeyStatus const& right) noexcept
    {
        return left.RepeatCount == right.RepeatCount && left.ScanCode == right.ScanCode && left.IsExtendedKey == right.IsExtendedKey && left.IsMenuKeyDown == right.IsMenuKeyDown && left.WasKeyDown == right.WasKeyDown && left.IsKeyReleased == right.IsKeyReleased;
    }
    inline bool operator!=(CorePhysicalKeyStatus const& left, CorePhysicalKeyStatus const& right) noexcept
    {
        return !(left == right);
    }
    struct CoreProximityEvaluation
    {
        int32_t Score;
        Windows::Foundation::Point AdjustedPoint;
    };
    inline bool operator==(CoreProximityEvaluation const& left, CoreProximityEvaluation const& right) noexcept
    {
        return left.Score == right.Score && left.AdjustedPoint == right.AdjustedPoint;
    }
    inline bool operator!=(CoreProximityEvaluation const& left, CoreProximityEvaluation const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AcceleratorKeyEventArgs : Windows::UI::Core::IAcceleratorKeyEventArgs,
        impl::require<AcceleratorKeyEventArgs, Windows::UI::Core::IAcceleratorKeyEventArgs2>
    {
        AcceleratorKeyEventArgs(std::nullptr_t) noexcept {}
        AcceleratorKeyEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::IAcceleratorKeyEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AutomationProviderRequestedEventArgs : Windows::UI::Core::IAutomationProviderRequestedEventArgs
    {
        AutomationProviderRequestedEventArgs(std::nullptr_t) noexcept {}
        AutomationProviderRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::IAutomationProviderRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BackRequestedEventArgs : Windows::UI::Core::IBackRequestedEventArgs
    {
        BackRequestedEventArgs(std::nullptr_t) noexcept {}
        BackRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::IBackRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CharacterReceivedEventArgs : Windows::UI::Core::ICharacterReceivedEventArgs
    {
        CharacterReceivedEventArgs(std::nullptr_t) noexcept {}
        CharacterReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::ICharacterReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ClosestInteractiveBoundsRequestedEventArgs : Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs
    {
        ClosestInteractiveBoundsRequestedEventArgs(std::nullptr_t) noexcept {}
        ClosestInteractiveBoundsRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreAcceleratorKeys : Windows::UI::Core::ICoreAcceleratorKeys
    {
        CoreAcceleratorKeys(std::nullptr_t) noexcept {}
        CoreAcceleratorKeys(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::ICoreAcceleratorKeys(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreComponentInputSource : Windows::UI::Core::ICoreInputSourceBase,
        impl::require<CoreComponentInputSource, Windows::UI::Core::ICorePointerInputSource, Windows::UI::Core::ICoreKeyboardInputSource, Windows::UI::Core::ICoreComponentFocusable, Windows::UI::Core::ICoreTouchHitTesting, Windows::UI::Core::ICoreClosestInteractiveBoundsRequested, Windows::UI::Core::ICoreKeyboardInputSource2, Windows::UI::Core::ICorePointerInputSource2>
    {
        CoreComponentInputSource(std::nullptr_t) noexcept {}
        CoreComponentInputSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::ICoreInputSourceBase(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreCursor : Windows::UI::Core::ICoreCursor
    {
        CoreCursor(std::nullptr_t) noexcept {}
        CoreCursor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::ICoreCursor(ptr, take_ownership_from_abi) {}
        CoreCursor(Windows::UI::Core::CoreCursorType const& type, uint32_t id);
    };
    struct __declspec(empty_bases) CoreDispatcher : Windows::UI::Core::ICoreDispatcher,
        impl::require<CoreDispatcher, Windows::UI::Core::ICoreDispatcherWithTaskPriority, Windows::UI::Core::ICoreDispatcher2>
    {
        CoreDispatcher(std::nullptr_t) noexcept {}
        CoreDispatcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::ICoreDispatcher(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreIndependentInputSource : Windows::UI::Core::ICoreInputSourceBase,
        impl::require<CoreIndependentInputSource, Windows::UI::Core::ICorePointerInputSource, Windows::UI::Core::ICorePointerInputSource2, Windows::UI::Core::ICorePointerRedirector>
    {
        CoreIndependentInputSource(std::nullptr_t) noexcept {}
        CoreIndependentInputSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::ICoreInputSourceBase(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreIndependentInputSourceController : Windows::UI::Core::ICoreIndependentInputSourceController,
        impl::require<CoreIndependentInputSourceController, Windows::Foundation::IClosable>
    {
        CoreIndependentInputSourceController(std::nullptr_t) noexcept {}
        CoreIndependentInputSourceController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::ICoreIndependentInputSourceController(ptr, take_ownership_from_abi) {}
        static auto CreateForVisual(Windows::UI::Composition::Visual const& visual);
        static auto CreateForIVisualElement(Windows::UI::Composition::IVisualElement const& visualElement);
    };
    struct __declspec(empty_bases) CoreWindow : Windows::UI::Core::ICoreWindow,
        impl::require<CoreWindow, Windows::UI::Core::ICoreWindow2, Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::ICoreWindow3, Windows::UI::Core::ICoreWindow4, Windows::UI::Core::ICoreWindow5, Windows::UI::Core::ICoreWindowWithContext>
    {
        CoreWindow(std::nullptr_t) noexcept {}
        CoreWindow(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::ICoreWindow(ptr, take_ownership_from_abi) {}
        using Windows::UI::Core::ICoreWindow::PointerPosition;
        using impl::consume_t<CoreWindow, Windows::UI::Core::ICoreWindow2>::PointerPosition;
        static auto GetForCurrentThread();
    };
    struct __declspec(empty_bases) CoreWindowDialog : Windows::UI::Core::ICoreWindowDialog
    {
        CoreWindowDialog(std::nullptr_t) noexcept {}
        CoreWindowDialog(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::ICoreWindowDialog(ptr, take_ownership_from_abi) {}
        CoreWindowDialog();
        explicit CoreWindowDialog(param::hstring const& title);
    };
    struct __declspec(empty_bases) CoreWindowEventArgs : Windows::UI::Core::ICoreWindowEventArgs
    {
        CoreWindowEventArgs(std::nullptr_t) noexcept {}
        CoreWindowEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::ICoreWindowEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreWindowFlyout : Windows::UI::Core::ICoreWindowFlyout
    {
        CoreWindowFlyout(std::nullptr_t) noexcept {}
        CoreWindowFlyout(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::ICoreWindowFlyout(ptr, take_ownership_from_abi) {}
        explicit CoreWindowFlyout(Windows::Foundation::Point const& position);
        CoreWindowFlyout(Windows::Foundation::Point const& position, param::hstring const& title);
    };
    struct __declspec(empty_bases) CoreWindowPopupShowingEventArgs : Windows::UI::Core::ICoreWindowPopupShowingEventArgs
    {
        CoreWindowPopupShowingEventArgs(std::nullptr_t) noexcept {}
        CoreWindowPopupShowingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::ICoreWindowPopupShowingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreWindowResizeManager : Windows::UI::Core::ICoreWindowResizeManager,
        impl::require<CoreWindowResizeManager, Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability>
    {
        CoreWindowResizeManager(std::nullptr_t) noexcept {}
        CoreWindowResizeManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::ICoreWindowResizeManager(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) IdleDispatchedHandlerArgs : Windows::UI::Core::IIdleDispatchedHandlerArgs
    {
        IdleDispatchedHandlerArgs(std::nullptr_t) noexcept {}
        IdleDispatchedHandlerArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::IIdleDispatchedHandlerArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InputEnabledEventArgs : Windows::UI::Core::IInputEnabledEventArgs
    {
        InputEnabledEventArgs(std::nullptr_t) noexcept {}
        InputEnabledEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::IInputEnabledEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) KeyEventArgs : Windows::UI::Core::IKeyEventArgs,
        impl::require<KeyEventArgs, Windows::UI::Core::IKeyEventArgs2>
    {
        KeyEventArgs(std::nullptr_t) noexcept {}
        KeyEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::IKeyEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PointerEventArgs : Windows::UI::Core::IPointerEventArgs
    {
        PointerEventArgs(std::nullptr_t) noexcept {}
        PointerEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::IPointerEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SystemNavigationManager : Windows::UI::Core::ISystemNavigationManager,
        impl::require<SystemNavigationManager, Windows::UI::Core::ISystemNavigationManager2>
    {
        SystemNavigationManager(std::nullptr_t) noexcept {}
        SystemNavigationManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::ISystemNavigationManager(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) TouchHitTestingEventArgs : Windows::UI::Core::ITouchHitTestingEventArgs
    {
        TouchHitTestingEventArgs(std::nullptr_t) noexcept {}
        TouchHitTestingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::ITouchHitTestingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VisibilityChangedEventArgs : Windows::UI::Core::IVisibilityChangedEventArgs
    {
        VisibilityChangedEventArgs(std::nullptr_t) noexcept {}
        VisibilityChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::IVisibilityChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WindowActivatedEventArgs : Windows::UI::Core::IWindowActivatedEventArgs
    {
        WindowActivatedEventArgs(std::nullptr_t) noexcept {}
        WindowActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::IWindowActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WindowSizeChangedEventArgs : Windows::UI::Core::IWindowSizeChangedEventArgs
    {
        WindowSizeChangedEventArgs(std::nullptr_t) noexcept {}
        WindowSizeChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::IWindowSizeChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
