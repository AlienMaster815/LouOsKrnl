// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Core_1_H
#define WINRT_Windows_UI_Core_1_H
#include "winrt/impl/Windows.UI.Core.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Core
{
    struct __declspec(empty_bases) IAcceleratorKeyEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAcceleratorKeyEventArgs>,
        impl::require<Windows::UI::Core::IAcceleratorKeyEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
    {
        IAcceleratorKeyEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAcceleratorKeyEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAcceleratorKeyEventArgs2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAcceleratorKeyEventArgs2>,
        impl::require<Windows::UI::Core::IAcceleratorKeyEventArgs2, Windows::UI::Core::ICoreWindowEventArgs>
    {
        IAcceleratorKeyEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IAcceleratorKeyEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAutomationProviderRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAutomationProviderRequestedEventArgs>,
        impl::require<Windows::UI::Core::IAutomationProviderRequestedEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
    {
        IAutomationProviderRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAutomationProviderRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackRequestedEventArgs>
    {
        IBackRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IBackRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICharacterReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICharacterReceivedEventArgs>,
        impl::require<Windows::UI::Core::ICharacterReceivedEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
    {
        ICharacterReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ICharacterReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IClosestInteractiveBoundsRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IClosestInteractiveBoundsRequestedEventArgs>
    {
        IClosestInteractiveBoundsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IClosestInteractiveBoundsRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreAcceleratorKeys :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreAcceleratorKeys>
    {
        ICoreAcceleratorKeys(std::nullptr_t = nullptr) noexcept {}
        ICoreAcceleratorKeys(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreClosestInteractiveBoundsRequested :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreClosestInteractiveBoundsRequested>
    {
        ICoreClosestInteractiveBoundsRequested(std::nullptr_t = nullptr) noexcept {}
        ICoreClosestInteractiveBoundsRequested(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreComponentFocusable :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreComponentFocusable>
    {
        ICoreComponentFocusable(std::nullptr_t = nullptr) noexcept {}
        ICoreComponentFocusable(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreCursor :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreCursor>
    {
        ICoreCursor(std::nullptr_t = nullptr) noexcept {}
        ICoreCursor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreCursorFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreCursorFactory>
    {
        ICoreCursorFactory(std::nullptr_t = nullptr) noexcept {}
        ICoreCursorFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreDispatcher :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreDispatcher>,
        impl::require<Windows::UI::Core::ICoreDispatcher, Windows::UI::Core::ICoreAcceleratorKeys>
    {
        ICoreDispatcher(std::nullptr_t = nullptr) noexcept {}
        ICoreDispatcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreDispatcher2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreDispatcher2>
    {
        ICoreDispatcher2(std::nullptr_t = nullptr) noexcept {}
        ICoreDispatcher2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreDispatcherWithTaskPriority :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreDispatcherWithTaskPriority>
    {
        ICoreDispatcherWithTaskPriority(std::nullptr_t = nullptr) noexcept {}
        ICoreDispatcherWithTaskPriority(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreIndependentInputSourceController :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreIndependentInputSourceController>
    {
        ICoreIndependentInputSourceController(std::nullptr_t = nullptr) noexcept {}
        ICoreIndependentInputSourceController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreIndependentInputSourceControllerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreIndependentInputSourceControllerStatics>
    {
        ICoreIndependentInputSourceControllerStatics(std::nullptr_t = nullptr) noexcept {}
        ICoreIndependentInputSourceControllerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreInputSourceBase :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreInputSourceBase>
    {
        ICoreInputSourceBase(std::nullptr_t = nullptr) noexcept {}
        ICoreInputSourceBase(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreKeyboardInputSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreKeyboardInputSource>
    {
        ICoreKeyboardInputSource(std::nullptr_t = nullptr) noexcept {}
        ICoreKeyboardInputSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreKeyboardInputSource2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreKeyboardInputSource2>
    {
        ICoreKeyboardInputSource2(std::nullptr_t = nullptr) noexcept {}
        ICoreKeyboardInputSource2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICorePointerInputSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICorePointerInputSource>
    {
        ICorePointerInputSource(std::nullptr_t = nullptr) noexcept {}
        ICorePointerInputSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICorePointerInputSource2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICorePointerInputSource2>,
        impl::require<Windows::UI::Core::ICorePointerInputSource2, Windows::UI::Core::ICorePointerInputSource>
    {
        ICorePointerInputSource2(std::nullptr_t = nullptr) noexcept {}
        ICorePointerInputSource2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICorePointerRedirector :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICorePointerRedirector>
    {
        ICorePointerRedirector(std::nullptr_t = nullptr) noexcept {}
        ICorePointerRedirector(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreTouchHitTesting :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreTouchHitTesting>
    {
        ICoreTouchHitTesting(std::nullptr_t = nullptr) noexcept {}
        ICoreTouchHitTesting(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWindow :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWindow>
    {
        ICoreWindow(std::nullptr_t = nullptr) noexcept {}
        ICoreWindow(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWindow2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWindow2>
    {
        ICoreWindow2(std::nullptr_t = nullptr) noexcept {}
        ICoreWindow2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWindow3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWindow3>
    {
        ICoreWindow3(std::nullptr_t = nullptr) noexcept {}
        ICoreWindow3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWindow4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWindow4>
    {
        ICoreWindow4(std::nullptr_t = nullptr) noexcept {}
        ICoreWindow4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWindow5 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWindow5>
    {
        ICoreWindow5(std::nullptr_t = nullptr) noexcept {}
        ICoreWindow5(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWindowDialog :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWindowDialog>
    {
        ICoreWindowDialog(std::nullptr_t = nullptr) noexcept {}
        ICoreWindowDialog(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWindowDialogFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWindowDialogFactory>
    {
        ICoreWindowDialogFactory(std::nullptr_t = nullptr) noexcept {}
        ICoreWindowDialogFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWindowEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWindowEventArgs>
    {
        ICoreWindowEventArgs(std::nullptr_t = nullptr) noexcept {}
        ICoreWindowEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWindowFlyout :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWindowFlyout>
    {
        ICoreWindowFlyout(std::nullptr_t = nullptr) noexcept {}
        ICoreWindowFlyout(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWindowFlyoutFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWindowFlyoutFactory>
    {
        ICoreWindowFlyoutFactory(std::nullptr_t = nullptr) noexcept {}
        ICoreWindowFlyoutFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWindowPopupShowingEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWindowPopupShowingEventArgs>
    {
        ICoreWindowPopupShowingEventArgs(std::nullptr_t = nullptr) noexcept {}
        ICoreWindowPopupShowingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWindowResizeManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWindowResizeManager>
    {
        ICoreWindowResizeManager(std::nullptr_t = nullptr) noexcept {}
        ICoreWindowResizeManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWindowResizeManagerLayoutCapability :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWindowResizeManagerLayoutCapability>
    {
        ICoreWindowResizeManagerLayoutCapability(std::nullptr_t = nullptr) noexcept {}
        ICoreWindowResizeManagerLayoutCapability(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWindowResizeManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWindowResizeManagerStatics>
    {
        ICoreWindowResizeManagerStatics(std::nullptr_t = nullptr) noexcept {}
        ICoreWindowResizeManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWindowStatic :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWindowStatic>
    {
        ICoreWindowStatic(std::nullptr_t = nullptr) noexcept {}
        ICoreWindowStatic(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreWindowWithContext :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreWindowWithContext>
    {
        ICoreWindowWithContext(std::nullptr_t = nullptr) noexcept {}
        ICoreWindowWithContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IIdleDispatchedHandlerArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IIdleDispatchedHandlerArgs>
    {
        IIdleDispatchedHandlerArgs(std::nullptr_t = nullptr) noexcept {}
        IIdleDispatchedHandlerArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInitializeWithCoreWindow :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInitializeWithCoreWindow>
    {
        IInitializeWithCoreWindow(std::nullptr_t = nullptr) noexcept {}
        IInitializeWithCoreWindow(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInputEnabledEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInputEnabledEventArgs>,
        impl::require<Windows::UI::Core::IInputEnabledEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
    {
        IInputEnabledEventArgs(std::nullptr_t = nullptr) noexcept {}
        IInputEnabledEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IKeyEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IKeyEventArgs>,
        impl::require<Windows::UI::Core::IKeyEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
    {
        IKeyEventArgs(std::nullptr_t = nullptr) noexcept {}
        IKeyEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IKeyEventArgs2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IKeyEventArgs2>,
        impl::require<Windows::UI::Core::IKeyEventArgs2, Windows::UI::Core::ICoreWindowEventArgs>
    {
        IKeyEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IKeyEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPointerEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPointerEventArgs>,
        impl::require<Windows::UI::Core::IPointerEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
    {
        IPointerEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPointerEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISystemNavigationManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISystemNavigationManager>
    {
        ISystemNavigationManager(std::nullptr_t = nullptr) noexcept {}
        ISystemNavigationManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISystemNavigationManager2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISystemNavigationManager2>
    {
        ISystemNavigationManager2(std::nullptr_t = nullptr) noexcept {}
        ISystemNavigationManager2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISystemNavigationManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISystemNavigationManagerStatics>
    {
        ISystemNavigationManagerStatics(std::nullptr_t = nullptr) noexcept {}
        ISystemNavigationManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITouchHitTestingEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITouchHitTestingEventArgs>,
        impl::require<Windows::UI::Core::ITouchHitTestingEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
    {
        ITouchHitTestingEventArgs(std::nullptr_t = nullptr) noexcept {}
        ITouchHitTestingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVisibilityChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVisibilityChangedEventArgs>,
        impl::require<Windows::UI::Core::IVisibilityChangedEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
    {
        IVisibilityChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IVisibilityChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowActivatedEventArgs>,
        impl::require<Windows::UI::Core::IWindowActivatedEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
    {
        IWindowActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWindowActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowSizeChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowSizeChangedEventArgs>,
        impl::require<Windows::UI::Core::IWindowSizeChangedEventArgs, Windows::UI::Core::ICoreWindowEventArgs>
    {
        IWindowSizeChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWindowSizeChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
