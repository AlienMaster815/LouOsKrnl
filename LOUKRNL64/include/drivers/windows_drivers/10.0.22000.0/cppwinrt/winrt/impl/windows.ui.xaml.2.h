// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_2_H
#define WINRT_Windows_UI_Xaml_2_H
#include "winrt/impl/Windows.ApplicationModel.2.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/impl/Windows.ApplicationModel.Core.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Peers.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.2.h"
#include "winrt/impl/Windows.UI.Xaml.Input.2.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.2.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml
{
    struct ApplicationInitializationCallback : Windows::Foundation::IUnknown
    {
        ApplicationInitializationCallback(std::nullptr_t = nullptr) noexcept {}
        ApplicationInitializationCallback(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ApplicationInitializationCallback(L lambda);
        template <typename F> ApplicationInitializationCallback(F* function);
        template <typename O, typename M> ApplicationInitializationCallback(O* object, M method);
        template <typename O, typename M> ApplicationInitializationCallback(com_ptr<O>&& object, M method);
        template <typename O, typename M> ApplicationInitializationCallback(weak_ref<O>&& object, M method);
        auto operator()(Windows::UI::Xaml::ApplicationInitializationCallbackParams const& p) const;
    };
    struct BindingFailedEventHandler : Windows::Foundation::IUnknown
    {
        BindingFailedEventHandler(std::nullptr_t = nullptr) noexcept {}
        BindingFailedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> BindingFailedEventHandler(L lambda);
        template <typename F> BindingFailedEventHandler(F* function);
        template <typename O, typename M> BindingFailedEventHandler(O* object, M method);
        template <typename O, typename M> BindingFailedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> BindingFailedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::BindingFailedEventArgs const& e) const;
    };
    struct CreateDefaultValueCallback : Windows::Foundation::IUnknown
    {
        CreateDefaultValueCallback(std::nullptr_t = nullptr) noexcept {}
        CreateDefaultValueCallback(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> CreateDefaultValueCallback(L lambda);
        template <typename F> CreateDefaultValueCallback(F* function);
        template <typename O, typename M> CreateDefaultValueCallback(O* object, M method);
        template <typename O, typename M> CreateDefaultValueCallback(com_ptr<O>&& object, M method);
        template <typename O, typename M> CreateDefaultValueCallback(weak_ref<O>&& object, M method);
        auto operator()() const;
    };
    struct DependencyPropertyChangedCallback : Windows::Foundation::IUnknown
    {
        DependencyPropertyChangedCallback(std::nullptr_t = nullptr) noexcept {}
        DependencyPropertyChangedCallback(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DependencyPropertyChangedCallback(L lambda);
        template <typename F> DependencyPropertyChangedCallback(F* function);
        template <typename O, typename M> DependencyPropertyChangedCallback(O* object, M method);
        template <typename O, typename M> DependencyPropertyChangedCallback(com_ptr<O>&& object, M method);
        template <typename O, typename M> DependencyPropertyChangedCallback(weak_ref<O>&& object, M method);
        auto operator()(Windows::UI::Xaml::DependencyObject const& sender, Windows::UI::Xaml::DependencyProperty const& dp) const;
    };
    struct DependencyPropertyChangedEventHandler : Windows::Foundation::IUnknown
    {
        DependencyPropertyChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        DependencyPropertyChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DependencyPropertyChangedEventHandler(L lambda);
        template <typename F> DependencyPropertyChangedEventHandler(F* function);
        template <typename O, typename M> DependencyPropertyChangedEventHandler(O* object, M method);
        template <typename O, typename M> DependencyPropertyChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DependencyPropertyChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::DependencyPropertyChangedEventArgs const& e) const;
    };
    struct DragEventHandler : Windows::Foundation::IUnknown
    {
        DragEventHandler(std::nullptr_t = nullptr) noexcept {}
        DragEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DragEventHandler(L lambda);
        template <typename F> DragEventHandler(F* function);
        template <typename O, typename M> DragEventHandler(O* object, M method);
        template <typename O, typename M> DragEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DragEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::DragEventArgs const& e) const;
    };
    struct EnteredBackgroundEventHandler : Windows::Foundation::IUnknown
    {
        EnteredBackgroundEventHandler(std::nullptr_t = nullptr) noexcept {}
        EnteredBackgroundEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> EnteredBackgroundEventHandler(L lambda);
        template <typename F> EnteredBackgroundEventHandler(F* function);
        template <typename O, typename M> EnteredBackgroundEventHandler(O* object, M method);
        template <typename O, typename M> EnteredBackgroundEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> EnteredBackgroundEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::EnteredBackgroundEventArgs const& e) const;
    };
    struct ExceptionRoutedEventHandler : Windows::Foundation::IUnknown
    {
        ExceptionRoutedEventHandler(std::nullptr_t = nullptr) noexcept {}
        ExceptionRoutedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ExceptionRoutedEventHandler(L lambda);
        template <typename F> ExceptionRoutedEventHandler(F* function);
        template <typename O, typename M> ExceptionRoutedEventHandler(O* object, M method);
        template <typename O, typename M> ExceptionRoutedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ExceptionRoutedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::ExceptionRoutedEventArgs const& e) const;
    };
    struct LeavingBackgroundEventHandler : Windows::Foundation::IUnknown
    {
        LeavingBackgroundEventHandler(std::nullptr_t = nullptr) noexcept {}
        LeavingBackgroundEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> LeavingBackgroundEventHandler(L lambda);
        template <typename F> LeavingBackgroundEventHandler(F* function);
        template <typename O, typename M> LeavingBackgroundEventHandler(O* object, M method);
        template <typename O, typename M> LeavingBackgroundEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> LeavingBackgroundEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::LeavingBackgroundEventArgs const& e) const;
    };
    struct PropertyChangedCallback : Windows::Foundation::IUnknown
    {
        PropertyChangedCallback(std::nullptr_t = nullptr) noexcept {}
        PropertyChangedCallback(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> PropertyChangedCallback(L lambda);
        template <typename F> PropertyChangedCallback(F* function);
        template <typename O, typename M> PropertyChangedCallback(O* object, M method);
        template <typename O, typename M> PropertyChangedCallback(com_ptr<O>&& object, M method);
        template <typename O, typename M> PropertyChangedCallback(weak_ref<O>&& object, M method);
        auto operator()(Windows::UI::Xaml::DependencyObject const& d, Windows::UI::Xaml::DependencyPropertyChangedEventArgs const& e) const;
    };
    struct RoutedEventHandler : Windows::Foundation::IUnknown
    {
        RoutedEventHandler(std::nullptr_t = nullptr) noexcept {}
        RoutedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> RoutedEventHandler(L lambda);
        template <typename F> RoutedEventHandler(F* function);
        template <typename O, typename M> RoutedEventHandler(O* object, M method);
        template <typename O, typename M> RoutedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> RoutedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& e) const;
    };
    struct SizeChangedEventHandler : Windows::Foundation::IUnknown
    {
        SizeChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        SizeChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> SizeChangedEventHandler(L lambda);
        template <typename F> SizeChangedEventHandler(F* function);
        template <typename O, typename M> SizeChangedEventHandler(O* object, M method);
        template <typename O, typename M> SizeChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> SizeChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::SizeChangedEventArgs const& e) const;
    };
    struct SuspendingEventHandler : Windows::Foundation::IUnknown
    {
        SuspendingEventHandler(std::nullptr_t = nullptr) noexcept {}
        SuspendingEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> SuspendingEventHandler(L lambda);
        template <typename F> SuspendingEventHandler(F* function);
        template <typename O, typename M> SuspendingEventHandler(O* object, M method);
        template <typename O, typename M> SuspendingEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> SuspendingEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::SuspendingEventArgs const& e) const;
    };
    struct UnhandledExceptionEventHandler : Windows::Foundation::IUnknown
    {
        UnhandledExceptionEventHandler(std::nullptr_t = nullptr) noexcept {}
        UnhandledExceptionEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> UnhandledExceptionEventHandler(L lambda);
        template <typename F> UnhandledExceptionEventHandler(F* function);
        template <typename O, typename M> UnhandledExceptionEventHandler(O* object, M method);
        template <typename O, typename M> UnhandledExceptionEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> UnhandledExceptionEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::UnhandledExceptionEventArgs const& e) const;
    };
    struct VisualStateChangedEventHandler : Windows::Foundation::IUnknown
    {
        VisualStateChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        VisualStateChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> VisualStateChangedEventHandler(L lambda);
        template <typename F> VisualStateChangedEventHandler(F* function);
        template <typename O, typename M> VisualStateChangedEventHandler(O* object, M method);
        template <typename O, typename M> VisualStateChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> VisualStateChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::VisualStateChangedEventArgs const& e) const;
    };
    struct WindowActivatedEventHandler : Windows::Foundation::IUnknown
    {
        WindowActivatedEventHandler(std::nullptr_t = nullptr) noexcept {}
        WindowActivatedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> WindowActivatedEventHandler(L lambda);
        template <typename F> WindowActivatedEventHandler(F* function);
        template <typename O, typename M> WindowActivatedEventHandler(O* object, M method);
        template <typename O, typename M> WindowActivatedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> WindowActivatedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Core::WindowActivatedEventArgs const& e) const;
    };
    struct WindowClosedEventHandler : Windows::Foundation::IUnknown
    {
        WindowClosedEventHandler(std::nullptr_t = nullptr) noexcept {}
        WindowClosedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> WindowClosedEventHandler(L lambda);
        template <typename F> WindowClosedEventHandler(F* function);
        template <typename O, typename M> WindowClosedEventHandler(O* object, M method);
        template <typename O, typename M> WindowClosedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> WindowClosedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Core::CoreWindowEventArgs const& e) const;
    };
    struct WindowSizeChangedEventHandler : Windows::Foundation::IUnknown
    {
        WindowSizeChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        WindowSizeChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> WindowSizeChangedEventHandler(L lambda);
        template <typename F> WindowSizeChangedEventHandler(F* function);
        template <typename O, typename M> WindowSizeChangedEventHandler(O* object, M method);
        template <typename O, typename M> WindowSizeChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> WindowSizeChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Core::WindowSizeChangedEventArgs const& e) const;
    };
    struct WindowVisibilityChangedEventHandler : Windows::Foundation::IUnknown
    {
        WindowVisibilityChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        WindowVisibilityChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> WindowVisibilityChangedEventHandler(L lambda);
        template <typename F> WindowVisibilityChangedEventHandler(F* function);
        template <typename O, typename M> WindowVisibilityChangedEventHandler(O* object, M method);
        template <typename O, typename M> WindowVisibilityChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> WindowVisibilityChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Core::VisibilityChangedEventArgs const& e) const;
    };
    struct CornerRadius
    {
        double TopLeft;
        double TopRight;
        double BottomRight;
        double BottomLeft;
    };
    inline bool operator==(CornerRadius const& left, CornerRadius const& right) noexcept
    {
        return left.TopLeft == right.TopLeft && left.TopRight == right.TopRight && left.BottomRight == right.BottomRight && left.BottomLeft == right.BottomLeft;
    }
    inline bool operator!=(CornerRadius const& left, CornerRadius const& right) noexcept
    {
        return !(left == right);
    }
    struct Duration
    {
        Windows::Foundation::TimeSpan TimeSpan;
        Windows::UI::Xaml::DurationType Type;
    };
    inline bool operator==(Duration const& left, Duration const& right) noexcept
    {
        return left.TimeSpan == right.TimeSpan && left.Type == right.Type;
    }
    inline bool operator!=(Duration const& left, Duration const& right) noexcept
    {
        return !(left == right);
    }
    struct GridLength
    {
        double Value;
        Windows::UI::Xaml::GridUnitType GridUnitType;
    };
    inline bool operator==(GridLength const& left, GridLength const& right) noexcept
    {
        return left.Value == right.Value && left.GridUnitType == right.GridUnitType;
    }
    inline bool operator!=(GridLength const& left, GridLength const& right) noexcept
    {
        return !(left == right);
    }
    struct Thickness
    {
        double Left;
        double Top;
        double Right;
        double Bottom;
    };
    inline bool operator==(Thickness const& left, Thickness const& right) noexcept
    {
        return left.Left == right.Left && left.Top == right.Top && left.Right == right.Right && left.Bottom == right.Bottom;
    }
    inline bool operator!=(Thickness const& left, Thickness const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AdaptiveTrigger : Windows::UI::Xaml::IAdaptiveTrigger,
        impl::base<AdaptiveTrigger, Windows::UI::Xaml::StateTriggerBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<AdaptiveTrigger, Windows::UI::Xaml::IStateTriggerBase, Windows::UI::Xaml::IStateTriggerBaseProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        AdaptiveTrigger(std::nullptr_t) noexcept {}
        AdaptiveTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IAdaptiveTrigger(ptr, take_ownership_from_abi) {}
        AdaptiveTrigger();
        [[nodiscard]] static auto MinWindowWidthProperty();
        [[nodiscard]] static auto MinWindowHeightProperty();
    };
    struct __declspec(empty_bases) Application : Windows::UI::Xaml::IApplication,
        impl::require<Application, Windows::UI::Xaml::IApplication2, Windows::UI::Xaml::IApplication3, Windows::UI::Xaml::IApplicationOverrides, Windows::UI::Xaml::IApplicationOverrides2>
    {
        Application(std::nullptr_t) noexcept {}
        Application(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IApplication(ptr, take_ownership_from_abi) {}
        Application();
        [[nodiscard]] static auto Current();
        static auto Start(Windows::UI::Xaml::ApplicationInitializationCallback const& callback);
        static auto LoadComponent(Windows::Foundation::IInspectable const& component, Windows::Foundation::Uri const& resourceLocator);
        static auto LoadComponent(Windows::Foundation::IInspectable const& component, Windows::Foundation::Uri const& resourceLocator, Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation const& componentResourceLocation);
    };
    struct __declspec(empty_bases) ApplicationInitializationCallbackParams : Windows::UI::Xaml::IApplicationInitializationCallbackParams
    {
        ApplicationInitializationCallbackParams(std::nullptr_t) noexcept {}
        ApplicationInitializationCallbackParams(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IApplicationInitializationCallbackParams(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BindingFailedEventArgs : Windows::UI::Xaml::IBindingFailedEventArgs
    {
        BindingFailedEventArgs(std::nullptr_t) noexcept {}
        BindingFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IBindingFailedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BringIntoViewOptions : Windows::UI::Xaml::IBringIntoViewOptions,
        impl::require<BringIntoViewOptions, Windows::UI::Xaml::IBringIntoViewOptions2>
    {
        BringIntoViewOptions(std::nullptr_t) noexcept {}
        BringIntoViewOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IBringIntoViewOptions(ptr, take_ownership_from_abi) {}
        BringIntoViewOptions();
    };
    struct __declspec(empty_bases) BringIntoViewRequestedEventArgs : Windows::UI::Xaml::IBringIntoViewRequestedEventArgs,
        impl::base<BringIntoViewRequestedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<BringIntoViewRequestedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
    {
        BringIntoViewRequestedEventArgs(std::nullptr_t) noexcept {}
        BringIntoViewRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IBringIntoViewRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BrushTransition : Windows::UI::Xaml::IBrushTransition
    {
        BrushTransition(std::nullptr_t) noexcept {}
        BrushTransition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IBrushTransition(ptr, take_ownership_from_abi) {}
        BrushTransition();
    };
    struct __declspec(empty_bases) ColorPaletteResources : Windows::UI::Xaml::IColorPaletteResources,
        impl::base<ColorPaletteResources, Windows::UI::Xaml::ResourceDictionary, Windows::UI::Xaml::DependencyObject>,
        impl::require<ColorPaletteResources, Windows::UI::Xaml::IResourceDictionary, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable>>, Windows::Foundation::Collections::IMap<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable>, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ColorPaletteResources(std::nullptr_t) noexcept {}
        ColorPaletteResources(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IColorPaletteResources(ptr, take_ownership_from_abi) {}
        ColorPaletteResources();
    };
    struct __declspec(empty_bases) CornerRadiusHelper : Windows::UI::Xaml::ICornerRadiusHelper
    {
        CornerRadiusHelper(std::nullptr_t) noexcept {}
        CornerRadiusHelper(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::ICornerRadiusHelper(ptr, take_ownership_from_abi) {}
        static auto FromRadii(double topLeft, double topRight, double bottomRight, double bottomLeft);
        static auto FromUniformRadius(double uniformRadius);
    };
    struct __declspec(empty_bases) DataContextChangedEventArgs : Windows::UI::Xaml::IDataContextChangedEventArgs
    {
        DataContextChangedEventArgs(std::nullptr_t) noexcept {}
        DataContextChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IDataContextChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DataTemplate : Windows::UI::Xaml::IDataTemplate,
        impl::base<DataTemplate, Windows::UI::Xaml::FrameworkTemplate, Windows::UI::Xaml::DependencyObject>,
        impl::require<DataTemplate, Windows::UI::Xaml::IElementFactory, Windows::UI::Xaml::IFrameworkTemplate, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        DataTemplate(std::nullptr_t) noexcept {}
        DataTemplate(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IDataTemplate(ptr, take_ownership_from_abi) {}
        DataTemplate();
        [[nodiscard]] static auto ExtensionInstanceProperty();
        static auto GetExtensionInstance(Windows::UI::Xaml::FrameworkElement const& element);
        static auto SetExtensionInstance(Windows::UI::Xaml::FrameworkElement const& element, Windows::UI::Xaml::IDataTemplateExtension const& value);
    };
    struct __declspec(empty_bases) DataTemplateKey : Windows::UI::Xaml::IDataTemplateKey
    {
        DataTemplateKey(std::nullptr_t) noexcept {}
        DataTemplateKey(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IDataTemplateKey(ptr, take_ownership_from_abi) {}
        DataTemplateKey();
        explicit DataTemplateKey(Windows::Foundation::IInspectable const& dataType);
    };
    struct __declspec(empty_bases) DebugSettings : Windows::UI::Xaml::IDebugSettings,
        impl::require<DebugSettings, Windows::UI::Xaml::IDebugSettings2, Windows::UI::Xaml::IDebugSettings3, Windows::UI::Xaml::IDebugSettings4>
    {
        DebugSettings(std::nullptr_t) noexcept {}
        DebugSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IDebugSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DependencyObject : Windows::UI::Xaml::IDependencyObject,
        impl::require<DependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        DependencyObject(std::nullptr_t) noexcept {}
        DependencyObject(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IDependencyObject(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DependencyObjectCollection : Windows::Foundation::Collections::IObservableVector<Windows::UI::Xaml::DependencyObject>,
        impl::base<DependencyObjectCollection, Windows::UI::Xaml::DependencyObject>,
        impl::require<DependencyObjectCollection, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        DependencyObjectCollection(std::nullptr_t) noexcept {}
        DependencyObjectCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IObservableVector<Windows::UI::Xaml::DependencyObject>(ptr, take_ownership_from_abi) {}
        DependencyObjectCollection();
    };
    struct __declspec(empty_bases) DependencyProperty : Windows::UI::Xaml::IDependencyProperty
    {
        DependencyProperty(std::nullptr_t) noexcept {}
        DependencyProperty(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IDependencyProperty(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto UnsetValue();
        static auto Register(param::hstring const& name, Windows::UI::Xaml::Interop::TypeName const& propertyType, Windows::UI::Xaml::Interop::TypeName const& ownerType, Windows::UI::Xaml::PropertyMetadata const& typeMetadata);
        static auto RegisterAttached(param::hstring const& name, Windows::UI::Xaml::Interop::TypeName const& propertyType, Windows::UI::Xaml::Interop::TypeName const& ownerType, Windows::UI::Xaml::PropertyMetadata const& defaultMetadata);
    };
    struct __declspec(empty_bases) DependencyPropertyChangedEventArgs : Windows::UI::Xaml::IDependencyPropertyChangedEventArgs
    {
        DependencyPropertyChangedEventArgs(std::nullptr_t) noexcept {}
        DependencyPropertyChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IDependencyPropertyChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DispatcherTimer : Windows::UI::Xaml::IDispatcherTimer
    {
        DispatcherTimer(std::nullptr_t) noexcept {}
        DispatcherTimer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IDispatcherTimer(ptr, take_ownership_from_abi) {}
        DispatcherTimer();
    };
    struct __declspec(empty_bases) DragEventArgs : Windows::UI::Xaml::IDragEventArgs,
        impl::base<DragEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<DragEventArgs, Windows::UI::Xaml::IDragEventArgs2, Windows::UI::Xaml::IDragEventArgs3, Windows::UI::Xaml::IRoutedEventArgs>
    {
        DragEventArgs(std::nullptr_t) noexcept {}
        DragEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IDragEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DragOperationDeferral : Windows::UI::Xaml::IDragOperationDeferral
    {
        DragOperationDeferral(std::nullptr_t) noexcept {}
        DragOperationDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IDragOperationDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DragStartingEventArgs : Windows::UI::Xaml::IDragStartingEventArgs,
        impl::base<DragStartingEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<DragStartingEventArgs, Windows::UI::Xaml::IDragStartingEventArgs2, Windows::UI::Xaml::IRoutedEventArgs>
    {
        DragStartingEventArgs(std::nullptr_t) noexcept {}
        DragStartingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IDragStartingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DragUI : Windows::UI::Xaml::IDragUI
    {
        DragUI(std::nullptr_t) noexcept {}
        DragUI(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IDragUI(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DragUIOverride : Windows::UI::Xaml::IDragUIOverride
    {
        DragUIOverride(std::nullptr_t) noexcept {}
        DragUIOverride(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IDragUIOverride(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DropCompletedEventArgs : Windows::UI::Xaml::IDropCompletedEventArgs,
        impl::base<DropCompletedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<DropCompletedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
    {
        DropCompletedEventArgs(std::nullptr_t) noexcept {}
        DropCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IDropCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DurationHelper : Windows::UI::Xaml::IDurationHelper
    {
        DurationHelper(std::nullptr_t) noexcept {}
        DurationHelper(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IDurationHelper(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Automatic();
        [[nodiscard]] static auto Forever();
        static auto Compare(Windows::UI::Xaml::Duration const& duration1, Windows::UI::Xaml::Duration const& duration2);
        static auto FromTimeSpan(Windows::Foundation::TimeSpan const& timeSpan);
        static auto GetHasTimeSpan(Windows::UI::Xaml::Duration const& target);
        static auto Add(Windows::UI::Xaml::Duration const& target, Windows::UI::Xaml::Duration const& duration);
        static auto Equals(Windows::UI::Xaml::Duration const& target, Windows::UI::Xaml::Duration const& value);
        static auto Subtract(Windows::UI::Xaml::Duration const& target, Windows::UI::Xaml::Duration const& duration);
    };
    struct __declspec(empty_bases) EffectiveViewportChangedEventArgs : Windows::UI::Xaml::IEffectiveViewportChangedEventArgs
    {
        EffectiveViewportChangedEventArgs(std::nullptr_t) noexcept {}
        EffectiveViewportChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IEffectiveViewportChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ElementFactoryGetArgs : Windows::UI::Xaml::IElementFactoryGetArgs
    {
        ElementFactoryGetArgs(std::nullptr_t) noexcept {}
        ElementFactoryGetArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IElementFactoryGetArgs(ptr, take_ownership_from_abi) {}
        ElementFactoryGetArgs();
    };
    struct __declspec(empty_bases) ElementFactoryRecycleArgs : Windows::UI::Xaml::IElementFactoryRecycleArgs
    {
        ElementFactoryRecycleArgs(std::nullptr_t) noexcept {}
        ElementFactoryRecycleArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IElementFactoryRecycleArgs(ptr, take_ownership_from_abi) {}
        ElementFactoryRecycleArgs();
    };
    struct __declspec(empty_bases) ElementSoundPlayer : Windows::UI::Xaml::IElementSoundPlayer
    {
        ElementSoundPlayer(std::nullptr_t) noexcept {}
        ElementSoundPlayer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IElementSoundPlayer(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Volume();
        static auto Volume(double value);
        [[nodiscard]] static auto State();
        static auto State(Windows::UI::Xaml::ElementSoundPlayerState const& value);
        static auto Play(Windows::UI::Xaml::ElementSoundKind const& sound);
        [[nodiscard]] static auto SpatialAudioMode();
        static auto SpatialAudioMode(Windows::UI::Xaml::ElementSpatialAudioMode const& value);
    };
    struct __declspec(empty_bases) EventTrigger : Windows::UI::Xaml::IEventTrigger,
        impl::base<EventTrigger, Windows::UI::Xaml::TriggerBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<EventTrigger, Windows::UI::Xaml::ITriggerBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        EventTrigger(std::nullptr_t) noexcept {}
        EventTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IEventTrigger(ptr, take_ownership_from_abi) {}
        EventTrigger();
    };
    struct __declspec(empty_bases) ExceptionRoutedEventArgs : Windows::UI::Xaml::IExceptionRoutedEventArgs,
        impl::base<ExceptionRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<ExceptionRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
    {
        ExceptionRoutedEventArgs(std::nullptr_t) noexcept {}
        ExceptionRoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IExceptionRoutedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FrameworkElement : Windows::UI::Xaml::IFrameworkElement,
        impl::base<FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<FrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        FrameworkElement(std::nullptr_t) noexcept {}
        FrameworkElement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IFrameworkElement(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto TagProperty();
        [[nodiscard]] static auto LanguageProperty();
        [[nodiscard]] static auto ActualWidthProperty();
        [[nodiscard]] static auto ActualHeightProperty();
        [[nodiscard]] static auto WidthProperty();
        [[nodiscard]] static auto HeightProperty();
        [[nodiscard]] static auto MinWidthProperty();
        [[nodiscard]] static auto MaxWidthProperty();
        [[nodiscard]] static auto MinHeightProperty();
        [[nodiscard]] static auto MaxHeightProperty();
        [[nodiscard]] static auto HorizontalAlignmentProperty();
        [[nodiscard]] static auto VerticalAlignmentProperty();
        [[nodiscard]] static auto MarginProperty();
        [[nodiscard]] static auto NameProperty();
        [[nodiscard]] static auto DataContextProperty();
        [[nodiscard]] static auto StyleProperty();
        [[nodiscard]] static auto FlowDirectionProperty();
        [[nodiscard]] static auto RequestedThemeProperty();
        [[nodiscard]] static auto AllowFocusOnInteractionProperty();
        [[nodiscard]] static auto FocusVisualMarginProperty();
        [[nodiscard]] static auto FocusVisualSecondaryThicknessProperty();
        [[nodiscard]] static auto FocusVisualPrimaryThicknessProperty();
        [[nodiscard]] static auto FocusVisualSecondaryBrushProperty();
        [[nodiscard]] static auto FocusVisualPrimaryBrushProperty();
        [[nodiscard]] static auto AllowFocusWhenDisabledProperty();
        static auto DeferTree(Windows::UI::Xaml::DependencyObject const& element);
        [[nodiscard]] static auto ActualThemeProperty();
    };
    struct __declspec(empty_bases) FrameworkTemplate : Windows::UI::Xaml::IFrameworkTemplate,
        impl::base<FrameworkTemplate, Windows::UI::Xaml::DependencyObject>,
        impl::require<FrameworkTemplate, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        FrameworkTemplate(std::nullptr_t) noexcept {}
        FrameworkTemplate(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IFrameworkTemplate(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FrameworkView : Windows::UI::Xaml::IFrameworkView,
        impl::require<FrameworkView, Windows::ApplicationModel::Core::IFrameworkView>
    {
        FrameworkView(std::nullptr_t) noexcept {}
        FrameworkView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IFrameworkView(ptr, take_ownership_from_abi) {}
        FrameworkView();
    };
    struct __declspec(empty_bases) FrameworkViewSource : Windows::UI::Xaml::IFrameworkViewSource,
        impl::require<FrameworkViewSource, Windows::ApplicationModel::Core::IFrameworkViewSource>
    {
        FrameworkViewSource(std::nullptr_t) noexcept {}
        FrameworkViewSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IFrameworkViewSource(ptr, take_ownership_from_abi) {}
        FrameworkViewSource();
    };
    struct __declspec(empty_bases) GridLengthHelper : Windows::UI::Xaml::IGridLengthHelper
    {
        GridLengthHelper(std::nullptr_t) noexcept {}
        GridLengthHelper(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IGridLengthHelper(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Auto();
        static auto FromPixels(double pixels);
        static auto FromValueAndType(double value, Windows::UI::Xaml::GridUnitType const& type);
        static auto GetIsAbsolute(Windows::UI::Xaml::GridLength const& target);
        static auto GetIsAuto(Windows::UI::Xaml::GridLength const& target);
        static auto GetIsStar(Windows::UI::Xaml::GridLength const& target);
        static auto Equals(Windows::UI::Xaml::GridLength const& target, Windows::UI::Xaml::GridLength const& value);
    };
    struct __declspec(empty_bases) MediaFailedRoutedEventArgs : Windows::UI::Xaml::IMediaFailedRoutedEventArgs,
        impl::base<MediaFailedRoutedEventArgs, Windows::UI::Xaml::ExceptionRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<MediaFailedRoutedEventArgs, Windows::UI::Xaml::IExceptionRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
    {
        MediaFailedRoutedEventArgs(std::nullptr_t) noexcept {}
        MediaFailedRoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IMediaFailedRoutedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PointHelper : Windows::UI::Xaml::IPointHelper
    {
        PointHelper(std::nullptr_t) noexcept {}
        PointHelper(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IPointHelper(ptr, take_ownership_from_abi) {}
        static auto FromCoordinates(float x, float y);
    };
    struct __declspec(empty_bases) PropertyMetadata : Windows::UI::Xaml::IPropertyMetadata
    {
        PropertyMetadata(std::nullptr_t) noexcept {}
        PropertyMetadata(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IPropertyMetadata(ptr, take_ownership_from_abi) {}
        explicit PropertyMetadata(Windows::Foundation::IInspectable const& defaultValue);
        PropertyMetadata(Windows::Foundation::IInspectable const& defaultValue, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback);
        static auto Create(Windows::Foundation::IInspectable const& defaultValue);
        static auto Create(Windows::Foundation::IInspectable const& defaultValue, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback);
        static auto Create(Windows::UI::Xaml::CreateDefaultValueCallback const& createDefaultValueCallback);
        static auto Create(Windows::UI::Xaml::CreateDefaultValueCallback const& createDefaultValueCallback, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback);
    };
    struct __declspec(empty_bases) PropertyPath : Windows::UI::Xaml::IPropertyPath,
        impl::base<PropertyPath, Windows::UI::Xaml::DependencyObject>,
        impl::require<PropertyPath, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        PropertyPath(std::nullptr_t) noexcept {}
        PropertyPath(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IPropertyPath(ptr, take_ownership_from_abi) {}
        explicit PropertyPath(param::hstring const& path);
    };
    struct __declspec(empty_bases) RectHelper : Windows::UI::Xaml::IRectHelper
    {
        RectHelper(std::nullptr_t) noexcept {}
        RectHelper(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IRectHelper(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Empty();
        static auto FromCoordinatesAndDimensions(float x, float y, float width, float height);
        static auto FromPoints(Windows::Foundation::Point const& point1, Windows::Foundation::Point const& point2);
        static auto FromLocationAndSize(Windows::Foundation::Point const& location, Windows::Foundation::Size const& size);
        static auto GetIsEmpty(Windows::Foundation::Rect const& target);
        static auto GetBottom(Windows::Foundation::Rect const& target);
        static auto GetLeft(Windows::Foundation::Rect const& target);
        static auto GetRight(Windows::Foundation::Rect const& target);
        static auto GetTop(Windows::Foundation::Rect const& target);
        static auto Contains(Windows::Foundation::Rect const& target, Windows::Foundation::Point const& point);
        static auto Equals(Windows::Foundation::Rect const& target, Windows::Foundation::Rect const& value);
        static auto Intersect(Windows::Foundation::Rect const& target, Windows::Foundation::Rect const& rect);
        static auto Union(Windows::Foundation::Rect const& target, Windows::Foundation::Point const& point);
        static auto Union(Windows::Foundation::Rect const& target, Windows::Foundation::Rect const& rect);
    };
    struct __declspec(empty_bases) ResourceDictionary : Windows::UI::Xaml::IResourceDictionary,
        impl::base<ResourceDictionary, Windows::UI::Xaml::DependencyObject>,
        impl::require<ResourceDictionary, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable>>, Windows::Foundation::Collections::IMap<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable>, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ResourceDictionary(std::nullptr_t) noexcept {}
        ResourceDictionary(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IResourceDictionary(ptr, take_ownership_from_abi) {}
        ResourceDictionary();
    };
    struct __declspec(empty_bases) RoutedEvent : Windows::UI::Xaml::IRoutedEvent
    {
        RoutedEvent(std::nullptr_t) noexcept {}
        RoutedEvent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IRoutedEvent(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RoutedEventArgs : Windows::UI::Xaml::IRoutedEventArgs
    {
        RoutedEventArgs(std::nullptr_t) noexcept {}
        RoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IRoutedEventArgs(ptr, take_ownership_from_abi) {}
        RoutedEventArgs();
    };
    struct __declspec(empty_bases) ScalarTransition : Windows::UI::Xaml::IScalarTransition
    {
        ScalarTransition(std::nullptr_t) noexcept {}
        ScalarTransition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IScalarTransition(ptr, take_ownership_from_abi) {}
        ScalarTransition();
    };
    struct __declspec(empty_bases) Setter : Windows::UI::Xaml::ISetter,
        impl::base<Setter, Windows::UI::Xaml::SetterBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<Setter, Windows::UI::Xaml::ISetter2, Windows::UI::Xaml::ISetterBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Setter(std::nullptr_t) noexcept {}
        Setter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::ISetter(ptr, take_ownership_from_abi) {}
        Setter();
        Setter(Windows::UI::Xaml::DependencyProperty const& targetProperty, Windows::Foundation::IInspectable const& value);
    };
    struct __declspec(empty_bases) SetterBase : Windows::UI::Xaml::ISetterBase,
        impl::base<SetterBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<SetterBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        SetterBase(std::nullptr_t) noexcept {}
        SetterBase(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::ISetterBase(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SetterBaseCollection : Windows::UI::Xaml::ISetterBaseCollection,
        impl::require<SetterBaseCollection, Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::SetterBase>, Windows::Foundation::Collections::IVector<Windows::UI::Xaml::SetterBase>>
    {
        SetterBaseCollection(std::nullptr_t) noexcept {}
        SetterBaseCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::ISetterBaseCollection(ptr, take_ownership_from_abi) {}
        SetterBaseCollection();
    };
    struct __declspec(empty_bases) SizeChangedEventArgs : Windows::UI::Xaml::ISizeChangedEventArgs,
        impl::base<SizeChangedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<SizeChangedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
    {
        SizeChangedEventArgs(std::nullptr_t) noexcept {}
        SizeChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::ISizeChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SizeHelper : Windows::UI::Xaml::ISizeHelper
    {
        SizeHelper(std::nullptr_t) noexcept {}
        SizeHelper(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::ISizeHelper(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Empty();
        static auto FromDimensions(float width, float height);
        static auto GetIsEmpty(Windows::Foundation::Size const& target);
        static auto Equals(Windows::Foundation::Size const& target, Windows::Foundation::Size const& value);
    };
    struct __declspec(empty_bases) StateTrigger : Windows::UI::Xaml::IStateTrigger,
        impl::base<StateTrigger, Windows::UI::Xaml::StateTriggerBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<StateTrigger, Windows::UI::Xaml::IStateTriggerBase, Windows::UI::Xaml::IStateTriggerBaseProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        StateTrigger(std::nullptr_t) noexcept {}
        StateTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IStateTrigger(ptr, take_ownership_from_abi) {}
        StateTrigger();
        [[nodiscard]] static auto IsActiveProperty();
    };
    struct __declspec(empty_bases) StateTriggerBase : Windows::UI::Xaml::IStateTriggerBase,
        impl::base<StateTriggerBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<StateTriggerBase, Windows::UI::Xaml::IStateTriggerBaseProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        StateTriggerBase(std::nullptr_t) noexcept {}
        StateTriggerBase(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IStateTriggerBase(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Style : Windows::UI::Xaml::IStyle,
        impl::base<Style, Windows::UI::Xaml::DependencyObject>,
        impl::require<Style, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Style(std::nullptr_t) noexcept {}
        Style(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IStyle(ptr, take_ownership_from_abi) {}
        Style();
        explicit Style(Windows::UI::Xaml::Interop::TypeName const& targetType);
    };
    struct __declspec(empty_bases) TargetPropertyPath : Windows::UI::Xaml::ITargetPropertyPath
    {
        TargetPropertyPath(std::nullptr_t) noexcept {}
        TargetPropertyPath(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::ITargetPropertyPath(ptr, take_ownership_from_abi) {}
        TargetPropertyPath();
        explicit TargetPropertyPath(Windows::UI::Xaml::DependencyProperty const& targetProperty);
    };
    struct __declspec(empty_bases) ThicknessHelper : Windows::UI::Xaml::IThicknessHelper
    {
        ThicknessHelper(std::nullptr_t) noexcept {}
        ThicknessHelper(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IThicknessHelper(ptr, take_ownership_from_abi) {}
        static auto FromLengths(double left, double top, double right, double bottom);
        static auto FromUniformLength(double uniformLength);
    };
    struct __declspec(empty_bases) TriggerAction : Windows::UI::Xaml::ITriggerAction,
        impl::base<TriggerAction, Windows::UI::Xaml::DependencyObject>,
        impl::require<TriggerAction, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        TriggerAction(std::nullptr_t) noexcept {}
        TriggerAction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::ITriggerAction(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TriggerActionCollection : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::TriggerAction>
    {
        TriggerActionCollection(std::nullptr_t) noexcept {}
        TriggerActionCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::TriggerAction>(ptr, take_ownership_from_abi) {}
        TriggerActionCollection();
    };
    struct __declspec(empty_bases) TriggerBase : Windows::UI::Xaml::ITriggerBase,
        impl::base<TriggerBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<TriggerBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        TriggerBase(std::nullptr_t) noexcept {}
        TriggerBase(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::ITriggerBase(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TriggerCollection : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::TriggerBase>
    {
        TriggerCollection(std::nullptr_t) noexcept {}
        TriggerCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::TriggerBase>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UIElement : Windows::UI::Xaml::IUIElement,
        impl::base<UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<UIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        UIElement(std::nullptr_t) noexcept {}
        UIElement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IUIElement(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto KeyDownEvent();
        [[nodiscard]] static auto KeyUpEvent();
        [[nodiscard]] static auto PointerEnteredEvent();
        [[nodiscard]] static auto PointerPressedEvent();
        [[nodiscard]] static auto PointerMovedEvent();
        [[nodiscard]] static auto PointerReleasedEvent();
        [[nodiscard]] static auto PointerExitedEvent();
        [[nodiscard]] static auto PointerCaptureLostEvent();
        [[nodiscard]] static auto PointerCanceledEvent();
        [[nodiscard]] static auto PointerWheelChangedEvent();
        [[nodiscard]] static auto TappedEvent();
        [[nodiscard]] static auto DoubleTappedEvent();
        [[nodiscard]] static auto HoldingEvent();
        [[nodiscard]] static auto RightTappedEvent();
        [[nodiscard]] static auto ManipulationStartingEvent();
        [[nodiscard]] static auto ManipulationInertiaStartingEvent();
        [[nodiscard]] static auto ManipulationStartedEvent();
        [[nodiscard]] static auto ManipulationDeltaEvent();
        [[nodiscard]] static auto ManipulationCompletedEvent();
        [[nodiscard]] static auto DragEnterEvent();
        [[nodiscard]] static auto DragLeaveEvent();
        [[nodiscard]] static auto DragOverEvent();
        [[nodiscard]] static auto DropEvent();
        [[nodiscard]] static auto AllowDropProperty();
        [[nodiscard]] static auto OpacityProperty();
        [[nodiscard]] static auto ClipProperty();
        [[nodiscard]] static auto RenderTransformProperty();
        [[nodiscard]] static auto ProjectionProperty();
        [[nodiscard]] static auto RenderTransformOriginProperty();
        [[nodiscard]] static auto IsHitTestVisibleProperty();
        [[nodiscard]] static auto VisibilityProperty();
        [[nodiscard]] static auto UseLayoutRoundingProperty();
        [[nodiscard]] static auto TransitionsProperty();
        [[nodiscard]] static auto CacheModeProperty();
        [[nodiscard]] static auto IsTapEnabledProperty();
        [[nodiscard]] static auto IsDoubleTapEnabledProperty();
        [[nodiscard]] static auto IsRightTapEnabledProperty();
        [[nodiscard]] static auto IsHoldingEnabledProperty();
        [[nodiscard]] static auto ManipulationModeProperty();
        [[nodiscard]] static auto PointerCapturesProperty();
        [[nodiscard]] static auto ShadowProperty();
        [[nodiscard]] static auto CompositeModeProperty();
        [[nodiscard]] static auto Transform3DProperty();
        [[nodiscard]] static auto CanDragProperty();
        static auto TryStartDirectManipulation(Windows::UI::Xaml::Input::Pointer const& value);
        [[nodiscard]] static auto ContextFlyoutProperty();
        [[nodiscard]] static auto ExitDisplayModeOnAccessKeyInvokedProperty();
        [[nodiscard]] static auto IsAccessKeyScopeProperty();
        [[nodiscard]] static auto AccessKeyScopeOwnerProperty();
        [[nodiscard]] static auto AccessKeyProperty();
        [[nodiscard]] static auto LightsProperty();
        [[nodiscard]] static auto KeyTipPlacementModeProperty();
        [[nodiscard]] static auto KeyTipHorizontalOffsetProperty();
        [[nodiscard]] static auto KeyTipVerticalOffsetProperty();
        [[nodiscard]] static auto XYFocusKeyboardNavigationProperty();
        [[nodiscard]] static auto XYFocusUpNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusDownNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusLeftNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusRightNavigationStrategyProperty();
        [[nodiscard]] static auto HighContrastAdjustmentProperty();
        [[nodiscard]] static auto TabFocusNavigationProperty();
        [[nodiscard]] static auto GettingFocusEvent();
        [[nodiscard]] static auto LosingFocusEvent();
        [[nodiscard]] static auto NoFocusCandidateFoundEvent();
        [[nodiscard]] static auto PreviewKeyDownEvent();
        [[nodiscard]] static auto CharacterReceivedEvent();
        [[nodiscard]] static auto PreviewKeyUpEvent();
        [[nodiscard]] static auto BringIntoViewRequestedEvent();
        [[nodiscard]] static auto ContextRequestedEvent();
        [[nodiscard]] static auto KeyTipTargetProperty();
        [[nodiscard]] static auto KeyboardAcceleratorPlacementTargetProperty();
        [[nodiscard]] static auto KeyboardAcceleratorPlacementModeProperty();
        static auto RegisterAsScrollPort(Windows::UI::Xaml::UIElement const& element);
        [[nodiscard]] static auto CanBeScrollAnchorProperty();
    };
    struct __declspec(empty_bases) UIElementWeakCollection : Windows::UI::Xaml::IUIElementWeakCollection,
        impl::require<UIElementWeakCollection, Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement>, Windows::Foundation::Collections::IVector<Windows::UI::Xaml::UIElement>>
    {
        UIElementWeakCollection(std::nullptr_t) noexcept {}
        UIElementWeakCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IUIElementWeakCollection(ptr, take_ownership_from_abi) {}
        UIElementWeakCollection();
    };
    struct __declspec(empty_bases) UnhandledExceptionEventArgs : Windows::UI::Xaml::IUnhandledExceptionEventArgs
    {
        UnhandledExceptionEventArgs(std::nullptr_t) noexcept {}
        UnhandledExceptionEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IUnhandledExceptionEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Vector3Transition : Windows::UI::Xaml::IVector3Transition
    {
        Vector3Transition(std::nullptr_t) noexcept {}
        Vector3Transition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IVector3Transition(ptr, take_ownership_from_abi) {}
        Vector3Transition();
    };
    struct __declspec(empty_bases) VisualState : Windows::UI::Xaml::IVisualState,
        impl::base<VisualState, Windows::UI::Xaml::DependencyObject>,
        impl::require<VisualState, Windows::UI::Xaml::IVisualState2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        VisualState(std::nullptr_t) noexcept {}
        VisualState(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IVisualState(ptr, take_ownership_from_abi) {}
        VisualState();
    };
    struct __declspec(empty_bases) VisualStateChangedEventArgs : Windows::UI::Xaml::IVisualStateChangedEventArgs
    {
        VisualStateChangedEventArgs(std::nullptr_t) noexcept {}
        VisualStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IVisualStateChangedEventArgs(ptr, take_ownership_from_abi) {}
        VisualStateChangedEventArgs();
    };
    struct __declspec(empty_bases) VisualStateGroup : Windows::UI::Xaml::IVisualStateGroup,
        impl::base<VisualStateGroup, Windows::UI::Xaml::DependencyObject>,
        impl::require<VisualStateGroup, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        VisualStateGroup(std::nullptr_t) noexcept {}
        VisualStateGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IVisualStateGroup(ptr, take_ownership_from_abi) {}
        VisualStateGroup();
    };
    struct __declspec(empty_bases) VisualStateManager : Windows::UI::Xaml::IVisualStateManager,
        impl::base<VisualStateManager, Windows::UI::Xaml::DependencyObject>,
        impl::require<VisualStateManager, Windows::UI::Xaml::IVisualStateManagerProtected, Windows::UI::Xaml::IVisualStateManagerOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        VisualStateManager(std::nullptr_t) noexcept {}
        VisualStateManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IVisualStateManager(ptr, take_ownership_from_abi) {}
        VisualStateManager();
        static auto GetVisualStateGroups(Windows::UI::Xaml::FrameworkElement const& obj);
        [[nodiscard]] static auto CustomVisualStateManagerProperty();
        static auto GetCustomVisualStateManager(Windows::UI::Xaml::FrameworkElement const& obj);
        static auto SetCustomVisualStateManager(Windows::UI::Xaml::FrameworkElement const& obj, Windows::UI::Xaml::VisualStateManager const& value);
        static auto GoToState(Windows::UI::Xaml::Controls::Control const& control, param::hstring const& stateName, bool useTransitions);
    };
    struct __declspec(empty_bases) VisualTransition : Windows::UI::Xaml::IVisualTransition,
        impl::base<VisualTransition, Windows::UI::Xaml::DependencyObject>,
        impl::require<VisualTransition, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        VisualTransition(std::nullptr_t) noexcept {}
        VisualTransition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IVisualTransition(ptr, take_ownership_from_abi) {}
        VisualTransition();
    };
    struct __declspec(empty_bases) Window : Windows::UI::Xaml::IWindow,
        impl::require<Window, Windows::UI::Xaml::IWindow2, Windows::UI::Xaml::IWindow3, Windows::UI::Xaml::IWindow4>
    {
        Window(std::nullptr_t) noexcept {}
        Window(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IWindow(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Current();
    };
    struct __declspec(empty_bases) WindowCreatedEventArgs : Windows::UI::Xaml::IWindowCreatedEventArgs
    {
        WindowCreatedEventArgs(std::nullptr_t) noexcept {}
        WindowCreatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IWindowCreatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) XamlRoot : Windows::UI::Xaml::IXamlRoot
    {
        XamlRoot(std::nullptr_t) noexcept {}
        XamlRoot(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IXamlRoot(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) XamlRootChangedEventArgs : Windows::UI::Xaml::IXamlRootChangedEventArgs
    {
        XamlRootChangedEventArgs(std::nullptr_t) noexcept {}
        XamlRootChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::IXamlRootChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    template <typename D>
    class IApplicationOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IApplicationOverrides = winrt::Windows::UI::Xaml::IApplicationOverrides;
        WINRT_IMPL_AUTO(void) OnActivated(Windows::ApplicationModel::Activation::IActivatedEventArgs const& args) const;
        WINRT_IMPL_AUTO(void) OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs const& args) const;
        WINRT_IMPL_AUTO(void) OnFileActivated(Windows::ApplicationModel::Activation::FileActivatedEventArgs const& args) const;
        WINRT_IMPL_AUTO(void) OnSearchActivated(Windows::ApplicationModel::Activation::SearchActivatedEventArgs const& args) const;
        WINRT_IMPL_AUTO(void) OnShareTargetActivated(Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs const& args) const;
        WINRT_IMPL_AUTO(void) OnFileOpenPickerActivated(Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs const& args) const;
        WINRT_IMPL_AUTO(void) OnFileSavePickerActivated(Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs const& args) const;
        WINRT_IMPL_AUTO(void) OnCachedFileUpdaterActivated(Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs const& args) const;
        WINRT_IMPL_AUTO(void) OnWindowCreated(Windows::UI::Xaml::WindowCreatedEventArgs const& args) const;
    };
    template <typename D>
    class IApplicationOverrides2T
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IApplicationOverrides2 = winrt::Windows::UI::Xaml::IApplicationOverrides2;
        WINRT_IMPL_AUTO(void) OnBackgroundActivated(Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs const& args) const;
    };
    template <typename D>
    class IFrameworkElementOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IFrameworkElementOverrides = winrt::Windows::UI::Xaml::IFrameworkElementOverrides;
        WINRT_IMPL_AUTO(Windows::Foundation::Size) MeasureOverride(Windows::Foundation::Size const& availableSize) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Size) ArrangeOverride(Windows::Foundation::Size const& finalSize) const;
        WINRT_IMPL_AUTO(void) OnApplyTemplate() const;
    };
    template <typename D>
    class IFrameworkElementOverrides2T
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IFrameworkElementOverrides2 = winrt::Windows::UI::Xaml::IFrameworkElementOverrides2;
        WINRT_IMPL_AUTO(bool) GoToElementStateCore(param::hstring const& stateName, bool useTransitions) const;
    };
    template <typename D>
    class IUIElementOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IUIElementOverrides = winrt::Windows::UI::Xaml::IUIElementOverrides;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationPeer) OnCreateAutomationPeer() const;
        WINRT_IMPL_AUTO(void) OnDisconnectVisualChildren() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>>) FindSubElementsForTouchTargeting(Windows::Foundation::Point const& point, Windows::Foundation::Rect const& boundingRect) const;
    };
    template <typename D>
    class IUIElementOverrides7T
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IUIElementOverrides7 = winrt::Windows::UI::Xaml::IUIElementOverrides7;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::DependencyObject>) GetChildrenInTabFocusOrder() const;
        WINRT_IMPL_AUTO(void) OnProcessKeyboardAccelerators(Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args) const;
    };
    template <typename D>
    class IUIElementOverrides8T
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IUIElementOverrides8 = winrt::Windows::UI::Xaml::IUIElementOverrides8;
        WINRT_IMPL_AUTO(void) OnKeyboardAcceleratorInvoked(Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs const& args) const;
        WINRT_IMPL_AUTO(void) OnBringIntoViewRequested(Windows::UI::Xaml::BringIntoViewRequestedEventArgs const& e) const;
    };
    template <typename D>
    class IUIElementOverrides9T
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IUIElementOverrides9 = winrt::Windows::UI::Xaml::IUIElementOverrides9;
        WINRT_IMPL_AUTO(void) PopulatePropertyInfoOverride(param::hstring const& propertyName, Windows::UI::Composition::AnimationPropertyInfo const& animationPropertyInfo) const;
    };
    template <typename D>
    class IVisualStateManagerOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IVisualStateManagerOverrides = winrt::Windows::UI::Xaml::IVisualStateManagerOverrides;
        WINRT_IMPL_AUTO(bool) GoToStateCore(Windows::UI::Xaml::Controls::Control const& control, Windows::UI::Xaml::FrameworkElement const& templateRoot, param::hstring const& stateName, Windows::UI::Xaml::VisualStateGroup const& group, Windows::UI::Xaml::VisualState const& state, bool useTransitions) const;
    };
}
#endif
