// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Composition_Interactions_0_H
#define WINRT_Windows_UI_Composition_Interactions_0_H
namespace winrt::Windows::Foundation
{
    template <typename T> struct IReference;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Foundation::Numerics
{
}
namespace winrt::Windows::UI::Composition
{
    struct CompositionAnimation;
    struct Compositor;
    struct ExpressionAnimation;
    struct IVisualElement;
    struct ScalarNaturalMotionAnimation;
    struct Vector2NaturalMotionAnimation;
    struct Visual;
}
namespace winrt::Windows::UI::Input
{
    struct PointerPoint;
}
namespace winrt::Windows::UI::Composition::Interactions
{
    enum class InteractionBindingAxisModes : uint32_t
    {
        None = 0,
        PositionX = 0x1,
        PositionY = 0x2,
        Scale = 0x4,
    };
    enum class InteractionChainingMode : int32_t
    {
        Auto = 0,
        Always = 1,
        Never = 2,
    };
    enum class InteractionSourceMode : int32_t
    {
        Disabled = 0,
        EnabledWithInertia = 1,
        EnabledWithoutInertia = 2,
    };
    enum class InteractionSourceRedirectionMode : int32_t
    {
        Disabled = 0,
        Enabled = 1,
    };
    enum class InteractionTrackerClampingOption : int32_t
    {
        Auto = 0,
        Disabled = 1,
    };
    enum class InteractionTrackerPositionUpdateOption : int32_t
    {
        Default = 0,
        AllowActiveCustomScaleAnimation = 1,
    };
    enum class VisualInteractionSourceRedirectionMode : int32_t
    {
        Off = 0,
        CapableTouchpadOnly = 1,
        PointerWheelOnly = 2,
        CapableTouchpadAndPointerWheel = 3,
    };
    struct ICompositionConditionalValue;
    struct ICompositionConditionalValueStatics;
    struct ICompositionInteractionSource;
    struct ICompositionInteractionSourceCollection;
    struct IInteractionSourceConfiguration;
    struct IInteractionTracker;
    struct IInteractionTracker2;
    struct IInteractionTracker3;
    struct IInteractionTracker4;
    struct IInteractionTracker5;
    struct IInteractionTrackerCustomAnimationStateEnteredArgs;
    struct IInteractionTrackerCustomAnimationStateEnteredArgs2;
    struct IInteractionTrackerIdleStateEnteredArgs;
    struct IInteractionTrackerIdleStateEnteredArgs2;
    struct IInteractionTrackerInertiaModifier;
    struct IInteractionTrackerInertiaModifierFactory;
    struct IInteractionTrackerInertiaMotion;
    struct IInteractionTrackerInertiaMotionStatics;
    struct IInteractionTrackerInertiaNaturalMotion;
    struct IInteractionTrackerInertiaNaturalMotionStatics;
    struct IInteractionTrackerInertiaRestingValue;
    struct IInteractionTrackerInertiaRestingValueStatics;
    struct IInteractionTrackerInertiaStateEnteredArgs;
    struct IInteractionTrackerInertiaStateEnteredArgs2;
    struct IInteractionTrackerInertiaStateEnteredArgs3;
    struct IInteractionTrackerInteractingStateEnteredArgs;
    struct IInteractionTrackerInteractingStateEnteredArgs2;
    struct IInteractionTrackerOwner;
    struct IInteractionTrackerRequestIgnoredArgs;
    struct IInteractionTrackerStatics;
    struct IInteractionTrackerStatics2;
    struct IInteractionTrackerValuesChangedArgs;
    struct IInteractionTrackerVector2InertiaModifier;
    struct IInteractionTrackerVector2InertiaModifierFactory;
    struct IInteractionTrackerVector2InertiaNaturalMotion;
    struct IInteractionTrackerVector2InertiaNaturalMotionStatics;
    struct IVisualInteractionSource;
    struct IVisualInteractionSource2;
    struct IVisualInteractionSource3;
    struct IVisualInteractionSourceObjectFactory;
    struct IVisualInteractionSourceStatics;
    struct IVisualInteractionSourceStatics2;
    struct CompositionConditionalValue;
    struct CompositionInteractionSourceCollection;
    struct InteractionSourceConfiguration;
    struct InteractionTracker;
    struct InteractionTrackerCustomAnimationStateEnteredArgs;
    struct InteractionTrackerIdleStateEnteredArgs;
    struct InteractionTrackerInertiaModifier;
    struct InteractionTrackerInertiaMotion;
    struct InteractionTrackerInertiaNaturalMotion;
    struct InteractionTrackerInertiaRestingValue;
    struct InteractionTrackerInertiaStateEnteredArgs;
    struct InteractionTrackerInteractingStateEnteredArgs;
    struct InteractionTrackerRequestIgnoredArgs;
    struct InteractionTrackerValuesChangedArgs;
    struct InteractionTrackerVector2InertiaModifier;
    struct InteractionTrackerVector2InertiaNaturalMotion;
    struct VisualInteractionSource;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Composition::Interactions::ICompositionConditionalValue>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::ICompositionInteractionSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionSourceConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTracker>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTracker2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTracker3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTracker4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTracker5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerOwner>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IVisualInteractionSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IVisualInteractionSource2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IVisualInteractionSource3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::CompositionConditionalValue>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionSourceConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTracker>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::VisualInteractionSource>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionBindingAxisModes>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionChainingMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionSourceMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerClampingOption>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerPositionUpdateOption>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::UI::Composition::Interactions::ICompositionConditionalValue>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.ICompositionConditionalValue" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.ICompositionConditionalValueStatics" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::ICompositionInteractionSource>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.ICompositionInteractionSource" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.ICompositionInteractionSourceCollection" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionSourceConfiguration>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionSourceConfiguration" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTracker>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTracker" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTracker2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTracker2" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTracker3>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTracker3" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTracker4>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTracker4" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTracker5>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTracker5" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerCustomAnimationStateEnteredArgs" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerCustomAnimationStateEnteredArgs2" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerIdleStateEnteredArgs" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerIdleStateEnteredArgs2" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaModifier" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaModifierFactory" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaMotion" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaMotionStatics" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaNaturalMotion" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaNaturalMotionStatics" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaRestingValue" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaRestingValueStatics" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaStateEnteredArgs" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaStateEnteredArgs2" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaStateEnteredArgs3" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInteractingStateEnteredArgs" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerInteractingStateEnteredArgs2" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerOwner>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerOwner" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerRequestIgnoredArgs" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerStatics" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerStatics2" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerValuesChangedArgs" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerVector2InertiaModifier" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerVector2InertiaModifierFactory" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerVector2InertiaNaturalMotion" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IInteractionTrackerVector2InertiaNaturalMotionStatics" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IVisualInteractionSource>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IVisualInteractionSource" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IVisualInteractionSource2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IVisualInteractionSource2" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IVisualInteractionSource3>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IVisualInteractionSource3" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IVisualInteractionSourceObjectFactory" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IVisualInteractionSourceStatics" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.IVisualInteractionSourceStatics2" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::CompositionConditionalValue>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.CompositionConditionalValue" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.CompositionInteractionSourceCollection" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionSourceConfiguration>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionSourceConfiguration" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionTracker>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTracker" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerCustomAnimationStateEnteredArgs" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerIdleStateEnteredArgs" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaModifier" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaMotion" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaNaturalMotion" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaRestingValue" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaStateEnteredArgs" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerInteractingStateEnteredArgs" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerRequestIgnoredArgs" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerValuesChangedArgs" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerVector2InertiaModifier" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerVector2InertiaNaturalMotion" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::VisualInteractionSource>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.VisualInteractionSource" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionBindingAxisModes>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionBindingAxisModes" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionChainingMode>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionChainingMode" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionSourceMode>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionSourceMode" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionSourceRedirectionMode" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerClampingOption>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerClampingOption" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::InteractionTrackerPositionUpdateOption>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.InteractionTrackerPositionUpdateOption" };
    };
    template <> struct name<Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Interactions.VisualInteractionSourceRedirectionMode" };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::ICompositionConditionalValue>
    {
        static constexpr guid value{ 0x43250538,0xEB73,0x4561,{ 0xA7,0x1D,0x1A,0x43,0xEA,0xEB,0x7A,0x9B } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics>
    {
        static constexpr guid value{ 0x090C4B72,0x8467,0x4D0A,{ 0x90,0x65,0xAC,0x46,0xB8,0x0A,0x55,0x22 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::ICompositionInteractionSource>
    {
        static constexpr guid value{ 0x043B2431,0x06E3,0x495A,{ 0xBA,0x54,0x40,0x9F,0x00,0x17,0xFA,0xC0 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection>
    {
        static constexpr guid value{ 0x1B468E4B,0xA5BF,0x47D8,{ 0xA5,0x47,0x38,0x94,0x15,0x5A,0x15,0x8C } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionSourceConfiguration>
    {
        static constexpr guid value{ 0xA78347E5,0xA9D1,0x4D02,{ 0x98,0x5E,0xB9,0x30,0xCD,0x0B,0x9D,0xA4 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTracker>
    {
        static constexpr guid value{ 0x2A8E8CB1,0x1000,0x4416,{ 0x83,0x63,0xCC,0x27,0xFB,0x87,0x73,0x08 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTracker2>
    {
        static constexpr guid value{ 0x25769A3E,0xCE6D,0x448C,{ 0x83,0x86,0x92,0x62,0x0D,0x24,0x07,0x56 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTracker3>
    {
        static constexpr guid value{ 0xE6C5D7A2,0x5C4B,0x42C6,{ 0x84,0xB7,0xF6,0x94,0x41,0xB1,0x80,0x91 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTracker4>
    {
        static constexpr guid value{ 0xEBD222BC,0x04AF,0x4AC7,{ 0x84,0x7D,0x06,0xEA,0x36,0xE8,0x0A,0x16 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTracker5>
    {
        static constexpr guid value{ 0xD3EF5DA2,0xA254,0x40E4,{ 0x88,0xD5,0x44,0xE4,0xE1,0x6B,0x58,0x09 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs>
    {
        static constexpr guid value{ 0x8D1C8CF1,0xD7B0,0x434C,{ 0xA5,0xD2,0x2D,0x76,0x11,0x86,0x48,0x34 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2>
    {
        static constexpr guid value{ 0x47D579B7,0x0985,0x5E99,{ 0xB0,0x24,0x2F,0x32,0xC3,0x80,0xC1,0xA4 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs>
    {
        static constexpr guid value{ 0x50012FAA,0x1510,0x4142,{ 0xA1,0xA5,0x01,0x9B,0x09,0xF8,0x85,0x7B } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2>
    {
        static constexpr guid value{ 0xF2E771ED,0xB803,0x5137,{ 0x94,0x35,0x1C,0x96,0xE4,0x87,0x21,0xE9 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>
    {
        static constexpr guid value{ 0xA0E2C920,0x26B4,0x4DA2,{ 0x8B,0x61,0x5E,0x68,0x39,0x79,0xBB,0xE2 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory>
    {
        static constexpr guid value{ 0x993818FE,0xC94E,0x4B86,{ 0x87,0xF3,0x92,0x26,0x65,0xBA,0x46,0xB9 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion>
    {
        static constexpr guid value{ 0x04922FDC,0xF154,0x4CB8,{ 0xBF,0x33,0xCC,0x1B,0xA6,0x11,0xE6,0xDB } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics>
    {
        static constexpr guid value{ 0x8CC83DD6,0xBA7B,0x431A,{ 0x84,0x4B,0x6E,0xAC,0x91,0x30,0xF9,0x9A } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion>
    {
        static constexpr guid value{ 0x70ACDAAE,0x27DC,0x48ED,{ 0xA3,0xC3,0x6D,0x61,0xC9,0xA0,0x29,0xD2 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics>
    {
        static constexpr guid value{ 0xCFDA55B0,0x5E3E,0x4289,{ 0x93,0x2D,0xEE,0x5F,0x50,0xE7,0x42,0x83 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue>
    {
        static constexpr guid value{ 0x86F7EC09,0x5096,0x4170,{ 0x9C,0xC8,0xDF,0x2F,0xE1,0x01,0xBB,0x93 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics>
    {
        static constexpr guid value{ 0x18ED4699,0x0745,0x4096,{ 0xBC,0xAB,0x3A,0x4E,0x99,0x56,0x9B,0xCF } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs>
    {
        static constexpr guid value{ 0x87108CF2,0xE7FF,0x4F7D,{ 0x9F,0xFD,0xD7,0x2F,0x1E,0x40,0x9B,0x63 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2>
    {
        static constexpr guid value{ 0xB1EB32F6,0xC26C,0x41F6,{ 0xA1,0x89,0xFA,0xBC,0x22,0xB3,0x23,0xCC } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3>
    {
        static constexpr guid value{ 0x48AC1C2F,0x47BD,0x59AF,{ 0xA5,0x8C,0x79,0xBD,0x2E,0xB9,0xEF,0x71 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs>
    {
        static constexpr guid value{ 0xA7263939,0xA17B,0x4011,{ 0x99,0xFD,0xB5,0xC2,0x4F,0x14,0x37,0x48 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2>
    {
        static constexpr guid value{ 0x509652D6,0xD488,0x59CD,{ 0x81,0x9F,0xF5,0x23,0x10,0x29,0x5B,0x11 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerOwner>
    {
        static constexpr guid value{ 0xDB2E8AF3,0x4DEB,0x4E53,{ 0xB2,0x9C,0xB0,0x6C,0x9F,0x96,0xD6,0x51 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs>
    {
        static constexpr guid value{ 0x80DD82F1,0xCE25,0x488F,{ 0x91,0xDD,0xCB,0x64,0x55,0xCC,0xFF,0x2E } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerStatics>
    {
        static constexpr guid value{ 0xBBA5D7B7,0x6590,0x4498,{ 0x8D,0x6C,0xEB,0x62,0xB5,0x14,0xC9,0x2A } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerStatics2>
    {
        static constexpr guid value{ 0x35E53720,0x46B7,0x5CB0,{ 0xB5,0x05,0xF3,0xD6,0x88,0x4A,0x61,0x63 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs>
    {
        static constexpr guid value{ 0xCF1578EF,0xD3DF,0x4501,{ 0xB9,0xE6,0xF0,0x2F,0xB2,0x2F,0x73,0xD0 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier>
    {
        static constexpr guid value{ 0x87E08AB0,0x3086,0x4853,{ 0xA4,0xB7,0x77,0x88,0x2A,0xD5,0xD7,0xE3 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory>
    {
        static constexpr guid value{ 0x7401D6C4,0x6C6D,0x48DF,{ 0xBC,0x3E,0x17,0x1E,0x22,0x7E,0x7D,0x7F } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion>
    {
        static constexpr guid value{ 0x5F17695C,0x162D,0x4C07,{ 0x94,0x00,0xC2,0x82,0xB2,0x82,0x76,0xCA } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics>
    {
        static constexpr guid value{ 0x82001A48,0x09C0,0x434F,{ 0x81,0x89,0x14,0x1C,0x66,0xDF,0x36,0x2F } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IVisualInteractionSource>
    {
        static constexpr guid value{ 0xCA0E8A86,0xD8D6,0x4111,{ 0xB0,0x88,0x70,0x34,0x7B,0xD2,0xB0,0xED } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IVisualInteractionSource2>
    {
        static constexpr guid value{ 0xAA914893,0xA73C,0x414D,{ 0x80,0xD0,0x24,0x9B,0xAD,0x2F,0xBD,0x93 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IVisualInteractionSource3>
    {
        static constexpr guid value{ 0xD941EF2A,0x0D5C,0x4057,{ 0x92,0xD7,0xC9,0x71,0x15,0x33,0x20,0x4F } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory>
    {
        static constexpr guid value{ 0xB2CA917C,0xE98A,0x41F2,{ 0xB3,0xC9,0x89,0x1C,0x92,0x66,0xC8,0xF6 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>
    {
        static constexpr guid value{ 0x369965E1,0x8645,0x4F75,{ 0xBA,0x00,0x64,0x79,0xCD,0x10,0xC8,0xE6 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics2>
    {
        static constexpr guid value{ 0xA979C032,0x5764,0x55E0,{ 0xBC,0x1F,0x07,0x78,0x78,0x6D,0xCF,0xDE } };
    };
    template <> struct default_interface<Windows::UI::Composition::Interactions::CompositionConditionalValue>
    {
        using type = Windows::UI::Composition::Interactions::ICompositionConditionalValue;
    };
    template <> struct default_interface<Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection>
    {
        using type = Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection;
    };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionSourceConfiguration>
    {
        using type = Windows::UI::Composition::Interactions::IInteractionSourceConfiguration;
    };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTracker>
    {
        using type = Windows::UI::Composition::Interactions::IInteractionTracker;
    };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs>
    {
        using type = Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs;
    };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs>
    {
        using type = Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs;
    };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier>
    {
        using type = Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier;
    };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion>
    {
        using type = Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion;
    };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>
    {
        using type = Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion;
    };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue>
    {
        using type = Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue;
    };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs>
    {
        using type = Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs;
    };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs>
    {
        using type = Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs;
    };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs>
    {
        using type = Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs;
    };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs>
    {
        using type = Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs;
    };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier>
    {
        using type = Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier;
    };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion>
    {
        using type = Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion;
    };
    template <> struct default_interface<Windows::UI::Composition::Interactions::VisualInteractionSource>
    {
        using type = Windows::UI::Composition::Interactions::IVisualInteractionSource;
    };
    template <> struct abi<Windows::UI::Composition::Interactions::ICompositionConditionalValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Condition(void**) noexcept = 0;
            virtual int32_t __stdcall put_Condition(void*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::ICompositionInteractionSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Count(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Add(void*) noexcept = 0;
            virtual int32_t __stdcall Remove(void*) noexcept = 0;
            virtual int32_t __stdcall RemoveAll() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionSourceConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PositionXSourceMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionXSourceMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PositionYSourceMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionYSourceMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ScaleSourceMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleSourceMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTracker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InteractionSources(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsPositionRoundingSuggested(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MaxPosition(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_MaxPosition(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_MaxScale(float*) noexcept = 0;
            virtual int32_t __stdcall put_MaxScale(float) noexcept = 0;
            virtual int32_t __stdcall get_MinPosition(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_MinPosition(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_MinScale(float*) noexcept = 0;
            virtual int32_t __stdcall put_MinScale(float) noexcept = 0;
            virtual int32_t __stdcall get_NaturalRestingPosition(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_NaturalRestingScale(float*) noexcept = 0;
            virtual int32_t __stdcall get_Owner(void**) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_PositionInertiaDecayRate(void**) noexcept = 0;
            virtual int32_t __stdcall put_PositionInertiaDecayRate(void*) noexcept = 0;
            virtual int32_t __stdcall get_PositionVelocityInPixelsPerSecond(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_Scale(float*) noexcept = 0;
            virtual int32_t __stdcall get_ScaleInertiaDecayRate(void**) noexcept = 0;
            virtual int32_t __stdcall put_ScaleInertiaDecayRate(void*) noexcept = 0;
            virtual int32_t __stdcall get_ScaleVelocityInPercentPerSecond(float*) noexcept = 0;
            virtual int32_t __stdcall AdjustPositionXIfGreaterThanThreshold(float, float) noexcept = 0;
            virtual int32_t __stdcall AdjustPositionYIfGreaterThanThreshold(float, float) noexcept = 0;
            virtual int32_t __stdcall ConfigurePositionXInertiaModifiers(void*) noexcept = 0;
            virtual int32_t __stdcall ConfigurePositionYInertiaModifiers(void*) noexcept = 0;
            virtual int32_t __stdcall ConfigureScaleInertiaModifiers(void*) noexcept = 0;
            virtual int32_t __stdcall TryUpdatePosition(Windows::Foundation::Numerics::float3, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryUpdatePositionBy(Windows::Foundation::Numerics::float3, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryUpdatePositionWithAnimation(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryUpdatePositionWithAdditionalVelocity(Windows::Foundation::Numerics::float3, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryUpdateScale(float, Windows::Foundation::Numerics::float3, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryUpdateScaleWithAnimation(void*, Windows::Foundation::Numerics::float3, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryUpdateScaleWithAdditionalVelocity(float, Windows::Foundation::Numerics::float3, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTracker2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ConfigureCenterPointXInertiaModifiers(void*) noexcept = 0;
            virtual int32_t __stdcall ConfigureCenterPointYInertiaModifiers(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTracker3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ConfigureVector2PositionInertiaModifiers(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTracker4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryUpdatePositionWithOption(Windows::Foundation::Numerics::float3, int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryUpdatePositionByWithOption(Windows::Foundation::Numerics::float3, int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsInertiaFromImpulse(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTracker5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryUpdatePositionWithOption(Windows::Foundation::Numerics::float3, int32_t, int32_t, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestId(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsFromBinding(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestId(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsFromBinding(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Condition(void**) noexcept = 0;
            virtual int32_t __stdcall put_Condition(void*) noexcept = 0;
            virtual int32_t __stdcall get_Motion(void**) noexcept = 0;
            virtual int32_t __stdcall put_Motion(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Condition(void**) noexcept = 0;
            virtual int32_t __stdcall put_Condition(void*) noexcept = 0;
            virtual int32_t __stdcall get_NaturalMotion(void**) noexcept = 0;
            virtual int32_t __stdcall put_NaturalMotion(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Condition(void**) noexcept = 0;
            virtual int32_t __stdcall put_Condition(void*) noexcept = 0;
            virtual int32_t __stdcall get_RestingValue(void**) noexcept = 0;
            virtual int32_t __stdcall put_RestingValue(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ModifiedRestingPosition(void**) noexcept = 0;
            virtual int32_t __stdcall get_ModifiedRestingScale(void**) noexcept = 0;
            virtual int32_t __stdcall get_NaturalRestingPosition(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_NaturalRestingScale(float*) noexcept = 0;
            virtual int32_t __stdcall get_PositionVelocityInPixelsPerSecond(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_RequestId(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ScaleVelocityInPercentPerSecond(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsInertiaFromImpulse(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsFromBinding(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestId(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsFromBinding(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerOwner>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CustomAnimationStateEntered(void*, void*) noexcept = 0;
            virtual int32_t __stdcall IdleStateEntered(void*, void*) noexcept = 0;
            virtual int32_t __stdcall InertiaStateEntered(void*, void*) noexcept = 0;
            virtual int32_t __stdcall InteractingStateEntered(void*, void*) noexcept = 0;
            virtual int32_t __stdcall RequestIgnored(void*, void*) noexcept = 0;
            virtual int32_t __stdcall ValuesChanged(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestId(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithOwner(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetBindingMode(void*, void*, uint32_t) noexcept = 0;
            virtual int32_t __stdcall GetBindingMode(void*, void*, uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_RequestId(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Scale(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Condition(void**) noexcept = 0;
            virtual int32_t __stdcall put_Condition(void*) noexcept = 0;
            virtual int32_t __stdcall get_NaturalMotion(void**) noexcept = 0;
            virtual int32_t __stdcall put_NaturalMotion(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IVisualInteractionSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsPositionXRailsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPositionXRailsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsPositionYRailsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPositionYRailsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_ManipulationRedirectionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ManipulationRedirectionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PositionXChainingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionXChainingMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PositionXSourceMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionXSourceMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PositionYChainingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionYChainingMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PositionYSourceMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionYSourceMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ScaleChainingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleChainingMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ScaleSourceMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleSourceMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall TryRedirectForManipulation(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IVisualInteractionSource2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeltaPosition(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_DeltaScale(float*) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_PositionVelocity(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_Scale(float*) noexcept = 0;
            virtual int32_t __stdcall get_ScaleVelocity(float*) noexcept = 0;
            virtual int32_t __stdcall ConfigureCenterPointXModifiers(void*) noexcept = 0;
            virtual int32_t __stdcall ConfigureCenterPointYModifiers(void*) noexcept = 0;
            virtual int32_t __stdcall ConfigureDeltaPositionXModifiers(void*) noexcept = 0;
            virtual int32_t __stdcall ConfigureDeltaPositionYModifiers(void*) noexcept = 0;
            virtual int32_t __stdcall ConfigureDeltaScaleModifiers(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IVisualInteractionSource3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerWheelConfig(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromIVisualElement(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_ICompositionConditionalValue
    {
        [[nodiscard]] auto Condition() const;
        auto Condition(Windows::UI::Composition::ExpressionAnimation const& value) const;
        [[nodiscard]] auto Value() const;
        auto Value(Windows::UI::Composition::ExpressionAnimation const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::ICompositionConditionalValue>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_ICompositionConditionalValue<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_ICompositionConditionalValueStatics
    {
        auto Create(Windows::UI::Composition::Compositor const& compositor) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_ICompositionConditionalValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_ICompositionInteractionSource
    {
    };
    template <> struct consume<Windows::UI::Composition::Interactions::ICompositionInteractionSource>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_ICompositionInteractionSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_ICompositionInteractionSourceCollection
    {
        [[nodiscard]] auto Count() const;
        auto Add(Windows::UI::Composition::Interactions::ICompositionInteractionSource const& value) const;
        auto Remove(Windows::UI::Composition::Interactions::ICompositionInteractionSource const& value) const;
        auto RemoveAll() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_ICompositionInteractionSourceCollection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionSourceConfiguration
    {
        [[nodiscard]] auto PositionXSourceMode() const;
        auto PositionXSourceMode(Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode const& value) const;
        [[nodiscard]] auto PositionYSourceMode() const;
        auto PositionYSourceMode(Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode const& value) const;
        [[nodiscard]] auto ScaleSourceMode() const;
        auto ScaleSourceMode(Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionSourceConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionSourceConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTracker
    {
        [[nodiscard]] auto InteractionSources() const;
        [[nodiscard]] auto IsPositionRoundingSuggested() const;
        [[nodiscard]] auto MaxPosition() const;
        auto MaxPosition(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto MaxScale() const;
        auto MaxScale(float value) const;
        [[nodiscard]] auto MinPosition() const;
        auto MinPosition(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto MinScale() const;
        auto MinScale(float value) const;
        [[nodiscard]] auto NaturalRestingPosition() const;
        [[nodiscard]] auto NaturalRestingScale() const;
        [[nodiscard]] auto Owner() const;
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto PositionInertiaDecayRate() const;
        auto PositionInertiaDecayRate(Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> const& value) const;
        [[nodiscard]] auto PositionVelocityInPixelsPerSecond() const;
        [[nodiscard]] auto Scale() const;
        [[nodiscard]] auto ScaleInertiaDecayRate() const;
        auto ScaleInertiaDecayRate(Windows::Foundation::IReference<float> const& value) const;
        [[nodiscard]] auto ScaleVelocityInPercentPerSecond() const;
        auto AdjustPositionXIfGreaterThanThreshold(float adjustment, float positionThreshold) const;
        auto AdjustPositionYIfGreaterThanThreshold(float adjustment, float positionThreshold) const;
        auto ConfigurePositionXInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const& modifiers) const;
        auto ConfigurePositionYInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const& modifiers) const;
        auto ConfigureScaleInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const& modifiers) const;
        auto TryUpdatePosition(Windows::Foundation::Numerics::float3 const& value) const;
        auto TryUpdatePositionBy(Windows::Foundation::Numerics::float3 const& amount) const;
        auto TryUpdatePositionWithAnimation(Windows::UI::Composition::CompositionAnimation const& animation) const;
        auto TryUpdatePositionWithAdditionalVelocity(Windows::Foundation::Numerics::float3 const& velocityInPixelsPerSecond) const;
        auto TryUpdateScale(float value, Windows::Foundation::Numerics::float3 const& centerPoint) const;
        auto TryUpdateScaleWithAnimation(Windows::UI::Composition::CompositionAnimation const& animation, Windows::Foundation::Numerics::float3 const& centerPoint) const;
        auto TryUpdateScaleWithAdditionalVelocity(float velocityInPercentPerSecond, Windows::Foundation::Numerics::float3 const& centerPoint) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTracker>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTracker2
    {
        auto ConfigureCenterPointXInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
        auto ConfigureCenterPointYInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTracker2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTracker2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTracker3
    {
        auto ConfigureVector2PositionInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier> const& modifiers) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTracker3>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTracker3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTracker4
    {
        auto TryUpdatePosition(Windows::Foundation::Numerics::float3 const& value, Windows::UI::Composition::Interactions::InteractionTrackerClampingOption const& option) const;
        auto TryUpdatePositionBy(Windows::Foundation::Numerics::float3 const& amount, Windows::UI::Composition::Interactions::InteractionTrackerClampingOption const& option) const;
        [[nodiscard]] auto IsInertiaFromImpulse() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTracker4>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTracker4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTracker5
    {
        auto TryUpdatePosition(Windows::Foundation::Numerics::float3 const& value, Windows::UI::Composition::Interactions::InteractionTrackerClampingOption const& option, Windows::UI::Composition::Interactions::InteractionTrackerPositionUpdateOption const& posUpdateOption) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTracker5>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTracker5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerCustomAnimationStateEnteredArgs
    {
        [[nodiscard]] auto RequestId() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerCustomAnimationStateEnteredArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerCustomAnimationStateEnteredArgs2
    {
        [[nodiscard]] auto IsFromBinding() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerCustomAnimationStateEnteredArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerIdleStateEnteredArgs
    {
        [[nodiscard]] auto RequestId() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerIdleStateEnteredArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerIdleStateEnteredArgs2
    {
        [[nodiscard]] auto IsFromBinding() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerIdleStateEnteredArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaModifier
    {
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaModifier<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaModifierFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaModifierFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotion
    {
        [[nodiscard]] auto Condition() const;
        auto Condition(Windows::UI::Composition::ExpressionAnimation const& value) const;
        [[nodiscard]] auto Motion() const;
        auto Motion(Windows::UI::Composition::ExpressionAnimation const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotion<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotionStatics
    {
        auto Create(Windows::UI::Composition::Compositor const& compositor) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotion
    {
        [[nodiscard]] auto Condition() const;
        auto Condition(Windows::UI::Composition::ExpressionAnimation const& value) const;
        [[nodiscard]] auto NaturalMotion() const;
        auto NaturalMotion(Windows::UI::Composition::ScalarNaturalMotionAnimation const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotion<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotionStatics
    {
        auto Create(Windows::UI::Composition::Compositor const& compositor) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValue
    {
        [[nodiscard]] auto Condition() const;
        auto Condition(Windows::UI::Composition::ExpressionAnimation const& value) const;
        [[nodiscard]] auto RestingValue() const;
        auto RestingValue(Windows::UI::Composition::ExpressionAnimation const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValue<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValueStatics
    {
        auto Create(Windows::UI::Composition::Compositor const& compositor) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs
    {
        [[nodiscard]] auto ModifiedRestingPosition() const;
        [[nodiscard]] auto ModifiedRestingScale() const;
        [[nodiscard]] auto NaturalRestingPosition() const;
        [[nodiscard]] auto NaturalRestingScale() const;
        [[nodiscard]] auto PositionVelocityInPixelsPerSecond() const;
        [[nodiscard]] auto RequestId() const;
        [[nodiscard]] auto ScaleVelocityInPercentPerSecond() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs2
    {
        [[nodiscard]] auto IsInertiaFromImpulse() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs3
    {
        [[nodiscard]] auto IsFromBinding() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInteractingStateEnteredArgs
    {
        [[nodiscard]] auto RequestId() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInteractingStateEnteredArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInteractingStateEnteredArgs2
    {
        [[nodiscard]] auto IsFromBinding() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInteractingStateEnteredArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerOwner
    {
        auto CustomAnimationStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs const& args) const;
        auto IdleStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs const& args) const;
        auto InertiaStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs const& args) const;
        auto InteractingStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs const& args) const;
        auto RequestIgnored(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs const& args) const;
        auto ValuesChanged(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs const& args) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerOwner>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerOwner<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerRequestIgnoredArgs
    {
        [[nodiscard]] auto RequestId() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerRequestIgnoredArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerStatics
    {
        auto Create(Windows::UI::Composition::Compositor const& compositor) const;
        auto CreateWithOwner(Windows::UI::Composition::Compositor const& compositor, Windows::UI::Composition::Interactions::IInteractionTrackerOwner const& owner) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerStatics2
    {
        auto SetBindingMode(Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker1, Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker2, Windows::UI::Composition::Interactions::InteractionBindingAxisModes const& axisMode) const;
        auto GetBindingMode(Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker1, Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker2) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerValuesChangedArgs
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto RequestId() const;
        [[nodiscard]] auto Scale() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerValuesChangedArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaModifier
    {
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaModifier<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaModifierFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaModifierFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotion
    {
        [[nodiscard]] auto Condition() const;
        auto Condition(Windows::UI::Composition::ExpressionAnimation const& value) const;
        [[nodiscard]] auto NaturalMotion() const;
        auto NaturalMotion(Windows::UI::Composition::Vector2NaturalMotionAnimation const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotion<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotionStatics
    {
        auto Create(Windows::UI::Composition::Compositor const& compositor) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IVisualInteractionSource
    {
        [[nodiscard]] auto IsPositionXRailsEnabled() const;
        auto IsPositionXRailsEnabled(bool value) const;
        [[nodiscard]] auto IsPositionYRailsEnabled() const;
        auto IsPositionYRailsEnabled(bool value) const;
        [[nodiscard]] auto ManipulationRedirectionMode() const;
        auto ManipulationRedirectionMode(Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode const& value) const;
        [[nodiscard]] auto PositionXChainingMode() const;
        auto PositionXChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode const& value) const;
        [[nodiscard]] auto PositionXSourceMode() const;
        auto PositionXSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode const& value) const;
        [[nodiscard]] auto PositionYChainingMode() const;
        auto PositionYChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode const& value) const;
        [[nodiscard]] auto PositionYSourceMode() const;
        auto PositionYSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode const& value) const;
        [[nodiscard]] auto ScaleChainingMode() const;
        auto ScaleChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode const& value) const;
        [[nodiscard]] auto ScaleSourceMode() const;
        auto ScaleSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode const& value) const;
        [[nodiscard]] auto Source() const;
        auto TryRedirectForManipulation(Windows::UI::Input::PointerPoint const& pointerPoint) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IVisualInteractionSource>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2
    {
        [[nodiscard]] auto DeltaPosition() const;
        [[nodiscard]] auto DeltaScale() const;
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto PositionVelocity() const;
        [[nodiscard]] auto Scale() const;
        [[nodiscard]] auto ScaleVelocity() const;
        auto ConfigureCenterPointXModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
        auto ConfigureCenterPointYModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
        auto ConfigureDeltaPositionXModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
        auto ConfigureDeltaPositionYModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
        auto ConfigureDeltaScaleModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IVisualInteractionSource2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IVisualInteractionSource3
    {
        [[nodiscard]] auto PointerWheelConfig() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IVisualInteractionSource3>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IVisualInteractionSource3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceObjectFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceObjectFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceStatics
    {
        auto Create(Windows::UI::Composition::Visual const& source) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceStatics2
    {
        auto CreateFromIVisualElement(Windows::UI::Composition::IVisualElement const& source) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceStatics2<D>;
    };
}
#endif
