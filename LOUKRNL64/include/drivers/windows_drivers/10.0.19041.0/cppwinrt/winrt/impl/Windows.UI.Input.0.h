// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Input_0_H
#define WINRT_Windows_UI_Input_0_H
namespace winrt::Windows::Devices::Haptics
{
    struct SimpleHapticsController;
}
namespace winrt::Windows::Devices::Input
{
    struct PointerDevice;
    enum class PointerDeviceType : int32_t;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct Point;
    struct Rect;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    template <typename T> struct IVector;
}
namespace winrt::Windows::Storage::Streams
{
    struct RandomAccessStreamReference;
}
namespace winrt::Windows::System
{
    struct DispatcherQueue;
}
namespace winrt::Windows::UI::Core
{
    struct KeyEventArgs;
}
namespace winrt::Windows::UI::Input
{
    enum class CrossSlidingState : int32_t
    {
        Started = 0,
        Dragging = 1,
        Selecting = 2,
        SelectSpeedBumping = 3,
        SpeedBumping = 4,
        Rearranging = 5,
        Completed = 6,
    };
    enum class DraggingState : int32_t
    {
        Started = 0,
        Continuing = 1,
        Completed = 2,
    };
    enum class EdgeGestureKind : int32_t
    {
        Touch = 0,
        Keyboard = 1,
        Mouse = 2,
    };
    enum class GazeInputAccessStatus : int32_t
    {
        Unspecified = 0,
        Allowed = 1,
        DeniedByUser = 2,
        DeniedBySystem = 3,
    };
    enum class GestureSettings : uint32_t
    {
        None = 0,
        Tap = 0x1,
        DoubleTap = 0x2,
        Hold = 0x4,
        HoldWithMouse = 0x8,
        RightTap = 0x10,
        Drag = 0x20,
        ManipulationTranslateX = 0x40,
        ManipulationTranslateY = 0x80,
        ManipulationTranslateRailsX = 0x100,
        ManipulationTranslateRailsY = 0x200,
        ManipulationRotate = 0x400,
        ManipulationScale = 0x800,
        ManipulationTranslateInertia = 0x1000,
        ManipulationRotateInertia = 0x2000,
        ManipulationScaleInertia = 0x4000,
        CrossSlide = 0x8000,
        ManipulationMultipleFingerPanning = 0x10000,
    };
    enum class HoldingState : int32_t
    {
        Started = 0,
        Completed = 1,
        Canceled = 2,
    };
    enum class InputActivationState : int32_t
    {
        None = 0,
        Deactivated = 1,
        ActivatedNotForeground = 2,
        ActivatedInForeground = 3,
    };
    enum class PointerUpdateKind : int32_t
    {
        Other = 0,
        LeftButtonPressed = 1,
        LeftButtonReleased = 2,
        RightButtonPressed = 3,
        RightButtonReleased = 4,
        MiddleButtonPressed = 5,
        MiddleButtonReleased = 6,
        XButton1Pressed = 7,
        XButton1Released = 8,
        XButton2Pressed = 9,
        XButton2Released = 10,
    };
    enum class RadialControllerMenuKnownIcon : int32_t
    {
        Scroll = 0,
        Zoom = 1,
        UndoRedo = 2,
        Volume = 3,
        NextPreviousTrack = 4,
        Ruler = 5,
        InkColor = 6,
        InkThickness = 7,
        PenType = 8,
    };
    enum class RadialControllerSystemMenuItemKind : int32_t
    {
        Scroll = 0,
        Zoom = 1,
        UndoRedo = 2,
        Volume = 3,
        NextPreviousTrack = 4,
    };
    struct IAttachableInputObject;
    struct IAttachableInputObjectFactory;
    struct ICrossSlidingEventArgs;
    struct ICrossSlidingEventArgs2;
    struct IDraggingEventArgs;
    struct IDraggingEventArgs2;
    struct IEdgeGesture;
    struct IEdgeGestureEventArgs;
    struct IEdgeGestureStatics;
    struct IGestureRecognizer;
    struct IGestureRecognizer2;
    struct IHoldingEventArgs;
    struct IHoldingEventArgs2;
    struct IInputActivationListener;
    struct IInputActivationListenerActivationChangedEventArgs;
    struct IKeyboardDeliveryInterceptor;
    struct IKeyboardDeliveryInterceptorStatics;
    struct IManipulationCompletedEventArgs;
    struct IManipulationCompletedEventArgs2;
    struct IManipulationInertiaStartingEventArgs;
    struct IManipulationInertiaStartingEventArgs2;
    struct IManipulationStartedEventArgs;
    struct IManipulationStartedEventArgs2;
    struct IManipulationUpdatedEventArgs;
    struct IManipulationUpdatedEventArgs2;
    struct IMouseWheelParameters;
    struct IPointerPoint;
    struct IPointerPointProperties;
    struct IPointerPointProperties2;
    struct IPointerPointStatics;
    struct IPointerPointTransform;
    struct IPointerVisualizationSettings;
    struct IPointerVisualizationSettingsStatics;
    struct IRadialController;
    struct IRadialController2;
    struct IRadialControllerButtonClickedEventArgs;
    struct IRadialControllerButtonClickedEventArgs2;
    struct IRadialControllerButtonHoldingEventArgs;
    struct IRadialControllerButtonPressedEventArgs;
    struct IRadialControllerButtonReleasedEventArgs;
    struct IRadialControllerConfiguration;
    struct IRadialControllerConfiguration2;
    struct IRadialControllerConfigurationStatics;
    struct IRadialControllerConfigurationStatics2;
    struct IRadialControllerControlAcquiredEventArgs;
    struct IRadialControllerControlAcquiredEventArgs2;
    struct IRadialControllerMenu;
    struct IRadialControllerMenuItem;
    struct IRadialControllerMenuItemStatics;
    struct IRadialControllerMenuItemStatics2;
    struct IRadialControllerRotationChangedEventArgs;
    struct IRadialControllerRotationChangedEventArgs2;
    struct IRadialControllerScreenContact;
    struct IRadialControllerScreenContactContinuedEventArgs;
    struct IRadialControllerScreenContactContinuedEventArgs2;
    struct IRadialControllerScreenContactEndedEventArgs;
    struct IRadialControllerScreenContactStartedEventArgs;
    struct IRadialControllerScreenContactStartedEventArgs2;
    struct IRadialControllerStatics;
    struct IRightTappedEventArgs;
    struct IRightTappedEventArgs2;
    struct ISystemButtonEventController;
    struct ISystemButtonEventControllerStatics;
    struct ISystemFunctionButtonEventArgs;
    struct ISystemFunctionLockChangedEventArgs;
    struct ISystemFunctionLockIndicatorChangedEventArgs;
    struct ITappedEventArgs;
    struct ITappedEventArgs2;
    struct AttachableInputObject;
    struct CrossSlidingEventArgs;
    struct DraggingEventArgs;
    struct EdgeGesture;
    struct EdgeGestureEventArgs;
    struct GestureRecognizer;
    struct HoldingEventArgs;
    struct InputActivationListener;
    struct InputActivationListenerActivationChangedEventArgs;
    struct KeyboardDeliveryInterceptor;
    struct ManipulationCompletedEventArgs;
    struct ManipulationInertiaStartingEventArgs;
    struct ManipulationStartedEventArgs;
    struct ManipulationUpdatedEventArgs;
    struct MouseWheelParameters;
    struct PointerPoint;
    struct PointerPointProperties;
    struct PointerVisualizationSettings;
    struct RadialController;
    struct RadialControllerButtonClickedEventArgs;
    struct RadialControllerButtonHoldingEventArgs;
    struct RadialControllerButtonPressedEventArgs;
    struct RadialControllerButtonReleasedEventArgs;
    struct RadialControllerConfiguration;
    struct RadialControllerControlAcquiredEventArgs;
    struct RadialControllerMenu;
    struct RadialControllerMenuItem;
    struct RadialControllerRotationChangedEventArgs;
    struct RadialControllerScreenContact;
    struct RadialControllerScreenContactContinuedEventArgs;
    struct RadialControllerScreenContactEndedEventArgs;
    struct RadialControllerScreenContactStartedEventArgs;
    struct RightTappedEventArgs;
    struct SystemButtonEventController;
    struct SystemFunctionButtonEventArgs;
    struct SystemFunctionLockChangedEventArgs;
    struct SystemFunctionLockIndicatorChangedEventArgs;
    struct TappedEventArgs;
    struct CrossSlideThresholds;
    struct ManipulationDelta;
    struct ManipulationVelocities;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Input::IAttachableInputObject>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IAttachableInputObjectFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::ICrossSlidingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::ICrossSlidingEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IDraggingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IDraggingEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IEdgeGesture>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IEdgeGestureEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IEdgeGestureStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IGestureRecognizer>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IGestureRecognizer2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IHoldingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IHoldingEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IInputActivationListener>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IInputActivationListenerActivationChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IKeyboardDeliveryInterceptor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IKeyboardDeliveryInterceptorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IManipulationCompletedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IManipulationCompletedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IManipulationInertiaStartingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IManipulationInertiaStartingEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IManipulationStartedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IManipulationStartedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IManipulationUpdatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IManipulationUpdatedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IMouseWheelParameters>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IPointerPoint>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IPointerPointProperties>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IPointerPointProperties2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IPointerPointStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IPointerPointTransform>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IPointerVisualizationSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IPointerVisualizationSettingsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialController>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialController2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerButtonClickedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerButtonClickedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerButtonHoldingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerButtonPressedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerButtonReleasedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerConfiguration2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerConfigurationStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerConfigurationStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerMenu>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerMenuItem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerMenuItemStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerMenuItemStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerRotationChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerRotationChangedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerScreenContact>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRadialControllerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRightTappedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::IRightTappedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::ISystemButtonEventController>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::ISystemButtonEventControllerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::ISystemFunctionButtonEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::ISystemFunctionLockChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::ISystemFunctionLockIndicatorChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::ITappedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::ITappedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::AttachableInputObject>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::CrossSlidingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::DraggingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::EdgeGesture>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::EdgeGestureEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::GestureRecognizer>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::HoldingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::InputActivationListener>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::InputActivationListenerActivationChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::KeyboardDeliveryInterceptor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::ManipulationCompletedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::ManipulationInertiaStartingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::ManipulationStartedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::ManipulationUpdatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::MouseWheelParameters>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::PointerPoint>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::PointerPointProperties>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::PointerVisualizationSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::RadialController>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::RadialControllerButtonClickedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::RadialControllerButtonHoldingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::RadialControllerButtonPressedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::RadialControllerButtonReleasedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::RadialControllerConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::RadialControllerControlAcquiredEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::RadialControllerMenu>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::RadialControllerMenuItem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::RadialControllerRotationChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::RadialControllerScreenContact>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::RadialControllerScreenContactEndedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::RadialControllerScreenContactStartedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::RightTappedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::SystemButtonEventController>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::SystemFunctionButtonEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::SystemFunctionLockChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::SystemFunctionLockIndicatorChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::TappedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::CrossSlidingState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::DraggingState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::EdgeGestureKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::GazeInputAccessStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::GestureSettings>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::HoldingState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::InputActivationState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::PointerUpdateKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::RadialControllerMenuKnownIcon>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::RadialControllerSystemMenuItemKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::CrossSlideThresholds>
    {
        using type = struct_category<float, float, float, float>;
    };
    template <> struct category<Windows::UI::Input::ManipulationDelta>
    {
        using type = struct_category<Windows::Foundation::Point, float, float, float>;
    };
    template <> struct category<Windows::UI::Input::ManipulationVelocities>
    {
        using type = struct_category<Windows::Foundation::Point, float, float>;
    };
    template <> struct name<Windows::UI::Input::IAttachableInputObject>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IAttachableInputObject" };
    };
    template <> struct name<Windows::UI::Input::IAttachableInputObjectFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IAttachableInputObjectFactory" };
    };
    template <> struct name<Windows::UI::Input::ICrossSlidingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.ICrossSlidingEventArgs" };
    };
    template <> struct name<Windows::UI::Input::ICrossSlidingEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.ICrossSlidingEventArgs2" };
    };
    template <> struct name<Windows::UI::Input::IDraggingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IDraggingEventArgs" };
    };
    template <> struct name<Windows::UI::Input::IDraggingEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IDraggingEventArgs2" };
    };
    template <> struct name<Windows::UI::Input::IEdgeGesture>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IEdgeGesture" };
    };
    template <> struct name<Windows::UI::Input::IEdgeGestureEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IEdgeGestureEventArgs" };
    };
    template <> struct name<Windows::UI::Input::IEdgeGestureStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IEdgeGestureStatics" };
    };
    template <> struct name<Windows::UI::Input::IGestureRecognizer>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IGestureRecognizer" };
    };
    template <> struct name<Windows::UI::Input::IGestureRecognizer2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IGestureRecognizer2" };
    };
    template <> struct name<Windows::UI::Input::IHoldingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IHoldingEventArgs" };
    };
    template <> struct name<Windows::UI::Input::IHoldingEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IHoldingEventArgs2" };
    };
    template <> struct name<Windows::UI::Input::IInputActivationListener>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IInputActivationListener" };
    };
    template <> struct name<Windows::UI::Input::IInputActivationListenerActivationChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IInputActivationListenerActivationChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::IKeyboardDeliveryInterceptor>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IKeyboardDeliveryInterceptor" };
    };
    template <> struct name<Windows::UI::Input::IKeyboardDeliveryInterceptorStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IKeyboardDeliveryInterceptorStatics" };
    };
    template <> struct name<Windows::UI::Input::IManipulationCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IManipulationCompletedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::IManipulationCompletedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IManipulationCompletedEventArgs2" };
    };
    template <> struct name<Windows::UI::Input::IManipulationInertiaStartingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IManipulationInertiaStartingEventArgs" };
    };
    template <> struct name<Windows::UI::Input::IManipulationInertiaStartingEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IManipulationInertiaStartingEventArgs2" };
    };
    template <> struct name<Windows::UI::Input::IManipulationStartedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IManipulationStartedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::IManipulationStartedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IManipulationStartedEventArgs2" };
    };
    template <> struct name<Windows::UI::Input::IManipulationUpdatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IManipulationUpdatedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::IManipulationUpdatedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IManipulationUpdatedEventArgs2" };
    };
    template <> struct name<Windows::UI::Input::IMouseWheelParameters>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IMouseWheelParameters" };
    };
    template <> struct name<Windows::UI::Input::IPointerPoint>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IPointerPoint" };
    };
    template <> struct name<Windows::UI::Input::IPointerPointProperties>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IPointerPointProperties" };
    };
    template <> struct name<Windows::UI::Input::IPointerPointProperties2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IPointerPointProperties2" };
    };
    template <> struct name<Windows::UI::Input::IPointerPointStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IPointerPointStatics" };
    };
    template <> struct name<Windows::UI::Input::IPointerPointTransform>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IPointerPointTransform" };
    };
    template <> struct name<Windows::UI::Input::IPointerVisualizationSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IPointerVisualizationSettings" };
    };
    template <> struct name<Windows::UI::Input::IPointerVisualizationSettingsStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IPointerVisualizationSettingsStatics" };
    };
    template <> struct name<Windows::UI::Input::IRadialController>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialController" };
    };
    template <> struct name<Windows::UI::Input::IRadialController2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialController2" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerButtonClickedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerButtonClickedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerButtonClickedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerButtonClickedEventArgs2" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerButtonHoldingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerButtonHoldingEventArgs" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerButtonPressedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerButtonPressedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerButtonReleasedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerButtonReleasedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerConfiguration>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerConfiguration" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerConfiguration2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerConfiguration2" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerConfigurationStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerConfigurationStatics" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerConfigurationStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerConfigurationStatics2" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerControlAcquiredEventArgs" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerControlAcquiredEventArgs2" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerMenu>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerMenu" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerMenuItem>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerMenuItem" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerMenuItemStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerMenuItemStatics" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerMenuItemStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerMenuItemStatics2" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerRotationChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerRotationChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerRotationChangedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerRotationChangedEventArgs2" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerScreenContact>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerScreenContact" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs2" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerScreenContactEndedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs2" };
    };
    template <> struct name<Windows::UI::Input::IRadialControllerStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerStatics" };
    };
    template <> struct name<Windows::UI::Input::IRightTappedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRightTappedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::IRightTappedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.IRightTappedEventArgs2" };
    };
    template <> struct name<Windows::UI::Input::ISystemButtonEventController>
    {
        static constexpr auto & value{ L"Windows.UI.Input.ISystemButtonEventController" };
    };
    template <> struct name<Windows::UI::Input::ISystemButtonEventControllerStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Input.ISystemButtonEventControllerStatics" };
    };
    template <> struct name<Windows::UI::Input::ISystemFunctionButtonEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.ISystemFunctionButtonEventArgs" };
    };
    template <> struct name<Windows::UI::Input::ISystemFunctionLockChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.ISystemFunctionLockChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::ISystemFunctionLockIndicatorChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.ISystemFunctionLockIndicatorChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::ITappedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.ITappedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::ITappedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.ITappedEventArgs2" };
    };
    template <> struct name<Windows::UI::Input::AttachableInputObject>
    {
        static constexpr auto & value{ L"Windows.UI.Input.AttachableInputObject" };
    };
    template <> struct name<Windows::UI::Input::CrossSlidingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.CrossSlidingEventArgs" };
    };
    template <> struct name<Windows::UI::Input::DraggingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.DraggingEventArgs" };
    };
    template <> struct name<Windows::UI::Input::EdgeGesture>
    {
        static constexpr auto & value{ L"Windows.UI.Input.EdgeGesture" };
    };
    template <> struct name<Windows::UI::Input::EdgeGestureEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.EdgeGestureEventArgs" };
    };
    template <> struct name<Windows::UI::Input::GestureRecognizer>
    {
        static constexpr auto & value{ L"Windows.UI.Input.GestureRecognizer" };
    };
    template <> struct name<Windows::UI::Input::HoldingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.HoldingEventArgs" };
    };
    template <> struct name<Windows::UI::Input::InputActivationListener>
    {
        static constexpr auto & value{ L"Windows.UI.Input.InputActivationListener" };
    };
    template <> struct name<Windows::UI::Input::InputActivationListenerActivationChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.InputActivationListenerActivationChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::KeyboardDeliveryInterceptor>
    {
        static constexpr auto & value{ L"Windows.UI.Input.KeyboardDeliveryInterceptor" };
    };
    template <> struct name<Windows::UI::Input::ManipulationCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.ManipulationCompletedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::ManipulationInertiaStartingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.ManipulationInertiaStartingEventArgs" };
    };
    template <> struct name<Windows::UI::Input::ManipulationStartedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.ManipulationStartedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::ManipulationUpdatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.ManipulationUpdatedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::MouseWheelParameters>
    {
        static constexpr auto & value{ L"Windows.UI.Input.MouseWheelParameters" };
    };
    template <> struct name<Windows::UI::Input::PointerPoint>
    {
        static constexpr auto & value{ L"Windows.UI.Input.PointerPoint" };
    };
    template <> struct name<Windows::UI::Input::PointerPointProperties>
    {
        static constexpr auto & value{ L"Windows.UI.Input.PointerPointProperties" };
    };
    template <> struct name<Windows::UI::Input::PointerVisualizationSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Input.PointerVisualizationSettings" };
    };
    template <> struct name<Windows::UI::Input::RadialController>
    {
        static constexpr auto & value{ L"Windows.UI.Input.RadialController" };
    };
    template <> struct name<Windows::UI::Input::RadialControllerButtonClickedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.RadialControllerButtonClickedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::RadialControllerButtonHoldingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.RadialControllerButtonHoldingEventArgs" };
    };
    template <> struct name<Windows::UI::Input::RadialControllerButtonPressedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.RadialControllerButtonPressedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::RadialControllerButtonReleasedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.RadialControllerButtonReleasedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::RadialControllerConfiguration>
    {
        static constexpr auto & value{ L"Windows.UI.Input.RadialControllerConfiguration" };
    };
    template <> struct name<Windows::UI::Input::RadialControllerControlAcquiredEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.RadialControllerControlAcquiredEventArgs" };
    };
    template <> struct name<Windows::UI::Input::RadialControllerMenu>
    {
        static constexpr auto & value{ L"Windows.UI.Input.RadialControllerMenu" };
    };
    template <> struct name<Windows::UI::Input::RadialControllerMenuItem>
    {
        static constexpr auto & value{ L"Windows.UI.Input.RadialControllerMenuItem" };
    };
    template <> struct name<Windows::UI::Input::RadialControllerRotationChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.RadialControllerRotationChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::RadialControllerScreenContact>
    {
        static constexpr auto & value{ L"Windows.UI.Input.RadialControllerScreenContact" };
    };
    template <> struct name<Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.RadialControllerScreenContactContinuedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::RadialControllerScreenContactEndedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.RadialControllerScreenContactEndedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::RadialControllerScreenContactStartedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.RadialControllerScreenContactStartedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::RightTappedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.RightTappedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::SystemButtonEventController>
    {
        static constexpr auto & value{ L"Windows.UI.Input.SystemButtonEventController" };
    };
    template <> struct name<Windows::UI::Input::SystemFunctionButtonEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.SystemFunctionButtonEventArgs" };
    };
    template <> struct name<Windows::UI::Input::SystemFunctionLockChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.SystemFunctionLockChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::SystemFunctionLockIndicatorChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.SystemFunctionLockIndicatorChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::TappedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Input.TappedEventArgs" };
    };
    template <> struct name<Windows::UI::Input::CrossSlidingState>
    {
        static constexpr auto & value{ L"Windows.UI.Input.CrossSlidingState" };
    };
    template <> struct name<Windows::UI::Input::DraggingState>
    {
        static constexpr auto & value{ L"Windows.UI.Input.DraggingState" };
    };
    template <> struct name<Windows::UI::Input::EdgeGestureKind>
    {
        static constexpr auto & value{ L"Windows.UI.Input.EdgeGestureKind" };
    };
    template <> struct name<Windows::UI::Input::GazeInputAccessStatus>
    {
        static constexpr auto & value{ L"Windows.UI.Input.GazeInputAccessStatus" };
    };
    template <> struct name<Windows::UI::Input::GestureSettings>
    {
        static constexpr auto & value{ L"Windows.UI.Input.GestureSettings" };
    };
    template <> struct name<Windows::UI::Input::HoldingState>
    {
        static constexpr auto & value{ L"Windows.UI.Input.HoldingState" };
    };
    template <> struct name<Windows::UI::Input::InputActivationState>
    {
        static constexpr auto & value{ L"Windows.UI.Input.InputActivationState" };
    };
    template <> struct name<Windows::UI::Input::PointerUpdateKind>
    {
        static constexpr auto & value{ L"Windows.UI.Input.PointerUpdateKind" };
    };
    template <> struct name<Windows::UI::Input::RadialControllerMenuKnownIcon>
    {
        static constexpr auto & value{ L"Windows.UI.Input.RadialControllerMenuKnownIcon" };
    };
    template <> struct name<Windows::UI::Input::RadialControllerSystemMenuItemKind>
    {
        static constexpr auto & value{ L"Windows.UI.Input.RadialControllerSystemMenuItemKind" };
    };
    template <> struct name<Windows::UI::Input::CrossSlideThresholds>
    {
        static constexpr auto & value{ L"Windows.UI.Input.CrossSlideThresholds" };
    };
    template <> struct name<Windows::UI::Input::ManipulationDelta>
    {
        static constexpr auto & value{ L"Windows.UI.Input.ManipulationDelta" };
    };
    template <> struct name<Windows::UI::Input::ManipulationVelocities>
    {
        static constexpr auto & value{ L"Windows.UI.Input.ManipulationVelocities" };
    };
    template <> struct guid_storage<Windows::UI::Input::IAttachableInputObject>
    {
        static constexpr guid value{ 0x9B822734,0xA3C1,0x542A,{ 0xB2,0xF4,0x0E,0x32,0xB7,0x73,0xFB,0x07 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IAttachableInputObjectFactory>
    {
        static constexpr guid value{ 0xA4C54C4E,0x42BC,0x58FA,{ 0xA6,0x40,0xEA,0x15,0x16,0xF4,0xC0,0x6B } };
    };
    template <> struct guid_storage<Windows::UI::Input::ICrossSlidingEventArgs>
    {
        static constexpr guid value{ 0xE9374738,0x6F88,0x41D9,{ 0x87,0x20,0x78,0xE0,0x8E,0x39,0x83,0x49 } };
    };
    template <> struct guid_storage<Windows::UI::Input::ICrossSlidingEventArgs2>
    {
        static constexpr guid value{ 0xEEFB7D48,0xC070,0x59F3,{ 0x8D,0xAB,0xBC,0xAF,0x62,0x1D,0x86,0x87 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IDraggingEventArgs>
    {
        static constexpr guid value{ 0x1C905384,0x083C,0x4BD3,{ 0xB5,0x59,0x17,0x9C,0xDD,0xEB,0x33,0xEC } };
    };
    template <> struct guid_storage<Windows::UI::Input::IDraggingEventArgs2>
    {
        static constexpr guid value{ 0x71EFDBF9,0x382A,0x55CA,{ 0xB4,0xB9,0x00,0x81,0x23,0xC1,0xBF,0x1A } };
    };
    template <> struct guid_storage<Windows::UI::Input::IEdgeGesture>
    {
        static constexpr guid value{ 0x580D5292,0x2AB1,0x49AA,{ 0xA7,0xF0,0x33,0xBD,0x3F,0x8D,0xF9,0xF1 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IEdgeGestureEventArgs>
    {
        static constexpr guid value{ 0x44FA4A24,0x2D09,0x42E1,{ 0x8B,0x5E,0x36,0x82,0x08,0x79,0x6A,0x4C } };
    };
    template <> struct guid_storage<Windows::UI::Input::IEdgeGestureStatics>
    {
        static constexpr guid value{ 0xBC6A8519,0x18EE,0x4043,{ 0x98,0x39,0x4F,0xC5,0x84,0xD6,0x0A,0x14 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IGestureRecognizer>
    {
        static constexpr guid value{ 0xB47A37BF,0x3D6B,0x4F88,{ 0x83,0xE8,0x6D,0xCB,0x40,0x12,0xFF,0xB0 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IGestureRecognizer2>
    {
        static constexpr guid value{ 0xD646097F,0x6EF7,0x5746,{ 0x8B,0xA8,0x8F,0xF2,0x20,0x6E,0x6F,0x3B } };
    };
    template <> struct guid_storage<Windows::UI::Input::IHoldingEventArgs>
    {
        static constexpr guid value{ 0x2BF755C5,0xE799,0x41B4,{ 0xBB,0x40,0x24,0x2F,0x40,0x95,0x9B,0x71 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IHoldingEventArgs2>
    {
        static constexpr guid value{ 0x141DA9EA,0x4C79,0x5674,{ 0xAF,0xEA,0x49,0x3F,0xDE,0xB9,0x1F,0x19 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IInputActivationListener>
    {
        static constexpr guid value{ 0x5D6D4ED2,0x28C7,0x5AE3,{ 0xAA,0x74,0xC9,0x18,0xA9,0xF2,0x43,0xCA } };
    };
    template <> struct guid_storage<Windows::UI::Input::IInputActivationListenerActivationChangedEventArgs>
    {
        static constexpr guid value{ 0x7699B465,0x1DCF,0x5791,{ 0xB4,0xB9,0x6C,0xAF,0xBE,0xED,0x20,0x56 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IKeyboardDeliveryInterceptor>
    {
        static constexpr guid value{ 0xB4BAF068,0x8F49,0x446C,{ 0x8D,0xB5,0x8C,0x0F,0xFE,0x85,0xCC,0x9E } };
    };
    template <> struct guid_storage<Windows::UI::Input::IKeyboardDeliveryInterceptorStatics>
    {
        static constexpr guid value{ 0xF9F63BA2,0xCEBA,0x4755,{ 0x8A,0x7E,0x14,0xC0,0xFF,0xEC,0xD2,0x39 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IManipulationCompletedEventArgs>
    {
        static constexpr guid value{ 0xB34AB22B,0xD19B,0x46FF,{ 0x9F,0x38,0xDE,0xC7,0x75,0x4B,0xB9,0xE7 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IManipulationCompletedEventArgs2>
    {
        static constexpr guid value{ 0xF0C0DCE7,0x30A9,0x5B96,{ 0x88,0x6F,0x65,0x60,0xA8,0x5E,0x47,0x57 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IManipulationInertiaStartingEventArgs>
    {
        static constexpr guid value{ 0xDD37A898,0x26BF,0x467A,{ 0x9C,0xE5,0xCC,0xF3,0xFB,0x11,0x37,0x1E } };
    };
    template <> struct guid_storage<Windows::UI::Input::IManipulationInertiaStartingEventArgs2>
    {
        static constexpr guid value{ 0xC25409B8,0xF9FA,0x5A45,{ 0xBD,0x97,0xDC,0xBB,0xB2,0x20,0x18,0x60 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IManipulationStartedEventArgs>
    {
        static constexpr guid value{ 0xDDEC873E,0xCFCE,0x4932,{ 0x8C,0x1D,0x3C,0x3D,0x01,0x1A,0x34,0xC0 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IManipulationStartedEventArgs2>
    {
        static constexpr guid value{ 0x2DA3DB4E,0xE583,0x5055,{ 0xAF,0xAA,0x16,0xFD,0x98,0x65,0x31,0xA6 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IManipulationUpdatedEventArgs>
    {
        static constexpr guid value{ 0xCB354CE5,0xABB8,0x4F9F,{ 0xB3,0xCE,0x81,0x81,0xAA,0x61,0xAD,0x82 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IManipulationUpdatedEventArgs2>
    {
        static constexpr guid value{ 0xF3DFB96A,0x3306,0x5903,{ 0xA1,0xC5,0xFF,0x97,0x57,0xA8,0x68,0x9E } };
    };
    template <> struct guid_storage<Windows::UI::Input::IMouseWheelParameters>
    {
        static constexpr guid value{ 0xEAD0CA44,0x9DED,0x4037,{ 0x81,0x49,0x5E,0x4C,0xC2,0x56,0x44,0x68 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IPointerPoint>
    {
        static constexpr guid value{ 0xE995317D,0x7296,0x42D9,{ 0x82,0x33,0xC5,0xBE,0x73,0xB7,0x4A,0x4A } };
    };
    template <> struct guid_storage<Windows::UI::Input::IPointerPointProperties>
    {
        static constexpr guid value{ 0xC79D8A4B,0xC163,0x4EE7,{ 0x80,0x3F,0x67,0xCE,0x79,0xF9,0x97,0x2D } };
    };
    template <> struct guid_storage<Windows::UI::Input::IPointerPointProperties2>
    {
        static constexpr guid value{ 0x22C3433A,0xC83B,0x41C0,{ 0xA2,0x96,0x5E,0x23,0x2D,0x64,0xD6,0xAF } };
    };
    template <> struct guid_storage<Windows::UI::Input::IPointerPointStatics>
    {
        static constexpr guid value{ 0xA506638D,0x2A1A,0x413E,{ 0xBC,0x75,0x9F,0x38,0x38,0x1C,0xC0,0x69 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IPointerPointTransform>
    {
        static constexpr guid value{ 0x4D5FE14F,0xB87C,0x4028,{ 0xBC,0x9C,0x59,0xE9,0x94,0x7F,0xB0,0x56 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IPointerVisualizationSettings>
    {
        static constexpr guid value{ 0x4D1E6461,0x84F7,0x499D,{ 0xBD,0x91,0x2A,0x36,0xE2,0xB7,0xAA,0xA2 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IPointerVisualizationSettingsStatics>
    {
        static constexpr guid value{ 0x68870EDB,0x165B,0x4214,{ 0xB4,0xF3,0x58,0x4E,0xCA,0x8C,0x8A,0x69 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialController>
    {
        static constexpr guid value{ 0x3055D1C8,0xDF51,0x43D4,{ 0xB2,0x3B,0x0E,0x10,0x37,0x46,0x7A,0x09 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialController2>
    {
        static constexpr guid value{ 0x3D577EFF,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerButtonClickedEventArgs>
    {
        static constexpr guid value{ 0x206AA438,0xE651,0x11E5,{ 0xBF,0x62,0x2C,0x27,0xD7,0x40,0x4E,0x85 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerButtonClickedEventArgs2>
    {
        static constexpr guid value{ 0x3D577EF3,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerButtonHoldingEventArgs>
    {
        static constexpr guid value{ 0x3D577EEE,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerButtonPressedEventArgs>
    {
        static constexpr guid value{ 0x3D577EED,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerButtonReleasedEventArgs>
    {
        static constexpr guid value{ 0x3D577EEF,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerConfiguration>
    {
        static constexpr guid value{ 0xA6B79ECB,0x6A52,0x4430,{ 0x91,0x0C,0x56,0x37,0x0A,0x9D,0x6B,0x42 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerConfiguration2>
    {
        static constexpr guid value{ 0x3D577EF7,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerConfigurationStatics>
    {
        static constexpr guid value{ 0x79B6B0E5,0x069A,0x4486,{ 0xA9,0x9D,0x8D,0xB7,0x72,0xB9,0x64,0x2F } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerConfigurationStatics2>
    {
        static constexpr guid value{ 0x53E08B17,0xE205,0x48D3,{ 0x9C,0xAF,0x80,0xFF,0x47,0xC4,0xD7,0xC7 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs>
    {
        static constexpr guid value{ 0x206AA439,0xE651,0x11E5,{ 0xBF,0x62,0x2C,0x27,0xD7,0x40,0x4E,0x85 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2>
    {
        static constexpr guid value{ 0x3D577EF4,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerMenu>
    {
        static constexpr guid value{ 0x8506B35D,0xF640,0x4412,{ 0xAB,0xA0,0xBA,0xD0,0x77,0xE5,0xEA,0x8A } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerMenuItem>
    {
        static constexpr guid value{ 0xC80FC98D,0xAD0B,0x4C9C,{ 0x8F,0x2F,0x13,0x6A,0x23,0x73,0xA6,0xBA } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerMenuItemStatics>
    {
        static constexpr guid value{ 0x249E0887,0xD842,0x4524,{ 0x9D,0xF8,0xE0,0xD6,0x47,0xED,0xC8,0x87 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerMenuItemStatics2>
    {
        static constexpr guid value{ 0x0CBB70BE,0x7E3E,0x48BD,{ 0xBE,0x04,0x2C,0x7F,0xCA,0xA9,0xC1,0xFF } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerRotationChangedEventArgs>
    {
        static constexpr guid value{ 0x206AA435,0xE651,0x11E5,{ 0xBF,0x62,0x2C,0x27,0xD7,0x40,0x4E,0x85 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerRotationChangedEventArgs2>
    {
        static constexpr guid value{ 0x3D577EEC,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerScreenContact>
    {
        static constexpr guid value{ 0x206AA434,0xE651,0x11E5,{ 0xBF,0x62,0x2C,0x27,0xD7,0x40,0x4E,0x85 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs>
    {
        static constexpr guid value{ 0x206AA437,0xE651,0x11E5,{ 0xBF,0x62,0x2C,0x27,0xD7,0x40,0x4E,0x85 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2>
    {
        static constexpr guid value{ 0x3D577EF1,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs>
    {
        static constexpr guid value{ 0x3D577EF2,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs>
    {
        static constexpr guid value{ 0x206AA436,0xE651,0x11E5,{ 0xBF,0x62,0x2C,0x27,0xD7,0x40,0x4E,0x85 } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2>
    {
        static constexpr guid value{ 0x3D577EF0,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRadialControllerStatics>
    {
        static constexpr guid value{ 0xFADED0B7,0xB84C,0x4894,{ 0x87,0xAA,0x8F,0x25,0xAA,0x5F,0x28,0x8B } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRightTappedEventArgs>
    {
        static constexpr guid value{ 0x4CBF40BD,0xAF7A,0x4A36,{ 0x94,0x76,0xB1,0xDC,0xE1,0x41,0x70,0x9A } };
    };
    template <> struct guid_storage<Windows::UI::Input::IRightTappedEventArgs2>
    {
        static constexpr guid value{ 0x61C7B7BB,0x9F57,0x5857,{ 0xA3,0x3C,0xC5,0x8C,0x3D,0xFA,0x95,0x9E } };
    };
    template <> struct guid_storage<Windows::UI::Input::ISystemButtonEventController>
    {
        static constexpr guid value{ 0x59B893A9,0x73BC,0x52B5,{ 0xBA,0x41,0x82,0x51,0x1B,0x2C,0xB4,0x6C } };
    };
    template <> struct guid_storage<Windows::UI::Input::ISystemButtonEventControllerStatics>
    {
        static constexpr guid value{ 0x632FB07B,0x20BD,0x5E15,{ 0xAF,0x4A,0x00,0xDB,0xF2,0x06,0x4F,0xFA } };
    };
    template <> struct guid_storage<Windows::UI::Input::ISystemFunctionButtonEventArgs>
    {
        static constexpr guid value{ 0x4833896F,0x80D1,0x5DD6,{ 0x92,0xA7,0x62,0xA5,0x08,0xFF,0xEF,0x5A } };
    };
    template <> struct guid_storage<Windows::UI::Input::ISystemFunctionLockChangedEventArgs>
    {
        static constexpr guid value{ 0xCD040608,0xFCF9,0x585C,{ 0xBE,0xAB,0xF1,0xD2,0xEA,0xF3,0x64,0xAB } };
    };
    template <> struct guid_storage<Windows::UI::Input::ISystemFunctionLockIndicatorChangedEventArgs>
    {
        static constexpr guid value{ 0xB212B94E,0x7A6F,0x58AE,{ 0xB3,0x04,0xBA,0xE6,0x1D,0x03,0x71,0xB9 } };
    };
    template <> struct guid_storage<Windows::UI::Input::ITappedEventArgs>
    {
        static constexpr guid value{ 0xCFA126E4,0x253A,0x4C3C,{ 0x95,0x3B,0x39,0x5C,0x37,0xAE,0xD3,0x09 } };
    };
    template <> struct guid_storage<Windows::UI::Input::ITappedEventArgs2>
    {
        static constexpr guid value{ 0x294388F2,0x177E,0x51D5,{ 0xBE,0x56,0xEE,0x08,0x66,0xFA,0x96,0x8C } };
    };
    template <> struct default_interface<Windows::UI::Input::AttachableInputObject>
    {
        using type = Windows::UI::Input::IAttachableInputObject;
    };
    template <> struct default_interface<Windows::UI::Input::CrossSlidingEventArgs>
    {
        using type = Windows::UI::Input::ICrossSlidingEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::DraggingEventArgs>
    {
        using type = Windows::UI::Input::IDraggingEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::EdgeGesture>
    {
        using type = Windows::UI::Input::IEdgeGesture;
    };
    template <> struct default_interface<Windows::UI::Input::EdgeGestureEventArgs>
    {
        using type = Windows::UI::Input::IEdgeGestureEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::GestureRecognizer>
    {
        using type = Windows::UI::Input::IGestureRecognizer;
    };
    template <> struct default_interface<Windows::UI::Input::HoldingEventArgs>
    {
        using type = Windows::UI::Input::IHoldingEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::InputActivationListener>
    {
        using type = Windows::UI::Input::IInputActivationListener;
    };
    template <> struct default_interface<Windows::UI::Input::InputActivationListenerActivationChangedEventArgs>
    {
        using type = Windows::UI::Input::IInputActivationListenerActivationChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::KeyboardDeliveryInterceptor>
    {
        using type = Windows::UI::Input::IKeyboardDeliveryInterceptor;
    };
    template <> struct default_interface<Windows::UI::Input::ManipulationCompletedEventArgs>
    {
        using type = Windows::UI::Input::IManipulationCompletedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::ManipulationInertiaStartingEventArgs>
    {
        using type = Windows::UI::Input::IManipulationInertiaStartingEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::ManipulationStartedEventArgs>
    {
        using type = Windows::UI::Input::IManipulationStartedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::ManipulationUpdatedEventArgs>
    {
        using type = Windows::UI::Input::IManipulationUpdatedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::MouseWheelParameters>
    {
        using type = Windows::UI::Input::IMouseWheelParameters;
    };
    template <> struct default_interface<Windows::UI::Input::PointerPoint>
    {
        using type = Windows::UI::Input::IPointerPoint;
    };
    template <> struct default_interface<Windows::UI::Input::PointerPointProperties>
    {
        using type = Windows::UI::Input::IPointerPointProperties;
    };
    template <> struct default_interface<Windows::UI::Input::PointerVisualizationSettings>
    {
        using type = Windows::UI::Input::IPointerVisualizationSettings;
    };
    template <> struct default_interface<Windows::UI::Input::RadialController>
    {
        using type = Windows::UI::Input::IRadialController;
    };
    template <> struct default_interface<Windows::UI::Input::RadialControllerButtonClickedEventArgs>
    {
        using type = Windows::UI::Input::IRadialControllerButtonClickedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::RadialControllerButtonHoldingEventArgs>
    {
        using type = Windows::UI::Input::IRadialControllerButtonHoldingEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::RadialControllerButtonPressedEventArgs>
    {
        using type = Windows::UI::Input::IRadialControllerButtonPressedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::RadialControllerButtonReleasedEventArgs>
    {
        using type = Windows::UI::Input::IRadialControllerButtonReleasedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::RadialControllerConfiguration>
    {
        using type = Windows::UI::Input::IRadialControllerConfiguration;
    };
    template <> struct default_interface<Windows::UI::Input::RadialControllerControlAcquiredEventArgs>
    {
        using type = Windows::UI::Input::IRadialControllerControlAcquiredEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::RadialControllerMenu>
    {
        using type = Windows::UI::Input::IRadialControllerMenu;
    };
    template <> struct default_interface<Windows::UI::Input::RadialControllerMenuItem>
    {
        using type = Windows::UI::Input::IRadialControllerMenuItem;
    };
    template <> struct default_interface<Windows::UI::Input::RadialControllerRotationChangedEventArgs>
    {
        using type = Windows::UI::Input::IRadialControllerRotationChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::RadialControllerScreenContact>
    {
        using type = Windows::UI::Input::IRadialControllerScreenContact;
    };
    template <> struct default_interface<Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs>
    {
        using type = Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::RadialControllerScreenContactEndedEventArgs>
    {
        using type = Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::RadialControllerScreenContactStartedEventArgs>
    {
        using type = Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::RightTappedEventArgs>
    {
        using type = Windows::UI::Input::IRightTappedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::SystemButtonEventController>
    {
        using type = Windows::UI::Input::ISystemButtonEventController;
    };
    template <> struct default_interface<Windows::UI::Input::SystemFunctionButtonEventArgs>
    {
        using type = Windows::UI::Input::ISystemFunctionButtonEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::SystemFunctionLockChangedEventArgs>
    {
        using type = Windows::UI::Input::ISystemFunctionLockChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::SystemFunctionLockIndicatorChangedEventArgs>
    {
        using type = Windows::UI::Input::ISystemFunctionLockIndicatorChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Input::TappedEventArgs>
    {
        using type = Windows::UI::Input::ITappedEventArgs;
    };
    template <> struct abi<Windows::UI::Input::IAttachableInputObject>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Input::IAttachableInputObjectFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Input::ICrossSlidingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_CrossSlidingState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::ICrossSlidingEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactCount(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IDraggingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_DraggingState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IDraggingEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactCount(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IEdgeGesture>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Starting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Starting(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Completed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Completed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Canceled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Canceled(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IEdgeGestureEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IEdgeGestureStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IGestureRecognizer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_GestureSettings(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_GestureSettings(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsInertial(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsActive(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ShowGestureFeedback(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShowGestureFeedback(bool) noexcept = 0;
            virtual int32_t __stdcall get_PivotCenter(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_PivotCenter(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_PivotRadius(float*) noexcept = 0;
            virtual int32_t __stdcall put_PivotRadius(float) noexcept = 0;
            virtual int32_t __stdcall get_InertiaTranslationDeceleration(float*) noexcept = 0;
            virtual int32_t __stdcall put_InertiaTranslationDeceleration(float) noexcept = 0;
            virtual int32_t __stdcall get_InertiaRotationDeceleration(float*) noexcept = 0;
            virtual int32_t __stdcall put_InertiaRotationDeceleration(float) noexcept = 0;
            virtual int32_t __stdcall get_InertiaExpansionDeceleration(float*) noexcept = 0;
            virtual int32_t __stdcall put_InertiaExpansionDeceleration(float) noexcept = 0;
            virtual int32_t __stdcall get_InertiaTranslationDisplacement(float*) noexcept = 0;
            virtual int32_t __stdcall put_InertiaTranslationDisplacement(float) noexcept = 0;
            virtual int32_t __stdcall get_InertiaRotationAngle(float*) noexcept = 0;
            virtual int32_t __stdcall put_InertiaRotationAngle(float) noexcept = 0;
            virtual int32_t __stdcall get_InertiaExpansion(float*) noexcept = 0;
            virtual int32_t __stdcall put_InertiaExpansion(float) noexcept = 0;
            virtual int32_t __stdcall get_ManipulationExact(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ManipulationExact(bool) noexcept = 0;
            virtual int32_t __stdcall get_CrossSlideThresholds(struct struct_Windows_UI_Input_CrossSlideThresholds*) noexcept = 0;
            virtual int32_t __stdcall put_CrossSlideThresholds(struct struct_Windows_UI_Input_CrossSlideThresholds) noexcept = 0;
            virtual int32_t __stdcall get_CrossSlideHorizontally(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CrossSlideHorizontally(bool) noexcept = 0;
            virtual int32_t __stdcall get_CrossSlideExact(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CrossSlideExact(bool) noexcept = 0;
            virtual int32_t __stdcall get_AutoProcessInertia(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AutoProcessInertia(bool) noexcept = 0;
            virtual int32_t __stdcall get_MouseWheelParameters(void**) noexcept = 0;
            virtual int32_t __stdcall CanBeDoubleTap(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall ProcessDownEvent(void*) noexcept = 0;
            virtual int32_t __stdcall ProcessMoveEvents(void*) noexcept = 0;
            virtual int32_t __stdcall ProcessUpEvent(void*) noexcept = 0;
            virtual int32_t __stdcall ProcessMouseWheelEvent(void*, bool, bool) noexcept = 0;
            virtual int32_t __stdcall ProcessInertia() noexcept = 0;
            virtual int32_t __stdcall CompleteGesture() noexcept = 0;
            virtual int32_t __stdcall add_Tapped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Tapped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RightTapped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RightTapped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Holding(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Holding(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Dragging(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Dragging(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ManipulationStarted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ManipulationStarted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ManipulationUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ManipulationUpdated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ManipulationInertiaStarting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ManipulationInertiaStarting(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ManipulationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ManipulationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CrossSliding(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CrossSliding(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IGestureRecognizer2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TapMinContactCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TapMinContactCount(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_TapMaxContactCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TapMaxContactCount(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_HoldMinContactCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HoldMinContactCount(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_HoldMaxContactCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HoldMaxContactCount(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_HoldRadius(float*) noexcept = 0;
            virtual int32_t __stdcall put_HoldRadius(float) noexcept = 0;
            virtual int32_t __stdcall get_HoldStartDelay(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_HoldStartDelay(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_TranslationMinContactCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TranslationMinContactCount(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_TranslationMaxContactCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TranslationMaxContactCount(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IHoldingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_HoldingState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IHoldingEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CurrentContactCount(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IInputActivationListener>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_InputActivationChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_InputActivationChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IInputActivationListenerActivationChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IKeyboardDeliveryInterceptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsInterceptionEnabledWhenInForeground(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsInterceptionEnabledWhenInForeground(bool) noexcept = 0;
            virtual int32_t __stdcall add_KeyDown(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_KeyDown(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_KeyUp(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_KeyUp(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IKeyboardDeliveryInterceptorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IManipulationCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Cumulative(struct struct_Windows_UI_Input_ManipulationDelta*) noexcept = 0;
            virtual int32_t __stdcall get_Velocities(struct struct_Windows_UI_Input_ManipulationVelocities*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IManipulationCompletedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CurrentContactCount(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IManipulationInertiaStartingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Delta(struct struct_Windows_UI_Input_ManipulationDelta*) noexcept = 0;
            virtual int32_t __stdcall get_Cumulative(struct struct_Windows_UI_Input_ManipulationDelta*) noexcept = 0;
            virtual int32_t __stdcall get_Velocities(struct struct_Windows_UI_Input_ManipulationVelocities*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IManipulationInertiaStartingEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactCount(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IManipulationStartedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Cumulative(struct struct_Windows_UI_Input_ManipulationDelta*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IManipulationStartedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactCount(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IManipulationUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Delta(struct struct_Windows_UI_Input_ManipulationDelta*) noexcept = 0;
            virtual int32_t __stdcall get_Cumulative(struct struct_Windows_UI_Input_ManipulationDelta*) noexcept = 0;
            virtual int32_t __stdcall get_Velocities(struct struct_Windows_UI_Input_ManipulationVelocities*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IManipulationUpdatedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CurrentContactCount(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IMouseWheelParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CharTranslation(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_CharTranslation(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_DeltaScale(float*) noexcept = 0;
            virtual int32_t __stdcall put_DeltaScale(float) noexcept = 0;
            virtual int32_t __stdcall get_DeltaRotationAngle(float*) noexcept = 0;
            virtual int32_t __stdcall put_DeltaRotationAngle(float) noexcept = 0;
            virtual int32_t __stdcall get_PageTranslation(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_PageTranslation(Windows::Foundation::Point) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IPointerPoint>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerDevice(void**) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_RawPosition(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_PointerId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FrameId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsInContact(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IPointerPointProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Pressure(float*) noexcept = 0;
            virtual int32_t __stdcall get_IsInverted(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsEraser(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Orientation(float*) noexcept = 0;
            virtual int32_t __stdcall get_XTilt(float*) noexcept = 0;
            virtual int32_t __stdcall get_YTilt(float*) noexcept = 0;
            virtual int32_t __stdcall get_Twist(float*) noexcept = 0;
            virtual int32_t __stdcall get_ContactRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_ContactRectRaw(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_TouchConfidence(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsLeftButtonPressed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsRightButtonPressed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsMiddleButtonPressed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MouseWheelDelta(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsHorizontalMouseWheel(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPrimary(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsInRange(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsCanceled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsBarrelButtonPressed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsXButton1Pressed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsXButton2Pressed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_PointerUpdateKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall HasUsage(uint32_t, uint32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall GetUsageValue(uint32_t, uint32_t, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IPointerPointProperties2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ZDistance(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IPointerPointStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentPoint(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetIntermediatePoints(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentPointTransformed(uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetIntermediatePointsTransformed(uint32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IPointerPointTransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Inverse(void**) noexcept = 0;
            virtual int32_t __stdcall TryTransform(Windows::Foundation::Point, Windows::Foundation::Point*, bool*) noexcept = 0;
            virtual int32_t __stdcall TransformBounds(Windows::Foundation::Rect, Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IPointerVisualizationSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_IsContactFeedbackEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsContactFeedbackEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsBarrelButtonFeedbackEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsBarrelButtonFeedbackEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IPointerVisualizationSettingsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Menu(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationResolutionInDegrees(double*) noexcept = 0;
            virtual int32_t __stdcall put_RotationResolutionInDegrees(double) noexcept = 0;
            virtual int32_t __stdcall get_UseAutomaticHapticFeedback(bool*) noexcept = 0;
            virtual int32_t __stdcall put_UseAutomaticHapticFeedback(bool) noexcept = 0;
            virtual int32_t __stdcall add_ScreenContactStarted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ScreenContactStarted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ScreenContactEnded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ScreenContactEnded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ScreenContactContinued(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ScreenContactContinued(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ControlLost(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ControlLost(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RotationChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RotationChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ButtonClicked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ButtonClicked(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ControlAcquired(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ControlAcquired(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialController2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ButtonPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ButtonPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ButtonHolding(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ButtonHolding(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ButtonReleased(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ButtonReleased(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerButtonClickedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerButtonClickedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SimpleHapticsController(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerButtonHoldingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
            virtual int32_t __stdcall get_SimpleHapticsController(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerButtonPressedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
            virtual int32_t __stdcall get_SimpleHapticsController(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerButtonReleasedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
            virtual int32_t __stdcall get_SimpleHapticsController(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetDefaultMenuItems(void*) noexcept = 0;
            virtual int32_t __stdcall ResetToDefaultMenuItems() noexcept = 0;
            virtual int32_t __stdcall TrySelectDefaultMenuItem(int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerConfiguration2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ActiveControllerWhenMenuIsSuppressed(void*) noexcept = 0;
            virtual int32_t __stdcall get_ActiveControllerWhenMenuIsSuppressed(void**) noexcept = 0;
            virtual int32_t __stdcall put_IsMenuSuppressed(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsMenuSuppressed(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerConfigurationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerConfigurationStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_AppController(void*) noexcept = 0;
            virtual int32_t __stdcall get_AppController(void**) noexcept = 0;
            virtual int32_t __stdcall put_IsAppControllerEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsAppControllerEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsButtonPressed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SimpleHapticsController(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerMenu>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Items(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall GetSelectedMenuItem(void**) noexcept = 0;
            virtual int32_t __stdcall SelectMenuItem(void*) noexcept = 0;
            virtual int32_t __stdcall TrySelectPreviouslySelectedMenuItem(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerMenuItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayText(void**) noexcept = 0;
            virtual int32_t __stdcall get_Tag(void**) noexcept = 0;
            virtual int32_t __stdcall put_Tag(void*) noexcept = 0;
            virtual int32_t __stdcall add_Invoked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Invoked(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerMenuItemStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromIcon(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromKnownIcon(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerMenuItemStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromFontGlyph(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromFontGlyphWithUri(void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerRotationChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RotationDeltaInDegrees(double*) noexcept = 0;
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerRotationChangedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsButtonPressed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SimpleHapticsController(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerScreenContact>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Bounds(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsButtonPressed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SimpleHapticsController(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsButtonPressed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SimpleHapticsController(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsButtonPressed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SimpleHapticsController(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRadialControllerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall CreateForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRightTappedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::IRightTappedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactCount(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::ISystemButtonEventController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SystemFunctionButtonPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SystemFunctionButtonPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SystemFunctionButtonReleased(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SystemFunctionButtonReleased(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SystemFunctionLockChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SystemFunctionLockChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SystemFunctionLockIndicatorChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SystemFunctionLockIndicatorChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::ISystemButtonEventControllerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForDispatcherQueue(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::ISystemFunctionButtonEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::ISystemFunctionLockChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsLocked(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::ISystemFunctionLockIndicatorChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsIndicatorOn(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::ITappedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_TapCount(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::ITappedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactCount(uint32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Input_IAttachableInputObject
    {
    };
    template <> struct consume<Windows::UI::Input::IAttachableInputObject>
    {
        template <typename D> using type = consume_Windows_UI_Input_IAttachableInputObject<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IAttachableInputObjectFactory
    {
    };
    template <> struct consume<Windows::UI::Input::IAttachableInputObjectFactory>
    {
        template <typename D> using type = consume_Windows_UI_Input_IAttachableInputObjectFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_ICrossSlidingEventArgs
    {
        [[nodiscard]] auto PointerDeviceType() const;
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto CrossSlidingState() const;
    };
    template <> struct consume<Windows::UI::Input::ICrossSlidingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_ICrossSlidingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_ICrossSlidingEventArgs2
    {
        [[nodiscard]] auto ContactCount() const;
    };
    template <> struct consume<Windows::UI::Input::ICrossSlidingEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Input_ICrossSlidingEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IDraggingEventArgs
    {
        [[nodiscard]] auto PointerDeviceType() const;
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto DraggingState() const;
    };
    template <> struct consume<Windows::UI::Input::IDraggingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_IDraggingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IDraggingEventArgs2
    {
        [[nodiscard]] auto ContactCount() const;
    };
    template <> struct consume<Windows::UI::Input::IDraggingEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Input_IDraggingEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IEdgeGesture
    {
        auto Starting(Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const;
        using Starting_revoker = impl::event_revoker<Windows::UI::Input::IEdgeGesture, &impl::abi_t<Windows::UI::Input::IEdgeGesture>::remove_Starting>;
        Starting_revoker Starting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const;
        auto Starting(winrt::event_token const& token) const noexcept;
        auto Completed(Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const;
        using Completed_revoker = impl::event_revoker<Windows::UI::Input::IEdgeGesture, &impl::abi_t<Windows::UI::Input::IEdgeGesture>::remove_Completed>;
        Completed_revoker Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const;
        auto Completed(winrt::event_token const& token) const noexcept;
        auto Canceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const;
        using Canceled_revoker = impl::event_revoker<Windows::UI::Input::IEdgeGesture, &impl::abi_t<Windows::UI::Input::IEdgeGesture>::remove_Canceled>;
        Canceled_revoker Canceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const;
        auto Canceled(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Input::IEdgeGesture>
    {
        template <typename D> using type = consume_Windows_UI_Input_IEdgeGesture<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IEdgeGestureEventArgs
    {
        [[nodiscard]] auto Kind() const;
    };
    template <> struct consume<Windows::UI::Input::IEdgeGestureEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_IEdgeGestureEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IEdgeGestureStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::UI::Input::IEdgeGestureStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_IEdgeGestureStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IGestureRecognizer
    {
        [[nodiscard]] auto GestureSettings() const;
        auto GestureSettings(Windows::UI::Input::GestureSettings const& value) const;
        [[nodiscard]] auto IsInertial() const;
        [[nodiscard]] auto IsActive() const;
        [[nodiscard]] auto ShowGestureFeedback() const;
        auto ShowGestureFeedback(bool value) const;
        [[nodiscard]] auto PivotCenter() const;
        auto PivotCenter(Windows::Foundation::Point const& value) const;
        [[nodiscard]] auto PivotRadius() const;
        auto PivotRadius(float value) const;
        [[nodiscard]] auto InertiaTranslationDeceleration() const;
        auto InertiaTranslationDeceleration(float value) const;
        [[nodiscard]] auto InertiaRotationDeceleration() const;
        auto InertiaRotationDeceleration(float value) const;
        [[nodiscard]] auto InertiaExpansionDeceleration() const;
        auto InertiaExpansionDeceleration(float value) const;
        [[nodiscard]] auto InertiaTranslationDisplacement() const;
        auto InertiaTranslationDisplacement(float value) const;
        [[nodiscard]] auto InertiaRotationAngle() const;
        auto InertiaRotationAngle(float value) const;
        [[nodiscard]] auto InertiaExpansion() const;
        auto InertiaExpansion(float value) const;
        [[nodiscard]] auto ManipulationExact() const;
        auto ManipulationExact(bool value) const;
        [[nodiscard]] auto CrossSlideThresholds() const;
        auto CrossSlideThresholds(Windows::UI::Input::CrossSlideThresholds const& value) const;
        [[nodiscard]] auto CrossSlideHorizontally() const;
        auto CrossSlideHorizontally(bool value) const;
        [[nodiscard]] auto CrossSlideExact() const;
        auto CrossSlideExact(bool value) const;
        [[nodiscard]] auto AutoProcessInertia() const;
        auto AutoProcessInertia(bool value) const;
        [[nodiscard]] auto MouseWheelParameters() const;
        auto CanBeDoubleTap(Windows::UI::Input::PointerPoint const& value) const;
        auto ProcessDownEvent(Windows::UI::Input::PointerPoint const& value) const;
        auto ProcessMoveEvents(param::vector<Windows::UI::Input::PointerPoint> const& value) const;
        auto ProcessUpEvent(Windows::UI::Input::PointerPoint const& value) const;
        auto ProcessMouseWheelEvent(Windows::UI::Input::PointerPoint const& value, bool isShiftKeyDown, bool isControlKeyDown) const;
        auto ProcessInertia() const;
        auto CompleteGesture() const;
        auto Tapped(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::TappedEventArgs> const& handler) const;
        using Tapped_revoker = impl::event_revoker<Windows::UI::Input::IGestureRecognizer, &impl::abi_t<Windows::UI::Input::IGestureRecognizer>::remove_Tapped>;
        Tapped_revoker Tapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::TappedEventArgs> const& handler) const;
        auto Tapped(winrt::event_token const& token) const noexcept;
        auto RightTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::RightTappedEventArgs> const& handler) const;
        using RightTapped_revoker = impl::event_revoker<Windows::UI::Input::IGestureRecognizer, &impl::abi_t<Windows::UI::Input::IGestureRecognizer>::remove_RightTapped>;
        RightTapped_revoker RightTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::RightTappedEventArgs> const& handler) const;
        auto RightTapped(winrt::event_token const& token) const noexcept;
        auto Holding(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::HoldingEventArgs> const& handler) const;
        using Holding_revoker = impl::event_revoker<Windows::UI::Input::IGestureRecognizer, &impl::abi_t<Windows::UI::Input::IGestureRecognizer>::remove_Holding>;
        Holding_revoker Holding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::HoldingEventArgs> const& handler) const;
        auto Holding(winrt::event_token const& token) const noexcept;
        auto Dragging(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::DraggingEventArgs> const& handler) const;
        using Dragging_revoker = impl::event_revoker<Windows::UI::Input::IGestureRecognizer, &impl::abi_t<Windows::UI::Input::IGestureRecognizer>::remove_Dragging>;
        Dragging_revoker Dragging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::DraggingEventArgs> const& handler) const;
        auto Dragging(winrt::event_token const& token) const noexcept;
        auto ManipulationStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationStartedEventArgs> const& handler) const;
        using ManipulationStarted_revoker = impl::event_revoker<Windows::UI::Input::IGestureRecognizer, &impl::abi_t<Windows::UI::Input::IGestureRecognizer>::remove_ManipulationStarted>;
        ManipulationStarted_revoker ManipulationStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationStartedEventArgs> const& handler) const;
        auto ManipulationStarted(winrt::event_token const& token) const noexcept;
        auto ManipulationUpdated(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationUpdatedEventArgs> const& handler) const;
        using ManipulationUpdated_revoker = impl::event_revoker<Windows::UI::Input::IGestureRecognizer, &impl::abi_t<Windows::UI::Input::IGestureRecognizer>::remove_ManipulationUpdated>;
        ManipulationUpdated_revoker ManipulationUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationUpdatedEventArgs> const& handler) const;
        auto ManipulationUpdated(winrt::event_token const& token) const noexcept;
        auto ManipulationInertiaStarting(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationInertiaStartingEventArgs> const& handler) const;
        using ManipulationInertiaStarting_revoker = impl::event_revoker<Windows::UI::Input::IGestureRecognizer, &impl::abi_t<Windows::UI::Input::IGestureRecognizer>::remove_ManipulationInertiaStarting>;
        ManipulationInertiaStarting_revoker ManipulationInertiaStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationInertiaStartingEventArgs> const& handler) const;
        auto ManipulationInertiaStarting(winrt::event_token const& token) const noexcept;
        auto ManipulationCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationCompletedEventArgs> const& handler) const;
        using ManipulationCompleted_revoker = impl::event_revoker<Windows::UI::Input::IGestureRecognizer, &impl::abi_t<Windows::UI::Input::IGestureRecognizer>::remove_ManipulationCompleted>;
        ManipulationCompleted_revoker ManipulationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationCompletedEventArgs> const& handler) const;
        auto ManipulationCompleted(winrt::event_token const& token) const noexcept;
        auto CrossSliding(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::CrossSlidingEventArgs> const& handler) const;
        using CrossSliding_revoker = impl::event_revoker<Windows::UI::Input::IGestureRecognizer, &impl::abi_t<Windows::UI::Input::IGestureRecognizer>::remove_CrossSliding>;
        CrossSliding_revoker CrossSliding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::CrossSlidingEventArgs> const& handler) const;
        auto CrossSliding(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Input::IGestureRecognizer>
    {
        template <typename D> using type = consume_Windows_UI_Input_IGestureRecognizer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IGestureRecognizer2
    {
        [[nodiscard]] auto TapMinContactCount() const;
        auto TapMinContactCount(uint32_t value) const;
        [[nodiscard]] auto TapMaxContactCount() const;
        auto TapMaxContactCount(uint32_t value) const;
        [[nodiscard]] auto HoldMinContactCount() const;
        auto HoldMinContactCount(uint32_t value) const;
        [[nodiscard]] auto HoldMaxContactCount() const;
        auto HoldMaxContactCount(uint32_t value) const;
        [[nodiscard]] auto HoldRadius() const;
        auto HoldRadius(float value) const;
        [[nodiscard]] auto HoldStartDelay() const;
        auto HoldStartDelay(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto TranslationMinContactCount() const;
        auto TranslationMinContactCount(uint32_t value) const;
        [[nodiscard]] auto TranslationMaxContactCount() const;
        auto TranslationMaxContactCount(uint32_t value) const;
    };
    template <> struct consume<Windows::UI::Input::IGestureRecognizer2>
    {
        template <typename D> using type = consume_Windows_UI_Input_IGestureRecognizer2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IHoldingEventArgs
    {
        [[nodiscard]] auto PointerDeviceType() const;
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto HoldingState() const;
    };
    template <> struct consume<Windows::UI::Input::IHoldingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_IHoldingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IHoldingEventArgs2
    {
        [[nodiscard]] auto ContactCount() const;
        [[nodiscard]] auto CurrentContactCount() const;
    };
    template <> struct consume<Windows::UI::Input::IHoldingEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Input_IHoldingEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IInputActivationListener
    {
        [[nodiscard]] auto State() const;
        auto InputActivationChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Input::InputActivationListener, Windows::UI::Input::InputActivationListenerActivationChangedEventArgs> const& handler) const;
        using InputActivationChanged_revoker = impl::event_revoker<Windows::UI::Input::IInputActivationListener, &impl::abi_t<Windows::UI::Input::IInputActivationListener>::remove_InputActivationChanged>;
        InputActivationChanged_revoker InputActivationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::InputActivationListener, Windows::UI::Input::InputActivationListenerActivationChangedEventArgs> const& handler) const;
        auto InputActivationChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Input::IInputActivationListener>
    {
        template <typename D> using type = consume_Windows_UI_Input_IInputActivationListener<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IInputActivationListenerActivationChangedEventArgs
    {
        [[nodiscard]] auto State() const;
    };
    template <> struct consume<Windows::UI::Input::IInputActivationListenerActivationChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_IInputActivationListenerActivationChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IKeyboardDeliveryInterceptor
    {
        [[nodiscard]] auto IsInterceptionEnabledWhenInForeground() const;
        auto IsInterceptionEnabledWhenInForeground(bool value) const;
        auto KeyDown(Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> const& handler) const;
        using KeyDown_revoker = impl::event_revoker<Windows::UI::Input::IKeyboardDeliveryInterceptor, &impl::abi_t<Windows::UI::Input::IKeyboardDeliveryInterceptor>::remove_KeyDown>;
        KeyDown_revoker KeyDown(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> const& handler) const;
        auto KeyDown(winrt::event_token const& token) const noexcept;
        auto KeyUp(Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> const& handler) const;
        using KeyUp_revoker = impl::event_revoker<Windows::UI::Input::IKeyboardDeliveryInterceptor, &impl::abi_t<Windows::UI::Input::IKeyboardDeliveryInterceptor>::remove_KeyUp>;
        KeyUp_revoker KeyUp(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> const& handler) const;
        auto KeyUp(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Input::IKeyboardDeliveryInterceptor>
    {
        template <typename D> using type = consume_Windows_UI_Input_IKeyboardDeliveryInterceptor<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IKeyboardDeliveryInterceptorStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::UI::Input::IKeyboardDeliveryInterceptorStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_IKeyboardDeliveryInterceptorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IManipulationCompletedEventArgs
    {
        [[nodiscard]] auto PointerDeviceType() const;
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto Cumulative() const;
        [[nodiscard]] auto Velocities() const;
    };
    template <> struct consume<Windows::UI::Input::IManipulationCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_IManipulationCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IManipulationCompletedEventArgs2
    {
        [[nodiscard]] auto ContactCount() const;
        [[nodiscard]] auto CurrentContactCount() const;
    };
    template <> struct consume<Windows::UI::Input::IManipulationCompletedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Input_IManipulationCompletedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IManipulationInertiaStartingEventArgs
    {
        [[nodiscard]] auto PointerDeviceType() const;
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto Delta() const;
        [[nodiscard]] auto Cumulative() const;
        [[nodiscard]] auto Velocities() const;
    };
    template <> struct consume<Windows::UI::Input::IManipulationInertiaStartingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_IManipulationInertiaStartingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IManipulationInertiaStartingEventArgs2
    {
        [[nodiscard]] auto ContactCount() const;
    };
    template <> struct consume<Windows::UI::Input::IManipulationInertiaStartingEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Input_IManipulationInertiaStartingEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IManipulationStartedEventArgs
    {
        [[nodiscard]] auto PointerDeviceType() const;
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto Cumulative() const;
    };
    template <> struct consume<Windows::UI::Input::IManipulationStartedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_IManipulationStartedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IManipulationStartedEventArgs2
    {
        [[nodiscard]] auto ContactCount() const;
    };
    template <> struct consume<Windows::UI::Input::IManipulationStartedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Input_IManipulationStartedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IManipulationUpdatedEventArgs
    {
        [[nodiscard]] auto PointerDeviceType() const;
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto Delta() const;
        [[nodiscard]] auto Cumulative() const;
        [[nodiscard]] auto Velocities() const;
    };
    template <> struct consume<Windows::UI::Input::IManipulationUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_IManipulationUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IManipulationUpdatedEventArgs2
    {
        [[nodiscard]] auto ContactCount() const;
        [[nodiscard]] auto CurrentContactCount() const;
    };
    template <> struct consume<Windows::UI::Input::IManipulationUpdatedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Input_IManipulationUpdatedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IMouseWheelParameters
    {
        [[nodiscard]] auto CharTranslation() const;
        auto CharTranslation(Windows::Foundation::Point const& value) const;
        [[nodiscard]] auto DeltaScale() const;
        auto DeltaScale(float value) const;
        [[nodiscard]] auto DeltaRotationAngle() const;
        auto DeltaRotationAngle(float value) const;
        [[nodiscard]] auto PageTranslation() const;
        auto PageTranslation(Windows::Foundation::Point const& value) const;
    };
    template <> struct consume<Windows::UI::Input::IMouseWheelParameters>
    {
        template <typename D> using type = consume_Windows_UI_Input_IMouseWheelParameters<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IPointerPoint
    {
        [[nodiscard]] auto PointerDevice() const;
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto RawPosition() const;
        [[nodiscard]] auto PointerId() const;
        [[nodiscard]] auto FrameId() const;
        [[nodiscard]] auto Timestamp() const;
        [[nodiscard]] auto IsInContact() const;
        [[nodiscard]] auto Properties() const;
    };
    template <> struct consume<Windows::UI::Input::IPointerPoint>
    {
        template <typename D> using type = consume_Windows_UI_Input_IPointerPoint<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IPointerPointProperties
    {
        [[nodiscard]] auto Pressure() const;
        [[nodiscard]] auto IsInverted() const;
        [[nodiscard]] auto IsEraser() const;
        [[nodiscard]] auto Orientation() const;
        [[nodiscard]] auto XTilt() const;
        [[nodiscard]] auto YTilt() const;
        [[nodiscard]] auto Twist() const;
        [[nodiscard]] auto ContactRect() const;
        [[nodiscard]] auto ContactRectRaw() const;
        [[nodiscard]] auto TouchConfidence() const;
        [[nodiscard]] auto IsLeftButtonPressed() const;
        [[nodiscard]] auto IsRightButtonPressed() const;
        [[nodiscard]] auto IsMiddleButtonPressed() const;
        [[nodiscard]] auto MouseWheelDelta() const;
        [[nodiscard]] auto IsHorizontalMouseWheel() const;
        [[nodiscard]] auto IsPrimary() const;
        [[nodiscard]] auto IsInRange() const;
        [[nodiscard]] auto IsCanceled() const;
        [[nodiscard]] auto IsBarrelButtonPressed() const;
        [[nodiscard]] auto IsXButton1Pressed() const;
        [[nodiscard]] auto IsXButton2Pressed() const;
        [[nodiscard]] auto PointerUpdateKind() const;
        auto HasUsage(uint32_t usagePage, uint32_t usageId) const;
        auto GetUsageValue(uint32_t usagePage, uint32_t usageId) const;
    };
    template <> struct consume<Windows::UI::Input::IPointerPointProperties>
    {
        template <typename D> using type = consume_Windows_UI_Input_IPointerPointProperties<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IPointerPointProperties2
    {
        [[nodiscard]] auto ZDistance() const;
    };
    template <> struct consume<Windows::UI::Input::IPointerPointProperties2>
    {
        template <typename D> using type = consume_Windows_UI_Input_IPointerPointProperties2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IPointerPointStatics
    {
        auto GetCurrentPoint(uint32_t pointerId) const;
        auto GetIntermediatePoints(uint32_t pointerId) const;
        auto GetCurrentPoint(uint32_t pointerId, Windows::UI::Input::IPointerPointTransform const& transform) const;
        auto GetIntermediatePoints(uint32_t pointerId, Windows::UI::Input::IPointerPointTransform const& transform) const;
    };
    template <> struct consume<Windows::UI::Input::IPointerPointStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_IPointerPointStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IPointerPointTransform
    {
        [[nodiscard]] auto Inverse() const;
        auto TryTransform(Windows::Foundation::Point const& inPoint, Windows::Foundation::Point& outPoint) const;
        auto TransformBounds(Windows::Foundation::Rect const& rect) const;
    };
    template <> struct consume<Windows::UI::Input::IPointerPointTransform>
    {
        template <typename D> using type = consume_Windows_UI_Input_IPointerPointTransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IPointerVisualizationSettings
    {
        auto IsContactFeedbackEnabled(bool value) const;
        [[nodiscard]] auto IsContactFeedbackEnabled() const;
        auto IsBarrelButtonFeedbackEnabled(bool value) const;
        [[nodiscard]] auto IsBarrelButtonFeedbackEnabled() const;
    };
    template <> struct consume<Windows::UI::Input::IPointerVisualizationSettings>
    {
        template <typename D> using type = consume_Windows_UI_Input_IPointerVisualizationSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IPointerVisualizationSettingsStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::UI::Input::IPointerVisualizationSettingsStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_IPointerVisualizationSettingsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialController
    {
        [[nodiscard]] auto Menu() const;
        [[nodiscard]] auto RotationResolutionInDegrees() const;
        auto RotationResolutionInDegrees(double value) const;
        [[nodiscard]] auto UseAutomaticHapticFeedback() const;
        auto UseAutomaticHapticFeedback(bool value) const;
        auto ScreenContactStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactStartedEventArgs> const& handler) const;
        using ScreenContactStarted_revoker = impl::event_revoker<Windows::UI::Input::IRadialController, &impl::abi_t<Windows::UI::Input::IRadialController>::remove_ScreenContactStarted>;
        ScreenContactStarted_revoker ScreenContactStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactStartedEventArgs> const& handler) const;
        auto ScreenContactStarted(winrt::event_token const& cookie) const noexcept;
        auto ScreenContactEnded(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::Foundation::IInspectable> const& handler) const;
        using ScreenContactEnded_revoker = impl::event_revoker<Windows::UI::Input::IRadialController, &impl::abi_t<Windows::UI::Input::IRadialController>::remove_ScreenContactEnded>;
        ScreenContactEnded_revoker ScreenContactEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::Foundation::IInspectable> const& handler) const;
        auto ScreenContactEnded(winrt::event_token const& cookie) const noexcept;
        auto ScreenContactContinued(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs> const& handler) const;
        using ScreenContactContinued_revoker = impl::event_revoker<Windows::UI::Input::IRadialController, &impl::abi_t<Windows::UI::Input::IRadialController>::remove_ScreenContactContinued>;
        ScreenContactContinued_revoker ScreenContactContinued(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs> const& handler) const;
        auto ScreenContactContinued(winrt::event_token const& cookie) const noexcept;
        auto ControlLost(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::Foundation::IInspectable> const& handler) const;
        using ControlLost_revoker = impl::event_revoker<Windows::UI::Input::IRadialController, &impl::abi_t<Windows::UI::Input::IRadialController>::remove_ControlLost>;
        ControlLost_revoker ControlLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::Foundation::IInspectable> const& handler) const;
        auto ControlLost(winrt::event_token const& cookie) const noexcept;
        auto RotationChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerRotationChangedEventArgs> const& handler) const;
        using RotationChanged_revoker = impl::event_revoker<Windows::UI::Input::IRadialController, &impl::abi_t<Windows::UI::Input::IRadialController>::remove_RotationChanged>;
        RotationChanged_revoker RotationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerRotationChangedEventArgs> const& handler) const;
        auto RotationChanged(winrt::event_token const& token) const noexcept;
        auto ButtonClicked(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonClickedEventArgs> const& handler) const;
        using ButtonClicked_revoker = impl::event_revoker<Windows::UI::Input::IRadialController, &impl::abi_t<Windows::UI::Input::IRadialController>::remove_ButtonClicked>;
        ButtonClicked_revoker ButtonClicked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonClickedEventArgs> const& handler) const;
        auto ButtonClicked(winrt::event_token const& token) const noexcept;
        auto ControlAcquired(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerControlAcquiredEventArgs> const& handler) const;
        using ControlAcquired_revoker = impl::event_revoker<Windows::UI::Input::IRadialController, &impl::abi_t<Windows::UI::Input::IRadialController>::remove_ControlAcquired>;
        ControlAcquired_revoker ControlAcquired(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerControlAcquiredEventArgs> const& handler) const;
        auto ControlAcquired(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::UI::Input::IRadialController>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialController<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialController2
    {
        auto ButtonPressed(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonPressedEventArgs> const& handler) const;
        using ButtonPressed_revoker = impl::event_revoker<Windows::UI::Input::IRadialController2, &impl::abi_t<Windows::UI::Input::IRadialController2>::remove_ButtonPressed>;
        ButtonPressed_revoker ButtonPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonPressedEventArgs> const& handler) const;
        auto ButtonPressed(winrt::event_token const& token) const noexcept;
        auto ButtonHolding(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonHoldingEventArgs> const& handler) const;
        using ButtonHolding_revoker = impl::event_revoker<Windows::UI::Input::IRadialController2, &impl::abi_t<Windows::UI::Input::IRadialController2>::remove_ButtonHolding>;
        ButtonHolding_revoker ButtonHolding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonHoldingEventArgs> const& handler) const;
        auto ButtonHolding(winrt::event_token const& token) const noexcept;
        auto ButtonReleased(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonReleasedEventArgs> const& handler) const;
        using ButtonReleased_revoker = impl::event_revoker<Windows::UI::Input::IRadialController2, &impl::abi_t<Windows::UI::Input::IRadialController2>::remove_ButtonReleased>;
        ButtonReleased_revoker ButtonReleased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonReleasedEventArgs> const& handler) const;
        auto ButtonReleased(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Input::IRadialController2>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialController2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerButtonClickedEventArgs
    {
        [[nodiscard]] auto Contact() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerButtonClickedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerButtonClickedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerButtonClickedEventArgs2
    {
        [[nodiscard]] auto SimpleHapticsController() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerButtonClickedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerButtonClickedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerButtonHoldingEventArgs
    {
        [[nodiscard]] auto Contact() const;
        [[nodiscard]] auto SimpleHapticsController() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerButtonHoldingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerButtonHoldingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerButtonPressedEventArgs
    {
        [[nodiscard]] auto Contact() const;
        [[nodiscard]] auto SimpleHapticsController() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerButtonPressedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerButtonPressedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerButtonReleasedEventArgs
    {
        [[nodiscard]] auto Contact() const;
        [[nodiscard]] auto SimpleHapticsController() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerButtonReleasedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerButtonReleasedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerConfiguration
    {
        auto SetDefaultMenuItems(param::iterable<Windows::UI::Input::RadialControllerSystemMenuItemKind> const& buttons) const;
        auto ResetToDefaultMenuItems() const;
        auto TrySelectDefaultMenuItem(Windows::UI::Input::RadialControllerSystemMenuItemKind const& type) const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerConfiguration2
    {
        auto ActiveControllerWhenMenuIsSuppressed(Windows::UI::Input::RadialController const& value) const;
        [[nodiscard]] auto ActiveControllerWhenMenuIsSuppressed() const;
        auto IsMenuSuppressed(bool value) const;
        [[nodiscard]] auto IsMenuSuppressed() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerConfiguration2>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerConfiguration2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerConfigurationStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerConfigurationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerConfigurationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerConfigurationStatics2
    {
        auto AppController(Windows::UI::Input::RadialController const& value) const;
        [[nodiscard]] auto AppController() const;
        auto IsAppControllerEnabled(bool value) const;
        [[nodiscard]] auto IsAppControllerEnabled() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerConfigurationStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerConfigurationStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs
    {
        [[nodiscard]] auto Contact() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs2
    {
        [[nodiscard]] auto IsButtonPressed() const;
        [[nodiscard]] auto SimpleHapticsController() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerMenu
    {
        [[nodiscard]] auto Items() const;
        [[nodiscard]] auto IsEnabled() const;
        auto IsEnabled(bool value) const;
        auto GetSelectedMenuItem() const;
        auto SelectMenuItem(Windows::UI::Input::RadialControllerMenuItem const& menuItem) const;
        auto TrySelectPreviouslySelectedMenuItem() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerMenu>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerMenu<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerMenuItem
    {
        [[nodiscard]] auto DisplayText() const;
        [[nodiscard]] auto Tag() const;
        auto Tag(Windows::Foundation::IInspectable const& value) const;
        auto Invoked(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialControllerMenuItem, Windows::Foundation::IInspectable> const& handler) const;
        using Invoked_revoker = impl::event_revoker<Windows::UI::Input::IRadialControllerMenuItem, &impl::abi_t<Windows::UI::Input::IRadialControllerMenuItem>::remove_Invoked>;
        Invoked_revoker Invoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialControllerMenuItem, Windows::Foundation::IInspectable> const& handler) const;
        auto Invoked(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerMenuItem>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerMenuItem<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerMenuItemStatics
    {
        auto CreateFromIcon(param::hstring const& displayText, Windows::Storage::Streams::RandomAccessStreamReference const& icon) const;
        auto CreateFromKnownIcon(param::hstring const& displayText, Windows::UI::Input::RadialControllerMenuKnownIcon const& value) const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerMenuItemStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerMenuItemStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerMenuItemStatics2
    {
        auto CreateFromFontGlyph(param::hstring const& displayText, param::hstring const& glyph, param::hstring const& fontFamily) const;
        auto CreateFromFontGlyph(param::hstring const& displayText, param::hstring const& glyph, param::hstring const& fontFamily, Windows::Foundation::Uri const& fontUri) const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerMenuItemStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerMenuItemStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerRotationChangedEventArgs
    {
        [[nodiscard]] auto RotationDeltaInDegrees() const;
        [[nodiscard]] auto Contact() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerRotationChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerRotationChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerRotationChangedEventArgs2
    {
        [[nodiscard]] auto IsButtonPressed() const;
        [[nodiscard]] auto SimpleHapticsController() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerRotationChangedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerRotationChangedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerScreenContact
    {
        [[nodiscard]] auto Bounds() const;
        [[nodiscard]] auto Position() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerScreenContact>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerScreenContact<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs
    {
        [[nodiscard]] auto Contact() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs2
    {
        [[nodiscard]] auto IsButtonPressed() const;
        [[nodiscard]] auto SimpleHapticsController() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerScreenContactEndedEventArgs
    {
        [[nodiscard]] auto IsButtonPressed() const;
        [[nodiscard]] auto SimpleHapticsController() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerScreenContactEndedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs
    {
        [[nodiscard]] auto Contact() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs2
    {
        [[nodiscard]] auto IsButtonPressed() const;
        [[nodiscard]] auto SimpleHapticsController() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRadialControllerStatics
    {
        auto IsSupported() const;
        auto CreateForCurrentView() const;
    };
    template <> struct consume<Windows::UI::Input::IRadialControllerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRadialControllerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRightTappedEventArgs
    {
        [[nodiscard]] auto PointerDeviceType() const;
        [[nodiscard]] auto Position() const;
    };
    template <> struct consume<Windows::UI::Input::IRightTappedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRightTappedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_IRightTappedEventArgs2
    {
        [[nodiscard]] auto ContactCount() const;
    };
    template <> struct consume<Windows::UI::Input::IRightTappedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Input_IRightTappedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_ISystemButtonEventController
    {
        auto SystemFunctionButtonPressed(Windows::Foundation::TypedEventHandler<Windows::UI::Input::SystemButtonEventController, Windows::UI::Input::SystemFunctionButtonEventArgs> const& handler) const;
        using SystemFunctionButtonPressed_revoker = impl::event_revoker<Windows::UI::Input::ISystemButtonEventController, &impl::abi_t<Windows::UI::Input::ISystemButtonEventController>::remove_SystemFunctionButtonPressed>;
        SystemFunctionButtonPressed_revoker SystemFunctionButtonPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::SystemButtonEventController, Windows::UI::Input::SystemFunctionButtonEventArgs> const& handler) const;
        auto SystemFunctionButtonPressed(winrt::event_token const& token) const noexcept;
        auto SystemFunctionButtonReleased(Windows::Foundation::TypedEventHandler<Windows::UI::Input::SystemButtonEventController, Windows::UI::Input::SystemFunctionButtonEventArgs> const& handler) const;
        using SystemFunctionButtonReleased_revoker = impl::event_revoker<Windows::UI::Input::ISystemButtonEventController, &impl::abi_t<Windows::UI::Input::ISystemButtonEventController>::remove_SystemFunctionButtonReleased>;
        SystemFunctionButtonReleased_revoker SystemFunctionButtonReleased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::SystemButtonEventController, Windows::UI::Input::SystemFunctionButtonEventArgs> const& handler) const;
        auto SystemFunctionButtonReleased(winrt::event_token const& token) const noexcept;
        auto SystemFunctionLockChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Input::SystemButtonEventController, Windows::UI::Input::SystemFunctionLockChangedEventArgs> const& handler) const;
        using SystemFunctionLockChanged_revoker = impl::event_revoker<Windows::UI::Input::ISystemButtonEventController, &impl::abi_t<Windows::UI::Input::ISystemButtonEventController>::remove_SystemFunctionLockChanged>;
        SystemFunctionLockChanged_revoker SystemFunctionLockChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::SystemButtonEventController, Windows::UI::Input::SystemFunctionLockChangedEventArgs> const& handler) const;
        auto SystemFunctionLockChanged(winrt::event_token const& token) const noexcept;
        auto SystemFunctionLockIndicatorChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Input::SystemButtonEventController, Windows::UI::Input::SystemFunctionLockIndicatorChangedEventArgs> const& handler) const;
        using SystemFunctionLockIndicatorChanged_revoker = impl::event_revoker<Windows::UI::Input::ISystemButtonEventController, &impl::abi_t<Windows::UI::Input::ISystemButtonEventController>::remove_SystemFunctionLockIndicatorChanged>;
        SystemFunctionLockIndicatorChanged_revoker SystemFunctionLockIndicatorChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::SystemButtonEventController, Windows::UI::Input::SystemFunctionLockIndicatorChangedEventArgs> const& handler) const;
        auto SystemFunctionLockIndicatorChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Input::ISystemButtonEventController>
    {
        template <typename D> using type = consume_Windows_UI_Input_ISystemButtonEventController<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_ISystemButtonEventControllerStatics
    {
        auto CreateForDispatcherQueue(Windows::System::DispatcherQueue const& queue) const;
    };
    template <> struct consume<Windows::UI::Input::ISystemButtonEventControllerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_ISystemButtonEventControllerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_ISystemFunctionButtonEventArgs
    {
        [[nodiscard]] auto Timestamp() const;
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
    };
    template <> struct consume<Windows::UI::Input::ISystemFunctionButtonEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_ISystemFunctionButtonEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_ISystemFunctionLockChangedEventArgs
    {
        [[nodiscard]] auto Timestamp() const;
        [[nodiscard]] auto IsLocked() const;
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
    };
    template <> struct consume<Windows::UI::Input::ISystemFunctionLockChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_ISystemFunctionLockChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_ISystemFunctionLockIndicatorChangedEventArgs
    {
        [[nodiscard]] auto Timestamp() const;
        [[nodiscard]] auto IsIndicatorOn() const;
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
    };
    template <> struct consume<Windows::UI::Input::ISystemFunctionLockIndicatorChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_ISystemFunctionLockIndicatorChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_ITappedEventArgs
    {
        [[nodiscard]] auto PointerDeviceType() const;
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto TapCount() const;
    };
    template <> struct consume<Windows::UI::Input::ITappedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_ITappedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_ITappedEventArgs2
    {
        [[nodiscard]] auto ContactCount() const;
    };
    template <> struct consume<Windows::UI::Input::ITappedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Input_ITappedEventArgs2<D>;
    };
    struct struct_Windows_UI_Input_CrossSlideThresholds
    {
        float SelectionStart;
        float SpeedBumpStart;
        float SpeedBumpEnd;
        float RearrangeStart;
    };
    template <> struct abi<Windows::UI::Input::CrossSlideThresholds>
    {
        using type = struct_Windows_UI_Input_CrossSlideThresholds;
    };
    struct struct_Windows_UI_Input_ManipulationDelta
    {
        Windows::Foundation::Point Translation;
        float Scale;
        float Rotation;
        float Expansion;
    };
    template <> struct abi<Windows::UI::Input::ManipulationDelta>
    {
        using type = struct_Windows_UI_Input_ManipulationDelta;
    };
    struct struct_Windows_UI_Input_ManipulationVelocities
    {
        Windows::Foundation::Point Linear;
        float Angular;
        float Expansion;
    };
    template <> struct abi<Windows::UI::Input::ManipulationVelocities>
    {
        using type = struct_Windows_UI_Input_ManipulationVelocities;
    };
}
#endif
