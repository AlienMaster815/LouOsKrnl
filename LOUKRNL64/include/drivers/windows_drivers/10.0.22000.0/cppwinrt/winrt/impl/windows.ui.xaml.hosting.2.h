// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Hosting_2_H
#define WINRT_Windows_UI_Xaml_Hosting_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.WindowManagement.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.1.h"
#include "winrt/impl/Windows.UI.Xaml.Hosting.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Hosting
{
    struct __declspec(empty_bases) DesignerAppExitedEventArgs : Windows::UI::Xaml::Hosting::IDesignerAppExitedEventArgs
    {
        DesignerAppExitedEventArgs(std::nullptr_t) noexcept {}
        DesignerAppExitedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Hosting::IDesignerAppExitedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DesignerAppManager : Windows::UI::Xaml::Hosting::IDesignerAppManager,
        impl::require<DesignerAppManager, Windows::Foundation::IClosable>
    {
        DesignerAppManager(std::nullptr_t) noexcept {}
        DesignerAppManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Hosting::IDesignerAppManager(ptr, take_ownership_from_abi) {}
        explicit DesignerAppManager(param::hstring const& appUserModelId);
    };
    struct __declspec(empty_bases) DesignerAppView : Windows::UI::Xaml::Hosting::IDesignerAppView,
        impl::require<DesignerAppView, Windows::Foundation::IClosable>
    {
        DesignerAppView(std::nullptr_t) noexcept {}
        DesignerAppView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Hosting::IDesignerAppView(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DesktopWindowXamlSource : Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource,
        impl::require<DesktopWindowXamlSource, Windows::Foundation::IClosable>
    {
        DesktopWindowXamlSource(std::nullptr_t) noexcept {}
        DesktopWindowXamlSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource(ptr, take_ownership_from_abi) {}
        DesktopWindowXamlSource();
    };
    struct __declspec(empty_bases) DesktopWindowXamlSourceGotFocusEventArgs : Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceGotFocusEventArgs
    {
        DesktopWindowXamlSourceGotFocusEventArgs(std::nullptr_t) noexcept {}
        DesktopWindowXamlSourceGotFocusEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceGotFocusEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DesktopWindowXamlSourceTakeFocusRequestedEventArgs : Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceTakeFocusRequestedEventArgs
    {
        DesktopWindowXamlSourceTakeFocusRequestedEventArgs(std::nullptr_t) noexcept {}
        DesktopWindowXamlSourceTakeFocusRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceTakeFocusRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ElementCompositionPreview : Windows::UI::Xaml::Hosting::IElementCompositionPreview
    {
        ElementCompositionPreview(std::nullptr_t) noexcept {}
        ElementCompositionPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Hosting::IElementCompositionPreview(ptr, take_ownership_from_abi) {}
        static auto GetElementVisual(Windows::UI::Xaml::UIElement const& element);
        static auto GetElementChildVisual(Windows::UI::Xaml::UIElement const& element);
        static auto SetElementChildVisual(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::Visual const& visual);
        static auto GetScrollViewerManipulationPropertySet(Windows::UI::Xaml::Controls::ScrollViewer const& scrollViewer);
        static auto SetImplicitShowAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation);
        static auto SetImplicitHideAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation);
        static auto SetIsTranslationEnabled(Windows::UI::Xaml::UIElement const& element, bool value);
        static auto GetPointerPositionPropertySet(Windows::UI::Xaml::UIElement const& targetElement);
        static auto SetAppWindowContent(Windows::UI::WindowManagement::AppWindow const& appWindow, Windows::UI::Xaml::UIElement const& xamlContent);
        static auto GetAppWindowContent(Windows::UI::WindowManagement::AppWindow const& appWindow);
    };
    struct __declspec(empty_bases) WindowsXamlManager : Windows::UI::Xaml::Hosting::IWindowsXamlManager,
        impl::require<WindowsXamlManager, Windows::Foundation::IClosable>
    {
        WindowsXamlManager(std::nullptr_t) noexcept {}
        WindowsXamlManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Hosting::IWindowsXamlManager(ptr, take_ownership_from_abi) {}
        static auto InitializeForCurrentThread();
    };
    struct __declspec(empty_bases) XamlSourceFocusNavigationRequest : Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest
    {
        XamlSourceFocusNavigationRequest(std::nullptr_t) noexcept {}
        XamlSourceFocusNavigationRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest(ptr, take_ownership_from_abi) {}
        explicit XamlSourceFocusNavigationRequest(Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationReason const& reason);
        XamlSourceFocusNavigationRequest(Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationReason const& reason, Windows::Foundation::Rect const& hintRect);
        XamlSourceFocusNavigationRequest(Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationReason const& reason, Windows::Foundation::Rect const& hintRect, winrt::guid const& correlationId);
    };
    struct __declspec(empty_bases) XamlSourceFocusNavigationResult : Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResult
    {
        XamlSourceFocusNavigationResult(std::nullptr_t) noexcept {}
        XamlSourceFocusNavigationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResult(ptr, take_ownership_from_abi) {}
        explicit XamlSourceFocusNavigationResult(bool focusMoved);
    };
    struct __declspec(empty_bases) XamlUIPresenter : Windows::UI::Xaml::Hosting::IXamlUIPresenter
    {
        XamlUIPresenter(std::nullptr_t) noexcept {}
        XamlUIPresenter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Hosting::IXamlUIPresenter(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto CompleteTimelinesAutomatically();
        static auto CompleteTimelinesAutomatically(bool value);
        static auto SetHost(Windows::UI::Xaml::Hosting::IXamlUIPresenterHost const& host);
        static auto NotifyWindowSizeChanged();
        static auto GetFlyoutPlacementTargetInfo(Windows::UI::Xaml::FrameworkElement const& placementTarget, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const& preferredPlacement, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode& targetPreferredPlacement, bool& allowFallbacks);
        static auto GetFlyoutPlacement(Windows::Foundation::Rect const& placementTargetBounds, Windows::Foundation::Size const& controlSize, Windows::Foundation::Size const& minControlSize, Windows::Foundation::Rect const& containerRect, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const& targetPreferredPlacement, bool allowFallbacks, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode& chosenPlacement);
    };
}
#endif
