// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Composition_Interactions_2_H
#define WINRT_Windows_UI_Composition_Interactions_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Composition.Interactions.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Composition::Interactions
{
    struct __declspec(empty_bases) CompositionConditionalValue : Windows::UI::Composition::Interactions::ICompositionConditionalValue,
        impl::base<CompositionConditionalValue, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionConditionalValue, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionConditionalValue(std::nullptr_t) noexcept {}
        CompositionConditionalValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Interactions::ICompositionConditionalValue(ptr, take_ownership_from_abi) {}
        static auto Create(Windows::UI::Composition::Compositor const& compositor);
    };
    struct __declspec(empty_bases) CompositionInteractionSourceCollection : Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection,
        impl::base<CompositionInteractionSourceCollection, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionInteractionSourceCollection, Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Interactions::ICompositionInteractionSource>, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionInteractionSourceCollection(std::nullptr_t) noexcept {}
        CompositionInteractionSourceCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InteractionSourceConfiguration : Windows::UI::Composition::Interactions::IInteractionSourceConfiguration,
        impl::base<InteractionSourceConfiguration, Windows::UI::Composition::CompositionObject>,
        impl::require<InteractionSourceConfiguration, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        InteractionSourceConfiguration(std::nullptr_t) noexcept {}
        InteractionSourceConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Interactions::IInteractionSourceConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InteractionTracker : Windows::UI::Composition::Interactions::IInteractionTracker,
        impl::base<InteractionTracker, Windows::UI::Composition::CompositionObject>,
        impl::require<InteractionTracker, Windows::UI::Composition::Interactions::IInteractionTracker2, Windows::UI::Composition::Interactions::IInteractionTracker3, Windows::UI::Composition::Interactions::IInteractionTracker4, Windows::UI::Composition::Interactions::IInteractionTracker5, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        InteractionTracker(std::nullptr_t) noexcept {}
        InteractionTracker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Interactions::IInteractionTracker(ptr, take_ownership_from_abi) {}
        using Windows::UI::Composition::Interactions::IInteractionTracker::TryUpdatePosition;
        using impl::consume_t<InteractionTracker, Windows::UI::Composition::Interactions::IInteractionTracker4>::TryUpdatePosition;
        using impl::consume_t<InteractionTracker, Windows::UI::Composition::Interactions::IInteractionTracker5>::TryUpdatePosition;
        using Windows::UI::Composition::Interactions::IInteractionTracker::TryUpdatePositionBy;
        using impl::consume_t<InteractionTracker, Windows::UI::Composition::Interactions::IInteractionTracker4>::TryUpdatePositionBy;
        static auto Create(Windows::UI::Composition::Compositor const& compositor);
        static auto CreateWithOwner(Windows::UI::Composition::Compositor const& compositor, Windows::UI::Composition::Interactions::IInteractionTrackerOwner const& owner);
        static auto SetBindingMode(Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker1, Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker2, Windows::UI::Composition::Interactions::InteractionBindingAxisModes const& axisMode);
        static auto GetBindingMode(Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker1, Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker2);
    };
    struct __declspec(empty_bases) InteractionTrackerCustomAnimationStateEnteredArgs : Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs,
        impl::require<InteractionTrackerCustomAnimationStateEnteredArgs, Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2>
    {
        InteractionTrackerCustomAnimationStateEnteredArgs(std::nullptr_t) noexcept {}
        InteractionTrackerCustomAnimationStateEnteredArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InteractionTrackerIdleStateEnteredArgs : Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs,
        impl::require<InteractionTrackerIdleStateEnteredArgs, Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2>
    {
        InteractionTrackerIdleStateEnteredArgs(std::nullptr_t) noexcept {}
        InteractionTrackerIdleStateEnteredArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InteractionTrackerInertiaModifier : Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier,
        impl::base<InteractionTrackerInertiaModifier, Windows::UI::Composition::CompositionObject>,
        impl::require<InteractionTrackerInertiaModifier, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        InteractionTrackerInertiaModifier(std::nullptr_t) noexcept {}
        InteractionTrackerInertiaModifier(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InteractionTrackerInertiaMotion : Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion,
        impl::base<InteractionTrackerInertiaMotion, Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier, Windows::UI::Composition::CompositionObject>,
        impl::require<InteractionTrackerInertiaMotion, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        InteractionTrackerInertiaMotion(std::nullptr_t) noexcept {}
        InteractionTrackerInertiaMotion(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion(ptr, take_ownership_from_abi) {}
        static auto Create(Windows::UI::Composition::Compositor const& compositor);
    };
    struct __declspec(empty_bases) InteractionTrackerInertiaNaturalMotion : Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion,
        impl::base<InteractionTrackerInertiaNaturalMotion, Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier, Windows::UI::Composition::CompositionObject>,
        impl::require<InteractionTrackerInertiaNaturalMotion, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        InteractionTrackerInertiaNaturalMotion(std::nullptr_t) noexcept {}
        InteractionTrackerInertiaNaturalMotion(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion(ptr, take_ownership_from_abi) {}
        static auto Create(Windows::UI::Composition::Compositor const& compositor);
    };
    struct __declspec(empty_bases) InteractionTrackerInertiaRestingValue : Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue,
        impl::base<InteractionTrackerInertiaRestingValue, Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier, Windows::UI::Composition::CompositionObject>,
        impl::require<InteractionTrackerInertiaRestingValue, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        InteractionTrackerInertiaRestingValue(std::nullptr_t) noexcept {}
        InteractionTrackerInertiaRestingValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue(ptr, take_ownership_from_abi) {}
        static auto Create(Windows::UI::Composition::Compositor const& compositor);
    };
    struct __declspec(empty_bases) InteractionTrackerInertiaStateEnteredArgs : Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs,
        impl::require<InteractionTrackerInertiaStateEnteredArgs, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2, Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3>
    {
        InteractionTrackerInertiaStateEnteredArgs(std::nullptr_t) noexcept {}
        InteractionTrackerInertiaStateEnteredArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InteractionTrackerInteractingStateEnteredArgs : Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs,
        impl::require<InteractionTrackerInteractingStateEnteredArgs, Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2>
    {
        InteractionTrackerInteractingStateEnteredArgs(std::nullptr_t) noexcept {}
        InteractionTrackerInteractingStateEnteredArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InteractionTrackerRequestIgnoredArgs : Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs
    {
        InteractionTrackerRequestIgnoredArgs(std::nullptr_t) noexcept {}
        InteractionTrackerRequestIgnoredArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InteractionTrackerValuesChangedArgs : Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs
    {
        InteractionTrackerValuesChangedArgs(std::nullptr_t) noexcept {}
        InteractionTrackerValuesChangedArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InteractionTrackerVector2InertiaModifier : Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier,
        impl::base<InteractionTrackerVector2InertiaModifier, Windows::UI::Composition::CompositionObject>,
        impl::require<InteractionTrackerVector2InertiaModifier, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        InteractionTrackerVector2InertiaModifier(std::nullptr_t) noexcept {}
        InteractionTrackerVector2InertiaModifier(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InteractionTrackerVector2InertiaNaturalMotion : Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion,
        impl::base<InteractionTrackerVector2InertiaNaturalMotion, Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier, Windows::UI::Composition::CompositionObject>,
        impl::require<InteractionTrackerVector2InertiaNaturalMotion, Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        InteractionTrackerVector2InertiaNaturalMotion(std::nullptr_t) noexcept {}
        InteractionTrackerVector2InertiaNaturalMotion(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion(ptr, take_ownership_from_abi) {}
        static auto Create(Windows::UI::Composition::Compositor const& compositor);
    };
    struct __declspec(empty_bases) VisualInteractionSource : Windows::UI::Composition::Interactions::IVisualInteractionSource,
        impl::base<VisualInteractionSource, Windows::UI::Composition::CompositionObject>,
        impl::require<VisualInteractionSource, Windows::UI::Composition::Interactions::IVisualInteractionSource2, Windows::UI::Composition::Interactions::IVisualInteractionSource3, Windows::UI::Composition::Interactions::ICompositionInteractionSource, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        VisualInteractionSource(std::nullptr_t) noexcept {}
        VisualInteractionSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Interactions::IVisualInteractionSource(ptr, take_ownership_from_abi) {}
        static auto Create(Windows::UI::Composition::Visual const& source);
        static auto CreateFromIVisualElement(Windows::UI::Composition::IVisualElement const& source);
    };
}
#endif
