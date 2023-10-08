// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Composition_2_H
#define WINRT_Windows_UI_Composition_2_H
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Windows.Graphics.2.h"
#include "winrt/impl/Windows.Graphics.Effects.2.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Composition
{
    struct InkTrailPoint
    {
        Windows::Foundation::Point Point;
        float Radius;
    };
    inline bool operator==(InkTrailPoint const& left, InkTrailPoint const& right) noexcept
    {
        return left.Point == right.Point && left.Radius == right.Radius;
    }
    inline bool operator!=(InkTrailPoint const& left, InkTrailPoint const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AmbientLight : Windows::UI::Composition::IAmbientLight,
        impl::base<AmbientLight, Windows::UI::Composition::CompositionLight, Windows::UI::Composition::CompositionObject>,
        impl::require<AmbientLight, Windows::UI::Composition::IAmbientLight2, Windows::UI::Composition::ICompositionLight, Windows::UI::Composition::ICompositionLight2, Windows::UI::Composition::ICompositionLight3, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        AmbientLight(std::nullptr_t) noexcept {}
        AmbientLight(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IAmbientLight(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AnimationController : Windows::UI::Composition::IAnimationController,
        impl::base<AnimationController, Windows::UI::Composition::CompositionObject>,
        impl::require<AnimationController, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        AnimationController(std::nullptr_t) noexcept {}
        AnimationController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IAnimationController(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto MaxPlaybackRate();
        [[nodiscard]] static auto MinPlaybackRate();
    };
    struct __declspec(empty_bases) AnimationPropertyInfo : Windows::UI::Composition::IAnimationPropertyInfo,
        impl::base<AnimationPropertyInfo, Windows::UI::Composition::CompositionObject>,
        impl::require<AnimationPropertyInfo, Windows::UI::Composition::IAnimationPropertyInfo2, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        AnimationPropertyInfo(std::nullptr_t) noexcept {}
        AnimationPropertyInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IAnimationPropertyInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BackEasingFunction : Windows::UI::Composition::IBackEasingFunction,
        impl::base<BackEasingFunction, Windows::UI::Composition::CompositionEasingFunction, Windows::UI::Composition::CompositionObject>,
        impl::require<BackEasingFunction, Windows::UI::Composition::ICompositionEasingFunction, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        BackEasingFunction(std::nullptr_t) noexcept {}
        BackEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IBackEasingFunction(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BooleanKeyFrameAnimation : Windows::UI::Composition::IBooleanKeyFrameAnimation,
        impl::base<BooleanKeyFrameAnimation, Windows::UI::Composition::KeyFrameAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<BooleanKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation2, Windows::UI::Composition::IKeyFrameAnimation3, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        BooleanKeyFrameAnimation(std::nullptr_t) noexcept {}
        BooleanKeyFrameAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IBooleanKeyFrameAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BounceEasingFunction : Windows::UI::Composition::IBounceEasingFunction,
        impl::base<BounceEasingFunction, Windows::UI::Composition::CompositionEasingFunction, Windows::UI::Composition::CompositionObject>,
        impl::require<BounceEasingFunction, Windows::UI::Composition::ICompositionEasingFunction, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        BounceEasingFunction(std::nullptr_t) noexcept {}
        BounceEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IBounceEasingFunction(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BounceScalarNaturalMotionAnimation : Windows::UI::Composition::IBounceScalarNaturalMotionAnimation,
        impl::base<BounceScalarNaturalMotionAnimation, Windows::UI::Composition::ScalarNaturalMotionAnimation, Windows::UI::Composition::NaturalMotionAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<BounceScalarNaturalMotionAnimation, Windows::UI::Composition::IScalarNaturalMotionAnimation, Windows::UI::Composition::INaturalMotionAnimation, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        BounceScalarNaturalMotionAnimation(std::nullptr_t) noexcept {}
        BounceScalarNaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IBounceScalarNaturalMotionAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BounceVector2NaturalMotionAnimation : Windows::UI::Composition::IBounceVector2NaturalMotionAnimation,
        impl::base<BounceVector2NaturalMotionAnimation, Windows::UI::Composition::Vector2NaturalMotionAnimation, Windows::UI::Composition::NaturalMotionAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<BounceVector2NaturalMotionAnimation, Windows::UI::Composition::IVector2NaturalMotionAnimation, Windows::UI::Composition::INaturalMotionAnimation, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        BounceVector2NaturalMotionAnimation(std::nullptr_t) noexcept {}
        BounceVector2NaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IBounceVector2NaturalMotionAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BounceVector3NaturalMotionAnimation : Windows::UI::Composition::IBounceVector3NaturalMotionAnimation,
        impl::base<BounceVector3NaturalMotionAnimation, Windows::UI::Composition::Vector3NaturalMotionAnimation, Windows::UI::Composition::NaturalMotionAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<BounceVector3NaturalMotionAnimation, Windows::UI::Composition::IVector3NaturalMotionAnimation, Windows::UI::Composition::INaturalMotionAnimation, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        BounceVector3NaturalMotionAnimation(std::nullptr_t) noexcept {}
        BounceVector3NaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IBounceVector3NaturalMotionAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CircleEasingFunction : Windows::UI::Composition::ICircleEasingFunction,
        impl::base<CircleEasingFunction, Windows::UI::Composition::CompositionEasingFunction, Windows::UI::Composition::CompositionObject>,
        impl::require<CircleEasingFunction, Windows::UI::Composition::ICompositionEasingFunction, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CircleEasingFunction(std::nullptr_t) noexcept {}
        CircleEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICircleEasingFunction(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ColorKeyFrameAnimation : Windows::UI::Composition::IColorKeyFrameAnimation,
        impl::base<ColorKeyFrameAnimation, Windows::UI::Composition::KeyFrameAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<ColorKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation2, Windows::UI::Composition::IKeyFrameAnimation3, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        ColorKeyFrameAnimation(std::nullptr_t) noexcept {}
        ColorKeyFrameAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IColorKeyFrameAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionAnimation : Windows::UI::Composition::ICompositionAnimation,
        impl::base<CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionAnimation(std::nullptr_t) noexcept {}
        CompositionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionAnimationGroup : Windows::UI::Composition::ICompositionAnimationGroup,
        impl::base<CompositionAnimationGroup, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionAnimationGroup, Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionAnimation>, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionAnimationGroup(std::nullptr_t) noexcept {}
        CompositionAnimationGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionAnimationGroup(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionBackdropBrush : Windows::UI::Composition::ICompositionBackdropBrush,
        impl::base<CompositionBackdropBrush, Windows::UI::Composition::CompositionBrush, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionBackdropBrush, Windows::UI::Composition::ICompositionBrush, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionBackdropBrush(std::nullptr_t) noexcept {}
        CompositionBackdropBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionBackdropBrush(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionBatchCompletedEventArgs : Windows::UI::Composition::ICompositionBatchCompletedEventArgs,
        impl::base<CompositionBatchCompletedEventArgs, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionBatchCompletedEventArgs, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionBatchCompletedEventArgs(std::nullptr_t) noexcept {}
        CompositionBatchCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionBatchCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionBrush : Windows::UI::Composition::ICompositionBrush,
        impl::base<CompositionBrush, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionBrush, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionBrush(std::nullptr_t) noexcept {}
        CompositionBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionBrush(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionCapabilities : Windows::UI::Composition::ICompositionCapabilities
    {
        CompositionCapabilities(std::nullptr_t) noexcept {}
        CompositionCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionCapabilities(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) CompositionClip : Windows::UI::Composition::ICompositionClip,
        impl::base<CompositionClip, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionClip, Windows::UI::Composition::ICompositionClip2, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionClip(std::nullptr_t) noexcept {}
        CompositionClip(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionClip(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionColorBrush : Windows::UI::Composition::ICompositionColorBrush,
        impl::base<CompositionColorBrush, Windows::UI::Composition::CompositionBrush, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionColorBrush, Windows::UI::Composition::ICompositionBrush, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionColorBrush(std::nullptr_t) noexcept {}
        CompositionColorBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionColorBrush(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionColorGradientStop : Windows::UI::Composition::ICompositionColorGradientStop,
        impl::base<CompositionColorGradientStop, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionColorGradientStop, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionColorGradientStop(std::nullptr_t) noexcept {}
        CompositionColorGradientStop(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionColorGradientStop(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionColorGradientStopCollection : Windows::UI::Composition::ICompositionColorGradientStopCollection,
        impl::require<CompositionColorGradientStopCollection, Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionColorGradientStop>, Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionColorGradientStop>>
    {
        CompositionColorGradientStopCollection(std::nullptr_t) noexcept {}
        CompositionColorGradientStopCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionColorGradientStopCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionCommitBatch : Windows::UI::Composition::ICompositionCommitBatch,
        impl::base<CompositionCommitBatch, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionCommitBatch, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionCommitBatch(std::nullptr_t) noexcept {}
        CompositionCommitBatch(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionCommitBatch(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionContainerShape : Windows::UI::Composition::ICompositionContainerShape,
        impl::base<CompositionContainerShape, Windows::UI::Composition::CompositionShape, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionContainerShape, Windows::UI::Composition::ICompositionShape, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionContainerShape(std::nullptr_t) noexcept {}
        CompositionContainerShape(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionContainerShape(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionDrawingSurface : Windows::UI::Composition::ICompositionDrawingSurface,
        impl::base<CompositionDrawingSurface, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionDrawingSurface, Windows::UI::Composition::ICompositionDrawingSurface2, Windows::UI::Composition::ICompositionSurface, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionDrawingSurface(std::nullptr_t) noexcept {}
        CompositionDrawingSurface(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionDrawingSurface(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionEasingFunction : Windows::UI::Composition::ICompositionEasingFunction,
        impl::base<CompositionEasingFunction, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionEasingFunction, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionEasingFunction(std::nullptr_t) noexcept {}
        CompositionEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionEasingFunction(ptr, take_ownership_from_abi) {}
        static auto CreateCubicBezierEasingFunction(Windows::UI::Composition::Compositor const& owner, Windows::Foundation::Numerics::float2 const& controlPoint1, Windows::Foundation::Numerics::float2 const& controlPoint2);
        static auto CreateLinearEasingFunction(Windows::UI::Composition::Compositor const& owner);
        static auto CreateStepEasingFunction(Windows::UI::Composition::Compositor const& owner);
        static auto CreateStepEasingFunction(Windows::UI::Composition::Compositor const& owner, int32_t stepCount);
        static auto CreateBackEasingFunction(Windows::UI::Composition::Compositor const& owner, Windows::UI::Composition::CompositionEasingFunctionMode const& mode, float amplitude);
        static auto CreateBounceEasingFunction(Windows::UI::Composition::Compositor const& owner, Windows::UI::Composition::CompositionEasingFunctionMode const& mode, int32_t bounces, float bounciness);
        static auto CreateCircleEasingFunction(Windows::UI::Composition::Compositor const& owner, Windows::UI::Composition::CompositionEasingFunctionMode const& mode);
        static auto CreateElasticEasingFunction(Windows::UI::Composition::Compositor const& owner, Windows::UI::Composition::CompositionEasingFunctionMode const& mode, int32_t oscillations, float springiness);
        static auto CreateExponentialEasingFunction(Windows::UI::Composition::Compositor const& owner, Windows::UI::Composition::CompositionEasingFunctionMode const& mode, float exponent);
        static auto CreatePowerEasingFunction(Windows::UI::Composition::Compositor const& owner, Windows::UI::Composition::CompositionEasingFunctionMode const& mode, float power);
        static auto CreateSineEasingFunction(Windows::UI::Composition::Compositor const& owner, Windows::UI::Composition::CompositionEasingFunctionMode const& mode);
    };
    struct __declspec(empty_bases) CompositionEffectBrush : Windows::UI::Composition::ICompositionEffectBrush,
        impl::base<CompositionEffectBrush, Windows::UI::Composition::CompositionBrush, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionEffectBrush, Windows::UI::Composition::ICompositionBrush, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionEffectBrush(std::nullptr_t) noexcept {}
        CompositionEffectBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionEffectBrush(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionEffectFactory : Windows::UI::Composition::ICompositionEffectFactory,
        impl::base<CompositionEffectFactory, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionEffectFactory, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionEffectFactory(std::nullptr_t) noexcept {}
        CompositionEffectFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionEffectFactory(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionEffectSourceParameter : Windows::UI::Composition::ICompositionEffectSourceParameter,
        impl::require<CompositionEffectSourceParameter, Windows::Graphics::Effects::IGraphicsEffectSource>
    {
        CompositionEffectSourceParameter(std::nullptr_t) noexcept {}
        CompositionEffectSourceParameter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionEffectSourceParameter(ptr, take_ownership_from_abi) {}
        explicit CompositionEffectSourceParameter(param::hstring const& name);
    };
    struct __declspec(empty_bases) CompositionEllipseGeometry : Windows::UI::Composition::ICompositionEllipseGeometry,
        impl::base<CompositionEllipseGeometry, Windows::UI::Composition::CompositionGeometry, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionEllipseGeometry, Windows::UI::Composition::ICompositionGeometry, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionEllipseGeometry(std::nullptr_t) noexcept {}
        CompositionEllipseGeometry(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionEllipseGeometry(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionGeometricClip : Windows::UI::Composition::ICompositionGeometricClip,
        impl::base<CompositionGeometricClip, Windows::UI::Composition::CompositionClip, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionGeometricClip, Windows::UI::Composition::ICompositionClip, Windows::UI::Composition::ICompositionClip2, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionGeometricClip(std::nullptr_t) noexcept {}
        CompositionGeometricClip(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionGeometricClip(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionGeometry : Windows::UI::Composition::ICompositionGeometry,
        impl::base<CompositionGeometry, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionGeometry, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionGeometry(std::nullptr_t) noexcept {}
        CompositionGeometry(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionGeometry(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionGradientBrush : Windows::UI::Composition::ICompositionGradientBrush,
        impl::base<CompositionGradientBrush, Windows::UI::Composition::CompositionBrush, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionGradientBrush, Windows::UI::Composition::ICompositionGradientBrush2, Windows::UI::Composition::ICompositionBrush, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionGradientBrush(std::nullptr_t) noexcept {}
        CompositionGradientBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionGradientBrush(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionGraphicsDevice : Windows::UI::Composition::ICompositionGraphicsDevice,
        impl::base<CompositionGraphicsDevice, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionGraphicsDevice, Windows::UI::Composition::ICompositionGraphicsDevice2, Windows::UI::Composition::ICompositionGraphicsDevice3, Windows::UI::Composition::ICompositionGraphicsDevice4, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionGraphicsDevice(std::nullptr_t) noexcept {}
        CompositionGraphicsDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionGraphicsDevice(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionLight : Windows::UI::Composition::ICompositionLight,
        impl::base<CompositionLight, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionLight, Windows::UI::Composition::ICompositionLight2, Windows::UI::Composition::ICompositionLight3, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionLight(std::nullptr_t) noexcept {}
        CompositionLight(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionLight(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionLineGeometry : Windows::UI::Composition::ICompositionLineGeometry,
        impl::base<CompositionLineGeometry, Windows::UI::Composition::CompositionGeometry, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionLineGeometry, Windows::UI::Composition::ICompositionGeometry, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionLineGeometry(std::nullptr_t) noexcept {}
        CompositionLineGeometry(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionLineGeometry(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionLinearGradientBrush : Windows::UI::Composition::ICompositionLinearGradientBrush,
        impl::base<CompositionLinearGradientBrush, Windows::UI::Composition::CompositionGradientBrush, Windows::UI::Composition::CompositionBrush, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionLinearGradientBrush, Windows::UI::Composition::ICompositionGradientBrush, Windows::UI::Composition::ICompositionGradientBrush2, Windows::UI::Composition::ICompositionBrush, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionLinearGradientBrush(std::nullptr_t) noexcept {}
        CompositionLinearGradientBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionLinearGradientBrush(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionMaskBrush : Windows::UI::Composition::ICompositionMaskBrush,
        impl::base<CompositionMaskBrush, Windows::UI::Composition::CompositionBrush, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionMaskBrush, Windows::UI::Composition::ICompositionBrush, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionMaskBrush(std::nullptr_t) noexcept {}
        CompositionMaskBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionMaskBrush(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionMipmapSurface : Windows::UI::Composition::ICompositionMipmapSurface,
        impl::base<CompositionMipmapSurface, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionMipmapSurface, Windows::UI::Composition::ICompositionSurface, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionMipmapSurface(std::nullptr_t) noexcept {}
        CompositionMipmapSurface(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionMipmapSurface(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionNineGridBrush : Windows::UI::Composition::ICompositionNineGridBrush,
        impl::base<CompositionNineGridBrush, Windows::UI::Composition::CompositionBrush, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionNineGridBrush, Windows::UI::Composition::ICompositionBrush, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionNineGridBrush(std::nullptr_t) noexcept {}
        CompositionNineGridBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionNineGridBrush(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionObject : Windows::UI::Composition::ICompositionObject,
        impl::require<CompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionObject(std::nullptr_t) noexcept {}
        CompositionObject(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionObject(ptr, take_ownership_from_abi) {}
        static auto StartAnimationWithIAnimationObject(Windows::UI::Composition::IAnimationObject const& target, param::hstring const& propertyName, Windows::UI::Composition::CompositionAnimation const& animation);
        static auto StartAnimationGroupWithIAnimationObject(Windows::UI::Composition::IAnimationObject const& target, Windows::UI::Composition::ICompositionAnimationBase const& animation);
    };
    struct __declspec(empty_bases) CompositionPath : Windows::UI::Composition::ICompositionPath,
        impl::require<CompositionPath, Windows::Graphics::IGeometrySource2D>
    {
        CompositionPath(std::nullptr_t) noexcept {}
        CompositionPath(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionPath(ptr, take_ownership_from_abi) {}
        explicit CompositionPath(Windows::Graphics::IGeometrySource2D const& source);
    };
    struct __declspec(empty_bases) CompositionPathGeometry : Windows::UI::Composition::ICompositionPathGeometry,
        impl::base<CompositionPathGeometry, Windows::UI::Composition::CompositionGeometry, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionPathGeometry, Windows::UI::Composition::ICompositionGeometry, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionPathGeometry(std::nullptr_t) noexcept {}
        CompositionPathGeometry(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionPathGeometry(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionProjectedShadow : Windows::UI::Composition::ICompositionProjectedShadow,
        impl::base<CompositionProjectedShadow, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionProjectedShadow, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionProjectedShadow(std::nullptr_t) noexcept {}
        CompositionProjectedShadow(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionProjectedShadow(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionProjectedShadowCaster : Windows::UI::Composition::ICompositionProjectedShadowCaster,
        impl::base<CompositionProjectedShadowCaster, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionProjectedShadowCaster, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionProjectedShadowCaster(std::nullptr_t) noexcept {}
        CompositionProjectedShadowCaster(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionProjectedShadowCaster(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionProjectedShadowCasterCollection : Windows::UI::Composition::ICompositionProjectedShadowCasterCollection,
        impl::base<CompositionProjectedShadowCasterCollection, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionProjectedShadowCasterCollection, Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionProjectedShadowCaster>, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionProjectedShadowCasterCollection(std::nullptr_t) noexcept {}
        CompositionProjectedShadowCasterCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionProjectedShadowCasterCollection(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto MaxRespectedCasters();
    };
    struct __declspec(empty_bases) CompositionProjectedShadowReceiver : Windows::UI::Composition::ICompositionProjectedShadowReceiver,
        impl::base<CompositionProjectedShadowReceiver, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionProjectedShadowReceiver, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionProjectedShadowReceiver(std::nullptr_t) noexcept {}
        CompositionProjectedShadowReceiver(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionProjectedShadowReceiver(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionProjectedShadowReceiverUnorderedCollection : Windows::UI::Composition::ICompositionProjectedShadowReceiverUnorderedCollection,
        impl::base<CompositionProjectedShadowReceiverUnorderedCollection, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionProjectedShadowReceiverUnorderedCollection, Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionProjectedShadowReceiver>, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionProjectedShadowReceiverUnorderedCollection(std::nullptr_t) noexcept {}
        CompositionProjectedShadowReceiverUnorderedCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionProjectedShadowReceiverUnorderedCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionPropertySet : Windows::UI::Composition::ICompositionPropertySet,
        impl::base<CompositionPropertySet, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionPropertySet, Windows::UI::Composition::ICompositionPropertySet2, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionPropertySet(std::nullptr_t) noexcept {}
        CompositionPropertySet(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionPropertySet(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionRadialGradientBrush : Windows::UI::Composition::ICompositionRadialGradientBrush,
        impl::base<CompositionRadialGradientBrush, Windows::UI::Composition::CompositionGradientBrush, Windows::UI::Composition::CompositionBrush, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionRadialGradientBrush, Windows::UI::Composition::ICompositionGradientBrush, Windows::UI::Composition::ICompositionGradientBrush2, Windows::UI::Composition::ICompositionBrush, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionRadialGradientBrush(std::nullptr_t) noexcept {}
        CompositionRadialGradientBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionRadialGradientBrush(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionRectangleGeometry : Windows::UI::Composition::ICompositionRectangleGeometry,
        impl::base<CompositionRectangleGeometry, Windows::UI::Composition::CompositionGeometry, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionRectangleGeometry, Windows::UI::Composition::ICompositionGeometry, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionRectangleGeometry(std::nullptr_t) noexcept {}
        CompositionRectangleGeometry(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionRectangleGeometry(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionRoundedRectangleGeometry : Windows::UI::Composition::ICompositionRoundedRectangleGeometry,
        impl::base<CompositionRoundedRectangleGeometry, Windows::UI::Composition::CompositionGeometry, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionRoundedRectangleGeometry, Windows::UI::Composition::ICompositionGeometry, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionRoundedRectangleGeometry(std::nullptr_t) noexcept {}
        CompositionRoundedRectangleGeometry(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionRoundedRectangleGeometry(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionScopedBatch : Windows::UI::Composition::ICompositionScopedBatch,
        impl::base<CompositionScopedBatch, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionScopedBatch, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionScopedBatch(std::nullptr_t) noexcept {}
        CompositionScopedBatch(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionScopedBatch(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionShadow : Windows::UI::Composition::ICompositionShadow,
        impl::base<CompositionShadow, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionShadow, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionShadow(std::nullptr_t) noexcept {}
        CompositionShadow(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionShadow(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionShape : Windows::UI::Composition::ICompositionShape,
        impl::base<CompositionShape, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionShape, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionShape(std::nullptr_t) noexcept {}
        CompositionShape(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionShape(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionShapeCollection : Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionShape>,
        impl::base<CompositionShapeCollection, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionShapeCollection, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionShapeCollection(std::nullptr_t) noexcept {}
        CompositionShapeCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionShape>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionSpriteShape : Windows::UI::Composition::ICompositionSpriteShape,
        impl::base<CompositionSpriteShape, Windows::UI::Composition::CompositionShape, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionSpriteShape, Windows::UI::Composition::ICompositionShape, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionSpriteShape(std::nullptr_t) noexcept {}
        CompositionSpriteShape(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionSpriteShape(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionStrokeDashArray : Windows::Foundation::Collections::IVector<float>,
        impl::base<CompositionStrokeDashArray, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionStrokeDashArray, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionStrokeDashArray(std::nullptr_t) noexcept {}
        CompositionStrokeDashArray(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<float>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionSurfaceBrush : Windows::UI::Composition::ICompositionSurfaceBrush,
        impl::base<CompositionSurfaceBrush, Windows::UI::Composition::CompositionBrush, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionSurfaceBrush, Windows::UI::Composition::ICompositionSurfaceBrush2, Windows::UI::Composition::ICompositionSurfaceBrush3, Windows::UI::Composition::ICompositionBrush, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionSurfaceBrush(std::nullptr_t) noexcept {}
        CompositionSurfaceBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionSurfaceBrush(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionTarget : Windows::UI::Composition::ICompositionTarget,
        impl::base<CompositionTarget, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionTarget, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionTarget(std::nullptr_t) noexcept {}
        CompositionTarget(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionTarget(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionTransform : Windows::UI::Composition::ICompositionTransform,
        impl::base<CompositionTransform, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionTransform, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionTransform(std::nullptr_t) noexcept {}
        CompositionTransform(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionTransform(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionViewBox : Windows::UI::Composition::ICompositionViewBox,
        impl::base<CompositionViewBox, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionViewBox, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionViewBox(std::nullptr_t) noexcept {}
        CompositionViewBox(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionViewBox(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionVirtualDrawingSurface : Windows::UI::Composition::ICompositionVirtualDrawingSurface,
        impl::base<CompositionVirtualDrawingSurface, Windows::UI::Composition::CompositionDrawingSurface, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionVirtualDrawingSurface, Windows::UI::Composition::ICompositionDrawingSurface, Windows::UI::Composition::ICompositionDrawingSurface2, Windows::UI::Composition::ICompositionSurface, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionVirtualDrawingSurface(std::nullptr_t) noexcept {}
        CompositionVirtualDrawingSurface(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionVirtualDrawingSurface(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionVisualSurface : Windows::UI::Composition::ICompositionVisualSurface,
        impl::base<CompositionVisualSurface, Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionVisualSurface, Windows::UI::Composition::ICompositionSurface, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CompositionVisualSurface(std::nullptr_t) noexcept {}
        CompositionVisualSurface(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositionVisualSurface(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Compositor : Windows::UI::Composition::ICompositor,
        impl::require<Compositor, Windows::UI::Composition::ICompositor2, Windows::UI::Composition::ICompositor3, Windows::UI::Composition::ICompositor4, Windows::UI::Composition::ICompositor5, Windows::UI::Composition::ICompositor6, Windows::UI::Composition::ICompositorWithProjectedShadow, Windows::UI::Composition::ICompositorWithRadialGradient, Windows::UI::Composition::ICompositorWithVisualSurface, Windows::UI::Composition::ICompositor7, Windows::UI::Composition::ICompositorWithBlurredWallpaperBackdropBrush, Windows::Foundation::IClosable>
    {
        Compositor(std::nullptr_t) noexcept {}
        Compositor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICompositor(ptr, take_ownership_from_abi) {}
        Compositor();
        [[nodiscard]] static auto MaxGlobalPlaybackRate();
        [[nodiscard]] static auto MinGlobalPlaybackRate();
    };
    struct __declspec(empty_bases) ContainerVisual : Windows::UI::Composition::IContainerVisual,
        impl::base<ContainerVisual, Windows::UI::Composition::Visual, Windows::UI::Composition::CompositionObject>,
        impl::require<ContainerVisual, Windows::UI::Composition::IVisual, Windows::UI::Composition::IVisual2, Windows::UI::Composition::IVisual3, Windows::UI::Composition::IVisual4, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        ContainerVisual(std::nullptr_t) noexcept {}
        ContainerVisual(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IContainerVisual(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CubicBezierEasingFunction : Windows::UI::Composition::ICubicBezierEasingFunction,
        impl::base<CubicBezierEasingFunction, Windows::UI::Composition::CompositionEasingFunction, Windows::UI::Composition::CompositionObject>,
        impl::require<CubicBezierEasingFunction, Windows::UI::Composition::ICompositionEasingFunction, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        CubicBezierEasingFunction(std::nullptr_t) noexcept {}
        CubicBezierEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ICubicBezierEasingFunction(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DelegatedInkTrailVisual : Windows::UI::Composition::IDelegatedInkTrailVisual,
        impl::base<DelegatedInkTrailVisual, Windows::UI::Composition::Visual, Windows::UI::Composition::CompositionObject>,
        impl::require<DelegatedInkTrailVisual, Windows::UI::Composition::IVisual, Windows::UI::Composition::IVisual2, Windows::UI::Composition::IVisual3, Windows::UI::Composition::IVisual4, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        DelegatedInkTrailVisual(std::nullptr_t) noexcept {}
        DelegatedInkTrailVisual(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IDelegatedInkTrailVisual(ptr, take_ownership_from_abi) {}
        static auto Create(Windows::UI::Composition::Compositor const& compositor);
        static auto CreateForSwapChain(Windows::UI::Composition::Compositor const& compositor, Windows::UI::Composition::ICompositionSurface const& swapChain);
    };
    struct __declspec(empty_bases) DistantLight : Windows::UI::Composition::IDistantLight,
        impl::base<DistantLight, Windows::UI::Composition::CompositionLight, Windows::UI::Composition::CompositionObject>,
        impl::require<DistantLight, Windows::UI::Composition::IDistantLight2, Windows::UI::Composition::ICompositionLight, Windows::UI::Composition::ICompositionLight2, Windows::UI::Composition::ICompositionLight3, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        DistantLight(std::nullptr_t) noexcept {}
        DistantLight(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IDistantLight(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DropShadow : Windows::UI::Composition::IDropShadow,
        impl::base<DropShadow, Windows::UI::Composition::CompositionShadow, Windows::UI::Composition::CompositionObject>,
        impl::require<DropShadow, Windows::UI::Composition::IDropShadow2, Windows::UI::Composition::ICompositionShadow, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        DropShadow(std::nullptr_t) noexcept {}
        DropShadow(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IDropShadow(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ElasticEasingFunction : Windows::UI::Composition::IElasticEasingFunction,
        impl::base<ElasticEasingFunction, Windows::UI::Composition::CompositionEasingFunction, Windows::UI::Composition::CompositionObject>,
        impl::require<ElasticEasingFunction, Windows::UI::Composition::ICompositionEasingFunction, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        ElasticEasingFunction(std::nullptr_t) noexcept {}
        ElasticEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IElasticEasingFunction(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ExponentialEasingFunction : Windows::UI::Composition::IExponentialEasingFunction,
        impl::base<ExponentialEasingFunction, Windows::UI::Composition::CompositionEasingFunction, Windows::UI::Composition::CompositionObject>,
        impl::require<ExponentialEasingFunction, Windows::UI::Composition::ICompositionEasingFunction, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        ExponentialEasingFunction(std::nullptr_t) noexcept {}
        ExponentialEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IExponentialEasingFunction(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ExpressionAnimation : Windows::UI::Composition::IExpressionAnimation,
        impl::base<ExpressionAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<ExpressionAnimation, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        ExpressionAnimation(std::nullptr_t) noexcept {}
        ExpressionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IExpressionAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ImplicitAnimationCollection : Windows::UI::Composition::IImplicitAnimationCollection,
        impl::base<ImplicitAnimationCollection, Windows::UI::Composition::CompositionObject>,
        impl::require<ImplicitAnimationCollection, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::UI::Composition::ICompositionAnimationBase>>, Windows::Foundation::Collections::IMap<hstring, Windows::UI::Composition::ICompositionAnimationBase>, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        ImplicitAnimationCollection(std::nullptr_t) noexcept {}
        ImplicitAnimationCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IImplicitAnimationCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InitialValueExpressionCollection : Windows::Foundation::Collections::IMap<hstring, hstring>,
        impl::base<InitialValueExpressionCollection, Windows::UI::Composition::CompositionObject>,
        impl::require<InitialValueExpressionCollection, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        InitialValueExpressionCollection(std::nullptr_t) noexcept {}
        InitialValueExpressionCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IMap<hstring, hstring>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InsetClip : Windows::UI::Composition::IInsetClip,
        impl::base<InsetClip, Windows::UI::Composition::CompositionClip, Windows::UI::Composition::CompositionObject>,
        impl::require<InsetClip, Windows::UI::Composition::ICompositionClip, Windows::UI::Composition::ICompositionClip2, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        InsetClip(std::nullptr_t) noexcept {}
        InsetClip(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IInsetClip(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) KeyFrameAnimation : Windows::UI::Composition::IKeyFrameAnimation,
        impl::base<KeyFrameAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<KeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation2, Windows::UI::Composition::IKeyFrameAnimation3, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        KeyFrameAnimation(std::nullptr_t) noexcept {}
        KeyFrameAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IKeyFrameAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LayerVisual : Windows::UI::Composition::ILayerVisual,
        impl::base<LayerVisual, Windows::UI::Composition::ContainerVisual, Windows::UI::Composition::Visual, Windows::UI::Composition::CompositionObject>,
        impl::require<LayerVisual, Windows::UI::Composition::ILayerVisual2, Windows::UI::Composition::IContainerVisual, Windows::UI::Composition::IVisual, Windows::UI::Composition::IVisual2, Windows::UI::Composition::IVisual3, Windows::UI::Composition::IVisual4, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        LayerVisual(std::nullptr_t) noexcept {}
        LayerVisual(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ILayerVisual(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LinearEasingFunction : Windows::UI::Composition::ILinearEasingFunction,
        impl::base<LinearEasingFunction, Windows::UI::Composition::CompositionEasingFunction, Windows::UI::Composition::CompositionObject>,
        impl::require<LinearEasingFunction, Windows::UI::Composition::ICompositionEasingFunction, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        LinearEasingFunction(std::nullptr_t) noexcept {}
        LinearEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ILinearEasingFunction(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NaturalMotionAnimation : Windows::UI::Composition::INaturalMotionAnimation,
        impl::base<NaturalMotionAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<NaturalMotionAnimation, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        NaturalMotionAnimation(std::nullptr_t) noexcept {}
        NaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::INaturalMotionAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PathKeyFrameAnimation : Windows::UI::Composition::IPathKeyFrameAnimation,
        impl::base<PathKeyFrameAnimation, Windows::UI::Composition::KeyFrameAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<PathKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation2, Windows::UI::Composition::IKeyFrameAnimation3, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        PathKeyFrameAnimation(std::nullptr_t) noexcept {}
        PathKeyFrameAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IPathKeyFrameAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PointLight : Windows::UI::Composition::IPointLight,
        impl::base<PointLight, Windows::UI::Composition::CompositionLight, Windows::UI::Composition::CompositionObject>,
        impl::require<PointLight, Windows::UI::Composition::IPointLight2, Windows::UI::Composition::IPointLight3, Windows::UI::Composition::ICompositionLight, Windows::UI::Composition::ICompositionLight2, Windows::UI::Composition::ICompositionLight3, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        PointLight(std::nullptr_t) noexcept {}
        PointLight(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IPointLight(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PowerEasingFunction : Windows::UI::Composition::IPowerEasingFunction,
        impl::base<PowerEasingFunction, Windows::UI::Composition::CompositionEasingFunction, Windows::UI::Composition::CompositionObject>,
        impl::require<PowerEasingFunction, Windows::UI::Composition::ICompositionEasingFunction, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        PowerEasingFunction(std::nullptr_t) noexcept {}
        PowerEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IPowerEasingFunction(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) QuaternionKeyFrameAnimation : Windows::UI::Composition::IQuaternionKeyFrameAnimation,
        impl::base<QuaternionKeyFrameAnimation, Windows::UI::Composition::KeyFrameAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<QuaternionKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation2, Windows::UI::Composition::IKeyFrameAnimation3, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        QuaternionKeyFrameAnimation(std::nullptr_t) noexcept {}
        QuaternionKeyFrameAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IQuaternionKeyFrameAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RectangleClip : Windows::UI::Composition::IRectangleClip,
        impl::base<RectangleClip, Windows::UI::Composition::CompositionClip, Windows::UI::Composition::CompositionObject>,
        impl::require<RectangleClip, Windows::UI::Composition::ICompositionClip, Windows::UI::Composition::ICompositionClip2, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        RectangleClip(std::nullptr_t) noexcept {}
        RectangleClip(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IRectangleClip(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RedirectVisual : Windows::UI::Composition::IRedirectVisual,
        impl::base<RedirectVisual, Windows::UI::Composition::ContainerVisual, Windows::UI::Composition::Visual, Windows::UI::Composition::CompositionObject>,
        impl::require<RedirectVisual, Windows::UI::Composition::IContainerVisual, Windows::UI::Composition::IVisual, Windows::UI::Composition::IVisual2, Windows::UI::Composition::IVisual3, Windows::UI::Composition::IVisual4, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        RedirectVisual(std::nullptr_t) noexcept {}
        RedirectVisual(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IRedirectVisual(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RenderingDeviceReplacedEventArgs : Windows::UI::Composition::IRenderingDeviceReplacedEventArgs,
        impl::base<RenderingDeviceReplacedEventArgs, Windows::UI::Composition::CompositionObject>,
        impl::require<RenderingDeviceReplacedEventArgs, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        RenderingDeviceReplacedEventArgs(std::nullptr_t) noexcept {}
        RenderingDeviceReplacedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IRenderingDeviceReplacedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ScalarKeyFrameAnimation : Windows::UI::Composition::IScalarKeyFrameAnimation,
        impl::base<ScalarKeyFrameAnimation, Windows::UI::Composition::KeyFrameAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<ScalarKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation2, Windows::UI::Composition::IKeyFrameAnimation3, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        ScalarKeyFrameAnimation(std::nullptr_t) noexcept {}
        ScalarKeyFrameAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IScalarKeyFrameAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ScalarNaturalMotionAnimation : Windows::UI::Composition::IScalarNaturalMotionAnimation,
        impl::base<ScalarNaturalMotionAnimation, Windows::UI::Composition::NaturalMotionAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<ScalarNaturalMotionAnimation, Windows::UI::Composition::INaturalMotionAnimation, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        ScalarNaturalMotionAnimation(std::nullptr_t) noexcept {}
        ScalarNaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IScalarNaturalMotionAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ShapeVisual : Windows::UI::Composition::IShapeVisual,
        impl::base<ShapeVisual, Windows::UI::Composition::ContainerVisual, Windows::UI::Composition::Visual, Windows::UI::Composition::CompositionObject>,
        impl::require<ShapeVisual, Windows::UI::Composition::IContainerVisual, Windows::UI::Composition::IVisual, Windows::UI::Composition::IVisual2, Windows::UI::Composition::IVisual3, Windows::UI::Composition::IVisual4, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        ShapeVisual(std::nullptr_t) noexcept {}
        ShapeVisual(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IShapeVisual(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SineEasingFunction : Windows::UI::Composition::ISineEasingFunction,
        impl::base<SineEasingFunction, Windows::UI::Composition::CompositionEasingFunction, Windows::UI::Composition::CompositionObject>,
        impl::require<SineEasingFunction, Windows::UI::Composition::ICompositionEasingFunction, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SineEasingFunction(std::nullptr_t) noexcept {}
        SineEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ISineEasingFunction(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SpotLight : Windows::UI::Composition::ISpotLight,
        impl::base<SpotLight, Windows::UI::Composition::CompositionLight, Windows::UI::Composition::CompositionObject>,
        impl::require<SpotLight, Windows::UI::Composition::ISpotLight2, Windows::UI::Composition::ISpotLight3, Windows::UI::Composition::ICompositionLight, Windows::UI::Composition::ICompositionLight2, Windows::UI::Composition::ICompositionLight3, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SpotLight(std::nullptr_t) noexcept {}
        SpotLight(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ISpotLight(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SpringScalarNaturalMotionAnimation : Windows::UI::Composition::ISpringScalarNaturalMotionAnimation,
        impl::base<SpringScalarNaturalMotionAnimation, Windows::UI::Composition::ScalarNaturalMotionAnimation, Windows::UI::Composition::NaturalMotionAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<SpringScalarNaturalMotionAnimation, Windows::UI::Composition::IScalarNaturalMotionAnimation, Windows::UI::Composition::INaturalMotionAnimation, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SpringScalarNaturalMotionAnimation(std::nullptr_t) noexcept {}
        SpringScalarNaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ISpringScalarNaturalMotionAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SpringVector2NaturalMotionAnimation : Windows::UI::Composition::ISpringVector2NaturalMotionAnimation,
        impl::base<SpringVector2NaturalMotionAnimation, Windows::UI::Composition::Vector2NaturalMotionAnimation, Windows::UI::Composition::NaturalMotionAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<SpringVector2NaturalMotionAnimation, Windows::UI::Composition::IVector2NaturalMotionAnimation, Windows::UI::Composition::INaturalMotionAnimation, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SpringVector2NaturalMotionAnimation(std::nullptr_t) noexcept {}
        SpringVector2NaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ISpringVector2NaturalMotionAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SpringVector3NaturalMotionAnimation : Windows::UI::Composition::ISpringVector3NaturalMotionAnimation,
        impl::base<SpringVector3NaturalMotionAnimation, Windows::UI::Composition::Vector3NaturalMotionAnimation, Windows::UI::Composition::NaturalMotionAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<SpringVector3NaturalMotionAnimation, Windows::UI::Composition::IVector3NaturalMotionAnimation, Windows::UI::Composition::INaturalMotionAnimation, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SpringVector3NaturalMotionAnimation(std::nullptr_t) noexcept {}
        SpringVector3NaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ISpringVector3NaturalMotionAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SpriteVisual : Windows::UI::Composition::ISpriteVisual,
        impl::base<SpriteVisual, Windows::UI::Composition::ContainerVisual, Windows::UI::Composition::Visual, Windows::UI::Composition::CompositionObject>,
        impl::require<SpriteVisual, Windows::UI::Composition::ISpriteVisual2, Windows::UI::Composition::IContainerVisual, Windows::UI::Composition::IVisual, Windows::UI::Composition::IVisual2, Windows::UI::Composition::IVisual3, Windows::UI::Composition::IVisual4, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SpriteVisual(std::nullptr_t) noexcept {}
        SpriteVisual(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::ISpriteVisual(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StepEasingFunction : Windows::UI::Composition::IStepEasingFunction,
        impl::base<StepEasingFunction, Windows::UI::Composition::CompositionEasingFunction, Windows::UI::Composition::CompositionObject>,
        impl::require<StepEasingFunction, Windows::UI::Composition::ICompositionEasingFunction, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        StepEasingFunction(std::nullptr_t) noexcept {}
        StepEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IStepEasingFunction(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Vector2KeyFrameAnimation : Windows::UI::Composition::IVector2KeyFrameAnimation,
        impl::base<Vector2KeyFrameAnimation, Windows::UI::Composition::KeyFrameAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<Vector2KeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation2, Windows::UI::Composition::IKeyFrameAnimation3, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        Vector2KeyFrameAnimation(std::nullptr_t) noexcept {}
        Vector2KeyFrameAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IVector2KeyFrameAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Vector2NaturalMotionAnimation : Windows::UI::Composition::IVector2NaturalMotionAnimation,
        impl::base<Vector2NaturalMotionAnimation, Windows::UI::Composition::NaturalMotionAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<Vector2NaturalMotionAnimation, Windows::UI::Composition::INaturalMotionAnimation, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        Vector2NaturalMotionAnimation(std::nullptr_t) noexcept {}
        Vector2NaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IVector2NaturalMotionAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Vector3KeyFrameAnimation : Windows::UI::Composition::IVector3KeyFrameAnimation,
        impl::base<Vector3KeyFrameAnimation, Windows::UI::Composition::KeyFrameAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<Vector3KeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation2, Windows::UI::Composition::IKeyFrameAnimation3, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        Vector3KeyFrameAnimation(std::nullptr_t) noexcept {}
        Vector3KeyFrameAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IVector3KeyFrameAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Vector3NaturalMotionAnimation : Windows::UI::Composition::IVector3NaturalMotionAnimation,
        impl::base<Vector3NaturalMotionAnimation, Windows::UI::Composition::NaturalMotionAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<Vector3NaturalMotionAnimation, Windows::UI::Composition::INaturalMotionAnimation, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        Vector3NaturalMotionAnimation(std::nullptr_t) noexcept {}
        Vector3NaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IVector3NaturalMotionAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Vector4KeyFrameAnimation : Windows::UI::Composition::IVector4KeyFrameAnimation,
        impl::base<Vector4KeyFrameAnimation, Windows::UI::Composition::KeyFrameAnimation, Windows::UI::Composition::CompositionAnimation, Windows::UI::Composition::CompositionObject>,
        impl::require<Vector4KeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation, Windows::UI::Composition::IKeyFrameAnimation2, Windows::UI::Composition::IKeyFrameAnimation3, Windows::UI::Composition::ICompositionAnimation, Windows::UI::Composition::ICompositionAnimation2, Windows::UI::Composition::ICompositionAnimation3, Windows::UI::Composition::ICompositionAnimation4, Windows::UI::Composition::ICompositionAnimationBase, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        Vector4KeyFrameAnimation(std::nullptr_t) noexcept {}
        Vector4KeyFrameAnimation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IVector4KeyFrameAnimation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Visual : Windows::UI::Composition::IVisual,
        impl::base<Visual, Windows::UI::Composition::CompositionObject>,
        impl::require<Visual, Windows::UI::Composition::IVisual2, Windows::UI::Composition::IVisual3, Windows::UI::Composition::IVisual4, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        Visual(std::nullptr_t) noexcept {}
        Visual(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IVisual(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VisualCollection : Windows::UI::Composition::IVisualCollection,
        impl::base<VisualCollection, Windows::UI::Composition::CompositionObject>,
        impl::require<VisualCollection, Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Visual>, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        VisualCollection(std::nullptr_t) noexcept {}
        VisualCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IVisualCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VisualUnorderedCollection : Windows::UI::Composition::IVisualUnorderedCollection,
        impl::base<VisualUnorderedCollection, Windows::UI::Composition::CompositionObject>,
        impl::require<VisualUnorderedCollection, Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Visual>, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        VisualUnorderedCollection(std::nullptr_t) noexcept {}
        VisualUnorderedCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::IVisualUnorderedCollection(ptr, take_ownership_from_abi) {}
    };
}
#endif
