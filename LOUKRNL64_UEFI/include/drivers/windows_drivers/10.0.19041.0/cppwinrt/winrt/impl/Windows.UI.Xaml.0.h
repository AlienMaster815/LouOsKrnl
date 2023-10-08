// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_0_H
#define WINRT_Windows_UI_Xaml_0_H
namespace winrt::Windows::ApplicationModel
{
    struct EnteredBackgroundEventArgs;
    struct LeavingBackgroundEventArgs;
    struct SuspendingEventArgs;
}
namespace winrt::Windows::ApplicationModel::Activation
{
    struct BackgroundActivatedEventArgs;
    struct CachedFileUpdaterActivatedEventArgs;
    struct FileActivatedEventArgs;
    struct FileOpenPickerActivatedEventArgs;
    struct FileSavePickerActivatedEventArgs;
    struct IActivatedEventArgs;
    struct LaunchActivatedEventArgs;
    struct SearchActivatedEventArgs;
    struct ShareTargetActivatedEventArgs;
}
namespace winrt::Windows::ApplicationModel::DataTransfer
{
    struct DataPackage;
    enum class DataPackageOperation : uint32_t;
    struct DataPackageView;
}
namespace winrt::Windows::ApplicationModel::DataTransfer::DragDrop
{
    enum class DragDropModifiers : uint32_t;
}
namespace winrt::Windows::Foundation
{
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
    struct HResult;
    template <typename T> struct IReference;
    struct Point;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IObservableVector;
    template <typename T> struct IVector;
}
namespace winrt::Windows::Foundation::Numerics
{
}
namespace winrt::Windows::Graphics::Imaging
{
    struct SoftwareBitmap;
}
namespace winrt::Windows::UI
{
    struct Color;
    struct UIContext;
}
namespace winrt::Windows::UI::Composition
{
    struct AnimationPropertyInfo;
    struct Compositor;
    struct ICompositionAnimationBase;
}
namespace winrt::Windows::UI::Core
{
    struct CoreDispatcher;
    struct CoreWindow;
    struct CoreWindowEventArgs;
    struct VisibilityChangedEventArgs;
    struct WindowActivatedEventArgs;
    struct WindowSizeChangedEventArgs;
}
namespace winrt::Windows::UI::Input
{
    struct PointerPoint;
}
namespace winrt::Windows::UI::Xaml::Automation::Peers
{
    struct AutomationPeer;
}
namespace winrt::Windows::UI::Xaml::Controls
{
    struct ContainerContentChangingEventArgs;
    struct Control;
}
namespace winrt::Windows::UI::Xaml::Controls::Primitives
{
    enum class ComponentResourceLocation : int32_t;
    struct FlyoutBase;
}
namespace winrt::Windows::UI::Xaml::Data
{
    struct BindingBase;
    struct BindingExpression;
}
namespace winrt::Windows::UI::Xaml::Input
{
    struct AccessKeyDisplayDismissedEventArgs;
    struct AccessKeyDisplayRequestedEventArgs;
    struct AccessKeyInvokedEventArgs;
    struct CharacterReceivedRoutedEventArgs;
    struct ContextRequestedEventArgs;
    struct DoubleTappedEventHandler;
    struct GettingFocusEventArgs;
    struct HoldingEventHandler;
    struct KeyEventHandler;
    enum class KeyTipPlacementMode : int32_t;
    struct KeyboardAcceleratorInvokedEventArgs;
    enum class KeyboardAcceleratorPlacementMode : int32_t;
    enum class KeyboardNavigationMode : int32_t;
    struct LosingFocusEventArgs;
    struct ManipulationCompletedEventHandler;
    struct ManipulationDeltaEventHandler;
    struct ManipulationInertiaStartingEventHandler;
    enum class ManipulationModes : uint32_t;
    struct ManipulationStartedEventHandler;
    struct ManipulationStartingEventHandler;
    struct NoFocusCandidateFoundEventArgs;
    struct Pointer;
    struct PointerEventHandler;
    struct ProcessKeyboardAcceleratorEventArgs;
    struct RightTappedEventHandler;
    struct TappedEventHandler;
    enum class XYFocusKeyboardNavigationMode : int32_t;
    enum class XYFocusNavigationStrategy : int32_t;
}
namespace winrt::Windows::UI::Xaml::Interop
{
    struct TypeName;
}
namespace winrt::Windows::UI::Xaml::Media
{
    struct Brush;
    struct CacheMode;
    enum class ElementCompositeMode : int32_t;
    struct GeneralTransform;
    struct Projection;
    struct RectangleGeometry;
    struct Shadow;
    struct Transform;
}
namespace winrt::Windows::UI::Xaml::Media::Animation
{
    struct EasingFunctionBase;
    struct Storyboard;
    struct TransitionCollection;
}
namespace winrt::Windows::UI::Xaml::Media::Imaging
{
    struct BitmapImage;
}
namespace winrt::Windows::UI::Xaml::Media::Media3D
{
    struct Transform3D;
}
namespace winrt::Windows::UI::Xaml
{
    enum class ApplicationHighContrastAdjustment : uint32_t
    {
        None = 0,
        Auto = 0xffffffff,
    };
    enum class ApplicationRequiresPointerMode : int32_t
    {
        Auto = 0,
        WhenRequested = 1,
    };
    enum class ApplicationTheme : int32_t
    {
        Light = 0,
        Dark = 1,
    };
    enum class AutomationTextAttributesEnum : int32_t
    {
        AnimationStyleAttribute = 40000,
        BackgroundColorAttribute = 40001,
        BulletStyleAttribute = 40002,
        CapStyleAttribute = 40003,
        CultureAttribute = 40004,
        FontNameAttribute = 40005,
        FontSizeAttribute = 40006,
        FontWeightAttribute = 40007,
        ForegroundColorAttribute = 40008,
        HorizontalTextAlignmentAttribute = 40009,
        IndentationFirstLineAttribute = 40010,
        IndentationLeadingAttribute = 40011,
        IndentationTrailingAttribute = 40012,
        IsHiddenAttribute = 40013,
        IsItalicAttribute = 40014,
        IsReadOnlyAttribute = 40015,
        IsSubscriptAttribute = 40016,
        IsSuperscriptAttribute = 40017,
        MarginBottomAttribute = 40018,
        MarginLeadingAttribute = 40019,
        MarginTopAttribute = 40020,
        MarginTrailingAttribute = 40021,
        OutlineStylesAttribute = 40022,
        OverlineColorAttribute = 40023,
        OverlineStyleAttribute = 40024,
        StrikethroughColorAttribute = 40025,
        StrikethroughStyleAttribute = 40026,
        TabsAttribute = 40027,
        TextFlowDirectionsAttribute = 40028,
        UnderlineColorAttribute = 40029,
        UnderlineStyleAttribute = 40030,
        AnnotationTypesAttribute = 40031,
        AnnotationObjectsAttribute = 40032,
        StyleNameAttribute = 40033,
        StyleIdAttribute = 40034,
        LinkAttribute = 40035,
        IsActiveAttribute = 40036,
        SelectionActiveEndAttribute = 40037,
        CaretPositionAttribute = 40038,
        CaretBidiModeAttribute = 40039,
    };
    enum class DurationType : int32_t
    {
        Automatic = 0,
        TimeSpan = 1,
        Forever = 2,
    };
    enum class ElementHighContrastAdjustment : uint32_t
    {
        None = 0,
        Application = 0x80000000,
        Auto = 0xffffffff,
    };
    enum class ElementSoundKind : int32_t
    {
        Focus = 0,
        Invoke = 1,
        Show = 2,
        Hide = 3,
        MovePrevious = 4,
        MoveNext = 5,
        GoBack = 6,
    };
    enum class ElementSoundMode : int32_t
    {
        Default = 0,
        FocusOnly = 1,
        Off = 2,
    };
    enum class ElementSoundPlayerState : int32_t
    {
        Auto = 0,
        Off = 1,
        On = 2,
    };
    enum class ElementSpatialAudioMode : int32_t
    {
        Auto = 0,
        Off = 1,
        On = 2,
    };
    enum class ElementTheme : int32_t
    {
        Default = 0,
        Light = 1,
        Dark = 2,
    };
    enum class FlowDirection : int32_t
    {
        LeftToRight = 0,
        RightToLeft = 1,
    };
    enum class FocusState : int32_t
    {
        Unfocused = 0,
        Pointer = 1,
        Keyboard = 2,
        Programmatic = 3,
    };
    enum class FocusVisualKind : int32_t
    {
        DottedLine = 0,
        HighVisibility = 1,
        Reveal = 2,
    };
    enum class FontCapitals : int32_t
    {
        Normal = 0,
        AllSmallCaps = 1,
        SmallCaps = 2,
        AllPetiteCaps = 3,
        PetiteCaps = 4,
        Unicase = 5,
        Titling = 6,
    };
    enum class FontEastAsianLanguage : int32_t
    {
        Normal = 0,
        HojoKanji = 1,
        Jis04 = 2,
        Jis78 = 3,
        Jis83 = 4,
        Jis90 = 5,
        NlcKanji = 6,
        Simplified = 7,
        Traditional = 8,
        TraditionalNames = 9,
    };
    enum class FontEastAsianWidths : int32_t
    {
        Normal = 0,
        Full = 1,
        Half = 2,
        Proportional = 3,
        Quarter = 4,
        Third = 5,
    };
    enum class FontFraction : int32_t
    {
        Normal = 0,
        Stacked = 1,
        Slashed = 2,
    };
    enum class FontNumeralAlignment : int32_t
    {
        Normal = 0,
        Proportional = 1,
        Tabular = 2,
    };
    enum class FontNumeralStyle : int32_t
    {
        Normal = 0,
        Lining = 1,
        OldStyle = 2,
    };
    enum class FontVariants : int32_t
    {
        Normal = 0,
        Superscript = 1,
        Subscript = 2,
        Ordinal = 3,
        Inferior = 4,
        Ruby = 5,
    };
    enum class GridUnitType : int32_t
    {
        Auto = 0,
        Pixel = 1,
        Star = 2,
    };
    enum class HorizontalAlignment : int32_t
    {
        Left = 0,
        Center = 1,
        Right = 2,
        Stretch = 3,
    };
    enum class LineStackingStrategy : int32_t
    {
        MaxHeight = 0,
        BlockLineHeight = 1,
        BaselineToBaseline = 2,
    };
    enum class OpticalMarginAlignment : int32_t
    {
        None = 0,
        TrimSideBearings = 1,
    };
    enum class TextAlignment : int32_t
    {
        Center = 0,
        Left = 1,
        Start = 1,
        Right = 2,
        End = 2,
        Justify = 3,
        DetectFromContent = 4,
    };
    enum class TextLineBounds : int32_t
    {
        Full = 0,
        TrimToCapHeight = 1,
        TrimToBaseline = 2,
        Tight = 3,
    };
    enum class TextReadingOrder : int32_t
    {
        Default = 0,
        UseFlowDirection = 0,
        DetectFromContent = 1,
    };
    enum class TextTrimming : int32_t
    {
        None = 0,
        CharacterEllipsis = 1,
        WordEllipsis = 2,
        Clip = 3,
    };
    enum class TextWrapping : int32_t
    {
        NoWrap = 1,
        Wrap = 2,
        WrapWholeWords = 3,
    };
    enum class Vector3TransitionComponents : uint32_t
    {
        X = 0x1,
        Y = 0x2,
        Z = 0x4,
    };
    enum class VerticalAlignment : int32_t
    {
        Top = 0,
        Center = 1,
        Bottom = 2,
        Stretch = 3,
    };
    enum class Visibility : int32_t
    {
        Visible = 0,
        Collapsed = 1,
    };
    struct IAdaptiveTrigger;
    struct IAdaptiveTriggerFactory;
    struct IAdaptiveTriggerStatics;
    struct IApplication;
    struct IApplication2;
    struct IApplication3;
    struct IApplicationFactory;
    struct IApplicationInitializationCallbackParams;
    struct IApplicationOverrides;
    struct IApplicationOverrides2;
    struct IApplicationStatics;
    struct IBindingFailedEventArgs;
    struct IBringIntoViewOptions;
    struct IBringIntoViewOptions2;
    struct IBringIntoViewRequestedEventArgs;
    struct IBrushTransition;
    struct IBrushTransitionFactory;
    struct IColorPaletteResources;
    struct IColorPaletteResourcesFactory;
    struct ICornerRadiusHelper;
    struct ICornerRadiusHelperStatics;
    struct IDataContextChangedEventArgs;
    struct IDataTemplate;
    struct IDataTemplateExtension;
    struct IDataTemplateFactory;
    struct IDataTemplateKey;
    struct IDataTemplateKeyFactory;
    struct IDataTemplateStatics2;
    struct IDebugSettings;
    struct IDebugSettings2;
    struct IDebugSettings3;
    struct IDebugSettings4;
    struct IDependencyObject;
    struct IDependencyObject2;
    struct IDependencyObjectCollectionFactory;
    struct IDependencyObjectFactory;
    struct IDependencyProperty;
    struct IDependencyPropertyChangedEventArgs;
    struct IDependencyPropertyStatics;
    struct IDispatcherTimer;
    struct IDispatcherTimerFactory;
    struct IDragEventArgs;
    struct IDragEventArgs2;
    struct IDragEventArgs3;
    struct IDragOperationDeferral;
    struct IDragStartingEventArgs;
    struct IDragStartingEventArgs2;
    struct IDragUI;
    struct IDragUIOverride;
    struct IDropCompletedEventArgs;
    struct IDurationHelper;
    struct IDurationHelperStatics;
    struct IEffectiveViewportChangedEventArgs;
    struct IElementFactory;
    struct IElementFactoryGetArgs;
    struct IElementFactoryGetArgsFactory;
    struct IElementFactoryRecycleArgs;
    struct IElementFactoryRecycleArgsFactory;
    struct IElementSoundPlayer;
    struct IElementSoundPlayerStatics;
    struct IElementSoundPlayerStatics2;
    struct IEventTrigger;
    struct IExceptionRoutedEventArgs;
    struct IExceptionRoutedEventArgsFactory;
    struct IFrameworkElement;
    struct IFrameworkElement2;
    struct IFrameworkElement3;
    struct IFrameworkElement4;
    struct IFrameworkElement6;
    struct IFrameworkElement7;
    struct IFrameworkElementFactory;
    struct IFrameworkElementOverrides;
    struct IFrameworkElementOverrides2;
    struct IFrameworkElementProtected7;
    struct IFrameworkElementStatics;
    struct IFrameworkElementStatics2;
    struct IFrameworkElementStatics4;
    struct IFrameworkElementStatics5;
    struct IFrameworkElementStatics6;
    struct IFrameworkTemplate;
    struct IFrameworkTemplateFactory;
    struct IFrameworkView;
    struct IFrameworkViewSource;
    struct IGridLengthHelper;
    struct IGridLengthHelperStatics;
    struct IMediaFailedRoutedEventArgs;
    struct IPointHelper;
    struct IPointHelperStatics;
    struct IPropertyMetadata;
    struct IPropertyMetadataFactory;
    struct IPropertyMetadataStatics;
    struct IPropertyPath;
    struct IPropertyPathFactory;
    struct IRectHelper;
    struct IRectHelperStatics;
    struct IResourceDictionary;
    struct IResourceDictionaryFactory;
    struct IRoutedEvent;
    struct IRoutedEventArgs;
    struct IRoutedEventArgsFactory;
    struct IScalarTransition;
    struct IScalarTransitionFactory;
    struct ISetter;
    struct ISetter2;
    struct ISetterBase;
    struct ISetterBaseCollection;
    struct ISetterBaseFactory;
    struct ISetterFactory;
    struct ISizeChangedEventArgs;
    struct ISizeHelper;
    struct ISizeHelperStatics;
    struct IStateTrigger;
    struct IStateTriggerBase;
    struct IStateTriggerBaseFactory;
    struct IStateTriggerBaseProtected;
    struct IStateTriggerStatics;
    struct IStyle;
    struct IStyleFactory;
    struct ITargetPropertyPath;
    struct ITargetPropertyPathFactory;
    struct IThicknessHelper;
    struct IThicknessHelperStatics;
    struct ITriggerAction;
    struct ITriggerActionFactory;
    struct ITriggerBase;
    struct ITriggerBaseFactory;
    struct IUIElement;
    struct IUIElement10;
    struct IUIElement2;
    struct IUIElement3;
    struct IUIElement4;
    struct IUIElement5;
    struct IUIElement7;
    struct IUIElement8;
    struct IUIElement9;
    struct IUIElementFactory;
    struct IUIElementOverrides;
    struct IUIElementOverrides7;
    struct IUIElementOverrides8;
    struct IUIElementOverrides9;
    struct IUIElementStatics;
    struct IUIElementStatics10;
    struct IUIElementStatics2;
    struct IUIElementStatics3;
    struct IUIElementStatics4;
    struct IUIElementStatics5;
    struct IUIElementStatics6;
    struct IUIElementStatics7;
    struct IUIElementStatics8;
    struct IUIElementStatics9;
    struct IUIElementWeakCollection;
    struct IUIElementWeakCollectionFactory;
    struct IUnhandledExceptionEventArgs;
    struct IVector3Transition;
    struct IVector3TransitionFactory;
    struct IVisualState;
    struct IVisualState2;
    struct IVisualStateChangedEventArgs;
    struct IVisualStateGroup;
    struct IVisualStateManager;
    struct IVisualStateManagerFactory;
    struct IVisualStateManagerOverrides;
    struct IVisualStateManagerProtected;
    struct IVisualStateManagerStatics;
    struct IVisualTransition;
    struct IVisualTransitionFactory;
    struct IWindow;
    struct IWindow2;
    struct IWindow3;
    struct IWindow4;
    struct IWindowCreatedEventArgs;
    struct IWindowStatics;
    struct IXamlRoot;
    struct IXamlRootChangedEventArgs;
    struct AdaptiveTrigger;
    struct Application;
    struct ApplicationInitializationCallbackParams;
    struct BindingFailedEventArgs;
    struct BringIntoViewOptions;
    struct BringIntoViewRequestedEventArgs;
    struct BrushTransition;
    struct ColorPaletteResources;
    struct CornerRadiusHelper;
    struct DataContextChangedEventArgs;
    struct DataTemplate;
    struct DataTemplateKey;
    struct DebugSettings;
    struct DependencyObject;
    struct DependencyObjectCollection;
    struct DependencyProperty;
    struct DependencyPropertyChangedEventArgs;
    struct DispatcherTimer;
    struct DragEventArgs;
    struct DragOperationDeferral;
    struct DragStartingEventArgs;
    struct DragUI;
    struct DragUIOverride;
    struct DropCompletedEventArgs;
    struct DurationHelper;
    struct EffectiveViewportChangedEventArgs;
    struct ElementFactoryGetArgs;
    struct ElementFactoryRecycleArgs;
    struct ElementSoundPlayer;
    struct EventTrigger;
    struct ExceptionRoutedEventArgs;
    struct FrameworkElement;
    struct FrameworkTemplate;
    struct FrameworkView;
    struct FrameworkViewSource;
    struct GridLengthHelper;
    struct MediaFailedRoutedEventArgs;
    struct PointHelper;
    struct PropertyMetadata;
    struct PropertyPath;
    struct RectHelper;
    struct ResourceDictionary;
    struct RoutedEvent;
    struct RoutedEventArgs;
    struct ScalarTransition;
    struct Setter;
    struct SetterBase;
    struct SetterBaseCollection;
    struct SizeChangedEventArgs;
    struct SizeHelper;
    struct StateTrigger;
    struct StateTriggerBase;
    struct Style;
    struct TargetPropertyPath;
    struct ThicknessHelper;
    struct TriggerAction;
    struct TriggerActionCollection;
    struct TriggerBase;
    struct TriggerCollection;
    struct UIElement;
    struct UIElementWeakCollection;
    struct UnhandledExceptionEventArgs;
    struct Vector3Transition;
    struct VisualState;
    struct VisualStateChangedEventArgs;
    struct VisualStateGroup;
    struct VisualStateManager;
    struct VisualTransition;
    struct Window;
    struct WindowCreatedEventArgs;
    struct XamlRoot;
    struct XamlRootChangedEventArgs;
    struct CornerRadius;
    struct Duration;
    struct GridLength;
    struct Thickness;
    struct ApplicationInitializationCallback;
    struct BindingFailedEventHandler;
    struct CreateDefaultValueCallback;
    struct DependencyPropertyChangedCallback;
    struct DependencyPropertyChangedEventHandler;
    struct DragEventHandler;
    struct EnteredBackgroundEventHandler;
    struct ExceptionRoutedEventHandler;
    struct LeavingBackgroundEventHandler;
    struct PropertyChangedCallback;
    struct RoutedEventHandler;
    struct SizeChangedEventHandler;
    struct SuspendingEventHandler;
    struct UnhandledExceptionEventHandler;
    struct VisualStateChangedEventHandler;
    struct WindowActivatedEventHandler;
    struct WindowClosedEventHandler;
    struct WindowSizeChangedEventHandler;
    struct WindowVisibilityChangedEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::IAdaptiveTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IAdaptiveTriggerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IAdaptiveTriggerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IApplication>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IApplication2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IApplication3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IApplicationFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IApplicationInitializationCallbackParams>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IApplicationOverrides>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IApplicationOverrides2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IApplicationStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IBindingFailedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IBringIntoViewOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IBringIntoViewOptions2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IBringIntoViewRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IBrushTransition>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IBrushTransitionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IColorPaletteResources>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IColorPaletteResourcesFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::ICornerRadiusHelper>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::ICornerRadiusHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDataContextChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDataTemplate>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDataTemplateExtension>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDataTemplateFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDataTemplateKey>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDataTemplateKeyFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDataTemplateStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDebugSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDebugSettings2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDebugSettings3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDebugSettings4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDependencyObject>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDependencyObject2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDependencyObjectCollectionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDependencyObjectFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDependencyProperty>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDependencyPropertyChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDependencyPropertyStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDispatcherTimer>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDispatcherTimerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDragEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDragEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDragEventArgs3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDragOperationDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDragStartingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDragStartingEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDragUI>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDragUIOverride>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDropCompletedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDurationHelper>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IDurationHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IEffectiveViewportChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IElementFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IElementFactoryGetArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IElementFactoryGetArgsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IElementFactoryRecycleArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IElementFactoryRecycleArgsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IElementSoundPlayer>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IElementSoundPlayerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IElementSoundPlayerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IEventTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IExceptionRoutedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IExceptionRoutedEventArgsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkElement>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkElement2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkElement3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkElement4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkElement6>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkElement7>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkElementFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkElementOverrides>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkElementOverrides2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkElementProtected7>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkElementStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkElementStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkElementStatics4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkElementStatics5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkElementStatics6>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkTemplate>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkTemplateFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkView>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IFrameworkViewSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IGridLengthHelper>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IGridLengthHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IMediaFailedRoutedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IPointHelper>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IPointHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IPropertyMetadata>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IPropertyMetadataFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IPropertyMetadataStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IPropertyPath>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IPropertyPathFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IRectHelper>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IRectHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IResourceDictionary>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IResourceDictionaryFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IRoutedEvent>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IRoutedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IRoutedEventArgsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IScalarTransition>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IScalarTransitionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::ISetter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::ISetter2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::ISetterBase>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::ISetterBaseCollection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::ISetterBaseFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::ISetterFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::ISizeChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::ISizeHelper>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::ISizeHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IStateTrigger>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IStateTriggerBase>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IStateTriggerBaseFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IStateTriggerBaseProtected>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IStateTriggerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IStyle>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IStyleFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::ITargetPropertyPath>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::ITargetPropertyPathFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IThicknessHelper>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IThicknessHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::ITriggerAction>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::ITriggerActionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::ITriggerBase>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::ITriggerBaseFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElement>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElement10>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElement2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElement3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElement4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElement5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElement7>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElement8>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElement9>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElementFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElementOverrides>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElementOverrides7>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElementOverrides8>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElementOverrides9>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElementStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElementStatics10>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElementStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElementStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElementStatics4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElementStatics5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElementStatics6>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElementStatics7>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElementStatics8>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElementStatics9>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElementWeakCollection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUIElementWeakCollectionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IUnhandledExceptionEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IVector3Transition>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IVector3TransitionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IVisualState>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IVisualState2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IVisualStateChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IVisualStateGroup>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IVisualStateManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IVisualStateManagerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IVisualStateManagerOverrides>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IVisualStateManagerProtected>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IVisualStateManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IVisualTransition>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IVisualTransitionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IWindow>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IWindow2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IWindow3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IWindow4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IWindowCreatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IWindowStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IXamlRoot>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::IXamlRootChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::AdaptiveTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Application>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::ApplicationInitializationCallbackParams>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::BindingFailedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::BringIntoViewOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::BringIntoViewRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::BrushTransition>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::ColorPaletteResources>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::CornerRadiusHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::DataContextChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::DataTemplate>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::DataTemplateKey>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::DebugSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::DependencyObject>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::DependencyObjectCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::DependencyProperty>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::DependencyPropertyChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::DispatcherTimer>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::DragEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::DragOperationDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::DragStartingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::DragUI>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::DragUIOverride>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::DropCompletedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::DurationHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::EffectiveViewportChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::ElementFactoryGetArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::ElementFactoryRecycleArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::ElementSoundPlayer>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::EventTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::ExceptionRoutedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::FrameworkElement>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::FrameworkTemplate>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::FrameworkView>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::FrameworkViewSource>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::GridLengthHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::MediaFailedRoutedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::PointHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::PropertyMetadata>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::PropertyPath>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::RectHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::ResourceDictionary>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::RoutedEvent>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::RoutedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::ScalarTransition>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Setter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::SetterBase>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::SetterBaseCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::SizeChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::SizeHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::StateTrigger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::StateTriggerBase>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Style>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::TargetPropertyPath>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::ThicknessHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::TriggerAction>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::TriggerActionCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::TriggerBase>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::TriggerCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::UIElement>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::UIElementWeakCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::UnhandledExceptionEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Vector3Transition>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::VisualState>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::VisualStateChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::VisualStateGroup>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::VisualStateManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::VisualTransition>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Window>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::WindowCreatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::XamlRoot>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::XamlRootChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::ApplicationHighContrastAdjustment>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::ApplicationRequiresPointerMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::ApplicationTheme>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::AutomationTextAttributesEnum>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::DurationType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::ElementHighContrastAdjustment>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::ElementSoundKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::ElementSoundMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::ElementSoundPlayerState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::ElementSpatialAudioMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::ElementTheme>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::FlowDirection>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::FocusState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::FocusVisualKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::FontCapitals>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::FontEastAsianLanguage>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::FontEastAsianWidths>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::FontFraction>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::FontNumeralAlignment>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::FontNumeralStyle>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::FontVariants>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::GridUnitType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::HorizontalAlignment>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::LineStackingStrategy>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::OpticalMarginAlignment>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::TextAlignment>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::TextLineBounds>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::TextReadingOrder>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::TextTrimming>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::TextWrapping>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Vector3TransitionComponents>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::VerticalAlignment>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Visibility>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::CornerRadius>
    {
        using type = struct_category<double, double, double, double>;
    };
    template <> struct category<Windows::UI::Xaml::Duration>
    {
        using type = struct_category<Windows::Foundation::TimeSpan, Windows::UI::Xaml::DurationType>;
    };
    template <> struct category<Windows::UI::Xaml::GridLength>
    {
        using type = struct_category<double, Windows::UI::Xaml::GridUnitType>;
    };
    template <> struct category<Windows::UI::Xaml::Thickness>
    {
        using type = struct_category<double, double, double, double>;
    };
    template <> struct category<Windows::UI::Xaml::ApplicationInitializationCallback>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::BindingFailedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::CreateDefaultValueCallback>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::DependencyPropertyChangedCallback>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::DependencyPropertyChangedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::DragEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::EnteredBackgroundEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::ExceptionRoutedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::LeavingBackgroundEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::PropertyChangedCallback>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::RoutedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::SizeChangedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::SuspendingEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::UnhandledExceptionEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::VisualStateChangedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::WindowActivatedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::WindowClosedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::WindowSizeChangedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::WindowVisibilityChangedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct name<Windows::UI::Xaml::IAdaptiveTrigger>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IAdaptiveTrigger" };
    };
    template <> struct name<Windows::UI::Xaml::IAdaptiveTriggerFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IAdaptiveTriggerFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IAdaptiveTriggerStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IAdaptiveTriggerStatics" };
    };
    template <> struct name<Windows::UI::Xaml::IApplication>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IApplication" };
    };
    template <> struct name<Windows::UI::Xaml::IApplication2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IApplication2" };
    };
    template <> struct name<Windows::UI::Xaml::IApplication3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IApplication3" };
    };
    template <> struct name<Windows::UI::Xaml::IApplicationFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IApplicationFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IApplicationInitializationCallbackParams>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IApplicationInitializationCallbackParams" };
    };
    template <> struct name<Windows::UI::Xaml::IApplicationOverrides>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IApplicationOverrides" };
    };
    template <> struct name<Windows::UI::Xaml::IApplicationOverrides2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IApplicationOverrides2" };
    };
    template <> struct name<Windows::UI::Xaml::IApplicationStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IApplicationStatics" };
    };
    template <> struct name<Windows::UI::Xaml::IBindingFailedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IBindingFailedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::IBringIntoViewOptions>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IBringIntoViewOptions" };
    };
    template <> struct name<Windows::UI::Xaml::IBringIntoViewOptions2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IBringIntoViewOptions2" };
    };
    template <> struct name<Windows::UI::Xaml::IBringIntoViewRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IBringIntoViewRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::IBrushTransition>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IBrushTransition" };
    };
    template <> struct name<Windows::UI::Xaml::IBrushTransitionFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IBrushTransitionFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IColorPaletteResources>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IColorPaletteResources" };
    };
    template <> struct name<Windows::UI::Xaml::IColorPaletteResourcesFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IColorPaletteResourcesFactory" };
    };
    template <> struct name<Windows::UI::Xaml::ICornerRadiusHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ICornerRadiusHelper" };
    };
    template <> struct name<Windows::UI::Xaml::ICornerRadiusHelperStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ICornerRadiusHelperStatics" };
    };
    template <> struct name<Windows::UI::Xaml::IDataContextChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDataContextChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::IDataTemplate>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDataTemplate" };
    };
    template <> struct name<Windows::UI::Xaml::IDataTemplateExtension>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDataTemplateExtension" };
    };
    template <> struct name<Windows::UI::Xaml::IDataTemplateFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDataTemplateFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IDataTemplateKey>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDataTemplateKey" };
    };
    template <> struct name<Windows::UI::Xaml::IDataTemplateKeyFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDataTemplateKeyFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IDataTemplateStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDataTemplateStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::IDebugSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDebugSettings" };
    };
    template <> struct name<Windows::UI::Xaml::IDebugSettings2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDebugSettings2" };
    };
    template <> struct name<Windows::UI::Xaml::IDebugSettings3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDebugSettings3" };
    };
    template <> struct name<Windows::UI::Xaml::IDebugSettings4>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDebugSettings4" };
    };
    template <> struct name<Windows::UI::Xaml::IDependencyObject>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDependencyObject" };
    };
    template <> struct name<Windows::UI::Xaml::IDependencyObject2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDependencyObject2" };
    };
    template <> struct name<Windows::UI::Xaml::IDependencyObjectCollectionFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDependencyObjectCollectionFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IDependencyObjectFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDependencyObjectFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IDependencyProperty>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDependencyProperty" };
    };
    template <> struct name<Windows::UI::Xaml::IDependencyPropertyChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDependencyPropertyChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::IDependencyPropertyStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDependencyPropertyStatics" };
    };
    template <> struct name<Windows::UI::Xaml::IDispatcherTimer>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDispatcherTimer" };
    };
    template <> struct name<Windows::UI::Xaml::IDispatcherTimerFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDispatcherTimerFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IDragEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDragEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::IDragEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDragEventArgs2" };
    };
    template <> struct name<Windows::UI::Xaml::IDragEventArgs3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDragEventArgs3" };
    };
    template <> struct name<Windows::UI::Xaml::IDragOperationDeferral>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDragOperationDeferral" };
    };
    template <> struct name<Windows::UI::Xaml::IDragStartingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDragStartingEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::IDragStartingEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDragStartingEventArgs2" };
    };
    template <> struct name<Windows::UI::Xaml::IDragUI>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDragUI" };
    };
    template <> struct name<Windows::UI::Xaml::IDragUIOverride>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDragUIOverride" };
    };
    template <> struct name<Windows::UI::Xaml::IDropCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDropCompletedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::IDurationHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDurationHelper" };
    };
    template <> struct name<Windows::UI::Xaml::IDurationHelperStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IDurationHelperStatics" };
    };
    template <> struct name<Windows::UI::Xaml::IEffectiveViewportChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IEffectiveViewportChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::IElementFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IElementFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IElementFactoryGetArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IElementFactoryGetArgs" };
    };
    template <> struct name<Windows::UI::Xaml::IElementFactoryGetArgsFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IElementFactoryGetArgsFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IElementFactoryRecycleArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IElementFactoryRecycleArgs" };
    };
    template <> struct name<Windows::UI::Xaml::IElementFactoryRecycleArgsFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IElementFactoryRecycleArgsFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IElementSoundPlayer>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IElementSoundPlayer" };
    };
    template <> struct name<Windows::UI::Xaml::IElementSoundPlayerStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IElementSoundPlayerStatics" };
    };
    template <> struct name<Windows::UI::Xaml::IElementSoundPlayerStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IElementSoundPlayerStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::IEventTrigger>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IEventTrigger" };
    };
    template <> struct name<Windows::UI::Xaml::IExceptionRoutedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IExceptionRoutedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::IExceptionRoutedEventArgsFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IExceptionRoutedEventArgsFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkElement>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElement" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkElement2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElement2" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkElement3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElement3" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkElement4>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElement4" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkElement6>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElement6" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkElement7>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElement7" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkElementFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElementFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkElementOverrides>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElementOverrides" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkElementOverrides2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElementOverrides2" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkElementProtected7>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElementProtected7" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkElementStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElementStatics" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkElementStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElementStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkElementStatics4>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElementStatics4" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkElementStatics5>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElementStatics5" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkElementStatics6>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElementStatics6" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkTemplate>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkTemplate" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkTemplateFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkTemplateFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkView>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkView" };
    };
    template <> struct name<Windows::UI::Xaml::IFrameworkViewSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkViewSource" };
    };
    template <> struct name<Windows::UI::Xaml::IGridLengthHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IGridLengthHelper" };
    };
    template <> struct name<Windows::UI::Xaml::IGridLengthHelperStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IGridLengthHelperStatics" };
    };
    template <> struct name<Windows::UI::Xaml::IMediaFailedRoutedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IMediaFailedRoutedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::IPointHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IPointHelper" };
    };
    template <> struct name<Windows::UI::Xaml::IPointHelperStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IPointHelperStatics" };
    };
    template <> struct name<Windows::UI::Xaml::IPropertyMetadata>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IPropertyMetadata" };
    };
    template <> struct name<Windows::UI::Xaml::IPropertyMetadataFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IPropertyMetadataFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IPropertyMetadataStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IPropertyMetadataStatics" };
    };
    template <> struct name<Windows::UI::Xaml::IPropertyPath>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IPropertyPath" };
    };
    template <> struct name<Windows::UI::Xaml::IPropertyPathFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IPropertyPathFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IRectHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IRectHelper" };
    };
    template <> struct name<Windows::UI::Xaml::IRectHelperStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IRectHelperStatics" };
    };
    template <> struct name<Windows::UI::Xaml::IResourceDictionary>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IResourceDictionary" };
    };
    template <> struct name<Windows::UI::Xaml::IResourceDictionaryFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IResourceDictionaryFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IRoutedEvent>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IRoutedEvent" };
    };
    template <> struct name<Windows::UI::Xaml::IRoutedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IRoutedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::IRoutedEventArgsFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IRoutedEventArgsFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IScalarTransition>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IScalarTransition" };
    };
    template <> struct name<Windows::UI::Xaml::IScalarTransitionFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IScalarTransitionFactory" };
    };
    template <> struct name<Windows::UI::Xaml::ISetter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ISetter" };
    };
    template <> struct name<Windows::UI::Xaml::ISetter2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ISetter2" };
    };
    template <> struct name<Windows::UI::Xaml::ISetterBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ISetterBase" };
    };
    template <> struct name<Windows::UI::Xaml::ISetterBaseCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ISetterBaseCollection" };
    };
    template <> struct name<Windows::UI::Xaml::ISetterBaseFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ISetterBaseFactory" };
    };
    template <> struct name<Windows::UI::Xaml::ISetterFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ISetterFactory" };
    };
    template <> struct name<Windows::UI::Xaml::ISizeChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ISizeChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::ISizeHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ISizeHelper" };
    };
    template <> struct name<Windows::UI::Xaml::ISizeHelperStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ISizeHelperStatics" };
    };
    template <> struct name<Windows::UI::Xaml::IStateTrigger>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IStateTrigger" };
    };
    template <> struct name<Windows::UI::Xaml::IStateTriggerBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IStateTriggerBase" };
    };
    template <> struct name<Windows::UI::Xaml::IStateTriggerBaseFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IStateTriggerBaseFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IStateTriggerBaseProtected>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IStateTriggerBaseProtected" };
    };
    template <> struct name<Windows::UI::Xaml::IStateTriggerStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IStateTriggerStatics" };
    };
    template <> struct name<Windows::UI::Xaml::IStyle>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IStyle" };
    };
    template <> struct name<Windows::UI::Xaml::IStyleFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IStyleFactory" };
    };
    template <> struct name<Windows::UI::Xaml::ITargetPropertyPath>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ITargetPropertyPath" };
    };
    template <> struct name<Windows::UI::Xaml::ITargetPropertyPathFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ITargetPropertyPathFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IThicknessHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IThicknessHelper" };
    };
    template <> struct name<Windows::UI::Xaml::IThicknessHelperStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IThicknessHelperStatics" };
    };
    template <> struct name<Windows::UI::Xaml::ITriggerAction>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ITriggerAction" };
    };
    template <> struct name<Windows::UI::Xaml::ITriggerActionFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ITriggerActionFactory" };
    };
    template <> struct name<Windows::UI::Xaml::ITriggerBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ITriggerBase" };
    };
    template <> struct name<Windows::UI::Xaml::ITriggerBaseFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ITriggerBaseFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElement>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElement" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElement10>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElement10" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElement2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElement2" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElement3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElement3" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElement4>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElement4" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElement5>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElement5" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElement7>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElement7" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElement8>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElement8" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElement9>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElement9" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElementFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElementOverrides>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementOverrides" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElementOverrides7>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementOverrides7" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElementOverrides8>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementOverrides8" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElementOverrides9>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementOverrides9" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElementStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementStatics" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElementStatics10>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementStatics10" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElementStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElementStatics3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementStatics3" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElementStatics4>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementStatics4" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElementStatics5>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementStatics5" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElementStatics6>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementStatics6" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElementStatics7>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementStatics7" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElementStatics8>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementStatics8" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElementStatics9>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementStatics9" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElementWeakCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementWeakCollection" };
    };
    template <> struct name<Windows::UI::Xaml::IUIElementWeakCollectionFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementWeakCollectionFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IUnhandledExceptionEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IUnhandledExceptionEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::IVector3Transition>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IVector3Transition" };
    };
    template <> struct name<Windows::UI::Xaml::IVector3TransitionFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IVector3TransitionFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IVisualState>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IVisualState" };
    };
    template <> struct name<Windows::UI::Xaml::IVisualState2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IVisualState2" };
    };
    template <> struct name<Windows::UI::Xaml::IVisualStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IVisualStateChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::IVisualStateGroup>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IVisualStateGroup" };
    };
    template <> struct name<Windows::UI::Xaml::IVisualStateManager>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IVisualStateManager" };
    };
    template <> struct name<Windows::UI::Xaml::IVisualStateManagerFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IVisualStateManagerFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IVisualStateManagerOverrides>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IVisualStateManagerOverrides" };
    };
    template <> struct name<Windows::UI::Xaml::IVisualStateManagerProtected>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IVisualStateManagerProtected" };
    };
    template <> struct name<Windows::UI::Xaml::IVisualStateManagerStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IVisualStateManagerStatics" };
    };
    template <> struct name<Windows::UI::Xaml::IVisualTransition>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IVisualTransition" };
    };
    template <> struct name<Windows::UI::Xaml::IVisualTransitionFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IVisualTransitionFactory" };
    };
    template <> struct name<Windows::UI::Xaml::IWindow>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IWindow" };
    };
    template <> struct name<Windows::UI::Xaml::IWindow2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IWindow2" };
    };
    template <> struct name<Windows::UI::Xaml::IWindow3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IWindow3" };
    };
    template <> struct name<Windows::UI::Xaml::IWindow4>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IWindow4" };
    };
    template <> struct name<Windows::UI::Xaml::IWindowCreatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IWindowCreatedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::IWindowStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IWindowStatics" };
    };
    template <> struct name<Windows::UI::Xaml::IXamlRoot>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IXamlRoot" };
    };
    template <> struct name<Windows::UI::Xaml::IXamlRootChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.IXamlRootChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::AdaptiveTrigger>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.AdaptiveTrigger" };
    };
    template <> struct name<Windows::UI::Xaml::Application>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Application" };
    };
    template <> struct name<Windows::UI::Xaml::ApplicationInitializationCallbackParams>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ApplicationInitializationCallbackParams" };
    };
    template <> struct name<Windows::UI::Xaml::BindingFailedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.BindingFailedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::BringIntoViewOptions>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.BringIntoViewOptions" };
    };
    template <> struct name<Windows::UI::Xaml::BringIntoViewRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.BringIntoViewRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::BrushTransition>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.BrushTransition" };
    };
    template <> struct name<Windows::UI::Xaml::ColorPaletteResources>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ColorPaletteResources" };
    };
    template <> struct name<Windows::UI::Xaml::CornerRadiusHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.CornerRadiusHelper" };
    };
    template <> struct name<Windows::UI::Xaml::DataContextChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DataContextChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::DataTemplate>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DataTemplate" };
    };
    template <> struct name<Windows::UI::Xaml::DataTemplateKey>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DataTemplateKey" };
    };
    template <> struct name<Windows::UI::Xaml::DebugSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DebugSettings" };
    };
    template <> struct name<Windows::UI::Xaml::DependencyObject>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DependencyObject" };
    };
    template <> struct name<Windows::UI::Xaml::DependencyObjectCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DependencyObjectCollection" };
    };
    template <> struct name<Windows::UI::Xaml::DependencyProperty>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DependencyProperty" };
    };
    template <> struct name<Windows::UI::Xaml::DependencyPropertyChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DependencyPropertyChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::DispatcherTimer>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DispatcherTimer" };
    };
    template <> struct name<Windows::UI::Xaml::DragEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DragEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::DragOperationDeferral>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DragOperationDeferral" };
    };
    template <> struct name<Windows::UI::Xaml::DragStartingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DragStartingEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::DragUI>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DragUI" };
    };
    template <> struct name<Windows::UI::Xaml::DragUIOverride>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DragUIOverride" };
    };
    template <> struct name<Windows::UI::Xaml::DropCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DropCompletedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::DurationHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DurationHelper" };
    };
    template <> struct name<Windows::UI::Xaml::EffectiveViewportChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.EffectiveViewportChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::ElementFactoryGetArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ElementFactoryGetArgs" };
    };
    template <> struct name<Windows::UI::Xaml::ElementFactoryRecycleArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ElementFactoryRecycleArgs" };
    };
    template <> struct name<Windows::UI::Xaml::ElementSoundPlayer>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ElementSoundPlayer" };
    };
    template <> struct name<Windows::UI::Xaml::EventTrigger>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.EventTrigger" };
    };
    template <> struct name<Windows::UI::Xaml::ExceptionRoutedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ExceptionRoutedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::FrameworkElement>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.FrameworkElement" };
    };
    template <> struct name<Windows::UI::Xaml::FrameworkTemplate>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.FrameworkTemplate" };
    };
    template <> struct name<Windows::UI::Xaml::FrameworkView>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.FrameworkView" };
    };
    template <> struct name<Windows::UI::Xaml::FrameworkViewSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.FrameworkViewSource" };
    };
    template <> struct name<Windows::UI::Xaml::GridLengthHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.GridLengthHelper" };
    };
    template <> struct name<Windows::UI::Xaml::MediaFailedRoutedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.MediaFailedRoutedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::PointHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.PointHelper" };
    };
    template <> struct name<Windows::UI::Xaml::PropertyMetadata>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.PropertyMetadata" };
    };
    template <> struct name<Windows::UI::Xaml::PropertyPath>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.PropertyPath" };
    };
    template <> struct name<Windows::UI::Xaml::RectHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.RectHelper" };
    };
    template <> struct name<Windows::UI::Xaml::ResourceDictionary>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ResourceDictionary" };
    };
    template <> struct name<Windows::UI::Xaml::RoutedEvent>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.RoutedEvent" };
    };
    template <> struct name<Windows::UI::Xaml::RoutedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.RoutedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::ScalarTransition>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ScalarTransition" };
    };
    template <> struct name<Windows::UI::Xaml::Setter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Setter" };
    };
    template <> struct name<Windows::UI::Xaml::SetterBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.SetterBase" };
    };
    template <> struct name<Windows::UI::Xaml::SetterBaseCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.SetterBaseCollection" };
    };
    template <> struct name<Windows::UI::Xaml::SizeChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.SizeChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::SizeHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.SizeHelper" };
    };
    template <> struct name<Windows::UI::Xaml::StateTrigger>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.StateTrigger" };
    };
    template <> struct name<Windows::UI::Xaml::StateTriggerBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.StateTriggerBase" };
    };
    template <> struct name<Windows::UI::Xaml::Style>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Style" };
    };
    template <> struct name<Windows::UI::Xaml::TargetPropertyPath>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.TargetPropertyPath" };
    };
    template <> struct name<Windows::UI::Xaml::ThicknessHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ThicknessHelper" };
    };
    template <> struct name<Windows::UI::Xaml::TriggerAction>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.TriggerAction" };
    };
    template <> struct name<Windows::UI::Xaml::TriggerActionCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.TriggerActionCollection" };
    };
    template <> struct name<Windows::UI::Xaml::TriggerBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.TriggerBase" };
    };
    template <> struct name<Windows::UI::Xaml::TriggerCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.TriggerCollection" };
    };
    template <> struct name<Windows::UI::Xaml::UIElement>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.UIElement" };
    };
    template <> struct name<Windows::UI::Xaml::UIElementWeakCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.UIElementWeakCollection" };
    };
    template <> struct name<Windows::UI::Xaml::UnhandledExceptionEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.UnhandledExceptionEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Vector3Transition>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Vector3Transition" };
    };
    template <> struct name<Windows::UI::Xaml::VisualState>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.VisualState" };
    };
    template <> struct name<Windows::UI::Xaml::VisualStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.VisualStateChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::VisualStateGroup>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.VisualStateGroup" };
    };
    template <> struct name<Windows::UI::Xaml::VisualStateManager>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.VisualStateManager" };
    };
    template <> struct name<Windows::UI::Xaml::VisualTransition>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.VisualTransition" };
    };
    template <> struct name<Windows::UI::Xaml::Window>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Window" };
    };
    template <> struct name<Windows::UI::Xaml::WindowCreatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.WindowCreatedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::XamlRoot>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.XamlRoot" };
    };
    template <> struct name<Windows::UI::Xaml::XamlRootChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.XamlRootChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::ApplicationHighContrastAdjustment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ApplicationHighContrastAdjustment" };
    };
    template <> struct name<Windows::UI::Xaml::ApplicationRequiresPointerMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ApplicationRequiresPointerMode" };
    };
    template <> struct name<Windows::UI::Xaml::ApplicationTheme>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ApplicationTheme" };
    };
    template <> struct name<Windows::UI::Xaml::AutomationTextAttributesEnum>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.AutomationTextAttributesEnum" };
    };
    template <> struct name<Windows::UI::Xaml::DurationType>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DurationType" };
    };
    template <> struct name<Windows::UI::Xaml::ElementHighContrastAdjustment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ElementHighContrastAdjustment" };
    };
    template <> struct name<Windows::UI::Xaml::ElementSoundKind>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ElementSoundKind" };
    };
    template <> struct name<Windows::UI::Xaml::ElementSoundMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ElementSoundMode" };
    };
    template <> struct name<Windows::UI::Xaml::ElementSoundPlayerState>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ElementSoundPlayerState" };
    };
    template <> struct name<Windows::UI::Xaml::ElementSpatialAudioMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ElementSpatialAudioMode" };
    };
    template <> struct name<Windows::UI::Xaml::ElementTheme>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ElementTheme" };
    };
    template <> struct name<Windows::UI::Xaml::FlowDirection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.FlowDirection" };
    };
    template <> struct name<Windows::UI::Xaml::FocusState>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.FocusState" };
    };
    template <> struct name<Windows::UI::Xaml::FocusVisualKind>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.FocusVisualKind" };
    };
    template <> struct name<Windows::UI::Xaml::FontCapitals>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.FontCapitals" };
    };
    template <> struct name<Windows::UI::Xaml::FontEastAsianLanguage>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.FontEastAsianLanguage" };
    };
    template <> struct name<Windows::UI::Xaml::FontEastAsianWidths>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.FontEastAsianWidths" };
    };
    template <> struct name<Windows::UI::Xaml::FontFraction>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.FontFraction" };
    };
    template <> struct name<Windows::UI::Xaml::FontNumeralAlignment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.FontNumeralAlignment" };
    };
    template <> struct name<Windows::UI::Xaml::FontNumeralStyle>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.FontNumeralStyle" };
    };
    template <> struct name<Windows::UI::Xaml::FontVariants>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.FontVariants" };
    };
    template <> struct name<Windows::UI::Xaml::GridUnitType>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.GridUnitType" };
    };
    template <> struct name<Windows::UI::Xaml::HorizontalAlignment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.HorizontalAlignment" };
    };
    template <> struct name<Windows::UI::Xaml::LineStackingStrategy>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.LineStackingStrategy" };
    };
    template <> struct name<Windows::UI::Xaml::OpticalMarginAlignment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.OpticalMarginAlignment" };
    };
    template <> struct name<Windows::UI::Xaml::TextAlignment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.TextAlignment" };
    };
    template <> struct name<Windows::UI::Xaml::TextLineBounds>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.TextLineBounds" };
    };
    template <> struct name<Windows::UI::Xaml::TextReadingOrder>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.TextReadingOrder" };
    };
    template <> struct name<Windows::UI::Xaml::TextTrimming>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.TextTrimming" };
    };
    template <> struct name<Windows::UI::Xaml::TextWrapping>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.TextWrapping" };
    };
    template <> struct name<Windows::UI::Xaml::Vector3TransitionComponents>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Vector3TransitionComponents" };
    };
    template <> struct name<Windows::UI::Xaml::VerticalAlignment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.VerticalAlignment" };
    };
    template <> struct name<Windows::UI::Xaml::Visibility>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Visibility" };
    };
    template <> struct name<Windows::UI::Xaml::CornerRadius>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.CornerRadius" };
    };
    template <> struct name<Windows::UI::Xaml::Duration>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Duration" };
    };
    template <> struct name<Windows::UI::Xaml::GridLength>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.GridLength" };
    };
    template <> struct name<Windows::UI::Xaml::Thickness>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Thickness" };
    };
    template <> struct name<Windows::UI::Xaml::ApplicationInitializationCallback>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ApplicationInitializationCallback" };
    };
    template <> struct name<Windows::UI::Xaml::BindingFailedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.BindingFailedEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::CreateDefaultValueCallback>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.CreateDefaultValueCallback" };
    };
    template <> struct name<Windows::UI::Xaml::DependencyPropertyChangedCallback>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DependencyPropertyChangedCallback" };
    };
    template <> struct name<Windows::UI::Xaml::DependencyPropertyChangedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DependencyPropertyChangedEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::DragEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.DragEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::EnteredBackgroundEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.EnteredBackgroundEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::ExceptionRoutedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.ExceptionRoutedEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::LeavingBackgroundEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.LeavingBackgroundEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::PropertyChangedCallback>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.PropertyChangedCallback" };
    };
    template <> struct name<Windows::UI::Xaml::RoutedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.RoutedEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::SizeChangedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.SizeChangedEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::SuspendingEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.SuspendingEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::UnhandledExceptionEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.UnhandledExceptionEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::VisualStateChangedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.VisualStateChangedEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::WindowActivatedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.WindowActivatedEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::WindowClosedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.WindowClosedEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::WindowSizeChangedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.WindowSizeChangedEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::WindowVisibilityChangedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.WindowVisibilityChangedEventHandler" };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IAdaptiveTrigger>
    {
        static constexpr guid value{ 0xA5F04119,0x0CD9,0x49F1,{ 0xA2,0x3F,0x44,0xE5,0x47,0xAB,0x9F,0x1A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IAdaptiveTriggerFactory>
    {
        static constexpr guid value{ 0xC966D482,0x5AEB,0x4841,{ 0x92,0x47,0xC1,0xA0,0xBD,0xD6,0xF5,0x9F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IAdaptiveTriggerStatics>
    {
        static constexpr guid value{ 0xB92E29EA,0x1615,0x4350,{ 0x9C,0x3B,0x92,0xB2,0x98,0x6B,0xF4,0x44 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IApplication>
    {
        static constexpr guid value{ 0x74B861A1,0x7487,0x46A9,{ 0x9A,0x6E,0xC7,0x8B,0x51,0x27,0x26,0xC5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IApplication2>
    {
        static constexpr guid value{ 0x019104BE,0x522A,0x5904,{ 0xF5,0x2F,0xDE,0x72,0x01,0x04,0x29,0xE0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IApplication3>
    {
        static constexpr guid value{ 0xB775AD7C,0x18B8,0x45CA,{ 0xA1,0xB0,0xDC,0x48,0x3E,0x4B,0x10,0x28 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IApplicationFactory>
    {
        static constexpr guid value{ 0x93BBE361,0xBE5A,0x4EE3,{ 0xB4,0xA3,0x95,0x11,0x8D,0xC9,0x7A,0x89 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IApplicationInitializationCallbackParams>
    {
        static constexpr guid value{ 0x751B792E,0x5772,0x4488,{ 0x8B,0x87,0xF5,0x47,0xFA,0xA6,0x44,0x74 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IApplicationOverrides>
    {
        static constexpr guid value{ 0x25F99FF7,0x9347,0x459A,{ 0x9F,0xAC,0xB2,0xD0,0xE1,0x1C,0x1A,0x0F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IApplicationOverrides2>
    {
        static constexpr guid value{ 0xDB5CD2B9,0xD3B4,0x558C,{ 0xC6,0x4E,0x04,0x34,0xFD,0x1B,0xD8,0x89 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IApplicationStatics>
    {
        static constexpr guid value{ 0x06499997,0xF7B4,0x45FE,{ 0xB7,0x63,0x75,0x77,0xD1,0xD3,0xCB,0x4A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IBindingFailedEventArgs>
    {
        static constexpr guid value{ 0x32C1D013,0x4DBD,0x446D,{ 0xBB,0xB8,0x0D,0xE3,0x50,0x48,0xA4,0x49 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IBringIntoViewOptions>
    {
        static constexpr guid value{ 0x19BDD1B5,0xC7CB,0x46D9,{ 0xA4,0xDD,0xA1,0xBB,0xE8,0x3E,0xF2,0xFB } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IBringIntoViewOptions2>
    {
        static constexpr guid value{ 0xE855E08E,0x64B6,0x1211,{ 0xBD,0xDB,0x1F,0xDD,0xBB,0x6E,0x82,0x31 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IBringIntoViewRequestedEventArgs>
    {
        static constexpr guid value{ 0x0E629EC4,0x2206,0x4C8B,{ 0x94,0xAE,0xBD,0xB6,0x6A,0x4E,0xBF,0xD1 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IBrushTransition>
    {
        static constexpr guid value{ 0x1116972C,0x9DAD,0x5429,{ 0xA7,0xDD,0xB2,0xB7,0xD0,0x61,0xAB,0x8E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IBrushTransitionFactory>
    {
        static constexpr guid value{ 0x3DBE7368,0x13D4,0x510C,{ 0xA2,0x15,0x75,0x39,0xF4,0x78,0x7B,0x52 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IColorPaletteResources>
    {
        static constexpr guid value{ 0x258088C4,0xAEF2,0x5D3F,{ 0x83,0x3B,0xC3,0x6D,0xB6,0x27,0x8E,0xD9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IColorPaletteResourcesFactory>
    {
        static constexpr guid value{ 0xA57F0783,0x1876,0x5CC0,{ 0x8E,0xA5,0xBC,0x77,0xB1,0x7E,0x0F,0x7E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ICornerRadiusHelper>
    {
        static constexpr guid value{ 0xFD7BE182,0x1CDB,0x4288,{ 0xB8,0xC8,0x85,0xEE,0x79,0x29,0x7B,0xFC } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ICornerRadiusHelperStatics>
    {
        static constexpr guid value{ 0xF4A1F659,0xD4D4,0x451F,{ 0xA3,0x87,0xD6,0xBF,0x4B,0x24,0x51,0xD4 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDataContextChangedEventArgs>
    {
        static constexpr guid value{ 0x7DA68E21,0x0B8F,0x4F9F,{ 0xA1,0x43,0xF8,0xE7,0x78,0x01,0x36,0xA2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDataTemplate>
    {
        static constexpr guid value{ 0x9910AEC7,0x8AB5,0x4118,{ 0x9B,0xC6,0x09,0xF4,0x5A,0x35,0x07,0x3D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDataTemplateExtension>
    {
        static constexpr guid value{ 0x595E9547,0xCDFF,0x4B92,{ 0xB7,0x73,0xAB,0x39,0x68,0x78,0xF3,0x53 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDataTemplateFactory>
    {
        static constexpr guid value{ 0x51ED9D7E,0x2B53,0x475B,{ 0x9C,0x88,0x0C,0x18,0x32,0xC8,0x35,0x1A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDataTemplateKey>
    {
        static constexpr guid value{ 0x873B6C28,0xCCEB,0x4B61,{ 0x86,0xFA,0xB2,0xCE,0xC3,0x9C,0xC2,0xFA } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDataTemplateKeyFactory>
    {
        static constexpr guid value{ 0xE96B2959,0xD982,0x4152,{ 0x91,0xCB,0xDE,0x0E,0x4D,0xFD,0x76,0x93 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDataTemplateStatics2>
    {
        static constexpr guid value{ 0x8AF77D73,0xAA01,0x471E,{ 0xBE,0xDD,0x8B,0xAD,0x86,0x21,0x9B,0x77 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDebugSettings>
    {
        static constexpr guid value{ 0x3D451F98,0xC6A7,0x4D17,{ 0x83,0x98,0xD8,0x3A,0x06,0x71,0x83,0xD8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDebugSettings2>
    {
        static constexpr guid value{ 0x48D37585,0xE1A6,0x469B,{ 0x83,0xC8,0x30,0x82,0x50,0x37,0x11,0x9E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDebugSettings3>
    {
        static constexpr guid value{ 0xE6BB5022,0x0625,0x479F,{ 0x8E,0x32,0x4B,0x58,0x3D,0x73,0xB7,0xAC } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDebugSettings4>
    {
        static constexpr guid value{ 0xC9001E45,0xE824,0x5A5F,{ 0x86,0x6C,0xE2,0x0C,0xEC,0x88,0xA8,0xFC } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDependencyObject>
    {
        static constexpr guid value{ 0x5C526665,0xF60E,0x4912,{ 0xAF,0x59,0x5F,0xE0,0x68,0x0F,0x08,0x9D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDependencyObject2>
    {
        static constexpr guid value{ 0x29FED85D,0x3D22,0x43A1,{ 0xAD,0xD0,0x17,0x02,0x7C,0x08,0xB2,0x12 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDependencyObjectCollectionFactory>
    {
        static constexpr guid value{ 0x051E79FF,0xB3A8,0x49EE,{ 0xB5,0xAF,0xAC,0x8F,0x68,0xB6,0x49,0xE4 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDependencyObjectFactory>
    {
        static constexpr guid value{ 0x9A03AF92,0x7D8A,0x4937,{ 0x88,0x4F,0xEC,0xF3,0x4F,0xE0,0x2A,0xCB } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDependencyProperty>
    {
        static constexpr guid value{ 0x85B13970,0x9BC4,0x4E96,{ 0xAC,0xF1,0x30,0xC8,0xFD,0x3D,0x55,0xC8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDependencyPropertyChangedEventArgs>
    {
        static constexpr guid value{ 0x81212C2B,0x24D0,0x4957,{ 0xAB,0xC3,0x22,0x44,0x70,0xA9,0x3A,0x4E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDependencyPropertyStatics>
    {
        static constexpr guid value{ 0x49E5F28F,0x8259,0x4D5C,{ 0xAA,0xE0,0x83,0xD5,0x6D,0xBB,0x68,0xD9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDispatcherTimer>
    {
        static constexpr guid value{ 0xD160CE46,0xCD22,0x4F5F,{ 0x8C,0x97,0x40,0xE6,0x1D,0xA3,0xE2,0xDC } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDispatcherTimerFactory>
    {
        static constexpr guid value{ 0xE9961E6E,0x3626,0x403A,{ 0xAF,0xE0,0x04,0x0D,0x58,0x16,0x56,0x32 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDragEventArgs>
    {
        static constexpr guid value{ 0xB440C7C3,0x02B4,0x4980,{ 0x93,0x42,0x25,0xDA,0xE1,0xC0,0xF1,0x88 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDragEventArgs2>
    {
        static constexpr guid value{ 0x26336658,0x2917,0x411D,{ 0xBF,0xC3,0x2F,0x22,0x47,0x1C,0xBB,0xE7 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDragEventArgs3>
    {
        static constexpr guid value{ 0xD04FC3C6,0x8119,0x427A,{ 0x81,0x52,0x5F,0x95,0x50,0xCC,0x04,0x16 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDragOperationDeferral>
    {
        static constexpr guid value{ 0xBA73ECBA,0x1B73,0x4086,{ 0xB3,0xD3,0xC2,0x23,0xBE,0xEA,0x16,0x33 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDragStartingEventArgs>
    {
        static constexpr guid value{ 0x6800D3FA,0x90B8,0x46F9,{ 0x8E,0x30,0x5A,0xC2,0x5F,0x73,0xF0,0xF9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDragStartingEventArgs2>
    {
        static constexpr guid value{ 0xD855E08E,0x44B6,0x4211,{ 0xBD,0x0B,0x7F,0xDD,0xBB,0x6E,0x82,0x31 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDragUI>
    {
        static constexpr guid value{ 0x2D9BD838,0x7C60,0x4842,{ 0x91,0x70,0x34,0x6F,0xE1,0x0A,0x22,0x6A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDragUIOverride>
    {
        static constexpr guid value{ 0xBD6C9DFA,0xC961,0x4861,{ 0xB7,0xA5,0xBF,0x4F,0xE4,0xA8,0xA6,0xEF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDropCompletedEventArgs>
    {
        static constexpr guid value{ 0x6C4FC188,0x95BC,0x4261,{ 0x9E,0xC5,0x21,0xCA,0xB6,0x77,0xB7,0x34 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDurationHelper>
    {
        static constexpr guid value{ 0x25C1659F,0x4497,0x4135,{ 0x94,0x0F,0xEE,0x96,0xF4,0xD6,0xE9,0x34 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IDurationHelperStatics>
    {
        static constexpr guid value{ 0xBC88093E,0x3547,0x4EC0,{ 0xB5,0x19,0xFF,0xA8,0xF9,0xC4,0x83,0x8C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IEffectiveViewportChangedEventArgs>
    {
        static constexpr guid value{ 0x55EE2E81,0x1C18,0x59ED,{ 0xBD,0x3D,0xC4,0xCA,0x8F,0xA7,0xD1,0x90 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IElementFactory>
    {
        static constexpr guid value{ 0x17D2AD90,0x1370,0x55C8,{ 0x80,0xE1,0x78,0xB4,0x90,0x04,0xA9,0xE1 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IElementFactoryGetArgs>
    {
        static constexpr guid value{ 0xFB508774,0x41A3,0x5829,{ 0x92,0x55,0xCF,0x45,0x2D,0x04,0x1D,0xF4 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IElementFactoryGetArgsFactory>
    {
        static constexpr guid value{ 0xC3B6DAE7,0x883B,0x5FD7,{ 0xBE,0x80,0x20,0x59,0xD8,0x77,0xE7,0x83 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IElementFactoryRecycleArgs>
    {
        static constexpr guid value{ 0x86F16B14,0x37E8,0x5DD8,{ 0xA9,0x0C,0x25,0xD3,0x71,0x03,0x18,0xB0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IElementFactoryRecycleArgsFactory>
    {
        static constexpr guid value{ 0x8D926509,0xEA0D,0x541B,{ 0x82,0x71,0xF9,0xE9,0x11,0x8F,0x5E,0x7C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IElementSoundPlayer>
    {
        static constexpr guid value{ 0x387773A5,0xF036,0x460C,{ 0x9B,0x81,0xF3,0xD6,0xEA,0x43,0xF6,0xF2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IElementSoundPlayerStatics>
    {
        static constexpr guid value{ 0x217A9004,0x981D,0x41C9,{ 0xB1,0x52,0xAD,0xA9,0x11,0xA4,0xB1,0x3A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IElementSoundPlayerStatics2>
    {
        static constexpr guid value{ 0xF2505956,0xED41,0x48D7,{ 0xAA,0xE8,0xF2,0xAB,0xCB,0x44,0x49,0x29 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IEventTrigger>
    {
        static constexpr guid value{ 0xDEF8F855,0x0B49,0x4087,{ 0xB1,0xA9,0xB8,0xB3,0x84,0x88,0xF7,0x86 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IExceptionRoutedEventArgs>
    {
        static constexpr guid value{ 0xDD9FF16A,0x4B62,0x4A6C,{ 0xA4,0x9D,0x06,0x71,0xEF,0x61,0x36,0xBE } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IExceptionRoutedEventArgsFactory>
    {
        static constexpr guid value{ 0xBBA9826D,0x5D7A,0x44E7,{ 0xB8,0x93,0xB2,0xAE,0x0D,0xD2,0x42,0x73 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkElement>
    {
        static constexpr guid value{ 0xA391D09B,0x4A99,0x4B7C,{ 0x9D,0x8D,0x6F,0xA5,0xD0,0x1F,0x6F,0xBF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkElement2>
    {
        static constexpr guid value{ 0xF19104BE,0x422A,0x4904,{ 0xA5,0x2F,0xEE,0x72,0x01,0x04,0x29,0xE5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkElement3>
    {
        static constexpr guid value{ 0xC81C2720,0x5C52,0x4BBE,{ 0xA1,0x99,0x2B,0x1E,0x34,0xF0,0x0F,0x70 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkElement4>
    {
        static constexpr guid value{ 0x6B765BB3,0xFBA3,0x4404,{ 0xBD,0xEE,0x1A,0x45,0xD1,0xCA,0x5F,0x21 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkElement6>
    {
        static constexpr guid value{ 0x792A5D91,0x62A1,0x40BF,{ 0xA0,0xCE,0xF9,0xC1,0x31,0xFC,0xB7,0xA7 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkElement7>
    {
        static constexpr guid value{ 0x2263886C,0xC069,0x570F,{ 0xB9,0xCC,0x9E,0x21,0xDD,0x02,0x8D,0x8E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkElementFactory>
    {
        static constexpr guid value{ 0xDEAEE126,0x03CA,0x4966,{ 0xB5,0x76,0x60,0x4C,0xCE,0x93,0xB5,0xE8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkElementOverrides>
    {
        static constexpr guid value{ 0xDA007E54,0xB3C2,0x4B9A,{ 0xAA,0x8E,0xD3,0xF0,0x71,0x26,0x2B,0x97 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkElementOverrides2>
    {
        static constexpr guid value{ 0xCB5CD2B9,0xE3B4,0x458C,{ 0xB6,0x4E,0x14,0x34,0xFD,0x1B,0xD8,0x8A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkElementProtected7>
    {
        static constexpr guid value{ 0x65AA0480,0x22E3,0x5103,{ 0xAD,0x2A,0xB6,0x26,0xF8,0x8C,0xA5,0xAE } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkElementStatics>
    {
        static constexpr guid value{ 0x48383032,0xFBEB,0x4F8A,{ 0xAE,0xD2,0xEE,0x21,0xFB,0x27,0xA5,0x7B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkElementStatics2>
    {
        static constexpr guid value{ 0x9695DB02,0xC0D8,0x4FA2,{ 0xB1,0x00,0x3F,0xA2,0xDF,0x8B,0x95,0x38 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkElementStatics4>
    {
        static constexpr guid value{ 0x9C41B155,0xC5D8,0x4663,{ 0xBF,0xF2,0xD8,0xD5,0x4F,0xB5,0xDB,0xB3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkElementStatics5>
    {
        static constexpr guid value{ 0x525D3941,0x0B3C,0x4BE6,{ 0x99,0x78,0x19,0xA8,0x02,0x5C,0x09,0xD8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkElementStatics6>
    {
        static constexpr guid value{ 0xFCC1529A,0x69DB,0x4582,{ 0xA7,0xBE,0xCF,0x6A,0x1C,0xFD,0xAC,0xD0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkTemplate>
    {
        static constexpr guid value{ 0xA1E254D8,0xA446,0x4A27,{ 0x9A,0x9D,0xA0,0xF5,0x9E,0x12,0x58,0xA5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkTemplateFactory>
    {
        static constexpr guid value{ 0x1A78A0A5,0x937D,0x46D4,{ 0x83,0x2B,0x94,0xFF,0x14,0xDA,0xB0,0x61 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkView>
    {
        static constexpr guid value{ 0xDDBA664B,0xB603,0x47AA,{ 0x94,0x2D,0x38,0x33,0x17,0x4F,0x0D,0x80 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IFrameworkViewSource>
    {
        static constexpr guid value{ 0xE3B077DA,0x35AD,0x4B09,{ 0xB5,0xB2,0x27,0x42,0x00,0x41,0xBA,0x9F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IGridLengthHelper>
    {
        static constexpr guid value{ 0x7A826CE1,0x07A0,0x4083,{ 0xB6,0xD1,0xB1,0xD9,0x17,0xB9,0x76,0xAC } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IGridLengthHelperStatics>
    {
        static constexpr guid value{ 0x9D457B9B,0x019F,0x4266,{ 0x88,0x72,0x21,0x5F,0x19,0x8F,0x6A,0x9D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IMediaFailedRoutedEventArgs>
    {
        static constexpr guid value{ 0x46D1FA8D,0x5149,0x4153,{ 0xBA,0x3C,0xB0,0x3E,0x64,0xEE,0x53,0x1E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IPointHelper>
    {
        static constexpr guid value{ 0x727BDD92,0x64B0,0x49CF,{ 0xA3,0x21,0xA9,0x79,0x3E,0x73,0xE2,0xE7 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IPointHelperStatics>
    {
        static constexpr guid value{ 0x015ACA75,0x76D8,0x4B7E,{ 0x8A,0x33,0x7D,0x79,0x20,0x46,0x91,0xEE } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IPropertyMetadata>
    {
        static constexpr guid value{ 0x814EF30D,0x8D18,0x448A,{ 0x86,0x44,0xF2,0xCB,0x51,0xE7,0x03,0x80 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IPropertyMetadataFactory>
    {
        static constexpr guid value{ 0xC1B81CC0,0x57CD,0x4F2F,{ 0xB0,0xA9,0xE1,0x80,0x1B,0x28,0xF7,0x6B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IPropertyMetadataStatics>
    {
        static constexpr guid value{ 0x3B01077A,0x6E06,0x45E9,{ 0x8B,0x5C,0xAF,0x24,0x34,0x58,0xC0,0x62 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IPropertyPath>
    {
        static constexpr guid value{ 0x300E5D8A,0x1FF3,0x4D2C,{ 0x95,0xEC,0x27,0xF8,0x1D,0xEB,0xAC,0xB8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IPropertyPathFactory>
    {
        static constexpr guid value{ 0x4E4CDF99,0x9826,0x4E56,{ 0x84,0x7C,0xCA,0x05,0x5F,0x16,0x29,0x05 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IRectHelper>
    {
        static constexpr guid value{ 0xA38781E2,0x4BFB,0x4EE2,{ 0xAF,0xE5,0x89,0xF3,0x1B,0x37,0x47,0x8D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IRectHelperStatics>
    {
        static constexpr guid value{ 0x5EE163E4,0xC17E,0x494F,{ 0xB5,0x80,0x2F,0x05,0x74,0xFC,0x3A,0x15 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IResourceDictionary>
    {
        static constexpr guid value{ 0xC1EA4F24,0xD6DE,0x4191,{ 0x8E,0x3A,0xF4,0x86,0x01,0xF7,0x48,0x9C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IResourceDictionaryFactory>
    {
        static constexpr guid value{ 0xEA3639B5,0x31B7,0x4271,{ 0x92,0xC9,0x7C,0x95,0x84,0xA9,0x1C,0x22 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IRoutedEvent>
    {
        static constexpr guid value{ 0xA6B25818,0x43C1,0x4C70,{ 0x86,0x5C,0x7B,0xDD,0x5A,0x32,0xE3,0x27 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IRoutedEventArgs>
    {
        static constexpr guid value{ 0x5C985AC6,0xD802,0x4B38,{ 0xA2,0x23,0xBF,0x07,0x0C,0x43,0xFE,0xDF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IRoutedEventArgsFactory>
    {
        static constexpr guid value{ 0xB61C4D87,0x70E5,0x412E,{ 0xB5,0x20,0x1A,0x41,0xEE,0x76,0xBB,0xF4 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IScalarTransition>
    {
        static constexpr guid value{ 0x4CB68238,0xE15D,0x524E,{ 0xA7,0x3C,0x9D,0x4D,0xCF,0xBE,0xA2,0x26 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IScalarTransitionFactory>
    {
        static constexpr guid value{ 0xC9B1E9EE,0x90DA,0x5DDD,{ 0xBE,0x64,0x3E,0x47,0x97,0x7E,0xA2,0x80 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ISetter>
    {
        static constexpr guid value{ 0xA73DED29,0xB4AE,0x4A81,{ 0xBE,0x85,0xE6,0x90,0xBA,0x0D,0x3B,0x6E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ISetter2>
    {
        static constexpr guid value{ 0x70169561,0x05B1,0x4FA3,{ 0x9D,0x53,0x8E,0x0C,0x8C,0x74,0x7A,0xFC } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ISetterBase>
    {
        static constexpr guid value{ 0x418BE27C,0x2AC4,0x4F22,{ 0x80,0x97,0xDE,0xA3,0xAE,0xEB,0x2F,0xB3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ISetterBaseCollection>
    {
        static constexpr guid value{ 0x03C40CA8,0x909E,0x4117,{ 0x81,0x1C,0xA4,0x52,0x94,0x96,0xBD,0xF1 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ISetterBaseFactory>
    {
        static constexpr guid value{ 0x81F8AD60,0x1CE8,0x469D,{ 0xA6,0x67,0x16,0xE3,0x7C,0xEF,0x8B,0xA9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ISetterFactory>
    {
        static constexpr guid value{ 0xD3CA3D42,0x09B1,0x49D5,{ 0x88,0x91,0xE7,0xB5,0x64,0x8E,0x02,0xA2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ISizeChangedEventArgs>
    {
        static constexpr guid value{ 0xD5312E60,0x5CC1,0x42A1,{ 0x92,0x0C,0x1A,0xF4,0x6B,0xE2,0xF9,0x86 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ISizeHelper>
    {
        static constexpr guid value{ 0xE7225A94,0x5D03,0x4A03,{ 0xBA,0x94,0x96,0x7F,0xC6,0x8F,0xCE,0xFE } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ISizeHelperStatics>
    {
        static constexpr guid value{ 0x6286C5B2,0xCF78,0x4915,{ 0xAA,0x40,0x76,0x00,0x4A,0x16,0x5F,0x5E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IStateTrigger>
    {
        static constexpr guid value{ 0x67ADEF2E,0xD8D9,0x49F7,{ 0xA1,0xFD,0x2E,0x35,0xEE,0xDD,0x23,0xCD } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IStateTriggerBase>
    {
        static constexpr guid value{ 0x48B20698,0xAF06,0x466C,{ 0x80,0x52,0x93,0x66,0x6D,0xDE,0x0E,0x49 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IStateTriggerBaseFactory>
    {
        static constexpr guid value{ 0x970E2C4B,0xBFAF,0x47B0,{ 0xBE,0x42,0xC1,0xD7,0x11,0xBB,0x2E,0x9F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IStateTriggerBaseProtected>
    {
        static constexpr guid value{ 0x3C41E253,0x8D14,0x4216,{ 0x99,0x4C,0xF9,0x93,0x04,0x29,0xF6,0xE5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IStateTriggerStatics>
    {
        static constexpr guid value{ 0x71E95C90,0xB3FE,0x4DD3,{ 0xA8,0xA8,0x44,0xA2,0xCE,0x25,0xE0,0xB8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IStyle>
    {
        static constexpr guid value{ 0xC4A9F225,0x9DB7,0x4A7D,{ 0xB6,0xD1,0xF7,0x4E,0xDB,0x92,0x93,0xC2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IStyleFactory>
    {
        static constexpr guid value{ 0xA36824E3,0x3D81,0x4CE5,{ 0xAA,0x51,0x8B,0x41,0x0F,0x60,0x2F,0xCD } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ITargetPropertyPath>
    {
        static constexpr guid value{ 0x40740F8E,0x085F,0x4CED,{ 0xBE,0x70,0x6F,0x47,0xAC,0xF1,0x5A,0xD0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ITargetPropertyPathFactory>
    {
        static constexpr guid value{ 0x88EECCC8,0x99E2,0x4A44,{ 0x99,0x07,0xB4,0x4B,0xC8,0x6E,0x2B,0xBE } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IThicknessHelper>
    {
        static constexpr guid value{ 0xA86BAE4B,0x1E8F,0x4EEB,{ 0x90,0x13,0x0B,0x28,0x38,0xA9,0x7B,0x34 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IThicknessHelperStatics>
    {
        static constexpr guid value{ 0xC0991A7C,0x070C,0x4DA6,{ 0x87,0x84,0x01,0xCA,0x80,0x0E,0xB7,0x3A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ITriggerAction>
    {
        static constexpr guid value{ 0xA2C0DF02,0x63D5,0x4B46,{ 0x9B,0x83,0x08,0x68,0xD3,0x07,0x96,0x21 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ITriggerActionFactory>
    {
        static constexpr guid value{ 0x68D2C0B9,0x3289,0x414F,{ 0x8F,0x6E,0xC6,0xB9,0x7A,0xED,0xDA,0x03 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ITriggerBase>
    {
        static constexpr guid value{ 0xE7EA222F,0xDEE6,0x4393,{ 0xA8,0xB2,0x89,0x23,0xD6,0x41,0xF3,0x95 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ITriggerBaseFactory>
    {
        static constexpr guid value{ 0x6A3B9E57,0xFC5D,0x42D0,{ 0x8C,0xB9,0xCA,0x50,0x66,0x7A,0xF7,0x46 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElement>
    {
        static constexpr guid value{ 0x676D0BE9,0xB65C,0x41C6,{ 0xBA,0x40,0x58,0xCF,0x87,0xF2,0x01,0xC1 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElement10>
    {
        static constexpr guid value{ 0xD531C629,0xAD2C,0x5F6B,{ 0xAD,0xCF,0xFB,0x87,0x28,0x7D,0x18,0xD7 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElement2>
    {
        static constexpr guid value{ 0x676D0BF9,0xB66C,0x41D6,{ 0xBA,0x50,0x58,0xCF,0x87,0xF2,0x01,0xD1 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElement3>
    {
        static constexpr guid value{ 0xBC2B28F1,0x26F2,0x4AAB,{ 0xB2,0x56,0x3B,0x53,0x50,0x88,0x1E,0x37 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElement4>
    {
        static constexpr guid value{ 0x69145CD4,0x199A,0x4657,{ 0x9E,0x57,0xE9,0x9E,0x8F,0x13,0x67,0x12 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElement5>
    {
        static constexpr guid value{ 0x8EED9BC2,0xA58C,0x4453,{ 0xAF,0x0F,0xA9,0x2E,0xE0,0x6D,0x03,0x17 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElement7>
    {
        static constexpr guid value{ 0xCAFC4968,0x6369,0x4249,{ 0x80,0xF9,0x3D,0x65,0x63,0x19,0xE8,0x11 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElement8>
    {
        static constexpr guid value{ 0x3AB70E85,0xD508,0x4477,{ 0xB6,0xF8,0x0E,0x43,0x57,0x01,0xC8,0x36 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElement9>
    {
        static constexpr guid value{ 0xB4A04776,0x4E88,0x50CA,{ 0x8F,0x2B,0x08,0x94,0x0D,0x6C,0x5F,0x94 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElementFactory>
    {
        static constexpr guid value{ 0xB9EE93FE,0xA338,0x419F,{ 0xAC,0x32,0x91,0xDC,0xAA,0xDF,0x5D,0x08 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElementOverrides>
    {
        static constexpr guid value{ 0x608D2F1D,0x7858,0x4AEB,{ 0x89,0xE4,0xB5,0x4E,0x2C,0x7E,0xD3,0xD3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElementOverrides7>
    {
        static constexpr guid value{ 0xB97F7F68,0xC29B,0x4C99,{ 0xA1,0xC3,0x95,0x26,0x19,0xD6,0xE7,0x20 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElementOverrides8>
    {
        static constexpr guid value{ 0x4A5A645C,0x548D,0x48CF,{ 0xB9,0x98,0x78,0x44,0xD6,0xE2,0x35,0xA1 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElementOverrides9>
    {
        static constexpr guid value{ 0x9A6E5973,0x6D63,0x54F2,{ 0x90,0xFA,0x62,0x81,0x3B,0x20,0xB7,0xB9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElementStatics>
    {
        static constexpr guid value{ 0x58D3573B,0xF52C,0x45BE,{ 0x98,0x8B,0xA5,0x86,0x95,0x64,0x87,0x3C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElementStatics10>
    {
        static constexpr guid value{ 0x60D25362,0x4B3E,0x53DA,{ 0x8B,0x78,0x38,0xDB,0x94,0xAE,0x8F,0x26 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElementStatics2>
    {
        static constexpr guid value{ 0x58D3574B,0xF53C,0x45BE,{ 0x98,0x9B,0xA5,0x86,0x95,0x64,0x87,0x4C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElementStatics3>
    {
        static constexpr guid value{ 0xD1F87ADE,0xECA1,0x4561,{ 0xA3,0x2B,0x64,0x60,0x1B,0x4E,0x05,0x97 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElementStatics4>
    {
        static constexpr guid value{ 0x1D157D61,0x16AF,0x411F,{ 0xB7,0x74,0x27,0x23,0x75,0xA4,0xAC,0x2C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElementStatics5>
    {
        static constexpr guid value{ 0x59BD7D91,0x8FA3,0x4C65,{ 0xBA,0x1B,0x40,0xDF,0x38,0x55,0x6C,0xBB } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElementStatics6>
    {
        static constexpr guid value{ 0x647E03B7,0x036A,0x4DEA,{ 0x95,0x40,0x1D,0xD7,0xFD,0x12,0x66,0xF1 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElementStatics7>
    {
        static constexpr guid value{ 0xDA9B4493,0xA695,0x4145,{ 0xAE,0x93,0x88,0x80,0x24,0x39,0x6A,0x0F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElementStatics8>
    {
        static constexpr guid value{ 0x17BE3487,0x4875,0x4915,{ 0xB0,0xB1,0xA4,0xC0,0xF8,0x51,0xDF,0x3F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElementStatics9>
    {
        static constexpr guid value{ 0x71467E77,0x8CA3,0x5ED7,{ 0x95,0xDB,0xD5,0x1C,0xDA,0xD7,0x7F,0x81 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElementWeakCollection>
    {
        static constexpr guid value{ 0x10341223,0xE66D,0x519E,{ 0xAC,0xF8,0x55,0x6B,0xD2,0x44,0xEA,0xC3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUIElementWeakCollectionFactory>
    {
        static constexpr guid value{ 0x57242561,0x188A,0x5304,{ 0x87,0x92,0xA4,0x3F,0x35,0xD9,0x0F,0x99 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IUnhandledExceptionEventArgs>
    {
        static constexpr guid value{ 0x7230269C,0x054E,0x4CF3,{ 0x86,0xC5,0xBE,0x90,0xEB,0x68,0x63,0xD5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IVector3Transition>
    {
        static constexpr guid value{ 0xD2E209DC,0xC4A2,0x5101,{ 0x9A,0x68,0xFA,0x01,0x50,0x50,0x55,0x89 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IVector3TransitionFactory>
    {
        static constexpr guid value{ 0xC3706699,0xEE9B,0x50DC,{ 0x88,0x07,0xF5,0x1D,0x5A,0x75,0x94,0x95 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IVisualState>
    {
        static constexpr guid value{ 0x6320AFFC,0xC31A,0x4450,{ 0xAF,0xDE,0xF6,0xEA,0x7B,0xD1,0xF5,0x86 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IVisualState2>
    {
        static constexpr guid value{ 0x0FA0F896,0x64C0,0x45FB,{ 0x8D,0x24,0xFB,0x83,0x29,0x8C,0x0D,0x93 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IVisualStateChangedEventArgs>
    {
        static constexpr guid value{ 0xFE216AB1,0xF31F,0x4791,{ 0x89,0x89,0xC7,0x0E,0x1D,0x9B,0x59,0xFF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IVisualStateGroup>
    {
        static constexpr guid value{ 0xE4F9D9A4,0xE028,0x44DE,{ 0x9B,0x15,0x49,0x29,0xAE,0x0A,0x26,0xC2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IVisualStateManager>
    {
        static constexpr guid value{ 0x6FDA9F9A,0x6FAB,0x4112,{ 0x92,0x58,0x10,0x06,0xA3,0xC3,0x47,0x6E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IVisualStateManagerFactory>
    {
        static constexpr guid value{ 0x85E598FD,0xA575,0x47B6,{ 0x9E,0x30,0x38,0x3C,0xD0,0x85,0x85,0xF2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IVisualStateManagerOverrides>
    {
        static constexpr guid value{ 0x4A66910E,0x7979,0x43C8,{ 0x8F,0xF4,0xEC,0x61,0x22,0x75,0x00,0x06 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IVisualStateManagerProtected>
    {
        static constexpr guid value{ 0x4B3B8640,0xB0B7,0x404C,{ 0x9E,0xF4,0xD9,0x49,0x64,0x0E,0x24,0x5D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IVisualStateManagerStatics>
    {
        static constexpr guid value{ 0x01D0E9E0,0xD713,0x414E,{ 0xA7,0x4E,0xE6,0x3E,0xC7,0xAC,0x8C,0x3D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IVisualTransition>
    {
        static constexpr guid value{ 0x55C5905E,0x2BC7,0x400D,{ 0xAA,0xA4,0x1A,0x29,0x81,0x49,0x1E,0xE0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IVisualTransitionFactory>
    {
        static constexpr guid value{ 0xEA75864F,0xD1E0,0x4DAE,{ 0xB4,0x29,0x89,0xFC,0x32,0x27,0x24,0xF4 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IWindow>
    {
        static constexpr guid value{ 0x3276167D,0xC9F6,0x462D,{ 0x9D,0xE2,0xAE,0x4C,0x1F,0xD8,0xC2,0xE5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IWindow2>
    {
        static constexpr guid value{ 0xD384759F,0x34F6,0x4482,{ 0x84,0x35,0xF5,0x52,0xF9,0xB2,0x4C,0xC8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IWindow3>
    {
        static constexpr guid value{ 0xB70BDC9D,0x1C35,0x462A,{ 0x9B,0x97,0x80,0x8D,0x5A,0xF9,0xF2,0x8E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IWindow4>
    {
        static constexpr guid value{ 0xBFE1B8CE,0x6C40,0x50F9,{ 0x85,0x4C,0x70,0x21,0xD2,0xBC,0x9D,0xE6 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IWindowCreatedEventArgs>
    {
        static constexpr guid value{ 0x31B71470,0xFEFF,0x4654,{ 0xAF,0x48,0x9B,0x39,0x8A,0xB5,0x77,0x2B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IWindowStatics>
    {
        static constexpr guid value{ 0x93328409,0x4EA1,0x4AFA,{ 0x83,0xDC,0x0C,0x4E,0x73,0xE8,0x8B,0xB1 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IXamlRoot>
    {
        static constexpr guid value{ 0x34B50756,0x1696,0x5B6D,{ 0x8E,0x9B,0xC7,0x14,0x64,0xCC,0xAD,0x5A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::IXamlRootChangedEventArgs>
    {
        static constexpr guid value{ 0x92D71C21,0xD23C,0x5A17,{ 0xBC,0xB8,0x00,0x15,0x04,0xB6,0xBB,0x19 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ApplicationInitializationCallback>
    {
        static constexpr guid value{ 0xB6351C55,0xC284,0x46E4,{ 0x83,0x10,0xFB,0x09,0x67,0xFA,0xB7,0x6F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::BindingFailedEventHandler>
    {
        static constexpr guid value{ 0x136B1782,0x54BA,0x420D,{ 0xA1,0xAA,0x82,0x82,0x87,0x21,0xCD,0xE6 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::CreateDefaultValueCallback>
    {
        static constexpr guid value{ 0xD6ECB12C,0x15B5,0x4EC8,{ 0xB9,0x5C,0xCD,0xD2,0x08,0xF0,0x81,0x53 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::DependencyPropertyChangedCallback>
    {
        static constexpr guid value{ 0x45883D16,0x27BF,0x4BC1,{ 0xAC,0x26,0x94,0xC1,0x60,0x1F,0x3A,0x49 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::DependencyPropertyChangedEventHandler>
    {
        static constexpr guid value{ 0x09223E5A,0x75BE,0x4499,{ 0x81,0x80,0x1D,0xDC,0x00,0x54,0x21,0xC0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::DragEventHandler>
    {
        static constexpr guid value{ 0x2AB1A205,0x1E73,0x4BCF,{ 0xAA,0xBC,0x57,0xB9,0x7E,0x21,0x96,0x1D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::EnteredBackgroundEventHandler>
    {
        static constexpr guid value{ 0x93A956AE,0x1D7F,0x438B,{ 0xB7,0xB8,0x22,0x7D,0x96,0xB6,0x09,0xC0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::ExceptionRoutedEventHandler>
    {
        static constexpr guid value{ 0x68E0E810,0xF6EA,0x42BC,{ 0x85,0x5B,0x5D,0x9B,0x67,0xE6,0xA2,0x62 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::LeavingBackgroundEventHandler>
    {
        static constexpr guid value{ 0xAAAD5DAD,0x4FC6,0x4AA4,{ 0xB7,0xCF,0x87,0x7E,0x36,0xAD,0xA4,0xF6 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::PropertyChangedCallback>
    {
        static constexpr guid value{ 0x5A9F8A25,0xD142,0x44A4,{ 0x82,0x31,0xFD,0x67,0x67,0x24,0xF2,0x9B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::RoutedEventHandler>
    {
        static constexpr guid value{ 0xA856E674,0xB0B6,0x4BC3,{ 0xBB,0xA8,0x1B,0xA0,0x6E,0x40,0xD4,0xB5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::SizeChangedEventHandler>
    {
        static constexpr guid value{ 0x1115B13C,0x25D2,0x480B,{ 0x89,0xDC,0xEB,0x3D,0xCB,0xD6,0xB7,0xFA } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::SuspendingEventHandler>
    {
        static constexpr guid value{ 0x23429465,0xE36A,0x40E2,{ 0xB1,0x39,0xA4,0x70,0x46,0x02,0xA6,0xE1 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::UnhandledExceptionEventHandler>
    {
        static constexpr guid value{ 0x9274E6BD,0x49A1,0x4958,{ 0xBE,0xEE,0xD0,0xE1,0x95,0x87,0xB6,0xE3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::VisualStateChangedEventHandler>
    {
        static constexpr guid value{ 0xE6D5BBD5,0xE029,0x43A6,{ 0xB3,0x6D,0x84,0xA8,0x10,0x42,0xD7,0x74 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::WindowActivatedEventHandler>
    {
        static constexpr guid value{ 0x18026348,0x8619,0x4C7B,{ 0xB5,0x34,0xCE,0xD4,0x5D,0x9D,0xE2,0x19 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::WindowClosedEventHandler>
    {
        static constexpr guid value{ 0x0DB89161,0x20D7,0x45DF,{ 0x91,0x22,0xBA,0x89,0x57,0x67,0x03,0xBA } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::WindowSizeChangedEventHandler>
    {
        static constexpr guid value{ 0x5C21C742,0x2CED,0x4FD9,{ 0xBA,0x38,0x71,0x18,0xD4,0x0E,0x96,0x6B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::WindowVisibilityChangedEventHandler>
    {
        static constexpr guid value{ 0x10406AD6,0xB090,0x4A4A,{ 0xB2,0xAD,0xD6,0x82,0xDF,0x27,0x13,0x0F } };
    };
    template <> struct default_interface<Windows::UI::Xaml::AdaptiveTrigger>
    {
        using type = Windows::UI::Xaml::IAdaptiveTrigger;
    };
    template <> struct default_interface<Windows::UI::Xaml::Application>
    {
        using type = Windows::UI::Xaml::IApplication;
    };
    template <> struct default_interface<Windows::UI::Xaml::ApplicationInitializationCallbackParams>
    {
        using type = Windows::UI::Xaml::IApplicationInitializationCallbackParams;
    };
    template <> struct default_interface<Windows::UI::Xaml::BindingFailedEventArgs>
    {
        using type = Windows::UI::Xaml::IBindingFailedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::BringIntoViewOptions>
    {
        using type = Windows::UI::Xaml::IBringIntoViewOptions;
    };
    template <> struct default_interface<Windows::UI::Xaml::BringIntoViewRequestedEventArgs>
    {
        using type = Windows::UI::Xaml::IBringIntoViewRequestedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::BrushTransition>
    {
        using type = Windows::UI::Xaml::IBrushTransition;
    };
    template <> struct default_interface<Windows::UI::Xaml::ColorPaletteResources>
    {
        using type = Windows::UI::Xaml::IColorPaletteResources;
    };
    template <> struct default_interface<Windows::UI::Xaml::CornerRadiusHelper>
    {
        using type = Windows::UI::Xaml::ICornerRadiusHelper;
    };
    template <> struct default_interface<Windows::UI::Xaml::DataContextChangedEventArgs>
    {
        using type = Windows::UI::Xaml::IDataContextChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::DataTemplate>
    {
        using type = Windows::UI::Xaml::IDataTemplate;
    };
    template <> struct default_interface<Windows::UI::Xaml::DataTemplateKey>
    {
        using type = Windows::UI::Xaml::IDataTemplateKey;
    };
    template <> struct default_interface<Windows::UI::Xaml::DebugSettings>
    {
        using type = Windows::UI::Xaml::IDebugSettings;
    };
    template <> struct default_interface<Windows::UI::Xaml::DependencyObject>
    {
        using type = Windows::UI::Xaml::IDependencyObject;
    };
    template <> struct default_interface<Windows::UI::Xaml::DependencyObjectCollection>
    {
        using type = Windows::Foundation::Collections::IObservableVector<Windows::UI::Xaml::DependencyObject>;
    };
    template <> struct default_interface<Windows::UI::Xaml::DependencyProperty>
    {
        using type = Windows::UI::Xaml::IDependencyProperty;
    };
    template <> struct default_interface<Windows::UI::Xaml::DependencyPropertyChangedEventArgs>
    {
        using type = Windows::UI::Xaml::IDependencyPropertyChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::DispatcherTimer>
    {
        using type = Windows::UI::Xaml::IDispatcherTimer;
    };
    template <> struct default_interface<Windows::UI::Xaml::DragEventArgs>
    {
        using type = Windows::UI::Xaml::IDragEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::DragOperationDeferral>
    {
        using type = Windows::UI::Xaml::IDragOperationDeferral;
    };
    template <> struct default_interface<Windows::UI::Xaml::DragStartingEventArgs>
    {
        using type = Windows::UI::Xaml::IDragStartingEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::DragUI>
    {
        using type = Windows::UI::Xaml::IDragUI;
    };
    template <> struct default_interface<Windows::UI::Xaml::DragUIOverride>
    {
        using type = Windows::UI::Xaml::IDragUIOverride;
    };
    template <> struct default_interface<Windows::UI::Xaml::DropCompletedEventArgs>
    {
        using type = Windows::UI::Xaml::IDropCompletedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::DurationHelper>
    {
        using type = Windows::UI::Xaml::IDurationHelper;
    };
    template <> struct default_interface<Windows::UI::Xaml::EffectiveViewportChangedEventArgs>
    {
        using type = Windows::UI::Xaml::IEffectiveViewportChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::ElementFactoryGetArgs>
    {
        using type = Windows::UI::Xaml::IElementFactoryGetArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::ElementFactoryRecycleArgs>
    {
        using type = Windows::UI::Xaml::IElementFactoryRecycleArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::ElementSoundPlayer>
    {
        using type = Windows::UI::Xaml::IElementSoundPlayer;
    };
    template <> struct default_interface<Windows::UI::Xaml::EventTrigger>
    {
        using type = Windows::UI::Xaml::IEventTrigger;
    };
    template <> struct default_interface<Windows::UI::Xaml::ExceptionRoutedEventArgs>
    {
        using type = Windows::UI::Xaml::IExceptionRoutedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::FrameworkElement>
    {
        using type = Windows::UI::Xaml::IFrameworkElement;
    };
    template <> struct default_interface<Windows::UI::Xaml::FrameworkTemplate>
    {
        using type = Windows::UI::Xaml::IFrameworkTemplate;
    };
    template <> struct default_interface<Windows::UI::Xaml::FrameworkView>
    {
        using type = Windows::UI::Xaml::IFrameworkView;
    };
    template <> struct default_interface<Windows::UI::Xaml::FrameworkViewSource>
    {
        using type = Windows::UI::Xaml::IFrameworkViewSource;
    };
    template <> struct default_interface<Windows::UI::Xaml::GridLengthHelper>
    {
        using type = Windows::UI::Xaml::IGridLengthHelper;
    };
    template <> struct default_interface<Windows::UI::Xaml::MediaFailedRoutedEventArgs>
    {
        using type = Windows::UI::Xaml::IMediaFailedRoutedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::PointHelper>
    {
        using type = Windows::UI::Xaml::IPointHelper;
    };
    template <> struct default_interface<Windows::UI::Xaml::PropertyMetadata>
    {
        using type = Windows::UI::Xaml::IPropertyMetadata;
    };
    template <> struct default_interface<Windows::UI::Xaml::PropertyPath>
    {
        using type = Windows::UI::Xaml::IPropertyPath;
    };
    template <> struct default_interface<Windows::UI::Xaml::RectHelper>
    {
        using type = Windows::UI::Xaml::IRectHelper;
    };
    template <> struct default_interface<Windows::UI::Xaml::ResourceDictionary>
    {
        using type = Windows::UI::Xaml::IResourceDictionary;
    };
    template <> struct default_interface<Windows::UI::Xaml::RoutedEvent>
    {
        using type = Windows::UI::Xaml::IRoutedEvent;
    };
    template <> struct default_interface<Windows::UI::Xaml::RoutedEventArgs>
    {
        using type = Windows::UI::Xaml::IRoutedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::ScalarTransition>
    {
        using type = Windows::UI::Xaml::IScalarTransition;
    };
    template <> struct default_interface<Windows::UI::Xaml::Setter>
    {
        using type = Windows::UI::Xaml::ISetter;
    };
    template <> struct default_interface<Windows::UI::Xaml::SetterBase>
    {
        using type = Windows::UI::Xaml::ISetterBase;
    };
    template <> struct default_interface<Windows::UI::Xaml::SetterBaseCollection>
    {
        using type = Windows::UI::Xaml::ISetterBaseCollection;
    };
    template <> struct default_interface<Windows::UI::Xaml::SizeChangedEventArgs>
    {
        using type = Windows::UI::Xaml::ISizeChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::SizeHelper>
    {
        using type = Windows::UI::Xaml::ISizeHelper;
    };
    template <> struct default_interface<Windows::UI::Xaml::StateTrigger>
    {
        using type = Windows::UI::Xaml::IStateTrigger;
    };
    template <> struct default_interface<Windows::UI::Xaml::StateTriggerBase>
    {
        using type = Windows::UI::Xaml::IStateTriggerBase;
    };
    template <> struct default_interface<Windows::UI::Xaml::Style>
    {
        using type = Windows::UI::Xaml::IStyle;
    };
    template <> struct default_interface<Windows::UI::Xaml::TargetPropertyPath>
    {
        using type = Windows::UI::Xaml::ITargetPropertyPath;
    };
    template <> struct default_interface<Windows::UI::Xaml::ThicknessHelper>
    {
        using type = Windows::UI::Xaml::IThicknessHelper;
    };
    template <> struct default_interface<Windows::UI::Xaml::TriggerAction>
    {
        using type = Windows::UI::Xaml::ITriggerAction;
    };
    template <> struct default_interface<Windows::UI::Xaml::TriggerActionCollection>
    {
        using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::TriggerAction>;
    };
    template <> struct default_interface<Windows::UI::Xaml::TriggerBase>
    {
        using type = Windows::UI::Xaml::ITriggerBase;
    };
    template <> struct default_interface<Windows::UI::Xaml::TriggerCollection>
    {
        using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::TriggerBase>;
    };
    template <> struct default_interface<Windows::UI::Xaml::UIElement>
    {
        using type = Windows::UI::Xaml::IUIElement;
    };
    template <> struct default_interface<Windows::UI::Xaml::UIElementWeakCollection>
    {
        using type = Windows::UI::Xaml::IUIElementWeakCollection;
    };
    template <> struct default_interface<Windows::UI::Xaml::UnhandledExceptionEventArgs>
    {
        using type = Windows::UI::Xaml::IUnhandledExceptionEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Vector3Transition>
    {
        using type = Windows::UI::Xaml::IVector3Transition;
    };
    template <> struct default_interface<Windows::UI::Xaml::VisualState>
    {
        using type = Windows::UI::Xaml::IVisualState;
    };
    template <> struct default_interface<Windows::UI::Xaml::VisualStateChangedEventArgs>
    {
        using type = Windows::UI::Xaml::IVisualStateChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::VisualStateGroup>
    {
        using type = Windows::UI::Xaml::IVisualStateGroup;
    };
    template <> struct default_interface<Windows::UI::Xaml::VisualStateManager>
    {
        using type = Windows::UI::Xaml::IVisualStateManager;
    };
    template <> struct default_interface<Windows::UI::Xaml::VisualTransition>
    {
        using type = Windows::UI::Xaml::IVisualTransition;
    };
    template <> struct default_interface<Windows::UI::Xaml::Window>
    {
        using type = Windows::UI::Xaml::IWindow;
    };
    template <> struct default_interface<Windows::UI::Xaml::WindowCreatedEventArgs>
    {
        using type = Windows::UI::Xaml::IWindowCreatedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::XamlRoot>
    {
        using type = Windows::UI::Xaml::IXamlRoot;
    };
    template <> struct default_interface<Windows::UI::Xaml::XamlRootChangedEventArgs>
    {
        using type = Windows::UI::Xaml::IXamlRootChangedEventArgs;
    };
    template <> struct abi<Windows::UI::Xaml::IAdaptiveTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MinWindowWidth(double*) noexcept = 0;
            virtual int32_t __stdcall put_MinWindowWidth(double) noexcept = 0;
            virtual int32_t __stdcall get_MinWindowHeight(double*) noexcept = 0;
            virtual int32_t __stdcall put_MinWindowHeight(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IAdaptiveTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IAdaptiveTriggerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MinWindowWidthProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinWindowHeightProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IApplication>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Resources(void**) noexcept = 0;
            virtual int32_t __stdcall put_Resources(void*) noexcept = 0;
            virtual int32_t __stdcall get_DebugSettings(void**) noexcept = 0;
            virtual int32_t __stdcall get_RequestedTheme(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RequestedTheme(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_UnhandledException(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UnhandledException(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Suspending(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Suspending(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Resuming(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Resuming(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Exit() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IApplication2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FocusVisualKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FocusVisualKind(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RequiresPointerMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RequiresPointerMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_LeavingBackground(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LeavingBackground(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnteredBackground(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnteredBackground(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IApplication3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HighContrastAdjustment(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HighContrastAdjustment(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IApplicationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IApplicationInitializationCallbackParams>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::IApplicationOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OnActivated(void*) noexcept = 0;
            virtual int32_t __stdcall OnLaunched(void*) noexcept = 0;
            virtual int32_t __stdcall OnFileActivated(void*) noexcept = 0;
            virtual int32_t __stdcall OnSearchActivated(void*) noexcept = 0;
            virtual int32_t __stdcall OnShareTargetActivated(void*) noexcept = 0;
            virtual int32_t __stdcall OnFileOpenPickerActivated(void*) noexcept = 0;
            virtual int32_t __stdcall OnFileSavePickerActivated(void*) noexcept = 0;
            virtual int32_t __stdcall OnCachedFileUpdaterActivated(void*) noexcept = 0;
            virtual int32_t __stdcall OnWindowCreated(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IApplicationOverrides2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OnBackgroundActivated(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IApplicationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
            virtual int32_t __stdcall Start(void*) noexcept = 0;
            virtual int32_t __stdcall LoadComponent(void*, void*) noexcept = 0;
            virtual int32_t __stdcall LoadComponentWithResourceLocation(void*, void*, int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IBindingFailedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IBringIntoViewOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AnimationDesired(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AnimationDesired(bool) noexcept = 0;
            virtual int32_t __stdcall get_TargetRect(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetRect(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IBringIntoViewOptions2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HorizontalAlignmentRatio(double*) noexcept = 0;
            virtual int32_t __stdcall put_HorizontalAlignmentRatio(double) noexcept = 0;
            virtual int32_t __stdcall get_VerticalAlignmentRatio(double*) noexcept = 0;
            virtual int32_t __stdcall put_VerticalAlignmentRatio(double) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_HorizontalOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_VerticalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_VerticalOffset(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IBringIntoViewRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetElement(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetElement(void*) noexcept = 0;
            virtual int32_t __stdcall get_AnimationDesired(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AnimationDesired(bool) noexcept = 0;
            virtual int32_t __stdcall get_TargetRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall put_TargetRect(Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalAlignmentRatio(double*) noexcept = 0;
            virtual int32_t __stdcall get_VerticalAlignmentRatio(double*) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_HorizontalOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_VerticalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_VerticalOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IBrushTransition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Duration(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IBrushTransitionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IColorPaletteResources>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AltHigh(void**) noexcept = 0;
            virtual int32_t __stdcall put_AltHigh(void*) noexcept = 0;
            virtual int32_t __stdcall get_AltLow(void**) noexcept = 0;
            virtual int32_t __stdcall put_AltLow(void*) noexcept = 0;
            virtual int32_t __stdcall get_AltMedium(void**) noexcept = 0;
            virtual int32_t __stdcall put_AltMedium(void*) noexcept = 0;
            virtual int32_t __stdcall get_AltMediumHigh(void**) noexcept = 0;
            virtual int32_t __stdcall put_AltMediumHigh(void*) noexcept = 0;
            virtual int32_t __stdcall get_AltMediumLow(void**) noexcept = 0;
            virtual int32_t __stdcall put_AltMediumLow(void*) noexcept = 0;
            virtual int32_t __stdcall get_BaseHigh(void**) noexcept = 0;
            virtual int32_t __stdcall put_BaseHigh(void*) noexcept = 0;
            virtual int32_t __stdcall get_BaseLow(void**) noexcept = 0;
            virtual int32_t __stdcall put_BaseLow(void*) noexcept = 0;
            virtual int32_t __stdcall get_BaseMedium(void**) noexcept = 0;
            virtual int32_t __stdcall put_BaseMedium(void*) noexcept = 0;
            virtual int32_t __stdcall get_BaseMediumHigh(void**) noexcept = 0;
            virtual int32_t __stdcall put_BaseMediumHigh(void*) noexcept = 0;
            virtual int32_t __stdcall get_BaseMediumLow(void**) noexcept = 0;
            virtual int32_t __stdcall put_BaseMediumLow(void*) noexcept = 0;
            virtual int32_t __stdcall get_ChromeAltLow(void**) noexcept = 0;
            virtual int32_t __stdcall put_ChromeAltLow(void*) noexcept = 0;
            virtual int32_t __stdcall get_ChromeBlackHigh(void**) noexcept = 0;
            virtual int32_t __stdcall put_ChromeBlackHigh(void*) noexcept = 0;
            virtual int32_t __stdcall get_ChromeBlackLow(void**) noexcept = 0;
            virtual int32_t __stdcall put_ChromeBlackLow(void*) noexcept = 0;
            virtual int32_t __stdcall get_ChromeBlackMediumLow(void**) noexcept = 0;
            virtual int32_t __stdcall put_ChromeBlackMediumLow(void*) noexcept = 0;
            virtual int32_t __stdcall get_ChromeBlackMedium(void**) noexcept = 0;
            virtual int32_t __stdcall put_ChromeBlackMedium(void*) noexcept = 0;
            virtual int32_t __stdcall get_ChromeDisabledHigh(void**) noexcept = 0;
            virtual int32_t __stdcall put_ChromeDisabledHigh(void*) noexcept = 0;
            virtual int32_t __stdcall get_ChromeDisabledLow(void**) noexcept = 0;
            virtual int32_t __stdcall put_ChromeDisabledLow(void*) noexcept = 0;
            virtual int32_t __stdcall get_ChromeHigh(void**) noexcept = 0;
            virtual int32_t __stdcall put_ChromeHigh(void*) noexcept = 0;
            virtual int32_t __stdcall get_ChromeLow(void**) noexcept = 0;
            virtual int32_t __stdcall put_ChromeLow(void*) noexcept = 0;
            virtual int32_t __stdcall get_ChromeMedium(void**) noexcept = 0;
            virtual int32_t __stdcall put_ChromeMedium(void*) noexcept = 0;
            virtual int32_t __stdcall get_ChromeMediumLow(void**) noexcept = 0;
            virtual int32_t __stdcall put_ChromeMediumLow(void*) noexcept = 0;
            virtual int32_t __stdcall get_ChromeWhite(void**) noexcept = 0;
            virtual int32_t __stdcall put_ChromeWhite(void*) noexcept = 0;
            virtual int32_t __stdcall get_ChromeGray(void**) noexcept = 0;
            virtual int32_t __stdcall put_ChromeGray(void*) noexcept = 0;
            virtual int32_t __stdcall get_ListLow(void**) noexcept = 0;
            virtual int32_t __stdcall put_ListLow(void*) noexcept = 0;
            virtual int32_t __stdcall get_ListMedium(void**) noexcept = 0;
            virtual int32_t __stdcall put_ListMedium(void*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorText(void**) noexcept = 0;
            virtual int32_t __stdcall put_ErrorText(void*) noexcept = 0;
            virtual int32_t __stdcall get_Accent(void**) noexcept = 0;
            virtual int32_t __stdcall put_Accent(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IColorPaletteResourcesFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::ICornerRadiusHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::ICornerRadiusHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromRadii(double, double, double, double, struct struct_Windows_UI_Xaml_CornerRadius*) noexcept = 0;
            virtual int32_t __stdcall FromUniformRadius(double, struct struct_Windows_UI_Xaml_CornerRadius*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDataContextChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NewValue(void**) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDataTemplate>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LoadContent(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDataTemplateExtension>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ResetTemplate() noexcept = 0;
            virtual int32_t __stdcall ProcessBinding(uint32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall ProcessBindings(void*, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDataTemplateFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDataTemplateKey>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DataType(void**) noexcept = 0;
            virtual int32_t __stdcall put_DataType(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDataTemplateKeyFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithType(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDataTemplateStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtensionInstanceProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetExtensionInstance(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetExtensionInstance(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDebugSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnableFrameRateCounter(bool*) noexcept = 0;
            virtual int32_t __stdcall put_EnableFrameRateCounter(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsBindingTracingEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsBindingTracingEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsOverdrawHeatMapEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsOverdrawHeatMapEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall add_BindingFailed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BindingFailed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDebugSettings2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnableRedrawRegions(bool*) noexcept = 0;
            virtual int32_t __stdcall put_EnableRedrawRegions(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDebugSettings3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsTextPerformanceVisualizationEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsTextPerformanceVisualizationEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDebugSettings4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FailFastOnErrors(bool*) noexcept = 0;
            virtual int32_t __stdcall put_FailFastOnErrors(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDependencyObject>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetValue(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetValue(void*, void*) noexcept = 0;
            virtual int32_t __stdcall ClearValue(void*) noexcept = 0;
            virtual int32_t __stdcall ReadLocalValue(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAnimationBaseValue(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_Dispatcher(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDependencyObject2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RegisterPropertyChangedCallback(void*, void*, int64_t*) noexcept = 0;
            virtual int32_t __stdcall UnregisterPropertyChangedCallback(void*, int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDependencyObjectCollectionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDependencyObjectFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDependencyProperty>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetMetadata(struct struct_Windows_UI_Xaml_Interop_TypeName, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDependencyPropertyChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Property(void**) noexcept = 0;
            virtual int32_t __stdcall get_OldValue(void**) noexcept = 0;
            virtual int32_t __stdcall get_NewValue(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDependencyPropertyStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UnsetValue(void**) noexcept = 0;
            virtual int32_t __stdcall Register(void*, struct struct_Windows_UI_Xaml_Interop_TypeName, struct struct_Windows_UI_Xaml_Interop_TypeName, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RegisterAttached(void*, struct struct_Windows_UI_Xaml_Interop_TypeName, struct struct_Windows_UI_Xaml_Interop_TypeName, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDispatcherTimer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Interval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Interval(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall add_Tick(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Tick(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDispatcherTimerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDragEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall put_Data(void*) noexcept = 0;
            virtual int32_t __stdcall GetPosition(void*, Windows::Foundation::Point*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDragEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DataView(void**) noexcept = 0;
            virtual int32_t __stdcall get_DragUIOverride(void**) noexcept = 0;
            virtual int32_t __stdcall get_Modifiers(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AcceptedOperation(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AcceptedOperation(uint32_t) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDragEventArgs3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowedOperations(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDragOperationDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDragStartingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Cancel(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Cancel(bool) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall get_DragUI(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall GetPosition(void*, Windows::Foundation::Point*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDragStartingEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowedOperations(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AllowedOperations(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDragUI>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetContentFromBitmapImage(void*) noexcept = 0;
            virtual int32_t __stdcall SetContentFromBitmapImageWithAnchorPoint(void*, Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall SetContentFromSoftwareBitmap(void*) noexcept = 0;
            virtual int32_t __stdcall SetContentFromSoftwareBitmapWithAnchorPoint(void*, Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall SetContentFromDataPackage() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDragUIOverride>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Caption(void**) noexcept = 0;
            virtual int32_t __stdcall put_Caption(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsContentVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsContentVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsCaptionVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCaptionVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsGlyphVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsGlyphVisible(bool) noexcept = 0;
            virtual int32_t __stdcall Clear() noexcept = 0;
            virtual int32_t __stdcall SetContentFromBitmapImage(void*) noexcept = 0;
            virtual int32_t __stdcall SetContentFromBitmapImageWithAnchorPoint(void*, Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall SetContentFromSoftwareBitmap(void*) noexcept = 0;
            virtual int32_t __stdcall SetContentFromSoftwareBitmapWithAnchorPoint(void*, Windows::Foundation::Point) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDropCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DropResult(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDurationHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::IDurationHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Automatic(struct struct_Windows_UI_Xaml_Duration*) noexcept = 0;
            virtual int32_t __stdcall get_Forever(struct struct_Windows_UI_Xaml_Duration*) noexcept = 0;
            virtual int32_t __stdcall Compare(struct struct_Windows_UI_Xaml_Duration, struct struct_Windows_UI_Xaml_Duration, int32_t*) noexcept = 0;
            virtual int32_t __stdcall FromTimeSpan(int64_t, struct struct_Windows_UI_Xaml_Duration*) noexcept = 0;
            virtual int32_t __stdcall GetHasTimeSpan(struct struct_Windows_UI_Xaml_Duration, bool*) noexcept = 0;
            virtual int32_t __stdcall Add(struct struct_Windows_UI_Xaml_Duration, struct struct_Windows_UI_Xaml_Duration, struct struct_Windows_UI_Xaml_Duration*) noexcept = 0;
            virtual int32_t __stdcall Equals(struct struct_Windows_UI_Xaml_Duration, struct struct_Windows_UI_Xaml_Duration, bool*) noexcept = 0;
            virtual int32_t __stdcall Subtract(struct struct_Windows_UI_Xaml_Duration, struct struct_Windows_UI_Xaml_Duration, struct struct_Windows_UI_Xaml_Duration*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IEffectiveViewportChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EffectiveViewport(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_MaxViewport(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_BringIntoViewDistanceX(double*) noexcept = 0;
            virtual int32_t __stdcall get_BringIntoViewDistanceY(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IElementFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetElement(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RecycleElement(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IElementFactoryGetArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall put_Data(void*) noexcept = 0;
            virtual int32_t __stdcall get_Parent(void**) noexcept = 0;
            virtual int32_t __stdcall put_Parent(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IElementFactoryGetArgsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IElementFactoryRecycleArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Element(void**) noexcept = 0;
            virtual int32_t __stdcall put_Element(void*) noexcept = 0;
            virtual int32_t __stdcall get_Parent(void**) noexcept = 0;
            virtual int32_t __stdcall put_Parent(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IElementFactoryRecycleArgsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IElementSoundPlayer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::IElementSoundPlayerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Volume(double*) noexcept = 0;
            virtual int32_t __stdcall put_Volume(double) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_State(int32_t) noexcept = 0;
            virtual int32_t __stdcall Play(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IElementSoundPlayerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SpatialAudioMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SpatialAudioMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IEventTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RoutedEvent(void**) noexcept = 0;
            virtual int32_t __stdcall put_RoutedEvent(void*) noexcept = 0;
            virtual int32_t __stdcall get_Actions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IExceptionRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ErrorMessage(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IExceptionRoutedEventArgsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkElement>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Triggers(void**) noexcept = 0;
            virtual int32_t __stdcall get_Resources(void**) noexcept = 0;
            virtual int32_t __stdcall put_Resources(void*) noexcept = 0;
            virtual int32_t __stdcall get_Tag(void**) noexcept = 0;
            virtual int32_t __stdcall put_Tag(void*) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
            virtual int32_t __stdcall put_Language(void*) noexcept = 0;
            virtual int32_t __stdcall get_ActualWidth(double*) noexcept = 0;
            virtual int32_t __stdcall get_ActualHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_Width(double*) noexcept = 0;
            virtual int32_t __stdcall put_Width(double) noexcept = 0;
            virtual int32_t __stdcall get_Height(double*) noexcept = 0;
            virtual int32_t __stdcall put_Height(double) noexcept = 0;
            virtual int32_t __stdcall get_MinWidth(double*) noexcept = 0;
            virtual int32_t __stdcall put_MinWidth(double) noexcept = 0;
            virtual int32_t __stdcall get_MaxWidth(double*) noexcept = 0;
            virtual int32_t __stdcall put_MaxWidth(double) noexcept = 0;
            virtual int32_t __stdcall get_MinHeight(double*) noexcept = 0;
            virtual int32_t __stdcall put_MinHeight(double) noexcept = 0;
            virtual int32_t __stdcall get_MaxHeight(double*) noexcept = 0;
            virtual int32_t __stdcall put_MaxHeight(double) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalAlignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HorizontalAlignment(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_VerticalAlignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_VerticalAlignment(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Margin(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_Margin(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_BaseUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_DataContext(void**) noexcept = 0;
            virtual int32_t __stdcall put_DataContext(void*) noexcept = 0;
            virtual int32_t __stdcall get_Style(void**) noexcept = 0;
            virtual int32_t __stdcall put_Style(void*) noexcept = 0;
            virtual int32_t __stdcall get_Parent(void**) noexcept = 0;
            virtual int32_t __stdcall get_FlowDirection(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FlowDirection(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_Loaded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Loaded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Unloaded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Unloaded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SizeChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SizeChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LayoutUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LayoutUpdated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall FindName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetBinding(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkElement2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestedTheme(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RequestedTheme(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_DataContextChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DataContextChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetBindingExpression(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkElement3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Loading(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Loading(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkElement4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowFocusOnInteraction(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowFocusOnInteraction(bool) noexcept = 0;
            virtual int32_t __stdcall get_FocusVisualMargin(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_FocusVisualMargin(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall get_FocusVisualSecondaryThickness(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_FocusVisualSecondaryThickness(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall get_FocusVisualPrimaryThickness(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_FocusVisualPrimaryThickness(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall get_FocusVisualSecondaryBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_FocusVisualSecondaryBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_FocusVisualPrimaryBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_FocusVisualPrimaryBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_AllowFocusWhenDisabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowFocusWhenDisabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkElement6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ActualTheme(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_ActualThemeChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ActualThemeChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkElement7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsLoaded(bool*) noexcept = 0;
            virtual int32_t __stdcall add_EffectiveViewportChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EffectiveViewportChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkElementFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkElementOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall MeasureOverride(Windows::Foundation::Size, Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall ArrangeOverride(Windows::Foundation::Size, Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall OnApplyTemplate() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkElementOverrides2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GoToElementStateCore(void*, bool, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkElementProtected7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InvalidateViewport() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkElementStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TagProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LanguageProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ActualWidthProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ActualHeightProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_WidthProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_HeightProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinWidthProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxWidthProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinHeightProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxHeightProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalAlignmentProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_VerticalAlignmentProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MarginProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_NameProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DataContextProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StyleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FlowDirectionProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkElementStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestedThemeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkElementStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowFocusOnInteractionProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FocusVisualMarginProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FocusVisualSecondaryThicknessProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FocusVisualPrimaryThicknessProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FocusVisualSecondaryBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FocusVisualPrimaryBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowFocusWhenDisabledProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkElementStatics5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall DeferTree(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkElementStatics6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ActualThemeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkTemplate>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkTemplateFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkView>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::IFrameworkViewSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::IGridLengthHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::IGridLengthHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Auto(struct struct_Windows_UI_Xaml_GridLength*) noexcept = 0;
            virtual int32_t __stdcall FromPixels(double, struct struct_Windows_UI_Xaml_GridLength*) noexcept = 0;
            virtual int32_t __stdcall FromValueAndType(double, int32_t, struct struct_Windows_UI_Xaml_GridLength*) noexcept = 0;
            virtual int32_t __stdcall GetIsAbsolute(struct struct_Windows_UI_Xaml_GridLength, bool*) noexcept = 0;
            virtual int32_t __stdcall GetIsAuto(struct struct_Windows_UI_Xaml_GridLength, bool*) noexcept = 0;
            virtual int32_t __stdcall GetIsStar(struct struct_Windows_UI_Xaml_GridLength, bool*) noexcept = 0;
            virtual int32_t __stdcall Equals(struct struct_Windows_UI_Xaml_GridLength, struct struct_Windows_UI_Xaml_GridLength, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IMediaFailedRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ErrorTrace(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IPointHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::IPointHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromCoordinates(float, float, Windows::Foundation::Point*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IPropertyMetadata>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DefaultValue(void**) noexcept = 0;
            virtual int32_t __stdcall get_CreateDefaultValueCallback(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IPropertyMetadataFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithDefaultValue(void*, void*, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithDefaultValueAndCallback(void*, void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IPropertyMetadataStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithDefaultValue(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithDefaultValueAndCallback(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithFactory(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithFactoryAndCallback(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IPropertyPath>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IPropertyPathFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IRectHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::IRectHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Empty(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall FromCoordinatesAndDimensions(float, float, float, float, Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall FromPoints(Windows::Foundation::Point, Windows::Foundation::Point, Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall FromLocationAndSize(Windows::Foundation::Point, Windows::Foundation::Size, Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall GetIsEmpty(Windows::Foundation::Rect, bool*) noexcept = 0;
            virtual int32_t __stdcall GetBottom(Windows::Foundation::Rect, float*) noexcept = 0;
            virtual int32_t __stdcall GetLeft(Windows::Foundation::Rect, float*) noexcept = 0;
            virtual int32_t __stdcall GetRight(Windows::Foundation::Rect, float*) noexcept = 0;
            virtual int32_t __stdcall GetTop(Windows::Foundation::Rect, float*) noexcept = 0;
            virtual int32_t __stdcall Contains(Windows::Foundation::Rect, Windows::Foundation::Point, bool*) noexcept = 0;
            virtual int32_t __stdcall Equals(Windows::Foundation::Rect, Windows::Foundation::Rect, bool*) noexcept = 0;
            virtual int32_t __stdcall Intersect(Windows::Foundation::Rect, Windows::Foundation::Rect, Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall UnionWithPoint(Windows::Foundation::Rect, Windows::Foundation::Point, Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall UnionWithRect(Windows::Foundation::Rect, Windows::Foundation::Rect, Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IResourceDictionary>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall put_Source(void*) noexcept = 0;
            virtual int32_t __stdcall get_MergedDictionaries(void**) noexcept = 0;
            virtual int32_t __stdcall get_ThemeDictionaries(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IResourceDictionaryFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IRoutedEvent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::IRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OriginalSource(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IRoutedEventArgsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IScalarTransition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Duration(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IScalarTransitionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::ISetter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Property(void**) noexcept = 0;
            virtual int32_t __stdcall put_Property(void*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::ISetter2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Target(void**) noexcept = 0;
            virtual int32_t __stdcall put_Target(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::ISetterBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSealed(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::ISetterBaseCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSealed(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::ISetterBaseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::ISetterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::ISizeChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PreviousSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_NewSize(Windows::Foundation::Size*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::ISizeHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::ISizeHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Empty(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall FromDimensions(float, float, Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall GetIsEmpty(Windows::Foundation::Size, bool*) noexcept = 0;
            virtual int32_t __stdcall Equals(Windows::Foundation::Size, Windows::Foundation::Size, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IStateTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsActive(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsActive(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IStateTriggerBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::IStateTriggerBaseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IStateTriggerBaseProtected>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetActive(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IStateTriggerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsActiveProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IStyle>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSealed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Setters(void**) noexcept = 0;
            virtual int32_t __stdcall get_TargetType(struct struct_Windows_UI_Xaml_Interop_TypeName*) noexcept = 0;
            virtual int32_t __stdcall put_TargetType(struct struct_Windows_UI_Xaml_Interop_TypeName) noexcept = 0;
            virtual int32_t __stdcall get_BasedOn(void**) noexcept = 0;
            virtual int32_t __stdcall put_BasedOn(void*) noexcept = 0;
            virtual int32_t __stdcall Seal() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IStyleFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(struct struct_Windows_UI_Xaml_Interop_TypeName, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::ITargetPropertyPath>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
            virtual int32_t __stdcall put_Path(void*) noexcept = 0;
            virtual int32_t __stdcall get_Target(void**) noexcept = 0;
            virtual int32_t __stdcall put_Target(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::ITargetPropertyPathFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IThicknessHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::IThicknessHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromLengths(double, double, double, double, struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall FromUniformLength(double, struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::ITriggerAction>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::ITriggerActionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::ITriggerBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::ITriggerBaseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElement>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesiredSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_AllowDrop(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowDrop(bool) noexcept = 0;
            virtual int32_t __stdcall get_Opacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_Opacity(double) noexcept = 0;
            virtual int32_t __stdcall get_Clip(void**) noexcept = 0;
            virtual int32_t __stdcall put_Clip(void*) noexcept = 0;
            virtual int32_t __stdcall get_RenderTransform(void**) noexcept = 0;
            virtual int32_t __stdcall put_RenderTransform(void*) noexcept = 0;
            virtual int32_t __stdcall get_Projection(void**) noexcept = 0;
            virtual int32_t __stdcall put_Projection(void*) noexcept = 0;
            virtual int32_t __stdcall get_RenderTransformOrigin(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_RenderTransformOrigin(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_IsHitTestVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsHitTestVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_Visibility(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Visibility(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RenderSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_UseLayoutRounding(bool*) noexcept = 0;
            virtual int32_t __stdcall put_UseLayoutRounding(bool) noexcept = 0;
            virtual int32_t __stdcall get_Transitions(void**) noexcept = 0;
            virtual int32_t __stdcall put_Transitions(void*) noexcept = 0;
            virtual int32_t __stdcall get_CacheMode(void**) noexcept = 0;
            virtual int32_t __stdcall put_CacheMode(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsTapEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsTapEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsDoubleTapEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsDoubleTapEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsRightTapEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsRightTapEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsHoldingEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsHoldingEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_ManipulationMode(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ManipulationMode(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_PointerCaptures(void**) noexcept = 0;
            virtual int32_t __stdcall add_KeyUp(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_KeyUp(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_KeyDown(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_KeyDown(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_GotFocus(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GotFocus(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LostFocus(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LostFocus(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DragEnter(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DragEnter(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DragLeave(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DragLeave(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DragOver(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DragOver(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Drop(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Drop(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerMoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerMoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerReleased(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerReleased(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerEntered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerEntered(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerExited(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerExited(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerCaptureLost(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerCaptureLost(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerCanceled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerCanceled(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerWheelChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerWheelChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Tapped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Tapped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DoubleTapped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DoubleTapped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Holding(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Holding(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RightTapped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RightTapped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ManipulationStarting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ManipulationStarting(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ManipulationInertiaStarting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ManipulationInertiaStarting(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ManipulationStarted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ManipulationStarted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ManipulationDelta(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ManipulationDelta(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ManipulationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ManipulationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Measure(Windows::Foundation::Size) noexcept = 0;
            virtual int32_t __stdcall Arrange(Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall CapturePointer(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall ReleasePointerCapture(void*) noexcept = 0;
            virtual int32_t __stdcall ReleasePointerCaptures() noexcept = 0;
            virtual int32_t __stdcall AddHandler(void*, void*, bool) noexcept = 0;
            virtual int32_t __stdcall RemoveHandler(void*, void*) noexcept = 0;
            virtual int32_t __stdcall TransformToVisual(void*, void**) noexcept = 0;
            virtual int32_t __stdcall InvalidateMeasure() noexcept = 0;
            virtual int32_t __stdcall InvalidateArrange() noexcept = 0;
            virtual int32_t __stdcall UpdateLayout() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElement10>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ActualOffset(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_ActualSize(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall get_XamlRoot(void**) noexcept = 0;
            virtual int32_t __stdcall put_XamlRoot(void*) noexcept = 0;
            virtual int32_t __stdcall get_UIContext(void**) noexcept = 0;
            virtual int32_t __stdcall get_Shadow(void**) noexcept = 0;
            virtual int32_t __stdcall put_Shadow(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElement2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CompositeMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CompositeMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall CancelDirectManipulations(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElement3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Transform3D(void**) noexcept = 0;
            virtual int32_t __stdcall put_Transform3D(void*) noexcept = 0;
            virtual int32_t __stdcall get_CanDrag(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanDrag(bool) noexcept = 0;
            virtual int32_t __stdcall add_DragStarting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DragStarting(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DropCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DropCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall StartDragAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElement4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContextFlyout(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContextFlyout(void*) noexcept = 0;
            virtual int32_t __stdcall get_ExitDisplayModeOnAccessKeyInvoked(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ExitDisplayModeOnAccessKeyInvoked(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsAccessKeyScope(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsAccessKeyScope(bool) noexcept = 0;
            virtual int32_t __stdcall get_AccessKeyScopeOwner(void**) noexcept = 0;
            virtual int32_t __stdcall put_AccessKeyScopeOwner(void*) noexcept = 0;
            virtual int32_t __stdcall get_AccessKey(void**) noexcept = 0;
            virtual int32_t __stdcall put_AccessKey(void*) noexcept = 0;
            virtual int32_t __stdcall add_ContextRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ContextRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ContextCanceled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ContextCanceled(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AccessKeyDisplayRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AccessKeyDisplayRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AccessKeyDisplayDismissed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AccessKeyDisplayDismissed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AccessKeyInvoked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AccessKeyInvoked(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElement5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Lights(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyTipPlacementMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_KeyTipPlacementMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_KeyTipHorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_KeyTipHorizontalOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_KeyTipVerticalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_KeyTipVerticalOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusKeyboardNavigation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusKeyboardNavigation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusUpNavigationStrategy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusUpNavigationStrategy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusDownNavigationStrategy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusDownNavigationStrategy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusLeftNavigationStrategy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusLeftNavigationStrategy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusRightNavigationStrategy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusRightNavigationStrategy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_HighContrastAdjustment(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HighContrastAdjustment(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_TabFocusNavigation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TabFocusNavigation(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_GettingFocus(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GettingFocus(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LosingFocus(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LosingFocus(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_NoFocusCandidateFound(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NoFocusCandidateFound(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall StartBringIntoView() noexcept = 0;
            virtual int32_t __stdcall StartBringIntoViewWithOptions(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElement7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyboardAccelerators(void**) noexcept = 0;
            virtual int32_t __stdcall add_CharacterReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CharacterReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ProcessKeyboardAccelerators(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ProcessKeyboardAccelerators(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PreviewKeyDown(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PreviewKeyDown(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PreviewKeyUp(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PreviewKeyUp(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall TryInvokeKeyboardAccelerator(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElement8>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyTipTarget(void**) noexcept = 0;
            virtual int32_t __stdcall put_KeyTipTarget(void*) noexcept = 0;
            virtual int32_t __stdcall get_KeyboardAcceleratorPlacementTarget(void**) noexcept = 0;
            virtual int32_t __stdcall put_KeyboardAcceleratorPlacementTarget(void*) noexcept = 0;
            virtual int32_t __stdcall get_KeyboardAcceleratorPlacementMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_KeyboardAcceleratorPlacementMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_BringIntoViewRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BringIntoViewRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElement9>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanBeScrollAnchor(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanBeScrollAnchor(bool) noexcept = 0;
            virtual int32_t __stdcall get_OpacityTransition(void**) noexcept = 0;
            virtual int32_t __stdcall put_OpacityTransition(void*) noexcept = 0;
            virtual int32_t __stdcall get_Translation(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Translation(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_TranslationTransition(void**) noexcept = 0;
            virtual int32_t __stdcall put_TranslationTransition(void*) noexcept = 0;
            virtual int32_t __stdcall get_Rotation(float*) noexcept = 0;
            virtual int32_t __stdcall put_Rotation(float) noexcept = 0;
            virtual int32_t __stdcall get_RotationTransition(void**) noexcept = 0;
            virtual int32_t __stdcall put_RotationTransition(void*) noexcept = 0;
            virtual int32_t __stdcall get_Scale(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Scale(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_ScaleTransition(void**) noexcept = 0;
            virtual int32_t __stdcall put_ScaleTransition(void*) noexcept = 0;
            virtual int32_t __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float4x4*) noexcept = 0;
            virtual int32_t __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float4x4) noexcept = 0;
            virtual int32_t __stdcall get_CenterPoint(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_CenterPoint(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_RotationAxis(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_RotationAxis(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall StartAnimation(void*) noexcept = 0;
            virtual int32_t __stdcall StopAnimation(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElementFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElementOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OnCreateAutomationPeer(void**) noexcept = 0;
            virtual int32_t __stdcall OnDisconnectVisualChildren() noexcept = 0;
            virtual int32_t __stdcall FindSubElementsForTouchTargeting(Windows::Foundation::Point, Windows::Foundation::Rect, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElementOverrides7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetChildrenInTabFocusOrder(void**) noexcept = 0;
            virtual int32_t __stdcall OnProcessKeyboardAccelerators(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElementOverrides8>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OnKeyboardAcceleratorInvoked(void*) noexcept = 0;
            virtual int32_t __stdcall OnBringIntoViewRequested(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElementOverrides9>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PopulatePropertyInfoOverride(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElementStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyDownEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyUpEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerEnteredEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerPressedEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerMovedEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerReleasedEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerExitedEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerCaptureLostEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerCanceledEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerWheelChangedEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_TappedEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_DoubleTappedEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_HoldingEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_RightTappedEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_ManipulationStartingEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_ManipulationInertiaStartingEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_ManipulationStartedEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_ManipulationDeltaEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_ManipulationCompletedEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_DragEnterEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_DragLeaveEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_DragOverEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_DropEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowDropProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_OpacityProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ClipProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RenderTransformProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProjectionProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RenderTransformOriginProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsHitTestVisibleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_VisibilityProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_UseLayoutRoundingProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransitionsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CacheModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsTapEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsDoubleTapEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsRightTapEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsHoldingEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ManipulationModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerCapturesProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElementStatics10>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShadowProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElementStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CompositeModeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElementStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Transform3DProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanDragProperty(void**) noexcept = 0;
            virtual int32_t __stdcall TryStartDirectManipulation(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElementStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContextFlyoutProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExitDisplayModeOnAccessKeyInvokedProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsAccessKeyScopeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AccessKeyScopeOwnerProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AccessKeyProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElementStatics5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LightsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyTipPlacementModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyTipHorizontalOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyTipVerticalOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusKeyboardNavigationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusUpNavigationStrategyProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusDownNavigationStrategyProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusLeftNavigationStrategyProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusRightNavigationStrategyProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_HighContrastAdjustmentProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TabFocusNavigationProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElementStatics6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_GettingFocusEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_LosingFocusEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_NoFocusCandidateFoundEvent(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElementStatics7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PreviewKeyDownEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_CharacterReceivedEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_PreviewKeyUpEvent(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElementStatics8>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BringIntoViewRequestedEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContextRequestedEvent(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyTipTargetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyboardAcceleratorPlacementTargetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyboardAcceleratorPlacementModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall RegisterAsScrollPort(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElementStatics9>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanBeScrollAnchorProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElementWeakCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUIElementWeakCollectionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IUnhandledExceptionEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Exception(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IVector3Transition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Duration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Components(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Components(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IVector3TransitionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IVisualState>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Storyboard(void**) noexcept = 0;
            virtual int32_t __stdcall put_Storyboard(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IVisualState2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Setters(void**) noexcept = 0;
            virtual int32_t __stdcall get_StateTriggers(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IVisualStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OldState(void**) noexcept = 0;
            virtual int32_t __stdcall put_OldState(void*) noexcept = 0;
            virtual int32_t __stdcall get_NewState(void**) noexcept = 0;
            virtual int32_t __stdcall put_NewState(void*) noexcept = 0;
            virtual int32_t __stdcall get_Control(void**) noexcept = 0;
            virtual int32_t __stdcall put_Control(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IVisualStateGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Transitions(void**) noexcept = 0;
            virtual int32_t __stdcall get_States(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentState(void**) noexcept = 0;
            virtual int32_t __stdcall add_CurrentStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CurrentStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CurrentStateChanging(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CurrentStateChanging(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IVisualStateManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::IVisualStateManagerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IVisualStateManagerOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GoToStateCore(void*, void*, void*, void*, void*, bool, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IVisualStateManagerProtected>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RaiseCurrentStateChanging(void*, void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall RaiseCurrentStateChanged(void*, void*, void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IVisualStateManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetVisualStateGroups(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_CustomVisualStateManagerProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetCustomVisualStateManager(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetCustomVisualStateManager(void*, void*) noexcept = 0;
            virtual int32_t __stdcall GoToState(void*, void*, bool, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IVisualTransition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_GeneratedDuration(struct struct_Windows_UI_Xaml_Duration*) noexcept = 0;
            virtual int32_t __stdcall put_GeneratedDuration(struct struct_Windows_UI_Xaml_Duration) noexcept = 0;
            virtual int32_t __stdcall get_GeneratedEasingFunction(void**) noexcept = 0;
            virtual int32_t __stdcall put_GeneratedEasingFunction(void*) noexcept = 0;
            virtual int32_t __stdcall get_To(void**) noexcept = 0;
            virtual int32_t __stdcall put_To(void*) noexcept = 0;
            virtual int32_t __stdcall get_From(void**) noexcept = 0;
            virtual int32_t __stdcall put_From(void*) noexcept = 0;
            virtual int32_t __stdcall get_Storyboard(void**) noexcept = 0;
            virtual int32_t __stdcall put_Storyboard(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IVisualTransitionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IWindow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Bounds(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_Visible(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Content(void**) noexcept = 0;
            virtual int32_t __stdcall put_Content(void*) noexcept = 0;
            virtual int32_t __stdcall get_CoreWindow(void**) noexcept = 0;
            virtual int32_t __stdcall get_Dispatcher(void**) noexcept = 0;
            virtual int32_t __stdcall add_Activated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Activated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SizeChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SizeChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_VisibilityChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VisibilityChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Activate() noexcept = 0;
            virtual int32_t __stdcall Close() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IWindow2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetTitleBar(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IWindow3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Compositor(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IWindow4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UIContext(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IWindowCreatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Window(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IWindowStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IXamlRoot>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Content(void**) noexcept = 0;
            virtual int32_t __stdcall get_Size(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_RasterizationScale(double*) noexcept = 0;
            virtual int32_t __stdcall get_IsHostVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall get_UIContext(void**) noexcept = 0;
            virtual int32_t __stdcall add_Changed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Changed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::IXamlRootChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::ApplicationInitializationCallback>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::BindingFailedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::CreateDefaultValueCallback>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::DependencyPropertyChangedCallback>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::DependencyPropertyChangedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::DragEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::EnteredBackgroundEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::ExceptionRoutedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::LeavingBackgroundEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::PropertyChangedCallback>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::RoutedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::SizeChangedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::SuspendingEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::UnhandledExceptionEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::VisualStateChangedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::WindowActivatedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::WindowClosedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::WindowSizeChangedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::WindowVisibilityChangedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IAdaptiveTrigger
    {
        [[nodiscard]] auto MinWindowWidth() const;
        auto MinWindowWidth(double value) const;
        [[nodiscard]] auto MinWindowHeight() const;
        auto MinWindowHeight(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IAdaptiveTrigger>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IAdaptiveTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IAdaptiveTriggerFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IAdaptiveTriggerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IAdaptiveTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IAdaptiveTriggerStatics
    {
        [[nodiscard]] auto MinWindowWidthProperty() const;
        [[nodiscard]] auto MinWindowHeightProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::IAdaptiveTriggerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IAdaptiveTriggerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IApplication
    {
        [[nodiscard]] auto Resources() const;
        auto Resources(Windows::UI::Xaml::ResourceDictionary const& value) const;
        [[nodiscard]] auto DebugSettings() const;
        [[nodiscard]] auto RequestedTheme() const;
        auto RequestedTheme(Windows::UI::Xaml::ApplicationTheme const& value) const;
        auto UnhandledException(Windows::UI::Xaml::UnhandledExceptionEventHandler const& handler) const;
        using UnhandledException_revoker = impl::event_revoker<Windows::UI::Xaml::IApplication, &impl::abi_t<Windows::UI::Xaml::IApplication>::remove_UnhandledException>;
        UnhandledException_revoker UnhandledException(auto_revoke_t, Windows::UI::Xaml::UnhandledExceptionEventHandler const& handler) const;
        auto UnhandledException(winrt::event_token const& token) const noexcept;
        auto Suspending(Windows::UI::Xaml::SuspendingEventHandler const& handler) const;
        using Suspending_revoker = impl::event_revoker<Windows::UI::Xaml::IApplication, &impl::abi_t<Windows::UI::Xaml::IApplication>::remove_Suspending>;
        Suspending_revoker Suspending(auto_revoke_t, Windows::UI::Xaml::SuspendingEventHandler const& handler) const;
        auto Suspending(winrt::event_token const& token) const noexcept;
        auto Resuming(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using Resuming_revoker = impl::event_revoker<Windows::UI::Xaml::IApplication, &impl::abi_t<Windows::UI::Xaml::IApplication>::remove_Resuming>;
        Resuming_revoker Resuming(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto Resuming(winrt::event_token const& token) const noexcept;
        auto Exit() const;
    };
    template <> struct consume<Windows::UI::Xaml::IApplication>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IApplication<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IApplication2
    {
        [[nodiscard]] auto FocusVisualKind() const;
        auto FocusVisualKind(Windows::UI::Xaml::FocusVisualKind const& value) const;
        [[nodiscard]] auto RequiresPointerMode() const;
        auto RequiresPointerMode(Windows::UI::Xaml::ApplicationRequiresPointerMode const& value) const;
        auto LeavingBackground(Windows::UI::Xaml::LeavingBackgroundEventHandler const& handler) const;
        using LeavingBackground_revoker = impl::event_revoker<Windows::UI::Xaml::IApplication2, &impl::abi_t<Windows::UI::Xaml::IApplication2>::remove_LeavingBackground>;
        LeavingBackground_revoker LeavingBackground(auto_revoke_t, Windows::UI::Xaml::LeavingBackgroundEventHandler const& handler) const;
        auto LeavingBackground(winrt::event_token const& token) const noexcept;
        auto EnteredBackground(Windows::UI::Xaml::EnteredBackgroundEventHandler const& handler) const;
        using EnteredBackground_revoker = impl::event_revoker<Windows::UI::Xaml::IApplication2, &impl::abi_t<Windows::UI::Xaml::IApplication2>::remove_EnteredBackground>;
        EnteredBackground_revoker EnteredBackground(auto_revoke_t, Windows::UI::Xaml::EnteredBackgroundEventHandler const& handler) const;
        auto EnteredBackground(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::IApplication2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IApplication2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IApplication3
    {
        [[nodiscard]] auto HighContrastAdjustment() const;
        auto HighContrastAdjustment(Windows::UI::Xaml::ApplicationHighContrastAdjustment const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IApplication3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IApplication3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IApplicationFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IApplicationFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IApplicationFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IApplicationInitializationCallbackParams
    {
    };
    template <> struct consume<Windows::UI::Xaml::IApplicationInitializationCallbackParams>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IApplicationInitializationCallbackParams<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IApplicationOverrides
    {
        auto OnActivated(Windows::ApplicationModel::Activation::IActivatedEventArgs const& args) const;
        auto OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs const& args) const;
        auto OnFileActivated(Windows::ApplicationModel::Activation::FileActivatedEventArgs const& args) const;
        auto OnSearchActivated(Windows::ApplicationModel::Activation::SearchActivatedEventArgs const& args) const;
        auto OnShareTargetActivated(Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs const& args) const;
        auto OnFileOpenPickerActivated(Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs const& args) const;
        auto OnFileSavePickerActivated(Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs const& args) const;
        auto OnCachedFileUpdaterActivated(Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs const& args) const;
        auto OnWindowCreated(Windows::UI::Xaml::WindowCreatedEventArgs const& args) const;
    };
    template <> struct consume<Windows::UI::Xaml::IApplicationOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IApplicationOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IApplicationOverrides2
    {
        auto OnBackgroundActivated(Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs const& args) const;
    };
    template <> struct consume<Windows::UI::Xaml::IApplicationOverrides2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IApplicationOverrides2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IApplicationStatics
    {
        [[nodiscard]] auto Current() const;
        auto Start(Windows::UI::Xaml::ApplicationInitializationCallback const& callback) const;
        auto LoadComponent(Windows::Foundation::IInspectable const& component, Windows::Foundation::Uri const& resourceLocator) const;
        auto LoadComponent(Windows::Foundation::IInspectable const& component, Windows::Foundation::Uri const& resourceLocator, Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation const& componentResourceLocation) const;
    };
    template <> struct consume<Windows::UI::Xaml::IApplicationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IApplicationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IBindingFailedEventArgs
    {
        [[nodiscard]] auto Message() const;
    };
    template <> struct consume<Windows::UI::Xaml::IBindingFailedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IBindingFailedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IBringIntoViewOptions
    {
        [[nodiscard]] auto AnimationDesired() const;
        auto AnimationDesired(bool value) const;
        [[nodiscard]] auto TargetRect() const;
        auto TargetRect(Windows::Foundation::IReference<Windows::Foundation::Rect> const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IBringIntoViewOptions>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IBringIntoViewOptions<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IBringIntoViewOptions2
    {
        [[nodiscard]] auto HorizontalAlignmentRatio() const;
        auto HorizontalAlignmentRatio(double value) const;
        [[nodiscard]] auto VerticalAlignmentRatio() const;
        auto VerticalAlignmentRatio(double value) const;
        [[nodiscard]] auto HorizontalOffset() const;
        auto HorizontalOffset(double value) const;
        [[nodiscard]] auto VerticalOffset() const;
        auto VerticalOffset(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IBringIntoViewOptions2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IBringIntoViewOptions2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IBringIntoViewRequestedEventArgs
    {
        [[nodiscard]] auto TargetElement() const;
        auto TargetElement(Windows::UI::Xaml::UIElement const& value) const;
        [[nodiscard]] auto AnimationDesired() const;
        auto AnimationDesired(bool value) const;
        [[nodiscard]] auto TargetRect() const;
        auto TargetRect(Windows::Foundation::Rect const& value) const;
        [[nodiscard]] auto HorizontalAlignmentRatio() const;
        [[nodiscard]] auto VerticalAlignmentRatio() const;
        [[nodiscard]] auto HorizontalOffset() const;
        auto HorizontalOffset(double value) const;
        [[nodiscard]] auto VerticalOffset() const;
        auto VerticalOffset(double value) const;
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IBringIntoViewRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IBringIntoViewRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IBrushTransition
    {
        [[nodiscard]] auto Duration() const;
        auto Duration(Windows::Foundation::TimeSpan const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IBrushTransition>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IBrushTransition<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IBrushTransitionFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IBrushTransitionFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IBrushTransitionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IColorPaletteResources
    {
        [[nodiscard]] auto AltHigh() const;
        auto AltHigh(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto AltLow() const;
        auto AltLow(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto AltMedium() const;
        auto AltMedium(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto AltMediumHigh() const;
        auto AltMediumHigh(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto AltMediumLow() const;
        auto AltMediumLow(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto BaseHigh() const;
        auto BaseHigh(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto BaseLow() const;
        auto BaseLow(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto BaseMedium() const;
        auto BaseMedium(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto BaseMediumHigh() const;
        auto BaseMediumHigh(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto BaseMediumLow() const;
        auto BaseMediumLow(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ChromeAltLow() const;
        auto ChromeAltLow(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ChromeBlackHigh() const;
        auto ChromeBlackHigh(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ChromeBlackLow() const;
        auto ChromeBlackLow(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ChromeBlackMediumLow() const;
        auto ChromeBlackMediumLow(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ChromeBlackMedium() const;
        auto ChromeBlackMedium(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ChromeDisabledHigh() const;
        auto ChromeDisabledHigh(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ChromeDisabledLow() const;
        auto ChromeDisabledLow(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ChromeHigh() const;
        auto ChromeHigh(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ChromeLow() const;
        auto ChromeLow(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ChromeMedium() const;
        auto ChromeMedium(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ChromeMediumLow() const;
        auto ChromeMediumLow(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ChromeWhite() const;
        auto ChromeWhite(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ChromeGray() const;
        auto ChromeGray(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ListLow() const;
        auto ListLow(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ListMedium() const;
        auto ListMedium(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ErrorText() const;
        auto ErrorText(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto Accent() const;
        auto Accent(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IColorPaletteResources>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IColorPaletteResources<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IColorPaletteResourcesFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IColorPaletteResourcesFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IColorPaletteResourcesFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_ICornerRadiusHelper
    {
    };
    template <> struct consume<Windows::UI::Xaml::ICornerRadiusHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_ICornerRadiusHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_ICornerRadiusHelperStatics
    {
        auto FromRadii(double topLeft, double topRight, double bottomRight, double bottomLeft) const;
        auto FromUniformRadius(double uniformRadius) const;
    };
    template <> struct consume<Windows::UI::Xaml::ICornerRadiusHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_ICornerRadiusHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDataContextChangedEventArgs
    {
        [[nodiscard]] auto NewValue() const;
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDataContextChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDataContextChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDataTemplate
    {
        auto LoadContent() const;
    };
    template <> struct consume<Windows::UI::Xaml::IDataTemplate>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDataTemplate<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDataTemplateExtension
    {
        auto ResetTemplate() const;
        auto ProcessBinding(uint32_t phase) const;
        auto ProcessBindings(Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs const& arg) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDataTemplateExtension>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDataTemplateExtension<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDataTemplateFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDataTemplateFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDataTemplateFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDataTemplateKey
    {
        [[nodiscard]] auto DataType() const;
        auto DataType(Windows::Foundation::IInspectable const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDataTemplateKey>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDataTemplateKey<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDataTemplateKeyFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
        auto CreateInstanceWithType(Windows::Foundation::IInspectable const& dataType, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDataTemplateKeyFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDataTemplateKeyFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDataTemplateStatics2
    {
        [[nodiscard]] auto ExtensionInstanceProperty() const;
        auto GetExtensionInstance(Windows::UI::Xaml::FrameworkElement const& element) const;
        auto SetExtensionInstance(Windows::UI::Xaml::FrameworkElement const& element, Windows::UI::Xaml::IDataTemplateExtension const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDataTemplateStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDataTemplateStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDebugSettings
    {
        [[nodiscard]] auto EnableFrameRateCounter() const;
        auto EnableFrameRateCounter(bool value) const;
        [[nodiscard]] auto IsBindingTracingEnabled() const;
        auto IsBindingTracingEnabled(bool value) const;
        [[nodiscard]] auto IsOverdrawHeatMapEnabled() const;
        auto IsOverdrawHeatMapEnabled(bool value) const;
        auto BindingFailed(Windows::UI::Xaml::BindingFailedEventHandler const& handler) const;
        using BindingFailed_revoker = impl::event_revoker<Windows::UI::Xaml::IDebugSettings, &impl::abi_t<Windows::UI::Xaml::IDebugSettings>::remove_BindingFailed>;
        BindingFailed_revoker BindingFailed(auto_revoke_t, Windows::UI::Xaml::BindingFailedEventHandler const& handler) const;
        auto BindingFailed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::IDebugSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDebugSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDebugSettings2
    {
        [[nodiscard]] auto EnableRedrawRegions() const;
        auto EnableRedrawRegions(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDebugSettings2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDebugSettings2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDebugSettings3
    {
        [[nodiscard]] auto IsTextPerformanceVisualizationEnabled() const;
        auto IsTextPerformanceVisualizationEnabled(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDebugSettings3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDebugSettings3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDebugSettings4
    {
        [[nodiscard]] auto FailFastOnErrors() const;
        auto FailFastOnErrors(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDebugSettings4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDebugSettings4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDependencyObject
    {
        auto GetValue(Windows::UI::Xaml::DependencyProperty const& dp) const;
        auto SetValue(Windows::UI::Xaml::DependencyProperty const& dp, Windows::Foundation::IInspectable const& value) const;
        auto ClearValue(Windows::UI::Xaml::DependencyProperty const& dp) const;
        auto ReadLocalValue(Windows::UI::Xaml::DependencyProperty const& dp) const;
        auto GetAnimationBaseValue(Windows::UI::Xaml::DependencyProperty const& dp) const;
        [[nodiscard]] auto Dispatcher() const;
    };
    template <> struct consume<Windows::UI::Xaml::IDependencyObject>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDependencyObject<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDependencyObject2
    {
        auto RegisterPropertyChangedCallback(Windows::UI::Xaml::DependencyProperty const& dp, Windows::UI::Xaml::DependencyPropertyChangedCallback const& callback) const;
        auto UnregisterPropertyChangedCallback(Windows::UI::Xaml::DependencyProperty const& dp, int64_t token) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDependencyObject2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDependencyObject2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDependencyObjectCollectionFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDependencyObjectCollectionFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDependencyObjectCollectionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDependencyObjectFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDependencyObjectFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDependencyObjectFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDependencyProperty
    {
        auto GetMetadata(Windows::UI::Xaml::Interop::TypeName const& forType) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDependencyProperty>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDependencyProperty<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDependencyPropertyChangedEventArgs
    {
        [[nodiscard]] auto Property() const;
        [[nodiscard]] auto OldValue() const;
        [[nodiscard]] auto NewValue() const;
    };
    template <> struct consume<Windows::UI::Xaml::IDependencyPropertyChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDependencyPropertyChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDependencyPropertyStatics
    {
        [[nodiscard]] auto UnsetValue() const;
        auto Register(param::hstring const& name, Windows::UI::Xaml::Interop::TypeName const& propertyType, Windows::UI::Xaml::Interop::TypeName const& ownerType, Windows::UI::Xaml::PropertyMetadata const& typeMetadata) const;
        auto RegisterAttached(param::hstring const& name, Windows::UI::Xaml::Interop::TypeName const& propertyType, Windows::UI::Xaml::Interop::TypeName const& ownerType, Windows::UI::Xaml::PropertyMetadata const& defaultMetadata) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDependencyPropertyStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDependencyPropertyStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDispatcherTimer
    {
        [[nodiscard]] auto Interval() const;
        auto Interval(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto IsEnabled() const;
        auto Tick(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using Tick_revoker = impl::event_revoker<Windows::UI::Xaml::IDispatcherTimer, &impl::abi_t<Windows::UI::Xaml::IDispatcherTimer>::remove_Tick>;
        Tick_revoker Tick(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto Tick(winrt::event_token const& token) const noexcept;
        auto Start() const;
        auto Stop() const;
    };
    template <> struct consume<Windows::UI::Xaml::IDispatcherTimer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDispatcherTimer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDispatcherTimerFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDispatcherTimerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDispatcherTimerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDragEventArgs
    {
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
        [[nodiscard]] auto Data() const;
        auto Data(Windows::ApplicationModel::DataTransfer::DataPackage const& value) const;
        auto GetPosition(Windows::UI::Xaml::UIElement const& relativeTo) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDragEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDragEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDragEventArgs2
    {
        [[nodiscard]] auto DataView() const;
        [[nodiscard]] auto DragUIOverride() const;
        [[nodiscard]] auto Modifiers() const;
        [[nodiscard]] auto AcceptedOperation() const;
        auto AcceptedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Xaml::IDragEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDragEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDragEventArgs3
    {
        [[nodiscard]] auto AllowedOperations() const;
    };
    template <> struct consume<Windows::UI::Xaml::IDragEventArgs3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDragEventArgs3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDragOperationDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::UI::Xaml::IDragOperationDeferral>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDragOperationDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDragStartingEventArgs
    {
        [[nodiscard]] auto Cancel() const;
        auto Cancel(bool value) const;
        [[nodiscard]] auto Data() const;
        [[nodiscard]] auto DragUI() const;
        auto GetDeferral() const;
        auto GetPosition(Windows::UI::Xaml::UIElement const& relativeTo) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDragStartingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDragStartingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDragStartingEventArgs2
    {
        [[nodiscard]] auto AllowedOperations() const;
        auto AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDragStartingEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDragStartingEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDragUI
    {
        auto SetContentFromBitmapImage(Windows::UI::Xaml::Media::Imaging::BitmapImage const& bitmapImage) const;
        auto SetContentFromBitmapImage(Windows::UI::Xaml::Media::Imaging::BitmapImage const& bitmapImage, Windows::Foundation::Point const& anchorPoint) const;
        auto SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const;
        auto SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap, Windows::Foundation::Point const& anchorPoint) const;
        auto SetContentFromDataPackage() const;
    };
    template <> struct consume<Windows::UI::Xaml::IDragUI>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDragUI<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDragUIOverride
    {
        [[nodiscard]] auto Caption() const;
        auto Caption(param::hstring const& value) const;
        [[nodiscard]] auto IsContentVisible() const;
        auto IsContentVisible(bool value) const;
        [[nodiscard]] auto IsCaptionVisible() const;
        auto IsCaptionVisible(bool value) const;
        [[nodiscard]] auto IsGlyphVisible() const;
        auto IsGlyphVisible(bool value) const;
        auto Clear() const;
        auto SetContentFromBitmapImage(Windows::UI::Xaml::Media::Imaging::BitmapImage const& bitmapImage) const;
        auto SetContentFromBitmapImage(Windows::UI::Xaml::Media::Imaging::BitmapImage const& bitmapImage, Windows::Foundation::Point const& anchorPoint) const;
        auto SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const;
        auto SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap, Windows::Foundation::Point const& anchorPoint) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDragUIOverride>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDragUIOverride<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDropCompletedEventArgs
    {
        [[nodiscard]] auto DropResult() const;
    };
    template <> struct consume<Windows::UI::Xaml::IDropCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDropCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDurationHelper
    {
    };
    template <> struct consume<Windows::UI::Xaml::IDurationHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDurationHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IDurationHelperStatics
    {
        [[nodiscard]] auto Automatic() const;
        [[nodiscard]] auto Forever() const;
        auto Compare(Windows::UI::Xaml::Duration const& duration1, Windows::UI::Xaml::Duration const& duration2) const;
        auto FromTimeSpan(Windows::Foundation::TimeSpan const& timeSpan) const;
        auto GetHasTimeSpan(Windows::UI::Xaml::Duration const& target) const;
        auto Add(Windows::UI::Xaml::Duration const& target, Windows::UI::Xaml::Duration const& duration) const;
        auto Equals(Windows::UI::Xaml::Duration const& target, Windows::UI::Xaml::Duration const& value) const;
        auto Subtract(Windows::UI::Xaml::Duration const& target, Windows::UI::Xaml::Duration const& duration) const;
    };
    template <> struct consume<Windows::UI::Xaml::IDurationHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IDurationHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IEffectiveViewportChangedEventArgs
    {
        [[nodiscard]] auto EffectiveViewport() const;
        [[nodiscard]] auto MaxViewport() const;
        [[nodiscard]] auto BringIntoViewDistanceX() const;
        [[nodiscard]] auto BringIntoViewDistanceY() const;
    };
    template <> struct consume<Windows::UI::Xaml::IEffectiveViewportChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IEffectiveViewportChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IElementFactory
    {
        auto GetElement(Windows::UI::Xaml::ElementFactoryGetArgs const& args) const;
        auto RecycleElement(Windows::UI::Xaml::ElementFactoryRecycleArgs const& args) const;
    };
    template <> struct consume<Windows::UI::Xaml::IElementFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IElementFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IElementFactoryGetArgs
    {
        [[nodiscard]] auto Data() const;
        auto Data(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] auto Parent() const;
        auto Parent(Windows::UI::Xaml::UIElement const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IElementFactoryGetArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IElementFactoryGetArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IElementFactoryGetArgsFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IElementFactoryGetArgsFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IElementFactoryGetArgsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IElementFactoryRecycleArgs
    {
        [[nodiscard]] auto Element() const;
        auto Element(Windows::UI::Xaml::UIElement const& value) const;
        [[nodiscard]] auto Parent() const;
        auto Parent(Windows::UI::Xaml::UIElement const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IElementFactoryRecycleArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IElementFactoryRecycleArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IElementFactoryRecycleArgsFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IElementFactoryRecycleArgsFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IElementFactoryRecycleArgsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IElementSoundPlayer
    {
    };
    template <> struct consume<Windows::UI::Xaml::IElementSoundPlayer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IElementSoundPlayer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IElementSoundPlayerStatics
    {
        [[nodiscard]] auto Volume() const;
        auto Volume(double value) const;
        [[nodiscard]] auto State() const;
        auto State(Windows::UI::Xaml::ElementSoundPlayerState const& value) const;
        auto Play(Windows::UI::Xaml::ElementSoundKind const& sound) const;
    };
    template <> struct consume<Windows::UI::Xaml::IElementSoundPlayerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IElementSoundPlayerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IElementSoundPlayerStatics2
    {
        [[nodiscard]] auto SpatialAudioMode() const;
        auto SpatialAudioMode(Windows::UI::Xaml::ElementSpatialAudioMode const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IElementSoundPlayerStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IElementSoundPlayerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IEventTrigger
    {
        [[nodiscard]] auto RoutedEvent() const;
        auto RoutedEvent(Windows::UI::Xaml::RoutedEvent const& value) const;
        [[nodiscard]] auto Actions() const;
    };
    template <> struct consume<Windows::UI::Xaml::IEventTrigger>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IEventTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IExceptionRoutedEventArgs
    {
        [[nodiscard]] auto ErrorMessage() const;
    };
    template <> struct consume<Windows::UI::Xaml::IExceptionRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IExceptionRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IExceptionRoutedEventArgsFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::IExceptionRoutedEventArgsFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IExceptionRoutedEventArgsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkElement
    {
        [[nodiscard]] auto Triggers() const;
        [[nodiscard]] auto Resources() const;
        auto Resources(Windows::UI::Xaml::ResourceDictionary const& value) const;
        [[nodiscard]] auto Tag() const;
        auto Tag(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] auto Language() const;
        auto Language(param::hstring const& value) const;
        [[nodiscard]] auto ActualWidth() const;
        [[nodiscard]] auto ActualHeight() const;
        [[nodiscard]] auto Width() const;
        auto Width(double value) const;
        [[nodiscard]] auto Height() const;
        auto Height(double value) const;
        [[nodiscard]] auto MinWidth() const;
        auto MinWidth(double value) const;
        [[nodiscard]] auto MaxWidth() const;
        auto MaxWidth(double value) const;
        [[nodiscard]] auto MinHeight() const;
        auto MinHeight(double value) const;
        [[nodiscard]] auto MaxHeight() const;
        auto MaxHeight(double value) const;
        [[nodiscard]] auto HorizontalAlignment() const;
        auto HorizontalAlignment(Windows::UI::Xaml::HorizontalAlignment const& value) const;
        [[nodiscard]] auto VerticalAlignment() const;
        auto VerticalAlignment(Windows::UI::Xaml::VerticalAlignment const& value) const;
        [[nodiscard]] auto Margin() const;
        auto Margin(Windows::UI::Xaml::Thickness const& value) const;
        [[nodiscard]] auto Name() const;
        auto Name(param::hstring const& value) const;
        [[nodiscard]] auto BaseUri() const;
        [[nodiscard]] auto DataContext() const;
        auto DataContext(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] auto Style() const;
        auto Style(Windows::UI::Xaml::Style const& value) const;
        [[nodiscard]] auto Parent() const;
        [[nodiscard]] auto FlowDirection() const;
        auto FlowDirection(Windows::UI::Xaml::FlowDirection const& value) const;
        auto Loaded(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using Loaded_revoker = impl::event_revoker<Windows::UI::Xaml::IFrameworkElement, &impl::abi_t<Windows::UI::Xaml::IFrameworkElement>::remove_Loaded>;
        Loaded_revoker Loaded(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        auto Loaded(winrt::event_token const& token) const noexcept;
        auto Unloaded(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using Unloaded_revoker = impl::event_revoker<Windows::UI::Xaml::IFrameworkElement, &impl::abi_t<Windows::UI::Xaml::IFrameworkElement>::remove_Unloaded>;
        Unloaded_revoker Unloaded(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        auto Unloaded(winrt::event_token const& token) const noexcept;
        auto SizeChanged(Windows::UI::Xaml::SizeChangedEventHandler const& handler) const;
        using SizeChanged_revoker = impl::event_revoker<Windows::UI::Xaml::IFrameworkElement, &impl::abi_t<Windows::UI::Xaml::IFrameworkElement>::remove_SizeChanged>;
        SizeChanged_revoker SizeChanged(auto_revoke_t, Windows::UI::Xaml::SizeChangedEventHandler const& handler) const;
        auto SizeChanged(winrt::event_token const& token) const noexcept;
        auto LayoutUpdated(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using LayoutUpdated_revoker = impl::event_revoker<Windows::UI::Xaml::IFrameworkElement, &impl::abi_t<Windows::UI::Xaml::IFrameworkElement>::remove_LayoutUpdated>;
        LayoutUpdated_revoker LayoutUpdated(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto LayoutUpdated(winrt::event_token const& token) const noexcept;
        auto FindName(param::hstring const& name) const;
        auto SetBinding(Windows::UI::Xaml::DependencyProperty const& dp, Windows::UI::Xaml::Data::BindingBase const& binding) const;
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkElement>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElement<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkElement2
    {
        [[nodiscard]] auto RequestedTheme() const;
        auto RequestedTheme(Windows::UI::Xaml::ElementTheme const& value) const;
        auto DataContextChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::DataContextChangedEventArgs> const& handler) const;
        using DataContextChanged_revoker = impl::event_revoker<Windows::UI::Xaml::IFrameworkElement2, &impl::abi_t<Windows::UI::Xaml::IFrameworkElement2>::remove_DataContextChanged>;
        DataContextChanged_revoker DataContextChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::DataContextChangedEventArgs> const& handler) const;
        auto DataContextChanged(winrt::event_token const& token) const noexcept;
        auto GetBindingExpression(Windows::UI::Xaml::DependencyProperty const& dp) const;
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkElement2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElement2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkElement3
    {
        auto Loading(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::Foundation::IInspectable> const& handler) const;
        using Loading_revoker = impl::event_revoker<Windows::UI::Xaml::IFrameworkElement3, &impl::abi_t<Windows::UI::Xaml::IFrameworkElement3>::remove_Loading>;
        Loading_revoker Loading(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::Foundation::IInspectable> const& handler) const;
        auto Loading(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkElement3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElement3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkElement4
    {
        [[nodiscard]] auto AllowFocusOnInteraction() const;
        auto AllowFocusOnInteraction(bool value) const;
        [[nodiscard]] auto FocusVisualMargin() const;
        auto FocusVisualMargin(Windows::UI::Xaml::Thickness const& value) const;
        [[nodiscard]] auto FocusVisualSecondaryThickness() const;
        auto FocusVisualSecondaryThickness(Windows::UI::Xaml::Thickness const& value) const;
        [[nodiscard]] auto FocusVisualPrimaryThickness() const;
        auto FocusVisualPrimaryThickness(Windows::UI::Xaml::Thickness const& value) const;
        [[nodiscard]] auto FocusVisualSecondaryBrush() const;
        auto FocusVisualSecondaryBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto FocusVisualPrimaryBrush() const;
        auto FocusVisualPrimaryBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto AllowFocusWhenDisabled() const;
        auto AllowFocusWhenDisabled(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkElement4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElement4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkElement6
    {
        [[nodiscard]] auto ActualTheme() const;
        auto ActualThemeChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::Foundation::IInspectable> const& handler) const;
        using ActualThemeChanged_revoker = impl::event_revoker<Windows::UI::Xaml::IFrameworkElement6, &impl::abi_t<Windows::UI::Xaml::IFrameworkElement6>::remove_ActualThemeChanged>;
        ActualThemeChanged_revoker ActualThemeChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::Foundation::IInspectable> const& handler) const;
        auto ActualThemeChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkElement6>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElement6<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkElement7
    {
        [[nodiscard]] auto IsLoaded() const;
        auto EffectiveViewportChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::EffectiveViewportChangedEventArgs> const& handler) const;
        using EffectiveViewportChanged_revoker = impl::event_revoker<Windows::UI::Xaml::IFrameworkElement7, &impl::abi_t<Windows::UI::Xaml::IFrameworkElement7>::remove_EffectiveViewportChanged>;
        EffectiveViewportChanged_revoker EffectiveViewportChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::EffectiveViewportChangedEventArgs> const& handler) const;
        auto EffectiveViewportChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkElement7>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElement7<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkElementFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkElementFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElementFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkElementOverrides
    {
        auto MeasureOverride(Windows::Foundation::Size const& availableSize) const;
        auto ArrangeOverride(Windows::Foundation::Size const& finalSize) const;
        auto OnApplyTemplate() const;
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkElementOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElementOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkElementOverrides2
    {
        auto GoToElementStateCore(param::hstring const& stateName, bool useTransitions) const;
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkElementOverrides2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElementOverrides2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkElementProtected7
    {
        auto InvalidateViewport() const;
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkElementProtected7>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElementProtected7<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkElementStatics
    {
        [[nodiscard]] auto TagProperty() const;
        [[nodiscard]] auto LanguageProperty() const;
        [[nodiscard]] auto ActualWidthProperty() const;
        [[nodiscard]] auto ActualHeightProperty() const;
        [[nodiscard]] auto WidthProperty() const;
        [[nodiscard]] auto HeightProperty() const;
        [[nodiscard]] auto MinWidthProperty() const;
        [[nodiscard]] auto MaxWidthProperty() const;
        [[nodiscard]] auto MinHeightProperty() const;
        [[nodiscard]] auto MaxHeightProperty() const;
        [[nodiscard]] auto HorizontalAlignmentProperty() const;
        [[nodiscard]] auto VerticalAlignmentProperty() const;
        [[nodiscard]] auto MarginProperty() const;
        [[nodiscard]] auto NameProperty() const;
        [[nodiscard]] auto DataContextProperty() const;
        [[nodiscard]] auto StyleProperty() const;
        [[nodiscard]] auto FlowDirectionProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkElementStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElementStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkElementStatics2
    {
        [[nodiscard]] auto RequestedThemeProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkElementStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElementStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkElementStatics4
    {
        [[nodiscard]] auto AllowFocusOnInteractionProperty() const;
        [[nodiscard]] auto FocusVisualMarginProperty() const;
        [[nodiscard]] auto FocusVisualSecondaryThicknessProperty() const;
        [[nodiscard]] auto FocusVisualPrimaryThicknessProperty() const;
        [[nodiscard]] auto FocusVisualSecondaryBrushProperty() const;
        [[nodiscard]] auto FocusVisualPrimaryBrushProperty() const;
        [[nodiscard]] auto AllowFocusWhenDisabledProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkElementStatics4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElementStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkElementStatics5
    {
        auto DeferTree(Windows::UI::Xaml::DependencyObject const& element) const;
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkElementStatics5>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElementStatics5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkElementStatics6
    {
        [[nodiscard]] auto ActualThemeProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkElementStatics6>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElementStatics6<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkTemplate
    {
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkTemplate>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkTemplate<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkTemplateFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkTemplateFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkTemplateFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkView
    {
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkView>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkView<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IFrameworkViewSource
    {
    };
    template <> struct consume<Windows::UI::Xaml::IFrameworkViewSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkViewSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IGridLengthHelper
    {
    };
    template <> struct consume<Windows::UI::Xaml::IGridLengthHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IGridLengthHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IGridLengthHelperStatics
    {
        [[nodiscard]] auto Auto() const;
        auto FromPixels(double pixels) const;
        auto FromValueAndType(double value, Windows::UI::Xaml::GridUnitType const& type) const;
        auto GetIsAbsolute(Windows::UI::Xaml::GridLength const& target) const;
        auto GetIsAuto(Windows::UI::Xaml::GridLength const& target) const;
        auto GetIsStar(Windows::UI::Xaml::GridLength const& target) const;
        auto Equals(Windows::UI::Xaml::GridLength const& target, Windows::UI::Xaml::GridLength const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IGridLengthHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IGridLengthHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IMediaFailedRoutedEventArgs
    {
        [[nodiscard]] auto ErrorTrace() const;
    };
    template <> struct consume<Windows::UI::Xaml::IMediaFailedRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IMediaFailedRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IPointHelper
    {
    };
    template <> struct consume<Windows::UI::Xaml::IPointHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IPointHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IPointHelperStatics
    {
        auto FromCoordinates(float x, float y) const;
    };
    template <> struct consume<Windows::UI::Xaml::IPointHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IPointHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IPropertyMetadata
    {
        [[nodiscard]] auto DefaultValue() const;
        [[nodiscard]] auto CreateDefaultValueCallback() const;
    };
    template <> struct consume<Windows::UI::Xaml::IPropertyMetadata>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IPropertyMetadata<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IPropertyMetadataFactory
    {
        auto CreateInstanceWithDefaultValue(Windows::Foundation::IInspectable const& defaultValue, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
        auto CreateInstanceWithDefaultValueAndCallback(Windows::Foundation::IInspectable const& defaultValue, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IPropertyMetadataFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IPropertyMetadataFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IPropertyMetadataStatics
    {
        auto Create(Windows::Foundation::IInspectable const& defaultValue) const;
        auto Create(Windows::Foundation::IInspectable const& defaultValue, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback) const;
        auto Create(Windows::UI::Xaml::CreateDefaultValueCallback const& createDefaultValueCallback) const;
        auto Create(Windows::UI::Xaml::CreateDefaultValueCallback const& createDefaultValueCallback, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback) const;
    };
    template <> struct consume<Windows::UI::Xaml::IPropertyMetadataStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IPropertyMetadataStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IPropertyPath
    {
        [[nodiscard]] auto Path() const;
    };
    template <> struct consume<Windows::UI::Xaml::IPropertyPath>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IPropertyPath<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IPropertyPathFactory
    {
        auto CreateInstance(param::hstring const& path) const;
    };
    template <> struct consume<Windows::UI::Xaml::IPropertyPathFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IPropertyPathFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IRectHelper
    {
    };
    template <> struct consume<Windows::UI::Xaml::IRectHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IRectHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IRectHelperStatics
    {
        [[nodiscard]] auto Empty() const;
        auto FromCoordinatesAndDimensions(float x, float y, float width, float height) const;
        auto FromPoints(Windows::Foundation::Point const& point1, Windows::Foundation::Point const& point2) const;
        auto FromLocationAndSize(Windows::Foundation::Point const& location, Windows::Foundation::Size const& size) const;
        auto GetIsEmpty(Windows::Foundation::Rect const& target) const;
        auto GetBottom(Windows::Foundation::Rect const& target) const;
        auto GetLeft(Windows::Foundation::Rect const& target) const;
        auto GetRight(Windows::Foundation::Rect const& target) const;
        auto GetTop(Windows::Foundation::Rect const& target) const;
        auto Contains(Windows::Foundation::Rect const& target, Windows::Foundation::Point const& point) const;
        auto Equals(Windows::Foundation::Rect const& target, Windows::Foundation::Rect const& value) const;
        auto Intersect(Windows::Foundation::Rect const& target, Windows::Foundation::Rect const& rect) const;
        auto Union(Windows::Foundation::Rect const& target, Windows::Foundation::Point const& point) const;
        auto Union(Windows::Foundation::Rect const& target, Windows::Foundation::Rect const& rect) const;
    };
    template <> struct consume<Windows::UI::Xaml::IRectHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IRectHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IResourceDictionary
    {
        [[nodiscard]] auto Source() const;
        auto Source(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto MergedDictionaries() const;
        [[nodiscard]] auto ThemeDictionaries() const;
    };
    template <> struct consume<Windows::UI::Xaml::IResourceDictionary>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IResourceDictionary<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IResourceDictionaryFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IResourceDictionaryFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IResourceDictionaryFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IRoutedEvent
    {
    };
    template <> struct consume<Windows::UI::Xaml::IRoutedEvent>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IRoutedEvent<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IRoutedEventArgs
    {
        [[nodiscard]] auto OriginalSource() const;
    };
    template <> struct consume<Windows::UI::Xaml::IRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IRoutedEventArgsFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IRoutedEventArgsFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IRoutedEventArgsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IScalarTransition
    {
        [[nodiscard]] auto Duration() const;
        auto Duration(Windows::Foundation::TimeSpan const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IScalarTransition>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IScalarTransition<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IScalarTransitionFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IScalarTransitionFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IScalarTransitionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_ISetter
    {
        [[nodiscard]] auto Property() const;
        auto Property(Windows::UI::Xaml::DependencyProperty const& value) const;
        [[nodiscard]] auto Value() const;
        auto Value(Windows::Foundation::IInspectable const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::ISetter>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_ISetter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_ISetter2
    {
        [[nodiscard]] auto Target() const;
        auto Target(Windows::UI::Xaml::TargetPropertyPath const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::ISetter2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_ISetter2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_ISetterBase
    {
        [[nodiscard]] auto IsSealed() const;
    };
    template <> struct consume<Windows::UI::Xaml::ISetterBase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_ISetterBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_ISetterBaseCollection
    {
        [[nodiscard]] auto IsSealed() const;
    };
    template <> struct consume<Windows::UI::Xaml::ISetterBaseCollection>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_ISetterBaseCollection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_ISetterBaseFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::ISetterBaseFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_ISetterBaseFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_ISetterFactory
    {
        auto CreateInstance(Windows::UI::Xaml::DependencyProperty const& targetProperty, Windows::Foundation::IInspectable const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::ISetterFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_ISetterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_ISizeChangedEventArgs
    {
        [[nodiscard]] auto PreviousSize() const;
        [[nodiscard]] auto NewSize() const;
    };
    template <> struct consume<Windows::UI::Xaml::ISizeChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_ISizeChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_ISizeHelper
    {
    };
    template <> struct consume<Windows::UI::Xaml::ISizeHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_ISizeHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_ISizeHelperStatics
    {
        [[nodiscard]] auto Empty() const;
        auto FromDimensions(float width, float height) const;
        auto GetIsEmpty(Windows::Foundation::Size const& target) const;
        auto Equals(Windows::Foundation::Size const& target, Windows::Foundation::Size const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::ISizeHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_ISizeHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IStateTrigger
    {
        [[nodiscard]] auto IsActive() const;
        auto IsActive(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IStateTrigger>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IStateTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IStateTriggerBase
    {
    };
    template <> struct consume<Windows::UI::Xaml::IStateTriggerBase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IStateTriggerBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IStateTriggerBaseFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IStateTriggerBaseFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IStateTriggerBaseFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IStateTriggerBaseProtected
    {
        auto SetActive(bool IsActive) const;
    };
    template <> struct consume<Windows::UI::Xaml::IStateTriggerBaseProtected>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IStateTriggerBaseProtected<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IStateTriggerStatics
    {
        [[nodiscard]] auto IsActiveProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::IStateTriggerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IStateTriggerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IStyle
    {
        [[nodiscard]] auto IsSealed() const;
        [[nodiscard]] auto Setters() const;
        [[nodiscard]] auto TargetType() const;
        auto TargetType(Windows::UI::Xaml::Interop::TypeName const& value) const;
        [[nodiscard]] auto BasedOn() const;
        auto BasedOn(Windows::UI::Xaml::Style const& value) const;
        auto Seal() const;
    };
    template <> struct consume<Windows::UI::Xaml::IStyle>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IStyle<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IStyleFactory
    {
        auto CreateInstance(Windows::UI::Xaml::Interop::TypeName const& targetType) const;
    };
    template <> struct consume<Windows::UI::Xaml::IStyleFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IStyleFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_ITargetPropertyPath
    {
        [[nodiscard]] auto Path() const;
        auto Path(Windows::UI::Xaml::PropertyPath const& value) const;
        [[nodiscard]] auto Target() const;
        auto Target(Windows::Foundation::IInspectable const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::ITargetPropertyPath>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_ITargetPropertyPath<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_ITargetPropertyPathFactory
    {
        auto CreateInstance(Windows::UI::Xaml::DependencyProperty const& targetProperty) const;
    };
    template <> struct consume<Windows::UI::Xaml::ITargetPropertyPathFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_ITargetPropertyPathFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IThicknessHelper
    {
    };
    template <> struct consume<Windows::UI::Xaml::IThicknessHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IThicknessHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IThicknessHelperStatics
    {
        auto FromLengths(double left, double top, double right, double bottom) const;
        auto FromUniformLength(double uniformLength) const;
    };
    template <> struct consume<Windows::UI::Xaml::IThicknessHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IThicknessHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_ITriggerAction
    {
    };
    template <> struct consume<Windows::UI::Xaml::ITriggerAction>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_ITriggerAction<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_ITriggerActionFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::ITriggerActionFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_ITriggerActionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_ITriggerBase
    {
    };
    template <> struct consume<Windows::UI::Xaml::ITriggerBase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_ITriggerBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_ITriggerBaseFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::ITriggerBaseFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_ITriggerBaseFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElement
    {
        [[nodiscard]] auto DesiredSize() const;
        [[nodiscard]] auto AllowDrop() const;
        auto AllowDrop(bool value) const;
        [[nodiscard]] auto Opacity() const;
        auto Opacity(double value) const;
        [[nodiscard]] auto Clip() const;
        auto Clip(Windows::UI::Xaml::Media::RectangleGeometry const& value) const;
        [[nodiscard]] auto RenderTransform() const;
        auto RenderTransform(Windows::UI::Xaml::Media::Transform const& value) const;
        [[nodiscard]] auto Projection() const;
        auto Projection(Windows::UI::Xaml::Media::Projection const& value) const;
        [[nodiscard]] auto RenderTransformOrigin() const;
        auto RenderTransformOrigin(Windows::Foundation::Point const& value) const;
        [[nodiscard]] auto IsHitTestVisible() const;
        auto IsHitTestVisible(bool value) const;
        [[nodiscard]] auto Visibility() const;
        auto Visibility(Windows::UI::Xaml::Visibility const& value) const;
        [[nodiscard]] auto RenderSize() const;
        [[nodiscard]] auto UseLayoutRounding() const;
        auto UseLayoutRounding(bool value) const;
        [[nodiscard]] auto Transitions() const;
        auto Transitions(Windows::UI::Xaml::Media::Animation::TransitionCollection const& value) const;
        [[nodiscard]] auto CacheMode() const;
        auto CacheMode(Windows::UI::Xaml::Media::CacheMode const& value) const;
        [[nodiscard]] auto IsTapEnabled() const;
        auto IsTapEnabled(bool value) const;
        [[nodiscard]] auto IsDoubleTapEnabled() const;
        auto IsDoubleTapEnabled(bool value) const;
        [[nodiscard]] auto IsRightTapEnabled() const;
        auto IsRightTapEnabled(bool value) const;
        [[nodiscard]] auto IsHoldingEnabled() const;
        auto IsHoldingEnabled(bool value) const;
        [[nodiscard]] auto ManipulationMode() const;
        auto ManipulationMode(Windows::UI::Xaml::Input::ManipulationModes const& value) const;
        [[nodiscard]] auto PointerCaptures() const;
        auto KeyUp(Windows::UI::Xaml::Input::KeyEventHandler const& handler) const;
        using KeyUp_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_KeyUp>;
        KeyUp_revoker KeyUp(auto_revoke_t, Windows::UI::Xaml::Input::KeyEventHandler const& handler) const;
        auto KeyUp(winrt::event_token const& token) const noexcept;
        auto KeyDown(Windows::UI::Xaml::Input::KeyEventHandler const& handler) const;
        using KeyDown_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_KeyDown>;
        KeyDown_revoker KeyDown(auto_revoke_t, Windows::UI::Xaml::Input::KeyEventHandler const& handler) const;
        auto KeyDown(winrt::event_token const& token) const noexcept;
        auto GotFocus(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using GotFocus_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_GotFocus>;
        GotFocus_revoker GotFocus(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        auto GotFocus(winrt::event_token const& token) const noexcept;
        auto LostFocus(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using LostFocus_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_LostFocus>;
        LostFocus_revoker LostFocus(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        auto LostFocus(winrt::event_token const& token) const noexcept;
        auto DragEnter(Windows::UI::Xaml::DragEventHandler const& handler) const;
        using DragEnter_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_DragEnter>;
        DragEnter_revoker DragEnter(auto_revoke_t, Windows::UI::Xaml::DragEventHandler const& handler) const;
        auto DragEnter(winrt::event_token const& token) const noexcept;
        auto DragLeave(Windows::UI::Xaml::DragEventHandler const& handler) const;
        using DragLeave_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_DragLeave>;
        DragLeave_revoker DragLeave(auto_revoke_t, Windows::UI::Xaml::DragEventHandler const& handler) const;
        auto DragLeave(winrt::event_token const& token) const noexcept;
        auto DragOver(Windows::UI::Xaml::DragEventHandler const& handler) const;
        using DragOver_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_DragOver>;
        DragOver_revoker DragOver(auto_revoke_t, Windows::UI::Xaml::DragEventHandler const& handler) const;
        auto DragOver(winrt::event_token const& token) const noexcept;
        auto Drop(Windows::UI::Xaml::DragEventHandler const& handler) const;
        using Drop_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_Drop>;
        Drop_revoker Drop(auto_revoke_t, Windows::UI::Xaml::DragEventHandler const& handler) const;
        auto Drop(winrt::event_token const& token) const noexcept;
        auto PointerPressed(Windows::UI::Xaml::Input::PointerEventHandler const& handler) const;
        using PointerPressed_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_PointerPressed>;
        PointerPressed_revoker PointerPressed(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& handler) const;
        auto PointerPressed(winrt::event_token const& token) const noexcept;
        auto PointerMoved(Windows::UI::Xaml::Input::PointerEventHandler const& handler) const;
        using PointerMoved_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_PointerMoved>;
        PointerMoved_revoker PointerMoved(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& handler) const;
        auto PointerMoved(winrt::event_token const& token) const noexcept;
        auto PointerReleased(Windows::UI::Xaml::Input::PointerEventHandler const& handler) const;
        using PointerReleased_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_PointerReleased>;
        PointerReleased_revoker PointerReleased(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& handler) const;
        auto PointerReleased(winrt::event_token const& token) const noexcept;
        auto PointerEntered(Windows::UI::Xaml::Input::PointerEventHandler const& handler) const;
        using PointerEntered_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_PointerEntered>;
        PointerEntered_revoker PointerEntered(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& handler) const;
        auto PointerEntered(winrt::event_token const& token) const noexcept;
        auto PointerExited(Windows::UI::Xaml::Input::PointerEventHandler const& handler) const;
        using PointerExited_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_PointerExited>;
        PointerExited_revoker PointerExited(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& handler) const;
        auto PointerExited(winrt::event_token const& token) const noexcept;
        auto PointerCaptureLost(Windows::UI::Xaml::Input::PointerEventHandler const& handler) const;
        using PointerCaptureLost_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_PointerCaptureLost>;
        PointerCaptureLost_revoker PointerCaptureLost(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& handler) const;
        auto PointerCaptureLost(winrt::event_token const& token) const noexcept;
        auto PointerCanceled(Windows::UI::Xaml::Input::PointerEventHandler const& handler) const;
        using PointerCanceled_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_PointerCanceled>;
        PointerCanceled_revoker PointerCanceled(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& handler) const;
        auto PointerCanceled(winrt::event_token const& token) const noexcept;
        auto PointerWheelChanged(Windows::UI::Xaml::Input::PointerEventHandler const& handler) const;
        using PointerWheelChanged_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_PointerWheelChanged>;
        PointerWheelChanged_revoker PointerWheelChanged(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& handler) const;
        auto PointerWheelChanged(winrt::event_token const& token) const noexcept;
        auto Tapped(Windows::UI::Xaml::Input::TappedEventHandler const& handler) const;
        using Tapped_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_Tapped>;
        Tapped_revoker Tapped(auto_revoke_t, Windows::UI::Xaml::Input::TappedEventHandler const& handler) const;
        auto Tapped(winrt::event_token const& token) const noexcept;
        auto DoubleTapped(Windows::UI::Xaml::Input::DoubleTappedEventHandler const& handler) const;
        using DoubleTapped_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_DoubleTapped>;
        DoubleTapped_revoker DoubleTapped(auto_revoke_t, Windows::UI::Xaml::Input::DoubleTappedEventHandler const& handler) const;
        auto DoubleTapped(winrt::event_token const& token) const noexcept;
        auto Holding(Windows::UI::Xaml::Input::HoldingEventHandler const& handler) const;
        using Holding_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_Holding>;
        Holding_revoker Holding(auto_revoke_t, Windows::UI::Xaml::Input::HoldingEventHandler const& handler) const;
        auto Holding(winrt::event_token const& token) const noexcept;
        auto RightTapped(Windows::UI::Xaml::Input::RightTappedEventHandler const& handler) const;
        using RightTapped_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_RightTapped>;
        RightTapped_revoker RightTapped(auto_revoke_t, Windows::UI::Xaml::Input::RightTappedEventHandler const& handler) const;
        auto RightTapped(winrt::event_token const& token) const noexcept;
        auto ManipulationStarting(Windows::UI::Xaml::Input::ManipulationStartingEventHandler const& handler) const;
        using ManipulationStarting_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_ManipulationStarting>;
        ManipulationStarting_revoker ManipulationStarting(auto_revoke_t, Windows::UI::Xaml::Input::ManipulationStartingEventHandler const& handler) const;
        auto ManipulationStarting(winrt::event_token const& token) const noexcept;
        auto ManipulationInertiaStarting(Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler const& handler) const;
        using ManipulationInertiaStarting_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_ManipulationInertiaStarting>;
        ManipulationInertiaStarting_revoker ManipulationInertiaStarting(auto_revoke_t, Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler const& handler) const;
        auto ManipulationInertiaStarting(winrt::event_token const& token) const noexcept;
        auto ManipulationStarted(Windows::UI::Xaml::Input::ManipulationStartedEventHandler const& handler) const;
        using ManipulationStarted_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_ManipulationStarted>;
        ManipulationStarted_revoker ManipulationStarted(auto_revoke_t, Windows::UI::Xaml::Input::ManipulationStartedEventHandler const& handler) const;
        auto ManipulationStarted(winrt::event_token const& token) const noexcept;
        auto ManipulationDelta(Windows::UI::Xaml::Input::ManipulationDeltaEventHandler const& handler) const;
        using ManipulationDelta_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_ManipulationDelta>;
        ManipulationDelta_revoker ManipulationDelta(auto_revoke_t, Windows::UI::Xaml::Input::ManipulationDeltaEventHandler const& handler) const;
        auto ManipulationDelta(winrt::event_token const& token) const noexcept;
        auto ManipulationCompleted(Windows::UI::Xaml::Input::ManipulationCompletedEventHandler const& handler) const;
        using ManipulationCompleted_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement, &impl::abi_t<Windows::UI::Xaml::IUIElement>::remove_ManipulationCompleted>;
        ManipulationCompleted_revoker ManipulationCompleted(auto_revoke_t, Windows::UI::Xaml::Input::ManipulationCompletedEventHandler const& handler) const;
        auto ManipulationCompleted(winrt::event_token const& token) const noexcept;
        auto Measure(Windows::Foundation::Size const& availableSize) const;
        auto Arrange(Windows::Foundation::Rect const& finalRect) const;
        auto CapturePointer(Windows::UI::Xaml::Input::Pointer const& value) const;
        auto ReleasePointerCapture(Windows::UI::Xaml::Input::Pointer const& value) const;
        auto ReleasePointerCaptures() const;
        auto AddHandler(Windows::UI::Xaml::RoutedEvent const& routedEvent, Windows::Foundation::IInspectable const& handler, bool handledEventsToo) const;
        auto RemoveHandler(Windows::UI::Xaml::RoutedEvent const& routedEvent, Windows::Foundation::IInspectable const& handler) const;
        auto TransformToVisual(Windows::UI::Xaml::UIElement const& visual) const;
        auto InvalidateMeasure() const;
        auto InvalidateArrange() const;
        auto UpdateLayout() const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElement>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElement<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElement10
    {
        [[nodiscard]] auto ActualOffset() const;
        [[nodiscard]] auto ActualSize() const;
        [[nodiscard]] auto XamlRoot() const;
        auto XamlRoot(Windows::UI::Xaml::XamlRoot const& value) const;
        [[nodiscard]] auto UIContext() const;
        [[nodiscard]] auto Shadow() const;
        auto Shadow(Windows::UI::Xaml::Media::Shadow const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElement10>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElement10<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElement2
    {
        [[nodiscard]] auto CompositeMode() const;
        auto CompositeMode(Windows::UI::Xaml::Media::ElementCompositeMode const& value) const;
        auto CancelDirectManipulations() const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElement2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElement2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElement3
    {
        [[nodiscard]] auto Transform3D() const;
        auto Transform3D(Windows::UI::Xaml::Media::Media3D::Transform3D const& value) const;
        [[nodiscard]] auto CanDrag() const;
        auto CanDrag(bool value) const;
        auto DragStarting(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DragStartingEventArgs> const& handler) const;
        using DragStarting_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement3, &impl::abi_t<Windows::UI::Xaml::IUIElement3>::remove_DragStarting>;
        DragStarting_revoker DragStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DragStartingEventArgs> const& handler) const;
        auto DragStarting(winrt::event_token const& token) const noexcept;
        auto DropCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DropCompletedEventArgs> const& handler) const;
        using DropCompleted_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement3, &impl::abi_t<Windows::UI::Xaml::IUIElement3>::remove_DropCompleted>;
        DropCompleted_revoker DropCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DropCompletedEventArgs> const& handler) const;
        auto DropCompleted(winrt::event_token const& token) const noexcept;
        auto StartDragAsync(Windows::UI::Input::PointerPoint const& pointerPoint) const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElement3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElement3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElement4
    {
        [[nodiscard]] auto ContextFlyout() const;
        auto ContextFlyout(Windows::UI::Xaml::Controls::Primitives::FlyoutBase const& value) const;
        [[nodiscard]] auto ExitDisplayModeOnAccessKeyInvoked() const;
        auto ExitDisplayModeOnAccessKeyInvoked(bool value) const;
        [[nodiscard]] auto IsAccessKeyScope() const;
        auto IsAccessKeyScope(bool value) const;
        [[nodiscard]] auto AccessKeyScopeOwner() const;
        auto AccessKeyScopeOwner(Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] auto AccessKey() const;
        auto AccessKey(param::hstring const& value) const;
        auto ContextRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::ContextRequestedEventArgs> const& handler) const;
        using ContextRequested_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement4, &impl::abi_t<Windows::UI::Xaml::IUIElement4>::remove_ContextRequested>;
        ContextRequested_revoker ContextRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::ContextRequestedEventArgs> const& handler) const;
        auto ContextRequested(winrt::event_token const& token) const noexcept;
        auto ContextCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::RoutedEventArgs> const& handler) const;
        using ContextCanceled_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement4, &impl::abi_t<Windows::UI::Xaml::IUIElement4>::remove_ContextCanceled>;
        ContextCanceled_revoker ContextCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::RoutedEventArgs> const& handler) const;
        auto ContextCanceled(winrt::event_token const& token) const noexcept;
        auto AccessKeyDisplayRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> const& handler) const;
        using AccessKeyDisplayRequested_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement4, &impl::abi_t<Windows::UI::Xaml::IUIElement4>::remove_AccessKeyDisplayRequested>;
        AccessKeyDisplayRequested_revoker AccessKeyDisplayRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> const& handler) const;
        auto AccessKeyDisplayRequested(winrt::event_token const& token) const noexcept;
        auto AccessKeyDisplayDismissed(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> const& handler) const;
        using AccessKeyDisplayDismissed_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement4, &impl::abi_t<Windows::UI::Xaml::IUIElement4>::remove_AccessKeyDisplayDismissed>;
        AccessKeyDisplayDismissed_revoker AccessKeyDisplayDismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> const& handler) const;
        auto AccessKeyDisplayDismissed(winrt::event_token const& token) const noexcept;
        auto AccessKeyInvoked(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> const& handler) const;
        using AccessKeyInvoked_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement4, &impl::abi_t<Windows::UI::Xaml::IUIElement4>::remove_AccessKeyInvoked>;
        AccessKeyInvoked_revoker AccessKeyInvoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> const& handler) const;
        auto AccessKeyInvoked(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElement4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElement4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElement5
    {
        [[nodiscard]] auto Lights() const;
        [[nodiscard]] auto KeyTipPlacementMode() const;
        auto KeyTipPlacementMode(Windows::UI::Xaml::Input::KeyTipPlacementMode const& value) const;
        [[nodiscard]] auto KeyTipHorizontalOffset() const;
        auto KeyTipHorizontalOffset(double value) const;
        [[nodiscard]] auto KeyTipVerticalOffset() const;
        auto KeyTipVerticalOffset(double value) const;
        [[nodiscard]] auto XYFocusKeyboardNavigation() const;
        auto XYFocusKeyboardNavigation(Windows::UI::Xaml::Input::XYFocusKeyboardNavigationMode const& value) const;
        [[nodiscard]] auto XYFocusUpNavigationStrategy() const;
        auto XYFocusUpNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const;
        [[nodiscard]] auto XYFocusDownNavigationStrategy() const;
        auto XYFocusDownNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const;
        [[nodiscard]] auto XYFocusLeftNavigationStrategy() const;
        auto XYFocusLeftNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const;
        [[nodiscard]] auto XYFocusRightNavigationStrategy() const;
        auto XYFocusRightNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const;
        [[nodiscard]] auto HighContrastAdjustment() const;
        auto HighContrastAdjustment(Windows::UI::Xaml::ElementHighContrastAdjustment const& value) const;
        [[nodiscard]] auto TabFocusNavigation() const;
        auto TabFocusNavigation(Windows::UI::Xaml::Input::KeyboardNavigationMode const& value) const;
        auto GettingFocus(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::GettingFocusEventArgs> const& handler) const;
        using GettingFocus_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement5, &impl::abi_t<Windows::UI::Xaml::IUIElement5>::remove_GettingFocus>;
        GettingFocus_revoker GettingFocus(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::GettingFocusEventArgs> const& handler) const;
        auto GettingFocus(winrt::event_token const& token) const noexcept;
        auto LosingFocus(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::LosingFocusEventArgs> const& handler) const;
        using LosingFocus_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement5, &impl::abi_t<Windows::UI::Xaml::IUIElement5>::remove_LosingFocus>;
        LosingFocus_revoker LosingFocus(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::LosingFocusEventArgs> const& handler) const;
        auto LosingFocus(winrt::event_token const& token) const noexcept;
        auto NoFocusCandidateFound(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs> const& handler) const;
        using NoFocusCandidateFound_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement5, &impl::abi_t<Windows::UI::Xaml::IUIElement5>::remove_NoFocusCandidateFound>;
        NoFocusCandidateFound_revoker NoFocusCandidateFound(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs> const& handler) const;
        auto NoFocusCandidateFound(winrt::event_token const& token) const noexcept;
        auto StartBringIntoView() const;
        auto StartBringIntoView(Windows::UI::Xaml::BringIntoViewOptions const& options) const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElement5>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElement5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElement7
    {
        [[nodiscard]] auto KeyboardAccelerators() const;
        auto CharacterReceived(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs> const& handler) const;
        using CharacterReceived_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement7, &impl::abi_t<Windows::UI::Xaml::IUIElement7>::remove_CharacterReceived>;
        CharacterReceived_revoker CharacterReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs> const& handler) const;
        auto CharacterReceived(winrt::event_token const& token) const noexcept;
        auto ProcessKeyboardAccelerators(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs> const& handler) const;
        using ProcessKeyboardAccelerators_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement7, &impl::abi_t<Windows::UI::Xaml::IUIElement7>::remove_ProcessKeyboardAccelerators>;
        ProcessKeyboardAccelerators_revoker ProcessKeyboardAccelerators(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs> const& handler) const;
        auto ProcessKeyboardAccelerators(winrt::event_token const& token) const noexcept;
        auto PreviewKeyDown(Windows::UI::Xaml::Input::KeyEventHandler const& handler) const;
        using PreviewKeyDown_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement7, &impl::abi_t<Windows::UI::Xaml::IUIElement7>::remove_PreviewKeyDown>;
        PreviewKeyDown_revoker PreviewKeyDown(auto_revoke_t, Windows::UI::Xaml::Input::KeyEventHandler const& handler) const;
        auto PreviewKeyDown(winrt::event_token const& token) const noexcept;
        auto PreviewKeyUp(Windows::UI::Xaml::Input::KeyEventHandler const& handler) const;
        using PreviewKeyUp_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement7, &impl::abi_t<Windows::UI::Xaml::IUIElement7>::remove_PreviewKeyUp>;
        PreviewKeyUp_revoker PreviewKeyUp(auto_revoke_t, Windows::UI::Xaml::Input::KeyEventHandler const& handler) const;
        auto PreviewKeyUp(winrt::event_token const& token) const noexcept;
        auto TryInvokeKeyboardAccelerator(Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args) const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElement7>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElement7<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElement8
    {
        [[nodiscard]] auto KeyTipTarget() const;
        auto KeyTipTarget(Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] auto KeyboardAcceleratorPlacementTarget() const;
        auto KeyboardAcceleratorPlacementTarget(Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] auto KeyboardAcceleratorPlacementMode() const;
        auto KeyboardAcceleratorPlacementMode(Windows::UI::Xaml::Input::KeyboardAcceleratorPlacementMode const& value) const;
        auto BringIntoViewRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::BringIntoViewRequestedEventArgs> const& handler) const;
        using BringIntoViewRequested_revoker = impl::event_revoker<Windows::UI::Xaml::IUIElement8, &impl::abi_t<Windows::UI::Xaml::IUIElement8>::remove_BringIntoViewRequested>;
        BringIntoViewRequested_revoker BringIntoViewRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::BringIntoViewRequestedEventArgs> const& handler) const;
        auto BringIntoViewRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElement8>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElement8<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElement9
    {
        [[nodiscard]] auto CanBeScrollAnchor() const;
        auto CanBeScrollAnchor(bool value) const;
        [[nodiscard]] auto OpacityTransition() const;
        auto OpacityTransition(Windows::UI::Xaml::ScalarTransition const& value) const;
        [[nodiscard]] auto Translation() const;
        auto Translation(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto TranslationTransition() const;
        auto TranslationTransition(Windows::UI::Xaml::Vector3Transition const& value) const;
        [[nodiscard]] auto Rotation() const;
        auto Rotation(float value) const;
        [[nodiscard]] auto RotationTransition() const;
        auto RotationTransition(Windows::UI::Xaml::ScalarTransition const& value) const;
        [[nodiscard]] auto Scale() const;
        auto Scale(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto ScaleTransition() const;
        auto ScaleTransition(Windows::UI::Xaml::Vector3Transition const& value) const;
        [[nodiscard]] auto TransformMatrix() const;
        auto TransformMatrix(Windows::Foundation::Numerics::float4x4 const& value) const;
        [[nodiscard]] auto CenterPoint() const;
        auto CenterPoint(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto RotationAxis() const;
        auto RotationAxis(Windows::Foundation::Numerics::float3 const& value) const;
        auto StartAnimation(Windows::UI::Composition::ICompositionAnimationBase const& animation) const;
        auto StopAnimation(Windows::UI::Composition::ICompositionAnimationBase const& animation) const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElement9>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElement9<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElementFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::IUIElementFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElementFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElementOverrides
    {
        auto OnCreateAutomationPeer() const;
        auto OnDisconnectVisualChildren() const;
        auto FindSubElementsForTouchTargeting(Windows::Foundation::Point const& point, Windows::Foundation::Rect const& boundingRect) const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElementOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElementOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElementOverrides7
    {
        auto GetChildrenInTabFocusOrder() const;
        auto OnProcessKeyboardAccelerators(Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args) const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElementOverrides7>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElementOverrides7<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElementOverrides8
    {
        auto OnKeyboardAcceleratorInvoked(Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs const& args) const;
        auto OnBringIntoViewRequested(Windows::UI::Xaml::BringIntoViewRequestedEventArgs const& e) const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElementOverrides8>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElementOverrides8<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElementOverrides9
    {
        auto PopulatePropertyInfoOverride(param::hstring const& propertyName, Windows::UI::Composition::AnimationPropertyInfo const& animationPropertyInfo) const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElementOverrides9>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElementOverrides9<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElementStatics
    {
        [[nodiscard]] auto KeyDownEvent() const;
        [[nodiscard]] auto KeyUpEvent() const;
        [[nodiscard]] auto PointerEnteredEvent() const;
        [[nodiscard]] auto PointerPressedEvent() const;
        [[nodiscard]] auto PointerMovedEvent() const;
        [[nodiscard]] auto PointerReleasedEvent() const;
        [[nodiscard]] auto PointerExitedEvent() const;
        [[nodiscard]] auto PointerCaptureLostEvent() const;
        [[nodiscard]] auto PointerCanceledEvent() const;
        [[nodiscard]] auto PointerWheelChangedEvent() const;
        [[nodiscard]] auto TappedEvent() const;
        [[nodiscard]] auto DoubleTappedEvent() const;
        [[nodiscard]] auto HoldingEvent() const;
        [[nodiscard]] auto RightTappedEvent() const;
        [[nodiscard]] auto ManipulationStartingEvent() const;
        [[nodiscard]] auto ManipulationInertiaStartingEvent() const;
        [[nodiscard]] auto ManipulationStartedEvent() const;
        [[nodiscard]] auto ManipulationDeltaEvent() const;
        [[nodiscard]] auto ManipulationCompletedEvent() const;
        [[nodiscard]] auto DragEnterEvent() const;
        [[nodiscard]] auto DragLeaveEvent() const;
        [[nodiscard]] auto DragOverEvent() const;
        [[nodiscard]] auto DropEvent() const;
        [[nodiscard]] auto AllowDropProperty() const;
        [[nodiscard]] auto OpacityProperty() const;
        [[nodiscard]] auto ClipProperty() const;
        [[nodiscard]] auto RenderTransformProperty() const;
        [[nodiscard]] auto ProjectionProperty() const;
        [[nodiscard]] auto RenderTransformOriginProperty() const;
        [[nodiscard]] auto IsHitTestVisibleProperty() const;
        [[nodiscard]] auto VisibilityProperty() const;
        [[nodiscard]] auto UseLayoutRoundingProperty() const;
        [[nodiscard]] auto TransitionsProperty() const;
        [[nodiscard]] auto CacheModeProperty() const;
        [[nodiscard]] auto IsTapEnabledProperty() const;
        [[nodiscard]] auto IsDoubleTapEnabledProperty() const;
        [[nodiscard]] auto IsRightTapEnabledProperty() const;
        [[nodiscard]] auto IsHoldingEnabledProperty() const;
        [[nodiscard]] auto ManipulationModeProperty() const;
        [[nodiscard]] auto PointerCapturesProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElementStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElementStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElementStatics10
    {
        [[nodiscard]] auto ShadowProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElementStatics10>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElementStatics10<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElementStatics2
    {
        [[nodiscard]] auto CompositeModeProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElementStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElementStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElementStatics3
    {
        [[nodiscard]] auto Transform3DProperty() const;
        [[nodiscard]] auto CanDragProperty() const;
        auto TryStartDirectManipulation(Windows::UI::Xaml::Input::Pointer const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElementStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElementStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElementStatics4
    {
        [[nodiscard]] auto ContextFlyoutProperty() const;
        [[nodiscard]] auto ExitDisplayModeOnAccessKeyInvokedProperty() const;
        [[nodiscard]] auto IsAccessKeyScopeProperty() const;
        [[nodiscard]] auto AccessKeyScopeOwnerProperty() const;
        [[nodiscard]] auto AccessKeyProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElementStatics4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElementStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElementStatics5
    {
        [[nodiscard]] auto LightsProperty() const;
        [[nodiscard]] auto KeyTipPlacementModeProperty() const;
        [[nodiscard]] auto KeyTipHorizontalOffsetProperty() const;
        [[nodiscard]] auto KeyTipVerticalOffsetProperty() const;
        [[nodiscard]] auto XYFocusKeyboardNavigationProperty() const;
        [[nodiscard]] auto XYFocusUpNavigationStrategyProperty() const;
        [[nodiscard]] auto XYFocusDownNavigationStrategyProperty() const;
        [[nodiscard]] auto XYFocusLeftNavigationStrategyProperty() const;
        [[nodiscard]] auto XYFocusRightNavigationStrategyProperty() const;
        [[nodiscard]] auto HighContrastAdjustmentProperty() const;
        [[nodiscard]] auto TabFocusNavigationProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElementStatics5>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElementStatics5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElementStatics6
    {
        [[nodiscard]] auto GettingFocusEvent() const;
        [[nodiscard]] auto LosingFocusEvent() const;
        [[nodiscard]] auto NoFocusCandidateFoundEvent() const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElementStatics6>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElementStatics6<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElementStatics7
    {
        [[nodiscard]] auto PreviewKeyDownEvent() const;
        [[nodiscard]] auto CharacterReceivedEvent() const;
        [[nodiscard]] auto PreviewKeyUpEvent() const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElementStatics7>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElementStatics7<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElementStatics8
    {
        [[nodiscard]] auto BringIntoViewRequestedEvent() const;
        [[nodiscard]] auto ContextRequestedEvent() const;
        [[nodiscard]] auto KeyTipTargetProperty() const;
        [[nodiscard]] auto KeyboardAcceleratorPlacementTargetProperty() const;
        [[nodiscard]] auto KeyboardAcceleratorPlacementModeProperty() const;
        auto RegisterAsScrollPort(Windows::UI::Xaml::UIElement const& element) const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElementStatics8>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElementStatics8<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElementStatics9
    {
        [[nodiscard]] auto CanBeScrollAnchorProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElementStatics9>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElementStatics9<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElementWeakCollection
    {
    };
    template <> struct consume<Windows::UI::Xaml::IUIElementWeakCollection>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElementWeakCollection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUIElementWeakCollectionFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IUIElementWeakCollectionFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUIElementWeakCollectionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IUnhandledExceptionEventArgs
    {
        [[nodiscard]] auto Exception() const;
        [[nodiscard]] auto Message() const;
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IUnhandledExceptionEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IUnhandledExceptionEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IVector3Transition
    {
        [[nodiscard]] auto Duration() const;
        auto Duration(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto Components() const;
        auto Components(Windows::UI::Xaml::Vector3TransitionComponents const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IVector3Transition>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IVector3Transition<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IVector3TransitionFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IVector3TransitionFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IVector3TransitionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IVisualState
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto Storyboard() const;
        auto Storyboard(Windows::UI::Xaml::Media::Animation::Storyboard const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IVisualState>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IVisualState<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IVisualState2
    {
        [[nodiscard]] auto Setters() const;
        [[nodiscard]] auto StateTriggers() const;
    };
    template <> struct consume<Windows::UI::Xaml::IVisualState2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IVisualState2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IVisualStateChangedEventArgs
    {
        [[nodiscard]] auto OldState() const;
        auto OldState(Windows::UI::Xaml::VisualState const& value) const;
        [[nodiscard]] auto NewState() const;
        auto NewState(Windows::UI::Xaml::VisualState const& value) const;
        [[nodiscard]] auto Control() const;
        auto Control(Windows::UI::Xaml::Controls::Control const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IVisualStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IVisualStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IVisualStateGroup
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto Transitions() const;
        [[nodiscard]] auto States() const;
        [[nodiscard]] auto CurrentState() const;
        auto CurrentStateChanged(Windows::UI::Xaml::VisualStateChangedEventHandler const& handler) const;
        using CurrentStateChanged_revoker = impl::event_revoker<Windows::UI::Xaml::IVisualStateGroup, &impl::abi_t<Windows::UI::Xaml::IVisualStateGroup>::remove_CurrentStateChanged>;
        CurrentStateChanged_revoker CurrentStateChanged(auto_revoke_t, Windows::UI::Xaml::VisualStateChangedEventHandler const& handler) const;
        auto CurrentStateChanged(winrt::event_token const& token) const noexcept;
        auto CurrentStateChanging(Windows::UI::Xaml::VisualStateChangedEventHandler const& handler) const;
        using CurrentStateChanging_revoker = impl::event_revoker<Windows::UI::Xaml::IVisualStateGroup, &impl::abi_t<Windows::UI::Xaml::IVisualStateGroup>::remove_CurrentStateChanging>;
        CurrentStateChanging_revoker CurrentStateChanging(auto_revoke_t, Windows::UI::Xaml::VisualStateChangedEventHandler const& handler) const;
        auto CurrentStateChanging(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::IVisualStateGroup>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IVisualStateGroup<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IVisualStateManager
    {
    };
    template <> struct consume<Windows::UI::Xaml::IVisualStateManager>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IVisualStateManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IVisualStateManagerFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IVisualStateManagerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IVisualStateManagerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IVisualStateManagerOverrides
    {
        auto GoToStateCore(Windows::UI::Xaml::Controls::Control const& control, Windows::UI::Xaml::FrameworkElement const& templateRoot, param::hstring const& stateName, Windows::UI::Xaml::VisualStateGroup const& group, Windows::UI::Xaml::VisualState const& state, bool useTransitions) const;
    };
    template <> struct consume<Windows::UI::Xaml::IVisualStateManagerOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IVisualStateManagerOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IVisualStateManagerProtected
    {
        auto RaiseCurrentStateChanging(Windows::UI::Xaml::VisualStateGroup const& stateGroup, Windows::UI::Xaml::VisualState const& oldState, Windows::UI::Xaml::VisualState const& newState, Windows::UI::Xaml::Controls::Control const& control) const;
        auto RaiseCurrentStateChanged(Windows::UI::Xaml::VisualStateGroup const& stateGroup, Windows::UI::Xaml::VisualState const& oldState, Windows::UI::Xaml::VisualState const& newState, Windows::UI::Xaml::Controls::Control const& control) const;
    };
    template <> struct consume<Windows::UI::Xaml::IVisualStateManagerProtected>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IVisualStateManagerProtected<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IVisualStateManagerStatics
    {
        auto GetVisualStateGroups(Windows::UI::Xaml::FrameworkElement const& obj) const;
        [[nodiscard]] auto CustomVisualStateManagerProperty() const;
        auto GetCustomVisualStateManager(Windows::UI::Xaml::FrameworkElement const& obj) const;
        auto SetCustomVisualStateManager(Windows::UI::Xaml::FrameworkElement const& obj, Windows::UI::Xaml::VisualStateManager const& value) const;
        auto GoToState(Windows::UI::Xaml::Controls::Control const& control, param::hstring const& stateName, bool useTransitions) const;
    };
    template <> struct consume<Windows::UI::Xaml::IVisualStateManagerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IVisualStateManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IVisualTransition
    {
        [[nodiscard]] auto GeneratedDuration() const;
        auto GeneratedDuration(Windows::UI::Xaml::Duration const& value) const;
        [[nodiscard]] auto GeneratedEasingFunction() const;
        auto GeneratedEasingFunction(Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const;
        [[nodiscard]] auto To() const;
        auto To(param::hstring const& value) const;
        [[nodiscard]] auto From() const;
        auto From(param::hstring const& value) const;
        [[nodiscard]] auto Storyboard() const;
        auto Storyboard(Windows::UI::Xaml::Media::Animation::Storyboard const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IVisualTransition>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IVisualTransition<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IVisualTransitionFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::IVisualTransitionFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IVisualTransitionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IWindow
    {
        [[nodiscard]] auto Bounds() const;
        [[nodiscard]] auto Visible() const;
        [[nodiscard]] auto Content() const;
        auto Content(Windows::UI::Xaml::UIElement const& value) const;
        [[nodiscard]] auto CoreWindow() const;
        [[nodiscard]] auto Dispatcher() const;
        auto Activated(Windows::UI::Xaml::WindowActivatedEventHandler const& handler) const;
        using Activated_revoker = impl::event_revoker<Windows::UI::Xaml::IWindow, &impl::abi_t<Windows::UI::Xaml::IWindow>::remove_Activated>;
        Activated_revoker Activated(auto_revoke_t, Windows::UI::Xaml::WindowActivatedEventHandler const& handler) const;
        auto Activated(winrt::event_token const& token) const noexcept;
        auto Closed(Windows::UI::Xaml::WindowClosedEventHandler const& handler) const;
        using Closed_revoker = impl::event_revoker<Windows::UI::Xaml::IWindow, &impl::abi_t<Windows::UI::Xaml::IWindow>::remove_Closed>;
        Closed_revoker Closed(auto_revoke_t, Windows::UI::Xaml::WindowClosedEventHandler const& handler) const;
        auto Closed(winrt::event_token const& token) const noexcept;
        auto SizeChanged(Windows::UI::Xaml::WindowSizeChangedEventHandler const& handler) const;
        using SizeChanged_revoker = impl::event_revoker<Windows::UI::Xaml::IWindow, &impl::abi_t<Windows::UI::Xaml::IWindow>::remove_SizeChanged>;
        SizeChanged_revoker SizeChanged(auto_revoke_t, Windows::UI::Xaml::WindowSizeChangedEventHandler const& handler) const;
        auto SizeChanged(winrt::event_token const& token) const noexcept;
        auto VisibilityChanged(Windows::UI::Xaml::WindowVisibilityChangedEventHandler const& handler) const;
        using VisibilityChanged_revoker = impl::event_revoker<Windows::UI::Xaml::IWindow, &impl::abi_t<Windows::UI::Xaml::IWindow>::remove_VisibilityChanged>;
        VisibilityChanged_revoker VisibilityChanged(auto_revoke_t, Windows::UI::Xaml::WindowVisibilityChangedEventHandler const& handler) const;
        auto VisibilityChanged(winrt::event_token const& token) const noexcept;
        auto Activate() const;
        auto Close() const;
    };
    template <> struct consume<Windows::UI::Xaml::IWindow>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IWindow<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IWindow2
    {
        auto SetTitleBar(Windows::UI::Xaml::UIElement const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::IWindow2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IWindow2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IWindow3
    {
        [[nodiscard]] auto Compositor() const;
    };
    template <> struct consume<Windows::UI::Xaml::IWindow3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IWindow3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IWindow4
    {
        [[nodiscard]] auto UIContext() const;
    };
    template <> struct consume<Windows::UI::Xaml::IWindow4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IWindow4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IWindowCreatedEventArgs
    {
        [[nodiscard]] auto Window() const;
    };
    template <> struct consume<Windows::UI::Xaml::IWindowCreatedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IWindowCreatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IWindowStatics
    {
        [[nodiscard]] auto Current() const;
    };
    template <> struct consume<Windows::UI::Xaml::IWindowStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IWindowStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IXamlRoot
    {
        [[nodiscard]] auto Content() const;
        [[nodiscard]] auto Size() const;
        [[nodiscard]] auto RasterizationScale() const;
        [[nodiscard]] auto IsHostVisible() const;
        [[nodiscard]] auto UIContext() const;
        auto Changed(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::XamlRoot, Windows::UI::Xaml::XamlRootChangedEventArgs> const& handler) const;
        using Changed_revoker = impl::event_revoker<Windows::UI::Xaml::IXamlRoot, &impl::abi_t<Windows::UI::Xaml::IXamlRoot>::remove_Changed>;
        Changed_revoker Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::XamlRoot, Windows::UI::Xaml::XamlRootChangedEventArgs> const& handler) const;
        auto Changed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::IXamlRoot>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IXamlRoot<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_IXamlRootChangedEventArgs
    {
    };
    template <> struct consume<Windows::UI::Xaml::IXamlRootChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_IXamlRootChangedEventArgs<D>;
    };
    struct struct_Windows_UI_Xaml_CornerRadius
    {
        double TopLeft;
        double TopRight;
        double BottomRight;
        double BottomLeft;
    };
    template <> struct abi<Windows::UI::Xaml::CornerRadius>
    {
        using type = struct_Windows_UI_Xaml_CornerRadius;
    };
    struct struct_Windows_UI_Xaml_Duration
    {
        int64_t TimeSpan;
        int32_t Type;
    };
    template <> struct abi<Windows::UI::Xaml::Duration>
    {
        using type = struct_Windows_UI_Xaml_Duration;
    };
    struct struct_Windows_UI_Xaml_GridLength
    {
        double Value;
        int32_t GridUnitType;
    };
    template <> struct abi<Windows::UI::Xaml::GridLength>
    {
        using type = struct_Windows_UI_Xaml_GridLength;
    };
    struct struct_Windows_UI_Xaml_Thickness
    {
        double Left;
        double Top;
        double Right;
        double Bottom;
    };
    template <> struct abi<Windows::UI::Xaml::Thickness>
    {
        using type = struct_Windows_UI_Xaml_Thickness;
    };
}
#endif
