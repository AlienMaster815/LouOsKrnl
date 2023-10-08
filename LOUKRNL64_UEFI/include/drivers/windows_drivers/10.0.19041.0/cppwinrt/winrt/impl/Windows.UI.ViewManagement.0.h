// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_ViewManagement_0_H
#define WINRT_Windows_UI_ViewManagement_0_H
namespace winrt::Windows::Devices::Enumeration
{
    struct DeviceInformation;
}
namespace winrt::Windows::Foundation
{
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename T> struct IReference;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::UI
{
    struct Color;
    struct UIContext;
}
namespace winrt::Windows::UI::Core
{
    struct ICoreWindow;
}
namespace winrt::Windows::UI::Popups
{
    enum class Placement : int32_t;
}
namespace winrt::Windows::UI::WindowManagement
{
    struct WindowingEnvironment;
}
namespace winrt::Windows::UI::ViewManagement
{
    enum class ApplicationViewBoundsMode : int32_t
    {
        UseVisible = 0,
        UseCoreWindow = 1,
    };
    enum class ApplicationViewMode : int32_t
    {
        Default = 0,
        CompactOverlay = 1,
    };
    enum class ApplicationViewOrientation : int32_t
    {
        Landscape = 0,
        Portrait = 1,
    };
    enum class ApplicationViewState : int32_t
    {
        FullScreenLandscape = 0,
        Filled = 1,
        Snapped = 2,
        FullScreenPortrait = 3,
    };
    enum class ApplicationViewSwitchingOptions : uint32_t
    {
        Default = 0,
        SkipAnimation = 0x1,
        ConsolidateViews = 0x2,
    };
    enum class ApplicationViewWindowingMode : int32_t
    {
        Auto = 0,
        PreferredLaunchViewSize = 1,
        FullScreen = 2,
        CompactOverlay = 3,
        Maximized = 4,
    };
    enum class FullScreenSystemOverlayMode : int32_t
    {
        Standard = 0,
        Minimal = 1,
    };
    enum class HandPreference : int32_t
    {
        LeftHanded = 0,
        RightHanded = 1,
    };
    enum class UIColorType : int32_t
    {
        Background = 0,
        Foreground = 1,
        AccentDark3 = 2,
        AccentDark2 = 3,
        AccentDark1 = 4,
        Accent = 5,
        AccentLight1 = 6,
        AccentLight2 = 7,
        AccentLight3 = 8,
        Complement = 9,
    };
    enum class UIElementType : int32_t
    {
        ActiveCaption = 0,
        Background = 1,
        ButtonFace = 2,
        ButtonText = 3,
        CaptionText = 4,
        GrayText = 5,
        Highlight = 6,
        HighlightText = 7,
        Hotlight = 8,
        InactiveCaption = 9,
        InactiveCaptionText = 10,
        Window = 11,
        WindowText = 12,
        AccentColor = 1000,
        TextHigh = 1001,
        TextMedium = 1002,
        TextLow = 1003,
        TextContrastWithHigh = 1004,
        NonTextHigh = 1005,
        NonTextMediumHigh = 1006,
        NonTextMedium = 1007,
        NonTextMediumLow = 1008,
        NonTextLow = 1009,
        PageBackground = 1010,
        PopupBackground = 1011,
        OverlayOutsidePopup = 1012,
    };
    enum class UserInteractionMode : int32_t
    {
        Mouse = 0,
        Touch = 1,
    };
    enum class ViewSizePreference : int32_t
    {
        Default = 0,
        UseLess = 1,
        UseHalf = 2,
        UseMore = 3,
        UseMinimum = 4,
        UseNone = 5,
        Custom = 6,
    };
    struct IAccessibilitySettings;
    struct IActivationViewSwitcher;
    struct IApplicationView;
    struct IApplicationView2;
    struct IApplicationView3;
    struct IApplicationView4;
    struct IApplicationView7;
    struct IApplicationView9;
    struct IApplicationViewConsolidatedEventArgs;
    struct IApplicationViewConsolidatedEventArgs2;
    struct IApplicationViewFullscreenStatics;
    struct IApplicationViewInteropStatics;
    struct IApplicationViewScaling;
    struct IApplicationViewScalingStatics;
    struct IApplicationViewStatics;
    struct IApplicationViewStatics2;
    struct IApplicationViewStatics3;
    struct IApplicationViewStatics4;
    struct IApplicationViewSwitcherStatics;
    struct IApplicationViewSwitcherStatics2;
    struct IApplicationViewSwitcherStatics3;
    struct IApplicationViewTitleBar;
    struct IApplicationViewTransferContext;
    struct IApplicationViewTransferContextStatics;
    struct IApplicationViewWithContext;
    struct IInputPane;
    struct IInputPane2;
    struct IInputPaneControl;
    struct IInputPaneStatics;
    struct IInputPaneStatics2;
    struct IInputPaneVisibilityEventArgs;
    struct IProjectionManagerStatics;
    struct IProjectionManagerStatics2;
    struct IStatusBar;
    struct IStatusBarProgressIndicator;
    struct IStatusBarStatics;
    struct IUISettings;
    struct IUISettings2;
    struct IUISettings3;
    struct IUISettings4;
    struct IUISettings5;
    struct IUISettings6;
    struct IUISettingsAnimationsEnabledChangedEventArgs;
    struct IUISettingsAutoHideScrollBarsChangedEventArgs;
    struct IUISettingsMessageDurationChangedEventArgs;
    struct IUIViewSettings;
    struct IUIViewSettingsStatics;
    struct IViewModePreferences;
    struct IViewModePreferencesStatics;
    struct AccessibilitySettings;
    struct ActivationViewSwitcher;
    struct ApplicationView;
    struct ApplicationViewConsolidatedEventArgs;
    struct ApplicationViewScaling;
    struct ApplicationViewSwitcher;
    struct ApplicationViewTitleBar;
    struct ApplicationViewTransferContext;
    struct InputPane;
    struct InputPaneVisibilityEventArgs;
    struct ProjectionManager;
    struct StatusBar;
    struct StatusBarProgressIndicator;
    struct UISettings;
    struct UISettingsAnimationsEnabledChangedEventArgs;
    struct UISettingsAutoHideScrollBarsChangedEventArgs;
    struct UISettingsMessageDurationChangedEventArgs;
    struct UIViewSettings;
    struct ViewModePreferences;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::ViewManagement::IAccessibilitySettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IActivationViewSwitcher>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationView>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationView2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationView3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationView4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationView7>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationView9>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationViewFullscreenStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationViewInteropStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationViewScaling>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationViewScalingStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationViewStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationViewStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationViewStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationViewStatics4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationViewTitleBar>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationViewTransferContext>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationViewTransferContextStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IApplicationViewWithContext>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IInputPane>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IInputPane2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IInputPaneControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IInputPaneStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IInputPaneStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IProjectionManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IProjectionManagerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IStatusBar>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IStatusBarProgressIndicator>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IStatusBarStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IUISettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IUISettings2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IUISettings3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IUISettings4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IUISettings5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IUISettings6>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IUISettingsAnimationsEnabledChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IUISettingsAutoHideScrollBarsChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IUISettingsMessageDurationChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IUIViewSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IUIViewSettingsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IViewModePreferences>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::IViewModePreferencesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::ViewManagement::AccessibilitySettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::ActivationViewSwitcher>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::ApplicationView>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::ApplicationViewScaling>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::ApplicationViewSwitcher>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::ApplicationViewTitleBar>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::ApplicationViewTransferContext>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::InputPane>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::InputPaneVisibilityEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::ProjectionManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::StatusBar>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::StatusBarProgressIndicator>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::UISettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::UISettingsAnimationsEnabledChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::UISettingsAutoHideScrollBarsChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::UISettingsMessageDurationChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::UIViewSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::ViewModePreferences>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::ViewManagement::ApplicationViewBoundsMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::ViewManagement::ApplicationViewMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::ViewManagement::ApplicationViewOrientation>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::ViewManagement::ApplicationViewState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::ViewManagement::ApplicationViewSwitchingOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::ViewManagement::ApplicationViewWindowingMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::ViewManagement::FullScreenSystemOverlayMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::ViewManagement::HandPreference>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::ViewManagement::UIColorType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::ViewManagement::UIElementType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::ViewManagement::UserInteractionMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::ViewManagement::ViewSizePreference>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::UI::ViewManagement::IAccessibilitySettings>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IAccessibilitySettings" };
    };
    template <> struct name<Windows::UI::ViewManagement::IActivationViewSwitcher>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IActivationViewSwitcher" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationView>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationView" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationView2>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationView2" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationView3>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationView3" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationView4>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationView4" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationView7>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationView7" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationView9>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationView9" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewConsolidatedEventArgs" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewConsolidatedEventArgs2" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationViewFullscreenStatics>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewFullscreenStatics" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationViewInteropStatics>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewInteropStatics" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationViewScaling>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewScaling" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationViewScalingStatics>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewScalingStatics" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationViewStatics>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewStatics" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationViewStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewStatics2" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationViewStatics3>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewStatics3" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationViewStatics4>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewStatics4" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewSwitcherStatics" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewSwitcherStatics2" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewSwitcherStatics3" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationViewTitleBar>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewTitleBar" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationViewTransferContext>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewTransferContext" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationViewTransferContextStatics>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewTransferContextStatics" };
    };
    template <> struct name<Windows::UI::ViewManagement::IApplicationViewWithContext>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewWithContext" };
    };
    template <> struct name<Windows::UI::ViewManagement::IInputPane>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IInputPane" };
    };
    template <> struct name<Windows::UI::ViewManagement::IInputPane2>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IInputPane2" };
    };
    template <> struct name<Windows::UI::ViewManagement::IInputPaneControl>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IInputPaneControl" };
    };
    template <> struct name<Windows::UI::ViewManagement::IInputPaneStatics>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IInputPaneStatics" };
    };
    template <> struct name<Windows::UI::ViewManagement::IInputPaneStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IInputPaneStatics2" };
    };
    template <> struct name<Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IInputPaneVisibilityEventArgs" };
    };
    template <> struct name<Windows::UI::ViewManagement::IProjectionManagerStatics>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IProjectionManagerStatics" };
    };
    template <> struct name<Windows::UI::ViewManagement::IProjectionManagerStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IProjectionManagerStatics2" };
    };
    template <> struct name<Windows::UI::ViewManagement::IStatusBar>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IStatusBar" };
    };
    template <> struct name<Windows::UI::ViewManagement::IStatusBarProgressIndicator>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IStatusBarProgressIndicator" };
    };
    template <> struct name<Windows::UI::ViewManagement::IStatusBarStatics>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IStatusBarStatics" };
    };
    template <> struct name<Windows::UI::ViewManagement::IUISettings>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IUISettings" };
    };
    template <> struct name<Windows::UI::ViewManagement::IUISettings2>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IUISettings2" };
    };
    template <> struct name<Windows::UI::ViewManagement::IUISettings3>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IUISettings3" };
    };
    template <> struct name<Windows::UI::ViewManagement::IUISettings4>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IUISettings4" };
    };
    template <> struct name<Windows::UI::ViewManagement::IUISettings5>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IUISettings5" };
    };
    template <> struct name<Windows::UI::ViewManagement::IUISettings6>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IUISettings6" };
    };
    template <> struct name<Windows::UI::ViewManagement::IUISettingsAnimationsEnabledChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IUISettingsAnimationsEnabledChangedEventArgs" };
    };
    template <> struct name<Windows::UI::ViewManagement::IUISettingsAutoHideScrollBarsChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IUISettingsAutoHideScrollBarsChangedEventArgs" };
    };
    template <> struct name<Windows::UI::ViewManagement::IUISettingsMessageDurationChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IUISettingsMessageDurationChangedEventArgs" };
    };
    template <> struct name<Windows::UI::ViewManagement::IUIViewSettings>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IUIViewSettings" };
    };
    template <> struct name<Windows::UI::ViewManagement::IUIViewSettingsStatics>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IUIViewSettingsStatics" };
    };
    template <> struct name<Windows::UI::ViewManagement::IViewModePreferences>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IViewModePreferences" };
    };
    template <> struct name<Windows::UI::ViewManagement::IViewModePreferencesStatics>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.IViewModePreferencesStatics" };
    };
    template <> struct name<Windows::UI::ViewManagement::AccessibilitySettings>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.AccessibilitySettings" };
    };
    template <> struct name<Windows::UI::ViewManagement::ActivationViewSwitcher>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.ActivationViewSwitcher" };
    };
    template <> struct name<Windows::UI::ViewManagement::ApplicationView>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationView" };
    };
    template <> struct name<Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewConsolidatedEventArgs" };
    };
    template <> struct name<Windows::UI::ViewManagement::ApplicationViewScaling>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewScaling" };
    };
    template <> struct name<Windows::UI::ViewManagement::ApplicationViewSwitcher>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewSwitcher" };
    };
    template <> struct name<Windows::UI::ViewManagement::ApplicationViewTitleBar>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewTitleBar" };
    };
    template <> struct name<Windows::UI::ViewManagement::ApplicationViewTransferContext>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewTransferContext" };
    };
    template <> struct name<Windows::UI::ViewManagement::InputPane>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.InputPane" };
    };
    template <> struct name<Windows::UI::ViewManagement::InputPaneVisibilityEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.InputPaneVisibilityEventArgs" };
    };
    template <> struct name<Windows::UI::ViewManagement::ProjectionManager>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.ProjectionManager" };
    };
    template <> struct name<Windows::UI::ViewManagement::StatusBar>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.StatusBar" };
    };
    template <> struct name<Windows::UI::ViewManagement::StatusBarProgressIndicator>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.StatusBarProgressIndicator" };
    };
    template <> struct name<Windows::UI::ViewManagement::UISettings>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.UISettings" };
    };
    template <> struct name<Windows::UI::ViewManagement::UISettingsAnimationsEnabledChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.UISettingsAnimationsEnabledChangedEventArgs" };
    };
    template <> struct name<Windows::UI::ViewManagement::UISettingsAutoHideScrollBarsChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.UISettingsAutoHideScrollBarsChangedEventArgs" };
    };
    template <> struct name<Windows::UI::ViewManagement::UISettingsMessageDurationChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.UISettingsMessageDurationChangedEventArgs" };
    };
    template <> struct name<Windows::UI::ViewManagement::UIViewSettings>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.UIViewSettings" };
    };
    template <> struct name<Windows::UI::ViewManagement::ViewModePreferences>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.ViewModePreferences" };
    };
    template <> struct name<Windows::UI::ViewManagement::ApplicationViewBoundsMode>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewBoundsMode" };
    };
    template <> struct name<Windows::UI::ViewManagement::ApplicationViewMode>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewMode" };
    };
    template <> struct name<Windows::UI::ViewManagement::ApplicationViewOrientation>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewOrientation" };
    };
    template <> struct name<Windows::UI::ViewManagement::ApplicationViewState>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewState" };
    };
    template <> struct name<Windows::UI::ViewManagement::ApplicationViewSwitchingOptions>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewSwitchingOptions" };
    };
    template <> struct name<Windows::UI::ViewManagement::ApplicationViewWindowingMode>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewWindowingMode" };
    };
    template <> struct name<Windows::UI::ViewManagement::FullScreenSystemOverlayMode>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.FullScreenSystemOverlayMode" };
    };
    template <> struct name<Windows::UI::ViewManagement::HandPreference>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.HandPreference" };
    };
    template <> struct name<Windows::UI::ViewManagement::UIColorType>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.UIColorType" };
    };
    template <> struct name<Windows::UI::ViewManagement::UIElementType>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.UIElementType" };
    };
    template <> struct name<Windows::UI::ViewManagement::UserInteractionMode>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.UserInteractionMode" };
    };
    template <> struct name<Windows::UI::ViewManagement::ViewSizePreference>
    {
        static constexpr auto & value{ L"Windows.UI.ViewManagement.ViewSizePreference" };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IAccessibilitySettings>
    {
        static constexpr guid value{ 0xFE0E8147,0xC4C0,0x4562,{ 0xB9,0x62,0x13,0x27,0xB5,0x2A,0xD5,0xB9 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IActivationViewSwitcher>
    {
        static constexpr guid value{ 0xDCA71BB6,0x7350,0x492B,{ 0xAA,0xC7,0xC8,0xA1,0x3D,0x72,0x24,0xAD } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationView>
    {
        static constexpr guid value{ 0xD222D519,0x4361,0x451E,{ 0x96,0xC4,0x60,0xF4,0xF9,0x74,0x2D,0xB0 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationView2>
    {
        static constexpr guid value{ 0xE876B196,0xA545,0x40DC,{ 0xB5,0x94,0x45,0x0C,0xBA,0x68,0xCC,0x00 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationView3>
    {
        static constexpr guid value{ 0x903C9CE5,0x793A,0x4FDF,{ 0xA2,0xB2,0xAF,0x1A,0xC2,0x1E,0x31,0x08 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationView4>
    {
        static constexpr guid value{ 0x15E5CBEC,0x9E0F,0x46B5,{ 0xBC,0x3F,0x9B,0xF6,0x53,0xE7,0x4B,0x5E } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationView7>
    {
        static constexpr guid value{ 0xA0369647,0x5FAF,0x5AA6,{ 0x9C,0x38,0xBE,0xFB,0xB1,0x2A,0x07,0x1E } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationView9>
    {
        static constexpr guid value{ 0x9C6516F9,0x021A,0x5F01,{ 0x93,0xE5,0x9B,0xDA,0xD2,0x64,0x75,0x74 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs>
    {
        static constexpr guid value{ 0x514449EC,0x7EA2,0x4DE7,{ 0xA6,0xA6,0x7D,0xFB,0xAA,0xEB,0xB6,0xFB } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs2>
    {
        static constexpr guid value{ 0x1C199ECC,0x6DC1,0x40F4,{ 0xAF,0xEE,0x07,0xD9,0xEA,0x29,0x64,0x30 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationViewFullscreenStatics>
    {
        static constexpr guid value{ 0xBC792EBD,0x64FE,0x4B65,{ 0xA0,0xC0,0x90,0x1C,0xE2,0xB6,0x86,0x36 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationViewInteropStatics>
    {
        static constexpr guid value{ 0xC446FB5D,0x4793,0x4896,{ 0xA8,0xE2,0xBE,0x57,0xA8,0xBB,0x0F,0x50 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationViewScaling>
    {
        static constexpr guid value{ 0x1D0DDC23,0x23F3,0x4B2D,{ 0x84,0xFE,0x74,0xBF,0x37,0xB4,0x8B,0x66 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationViewScalingStatics>
    {
        static constexpr guid value{ 0xB08FECF0,0xB946,0x45C8,{ 0xA5,0xE3,0x71,0xF5,0xAA,0x78,0xF8,0x61 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationViewStatics>
    {
        static constexpr guid value{ 0x010A6306,0xC433,0x44E5,{ 0xA9,0xF2,0xBD,0x84,0xD4,0x03,0x0A,0x95 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationViewStatics2>
    {
        static constexpr guid value{ 0xAF338AE5,0xCF64,0x423C,{ 0x85,0xE5,0xF3,0xE7,0x24,0x48,0xFB,0x23 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationViewStatics3>
    {
        static constexpr guid value{ 0xA28D7594,0x8C41,0x4E13,{ 0x97,0x19,0x51,0x64,0x79,0x6F,0xE4,0xC7 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationViewStatics4>
    {
        static constexpr guid value{ 0x08FD8D33,0x2611,0x5336,{ 0xA3,0x15,0xD9,0x8E,0x63,0x66,0xC9,0xDB } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>
    {
        static constexpr guid value{ 0x975F2F1E,0xE656,0x4C5E,{ 0xA0,0xA1,0x71,0x7C,0x6F,0xFA,0x7D,0x64 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2>
    {
        static constexpr guid value{ 0x60E995CD,0x4FC2,0x48C4,{ 0xB8,0xE3,0x39,0x5F,0x2B,0x9F,0x0F,0xC1 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3>
    {
        static constexpr guid value{ 0x92059420,0x80A7,0x486D,{ 0xB2,0x1F,0xC7,0xA4,0xA2,0x42,0xA3,0x83 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationViewTitleBar>
    {
        static constexpr guid value{ 0x00924AC0,0x932B,0x4A6B,{ 0x9C,0x4B,0xDC,0x38,0xC8,0x24,0x78,0xCE } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationViewTransferContext>
    {
        static constexpr guid value{ 0x8574BC63,0x3C17,0x408E,{ 0x94,0x08,0x8A,0x1A,0x9E,0xA8,0x1B,0xFA } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationViewTransferContextStatics>
    {
        static constexpr guid value{ 0x15A89D92,0xDD79,0x4B0B,{ 0xBC,0x47,0xD5,0xF1,0x95,0xF1,0x46,0x61 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IApplicationViewWithContext>
    {
        static constexpr guid value{ 0xBD55D512,0x9DC1,0x44FC,{ 0x85,0x01,0x66,0x66,0x25,0xDF,0x60,0xDC } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IInputPane>
    {
        static constexpr guid value{ 0x640ADA70,0x06F3,0x4C87,{ 0xA6,0x78,0x98,0x29,0xC9,0x12,0x7C,0x28 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IInputPane2>
    {
        static constexpr guid value{ 0x8A6B3F26,0x7090,0x4793,{ 0x94,0x4C,0xC3,0xF2,0xCD,0xE2,0x62,0x76 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IInputPaneControl>
    {
        static constexpr guid value{ 0x088BB24F,0x962F,0x489D,{ 0xAA,0x6E,0xC6,0xBE,0x1A,0x0A,0x6E,0x52 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IInputPaneStatics>
    {
        static constexpr guid value{ 0x95F4AF3A,0xEF47,0x424A,{ 0x97,0x41,0xFD,0x28,0x15,0xEB,0xA2,0xBD } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IInputPaneStatics2>
    {
        static constexpr guid value{ 0x1B63529B,0xD9EC,0x4531,{ 0x84,0x45,0x71,0xBA,0xB9,0xFB,0x82,0x8E } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs>
    {
        static constexpr guid value{ 0xD243E016,0xD907,0x4FCC,{ 0xBB,0x8D,0xF7,0x7B,0xAA,0x50,0x28,0xF1 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IProjectionManagerStatics>
    {
        static constexpr guid value{ 0xB65F913D,0xE2F0,0x4FFD,{ 0xBA,0x95,0x34,0x24,0x16,0x47,0xE4,0x5C } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IProjectionManagerStatics2>
    {
        static constexpr guid value{ 0xF33D2F43,0x2749,0x4CDE,{ 0xB9,0x77,0xC0,0xC4,0x1E,0x74,0x15,0xD1 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IStatusBar>
    {
        static constexpr guid value{ 0x0FFCC5BF,0x98D0,0x4864,{ 0xB1,0xE8,0xB3,0xF4,0x02,0x0B,0xE8,0xB4 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IStatusBarProgressIndicator>
    {
        static constexpr guid value{ 0x76CB2670,0xA3D7,0x49CF,{ 0x82,0x00,0x4F,0x3E,0xED,0xCA,0x27,0xBB } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IStatusBarStatics>
    {
        static constexpr guid value{ 0x8B463FDF,0x422F,0x4561,{ 0x88,0x06,0xFB,0x12,0x89,0xCA,0xDF,0xB7 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IUISettings>
    {
        static constexpr guid value{ 0x85361600,0x1C63,0x4627,{ 0xBC,0xB1,0x3A,0x89,0xE0,0xBC,0x9C,0x55 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IUISettings2>
    {
        static constexpr guid value{ 0xBAD82401,0x2721,0x44F9,{ 0xBB,0x91,0x2B,0xB2,0x28,0xBE,0x44,0x2F } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IUISettings3>
    {
        static constexpr guid value{ 0x03021BE4,0x5254,0x4781,{ 0x81,0x94,0x51,0x68,0xF7,0xD0,0x6D,0x7B } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IUISettings4>
    {
        static constexpr guid value{ 0x52BB3002,0x919B,0x4D6B,{ 0x9B,0x78,0x8D,0xD6,0x6F,0xF4,0xB9,0x3B } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IUISettings5>
    {
        static constexpr guid value{ 0x5349D588,0x0CB5,0x5F05,{ 0xBD,0x34,0x70,0x6B,0x32,0x31,0xF0,0xBD } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IUISettings6>
    {
        static constexpr guid value{ 0xAEF19BD7,0xFE31,0x5A04,{ 0xAD,0xA4,0x46,0x9A,0xAE,0xC6,0xDF,0xA9 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IUISettingsAnimationsEnabledChangedEventArgs>
    {
        static constexpr guid value{ 0x0C7B4B3D,0x2EA1,0x533E,{ 0x89,0x4D,0x41,0x5B,0xC5,0x24,0x3C,0x29 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IUISettingsAutoHideScrollBarsChangedEventArgs>
    {
        static constexpr guid value{ 0x87AFD4B2,0x9146,0x5F02,{ 0x8F,0x6B,0x06,0xD4,0x54,0x17,0x4C,0x0F } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IUISettingsMessageDurationChangedEventArgs>
    {
        static constexpr guid value{ 0x338AAD52,0x4A5D,0x5B59,{ 0x80,0x02,0xD9,0x30,0xF6,0x08,0xFD,0x6E } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IUIViewSettings>
    {
        static constexpr guid value{ 0xC63657F6,0x8850,0x470D,{ 0x88,0xF8,0x45,0x5E,0x16,0xEA,0x2C,0x26 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IUIViewSettingsStatics>
    {
        static constexpr guid value{ 0x595C97A5,0xF8F6,0x41CF,{ 0xB0,0xFB,0xAA,0xCD,0xB8,0x1F,0xD5,0xF6 } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IViewModePreferences>
    {
        static constexpr guid value{ 0x878FCD3A,0x0B99,0x42C9,{ 0x84,0xD0,0xD3,0xF1,0xD4,0x03,0x55,0x4B } };
    };
    template <> struct guid_storage<Windows::UI::ViewManagement::IViewModePreferencesStatics>
    {
        static constexpr guid value{ 0x69B60A65,0x5DE5,0x40D8,{ 0x83,0x06,0x38,0x33,0xDF,0x7A,0x22,0x74 } };
    };
    template <> struct default_interface<Windows::UI::ViewManagement::AccessibilitySettings>
    {
        using type = Windows::UI::ViewManagement::IAccessibilitySettings;
    };
    template <> struct default_interface<Windows::UI::ViewManagement::ActivationViewSwitcher>
    {
        using type = Windows::UI::ViewManagement::IActivationViewSwitcher;
    };
    template <> struct default_interface<Windows::UI::ViewManagement::ApplicationView>
    {
        using type = Windows::UI::ViewManagement::IApplicationView;
    };
    template <> struct default_interface<Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs>
    {
        using type = Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs;
    };
    template <> struct default_interface<Windows::UI::ViewManagement::ApplicationViewScaling>
    {
        using type = Windows::UI::ViewManagement::IApplicationViewScaling;
    };
    template <> struct default_interface<Windows::UI::ViewManagement::ApplicationViewTitleBar>
    {
        using type = Windows::UI::ViewManagement::IApplicationViewTitleBar;
    };
    template <> struct default_interface<Windows::UI::ViewManagement::ApplicationViewTransferContext>
    {
        using type = Windows::UI::ViewManagement::IApplicationViewTransferContext;
    };
    template <> struct default_interface<Windows::UI::ViewManagement::InputPane>
    {
        using type = Windows::UI::ViewManagement::IInputPane;
    };
    template <> struct default_interface<Windows::UI::ViewManagement::InputPaneVisibilityEventArgs>
    {
        using type = Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs;
    };
    template <> struct default_interface<Windows::UI::ViewManagement::StatusBar>
    {
        using type = Windows::UI::ViewManagement::IStatusBar;
    };
    template <> struct default_interface<Windows::UI::ViewManagement::StatusBarProgressIndicator>
    {
        using type = Windows::UI::ViewManagement::IStatusBarProgressIndicator;
    };
    template <> struct default_interface<Windows::UI::ViewManagement::UISettings>
    {
        using type = Windows::UI::ViewManagement::IUISettings;
    };
    template <> struct default_interface<Windows::UI::ViewManagement::UISettingsAnimationsEnabledChangedEventArgs>
    {
        using type = Windows::UI::ViewManagement::IUISettingsAnimationsEnabledChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::ViewManagement::UISettingsAutoHideScrollBarsChangedEventArgs>
    {
        using type = Windows::UI::ViewManagement::IUISettingsAutoHideScrollBarsChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::ViewManagement::UISettingsMessageDurationChangedEventArgs>
    {
        using type = Windows::UI::ViewManagement::IUISettingsMessageDurationChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::ViewManagement::UIViewSettings>
    {
        using type = Windows::UI::ViewManagement::IUIViewSettings;
    };
    template <> struct default_interface<Windows::UI::ViewManagement::ViewModePreferences>
    {
        using type = Windows::UI::ViewManagement::IViewModePreferences;
    };
    template <> struct abi<Windows::UI::ViewManagement::IAccessibilitySettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HighContrast(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HighContrastScheme(void**) noexcept = 0;
            virtual int32_t __stdcall add_HighContrastChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HighContrastChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IActivationViewSwitcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowAsStandaloneAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAsStandaloneWithSizePreferenceAsync(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall IsViewPresentedOnActivationVirtualDesktop(int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationView>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Orientation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AdjacentToLeftDisplayEdge(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AdjacentToRightDisplayEdge(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsFullScreen(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsOnLockScreen(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsScreenCaptureEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsScreenCaptureEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall get_Id(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_Consolidated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Consolidated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationView2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SuppressSystemOverlays(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SuppressSystemOverlays(bool) noexcept = 0;
            virtual int32_t __stdcall get_VisibleBounds(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall add_VisibleBoundsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VisibleBoundsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall SetDesiredBoundsMode(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall get_DesiredBoundsMode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationView3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TitleBar(void**) noexcept = 0;
            virtual int32_t __stdcall get_FullScreenSystemOverlayMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FullScreenSystemOverlayMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsFullScreenMode(bool*) noexcept = 0;
            virtual int32_t __stdcall TryEnterFullScreenMode(bool*) noexcept = 0;
            virtual int32_t __stdcall ExitFullScreenMode() noexcept = 0;
            virtual int32_t __stdcall ShowStandardSystemOverlays() noexcept = 0;
            virtual int32_t __stdcall TryResizeView(Windows::Foundation::Size, bool*) noexcept = 0;
            virtual int32_t __stdcall SetPreferredMinSize(Windows::Foundation::Size) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationView4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ViewMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall IsViewModeSupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall TryEnterViewModeAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryEnterViewModeWithPreferencesAsync(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryConsolidateAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationView7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PersistedStateId(void**) noexcept = 0;
            virtual int32_t __stdcall put_PersistedStateId(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationView9>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WindowingEnvironment(void**) noexcept = 0;
            virtual int32_t __stdcall GetDisplayRegions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsUserInitiated(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsAppInitiated(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationViewFullscreenStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryUnsnapToFullscreen(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationViewInteropStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetApplicationViewIdForWindow(void*, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationViewScaling>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationViewScalingStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisableLayoutScaling(bool*) noexcept = 0;
            virtual int32_t __stdcall TrySetDisableLayoutScaling(bool, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationViewStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Value(int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryUnsnap(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationViewStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall get_TerminateAppOnFinalViewClose(bool*) noexcept = 0;
            virtual int32_t __stdcall put_TerminateAppOnFinalViewClose(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationViewStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PreferredLaunchWindowingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PreferredLaunchWindowingMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PreferredLaunchViewSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall put_PreferredLaunchViewSize(Windows::Foundation::Size) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationViewStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ClearAllPersistedState() noexcept = 0;
            virtual int32_t __stdcall ClearPersistedState(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall DisableShowingMainViewOnActivation() noexcept = 0;
            virtual int32_t __stdcall TryShowAsStandaloneAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryShowAsStandaloneWithSizePreferenceAsync(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryShowAsStandaloneWithAnchorViewAndSizePreferenceAsync(int32_t, int32_t, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SwitchAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SwitchFromViewAsync(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SwitchFromViewWithOptionsAsync(int32_t, int32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall PrepareForCustomAnimatedSwitchAsync(int32_t, int32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall DisableSystemViewActivationPolicy() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryShowAsViewModeAsync(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryShowAsViewModeWithPreferencesAsync(int32_t, int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationViewTitleBar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_BackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonBackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonBackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonHoverForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonHoverForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonHoverBackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonHoverBackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonPressedForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonPressedForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonPressedBackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonPressedBackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_InactiveForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_InactiveForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_InactiveBackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_InactiveBackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonInactiveForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonInactiveForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonInactiveBackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonInactiveBackgroundColor(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationViewTransferContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ViewId(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ViewId(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationViewTransferContextStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DataPackageFormatId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IApplicationViewWithContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UIContext(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IInputPane>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Showing(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Showing(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Hiding(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Hiding(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_OccludedRect(Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IInputPane2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryShow(bool*) noexcept = 0;
            virtual int32_t __stdcall TryHide(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IInputPaneControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Visible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Visible(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IInputPaneStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IInputPaneStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForUIContext(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OccludedRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall put_EnsuredFocusedElementInView(bool) noexcept = 0;
            virtual int32_t __stdcall get_EnsuredFocusedElementInView(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IProjectionManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartProjectingAsync(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SwapDisplaysForViewsAsync(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall StopProjectingAsync(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_ProjectionDisplayAvailable(bool*) noexcept = 0;
            virtual int32_t __stdcall add_ProjectionDisplayAvailableChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ProjectionDisplayAvailableChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IProjectionManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartProjectingWithDeviceInfoAsync(int32_t, int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestStartProjectingAsync(int32_t, int32_t, Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall RequestStartProjectingWithPlacementAsync(int32_t, int32_t, Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IStatusBar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowAsync(void**) noexcept = 0;
            virtual int32_t __stdcall HideAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundOpacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_BackgroundOpacity(double) noexcept = 0;
            virtual int32_t __stdcall get_ForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_BackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ProgressIndicator(void**) noexcept = 0;
            virtual int32_t __stdcall get_OccludedRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall add_Showing(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Showing(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Hiding(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Hiding(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IStatusBarProgressIndicator>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowAsync(void**) noexcept = 0;
            virtual int32_t __stdcall HideAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall put_Text(void*) noexcept = 0;
            virtual int32_t __stdcall get_ProgressValue(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProgressValue(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IStatusBarStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IUISettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HandPreference(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CursorSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_ScrollBarSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_ScrollBarArrowSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_ScrollBarThumbBoxSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_MessageDuration(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AnimationsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CaretBrowsingEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CaretBlinkRate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CaretWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DoubleClickTime(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MouseHoverTime(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall UIElementColor(int32_t, struct struct_Windows_UI_Color*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IUISettings2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TextScaleFactor(double*) noexcept = 0;
            virtual int32_t __stdcall add_TextScaleFactorChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TextScaleFactorChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IUISettings3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetColorValue(int32_t, struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall add_ColorValuesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ColorValuesChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IUISettings4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AdvancedEffectsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall add_AdvancedEffectsEnabledChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AdvancedEffectsEnabledChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IUISettings5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AutoHideScrollBars(bool*) noexcept = 0;
            virtual int32_t __stdcall add_AutoHideScrollBarsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AutoHideScrollBarsChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IUISettings6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_AnimationsEnabledChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AnimationsEnabledChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MessageDurationChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MessageDurationChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IUISettingsAnimationsEnabledChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IUISettingsAutoHideScrollBarsChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IUISettingsMessageDurationChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IUIViewSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UserInteractionMode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IUIViewSettingsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IViewModePreferences>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ViewSizePreference(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ViewSizePreference(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CustomSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall put_CustomSize(Windows::Foundation::Size) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::IViewModePreferencesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateDefault(int32_t, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IAccessibilitySettings
    {
        [[nodiscard]] auto HighContrast() const;
        [[nodiscard]] auto HighContrastScheme() const;
        auto HighContrastChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::AccessibilitySettings, Windows::Foundation::IInspectable> const& handler) const;
        using HighContrastChanged_revoker = impl::event_revoker<Windows::UI::ViewManagement::IAccessibilitySettings, &impl::abi_t<Windows::UI::ViewManagement::IAccessibilitySettings>::remove_HighContrastChanged>;
        HighContrastChanged_revoker HighContrastChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::AccessibilitySettings, Windows::Foundation::IInspectable> const& handler) const;
        auto HighContrastChanged(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::UI::ViewManagement::IAccessibilitySettings>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IAccessibilitySettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IActivationViewSwitcher
    {
        auto ShowAsStandaloneAsync(int32_t viewId) const;
        auto ShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference const& sizePreference) const;
        auto IsViewPresentedOnActivationVirtualDesktop(int32_t viewId) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IActivationViewSwitcher>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IActivationViewSwitcher<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationView
    {
        [[nodiscard]] auto Orientation() const;
        [[nodiscard]] auto AdjacentToLeftDisplayEdge() const;
        [[nodiscard]] auto AdjacentToRightDisplayEdge() const;
        [[nodiscard]] auto IsFullScreen() const;
        [[nodiscard]] auto IsOnLockScreen() const;
        [[nodiscard]] auto IsScreenCaptureEnabled() const;
        auto IsScreenCaptureEnabled(bool value) const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Title() const;
        [[nodiscard]] auto Id() const;
        auto Consolidated(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs> const& handler) const;
        using Consolidated_revoker = impl::event_revoker<Windows::UI::ViewManagement::IApplicationView, &impl::abi_t<Windows::UI::ViewManagement::IApplicationView>::remove_Consolidated>;
        Consolidated_revoker Consolidated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs> const& handler) const;
        auto Consolidated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationView>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationView<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationView2
    {
        [[nodiscard]] auto SuppressSystemOverlays() const;
        auto SuppressSystemOverlays(bool value) const;
        [[nodiscard]] auto VisibleBounds() const;
        auto VisibleBoundsChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::Foundation::IInspectable> const& handler) const;
        using VisibleBoundsChanged_revoker = impl::event_revoker<Windows::UI::ViewManagement::IApplicationView2, &impl::abi_t<Windows::UI::ViewManagement::IApplicationView2>::remove_VisibleBoundsChanged>;
        VisibleBoundsChanged_revoker VisibleBoundsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::Foundation::IInspectable> const& handler) const;
        auto VisibleBoundsChanged(winrt::event_token const& token) const noexcept;
        auto SetDesiredBoundsMode(Windows::UI::ViewManagement::ApplicationViewBoundsMode const& boundsMode) const;
        [[nodiscard]] auto DesiredBoundsMode() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationView2>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationView2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationView3
    {
        [[nodiscard]] auto TitleBar() const;
        [[nodiscard]] auto FullScreenSystemOverlayMode() const;
        auto FullScreenSystemOverlayMode(Windows::UI::ViewManagement::FullScreenSystemOverlayMode const& value) const;
        [[nodiscard]] auto IsFullScreenMode() const;
        auto TryEnterFullScreenMode() const;
        auto ExitFullScreenMode() const;
        auto ShowStandardSystemOverlays() const;
        auto TryResizeView(Windows::Foundation::Size const& value) const;
        auto SetPreferredMinSize(Windows::Foundation::Size const& minSize) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationView3>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationView3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationView4
    {
        [[nodiscard]] auto ViewMode() const;
        auto IsViewModeSupported(Windows::UI::ViewManagement::ApplicationViewMode const& viewMode) const;
        auto TryEnterViewModeAsync(Windows::UI::ViewManagement::ApplicationViewMode const& viewMode) const;
        auto TryEnterViewModeAsync(Windows::UI::ViewManagement::ApplicationViewMode const& viewMode, Windows::UI::ViewManagement::ViewModePreferences const& viewModePreferences) const;
        auto TryConsolidateAsync() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationView4>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationView4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationView7
    {
        [[nodiscard]] auto PersistedStateId() const;
        auto PersistedStateId(param::hstring const& value) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationView7>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationView7<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationView9
    {
        [[nodiscard]] auto WindowingEnvironment() const;
        auto GetDisplayRegions() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationView9>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationView9<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationViewConsolidatedEventArgs
    {
        [[nodiscard]] auto IsUserInitiated() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewConsolidatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationViewConsolidatedEventArgs2
    {
        [[nodiscard]] auto IsAppInitiated() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewConsolidatedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationViewFullscreenStatics
    {
        auto TryUnsnapToFullscreen() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationViewFullscreenStatics>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewFullscreenStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationViewInteropStatics
    {
        auto GetApplicationViewIdForWindow(Windows::UI::Core::ICoreWindow const& window) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationViewInteropStatics>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewInteropStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationViewScaling
    {
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationViewScaling>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewScaling<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationViewScalingStatics
    {
        [[nodiscard]] auto DisableLayoutScaling() const;
        auto TrySetDisableLayoutScaling(bool disableLayoutScaling) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationViewScalingStatics>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewScalingStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationViewStatics
    {
        [[nodiscard]] auto Value() const;
        auto TryUnsnap() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationViewStatics>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationViewStatics2
    {
        auto GetForCurrentView() const;
        [[nodiscard]] auto TerminateAppOnFinalViewClose() const;
        auto TerminateAppOnFinalViewClose(bool value) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationViewStatics2>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationViewStatics3
    {
        [[nodiscard]] auto PreferredLaunchWindowingMode() const;
        auto PreferredLaunchWindowingMode(Windows::UI::ViewManagement::ApplicationViewWindowingMode const& value) const;
        [[nodiscard]] auto PreferredLaunchViewSize() const;
        auto PreferredLaunchViewSize(Windows::Foundation::Size const& value) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationViewStatics3>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationViewStatics4
    {
        auto ClearAllPersistedState() const;
        auto ClearPersistedState(param::hstring const& key) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationViewStatics4>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics
    {
        auto DisableShowingMainViewOnActivation() const;
        auto TryShowAsStandaloneAsync(int32_t viewId) const;
        auto TryShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference const& sizePreference) const;
        auto TryShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference const& sizePreference, int32_t anchorViewId, Windows::UI::ViewManagement::ViewSizePreference const& anchorSizePreference) const;
        auto SwitchAsync(int32_t viewId) const;
        auto SwitchAsync(int32_t toViewId, int32_t fromViewId) const;
        auto SwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions const& options) const;
        auto PrepareForCustomAnimatedSwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions const& options) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics2
    {
        auto DisableSystemViewActivationPolicy() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics3
    {
        auto TryShowAsViewModeAsync(int32_t viewId, Windows::UI::ViewManagement::ApplicationViewMode const& viewMode) const;
        auto TryShowAsViewModeAsync(int32_t viewId, Windows::UI::ViewManagement::ApplicationViewMode const& viewMode, Windows::UI::ViewManagement::ViewModePreferences const& viewModePreferences) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationViewTitleBar
    {
        auto ForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ForegroundColor() const;
        auto BackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto BackgroundColor() const;
        auto ButtonForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ButtonForegroundColor() const;
        auto ButtonBackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ButtonBackgroundColor() const;
        auto ButtonHoverForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ButtonHoverForegroundColor() const;
        auto ButtonHoverBackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ButtonHoverBackgroundColor() const;
        auto ButtonPressedForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ButtonPressedForegroundColor() const;
        auto ButtonPressedBackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ButtonPressedBackgroundColor() const;
        auto InactiveForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto InactiveForegroundColor() const;
        auto InactiveBackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto InactiveBackgroundColor() const;
        auto ButtonInactiveForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ButtonInactiveForegroundColor() const;
        auto ButtonInactiveBackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ButtonInactiveBackgroundColor() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationViewTitleBar>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationViewTransferContext
    {
        [[nodiscard]] auto ViewId() const;
        auto ViewId(int32_t value) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationViewTransferContext>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewTransferContext<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationViewTransferContextStatics
    {
        [[nodiscard]] auto DataPackageFormatId() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationViewTransferContextStatics>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewTransferContextStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IApplicationViewWithContext
    {
        [[nodiscard]] auto UIContext() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IApplicationViewWithContext>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewWithContext<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IInputPane
    {
        auto Showing(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> const& handler) const;
        using Showing_revoker = impl::event_revoker<Windows::UI::ViewManagement::IInputPane, &impl::abi_t<Windows::UI::ViewManagement::IInputPane>::remove_Showing>;
        Showing_revoker Showing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> const& handler) const;
        auto Showing(winrt::event_token const& token) const noexcept;
        auto Hiding(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> const& handler) const;
        using Hiding_revoker = impl::event_revoker<Windows::UI::ViewManagement::IInputPane, &impl::abi_t<Windows::UI::ViewManagement::IInputPane>::remove_Hiding>;
        Hiding_revoker Hiding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> const& handler) const;
        auto Hiding(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto OccludedRect() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IInputPane>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IInputPane<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IInputPane2
    {
        auto TryShow() const;
        auto TryHide() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IInputPane2>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IInputPane2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IInputPaneControl
    {
        [[nodiscard]] auto Visible() const;
        auto Visible(bool value) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IInputPaneControl>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IInputPaneControl<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IInputPaneStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IInputPaneStatics>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IInputPaneStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IInputPaneStatics2
    {
        auto GetForUIContext(Windows::UI::UIContext const& context) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IInputPaneStatics2>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IInputPaneStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IInputPaneVisibilityEventArgs
    {
        [[nodiscard]] auto OccludedRect() const;
        auto EnsuredFocusedElementInView(bool value) const;
        [[nodiscard]] auto EnsuredFocusedElementInView() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IInputPaneVisibilityEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IProjectionManagerStatics
    {
        auto StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId) const;
        auto SwapDisplaysForViewsAsync(int32_t projectionViewId, int32_t anchorViewId) const;
        auto StopProjectingAsync(int32_t projectionViewId, int32_t anchorViewId) const;
        [[nodiscard]] auto ProjectionDisplayAvailable() const;
        auto ProjectionDisplayAvailableChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using ProjectionDisplayAvailableChanged_revoker = impl::event_revoker<Windows::UI::ViewManagement::IProjectionManagerStatics, &impl::abi_t<Windows::UI::ViewManagement::IProjectionManagerStatics>::remove_ProjectionDisplayAvailableChanged>;
        ProjectionDisplayAvailableChanged_revoker ProjectionDisplayAvailableChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto ProjectionDisplayAvailableChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::ViewManagement::IProjectionManagerStatics>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IProjectionManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IProjectionManagerStatics2
    {
        auto StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Devices::Enumeration::DeviceInformation const& displayDeviceInfo) const;
        auto RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Foundation::Rect const& selection) const;
        auto RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& prefferedPlacement) const;
        auto GetDeviceSelector() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IProjectionManagerStatics2>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IProjectionManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IStatusBar
    {
        auto ShowAsync() const;
        auto HideAsync() const;
        [[nodiscard]] auto BackgroundOpacity() const;
        auto BackgroundOpacity(double value) const;
        [[nodiscard]] auto ForegroundColor() const;
        auto ForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto BackgroundColor() const;
        auto BackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ProgressIndicator() const;
        [[nodiscard]] auto OccludedRect() const;
        auto Showing(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::Foundation::IInspectable> const& eventHandler) const;
        using Showing_revoker = impl::event_revoker<Windows::UI::ViewManagement::IStatusBar, &impl::abi_t<Windows::UI::ViewManagement::IStatusBar>::remove_Showing>;
        Showing_revoker Showing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::Foundation::IInspectable> const& eventHandler) const;
        auto Showing(winrt::event_token const& token) const noexcept;
        auto Hiding(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::Foundation::IInspectable> const& eventHandler) const;
        using Hiding_revoker = impl::event_revoker<Windows::UI::ViewManagement::IStatusBar, &impl::abi_t<Windows::UI::ViewManagement::IStatusBar>::remove_Hiding>;
        Hiding_revoker Hiding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::Foundation::IInspectable> const& eventHandler) const;
        auto Hiding(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::ViewManagement::IStatusBar>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IStatusBar<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IStatusBarProgressIndicator
    {
        auto ShowAsync() const;
        auto HideAsync() const;
        [[nodiscard]] auto Text() const;
        auto Text(param::hstring const& value) const;
        [[nodiscard]] auto ProgressValue() const;
        auto ProgressValue(Windows::Foundation::IReference<double> const& value) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IStatusBarProgressIndicator>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IStatusBarProgressIndicator<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IStatusBarStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IStatusBarStatics>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IStatusBarStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IUISettings
    {
        [[nodiscard]] auto HandPreference() const;
        [[nodiscard]] auto CursorSize() const;
        [[nodiscard]] auto ScrollBarSize() const;
        [[nodiscard]] auto ScrollBarArrowSize() const;
        [[nodiscard]] auto ScrollBarThumbBoxSize() const;
        [[nodiscard]] auto MessageDuration() const;
        [[nodiscard]] auto AnimationsEnabled() const;
        [[nodiscard]] auto CaretBrowsingEnabled() const;
        [[nodiscard]] auto CaretBlinkRate() const;
        [[nodiscard]] auto CaretWidth() const;
        [[nodiscard]] auto DoubleClickTime() const;
        [[nodiscard]] auto MouseHoverTime() const;
        auto UIElementColor(Windows::UI::ViewManagement::UIElementType const& desiredElement) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IUISettings>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IUISettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IUISettings2
    {
        [[nodiscard]] auto TextScaleFactor() const;
        auto TextScaleFactorChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const& handler) const;
        using TextScaleFactorChanged_revoker = impl::event_revoker<Windows::UI::ViewManagement::IUISettings2, &impl::abi_t<Windows::UI::ViewManagement::IUISettings2>::remove_TextScaleFactorChanged>;
        TextScaleFactorChanged_revoker TextScaleFactorChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const& handler) const;
        auto TextScaleFactorChanged(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::UI::ViewManagement::IUISettings2>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IUISettings2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IUISettings3
    {
        auto GetColorValue(Windows::UI::ViewManagement::UIColorType const& desiredColor) const;
        auto ColorValuesChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const& handler) const;
        using ColorValuesChanged_revoker = impl::event_revoker<Windows::UI::ViewManagement::IUISettings3, &impl::abi_t<Windows::UI::ViewManagement::IUISettings3>::remove_ColorValuesChanged>;
        ColorValuesChanged_revoker ColorValuesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const& handler) const;
        auto ColorValuesChanged(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::UI::ViewManagement::IUISettings3>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IUISettings3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IUISettings4
    {
        [[nodiscard]] auto AdvancedEffectsEnabled() const;
        auto AdvancedEffectsEnabledChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const& handler) const;
        using AdvancedEffectsEnabledChanged_revoker = impl::event_revoker<Windows::UI::ViewManagement::IUISettings4, &impl::abi_t<Windows::UI::ViewManagement::IUISettings4>::remove_AdvancedEffectsEnabledChanged>;
        AdvancedEffectsEnabledChanged_revoker AdvancedEffectsEnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const& handler) const;
        auto AdvancedEffectsEnabledChanged(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::UI::ViewManagement::IUISettings4>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IUISettings4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IUISettings5
    {
        [[nodiscard]] auto AutoHideScrollBars() const;
        auto AutoHideScrollBarsChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::UI::ViewManagement::UISettingsAutoHideScrollBarsChangedEventArgs> const& handler) const;
        using AutoHideScrollBarsChanged_revoker = impl::event_revoker<Windows::UI::ViewManagement::IUISettings5, &impl::abi_t<Windows::UI::ViewManagement::IUISettings5>::remove_AutoHideScrollBarsChanged>;
        AutoHideScrollBarsChanged_revoker AutoHideScrollBarsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::UI::ViewManagement::UISettingsAutoHideScrollBarsChangedEventArgs> const& handler) const;
        auto AutoHideScrollBarsChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::ViewManagement::IUISettings5>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IUISettings5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IUISettings6
    {
        auto AnimationsEnabledChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::UI::ViewManagement::UISettingsAnimationsEnabledChangedEventArgs> const& handler) const;
        using AnimationsEnabledChanged_revoker = impl::event_revoker<Windows::UI::ViewManagement::IUISettings6, &impl::abi_t<Windows::UI::ViewManagement::IUISettings6>::remove_AnimationsEnabledChanged>;
        AnimationsEnabledChanged_revoker AnimationsEnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::UI::ViewManagement::UISettingsAnimationsEnabledChangedEventArgs> const& handler) const;
        auto AnimationsEnabledChanged(winrt::event_token const& token) const noexcept;
        auto MessageDurationChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::UI::ViewManagement::UISettingsMessageDurationChangedEventArgs> const& handler) const;
        using MessageDurationChanged_revoker = impl::event_revoker<Windows::UI::ViewManagement::IUISettings6, &impl::abi_t<Windows::UI::ViewManagement::IUISettings6>::remove_MessageDurationChanged>;
        MessageDurationChanged_revoker MessageDurationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::UI::ViewManagement::UISettingsMessageDurationChangedEventArgs> const& handler) const;
        auto MessageDurationChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::ViewManagement::IUISettings6>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IUISettings6<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IUISettingsAnimationsEnabledChangedEventArgs
    {
    };
    template <> struct consume<Windows::UI::ViewManagement::IUISettingsAnimationsEnabledChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IUISettingsAnimationsEnabledChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IUISettingsAutoHideScrollBarsChangedEventArgs
    {
    };
    template <> struct consume<Windows::UI::ViewManagement::IUISettingsAutoHideScrollBarsChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IUISettingsAutoHideScrollBarsChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IUISettingsMessageDurationChangedEventArgs
    {
    };
    template <> struct consume<Windows::UI::ViewManagement::IUISettingsMessageDurationChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IUISettingsMessageDurationChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IUIViewSettings
    {
        [[nodiscard]] auto UserInteractionMode() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IUIViewSettings>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IUIViewSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IUIViewSettingsStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IUIViewSettingsStatics>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IUIViewSettingsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IViewModePreferences
    {
        [[nodiscard]] auto ViewSizePreference() const;
        auto ViewSizePreference(Windows::UI::ViewManagement::ViewSizePreference const& value) const;
        [[nodiscard]] auto CustomSize() const;
        auto CustomSize(Windows::Foundation::Size const& value) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IViewModePreferences>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IViewModePreferences<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_IViewModePreferencesStatics
    {
        auto CreateDefault(Windows::UI::ViewManagement::ApplicationViewMode const& mode) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::IViewModePreferencesStatics>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_IViewModePreferencesStatics<D>;
    };
}
#endif
