// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Controls_Primitives_2_H
#define WINRT_Windows_UI_Xaml_Controls_Primitives_2_H
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.1.h"
#include "winrt/impl/Windows.UI.Xaml.Data.1.h"
#include "winrt/impl/Windows.UI.Xaml.Input.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Primitives
{
    struct DragCompletedEventHandler : Windows::Foundation::IUnknown
    {
        DragCompletedEventHandler(std::nullptr_t = nullptr) noexcept {}
        DragCompletedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DragCompletedEventHandler(L lambda);
        template <typename F> DragCompletedEventHandler(F* function);
        template <typename O, typename M> DragCompletedEventHandler(O* object, M method);
        template <typename O, typename M> DragCompletedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DragCompletedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs const& e) const;
    };
    struct DragDeltaEventHandler : Windows::Foundation::IUnknown
    {
        DragDeltaEventHandler(std::nullptr_t = nullptr) noexcept {}
        DragDeltaEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DragDeltaEventHandler(L lambda);
        template <typename F> DragDeltaEventHandler(F* function);
        template <typename O, typename M> DragDeltaEventHandler(O* object, M method);
        template <typename O, typename M> DragDeltaEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DragDeltaEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs const& e) const;
    };
    struct DragStartedEventHandler : Windows::Foundation::IUnknown
    {
        DragStartedEventHandler(std::nullptr_t = nullptr) noexcept {}
        DragStartedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DragStartedEventHandler(L lambda);
        template <typename F> DragStartedEventHandler(F* function);
        template <typename O, typename M> DragStartedEventHandler(O* object, M method);
        template <typename O, typename M> DragStartedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DragStartedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs const& e) const;
    };
    struct ItemsChangedEventHandler : Windows::Foundation::IUnknown
    {
        ItemsChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        ItemsChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ItemsChangedEventHandler(L lambda);
        template <typename F> ItemsChangedEventHandler(F* function);
        template <typename O, typename M> ItemsChangedEventHandler(O* object, M method);
        template <typename O, typename M> ItemsChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ItemsChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs const& e) const;
    };
    struct RangeBaseValueChangedEventHandler : Windows::Foundation::IUnknown
    {
        RangeBaseValueChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        RangeBaseValueChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> RangeBaseValueChangedEventHandler(L lambda);
        template <typename F> RangeBaseValueChangedEventHandler(F* function);
        template <typename O, typename M> RangeBaseValueChangedEventHandler(O* object, M method);
        template <typename O, typename M> RangeBaseValueChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> RangeBaseValueChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs const& e) const;
    };
    struct ScrollEventHandler : Windows::Foundation::IUnknown
    {
        ScrollEventHandler(std::nullptr_t = nullptr) noexcept {}
        ScrollEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ScrollEventHandler(L lambda);
        template <typename F> ScrollEventHandler(F* function);
        template <typename O, typename M> ScrollEventHandler(O* object, M method);
        template <typename O, typename M> ScrollEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ScrollEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs const& e) const;
    };
    struct GeneratorPosition
    {
        int32_t Index;
        int32_t Offset;
    };
    inline bool operator==(GeneratorPosition const& left, GeneratorPosition const& right) noexcept
    {
        return left.Index == right.Index && left.Offset == right.Offset;
    }
    inline bool operator!=(GeneratorPosition const& left, GeneratorPosition const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AppBarButtonTemplateSettings : Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings,
        impl::base<AppBarButtonTemplateSettings, Windows::UI::Xaml::DependencyObject>,
        impl::require<AppBarButtonTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        AppBarButtonTemplateSettings(std::nullptr_t) noexcept {}
        AppBarButtonTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBarTemplateSettings : Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings,
        impl::base<AppBarTemplateSettings, Windows::UI::Xaml::DependencyObject>,
        impl::require<AppBarTemplateSettings, Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        AppBarTemplateSettings(std::nullptr_t) noexcept {}
        AppBarTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBarToggleButtonTemplateSettings : Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings,
        impl::base<AppBarToggleButtonTemplateSettings, Windows::UI::Xaml::DependencyObject>,
        impl::require<AppBarToggleButtonTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        AppBarToggleButtonTemplateSettings(std::nullptr_t) noexcept {}
        AppBarToggleButtonTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ButtonBase : Windows::UI::Xaml::Controls::Primitives::IButtonBase,
        impl::base<ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<ButtonBase, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ButtonBase(std::nullptr_t) noexcept {}
        ButtonBase(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IButtonBase(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto ClickModeProperty();
        [[nodiscard]] static auto IsPointerOverProperty();
        [[nodiscard]] static auto IsPressedProperty();
        [[nodiscard]] static auto CommandProperty();
        [[nodiscard]] static auto CommandParameterProperty();
    };
    struct __declspec(empty_bases) CalendarPanel : Windows::UI::Xaml::Controls::Primitives::ICalendarPanel,
        impl::base<CalendarPanel, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<CalendarPanel, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::Controls::IPanel2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        CalendarPanel(std::nullptr_t) noexcept {}
        CalendarPanel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::ICalendarPanel(ptr, take_ownership_from_abi) {}
        CalendarPanel();
    };
    struct __declspec(empty_bases) CalendarViewTemplateSettings : Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings,
        impl::base<CalendarViewTemplateSettings, Windows::UI::Xaml::DependencyObject>,
        impl::require<CalendarViewTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        CalendarViewTemplateSettings(std::nullptr_t) noexcept {}
        CalendarViewTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CarouselPanel : Windows::UI::Xaml::Controls::Primitives::ICarouselPanel,
        impl::base<CarouselPanel, Windows::UI::Xaml::Controls::VirtualizingPanel, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<CarouselPanel, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, Windows::UI::Xaml::Controls::IVirtualizingPanel, Windows::UI::Xaml::Controls::IVirtualizingPanelProtected, Windows::UI::Xaml::Controls::IVirtualizingPanelOverrides, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::Controls::IPanel2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        CarouselPanel(std::nullptr_t) noexcept {}
        CarouselPanel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::ICarouselPanel(ptr, take_ownership_from_abi) {}
        CarouselPanel();
    };
    struct __declspec(empty_bases) ColorPickerSlider : Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider,
        impl::base<ColorPickerSlider, Windows::UI::Xaml::Controls::Slider, Windows::UI::Xaml::Controls::Primitives::RangeBase, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<ColorPickerSlider, Windows::UI::Xaml::Controls::ISlider, Windows::UI::Xaml::Controls::ISlider2, Windows::UI::Xaml::Controls::Primitives::IRangeBase, Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ColorPickerSlider(std::nullptr_t) noexcept {}
        ColorPickerSlider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider(ptr, take_ownership_from_abi) {}
        ColorPickerSlider();
        [[nodiscard]] static auto ColorChannelProperty();
    };
    struct __declspec(empty_bases) ColorSpectrum : Windows::UI::Xaml::Controls::Primitives::IColorSpectrum,
        impl::base<ColorSpectrum, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<ColorSpectrum, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ColorSpectrum(std::nullptr_t) noexcept {}
        ColorSpectrum(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IColorSpectrum(ptr, take_ownership_from_abi) {}
        ColorSpectrum();
        [[nodiscard]] static auto ColorProperty();
        [[nodiscard]] static auto HsvColorProperty();
        [[nodiscard]] static auto MinHueProperty();
        [[nodiscard]] static auto MaxHueProperty();
        [[nodiscard]] static auto MinSaturationProperty();
        [[nodiscard]] static auto MaxSaturationProperty();
        [[nodiscard]] static auto MinValueProperty();
        [[nodiscard]] static auto MaxValueProperty();
        [[nodiscard]] static auto ShapeProperty();
        [[nodiscard]] static auto ComponentsProperty();
    };
    struct __declspec(empty_bases) ComboBoxTemplateSettings : Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings,
        impl::base<ComboBoxTemplateSettings, Windows::UI::Xaml::DependencyObject>,
        impl::require<ComboBoxTemplateSettings, Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ComboBoxTemplateSettings(std::nullptr_t) noexcept {}
        ComboBoxTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CommandBarFlyoutCommandBar : Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBar,
        impl::base<CommandBarFlyoutCommandBar, Windows::UI::Xaml::Controls::CommandBar, Windows::UI::Xaml::Controls::AppBar, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<CommandBarFlyoutCommandBar, Windows::UI::Xaml::Controls::ICommandBar, Windows::UI::Xaml::Controls::ICommandBar2, Windows::UI::Xaml::Controls::ICommandBar3, Windows::UI::Xaml::Controls::IAppBar, Windows::UI::Xaml::Controls::IAppBar2, Windows::UI::Xaml::Controls::IAppBar3, Windows::UI::Xaml::Controls::IAppBar4, Windows::UI::Xaml::Controls::IAppBarOverrides, Windows::UI::Xaml::Controls::IAppBarOverrides3, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        CommandBarFlyoutCommandBar(std::nullptr_t) noexcept {}
        CommandBarFlyoutCommandBar(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBar(ptr, take_ownership_from_abi) {}
        CommandBarFlyoutCommandBar();
    };
    struct __declspec(empty_bases) CommandBarFlyoutCommandBarTemplateSettings : Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarTemplateSettings,
        impl::base<CommandBarFlyoutCommandBarTemplateSettings, Windows::UI::Xaml::DependencyObject>,
        impl::require<CommandBarFlyoutCommandBarTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        CommandBarFlyoutCommandBarTemplateSettings(std::nullptr_t) noexcept {}
        CommandBarFlyoutCommandBarTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CommandBarTemplateSettings : Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings,
        impl::base<CommandBarTemplateSettings, Windows::UI::Xaml::DependencyObject>,
        impl::require<CommandBarTemplateSettings, Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2, Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3, Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings4, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        CommandBarTemplateSettings(std::nullptr_t) noexcept {}
        CommandBarTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DragCompletedEventArgs : Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs,
        impl::base<DragCompletedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<DragCompletedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
    {
        DragCompletedEventArgs(std::nullptr_t) noexcept {}
        DragCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs(ptr, take_ownership_from_abi) {}
        DragCompletedEventArgs(double horizontalChange, double verticalChange, bool canceled);
    };
    struct __declspec(empty_bases) DragDeltaEventArgs : Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs,
        impl::base<DragDeltaEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<DragDeltaEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
    {
        DragDeltaEventArgs(std::nullptr_t) noexcept {}
        DragDeltaEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs(ptr, take_ownership_from_abi) {}
        DragDeltaEventArgs(double horizontalChange, double verticalChange);
    };
    struct __declspec(empty_bases) DragStartedEventArgs : Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs,
        impl::base<DragStartedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<DragStartedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
    {
        DragStartedEventArgs(std::nullptr_t) noexcept {}
        DragStartedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs(ptr, take_ownership_from_abi) {}
        DragStartedEventArgs(double horizontalOffset, double verticalOffset);
    };
    struct __declspec(empty_bases) FlyoutBase : Windows::UI::Xaml::Controls::Primitives::IFlyoutBase,
        impl::base<FlyoutBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<FlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        FlyoutBase(std::nullptr_t) noexcept {}
        FlyoutBase(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IFlyoutBase(ptr, take_ownership_from_abi) {}
        using Windows::UI::Xaml::Controls::Primitives::IFlyoutBase::ShowAt;
        using impl::consume_t<FlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>::ShowAt;
        [[nodiscard]] static auto PlacementProperty();
        [[nodiscard]] static auto AttachedFlyoutProperty();
        static auto GetAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& element);
        static auto SetAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& element, Windows::UI::Xaml::Controls::Primitives::FlyoutBase const& value);
        static auto ShowAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& flyoutOwner);
        [[nodiscard]] static auto AllowFocusOnInteractionProperty();
        [[nodiscard]] static auto LightDismissOverlayModeProperty();
        [[nodiscard]] static auto AllowFocusWhenDisabledProperty();
        [[nodiscard]] static auto ElementSoundModeProperty();
        [[nodiscard]] static auto OverlayInputPassThroughElementProperty();
        [[nodiscard]] static auto TargetProperty();
        [[nodiscard]] static auto ShowModeProperty();
        [[nodiscard]] static auto InputDevicePrefersPrimaryCommandsProperty();
        [[nodiscard]] static auto AreOpenCloseAnimationsEnabledProperty();
        [[nodiscard]] static auto IsOpenProperty();
        [[nodiscard]] static auto ShouldConstrainToRootBoundsProperty();
    };
    struct __declspec(empty_bases) FlyoutBaseClosingEventArgs : Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs
    {
        FlyoutBaseClosingEventArgs(std::nullptr_t) noexcept {}
        FlyoutBaseClosingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FlyoutShowOptions : Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptions
    {
        FlyoutShowOptions(std::nullptr_t) noexcept {}
        FlyoutShowOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptions(ptr, take_ownership_from_abi) {}
        FlyoutShowOptions();
    };
    struct __declspec(empty_bases) GeneratorPositionHelper : Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper
    {
        GeneratorPositionHelper(std::nullptr_t) noexcept {}
        GeneratorPositionHelper(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper(ptr, take_ownership_from_abi) {}
        static auto FromIndexAndOffset(int32_t index, int32_t offset);
    };
    struct __declspec(empty_bases) GridViewItemPresenter : Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter,
        impl::base<GridViewItemPresenter, Windows::UI::Xaml::Controls::ContentPresenter, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<GridViewItemPresenter, Windows::UI::Xaml::Controls::IContentPresenter, Windows::UI::Xaml::Controls::IContentPresenter2, Windows::UI::Xaml::Controls::IContentPresenter3, Windows::UI::Xaml::Controls::IContentPresenter4, Windows::UI::Xaml::Controls::IContentPresenter5, Windows::UI::Xaml::Controls::IContentPresenterOverrides, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        GridViewItemPresenter(std::nullptr_t) noexcept {}
        GridViewItemPresenter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter(ptr, take_ownership_from_abi) {}
        GridViewItemPresenter();
        [[nodiscard]] static auto SelectionCheckMarkVisualEnabledProperty();
        [[nodiscard]] static auto CheckHintBrushProperty();
        [[nodiscard]] static auto CheckSelectingBrushProperty();
        [[nodiscard]] static auto CheckBrushProperty();
        [[nodiscard]] static auto DragBackgroundProperty();
        [[nodiscard]] static auto DragForegroundProperty();
        [[nodiscard]] static auto FocusBorderBrushProperty();
        [[nodiscard]] static auto PlaceholderBackgroundProperty();
        [[nodiscard]] static auto PointerOverBackgroundProperty();
        [[nodiscard]] static auto SelectedBackgroundProperty();
        [[nodiscard]] static auto SelectedForegroundProperty();
        [[nodiscard]] static auto SelectedPointerOverBackgroundProperty();
        [[nodiscard]] static auto SelectedPointerOverBorderBrushProperty();
        [[nodiscard]] static auto SelectedBorderThicknessProperty();
        [[nodiscard]] static auto DisabledOpacityProperty();
        [[nodiscard]] static auto DragOpacityProperty();
        [[nodiscard]] static auto ReorderHintOffsetProperty();
        [[nodiscard]] static auto GridViewItemPresenterHorizontalContentAlignmentProperty();
        [[nodiscard]] static auto GridViewItemPresenterVerticalContentAlignmentProperty();
        [[nodiscard]] static auto GridViewItemPresenterPaddingProperty();
        [[nodiscard]] static auto PointerOverBackgroundMarginProperty();
        [[nodiscard]] static auto ContentMarginProperty();
    };
    struct __declspec(empty_bases) GridViewItemTemplateSettings : Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings,
        impl::base<GridViewItemTemplateSettings, Windows::UI::Xaml::DependencyObject>,
        impl::require<GridViewItemTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        GridViewItemTemplateSettings(std::nullptr_t) noexcept {}
        GridViewItemTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ItemsChangedEventArgs : Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs
    {
        ItemsChangedEventArgs(std::nullptr_t) noexcept {}
        ItemsChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) JumpListItemBackgroundConverter : Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter,
        impl::base<JumpListItemBackgroundConverter, Windows::UI::Xaml::DependencyObject>,
        impl::require<JumpListItemBackgroundConverter, Windows::UI::Xaml::Data::IValueConverter, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        JumpListItemBackgroundConverter(std::nullptr_t) noexcept {}
        JumpListItemBackgroundConverter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter(ptr, take_ownership_from_abi) {}
        JumpListItemBackgroundConverter();
        [[nodiscard]] static auto EnabledProperty();
        [[nodiscard]] static auto DisabledProperty();
    };
    struct __declspec(empty_bases) JumpListItemForegroundConverter : Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter,
        impl::base<JumpListItemForegroundConverter, Windows::UI::Xaml::DependencyObject>,
        impl::require<JumpListItemForegroundConverter, Windows::UI::Xaml::Data::IValueConverter, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        JumpListItemForegroundConverter(std::nullptr_t) noexcept {}
        JumpListItemForegroundConverter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter(ptr, take_ownership_from_abi) {}
        JumpListItemForegroundConverter();
        [[nodiscard]] static auto EnabledProperty();
        [[nodiscard]] static auto DisabledProperty();
    };
    struct __declspec(empty_bases) LayoutInformation : Windows::UI::Xaml::Controls::Primitives::ILayoutInformation
    {
        LayoutInformation(std::nullptr_t) noexcept {}
        LayoutInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::ILayoutInformation(ptr, take_ownership_from_abi) {}
        static auto GetLayoutExceptionElement(Windows::Foundation::IInspectable const& dispatcher);
        static auto GetLayoutSlot(Windows::UI::Xaml::FrameworkElement const& element);
        static auto GetAvailableSize(Windows::UI::Xaml::UIElement const& element);
    };
    struct __declspec(empty_bases) ListViewItemPresenter : Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter,
        impl::base<ListViewItemPresenter, Windows::UI::Xaml::Controls::ContentPresenter, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter4, Windows::UI::Xaml::Controls::IContentPresenter, Windows::UI::Xaml::Controls::IContentPresenter2, Windows::UI::Xaml::Controls::IContentPresenter3, Windows::UI::Xaml::Controls::IContentPresenter4, Windows::UI::Xaml::Controls::IContentPresenter5, Windows::UI::Xaml::Controls::IContentPresenterOverrides, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ListViewItemPresenter(std::nullptr_t) noexcept {}
        ListViewItemPresenter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter(ptr, take_ownership_from_abi) {}
        ListViewItemPresenter();
        [[nodiscard]] static auto SelectionCheckMarkVisualEnabledProperty();
        [[nodiscard]] static auto CheckHintBrushProperty();
        [[nodiscard]] static auto CheckSelectingBrushProperty();
        [[nodiscard]] static auto CheckBrushProperty();
        [[nodiscard]] static auto DragBackgroundProperty();
        [[nodiscard]] static auto DragForegroundProperty();
        [[nodiscard]] static auto FocusBorderBrushProperty();
        [[nodiscard]] static auto PlaceholderBackgroundProperty();
        [[nodiscard]] static auto PointerOverBackgroundProperty();
        [[nodiscard]] static auto SelectedBackgroundProperty();
        [[nodiscard]] static auto SelectedForegroundProperty();
        [[nodiscard]] static auto SelectedPointerOverBackgroundProperty();
        [[nodiscard]] static auto SelectedPointerOverBorderBrushProperty();
        [[nodiscard]] static auto SelectedBorderThicknessProperty();
        [[nodiscard]] static auto DisabledOpacityProperty();
        [[nodiscard]] static auto DragOpacityProperty();
        [[nodiscard]] static auto ReorderHintOffsetProperty();
        [[nodiscard]] static auto ListViewItemPresenterHorizontalContentAlignmentProperty();
        [[nodiscard]] static auto ListViewItemPresenterVerticalContentAlignmentProperty();
        [[nodiscard]] static auto ListViewItemPresenterPaddingProperty();
        [[nodiscard]] static auto PointerOverBackgroundMarginProperty();
        [[nodiscard]] static auto ContentMarginProperty();
        [[nodiscard]] static auto SelectedPressedBackgroundProperty();
        [[nodiscard]] static auto PressedBackgroundProperty();
        [[nodiscard]] static auto CheckBoxBrushProperty();
        [[nodiscard]] static auto FocusSecondaryBorderBrushProperty();
        [[nodiscard]] static auto CheckModeProperty();
        [[nodiscard]] static auto PointerOverForegroundProperty();
        [[nodiscard]] static auto RevealBackgroundProperty();
        [[nodiscard]] static auto RevealBorderBrushProperty();
        [[nodiscard]] static auto RevealBorderThicknessProperty();
        [[nodiscard]] static auto RevealBackgroundShowsAboveContentProperty();
        [[nodiscard]] static auto SelectedDisabledBackgroundProperty();
        [[nodiscard]] static auto CheckPressedBrushProperty();
        [[nodiscard]] static auto CheckDisabledBrushProperty();
        [[nodiscard]] static auto CheckBoxPointerOverBrushProperty();
        [[nodiscard]] static auto CheckBoxPressedBrushProperty();
        [[nodiscard]] static auto CheckBoxDisabledBrushProperty();
        [[nodiscard]] static auto CheckBoxSelectedBrushProperty();
        [[nodiscard]] static auto CheckBoxSelectedPointerOverBrushProperty();
        [[nodiscard]] static auto CheckBoxSelectedPressedBrushProperty();
        [[nodiscard]] static auto CheckBoxSelectedDisabledBrushProperty();
        [[nodiscard]] static auto CheckBoxBorderBrushProperty();
        [[nodiscard]] static auto CheckBoxPointerOverBorderBrushProperty();
        [[nodiscard]] static auto CheckBoxPressedBorderBrushProperty();
        [[nodiscard]] static auto CheckBoxDisabledBorderBrushProperty();
        [[nodiscard]] static auto CheckBoxCornerRadiusProperty();
        [[nodiscard]] static auto SelectionIndicatorCornerRadiusProperty();
        [[nodiscard]] static auto SelectionIndicatorVisualEnabledProperty();
        [[nodiscard]] static auto SelectionIndicatorModeProperty();
        [[nodiscard]] static auto SelectionIndicatorBrushProperty();
        [[nodiscard]] static auto SelectionIndicatorPointerOverBrushProperty();
        [[nodiscard]] static auto SelectionIndicatorPressedBrushProperty();
        [[nodiscard]] static auto SelectionIndicatorDisabledBrushProperty();
        [[nodiscard]] static auto SelectedBorderBrushProperty();
        [[nodiscard]] static auto SelectedPressedBorderBrushProperty();
        [[nodiscard]] static auto SelectedDisabledBorderBrushProperty();
        [[nodiscard]] static auto SelectedInnerBorderBrushProperty();
        [[nodiscard]] static auto PointerOverBorderBrushProperty();
    };
    struct __declspec(empty_bases) ListViewItemTemplateSettings : Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings,
        impl::base<ListViewItemTemplateSettings, Windows::UI::Xaml::DependencyObject>,
        impl::require<ListViewItemTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ListViewItemTemplateSettings(std::nullptr_t) noexcept {}
        ListViewItemTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LoopingSelector : Windows::UI::Xaml::Controls::Primitives::ILoopingSelector,
        impl::base<LoopingSelector, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<LoopingSelector, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        LoopingSelector(std::nullptr_t) noexcept {}
        LoopingSelector(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::ILoopingSelector(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto ShouldLoopProperty();
        [[nodiscard]] static auto ItemsProperty();
        [[nodiscard]] static auto SelectedIndexProperty();
        [[nodiscard]] static auto SelectedItemProperty();
        [[nodiscard]] static auto ItemWidthProperty();
        [[nodiscard]] static auto ItemHeightProperty();
        [[nodiscard]] static auto ItemTemplateProperty();
    };
    struct __declspec(empty_bases) LoopingSelectorItem : Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem,
        impl::base<LoopingSelectorItem, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<LoopingSelectorItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        LoopingSelectorItem(std::nullptr_t) noexcept {}
        LoopingSelectorItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LoopingSelectorPanel : Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel,
        impl::base<LoopingSelectorPanel, Windows::UI::Xaml::Controls::Canvas, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<LoopingSelectorPanel, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, Windows::UI::Xaml::Controls::ICanvas, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::Controls::IPanel2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        LoopingSelectorPanel(std::nullptr_t) noexcept {}
        LoopingSelectorPanel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MenuFlyoutItemTemplateSettings : Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings,
        impl::base<MenuFlyoutItemTemplateSettings, Windows::UI::Xaml::DependencyObject>,
        impl::require<MenuFlyoutItemTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MenuFlyoutItemTemplateSettings(std::nullptr_t) noexcept {}
        MenuFlyoutItemTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MenuFlyoutPresenterTemplateSettings : Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings,
        impl::base<MenuFlyoutPresenterTemplateSettings, Windows::UI::Xaml::DependencyObject>,
        impl::require<MenuFlyoutPresenterTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MenuFlyoutPresenterTemplateSettings(std::nullptr_t) noexcept {}
        MenuFlyoutPresenterTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NavigationViewItemPresenter : Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenter,
        impl::base<NavigationViewItemPresenter, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<NavigationViewItemPresenter, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        NavigationViewItemPresenter(std::nullptr_t) noexcept {}
        NavigationViewItemPresenter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenter(ptr, take_ownership_from_abi) {}
        NavigationViewItemPresenter();
        [[nodiscard]] static auto IconProperty();
    };
    struct __declspec(empty_bases) OrientedVirtualizingPanel : Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel,
        impl::base<OrientedVirtualizingPanel, Windows::UI::Xaml::Controls::VirtualizingPanel, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<OrientedVirtualizingPanel, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, Windows::UI::Xaml::Controls::IInsertionPanel, Windows::UI::Xaml::Controls::IVirtualizingPanel, Windows::UI::Xaml::Controls::IVirtualizingPanelProtected, Windows::UI::Xaml::Controls::IVirtualizingPanelOverrides, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::Controls::IPanel2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        OrientedVirtualizingPanel(std::nullptr_t) noexcept {}
        OrientedVirtualizingPanel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PickerFlyoutBase : Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase,
        impl::base<PickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<PickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        PickerFlyoutBase(std::nullptr_t) noexcept {}
        PickerFlyoutBase(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase(ptr, take_ownership_from_abi) {}
        using impl::consume_t<PickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::ShowAt;
        using impl::consume_t<PickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>::ShowAt;
        [[nodiscard]] static auto TitleProperty();
        static auto GetTitle(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetTitle(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
    };
    struct __declspec(empty_bases) PivotHeaderItem : Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem,
        impl::base<PivotHeaderItem, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<PivotHeaderItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        PivotHeaderItem(std::nullptr_t) noexcept {}
        PivotHeaderItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem(ptr, take_ownership_from_abi) {}
        PivotHeaderItem();
    };
    struct __declspec(empty_bases) PivotHeaderPanel : Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel,
        impl::base<PivotHeaderPanel, Windows::UI::Xaml::Controls::Canvas, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<PivotHeaderPanel, Windows::UI::Xaml::Controls::ICanvas, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::Controls::IPanel2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        PivotHeaderPanel(std::nullptr_t) noexcept {}
        PivotHeaderPanel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel(ptr, take_ownership_from_abi) {}
        PivotHeaderPanel();
    };
    struct __declspec(empty_bases) PivotPanel : Windows::UI::Xaml::Controls::Primitives::IPivotPanel,
        impl::base<PivotPanel, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<PivotPanel, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::Controls::IPanel2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        PivotPanel(std::nullptr_t) noexcept {}
        PivotPanel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IPivotPanel(ptr, take_ownership_from_abi) {}
        PivotPanel();
    };
    struct __declspec(empty_bases) Popup : Windows::UI::Xaml::Controls::Primitives::IPopup,
        impl::base<Popup, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Popup, Windows::UI::Xaml::Controls::Primitives::IPopup2, Windows::UI::Xaml::Controls::Primitives::IPopup3, Windows::UI::Xaml::Controls::Primitives::IPopup4, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Popup(std::nullptr_t) noexcept {}
        Popup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IPopup(ptr, take_ownership_from_abi) {}
        Popup();
        [[nodiscard]] static auto ChildProperty();
        [[nodiscard]] static auto IsOpenProperty();
        [[nodiscard]] static auto HorizontalOffsetProperty();
        [[nodiscard]] static auto VerticalOffsetProperty();
        [[nodiscard]] static auto ChildTransitionsProperty();
        [[nodiscard]] static auto IsLightDismissEnabledProperty();
        [[nodiscard]] static auto LightDismissOverlayModeProperty();
        [[nodiscard]] static auto ShouldConstrainToRootBoundsProperty();
        [[nodiscard]] static auto PlacementTargetProperty();
        [[nodiscard]] static auto DesiredPlacementProperty();
    };
    struct __declspec(empty_bases) ProgressBarTemplateSettings : Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings,
        impl::base<ProgressBarTemplateSettings, Windows::UI::Xaml::DependencyObject>,
        impl::require<ProgressBarTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ProgressBarTemplateSettings(std::nullptr_t) noexcept {}
        ProgressBarTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProgressRingTemplateSettings : Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings,
        impl::base<ProgressRingTemplateSettings, Windows::UI::Xaml::DependencyObject>,
        impl::require<ProgressRingTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ProgressRingTemplateSettings(std::nullptr_t) noexcept {}
        ProgressRingTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RangeBase : Windows::UI::Xaml::Controls::Primitives::IRangeBase,
        impl::base<RangeBase, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<RangeBase, Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        RangeBase(std::nullptr_t) noexcept {}
        RangeBase(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IRangeBase(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto MinimumProperty();
        [[nodiscard]] static auto MaximumProperty();
        [[nodiscard]] static auto SmallChangeProperty();
        [[nodiscard]] static auto LargeChangeProperty();
        [[nodiscard]] static auto ValueProperty();
    };
    struct __declspec(empty_bases) RangeBaseValueChangedEventArgs : Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs,
        impl::base<RangeBaseValueChangedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<RangeBaseValueChangedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
    {
        RangeBaseValueChangedEventArgs(std::nullptr_t) noexcept {}
        RangeBaseValueChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RepeatButton : Windows::UI::Xaml::Controls::Primitives::IRepeatButton,
        impl::base<RepeatButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<RepeatButton, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        RepeatButton(std::nullptr_t) noexcept {}
        RepeatButton(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IRepeatButton(ptr, take_ownership_from_abi) {}
        RepeatButton();
        [[nodiscard]] static auto DelayProperty();
        [[nodiscard]] static auto IntervalProperty();
    };
    struct __declspec(empty_bases) ScrollBar : Windows::UI::Xaml::Controls::Primitives::IScrollBar,
        impl::base<ScrollBar, Windows::UI::Xaml::Controls::Primitives::RangeBase, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<ScrollBar, Windows::UI::Xaml::Controls::Primitives::IRangeBase, Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ScrollBar(std::nullptr_t) noexcept {}
        ScrollBar(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IScrollBar(ptr, take_ownership_from_abi) {}
        ScrollBar();
        [[nodiscard]] static auto OrientationProperty();
        [[nodiscard]] static auto ViewportSizeProperty();
        [[nodiscard]] static auto IndicatorModeProperty();
    };
    struct __declspec(empty_bases) ScrollEventArgs : Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs,
        impl::base<ScrollEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<ScrollEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
    {
        ScrollEventArgs(std::nullptr_t) noexcept {}
        ScrollEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs(ptr, take_ownership_from_abi) {}
        ScrollEventArgs();
    };
    struct __declspec(empty_bases) Selector : Windows::UI::Xaml::Controls::Primitives::ISelector,
        impl::base<Selector, Windows::UI::Xaml::Controls::ItemsControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Selector, Windows::UI::Xaml::Controls::IItemsControl, Windows::UI::Xaml::Controls::IItemsControl2, Windows::UI::Xaml::Controls::IItemsControl3, Windows::UI::Xaml::Controls::IItemsControlOverrides, Windows::UI::Xaml::Controls::IItemContainerMapping, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Selector(std::nullptr_t) noexcept {}
        Selector(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::ISelector(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto SelectedIndexProperty();
        [[nodiscard]] static auto SelectedItemProperty();
        [[nodiscard]] static auto SelectedValueProperty();
        [[nodiscard]] static auto SelectedValuePathProperty();
        [[nodiscard]] static auto IsSynchronizedWithCurrentItemProperty();
        static auto GetIsSelectionActive(Windows::UI::Xaml::DependencyObject const& element);
    };
    struct __declspec(empty_bases) SelectorItem : Windows::UI::Xaml::Controls::Primitives::ISelectorItem,
        impl::base<SelectorItem, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<SelectorItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        SelectorItem(std::nullptr_t) noexcept {}
        SelectorItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::ISelectorItem(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto IsSelectedProperty();
    };
    struct __declspec(empty_bases) SettingsFlyoutTemplateSettings : Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings,
        impl::base<SettingsFlyoutTemplateSettings, Windows::UI::Xaml::DependencyObject>,
        impl::require<SettingsFlyoutTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        SettingsFlyoutTemplateSettings(std::nullptr_t) noexcept {}
        SettingsFlyoutTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SplitViewTemplateSettings : Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings,
        impl::base<SplitViewTemplateSettings, Windows::UI::Xaml::DependencyObject>,
        impl::require<SplitViewTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        SplitViewTemplateSettings(std::nullptr_t) noexcept {}
        SplitViewTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Thumb : Windows::UI::Xaml::Controls::Primitives::IThumb,
        impl::base<Thumb, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Thumb, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Thumb(std::nullptr_t) noexcept {}
        Thumb(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IThumb(ptr, take_ownership_from_abi) {}
        Thumb();
        [[nodiscard]] static auto IsDraggingProperty();
    };
    struct __declspec(empty_bases) TickBar : Windows::UI::Xaml::Controls::Primitives::ITickBar,
        impl::base<TickBar, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<TickBar, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        TickBar(std::nullptr_t) noexcept {}
        TickBar(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::ITickBar(ptr, take_ownership_from_abi) {}
        TickBar();
        [[nodiscard]] static auto FillProperty();
    };
    struct __declspec(empty_bases) ToggleButton : Windows::UI::Xaml::Controls::Primitives::IToggleButton,
        impl::base<ToggleButton, Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<ToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ToggleButton(std::nullptr_t) noexcept {}
        ToggleButton(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IToggleButton(ptr, take_ownership_from_abi) {}
        ToggleButton();
        [[nodiscard]] static auto IsCheckedProperty();
        [[nodiscard]] static auto IsThreeStateProperty();
    };
    struct __declspec(empty_bases) ToggleSwitchTemplateSettings : Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings,
        impl::base<ToggleSwitchTemplateSettings, Windows::UI::Xaml::DependencyObject>,
        impl::require<ToggleSwitchTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ToggleSwitchTemplateSettings(std::nullptr_t) noexcept {}
        ToggleSwitchTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ToolTipTemplateSettings : Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings,
        impl::base<ToolTipTemplateSettings, Windows::UI::Xaml::DependencyObject>,
        impl::require<ToolTipTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ToolTipTemplateSettings(std::nullptr_t) noexcept {}
        ToolTipTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    template <typename D>
    class IFlyoutBaseOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IFlyoutBaseOverrides = winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Control) CreatePresenter() const;
    };
    template <typename D>
    class IFlyoutBaseOverrides4T
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IFlyoutBaseOverrides4 = winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4;
        WINRT_IMPL_AUTO(void) OnProcessKeyboardAccelerators(Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args) const;
    };
    template <typename D>
    class IPickerFlyoutBaseOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IPickerFlyoutBaseOverrides = winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides;
        WINRT_IMPL_AUTO(void) OnConfirmed() const;
        WINRT_IMPL_AUTO(bool) ShouldShowConfirmationButtons() const;
    };
    template <typename D>
    class IRangeBaseOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IRangeBaseOverrides = winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides;
        WINRT_IMPL_AUTO(void) OnMinimumChanged(double oldMinimum, double newMinimum) const;
        WINRT_IMPL_AUTO(void) OnMaximumChanged(double oldMaximum, double newMaximum) const;
        WINRT_IMPL_AUTO(void) OnValueChanged(double oldValue, double newValue) const;
    };
    template <typename D>
    class IToggleButtonOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IToggleButtonOverrides = winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides;
        WINRT_IMPL_AUTO(void) OnToggle() const;
    };
}
#endif
