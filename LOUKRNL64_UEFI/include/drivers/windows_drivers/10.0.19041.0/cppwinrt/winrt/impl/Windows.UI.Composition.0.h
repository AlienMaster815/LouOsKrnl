// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Composition_0_H
#define WINRT_Windows_UI_Composition_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct HResult;
    struct IAsyncAction;
    template <typename T> struct IReference;
    struct Size;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    template <typename K, typename V> struct IMap;
    template <typename T> struct IVector;
}
namespace winrt::Windows::Foundation::Numerics
{
}
namespace winrt::Windows::Graphics
{
    struct IGeometrySource2D;
    struct PointInt32;
    struct RectInt32;
    struct SizeInt32;
}
namespace winrt::Windows::Graphics::DirectX
{
    enum class DirectXAlphaMode : int32_t;
    enum class DirectXPixelFormat : int32_t;
}
namespace winrt::Windows::Graphics::Effects
{
    struct IGraphicsEffect;
}
namespace winrt::Windows::System
{
    struct DispatcherQueue;
}
namespace winrt::Windows::UI
{
    struct Color;
}
namespace winrt::Windows::UI::Core
{
    struct CoreDispatcher;
}
namespace winrt::Windows::UI::Composition
{
    enum class AnimationControllerProgressBehavior : int32_t
    {
        Default = 0,
        IncludesDelayTime = 1,
    };
    enum class AnimationDelayBehavior : int32_t
    {
        SetInitialValueAfterDelay = 0,
        SetInitialValueBeforeDelay = 1,
    };
    enum class AnimationDirection : int32_t
    {
        Normal = 0,
        Reverse = 1,
        Alternate = 2,
        AlternateReverse = 3,
    };
    enum class AnimationIterationBehavior : int32_t
    {
        Count = 0,
        Forever = 1,
    };
    enum class AnimationPropertyAccessMode : int32_t
    {
        None = 0,
        ReadOnly = 1,
        WriteOnly = 2,
        ReadWrite = 3,
    };
    enum class AnimationStopBehavior : int32_t
    {
        LeaveCurrentValue = 0,
        SetToInitialValue = 1,
        SetToFinalValue = 2,
    };
    enum class CompositionBackfaceVisibility : int32_t
    {
        Inherit = 0,
        Visible = 1,
        Hidden = 2,
    };
    enum class CompositionBatchTypes : uint32_t
    {
        None = 0,
        Animation = 0x1,
        Effect = 0x2,
        InfiniteAnimation = 0x4,
        AllAnimations = 0x5,
    };
    enum class CompositionBitmapInterpolationMode : int32_t
    {
        NearestNeighbor = 0,
        Linear = 1,
        MagLinearMinLinearMipLinear = 2,
        MagLinearMinLinearMipNearest = 3,
        MagLinearMinNearestMipLinear = 4,
        MagLinearMinNearestMipNearest = 5,
        MagNearestMinLinearMipLinear = 6,
        MagNearestMinLinearMipNearest = 7,
        MagNearestMinNearestMipLinear = 8,
        MagNearestMinNearestMipNearest = 9,
    };
    enum class CompositionBorderMode : int32_t
    {
        Inherit = 0,
        Soft = 1,
        Hard = 2,
    };
    enum class CompositionColorSpace : int32_t
    {
        Auto = 0,
        Hsl = 1,
        Rgb = 2,
        HslLinear = 3,
        RgbLinear = 4,
    };
    enum class CompositionCompositeMode : int32_t
    {
        Inherit = 0,
        SourceOver = 1,
        DestinationInvert = 2,
        MinBlend = 3,
    };
    enum class CompositionDropShadowSourcePolicy : int32_t
    {
        Default = 0,
        InheritFromVisualContent = 1,
    };
    enum class CompositionEffectFactoryLoadStatus : int32_t
    {
        Success = 0,
        EffectTooComplex = 1,
        Pending = 2,
        Other = -1,
    };
    enum class CompositionGetValueStatus : int32_t
    {
        Succeeded = 0,
        TypeMismatch = 1,
        NotFound = 2,
    };
    enum class CompositionGradientExtendMode : int32_t
    {
        Clamp = 0,
        Wrap = 1,
        Mirror = 2,
    };
    enum class CompositionMappingMode : int32_t
    {
        Absolute = 0,
        Relative = 1,
    };
    enum class CompositionStretch : int32_t
    {
        None = 0,
        Fill = 1,
        Uniform = 2,
        UniformToFill = 3,
    };
    enum class CompositionStrokeCap : int32_t
    {
        Flat = 0,
        Square = 1,
        Round = 2,
        Triangle = 3,
    };
    enum class CompositionStrokeLineJoin : int32_t
    {
        Miter = 0,
        Bevel = 1,
        Round = 2,
        MiterOrBevel = 3,
    };
    struct IAmbientLight;
    struct IAmbientLight2;
    struct IAnimationController;
    struct IAnimationControllerStatics;
    struct IAnimationObject;
    struct IAnimationPropertyInfo;
    struct IBooleanKeyFrameAnimation;
    struct IBounceScalarNaturalMotionAnimation;
    struct IBounceVector2NaturalMotionAnimation;
    struct IBounceVector3NaturalMotionAnimation;
    struct IColorKeyFrameAnimation;
    struct ICompositionAnimation;
    struct ICompositionAnimation2;
    struct ICompositionAnimation3;
    struct ICompositionAnimation4;
    struct ICompositionAnimationBase;
    struct ICompositionAnimationFactory;
    struct ICompositionAnimationGroup;
    struct ICompositionBackdropBrush;
    struct ICompositionBatchCompletedEventArgs;
    struct ICompositionBrush;
    struct ICompositionBrushFactory;
    struct ICompositionCapabilities;
    struct ICompositionCapabilitiesStatics;
    struct ICompositionClip;
    struct ICompositionClip2;
    struct ICompositionClipFactory;
    struct ICompositionColorBrush;
    struct ICompositionColorGradientStop;
    struct ICompositionColorGradientStopCollection;
    struct ICompositionCommitBatch;
    struct ICompositionContainerShape;
    struct ICompositionDrawingSurface;
    struct ICompositionDrawingSurface2;
    struct ICompositionDrawingSurfaceFactory;
    struct ICompositionEasingFunction;
    struct ICompositionEasingFunctionFactory;
    struct ICompositionEffectBrush;
    struct ICompositionEffectFactory;
    struct ICompositionEffectSourceParameter;
    struct ICompositionEffectSourceParameterFactory;
    struct ICompositionEllipseGeometry;
    struct ICompositionGeometricClip;
    struct ICompositionGeometry;
    struct ICompositionGeometryFactory;
    struct ICompositionGradientBrush;
    struct ICompositionGradientBrush2;
    struct ICompositionGradientBrushFactory;
    struct ICompositionGraphicsDevice;
    struct ICompositionGraphicsDevice2;
    struct ICompositionGraphicsDevice3;
    struct ICompositionLight;
    struct ICompositionLight2;
    struct ICompositionLight3;
    struct ICompositionLightFactory;
    struct ICompositionLineGeometry;
    struct ICompositionLinearGradientBrush;
    struct ICompositionMaskBrush;
    struct ICompositionMipmapSurface;
    struct ICompositionNineGridBrush;
    struct ICompositionObject;
    struct ICompositionObject2;
    struct ICompositionObject3;
    struct ICompositionObject4;
    struct ICompositionObjectFactory;
    struct ICompositionObjectStatics;
    struct ICompositionPath;
    struct ICompositionPathFactory;
    struct ICompositionPathGeometry;
    struct ICompositionProjectedShadow;
    struct ICompositionProjectedShadowCaster;
    struct ICompositionProjectedShadowCasterCollection;
    struct ICompositionProjectedShadowCasterCollectionStatics;
    struct ICompositionProjectedShadowReceiver;
    struct ICompositionProjectedShadowReceiverUnorderedCollection;
    struct ICompositionPropertySet;
    struct ICompositionPropertySet2;
    struct ICompositionRadialGradientBrush;
    struct ICompositionRectangleGeometry;
    struct ICompositionRoundedRectangleGeometry;
    struct ICompositionScopedBatch;
    struct ICompositionShadow;
    struct ICompositionShadowFactory;
    struct ICompositionShape;
    struct ICompositionShapeFactory;
    struct ICompositionSpriteShape;
    struct ICompositionSurface;
    struct ICompositionSurfaceBrush;
    struct ICompositionSurfaceBrush2;
    struct ICompositionSurfaceBrush3;
    struct ICompositionTarget;
    struct ICompositionTargetFactory;
    struct ICompositionTransform;
    struct ICompositionTransformFactory;
    struct ICompositionViewBox;
    struct ICompositionVirtualDrawingSurface;
    struct ICompositionVirtualDrawingSurfaceFactory;
    struct ICompositionVisualSurface;
    struct ICompositor;
    struct ICompositor2;
    struct ICompositor3;
    struct ICompositor4;
    struct ICompositor5;
    struct ICompositor6;
    struct ICompositorStatics;
    struct ICompositorWithProjectedShadow;
    struct ICompositorWithRadialGradient;
    struct ICompositorWithVisualSurface;
    struct IContainerVisual;
    struct IContainerVisualFactory;
    struct ICubicBezierEasingFunction;
    struct IDistantLight;
    struct IDistantLight2;
    struct IDropShadow;
    struct IDropShadow2;
    struct IExpressionAnimation;
    struct IImplicitAnimationCollection;
    struct IInsetClip;
    struct IKeyFrameAnimation;
    struct IKeyFrameAnimation2;
    struct IKeyFrameAnimation3;
    struct IKeyFrameAnimationFactory;
    struct ILayerVisual;
    struct ILayerVisual2;
    struct ILinearEasingFunction;
    struct INaturalMotionAnimation;
    struct INaturalMotionAnimationFactory;
    struct IPathKeyFrameAnimation;
    struct IPointLight;
    struct IPointLight2;
    struct IPointLight3;
    struct IQuaternionKeyFrameAnimation;
    struct IRedirectVisual;
    struct IRenderingDeviceReplacedEventArgs;
    struct IScalarKeyFrameAnimation;
    struct IScalarNaturalMotionAnimation;
    struct IScalarNaturalMotionAnimationFactory;
    struct IShapeVisual;
    struct ISpotLight;
    struct ISpotLight2;
    struct ISpotLight3;
    struct ISpringScalarNaturalMotionAnimation;
    struct ISpringVector2NaturalMotionAnimation;
    struct ISpringVector3NaturalMotionAnimation;
    struct ISpriteVisual;
    struct ISpriteVisual2;
    struct IStepEasingFunction;
    struct IVector2KeyFrameAnimation;
    struct IVector2NaturalMotionAnimation;
    struct IVector2NaturalMotionAnimationFactory;
    struct IVector3KeyFrameAnimation;
    struct IVector3NaturalMotionAnimation;
    struct IVector3NaturalMotionAnimationFactory;
    struct IVector4KeyFrameAnimation;
    struct IVisual;
    struct IVisual2;
    struct IVisual3;
    struct IVisualCollection;
    struct IVisualElement;
    struct IVisualFactory;
    struct IVisualUnorderedCollection;
    struct AmbientLight;
    struct AnimationController;
    struct AnimationPropertyInfo;
    struct BooleanKeyFrameAnimation;
    struct BounceScalarNaturalMotionAnimation;
    struct BounceVector2NaturalMotionAnimation;
    struct BounceVector3NaturalMotionAnimation;
    struct ColorKeyFrameAnimation;
    struct CompositionAnimation;
    struct CompositionAnimationGroup;
    struct CompositionBackdropBrush;
    struct CompositionBatchCompletedEventArgs;
    struct CompositionBrush;
    struct CompositionCapabilities;
    struct CompositionClip;
    struct CompositionColorBrush;
    struct CompositionColorGradientStop;
    struct CompositionColorGradientStopCollection;
    struct CompositionCommitBatch;
    struct CompositionContainerShape;
    struct CompositionDrawingSurface;
    struct CompositionEasingFunction;
    struct CompositionEffectBrush;
    struct CompositionEffectFactory;
    struct CompositionEffectSourceParameter;
    struct CompositionEllipseGeometry;
    struct CompositionGeometricClip;
    struct CompositionGeometry;
    struct CompositionGradientBrush;
    struct CompositionGraphicsDevice;
    struct CompositionLight;
    struct CompositionLineGeometry;
    struct CompositionLinearGradientBrush;
    struct CompositionMaskBrush;
    struct CompositionMipmapSurface;
    struct CompositionNineGridBrush;
    struct CompositionObject;
    struct CompositionPath;
    struct CompositionPathGeometry;
    struct CompositionProjectedShadow;
    struct CompositionProjectedShadowCaster;
    struct CompositionProjectedShadowCasterCollection;
    struct CompositionProjectedShadowReceiver;
    struct CompositionProjectedShadowReceiverUnorderedCollection;
    struct CompositionPropertySet;
    struct CompositionRadialGradientBrush;
    struct CompositionRectangleGeometry;
    struct CompositionRoundedRectangleGeometry;
    struct CompositionScopedBatch;
    struct CompositionShadow;
    struct CompositionShape;
    struct CompositionShapeCollection;
    struct CompositionSpriteShape;
    struct CompositionStrokeDashArray;
    struct CompositionSurfaceBrush;
    struct CompositionTarget;
    struct CompositionTransform;
    struct CompositionViewBox;
    struct CompositionVirtualDrawingSurface;
    struct CompositionVisualSurface;
    struct Compositor;
    struct ContainerVisual;
    struct CubicBezierEasingFunction;
    struct DistantLight;
    struct DropShadow;
    struct ExpressionAnimation;
    struct ImplicitAnimationCollection;
    struct InitialValueExpressionCollection;
    struct InsetClip;
    struct KeyFrameAnimation;
    struct LayerVisual;
    struct LinearEasingFunction;
    struct NaturalMotionAnimation;
    struct PathKeyFrameAnimation;
    struct PointLight;
    struct QuaternionKeyFrameAnimation;
    struct RedirectVisual;
    struct RenderingDeviceReplacedEventArgs;
    struct ScalarKeyFrameAnimation;
    struct ScalarNaturalMotionAnimation;
    struct ShapeVisual;
    struct SpotLight;
    struct SpringScalarNaturalMotionAnimation;
    struct SpringVector2NaturalMotionAnimation;
    struct SpringVector3NaturalMotionAnimation;
    struct SpriteVisual;
    struct StepEasingFunction;
    struct Vector2KeyFrameAnimation;
    struct Vector2NaturalMotionAnimation;
    struct Vector3KeyFrameAnimation;
    struct Vector3NaturalMotionAnimation;
    struct Vector4KeyFrameAnimation;
    struct Visual;
    struct VisualCollection;
    struct VisualUnorderedCollection;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Composition::IAmbientLight>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IAmbientLight2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IAnimationController>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IAnimationControllerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IAnimationObject>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IAnimationPropertyInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IBooleanKeyFrameAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IBounceScalarNaturalMotionAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IBounceVector2NaturalMotionAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IBounceVector3NaturalMotionAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IColorKeyFrameAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionAnimation2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionAnimation3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionAnimation4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionAnimationBase>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionAnimationFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionAnimationGroup>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionBackdropBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionBatchCompletedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionBrushFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionCapabilitiesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionClip>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionClip2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionClipFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionColorBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionColorGradientStop>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionColorGradientStopCollection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionCommitBatch>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionContainerShape>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionDrawingSurface>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionDrawingSurface2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionDrawingSurfaceFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionEasingFunction>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionEasingFunctionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionEffectBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionEffectFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionEffectSourceParameter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionEllipseGeometry>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionGeometricClip>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionGeometry>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionGeometryFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionGradientBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionGradientBrush2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionGradientBrushFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionGraphicsDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionGraphicsDevice2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionGraphicsDevice3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionLight>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionLight2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionLight3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionLightFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionLineGeometry>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionLinearGradientBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionMaskBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionMipmapSurface>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionNineGridBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionObject>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionObject2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionObject3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionObject4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionObjectFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionObjectStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionPath>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionPathFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionPathGeometry>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionProjectedShadow>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionProjectedShadowCaster>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionProjectedShadowCasterCollectionStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionProjectedShadowReceiver>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionProjectedShadowReceiverUnorderedCollection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionPropertySet>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionPropertySet2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionRadialGradientBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionRectangleGeometry>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionRoundedRectangleGeometry>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionScopedBatch>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionShadow>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionShadowFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionShape>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionShapeFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionSpriteShape>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionSurface>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionSurfaceBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionSurfaceBrush2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionSurfaceBrush3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionTarget>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionTargetFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionTransform>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionTransformFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionViewBox>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionVirtualDrawingSurface>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositionVisualSurface>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositor2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositor3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositor4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositor5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositor6>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositorWithProjectedShadow>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositorWithRadialGradient>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICompositorWithVisualSurface>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IContainerVisual>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IContainerVisualFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ICubicBezierEasingFunction>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IDistantLight>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IDistantLight2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IDropShadow>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IDropShadow2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IExpressionAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IImplicitAnimationCollection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IInsetClip>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IKeyFrameAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IKeyFrameAnimation2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IKeyFrameAnimation3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IKeyFrameAnimationFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ILayerVisual>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ILayerVisual2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ILinearEasingFunction>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::INaturalMotionAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::INaturalMotionAnimationFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IPathKeyFrameAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IPointLight>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IPointLight2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IPointLight3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IQuaternionKeyFrameAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IRedirectVisual>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IRenderingDeviceReplacedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IScalarKeyFrameAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IScalarNaturalMotionAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IScalarNaturalMotionAnimationFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IShapeVisual>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ISpotLight>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ISpotLight2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ISpotLight3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ISpringScalarNaturalMotionAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ISpringVector2NaturalMotionAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ISpringVector3NaturalMotionAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ISpriteVisual>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::ISpriteVisual2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IStepEasingFunction>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IVector2KeyFrameAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IVector2NaturalMotionAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IVector2NaturalMotionAnimationFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IVector3KeyFrameAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IVector3NaturalMotionAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IVector3NaturalMotionAnimationFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IVector4KeyFrameAnimation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IVisual>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IVisual2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IVisual3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IVisualCollection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IVisualElement>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IVisualFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::IVisualUnorderedCollection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::AmbientLight>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::AnimationController>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::AnimationPropertyInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::BooleanKeyFrameAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::BounceScalarNaturalMotionAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::BounceVector2NaturalMotionAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::BounceVector3NaturalMotionAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::ColorKeyFrameAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionAnimationGroup>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionBackdropBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionBatchCompletedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionClip>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionColorBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionColorGradientStop>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionColorGradientStopCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionCommitBatch>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionContainerShape>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionDrawingSurface>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionEasingFunction>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionEffectBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionEffectFactory>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionEffectSourceParameter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionEllipseGeometry>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionGeometricClip>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionGeometry>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionGradientBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionGraphicsDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionLight>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionLineGeometry>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionLinearGradientBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionMaskBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionMipmapSurface>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionNineGridBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionObject>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionPath>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionPathGeometry>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionProjectedShadow>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionProjectedShadowCaster>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionProjectedShadowCasterCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionProjectedShadowReceiver>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionPropertySet>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionRadialGradientBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionRectangleGeometry>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionRoundedRectangleGeometry>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionScopedBatch>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionShadow>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionShape>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionShapeCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionSpriteShape>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionStrokeDashArray>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionSurfaceBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionTarget>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionTransform>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionViewBox>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionVirtualDrawingSurface>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionVisualSurface>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Compositor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::ContainerVisual>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::CubicBezierEasingFunction>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::DistantLight>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::DropShadow>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::ExpressionAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::ImplicitAnimationCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::InitialValueExpressionCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::InsetClip>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::KeyFrameAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::LayerVisual>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::LinearEasingFunction>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::NaturalMotionAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::PathKeyFrameAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::PointLight>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::QuaternionKeyFrameAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::RedirectVisual>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::RenderingDeviceReplacedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::ScalarKeyFrameAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::ScalarNaturalMotionAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::ShapeVisual>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::SpotLight>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::SpringScalarNaturalMotionAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::SpringVector2NaturalMotionAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::SpringVector3NaturalMotionAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::SpriteVisual>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::StepEasingFunction>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Vector2KeyFrameAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Vector2NaturalMotionAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Vector3KeyFrameAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Vector3NaturalMotionAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Vector4KeyFrameAnimation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Visual>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::VisualCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::VisualUnorderedCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::AnimationControllerProgressBehavior>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::AnimationDelayBehavior>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::AnimationDirection>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::AnimationIterationBehavior>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::AnimationPropertyAccessMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::AnimationStopBehavior>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionBackfaceVisibility>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionBatchTypes>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionBitmapInterpolationMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionBorderMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionColorSpace>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionCompositeMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionDropShadowSourcePolicy>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionEffectFactoryLoadStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionGetValueStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionGradientExtendMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionMappingMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionStretch>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionStrokeCap>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Composition::CompositionStrokeLineJoin>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::UI::Composition::IAmbientLight>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IAmbientLight" };
    };
    template <> struct name<Windows::UI::Composition::IAmbientLight2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IAmbientLight2" };
    };
    template <> struct name<Windows::UI::Composition::IAnimationController>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IAnimationController" };
    };
    template <> struct name<Windows::UI::Composition::IAnimationControllerStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IAnimationControllerStatics" };
    };
    template <> struct name<Windows::UI::Composition::IAnimationObject>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IAnimationObject" };
    };
    template <> struct name<Windows::UI::Composition::IAnimationPropertyInfo>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IAnimationPropertyInfo" };
    };
    template <> struct name<Windows::UI::Composition::IBooleanKeyFrameAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IBooleanKeyFrameAnimation" };
    };
    template <> struct name<Windows::UI::Composition::IBounceScalarNaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IBounceScalarNaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::IBounceVector2NaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IBounceVector2NaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::IBounceVector3NaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IBounceVector3NaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::IColorKeyFrameAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IColorKeyFrameAnimation" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionAnimation2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionAnimation2" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionAnimation3>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionAnimation3" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionAnimation4>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionAnimation4" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionAnimationBase>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionAnimationBase" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionAnimationFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionAnimationFactory" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionAnimationGroup>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionAnimationGroup" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionBackdropBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionBackdropBrush" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionBatchCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionBatchCompletedEventArgs" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionBrush" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionBrushFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionBrushFactory" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionCapabilities>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionCapabilities" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionCapabilitiesStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionCapabilitiesStatics" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionClip>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionClip" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionClip2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionClip2" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionClipFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionClipFactory" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionColorBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionColorBrush" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionColorGradientStop>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionColorGradientStop" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionColorGradientStopCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionColorGradientStopCollection" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionCommitBatch>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionCommitBatch" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionContainerShape>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionContainerShape" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionDrawingSurface>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionDrawingSurface" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionDrawingSurface2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionDrawingSurface2" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionDrawingSurfaceFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionDrawingSurfaceFactory" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionEasingFunction>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionEasingFunction" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionEasingFunctionFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionEasingFunctionFactory" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionEffectBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionEffectBrush" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionEffectFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionEffectFactory" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionEffectSourceParameter>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionEffectSourceParameter" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionEffectSourceParameterFactory" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionEllipseGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionEllipseGeometry" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionGeometricClip>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionGeometricClip" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionGeometry" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionGeometryFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionGeometryFactory" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionGradientBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionGradientBrush" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionGradientBrush2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionGradientBrush2" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionGradientBrushFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionGradientBrushFactory" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionGraphicsDevice>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionGraphicsDevice" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionGraphicsDevice2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionGraphicsDevice2" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionGraphicsDevice3>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionGraphicsDevice3" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionLight>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionLight" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionLight2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionLight2" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionLight3>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionLight3" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionLightFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionLightFactory" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionLineGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionLineGeometry" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionLinearGradientBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionLinearGradientBrush" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionMaskBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionMaskBrush" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionMipmapSurface>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionMipmapSurface" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionNineGridBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionNineGridBrush" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionObject>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionObject" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionObject2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionObject2" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionObject3>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionObject3" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionObject4>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionObject4" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionObjectFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionObjectFactory" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionObjectStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionObjectStatics" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionPath>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionPath" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionPathFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionPathFactory" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionPathGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionPathGeometry" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionProjectedShadow>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionProjectedShadow" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionProjectedShadowCaster>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionProjectedShadowCaster" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionProjectedShadowCasterCollection" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionProjectedShadowCasterCollectionStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionProjectedShadowCasterCollectionStatics" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionProjectedShadowReceiver>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionProjectedShadowReceiver" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionProjectedShadowReceiverUnorderedCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionProjectedShadowReceiverUnorderedCollection" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionPropertySet>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionPropertySet" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionPropertySet2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionPropertySet2" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionRadialGradientBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionRadialGradientBrush" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionRectangleGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionRectangleGeometry" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionRoundedRectangleGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionRoundedRectangleGeometry" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionScopedBatch>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionScopedBatch" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionShadow>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionShadow" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionShadowFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionShadowFactory" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionShape>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionShape" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionShapeFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionShapeFactory" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionSpriteShape>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionSpriteShape" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionSurface>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionSurface" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionSurfaceBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionSurfaceBrush" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionSurfaceBrush2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionSurfaceBrush2" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionSurfaceBrush3>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionSurfaceBrush3" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionTarget>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionTarget" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionTargetFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionTargetFactory" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionTransform>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionTransform" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionTransformFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionTransformFactory" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionViewBox>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionViewBox" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionVirtualDrawingSurface>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionVirtualDrawingSurface" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionVirtualDrawingSurfaceFactory" };
    };
    template <> struct name<Windows::UI::Composition::ICompositionVisualSurface>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositionVisualSurface" };
    };
    template <> struct name<Windows::UI::Composition::ICompositor>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositor" };
    };
    template <> struct name<Windows::UI::Composition::ICompositor2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositor2" };
    };
    template <> struct name<Windows::UI::Composition::ICompositor3>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositor3" };
    };
    template <> struct name<Windows::UI::Composition::ICompositor4>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositor4" };
    };
    template <> struct name<Windows::UI::Composition::ICompositor5>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositor5" };
    };
    template <> struct name<Windows::UI::Composition::ICompositor6>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositor6" };
    };
    template <> struct name<Windows::UI::Composition::ICompositorStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositorStatics" };
    };
    template <> struct name<Windows::UI::Composition::ICompositorWithProjectedShadow>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositorWithProjectedShadow" };
    };
    template <> struct name<Windows::UI::Composition::ICompositorWithRadialGradient>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositorWithRadialGradient" };
    };
    template <> struct name<Windows::UI::Composition::ICompositorWithVisualSurface>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICompositorWithVisualSurface" };
    };
    template <> struct name<Windows::UI::Composition::IContainerVisual>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IContainerVisual" };
    };
    template <> struct name<Windows::UI::Composition::IContainerVisualFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IContainerVisualFactory" };
    };
    template <> struct name<Windows::UI::Composition::ICubicBezierEasingFunction>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ICubicBezierEasingFunction" };
    };
    template <> struct name<Windows::UI::Composition::IDistantLight>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IDistantLight" };
    };
    template <> struct name<Windows::UI::Composition::IDistantLight2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IDistantLight2" };
    };
    template <> struct name<Windows::UI::Composition::IDropShadow>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IDropShadow" };
    };
    template <> struct name<Windows::UI::Composition::IDropShadow2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IDropShadow2" };
    };
    template <> struct name<Windows::UI::Composition::IExpressionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IExpressionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::IImplicitAnimationCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IImplicitAnimationCollection" };
    };
    template <> struct name<Windows::UI::Composition::IInsetClip>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IInsetClip" };
    };
    template <> struct name<Windows::UI::Composition::IKeyFrameAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IKeyFrameAnimation" };
    };
    template <> struct name<Windows::UI::Composition::IKeyFrameAnimation2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IKeyFrameAnimation2" };
    };
    template <> struct name<Windows::UI::Composition::IKeyFrameAnimation3>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IKeyFrameAnimation3" };
    };
    template <> struct name<Windows::UI::Composition::IKeyFrameAnimationFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IKeyFrameAnimationFactory" };
    };
    template <> struct name<Windows::UI::Composition::ILayerVisual>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ILayerVisual" };
    };
    template <> struct name<Windows::UI::Composition::ILayerVisual2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ILayerVisual2" };
    };
    template <> struct name<Windows::UI::Composition::ILinearEasingFunction>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ILinearEasingFunction" };
    };
    template <> struct name<Windows::UI::Composition::INaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.INaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::INaturalMotionAnimationFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.INaturalMotionAnimationFactory" };
    };
    template <> struct name<Windows::UI::Composition::IPathKeyFrameAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IPathKeyFrameAnimation" };
    };
    template <> struct name<Windows::UI::Composition::IPointLight>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IPointLight" };
    };
    template <> struct name<Windows::UI::Composition::IPointLight2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IPointLight2" };
    };
    template <> struct name<Windows::UI::Composition::IPointLight3>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IPointLight3" };
    };
    template <> struct name<Windows::UI::Composition::IQuaternionKeyFrameAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IQuaternionKeyFrameAnimation" };
    };
    template <> struct name<Windows::UI::Composition::IRedirectVisual>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IRedirectVisual" };
    };
    template <> struct name<Windows::UI::Composition::IRenderingDeviceReplacedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IRenderingDeviceReplacedEventArgs" };
    };
    template <> struct name<Windows::UI::Composition::IScalarKeyFrameAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IScalarKeyFrameAnimation" };
    };
    template <> struct name<Windows::UI::Composition::IScalarNaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IScalarNaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::IScalarNaturalMotionAnimationFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IScalarNaturalMotionAnimationFactory" };
    };
    template <> struct name<Windows::UI::Composition::IShapeVisual>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IShapeVisual" };
    };
    template <> struct name<Windows::UI::Composition::ISpotLight>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ISpotLight" };
    };
    template <> struct name<Windows::UI::Composition::ISpotLight2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ISpotLight2" };
    };
    template <> struct name<Windows::UI::Composition::ISpotLight3>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ISpotLight3" };
    };
    template <> struct name<Windows::UI::Composition::ISpringScalarNaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ISpringScalarNaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::ISpringVector2NaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ISpringVector2NaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::ISpringVector3NaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ISpringVector3NaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::ISpriteVisual>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ISpriteVisual" };
    };
    template <> struct name<Windows::UI::Composition::ISpriteVisual2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ISpriteVisual2" };
    };
    template <> struct name<Windows::UI::Composition::IStepEasingFunction>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IStepEasingFunction" };
    };
    template <> struct name<Windows::UI::Composition::IVector2KeyFrameAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IVector2KeyFrameAnimation" };
    };
    template <> struct name<Windows::UI::Composition::IVector2NaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IVector2NaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::IVector2NaturalMotionAnimationFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IVector2NaturalMotionAnimationFactory" };
    };
    template <> struct name<Windows::UI::Composition::IVector3KeyFrameAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IVector3KeyFrameAnimation" };
    };
    template <> struct name<Windows::UI::Composition::IVector3NaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IVector3NaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::IVector3NaturalMotionAnimationFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IVector3NaturalMotionAnimationFactory" };
    };
    template <> struct name<Windows::UI::Composition::IVector4KeyFrameAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IVector4KeyFrameAnimation" };
    };
    template <> struct name<Windows::UI::Composition::IVisual>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IVisual" };
    };
    template <> struct name<Windows::UI::Composition::IVisual2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IVisual2" };
    };
    template <> struct name<Windows::UI::Composition::IVisual3>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IVisual3" };
    };
    template <> struct name<Windows::UI::Composition::IVisualCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IVisualCollection" };
    };
    template <> struct name<Windows::UI::Composition::IVisualElement>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IVisualElement" };
    };
    template <> struct name<Windows::UI::Composition::IVisualFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IVisualFactory" };
    };
    template <> struct name<Windows::UI::Composition::IVisualUnorderedCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.IVisualUnorderedCollection" };
    };
    template <> struct name<Windows::UI::Composition::AmbientLight>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.AmbientLight" };
    };
    template <> struct name<Windows::UI::Composition::AnimationController>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.AnimationController" };
    };
    template <> struct name<Windows::UI::Composition::AnimationPropertyInfo>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.AnimationPropertyInfo" };
    };
    template <> struct name<Windows::UI::Composition::BooleanKeyFrameAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.BooleanKeyFrameAnimation" };
    };
    template <> struct name<Windows::UI::Composition::BounceScalarNaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.BounceScalarNaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::BounceVector2NaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.BounceVector2NaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::BounceVector3NaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.BounceVector3NaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::ColorKeyFrameAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ColorKeyFrameAnimation" };
    };
    template <> struct name<Windows::UI::Composition::CompositionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::CompositionAnimationGroup>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionAnimationGroup" };
    };
    template <> struct name<Windows::UI::Composition::CompositionBackdropBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionBackdropBrush" };
    };
    template <> struct name<Windows::UI::Composition::CompositionBatchCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionBatchCompletedEventArgs" };
    };
    template <> struct name<Windows::UI::Composition::CompositionBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionBrush" };
    };
    template <> struct name<Windows::UI::Composition::CompositionCapabilities>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionCapabilities" };
    };
    template <> struct name<Windows::UI::Composition::CompositionClip>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionClip" };
    };
    template <> struct name<Windows::UI::Composition::CompositionColorBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionColorBrush" };
    };
    template <> struct name<Windows::UI::Composition::CompositionColorGradientStop>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionColorGradientStop" };
    };
    template <> struct name<Windows::UI::Composition::CompositionColorGradientStopCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionColorGradientStopCollection" };
    };
    template <> struct name<Windows::UI::Composition::CompositionCommitBatch>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionCommitBatch" };
    };
    template <> struct name<Windows::UI::Composition::CompositionContainerShape>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionContainerShape" };
    };
    template <> struct name<Windows::UI::Composition::CompositionDrawingSurface>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionDrawingSurface" };
    };
    template <> struct name<Windows::UI::Composition::CompositionEasingFunction>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionEasingFunction" };
    };
    template <> struct name<Windows::UI::Composition::CompositionEffectBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionEffectBrush" };
    };
    template <> struct name<Windows::UI::Composition::CompositionEffectFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionEffectFactory" };
    };
    template <> struct name<Windows::UI::Composition::CompositionEffectSourceParameter>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionEffectSourceParameter" };
    };
    template <> struct name<Windows::UI::Composition::CompositionEllipseGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionEllipseGeometry" };
    };
    template <> struct name<Windows::UI::Composition::CompositionGeometricClip>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionGeometricClip" };
    };
    template <> struct name<Windows::UI::Composition::CompositionGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionGeometry" };
    };
    template <> struct name<Windows::UI::Composition::CompositionGradientBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionGradientBrush" };
    };
    template <> struct name<Windows::UI::Composition::CompositionGraphicsDevice>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionGraphicsDevice" };
    };
    template <> struct name<Windows::UI::Composition::CompositionLight>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionLight" };
    };
    template <> struct name<Windows::UI::Composition::CompositionLineGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionLineGeometry" };
    };
    template <> struct name<Windows::UI::Composition::CompositionLinearGradientBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionLinearGradientBrush" };
    };
    template <> struct name<Windows::UI::Composition::CompositionMaskBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionMaskBrush" };
    };
    template <> struct name<Windows::UI::Composition::CompositionMipmapSurface>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionMipmapSurface" };
    };
    template <> struct name<Windows::UI::Composition::CompositionNineGridBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionNineGridBrush" };
    };
    template <> struct name<Windows::UI::Composition::CompositionObject>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionObject" };
    };
    template <> struct name<Windows::UI::Composition::CompositionPath>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionPath" };
    };
    template <> struct name<Windows::UI::Composition::CompositionPathGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionPathGeometry" };
    };
    template <> struct name<Windows::UI::Composition::CompositionProjectedShadow>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionProjectedShadow" };
    };
    template <> struct name<Windows::UI::Composition::CompositionProjectedShadowCaster>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionProjectedShadowCaster" };
    };
    template <> struct name<Windows::UI::Composition::CompositionProjectedShadowCasterCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionProjectedShadowCasterCollection" };
    };
    template <> struct name<Windows::UI::Composition::CompositionProjectedShadowReceiver>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionProjectedShadowReceiver" };
    };
    template <> struct name<Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionProjectedShadowReceiverUnorderedCollection" };
    };
    template <> struct name<Windows::UI::Composition::CompositionPropertySet>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionPropertySet" };
    };
    template <> struct name<Windows::UI::Composition::CompositionRadialGradientBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionRadialGradientBrush" };
    };
    template <> struct name<Windows::UI::Composition::CompositionRectangleGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionRectangleGeometry" };
    };
    template <> struct name<Windows::UI::Composition::CompositionRoundedRectangleGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionRoundedRectangleGeometry" };
    };
    template <> struct name<Windows::UI::Composition::CompositionScopedBatch>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionScopedBatch" };
    };
    template <> struct name<Windows::UI::Composition::CompositionShadow>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionShadow" };
    };
    template <> struct name<Windows::UI::Composition::CompositionShape>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionShape" };
    };
    template <> struct name<Windows::UI::Composition::CompositionShapeCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionShapeCollection" };
    };
    template <> struct name<Windows::UI::Composition::CompositionSpriteShape>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionSpriteShape" };
    };
    template <> struct name<Windows::UI::Composition::CompositionStrokeDashArray>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionStrokeDashArray" };
    };
    template <> struct name<Windows::UI::Composition::CompositionSurfaceBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionSurfaceBrush" };
    };
    template <> struct name<Windows::UI::Composition::CompositionTarget>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionTarget" };
    };
    template <> struct name<Windows::UI::Composition::CompositionTransform>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionTransform" };
    };
    template <> struct name<Windows::UI::Composition::CompositionViewBox>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionViewBox" };
    };
    template <> struct name<Windows::UI::Composition::CompositionVirtualDrawingSurface>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionVirtualDrawingSurface" };
    };
    template <> struct name<Windows::UI::Composition::CompositionVisualSurface>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionVisualSurface" };
    };
    template <> struct name<Windows::UI::Composition::Compositor>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Compositor" };
    };
    template <> struct name<Windows::UI::Composition::ContainerVisual>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ContainerVisual" };
    };
    template <> struct name<Windows::UI::Composition::CubicBezierEasingFunction>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CubicBezierEasingFunction" };
    };
    template <> struct name<Windows::UI::Composition::DistantLight>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.DistantLight" };
    };
    template <> struct name<Windows::UI::Composition::DropShadow>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.DropShadow" };
    };
    template <> struct name<Windows::UI::Composition::ExpressionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ExpressionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::ImplicitAnimationCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ImplicitAnimationCollection" };
    };
    template <> struct name<Windows::UI::Composition::InitialValueExpressionCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.InitialValueExpressionCollection" };
    };
    template <> struct name<Windows::UI::Composition::InsetClip>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.InsetClip" };
    };
    template <> struct name<Windows::UI::Composition::KeyFrameAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.KeyFrameAnimation" };
    };
    template <> struct name<Windows::UI::Composition::LayerVisual>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.LayerVisual" };
    };
    template <> struct name<Windows::UI::Composition::LinearEasingFunction>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.LinearEasingFunction" };
    };
    template <> struct name<Windows::UI::Composition::NaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.NaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::PathKeyFrameAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.PathKeyFrameAnimation" };
    };
    template <> struct name<Windows::UI::Composition::PointLight>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.PointLight" };
    };
    template <> struct name<Windows::UI::Composition::QuaternionKeyFrameAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.QuaternionKeyFrameAnimation" };
    };
    template <> struct name<Windows::UI::Composition::RedirectVisual>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.RedirectVisual" };
    };
    template <> struct name<Windows::UI::Composition::RenderingDeviceReplacedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.RenderingDeviceReplacedEventArgs" };
    };
    template <> struct name<Windows::UI::Composition::ScalarKeyFrameAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ScalarKeyFrameAnimation" };
    };
    template <> struct name<Windows::UI::Composition::ScalarNaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ScalarNaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::ShapeVisual>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.ShapeVisual" };
    };
    template <> struct name<Windows::UI::Composition::SpotLight>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.SpotLight" };
    };
    template <> struct name<Windows::UI::Composition::SpringScalarNaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.SpringScalarNaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::SpringVector2NaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.SpringVector2NaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::SpringVector3NaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.SpringVector3NaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::SpriteVisual>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.SpriteVisual" };
    };
    template <> struct name<Windows::UI::Composition::StepEasingFunction>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.StepEasingFunction" };
    };
    template <> struct name<Windows::UI::Composition::Vector2KeyFrameAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Vector2KeyFrameAnimation" };
    };
    template <> struct name<Windows::UI::Composition::Vector2NaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Vector2NaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::Vector3KeyFrameAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Vector3KeyFrameAnimation" };
    };
    template <> struct name<Windows::UI::Composition::Vector3NaturalMotionAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Vector3NaturalMotionAnimation" };
    };
    template <> struct name<Windows::UI::Composition::Vector4KeyFrameAnimation>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Vector4KeyFrameAnimation" };
    };
    template <> struct name<Windows::UI::Composition::Visual>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Visual" };
    };
    template <> struct name<Windows::UI::Composition::VisualCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.VisualCollection" };
    };
    template <> struct name<Windows::UI::Composition::VisualUnorderedCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.VisualUnorderedCollection" };
    };
    template <> struct name<Windows::UI::Composition::AnimationControllerProgressBehavior>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.AnimationControllerProgressBehavior" };
    };
    template <> struct name<Windows::UI::Composition::AnimationDelayBehavior>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.AnimationDelayBehavior" };
    };
    template <> struct name<Windows::UI::Composition::AnimationDirection>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.AnimationDirection" };
    };
    template <> struct name<Windows::UI::Composition::AnimationIterationBehavior>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.AnimationIterationBehavior" };
    };
    template <> struct name<Windows::UI::Composition::AnimationPropertyAccessMode>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.AnimationPropertyAccessMode" };
    };
    template <> struct name<Windows::UI::Composition::AnimationStopBehavior>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.AnimationStopBehavior" };
    };
    template <> struct name<Windows::UI::Composition::CompositionBackfaceVisibility>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionBackfaceVisibility" };
    };
    template <> struct name<Windows::UI::Composition::CompositionBatchTypes>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionBatchTypes" };
    };
    template <> struct name<Windows::UI::Composition::CompositionBitmapInterpolationMode>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionBitmapInterpolationMode" };
    };
    template <> struct name<Windows::UI::Composition::CompositionBorderMode>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionBorderMode" };
    };
    template <> struct name<Windows::UI::Composition::CompositionColorSpace>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionColorSpace" };
    };
    template <> struct name<Windows::UI::Composition::CompositionCompositeMode>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionCompositeMode" };
    };
    template <> struct name<Windows::UI::Composition::CompositionDropShadowSourcePolicy>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionDropShadowSourcePolicy" };
    };
    template <> struct name<Windows::UI::Composition::CompositionEffectFactoryLoadStatus>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionEffectFactoryLoadStatus" };
    };
    template <> struct name<Windows::UI::Composition::CompositionGetValueStatus>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionGetValueStatus" };
    };
    template <> struct name<Windows::UI::Composition::CompositionGradientExtendMode>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionGradientExtendMode" };
    };
    template <> struct name<Windows::UI::Composition::CompositionMappingMode>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionMappingMode" };
    };
    template <> struct name<Windows::UI::Composition::CompositionStretch>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionStretch" };
    };
    template <> struct name<Windows::UI::Composition::CompositionStrokeCap>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionStrokeCap" };
    };
    template <> struct name<Windows::UI::Composition::CompositionStrokeLineJoin>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.CompositionStrokeLineJoin" };
    };
    template <> struct guid_storage<Windows::UI::Composition::IAmbientLight>
    {
        static constexpr guid value{ 0xA48130A1,0xB7C4,0x46F7,{ 0xB9,0xBF,0xDA,0xF4,0x3A,0x44,0xE6,0xEE } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IAmbientLight2>
    {
        static constexpr guid value{ 0x3B64A6BF,0x5F97,0x4C94,{ 0x86,0xE5,0x04,0x2D,0xD3,0x86,0xB2,0x7D } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IAnimationController>
    {
        static constexpr guid value{ 0xC934EFD2,0x0722,0x4F5F,{ 0xA4,0xE2,0x95,0x10,0xF3,0xD4,0x3B,0xF7 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IAnimationControllerStatics>
    {
        static constexpr guid value{ 0xE71164DF,0x651B,0x4800,{ 0xB9,0xE5,0x6A,0x3B,0xCF,0xED,0x33,0x65 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IAnimationObject>
    {
        static constexpr guid value{ 0xE7141E0A,0x04B8,0x4FC5,{ 0xA4,0xDC,0x19,0x53,0x92,0xE5,0x78,0x07 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IAnimationPropertyInfo>
    {
        static constexpr guid value{ 0xF4716F05,0xED77,0x4E3C,{ 0xB3,0x28,0x5C,0x39,0x85,0xB3,0x73,0x8F } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IBooleanKeyFrameAnimation>
    {
        static constexpr guid value{ 0x95E23A08,0xD1F4,0x4972,{ 0x97,0x70,0x3E,0xFE,0x68,0xD8,0x2E,0x14 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IBounceScalarNaturalMotionAnimation>
    {
        static constexpr guid value{ 0xBAA30DCC,0xA633,0x4618,{ 0x9B,0x06,0x7F,0x7C,0x72,0xC8,0x7C,0xFF } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IBounceVector2NaturalMotionAnimation>
    {
        static constexpr guid value{ 0xDA344196,0x2154,0x4B3C,{ 0x88,0xAA,0x47,0x36,0x12,0x04,0xEC,0xCD } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IBounceVector3NaturalMotionAnimation>
    {
        static constexpr guid value{ 0x47DABC31,0x10D3,0x4518,{ 0x86,0xF1,0x09,0xCA,0xF7,0x42,0xD1,0x13 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IColorKeyFrameAnimation>
    {
        static constexpr guid value{ 0x93ADB5E9,0x8E05,0x4593,{ 0x84,0xA3,0xDC,0xA1,0x52,0x78,0x1E,0x56 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionAnimation>
    {
        static constexpr guid value{ 0x464C4C2C,0x1CAA,0x4061,{ 0x9B,0x40,0xE1,0x3F,0xDE,0x15,0x03,0xCA } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionAnimation2>
    {
        static constexpr guid value{ 0x369B603E,0xA80F,0x4948,{ 0x93,0xE3,0xED,0x23,0xFB,0x38,0xC6,0xCB } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionAnimation3>
    {
        static constexpr guid value{ 0xD51E030D,0x7DA4,0x4BD7,{ 0xBC,0x2D,0xF4,0x51,0x75,0x29,0xF4,0x3A } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionAnimation4>
    {
        static constexpr guid value{ 0x770137BE,0x76BC,0x4E23,{ 0xBF,0xED,0xFE,0x9C,0xC2,0x0F,0x6E,0xC9 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionAnimationBase>
    {
        static constexpr guid value{ 0x1C2C2999,0xE818,0x48D3,{ 0xA6,0xDD,0xD7,0x8C,0x82,0xF8,0xAC,0xE9 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionAnimationFactory>
    {
        static constexpr guid value{ 0x10F6C4FB,0x6E51,0x4C25,{ 0xBB,0xD3,0x58,0x6A,0x9B,0xEC,0x3E,0xF4 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionAnimationGroup>
    {
        static constexpr guid value{ 0x5E7CC90C,0xCD14,0x4E07,{ 0x8A,0x55,0xC7,0x25,0x27,0xAA,0xBD,0xAC } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionBackdropBrush>
    {
        static constexpr guid value{ 0xC5ACAE58,0x3898,0x499E,{ 0x8D,0x7F,0x22,0x4E,0x91,0x28,0x6A,0x5D } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionBatchCompletedEventArgs>
    {
        static constexpr guid value{ 0x0D00DAD0,0x9464,0x450A,{ 0xA5,0x62,0x2E,0x26,0x98,0xB0,0xA8,0x12 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionBrush>
    {
        static constexpr guid value{ 0xAB0D7608,0x30C0,0x40E9,{ 0xB5,0x68,0xB6,0x0A,0x6B,0xD1,0xFB,0x46 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionBrushFactory>
    {
        static constexpr guid value{ 0xDA53FB4C,0x4650,0x47C4,{ 0xAD,0x76,0x76,0x53,0x79,0x60,0x7E,0xD6 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionCapabilities>
    {
        static constexpr guid value{ 0x8253353E,0xB517,0x48BC,{ 0xB1,0xE8,0x4B,0x35,0x61,0xA2,0xE1,0x81 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionCapabilitiesStatics>
    {
        static constexpr guid value{ 0xF7B7A86E,0x6416,0x49E5,{ 0x8D,0xDF,0xAF,0xE9,0x49,0xE2,0x05,0x62 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionClip>
    {
        static constexpr guid value{ 0x1CCD2A52,0xCFC7,0x4ACE,{ 0x99,0x83,0x14,0x6B,0xB8,0xEB,0x6A,0x3C } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionClip2>
    {
        static constexpr guid value{ 0x5893E069,0x3516,0x40E1,{ 0x89,0xE0,0x5B,0xA9,0x24,0x92,0x72,0x35 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionClipFactory>
    {
        static constexpr guid value{ 0xB9484CAF,0x20C7,0x4AED,{ 0xAC,0x4A,0x9C,0x78,0xBA,0x13,0x02,0xCF } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionColorBrush>
    {
        static constexpr guid value{ 0x2B264C5E,0xBF35,0x4831,{ 0x86,0x42,0xCF,0x70,0xC2,0x0F,0xFF,0x2F } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionColorGradientStop>
    {
        static constexpr guid value{ 0x6F00CA92,0xC801,0x4E41,{ 0x9A,0x8F,0xA5,0x3E,0x20,0xF5,0x77,0x78 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionColorGradientStopCollection>
    {
        static constexpr guid value{ 0x9F1D20EC,0x7B04,0x4B1D,{ 0x90,0xBC,0x9F,0xA3,0x2C,0x0C,0xFD,0x26 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionCommitBatch>
    {
        static constexpr guid value{ 0x0D00DAD0,0xCA07,0x4400,{ 0x8C,0x8E,0xCB,0x5D,0xB0,0x85,0x59,0xCC } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionContainerShape>
    {
        static constexpr guid value{ 0x4F5E859B,0x2E5B,0x44A8,{ 0x98,0x2C,0xAA,0x0F,0x69,0xC1,0x60,0x59 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionDrawingSurface>
    {
        static constexpr guid value{ 0xA166C300,0xFAD0,0x4D11,{ 0x9E,0x67,0xE4,0x33,0x16,0x2F,0xF4,0x9E } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionDrawingSurface2>
    {
        static constexpr guid value{ 0xFAD0E88B,0xE354,0x44E8,{ 0x8E,0x3D,0xC4,0x88,0x0D,0x5A,0x21,0x3F } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionDrawingSurfaceFactory>
    {
        static constexpr guid value{ 0x9497B00A,0x312D,0x46B9,{ 0x9D,0xB3,0x41,0x2F,0xD7,0x94,0x64,0xC8 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionEasingFunction>
    {
        static constexpr guid value{ 0x5145E356,0xBF79,0x4EA8,{ 0x8C,0xC2,0x6B,0x5B,0x47,0x2E,0x6C,0x9A } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionEasingFunctionFactory>
    {
        static constexpr guid value{ 0x60840774,0x3DA0,0x4949,{ 0x82,0x00,0x72,0x06,0xC0,0x01,0x90,0xA0 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionEffectBrush>
    {
        static constexpr guid value{ 0xBF7F795E,0x83CC,0x44BF,{ 0xA4,0x47,0x3E,0x3C,0x07,0x17,0x89,0xEC } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionEffectFactory>
    {
        static constexpr guid value{ 0xBE5624AF,0xBA7E,0x4510,{ 0x98,0x50,0x41,0xC0,0xB4,0xFF,0x74,0xDF } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionEffectSourceParameter>
    {
        static constexpr guid value{ 0x858AB13A,0x3292,0x4E4E,{ 0xB3,0xBB,0x2B,0x6C,0x65,0x44,0xA6,0xEE } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>
    {
        static constexpr guid value{ 0xB3D9F276,0xABA3,0x4724,{ 0xAC,0xF3,0xD0,0x39,0x74,0x64,0xDB,0x1C } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionEllipseGeometry>
    {
        static constexpr guid value{ 0x4801F884,0xF6AD,0x4B93,{ 0xAF,0xA9,0x89,0x7B,0x64,0xE5,0x7B,0x1F } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionGeometricClip>
    {
        static constexpr guid value{ 0xC840B581,0x81C9,0x4444,{ 0xA2,0xC1,0xCC,0xAE,0xCE,0x3A,0x50,0xE5 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionGeometry>
    {
        static constexpr guid value{ 0xE985217C,0x6A17,0x4207,{ 0xAB,0xD8,0x5F,0xD3,0xDD,0x61,0x2A,0x9D } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionGeometryFactory>
    {
        static constexpr guid value{ 0xBFFEBFE1,0x8C25,0x480B,{ 0x9F,0x56,0xFE,0xD6,0xB2,0x88,0x05,0x5D } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionGradientBrush>
    {
        static constexpr guid value{ 0x1D9709E0,0xFFC6,0x4C0E,{ 0xA9,0xAB,0x34,0x14,0x4D,0x4C,0x90,0x98 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionGradientBrush2>
    {
        static constexpr guid value{ 0x899DD5A1,0xB4C7,0x4B33,{ 0xA1,0xB6,0x26,0x4A,0xDD,0xC2,0x6D,0x10 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionGradientBrushFactory>
    {
        static constexpr guid value{ 0x56D765D7,0xF189,0x48C9,{ 0x9C,0x8D,0x94,0xDA,0xF1,0xBE,0xC0,0x10 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionGraphicsDevice>
    {
        static constexpr guid value{ 0xFB22C6E1,0x80A2,0x4667,{ 0x99,0x36,0xDB,0xEA,0xF6,0xEE,0xFE,0x95 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionGraphicsDevice2>
    {
        static constexpr guid value{ 0x0FB8BDF6,0xC0F0,0x4BCC,{ 0x9F,0xB8,0x08,0x49,0x82,0x49,0x0D,0x7D } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionGraphicsDevice3>
    {
        static constexpr guid value{ 0x37F67514,0xD3EF,0x49D1,{ 0xB6,0x9D,0x0D,0x8E,0xAB,0xEB,0x36,0x26 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionLight>
    {
        static constexpr guid value{ 0x41A6D7C2,0x2E5D,0x4BC1,{ 0xB0,0x9E,0x8F,0x0A,0x03,0xE3,0xD8,0xD3 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionLight2>
    {
        static constexpr guid value{ 0xA7BCDA72,0xF35D,0x425D,{ 0x9B,0x98,0x23,0xF4,0x20,0x5F,0x66,0x69 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionLight3>
    {
        static constexpr guid value{ 0x4B0B00E4,0xDF07,0x4959,{ 0xB7,0xA4,0x4F,0x7E,0x42,0x33,0xF8,0x38 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionLightFactory>
    {
        static constexpr guid value{ 0x069CF306,0xDA3C,0x4B44,{ 0x83,0x8A,0x5E,0x03,0xD5,0x1A,0xCE,0x55 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionLineGeometry>
    {
        static constexpr guid value{ 0xDD7615A4,0x0C9A,0x4B67,{ 0x8D,0xCE,0x44,0x0A,0x5B,0xF9,0xCD,0xEC } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionLinearGradientBrush>
    {
        static constexpr guid value{ 0x983BC519,0xA9DB,0x413C,{ 0xA2,0xD8,0x2A,0x90,0x56,0xFC,0x52,0x5E } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionMaskBrush>
    {
        static constexpr guid value{ 0x522CF09E,0xBE6B,0x4F41,{ 0xBE,0x49,0xF9,0x22,0x6D,0x47,0x1B,0x4A } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionMipmapSurface>
    {
        static constexpr guid value{ 0x4863675C,0xCF4A,0x4B1C,{ 0x9E,0xCE,0xC5,0xEC,0x0C,0x2B,0x2F,0xE6 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionNineGridBrush>
    {
        static constexpr guid value{ 0xF25154E4,0xBC8C,0x4BE7,{ 0xB8,0x0F,0x86,0x85,0xB8,0x3C,0x01,0x86 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionObject>
    {
        static constexpr guid value{ 0xBCB4AD45,0x7609,0x4550,{ 0x93,0x4F,0x16,0x00,0x2A,0x68,0xFD,0xED } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionObject2>
    {
        static constexpr guid value{ 0xEF874EA1,0x5CFF,0x4B68,{ 0x9E,0x30,0xA1,0x51,0x9D,0x08,0xBA,0x03 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionObject3>
    {
        static constexpr guid value{ 0x4BC27925,0xDACD,0x4CF2,{ 0x98,0xB1,0x98,0x6B,0x76,0xE7,0xEB,0xE6 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionObject4>
    {
        static constexpr guid value{ 0x0BB3784C,0x346B,0x4A7C,{ 0x96,0x6B,0x73,0x10,0x96,0x65,0x53,0xD5 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionObjectFactory>
    {
        static constexpr guid value{ 0x51205C5E,0x558A,0x4F2A,{ 0x8D,0x39,0x37,0xBF,0xE1,0xE2,0x0D,0xDD } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionObjectStatics>
    {
        static constexpr guid value{ 0xC1ED052F,0x1BA2,0x44BA,{ 0xA9,0x04,0x6A,0x88,0x2A,0x0A,0x5A,0xDB } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionPath>
    {
        static constexpr guid value{ 0x66DA1D5F,0x2E10,0x4F22,{ 0x8A,0x06,0x0A,0x81,0x51,0x91,0x9E,0x60 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionPathFactory>
    {
        static constexpr guid value{ 0x9C1E8C6A,0x0F33,0x4751,{ 0x94,0x37,0xEB,0x3F,0xB9,0xD3,0xAB,0x07 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionPathGeometry>
    {
        static constexpr guid value{ 0x0B6A417E,0x2C77,0x4C23,{ 0xAF,0x5E,0x63,0x04,0xC1,0x47,0xBB,0x61 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionProjectedShadow>
    {
        static constexpr guid value{ 0x285B8E72,0x4328,0x523F,{ 0xBC,0xF2,0x55,0x57,0xC5,0x2C,0x3B,0x25 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionProjectedShadowCaster>
    {
        static constexpr guid value{ 0xB1D7D426,0x1E36,0x5A62,{ 0xBE,0x56,0xA1,0x61,0x12,0xFD,0xD1,0x48 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>
    {
        static constexpr guid value{ 0xD2525C0C,0xE07F,0x58A3,{ 0xAC,0x91,0x37,0xF7,0x3E,0xE9,0x17,0x40 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionProjectedShadowCasterCollectionStatics>
    {
        static constexpr guid value{ 0x56FBB136,0xE94F,0x5299,{ 0xAB,0x5B,0x6E,0x15,0xE3,0x8B,0xD8,0x99 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionProjectedShadowReceiver>
    {
        static constexpr guid value{ 0x1377985A,0x6A49,0x536A,{ 0x9B,0xE4,0xA9,0x6A,0x8E,0x52,0x98,0xA9 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionProjectedShadowReceiverUnorderedCollection>
    {
        static constexpr guid value{ 0x02B3E3B7,0x27D2,0x599F,{ 0xAC,0x4B,0xAB,0x78,0x7C,0xDD,0xE6,0xFD } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionPropertySet>
    {
        static constexpr guid value{ 0xC9D6D202,0x5F67,0x4453,{ 0x91,0x17,0x9E,0xAD,0xD4,0x30,0xD3,0xC2 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionPropertySet2>
    {
        static constexpr guid value{ 0xDE80731E,0xA211,0x4455,{ 0x88,0x80,0x7D,0x0F,0x3F,0x6A,0x44,0xFD } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionRadialGradientBrush>
    {
        static constexpr guid value{ 0x3D3B50C5,0xE3FA,0x4CE2,{ 0xB9,0xFC,0x3E,0xE1,0x25,0x61,0x78,0x8F } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionRectangleGeometry>
    {
        static constexpr guid value{ 0x0CD51428,0x5356,0x4246,{ 0xAE,0xCF,0x7A,0x0B,0x76,0x97,0x54,0x00 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionRoundedRectangleGeometry>
    {
        static constexpr guid value{ 0x8770C822,0x1D50,0x4B8B,{ 0xB0,0x13,0x7C,0x9A,0x0E,0x46,0x93,0x5F } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionScopedBatch>
    {
        static constexpr guid value{ 0x0D00DAD0,0xFB07,0x46FD,{ 0x8C,0x72,0x62,0x80,0xD1,0xA3,0xD1,0xDD } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionShadow>
    {
        static constexpr guid value{ 0x329E52E2,0x4335,0x49CC,{ 0xB1,0x4A,0x37,0x78,0x2D,0x10,0xF0,0xC4 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionShadowFactory>
    {
        static constexpr guid value{ 0x221F492F,0xDCBA,0x4B91,{ 0x99,0x9E,0x1D,0xC2,0x17,0xA0,0x15,0x30 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionShape>
    {
        static constexpr guid value{ 0xB47CE2F7,0x9A88,0x42C4,{ 0x9E,0x87,0x2E,0x50,0x0C,0xA8,0x68,0x8C } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionShapeFactory>
    {
        static constexpr guid value{ 0x1DFC36D0,0xB05A,0x44EF,{ 0x82,0xB0,0x12,0x11,0x8B,0xCD,0x4C,0xD0 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionSpriteShape>
    {
        static constexpr guid value{ 0x401B61BB,0x0007,0x4363,{ 0xB1,0xF3,0x6B,0xCC,0x00,0x3F,0xB8,0x3E } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionSurface>
    {
        static constexpr guid value{ 0x1527540D,0x42C7,0x47A6,{ 0xA4,0x08,0x66,0x8F,0x79,0xA9,0x0D,0xFB } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionSurfaceBrush>
    {
        static constexpr guid value{ 0xAD016D79,0x1E4C,0x4C0D,{ 0x9C,0x29,0x83,0x33,0x8C,0x87,0xC1,0x62 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionSurfaceBrush2>
    {
        static constexpr guid value{ 0xD27174D5,0x64F5,0x4692,{ 0x9D,0xC7,0x71,0xB6,0x1D,0x7E,0x58,0x80 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionSurfaceBrush3>
    {
        static constexpr guid value{ 0x550BB289,0x1FE0,0x42E5,{ 0x81,0x95,0x1E,0xEF,0xA8,0x7F,0xF0,0x8E } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionTarget>
    {
        static constexpr guid value{ 0xA1BEA8BA,0xD726,0x4663,{ 0x81,0x29,0x6B,0x5E,0x79,0x27,0xFF,0xA6 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionTargetFactory>
    {
        static constexpr guid value{ 0x93CD9D2B,0x8516,0x4B14,{ 0xA8,0xCE,0xF4,0x9E,0x21,0x19,0xEC,0x42 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionTransform>
    {
        static constexpr guid value{ 0x7CD54529,0xFBED,0x4112,{ 0xAB,0xC5,0x18,0x59,0x06,0xDD,0x92,0x7C } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionTransformFactory>
    {
        static constexpr guid value{ 0xAAAECA26,0xC149,0x517A,{ 0x8F,0x72,0x6B,0xFF,0x7A,0x65,0xCE,0x08 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionViewBox>
    {
        static constexpr guid value{ 0xB440BF07,0x068F,0x4537,{ 0x84,0xC6,0x4E,0xCB,0xE0,0x19,0xE1,0xF4 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionVirtualDrawingSurface>
    {
        static constexpr guid value{ 0xA9C384DB,0x8740,0x4F94,{ 0x8B,0x9D,0xB6,0x85,0x21,0xE7,0x86,0x3D } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory>
    {
        static constexpr guid value{ 0x6766106C,0xD56B,0x4A49,{ 0xB1,0xDF,0x50,0x76,0xA0,0x62,0x07,0x68 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositionVisualSurface>
    {
        static constexpr guid value{ 0xB224D803,0x4F6E,0x4A3F,{ 0x8C,0xAE,0x3D,0xC1,0xCD,0xA7,0x4F,0xC6 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositor>
    {
        static constexpr guid value{ 0xB403CA50,0x7F8C,0x4E83,{ 0x98,0x5F,0xCC,0x45,0x06,0x00,0x36,0xD8 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositor2>
    {
        static constexpr guid value{ 0x735081DC,0x5E24,0x45DA,{ 0xA3,0x8F,0xE3,0x2C,0xC3,0x49,0xA9,0xA0 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositor3>
    {
        static constexpr guid value{ 0xC9DD8EF0,0x6EB1,0x4E3C,{ 0xA6,0x58,0x67,0x5D,0x9C,0x64,0xD4,0xAB } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositor4>
    {
        static constexpr guid value{ 0xAE47E78A,0x7910,0x4425,{ 0xA4,0x82,0xA0,0x5B,0x75,0x8A,0xDC,0xE9 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositor5>
    {
        static constexpr guid value{ 0x48EA31AD,0x7FCD,0x4076,{ 0xA7,0x9C,0x90,0xCC,0x4B,0x85,0x2C,0x9B } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositor6>
    {
        static constexpr guid value{ 0x7A38B2BD,0xCEC8,0x4EEB,{ 0x83,0x0F,0xD8,0xD0,0x7A,0xED,0xEB,0xC3 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositorStatics>
    {
        static constexpr guid value{ 0x080DB93E,0x121E,0x4D97,{ 0x8B,0x74,0x1D,0xFC,0xF9,0x19,0x87,0xEA } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositorWithProjectedShadow>
    {
        static constexpr guid value{ 0xA2E6330E,0x8A60,0x5A38,{ 0xBB,0x85,0xB4,0x4E,0xA9,0x01,0x67,0x7C } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositorWithRadialGradient>
    {
        static constexpr guid value{ 0x98B9C1A7,0x8E71,0x4B53,{ 0xB4,0xA8,0x69,0xBA,0x5D,0x19,0xDC,0x5B } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICompositorWithVisualSurface>
    {
        static constexpr guid value{ 0xCFA1658B,0x0123,0x4551,{ 0x88,0x91,0x89,0xBD,0xCC,0x40,0x32,0x2B } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IContainerVisual>
    {
        static constexpr guid value{ 0x02F6BC74,0xED20,0x4773,{ 0xAF,0xE6,0xD4,0x9B,0x4A,0x93,0xDB,0x32 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IContainerVisualFactory>
    {
        static constexpr guid value{ 0x0363A65B,0xC7DA,0x4D9A,{ 0x95,0xF4,0x69,0xB5,0xC8,0xDF,0x67,0x0B } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ICubicBezierEasingFunction>
    {
        static constexpr guid value{ 0x32350666,0xC1E8,0x44F9,{ 0x96,0xB8,0xC9,0x8A,0xCF,0x0A,0xE6,0x98 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IDistantLight>
    {
        static constexpr guid value{ 0x318CFAFC,0x5CE3,0x4B55,{ 0xAB,0x5D,0x07,0xA0,0x03,0x53,0xAC,0x99 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IDistantLight2>
    {
        static constexpr guid value{ 0xDBCDAA1C,0x294B,0x48D7,{ 0xB6,0x0E,0x76,0xDF,0x64,0xAA,0x39,0x2B } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IDropShadow>
    {
        static constexpr guid value{ 0xCB977C07,0xA154,0x4851,{ 0x85,0xE7,0xA8,0x92,0x4C,0x84,0xFA,0xD8 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IDropShadow2>
    {
        static constexpr guid value{ 0x6C4218BC,0x15B9,0x4C2D,{ 0x8D,0x4A,0x07,0x67,0xDF,0x11,0x97,0x7A } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IExpressionAnimation>
    {
        static constexpr guid value{ 0x6ACC5431,0x7D3D,0x4BF3,{ 0xAB,0xB6,0xF4,0x4B,0xDC,0x48,0x88,0xC1 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IImplicitAnimationCollection>
    {
        static constexpr guid value{ 0x0598A3FF,0x0A92,0x4C9D,{ 0xA4,0x27,0xB2,0x55,0x19,0x25,0x0D,0xBF } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IInsetClip>
    {
        static constexpr guid value{ 0x1E73E647,0x84C7,0x477A,{ 0xB4,0x74,0x58,0x80,0xE0,0x44,0x2E,0x15 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IKeyFrameAnimation>
    {
        static constexpr guid value{ 0x126E7F22,0x3AE9,0x4540,{ 0x9A,0x8A,0xDE,0xAE,0x8A,0x4A,0x4A,0x84 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IKeyFrameAnimation2>
    {
        static constexpr guid value{ 0xF4B488BB,0x2940,0x4EC0,{ 0xA4,0x1A,0xEB,0x6D,0x80,0x1A,0x2F,0x18 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IKeyFrameAnimation3>
    {
        static constexpr guid value{ 0x845BF0B4,0xD8DE,0x462F,{ 0x87,0x53,0xC8,0x0D,0x43,0xC6,0xFF,0x5A } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IKeyFrameAnimationFactory>
    {
        static constexpr guid value{ 0xBF0803F8,0x712A,0x4FC1,{ 0x8C,0x87,0x97,0x08,0x59,0xED,0x8D,0x2E } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ILayerVisual>
    {
        static constexpr guid value{ 0xAF843985,0x0444,0x4887,{ 0x8E,0x83,0xB4,0x0B,0x25,0x3F,0x82,0x2C } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ILayerVisual2>
    {
        static constexpr guid value{ 0x98F9AEEB,0x6F23,0x49F1,{ 0x90,0xB1,0x1F,0x59,0xA1,0x4F,0xBC,0xE3 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ILinearEasingFunction>
    {
        static constexpr guid value{ 0x9400975A,0xC7A6,0x46B3,{ 0xAC,0xF7,0x1A,0x26,0x8A,0x0A,0x11,0x7D } };
    };
    template <> struct guid_storage<Windows::UI::Composition::INaturalMotionAnimation>
    {
        static constexpr guid value{ 0x438DE12D,0x769B,0x4821,{ 0xA9,0x49,0x28,0x4A,0x65,0x47,0xE8,0x73 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::INaturalMotionAnimationFactory>
    {
        static constexpr guid value{ 0xF53ACB06,0xCF6A,0x4387,{ 0xA3,0xFE,0x52,0x21,0xF3,0xE7,0xE0,0xE0 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IPathKeyFrameAnimation>
    {
        static constexpr guid value{ 0x9D0D18C9,0x1576,0x4B3F,{ 0xBE,0x60,0x1D,0x50,0x31,0xF5,0xE7,0x1B } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IPointLight>
    {
        static constexpr guid value{ 0xB18545B3,0x0C5A,0x4AB0,{ 0xBE,0xDC,0x4F,0x35,0x46,0x94,0x82,0x72 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IPointLight2>
    {
        static constexpr guid value{ 0xEFE98F2C,0x0678,0x4F69,{ 0xB1,0x64,0xA8,0x10,0xD9,0x95,0xBC,0xB7 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IPointLight3>
    {
        static constexpr guid value{ 0x4C0A8367,0xD4E9,0x468A,{ 0x87,0xAE,0x7B,0xA4,0x3A,0xB2,0x94,0x85 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IQuaternionKeyFrameAnimation>
    {
        static constexpr guid value{ 0x404E5835,0xECF6,0x4240,{ 0x85,0x20,0x67,0x12,0x79,0xCF,0x36,0xBC } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IRedirectVisual>
    {
        static constexpr guid value{ 0x8CC6E340,0x8B75,0x5422,{ 0xB0,0x6F,0x09,0xFF,0xE9,0xF8,0x61,0x7E } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IRenderingDeviceReplacedEventArgs>
    {
        static constexpr guid value{ 0x3A31AC7D,0x28BF,0x4E7A,{ 0x85,0x24,0x71,0x67,0x9D,0x48,0x0F,0x38 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IScalarKeyFrameAnimation>
    {
        static constexpr guid value{ 0xAE288FA9,0x252C,0x4B95,{ 0xA7,0x25,0xBF,0x85,0xE3,0x80,0x00,0xA1 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IScalarNaturalMotionAnimation>
    {
        static constexpr guid value{ 0x94A94581,0xBF92,0x495B,{ 0xB5,0xBD,0xD2,0xC6,0x59,0x43,0x07,0x37 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IScalarNaturalMotionAnimationFactory>
    {
        static constexpr guid value{ 0x835AA4FC,0x671C,0x41DD,{ 0xAF,0x48,0xAE,0x8D,0xEF,0x8B,0x15,0x29 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IShapeVisual>
    {
        static constexpr guid value{ 0xF2BD13C3,0xBA7E,0x4B0F,{ 0x91,0x26,0xFF,0xB7,0x53,0x6B,0x81,0x76 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ISpotLight>
    {
        static constexpr guid value{ 0x5A9FE273,0x44A1,0x4F95,{ 0xA4,0x22,0x8F,0xA5,0x11,0x6B,0xDB,0x44 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ISpotLight2>
    {
        static constexpr guid value{ 0x64EE615E,0x0686,0x4DEA,{ 0xA9,0xE8,0xBC,0x3A,0x8C,0x70,0x14,0x59 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ISpotLight3>
    {
        static constexpr guid value{ 0xE4D03EEA,0x131F,0x480E,{ 0x85,0x9E,0xB8,0x27,0x05,0xB7,0x43,0x60 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ISpringScalarNaturalMotionAnimation>
    {
        static constexpr guid value{ 0x0572A95F,0x37F9,0x4FBE,{ 0xB8,0x7B,0x5C,0xD0,0x3A,0x89,0x50,0x1C } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ISpringVector2NaturalMotionAnimation>
    {
        static constexpr guid value{ 0x23F494B5,0xEE73,0x4F0F,{ 0xA4,0x23,0x40,0x2B,0x94,0x6D,0xF4,0xB3 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ISpringVector3NaturalMotionAnimation>
    {
        static constexpr guid value{ 0x6C8749DF,0xD57B,0x4794,{ 0x8E,0x2D,0xCE,0xCB,0x11,0xE1,0x94,0xE5 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ISpriteVisual>
    {
        static constexpr guid value{ 0x08E05581,0x1AD1,0x4F97,{ 0x97,0x57,0x40,0x2D,0x76,0xE4,0x23,0x3B } };
    };
    template <> struct guid_storage<Windows::UI::Composition::ISpriteVisual2>
    {
        static constexpr guid value{ 0x588C9664,0x997A,0x4850,{ 0x91,0xFE,0x53,0xCB,0x58,0xF8,0x1C,0xE9 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IStepEasingFunction>
    {
        static constexpr guid value{ 0xD0CAA74B,0x560C,0x4A0B,{ 0xA5,0xF6,0x20,0x6C,0xA8,0xC3,0xEC,0xD6 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IVector2KeyFrameAnimation>
    {
        static constexpr guid value{ 0xDF414515,0x4E29,0x4F11,{ 0xB5,0x5E,0xBF,0x2A,0x6E,0xB3,0x62,0x94 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IVector2NaturalMotionAnimation>
    {
        static constexpr guid value{ 0x0F3E0B7D,0xE512,0x479D,{ 0xA0,0x0C,0x77,0xC9,0x3A,0x30,0xA3,0x95 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IVector2NaturalMotionAnimationFactory>
    {
        static constexpr guid value{ 0x8C74FF61,0x0761,0x48A2,{ 0xBD,0xDB,0x6A,0xFC,0xC5,0x2B,0x89,0xD8 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IVector3KeyFrameAnimation>
    {
        static constexpr guid value{ 0xC8039DAA,0xA281,0x43C2,{ 0xA7,0x3D,0xB6,0x8E,0x3C,0x53,0x3C,0x40 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IVector3NaturalMotionAnimation>
    {
        static constexpr guid value{ 0x9C17042C,0xE2CA,0x45AD,{ 0x96,0x9E,0x4E,0x78,0xB7,0xB9,0xAD,0x41 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IVector3NaturalMotionAnimationFactory>
    {
        static constexpr guid value{ 0x21A81D2F,0x0880,0x457B,{ 0xAC,0x87,0xB6,0x09,0x01,0x8C,0x87,0x6D } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IVector4KeyFrameAnimation>
    {
        static constexpr guid value{ 0x2457945B,0xADDD,0x4385,{ 0x96,0x06,0xB6,0xA3,0xD5,0xE4,0xE1,0xB9 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IVisual>
    {
        static constexpr guid value{ 0x117E202D,0xA859,0x4C89,{ 0x87,0x3B,0xC2,0xAA,0x56,0x67,0x88,0xE3 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IVisual2>
    {
        static constexpr guid value{ 0x3052B611,0x56C3,0x4C3E,{ 0x8B,0xF3,0xF6,0xE1,0xAD,0x47,0x3F,0x06 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IVisual3>
    {
        static constexpr guid value{ 0x30BE580D,0xF4B6,0x4AB7,{ 0x80,0xDD,0x37,0x38,0xCB,0xAC,0x9F,0x2C } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IVisualCollection>
    {
        static constexpr guid value{ 0x8B745505,0xFD3E,0x4A98,{ 0x84,0xA8,0xE9,0x49,0x46,0x8C,0x6B,0xCB } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IVisualElement>
    {
        static constexpr guid value{ 0x01E64612,0x1D82,0x42F4,{ 0x8E,0x3F,0xA7,0x22,0xDE,0xD3,0x3F,0xC7 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IVisualFactory>
    {
        static constexpr guid value{ 0xAD0FF93E,0xB502,0x4EB5,{ 0x87,0xB4,0x9A,0x38,0xA7,0x1D,0x01,0x37 } };
    };
    template <> struct guid_storage<Windows::UI::Composition::IVisualUnorderedCollection>
    {
        static constexpr guid value{ 0x338FAA70,0x54C8,0x40A7,{ 0x80,0x29,0xC9,0xCE,0xEB,0x0A,0xA2,0x50 } };
    };
    template <> struct default_interface<Windows::UI::Composition::AmbientLight>
    {
        using type = Windows::UI::Composition::IAmbientLight;
    };
    template <> struct default_interface<Windows::UI::Composition::AnimationController>
    {
        using type = Windows::UI::Composition::IAnimationController;
    };
    template <> struct default_interface<Windows::UI::Composition::AnimationPropertyInfo>
    {
        using type = Windows::UI::Composition::IAnimationPropertyInfo;
    };
    template <> struct default_interface<Windows::UI::Composition::BooleanKeyFrameAnimation>
    {
        using type = Windows::UI::Composition::IBooleanKeyFrameAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::BounceScalarNaturalMotionAnimation>
    {
        using type = Windows::UI::Composition::IBounceScalarNaturalMotionAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::BounceVector2NaturalMotionAnimation>
    {
        using type = Windows::UI::Composition::IBounceVector2NaturalMotionAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::BounceVector3NaturalMotionAnimation>
    {
        using type = Windows::UI::Composition::IBounceVector3NaturalMotionAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::ColorKeyFrameAnimation>
    {
        using type = Windows::UI::Composition::IColorKeyFrameAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionAnimation>
    {
        using type = Windows::UI::Composition::ICompositionAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionAnimationGroup>
    {
        using type = Windows::UI::Composition::ICompositionAnimationGroup;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionBackdropBrush>
    {
        using type = Windows::UI::Composition::ICompositionBackdropBrush;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionBatchCompletedEventArgs>
    {
        using type = Windows::UI::Composition::ICompositionBatchCompletedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionBrush>
    {
        using type = Windows::UI::Composition::ICompositionBrush;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionCapabilities>
    {
        using type = Windows::UI::Composition::ICompositionCapabilities;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionClip>
    {
        using type = Windows::UI::Composition::ICompositionClip;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionColorBrush>
    {
        using type = Windows::UI::Composition::ICompositionColorBrush;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionColorGradientStop>
    {
        using type = Windows::UI::Composition::ICompositionColorGradientStop;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionColorGradientStopCollection>
    {
        using type = Windows::UI::Composition::ICompositionColorGradientStopCollection;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionCommitBatch>
    {
        using type = Windows::UI::Composition::ICompositionCommitBatch;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionContainerShape>
    {
        using type = Windows::UI::Composition::ICompositionContainerShape;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionDrawingSurface>
    {
        using type = Windows::UI::Composition::ICompositionDrawingSurface;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionEasingFunction>
    {
        using type = Windows::UI::Composition::ICompositionEasingFunction;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionEffectBrush>
    {
        using type = Windows::UI::Composition::ICompositionEffectBrush;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionEffectFactory>
    {
        using type = Windows::UI::Composition::ICompositionEffectFactory;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionEffectSourceParameter>
    {
        using type = Windows::UI::Composition::ICompositionEffectSourceParameter;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionEllipseGeometry>
    {
        using type = Windows::UI::Composition::ICompositionEllipseGeometry;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionGeometricClip>
    {
        using type = Windows::UI::Composition::ICompositionGeometricClip;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionGeometry>
    {
        using type = Windows::UI::Composition::ICompositionGeometry;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionGradientBrush>
    {
        using type = Windows::UI::Composition::ICompositionGradientBrush;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionGraphicsDevice>
    {
        using type = Windows::UI::Composition::ICompositionGraphicsDevice;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionLight>
    {
        using type = Windows::UI::Composition::ICompositionLight;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionLineGeometry>
    {
        using type = Windows::UI::Composition::ICompositionLineGeometry;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionLinearGradientBrush>
    {
        using type = Windows::UI::Composition::ICompositionLinearGradientBrush;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionMaskBrush>
    {
        using type = Windows::UI::Composition::ICompositionMaskBrush;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionMipmapSurface>
    {
        using type = Windows::UI::Composition::ICompositionMipmapSurface;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionNineGridBrush>
    {
        using type = Windows::UI::Composition::ICompositionNineGridBrush;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionObject>
    {
        using type = Windows::UI::Composition::ICompositionObject;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionPath>
    {
        using type = Windows::UI::Composition::ICompositionPath;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionPathGeometry>
    {
        using type = Windows::UI::Composition::ICompositionPathGeometry;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionProjectedShadow>
    {
        using type = Windows::UI::Composition::ICompositionProjectedShadow;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionProjectedShadowCaster>
    {
        using type = Windows::UI::Composition::ICompositionProjectedShadowCaster;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionProjectedShadowCasterCollection>
    {
        using type = Windows::UI::Composition::ICompositionProjectedShadowCasterCollection;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionProjectedShadowReceiver>
    {
        using type = Windows::UI::Composition::ICompositionProjectedShadowReceiver;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection>
    {
        using type = Windows::UI::Composition::ICompositionProjectedShadowReceiverUnorderedCollection;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionPropertySet>
    {
        using type = Windows::UI::Composition::ICompositionPropertySet;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionRadialGradientBrush>
    {
        using type = Windows::UI::Composition::ICompositionRadialGradientBrush;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionRectangleGeometry>
    {
        using type = Windows::UI::Composition::ICompositionRectangleGeometry;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionRoundedRectangleGeometry>
    {
        using type = Windows::UI::Composition::ICompositionRoundedRectangleGeometry;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionScopedBatch>
    {
        using type = Windows::UI::Composition::ICompositionScopedBatch;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionShadow>
    {
        using type = Windows::UI::Composition::ICompositionShadow;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionShape>
    {
        using type = Windows::UI::Composition::ICompositionShape;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionShapeCollection>
    {
        using type = Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionShape>;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionSpriteShape>
    {
        using type = Windows::UI::Composition::ICompositionSpriteShape;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionStrokeDashArray>
    {
        using type = Windows::Foundation::Collections::IVector<float>;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionSurfaceBrush>
    {
        using type = Windows::UI::Composition::ICompositionSurfaceBrush;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionTarget>
    {
        using type = Windows::UI::Composition::ICompositionTarget;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionTransform>
    {
        using type = Windows::UI::Composition::ICompositionTransform;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionViewBox>
    {
        using type = Windows::UI::Composition::ICompositionViewBox;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionVirtualDrawingSurface>
    {
        using type = Windows::UI::Composition::ICompositionVirtualDrawingSurface;
    };
    template <> struct default_interface<Windows::UI::Composition::CompositionVisualSurface>
    {
        using type = Windows::UI::Composition::ICompositionVisualSurface;
    };
    template <> struct default_interface<Windows::UI::Composition::Compositor>
    {
        using type = Windows::UI::Composition::ICompositor;
    };
    template <> struct default_interface<Windows::UI::Composition::ContainerVisual>
    {
        using type = Windows::UI::Composition::IContainerVisual;
    };
    template <> struct default_interface<Windows::UI::Composition::CubicBezierEasingFunction>
    {
        using type = Windows::UI::Composition::ICubicBezierEasingFunction;
    };
    template <> struct default_interface<Windows::UI::Composition::DistantLight>
    {
        using type = Windows::UI::Composition::IDistantLight;
    };
    template <> struct default_interface<Windows::UI::Composition::DropShadow>
    {
        using type = Windows::UI::Composition::IDropShadow;
    };
    template <> struct default_interface<Windows::UI::Composition::ExpressionAnimation>
    {
        using type = Windows::UI::Composition::IExpressionAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::ImplicitAnimationCollection>
    {
        using type = Windows::UI::Composition::IImplicitAnimationCollection;
    };
    template <> struct default_interface<Windows::UI::Composition::InitialValueExpressionCollection>
    {
        using type = Windows::Foundation::Collections::IMap<hstring, hstring>;
    };
    template <> struct default_interface<Windows::UI::Composition::InsetClip>
    {
        using type = Windows::UI::Composition::IInsetClip;
    };
    template <> struct default_interface<Windows::UI::Composition::KeyFrameAnimation>
    {
        using type = Windows::UI::Composition::IKeyFrameAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::LayerVisual>
    {
        using type = Windows::UI::Composition::ILayerVisual;
    };
    template <> struct default_interface<Windows::UI::Composition::LinearEasingFunction>
    {
        using type = Windows::UI::Composition::ILinearEasingFunction;
    };
    template <> struct default_interface<Windows::UI::Composition::NaturalMotionAnimation>
    {
        using type = Windows::UI::Composition::INaturalMotionAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::PathKeyFrameAnimation>
    {
        using type = Windows::UI::Composition::IPathKeyFrameAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::PointLight>
    {
        using type = Windows::UI::Composition::IPointLight;
    };
    template <> struct default_interface<Windows::UI::Composition::QuaternionKeyFrameAnimation>
    {
        using type = Windows::UI::Composition::IQuaternionKeyFrameAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::RedirectVisual>
    {
        using type = Windows::UI::Composition::IRedirectVisual;
    };
    template <> struct default_interface<Windows::UI::Composition::RenderingDeviceReplacedEventArgs>
    {
        using type = Windows::UI::Composition::IRenderingDeviceReplacedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Composition::ScalarKeyFrameAnimation>
    {
        using type = Windows::UI::Composition::IScalarKeyFrameAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::ScalarNaturalMotionAnimation>
    {
        using type = Windows::UI::Composition::IScalarNaturalMotionAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::ShapeVisual>
    {
        using type = Windows::UI::Composition::IShapeVisual;
    };
    template <> struct default_interface<Windows::UI::Composition::SpotLight>
    {
        using type = Windows::UI::Composition::ISpotLight;
    };
    template <> struct default_interface<Windows::UI::Composition::SpringScalarNaturalMotionAnimation>
    {
        using type = Windows::UI::Composition::ISpringScalarNaturalMotionAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::SpringVector2NaturalMotionAnimation>
    {
        using type = Windows::UI::Composition::ISpringVector2NaturalMotionAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::SpringVector3NaturalMotionAnimation>
    {
        using type = Windows::UI::Composition::ISpringVector3NaturalMotionAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::SpriteVisual>
    {
        using type = Windows::UI::Composition::ISpriteVisual;
    };
    template <> struct default_interface<Windows::UI::Composition::StepEasingFunction>
    {
        using type = Windows::UI::Composition::IStepEasingFunction;
    };
    template <> struct default_interface<Windows::UI::Composition::Vector2KeyFrameAnimation>
    {
        using type = Windows::UI::Composition::IVector2KeyFrameAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::Vector2NaturalMotionAnimation>
    {
        using type = Windows::UI::Composition::IVector2NaturalMotionAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::Vector3KeyFrameAnimation>
    {
        using type = Windows::UI::Composition::IVector3KeyFrameAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::Vector3NaturalMotionAnimation>
    {
        using type = Windows::UI::Composition::IVector3NaturalMotionAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::Vector4KeyFrameAnimation>
    {
        using type = Windows::UI::Composition::IVector4KeyFrameAnimation;
    };
    template <> struct default_interface<Windows::UI::Composition::Visual>
    {
        using type = Windows::UI::Composition::IVisual;
    };
    template <> struct default_interface<Windows::UI::Composition::VisualCollection>
    {
        using type = Windows::UI::Composition::IVisualCollection;
    };
    template <> struct default_interface<Windows::UI::Composition::VisualUnorderedCollection>
    {
        using type = Windows::UI::Composition::IVisualUnorderedCollection;
    };
    template <> struct abi<Windows::UI::Composition::IAmbientLight>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IAmbientLight2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Intensity(float*) noexcept = 0;
            virtual int32_t __stdcall put_Intensity(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IAnimationController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PlaybackRate(float*) noexcept = 0;
            virtual int32_t __stdcall put_PlaybackRate(float) noexcept = 0;
            virtual int32_t __stdcall get_Progress(float*) noexcept = 0;
            virtual int32_t __stdcall put_Progress(float) noexcept = 0;
            virtual int32_t __stdcall get_ProgressBehavior(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ProgressBehavior(int32_t) noexcept = 0;
            virtual int32_t __stdcall Pause() noexcept = 0;
            virtual int32_t __stdcall Resume() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IAnimationControllerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxPlaybackRate(float*) noexcept = 0;
            virtual int32_t __stdcall get_MinPlaybackRate(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IAnimationObject>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PopulatePropertyInfo(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IAnimationPropertyInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AccessMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AccessMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IBooleanKeyFrameAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InsertKeyFrame(float, bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IBounceScalarNaturalMotionAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Acceleration(float*) noexcept = 0;
            virtual int32_t __stdcall put_Acceleration(float) noexcept = 0;
            virtual int32_t __stdcall get_Restitution(float*) noexcept = 0;
            virtual int32_t __stdcall put_Restitution(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IBounceVector2NaturalMotionAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Acceleration(float*) noexcept = 0;
            virtual int32_t __stdcall put_Acceleration(float) noexcept = 0;
            virtual int32_t __stdcall get_Restitution(float*) noexcept = 0;
            virtual int32_t __stdcall put_Restitution(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IBounceVector3NaturalMotionAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Acceleration(float*) noexcept = 0;
            virtual int32_t __stdcall put_Acceleration(float) noexcept = 0;
            virtual int32_t __stdcall get_Restitution(float*) noexcept = 0;
            virtual int32_t __stdcall put_Restitution(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IColorKeyFrameAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InterpolationColorSpace(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_InterpolationColorSpace(int32_t) noexcept = 0;
            virtual int32_t __stdcall InsertKeyFrame(float, struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall InsertKeyFrameWithEasingFunction(float, struct struct_Windows_UI_Color, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ClearAllParameters() noexcept = 0;
            virtual int32_t __stdcall ClearParameter(void*) noexcept = 0;
            virtual int32_t __stdcall SetColorParameter(void*, struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall SetMatrix3x2Parameter(void*, Windows::Foundation::Numerics::float3x2) noexcept = 0;
            virtual int32_t __stdcall SetMatrix4x4Parameter(void*, Windows::Foundation::Numerics::float4x4) noexcept = 0;
            virtual int32_t __stdcall SetQuaternionParameter(void*, Windows::Foundation::Numerics::quaternion) noexcept = 0;
            virtual int32_t __stdcall SetReferenceParameter(void*, void*) noexcept = 0;
            virtual int32_t __stdcall SetScalarParameter(void*, float) noexcept = 0;
            virtual int32_t __stdcall SetVector2Parameter(void*, Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall SetVector3Parameter(void*, Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall SetVector4Parameter(void*, Windows::Foundation::Numerics::float4) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionAnimation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetBooleanParameter(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_Target(void**) noexcept = 0;
            virtual int32_t __stdcall put_Target(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionAnimation3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InitialValueExpressions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionAnimation4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetExpressionReferenceParameter(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionAnimationBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionAnimationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionAnimationGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Count(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Add(void*) noexcept = 0;
            virtual int32_t __stdcall Remove(void*) noexcept = 0;
            virtual int32_t __stdcall RemoveAll() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionBackdropBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionBatchCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AreEffectsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall AreEffectsFast(bool*) noexcept = 0;
            virtual int32_t __stdcall add_Changed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Changed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionCapabilitiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionClip>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionClip2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AnchorPoint(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_AnchorPoint(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_CenterPoint(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_CenterPoint(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_Offset(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_Offset(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_RotationAngle(float*) noexcept = 0;
            virtual int32_t __stdcall put_RotationAngle(float) noexcept = 0;
            virtual int32_t __stdcall get_RotationAngleInDegrees(float*) noexcept = 0;
            virtual int32_t __stdcall put_RotationAngleInDegrees(float) noexcept = 0;
            virtual int32_t __stdcall get_Scale(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_Scale(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float3x2*) noexcept = 0;
            virtual int32_t __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float3x2) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionClipFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionColorBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionColorGradientStop>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_Offset(float*) noexcept = 0;
            virtual int32_t __stdcall put_Offset(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionColorGradientStopCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionCommitBatch>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsActive(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsEnded(bool*) noexcept = 0;
            virtual int32_t __stdcall add_Completed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Completed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionContainerShape>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Shapes(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionDrawingSurface>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlphaMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PixelFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Size(Windows::Foundation::Size*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionDrawingSurface2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SizeInt32(struct struct_Windows_Graphics_SizeInt32*) noexcept = 0;
            virtual int32_t __stdcall Resize(struct struct_Windows_Graphics_SizeInt32) noexcept = 0;
            virtual int32_t __stdcall Scroll(struct struct_Windows_Graphics_PointInt32) noexcept = 0;
            virtual int32_t __stdcall ScrollRect(struct struct_Windows_Graphics_PointInt32, struct struct_Windows_Graphics_RectInt32) noexcept = 0;
            virtual int32_t __stdcall ScrollWithClip(struct struct_Windows_Graphics_PointInt32, struct struct_Windows_Graphics_RectInt32) noexcept = 0;
            virtual int32_t __stdcall ScrollRectWithClip(struct struct_Windows_Graphics_PointInt32, struct struct_Windows_Graphics_RectInt32, struct struct_Windows_Graphics_RectInt32) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionDrawingSurfaceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionEasingFunction>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionEasingFunctionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionEffectBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetSourceParameter(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetSourceParameter(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionEffectFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateBrush(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_LoadStatus(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionEffectSourceParameter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionEllipseGeometry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Center(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_Center(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_Radius(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_Radius(Windows::Foundation::Numerics::float2) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionGeometricClip>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Geometry(void**) noexcept = 0;
            virtual int32_t __stdcall put_Geometry(void*) noexcept = 0;
            virtual int32_t __stdcall get_ViewBox(void**) noexcept = 0;
            virtual int32_t __stdcall put_ViewBox(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionGeometry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TrimEnd(float*) noexcept = 0;
            virtual int32_t __stdcall put_TrimEnd(float) noexcept = 0;
            virtual int32_t __stdcall get_TrimOffset(float*) noexcept = 0;
            virtual int32_t __stdcall put_TrimOffset(float) noexcept = 0;
            virtual int32_t __stdcall get_TrimStart(float*) noexcept = 0;
            virtual int32_t __stdcall put_TrimStart(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionGeometryFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionGradientBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AnchorPoint(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_AnchorPoint(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_CenterPoint(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_CenterPoint(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_ColorStops(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExtendMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ExtendMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_InterpolationSpace(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_InterpolationSpace(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Offset(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_Offset(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_RotationAngle(float*) noexcept = 0;
            virtual int32_t __stdcall put_RotationAngle(float) noexcept = 0;
            virtual int32_t __stdcall get_RotationAngleInDegrees(float*) noexcept = 0;
            virtual int32_t __stdcall put_RotationAngleInDegrees(float) noexcept = 0;
            virtual int32_t __stdcall get_Scale(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_Scale(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float3x2*) noexcept = 0;
            virtual int32_t __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float3x2) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionGradientBrush2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MappingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MappingMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionGradientBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionGraphicsDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateDrawingSurface(Windows::Foundation::Size, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall add_RenderingDeviceReplaced(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RenderingDeviceReplaced(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionGraphicsDevice2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateDrawingSurface2(struct struct_Windows_Graphics_SizeInt32, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateVirtualDrawingSurface(struct struct_Windows_Graphics_SizeInt32, int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionGraphicsDevice3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMipmapSurface(struct struct_Windows_Graphics_SizeInt32, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall Trim() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionLight>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Targets(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionLight2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExclusionsFromTargets(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionLight3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionLightFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionLineGeometry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Start(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_Start(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_End(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_End(Windows::Foundation::Numerics::float2) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionLinearGradientBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EndPoint(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_EndPoint(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_StartPoint(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_StartPoint(Windows::Foundation::Numerics::float2) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionMaskBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Mask(void**) noexcept = 0;
            virtual int32_t __stdcall put_Mask(void*) noexcept = 0;
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall put_Source(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionMipmapSurface>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LevelCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AlphaMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PixelFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SizeInt32(struct struct_Windows_Graphics_SizeInt32*) noexcept = 0;
            virtual int32_t __stdcall GetDrawingSurfaceForLevel(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionNineGridBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BottomInset(float*) noexcept = 0;
            virtual int32_t __stdcall put_BottomInset(float) noexcept = 0;
            virtual int32_t __stdcall get_BottomInsetScale(float*) noexcept = 0;
            virtual int32_t __stdcall put_BottomInsetScale(float) noexcept = 0;
            virtual int32_t __stdcall get_IsCenterHollow(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCenterHollow(bool) noexcept = 0;
            virtual int32_t __stdcall get_LeftInset(float*) noexcept = 0;
            virtual int32_t __stdcall put_LeftInset(float) noexcept = 0;
            virtual int32_t __stdcall get_LeftInsetScale(float*) noexcept = 0;
            virtual int32_t __stdcall put_LeftInsetScale(float) noexcept = 0;
            virtual int32_t __stdcall get_RightInset(float*) noexcept = 0;
            virtual int32_t __stdcall put_RightInset(float) noexcept = 0;
            virtual int32_t __stdcall get_RightInsetScale(float*) noexcept = 0;
            virtual int32_t __stdcall put_RightInsetScale(float) noexcept = 0;
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall put_Source(void*) noexcept = 0;
            virtual int32_t __stdcall get_TopInset(float*) noexcept = 0;
            virtual int32_t __stdcall put_TopInset(float) noexcept = 0;
            virtual int32_t __stdcall get_TopInsetScale(float*) noexcept = 0;
            virtual int32_t __stdcall put_TopInsetScale(float) noexcept = 0;
            virtual int32_t __stdcall SetInsets(float) noexcept = 0;
            virtual int32_t __stdcall SetInsetsWithValues(float, float, float, float) noexcept = 0;
            virtual int32_t __stdcall SetInsetScales(float) noexcept = 0;
            virtual int32_t __stdcall SetInsetScalesWithValues(float, float, float, float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionObject>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Compositor(void**) noexcept = 0;
            virtual int32_t __stdcall get_Dispatcher(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall StartAnimation(void*, void*) noexcept = 0;
            virtual int32_t __stdcall StopAnimation(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionObject2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Comment(void**) noexcept = 0;
            virtual int32_t __stdcall put_Comment(void*) noexcept = 0;
            virtual int32_t __stdcall get_ImplicitAnimations(void**) noexcept = 0;
            virtual int32_t __stdcall put_ImplicitAnimations(void*) noexcept = 0;
            virtual int32_t __stdcall StartAnimationGroup(void*) noexcept = 0;
            virtual int32_t __stdcall StopAnimationGroup(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionObject3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DispatcherQueue(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionObject4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryGetAnimationController(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionObjectFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionObjectStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartAnimationWithIAnimationObject(void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall StartAnimationGroupWithIAnimationObject(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionPath>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionPathFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionPathGeometry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
            virtual int32_t __stdcall put_Path(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionProjectedShadow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BlurRadiusMultiplier(float*) noexcept = 0;
            virtual int32_t __stdcall put_BlurRadiusMultiplier(float) noexcept = 0;
            virtual int32_t __stdcall get_Casters(void**) noexcept = 0;
            virtual int32_t __stdcall get_LightSource(void**) noexcept = 0;
            virtual int32_t __stdcall put_LightSource(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxBlurRadius(float*) noexcept = 0;
            virtual int32_t __stdcall put_MaxBlurRadius(float) noexcept = 0;
            virtual int32_t __stdcall get_MinBlurRadius(float*) noexcept = 0;
            virtual int32_t __stdcall put_MinBlurRadius(float) noexcept = 0;
            virtual int32_t __stdcall get_Receivers(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionProjectedShadowCaster>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Brush(void**) noexcept = 0;
            virtual int32_t __stdcall put_Brush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CastingVisual(void**) noexcept = 0;
            virtual int32_t __stdcall put_CastingVisual(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Count(int32_t*) noexcept = 0;
            virtual int32_t __stdcall InsertAbove(void*, void*) noexcept = 0;
            virtual int32_t __stdcall InsertAtBottom(void*) noexcept = 0;
            virtual int32_t __stdcall InsertAtTop(void*) noexcept = 0;
            virtual int32_t __stdcall InsertBelow(void*, void*) noexcept = 0;
            virtual int32_t __stdcall Remove(void*) noexcept = 0;
            virtual int32_t __stdcall RemoveAll() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionProjectedShadowCasterCollectionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxRespectedCasters(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionProjectedShadowReceiver>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReceivingVisual(void**) noexcept = 0;
            virtual int32_t __stdcall put_ReceivingVisual(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionProjectedShadowReceiverUnorderedCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Add(void*) noexcept = 0;
            virtual int32_t __stdcall get_Count(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Remove(void*) noexcept = 0;
            virtual int32_t __stdcall RemoveAll() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionPropertySet>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InsertColor(void*, struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall InsertMatrix3x2(void*, Windows::Foundation::Numerics::float3x2) noexcept = 0;
            virtual int32_t __stdcall InsertMatrix4x4(void*, Windows::Foundation::Numerics::float4x4) noexcept = 0;
            virtual int32_t __stdcall InsertQuaternion(void*, Windows::Foundation::Numerics::quaternion) noexcept = 0;
            virtual int32_t __stdcall InsertScalar(void*, float) noexcept = 0;
            virtual int32_t __stdcall InsertVector2(void*, Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall InsertVector3(void*, Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall InsertVector4(void*, Windows::Foundation::Numerics::float4) noexcept = 0;
            virtual int32_t __stdcall TryGetColor(void*, struct struct_Windows_UI_Color*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetMatrix3x2(void*, Windows::Foundation::Numerics::float3x2*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetMatrix4x4(void*, Windows::Foundation::Numerics::float4x4*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetQuaternion(void*, Windows::Foundation::Numerics::quaternion*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetScalar(void*, float*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetVector2(void*, Windows::Foundation::Numerics::float2*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetVector3(void*, Windows::Foundation::Numerics::float3*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetVector4(void*, Windows::Foundation::Numerics::float4*, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionPropertySet2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InsertBoolean(void*, bool) noexcept = 0;
            virtual int32_t __stdcall TryGetBoolean(void*, bool*, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionRadialGradientBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EllipseCenter(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_EllipseCenter(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_EllipseRadius(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_EllipseRadius(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_GradientOriginOffset(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_GradientOriginOffset(Windows::Foundation::Numerics::float2) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionRectangleGeometry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Offset(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_Offset(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_Size(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_Size(Windows::Foundation::Numerics::float2) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionRoundedRectangleGeometry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CornerRadius(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_CornerRadius(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_Offset(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_Offset(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_Size(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_Size(Windows::Foundation::Numerics::float2) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionScopedBatch>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsActive(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsEnded(bool*) noexcept = 0;
            virtual int32_t __stdcall End() noexcept = 0;
            virtual int32_t __stdcall Resume() noexcept = 0;
            virtual int32_t __stdcall Suspend() noexcept = 0;
            virtual int32_t __stdcall add_Completed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Completed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionShadow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionShadowFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionShape>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterPoint(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_CenterPoint(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_Offset(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_Offset(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_RotationAngle(float*) noexcept = 0;
            virtual int32_t __stdcall put_RotationAngle(float) noexcept = 0;
            virtual int32_t __stdcall get_RotationAngleInDegrees(float*) noexcept = 0;
            virtual int32_t __stdcall put_RotationAngleInDegrees(float) noexcept = 0;
            virtual int32_t __stdcall get_Scale(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_Scale(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float3x2*) noexcept = 0;
            virtual int32_t __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float3x2) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionShapeFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionSpriteShape>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FillBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_FillBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_Geometry(void**) noexcept = 0;
            virtual int32_t __stdcall put_Geometry(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsStrokeNonScaling(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsStrokeNonScaling(bool) noexcept = 0;
            virtual int32_t __stdcall get_StrokeBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_StrokeBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDashArray(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDashCap(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeDashCap(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDashOffset(float*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeDashOffset(float) noexcept = 0;
            virtual int32_t __stdcall get_StrokeEndCap(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeEndCap(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StrokeLineJoin(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeLineJoin(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StrokeMiterLimit(float*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeMiterLimit(float) noexcept = 0;
            virtual int32_t __stdcall get_StrokeStartCap(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeStartCap(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StrokeThickness(float*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeThickness(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionSurface>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionSurfaceBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BitmapInterpolationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BitmapInterpolationMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalAlignmentRatio(float*) noexcept = 0;
            virtual int32_t __stdcall put_HorizontalAlignmentRatio(float) noexcept = 0;
            virtual int32_t __stdcall get_Stretch(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Stretch(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Surface(void**) noexcept = 0;
            virtual int32_t __stdcall put_Surface(void*) noexcept = 0;
            virtual int32_t __stdcall get_VerticalAlignmentRatio(float*) noexcept = 0;
            virtual int32_t __stdcall put_VerticalAlignmentRatio(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionSurfaceBrush2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AnchorPoint(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_AnchorPoint(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_CenterPoint(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_CenterPoint(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_Offset(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_Offset(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_RotationAngle(float*) noexcept = 0;
            virtual int32_t __stdcall put_RotationAngle(float) noexcept = 0;
            virtual int32_t __stdcall get_RotationAngleInDegrees(float*) noexcept = 0;
            virtual int32_t __stdcall put_RotationAngleInDegrees(float) noexcept = 0;
            virtual int32_t __stdcall get_Scale(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_Scale(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float3x2*) noexcept = 0;
            virtual int32_t __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float3x2) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionSurfaceBrush3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SnapToPixels(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SnapToPixels(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionTarget>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Root(void**) noexcept = 0;
            virtual int32_t __stdcall put_Root(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionTargetFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionTransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionTransformFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionViewBox>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HorizontalAlignmentRatio(float*) noexcept = 0;
            virtual int32_t __stdcall put_HorizontalAlignmentRatio(float) noexcept = 0;
            virtual int32_t __stdcall get_Offset(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_Offset(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_Size(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_Size(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_Stretch(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Stretch(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_VerticalAlignmentRatio(float*) noexcept = 0;
            virtual int32_t __stdcall put_VerticalAlignmentRatio(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionVirtualDrawingSurface>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Trim(uint32_t, struct struct_Windows_Graphics_RectInt32*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositionVisualSurface>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceVisual(void**) noexcept = 0;
            virtual int32_t __stdcall put_SourceVisual(void*) noexcept = 0;
            virtual int32_t __stdcall get_SourceOffset(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_SourceOffset(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_SourceSize(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_SourceSize(Windows::Foundation::Numerics::float2) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateColorKeyFrameAnimation(void**) noexcept = 0;
            virtual int32_t __stdcall CreateColorBrush(void**) noexcept = 0;
            virtual int32_t __stdcall CreateColorBrushWithColor(struct struct_Windows_UI_Color, void**) noexcept = 0;
            virtual int32_t __stdcall CreateContainerVisual(void**) noexcept = 0;
            virtual int32_t __stdcall CreateCubicBezierEasingFunction(Windows::Foundation::Numerics::float2, Windows::Foundation::Numerics::float2, void**) noexcept = 0;
            virtual int32_t __stdcall CreateEffectFactory(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateEffectFactoryWithProperties(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateExpressionAnimation(void**) noexcept = 0;
            virtual int32_t __stdcall CreateExpressionAnimationWithExpression(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInsetClip(void**) noexcept = 0;
            virtual int32_t __stdcall CreateInsetClipWithInsets(float, float, float, float, void**) noexcept = 0;
            virtual int32_t __stdcall CreateLinearEasingFunction(void**) noexcept = 0;
            virtual int32_t __stdcall CreatePropertySet(void**) noexcept = 0;
            virtual int32_t __stdcall CreateQuaternionKeyFrameAnimation(void**) noexcept = 0;
            virtual int32_t __stdcall CreateScalarKeyFrameAnimation(void**) noexcept = 0;
            virtual int32_t __stdcall CreateScopedBatch(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateSpriteVisual(void**) noexcept = 0;
            virtual int32_t __stdcall CreateSurfaceBrush(void**) noexcept = 0;
            virtual int32_t __stdcall CreateSurfaceBrushWithSurface(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateTargetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall CreateVector2KeyFrameAnimation(void**) noexcept = 0;
            virtual int32_t __stdcall CreateVector3KeyFrameAnimation(void**) noexcept = 0;
            virtual int32_t __stdcall CreateVector4KeyFrameAnimation(void**) noexcept = 0;
            virtual int32_t __stdcall GetCommitBatch(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAmbientLight(void**) noexcept = 0;
            virtual int32_t __stdcall CreateAnimationGroup(void**) noexcept = 0;
            virtual int32_t __stdcall CreateBackdropBrush(void**) noexcept = 0;
            virtual int32_t __stdcall CreateDistantLight(void**) noexcept = 0;
            virtual int32_t __stdcall CreateDropShadow(void**) noexcept = 0;
            virtual int32_t __stdcall CreateImplicitAnimationCollection(void**) noexcept = 0;
            virtual int32_t __stdcall CreateLayerVisual(void**) noexcept = 0;
            virtual int32_t __stdcall CreateMaskBrush(void**) noexcept = 0;
            virtual int32_t __stdcall CreateNineGridBrush(void**) noexcept = 0;
            virtual int32_t __stdcall CreatePointLight(void**) noexcept = 0;
            virtual int32_t __stdcall CreateSpotLight(void**) noexcept = 0;
            virtual int32_t __stdcall CreateStepEasingFunction(void**) noexcept = 0;
            virtual int32_t __stdcall CreateStepEasingFunctionWithStepCount(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositor3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateHostBackdropBrush(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositor4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateColorGradientStop(void**) noexcept = 0;
            virtual int32_t __stdcall CreateColorGradientStopWithOffsetAndColor(float, struct struct_Windows_UI_Color, void**) noexcept = 0;
            virtual int32_t __stdcall CreateLinearGradientBrush(void**) noexcept = 0;
            virtual int32_t __stdcall CreateSpringScalarAnimation(void**) noexcept = 0;
            virtual int32_t __stdcall CreateSpringVector2Animation(void**) noexcept = 0;
            virtual int32_t __stdcall CreateSpringVector3Animation(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositor5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Comment(void**) noexcept = 0;
            virtual int32_t __stdcall put_Comment(void*) noexcept = 0;
            virtual int32_t __stdcall get_GlobalPlaybackRate(float*) noexcept = 0;
            virtual int32_t __stdcall put_GlobalPlaybackRate(float) noexcept = 0;
            virtual int32_t __stdcall CreateBounceScalarAnimation(void**) noexcept = 0;
            virtual int32_t __stdcall CreateBounceVector2Animation(void**) noexcept = 0;
            virtual int32_t __stdcall CreateBounceVector3Animation(void**) noexcept = 0;
            virtual int32_t __stdcall CreateContainerShape(void**) noexcept = 0;
            virtual int32_t __stdcall CreateEllipseGeometry(void**) noexcept = 0;
            virtual int32_t __stdcall CreateLineGeometry(void**) noexcept = 0;
            virtual int32_t __stdcall CreatePathGeometry(void**) noexcept = 0;
            virtual int32_t __stdcall CreatePathGeometryWithPath(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreatePathKeyFrameAnimation(void**) noexcept = 0;
            virtual int32_t __stdcall CreateRectangleGeometry(void**) noexcept = 0;
            virtual int32_t __stdcall CreateRoundedRectangleGeometry(void**) noexcept = 0;
            virtual int32_t __stdcall CreateShapeVisual(void**) noexcept = 0;
            virtual int32_t __stdcall CreateSpriteShape(void**) noexcept = 0;
            virtual int32_t __stdcall CreateSpriteShapeWithGeometry(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateViewBox(void**) noexcept = 0;
            virtual int32_t __stdcall RequestCommitAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositor6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateGeometricClip(void**) noexcept = 0;
            virtual int32_t __stdcall CreateGeometricClipWithGeometry(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateRedirectVisual(void**) noexcept = 0;
            virtual int32_t __stdcall CreateRedirectVisualWithSourceVisual(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateBooleanKeyFrameAnimation(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxGlobalPlaybackRate(float*) noexcept = 0;
            virtual int32_t __stdcall get_MinGlobalPlaybackRate(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositorWithProjectedShadow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateProjectedShadowCaster(void**) noexcept = 0;
            virtual int32_t __stdcall CreateProjectedShadow(void**) noexcept = 0;
            virtual int32_t __stdcall CreateProjectedShadowReceiver(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositorWithRadialGradient>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateRadialGradientBrush(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ICompositorWithVisualSurface>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateVisualSurface(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IContainerVisual>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Children(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IContainerVisualFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ICubicBezierEasingFunction>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ControlPoint1(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall get_ControlPoint2(Windows::Foundation::Numerics::float2*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IDistantLight>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_CoordinateSpace(void**) noexcept = 0;
            virtual int32_t __stdcall put_CoordinateSpace(void*) noexcept = 0;
            virtual int32_t __stdcall get_Direction(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Direction(Windows::Foundation::Numerics::float3) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IDistantLight2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Intensity(float*) noexcept = 0;
            virtual int32_t __stdcall put_Intensity(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IDropShadow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BlurRadius(float*) noexcept = 0;
            virtual int32_t __stdcall put_BlurRadius(float) noexcept = 0;
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_Mask(void**) noexcept = 0;
            virtual int32_t __stdcall put_Mask(void*) noexcept = 0;
            virtual int32_t __stdcall get_Offset(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Offset(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_Opacity(float*) noexcept = 0;
            virtual int32_t __stdcall put_Opacity(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IDropShadow2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourcePolicy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SourcePolicy(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IExpressionAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Expression(void**) noexcept = 0;
            virtual int32_t __stdcall put_Expression(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IImplicitAnimationCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::IInsetClip>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BottomInset(float*) noexcept = 0;
            virtual int32_t __stdcall put_BottomInset(float) noexcept = 0;
            virtual int32_t __stdcall get_LeftInset(float*) noexcept = 0;
            virtual int32_t __stdcall put_LeftInset(float) noexcept = 0;
            virtual int32_t __stdcall get_RightInset(float*) noexcept = 0;
            virtual int32_t __stdcall put_RightInset(float) noexcept = 0;
            virtual int32_t __stdcall get_TopInset(float*) noexcept = 0;
            virtual int32_t __stdcall put_TopInset(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IKeyFrameAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DelayTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_DelayTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Duration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_IterationBehavior(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IterationBehavior(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IterationCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IterationCount(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_KeyFrameCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_StopBehavior(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StopBehavior(int32_t) noexcept = 0;
            virtual int32_t __stdcall InsertExpressionKeyFrame(float, void*) noexcept = 0;
            virtual int32_t __stdcall InsertExpressionKeyFrameWithEasingFunction(float, void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IKeyFrameAnimation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Direction(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Direction(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IKeyFrameAnimation3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DelayBehavior(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DelayBehavior(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IKeyFrameAnimationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::ILayerVisual>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Effect(void**) noexcept = 0;
            virtual int32_t __stdcall put_Effect(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ILayerVisual2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Shadow(void**) noexcept = 0;
            virtual int32_t __stdcall put_Shadow(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ILinearEasingFunction>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::INaturalMotionAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DelayBehavior(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DelayBehavior(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DelayTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_DelayTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_StopBehavior(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StopBehavior(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::INaturalMotionAnimationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::IPathKeyFrameAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InsertKeyFrame(float, void*) noexcept = 0;
            virtual int32_t __stdcall InsertKeyFrameWithEasingFunction(float, void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IPointLight>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_ConstantAttenuation(float*) noexcept = 0;
            virtual int32_t __stdcall put_ConstantAttenuation(float) noexcept = 0;
            virtual int32_t __stdcall get_CoordinateSpace(void**) noexcept = 0;
            virtual int32_t __stdcall put_CoordinateSpace(void*) noexcept = 0;
            virtual int32_t __stdcall get_LinearAttenuation(float*) noexcept = 0;
            virtual int32_t __stdcall put_LinearAttenuation(float) noexcept = 0;
            virtual int32_t __stdcall get_Offset(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Offset(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_QuadraticAttenuation(float*) noexcept = 0;
            virtual int32_t __stdcall put_QuadraticAttenuation(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IPointLight2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Intensity(float*) noexcept = 0;
            virtual int32_t __stdcall put_Intensity(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IPointLight3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MinAttenuationCutoff(float*) noexcept = 0;
            virtual int32_t __stdcall put_MinAttenuationCutoff(float) noexcept = 0;
            virtual int32_t __stdcall get_MaxAttenuationCutoff(float*) noexcept = 0;
            virtual int32_t __stdcall put_MaxAttenuationCutoff(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IQuaternionKeyFrameAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InsertKeyFrame(float, Windows::Foundation::Numerics::quaternion) noexcept = 0;
            virtual int32_t __stdcall InsertKeyFrameWithEasingFunction(float, Windows::Foundation::Numerics::quaternion, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IRedirectVisual>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall put_Source(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IRenderingDeviceReplacedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_GraphicsDevice(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IScalarKeyFrameAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InsertKeyFrame(float, float) noexcept = 0;
            virtual int32_t __stdcall InsertKeyFrameWithEasingFunction(float, float, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IScalarNaturalMotionAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FinalValue(void**) noexcept = 0;
            virtual int32_t __stdcall put_FinalValue(void*) noexcept = 0;
            virtual int32_t __stdcall get_InitialValue(void**) noexcept = 0;
            virtual int32_t __stdcall put_InitialValue(void*) noexcept = 0;
            virtual int32_t __stdcall get_InitialVelocity(float*) noexcept = 0;
            virtual int32_t __stdcall put_InitialVelocity(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IScalarNaturalMotionAnimationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::IShapeVisual>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Shapes(void**) noexcept = 0;
            virtual int32_t __stdcall get_ViewBox(void**) noexcept = 0;
            virtual int32_t __stdcall put_ViewBox(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ISpotLight>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ConstantAttenuation(float*) noexcept = 0;
            virtual int32_t __stdcall put_ConstantAttenuation(float) noexcept = 0;
            virtual int32_t __stdcall get_CoordinateSpace(void**) noexcept = 0;
            virtual int32_t __stdcall put_CoordinateSpace(void*) noexcept = 0;
            virtual int32_t __stdcall get_Direction(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Direction(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_InnerConeAngle(float*) noexcept = 0;
            virtual int32_t __stdcall put_InnerConeAngle(float) noexcept = 0;
            virtual int32_t __stdcall get_InnerConeAngleInDegrees(float*) noexcept = 0;
            virtual int32_t __stdcall put_InnerConeAngleInDegrees(float) noexcept = 0;
            virtual int32_t __stdcall get_InnerConeColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_InnerConeColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_LinearAttenuation(float*) noexcept = 0;
            virtual int32_t __stdcall put_LinearAttenuation(float) noexcept = 0;
            virtual int32_t __stdcall get_Offset(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Offset(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_OuterConeAngle(float*) noexcept = 0;
            virtual int32_t __stdcall put_OuterConeAngle(float) noexcept = 0;
            virtual int32_t __stdcall get_OuterConeAngleInDegrees(float*) noexcept = 0;
            virtual int32_t __stdcall put_OuterConeAngleInDegrees(float) noexcept = 0;
            virtual int32_t __stdcall get_OuterConeColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_OuterConeColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_QuadraticAttenuation(float*) noexcept = 0;
            virtual int32_t __stdcall put_QuadraticAttenuation(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ISpotLight2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InnerConeIntensity(float*) noexcept = 0;
            virtual int32_t __stdcall put_InnerConeIntensity(float) noexcept = 0;
            virtual int32_t __stdcall get_OuterConeIntensity(float*) noexcept = 0;
            virtual int32_t __stdcall put_OuterConeIntensity(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ISpotLight3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MinAttenuationCutoff(float*) noexcept = 0;
            virtual int32_t __stdcall put_MinAttenuationCutoff(float) noexcept = 0;
            virtual int32_t __stdcall get_MaxAttenuationCutoff(float*) noexcept = 0;
            virtual int32_t __stdcall put_MaxAttenuationCutoff(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ISpringScalarNaturalMotionAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DampingRatio(float*) noexcept = 0;
            virtual int32_t __stdcall put_DampingRatio(float) noexcept = 0;
            virtual int32_t __stdcall get_Period(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Period(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ISpringVector2NaturalMotionAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DampingRatio(float*) noexcept = 0;
            virtual int32_t __stdcall put_DampingRatio(float) noexcept = 0;
            virtual int32_t __stdcall get_Period(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Period(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ISpringVector3NaturalMotionAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DampingRatio(float*) noexcept = 0;
            virtual int32_t __stdcall put_DampingRatio(float) noexcept = 0;
            virtual int32_t __stdcall get_Period(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Period(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ISpriteVisual>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Brush(void**) noexcept = 0;
            virtual int32_t __stdcall put_Brush(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::ISpriteVisual2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Shadow(void**) noexcept = 0;
            virtual int32_t __stdcall put_Shadow(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IStepEasingFunction>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FinalStep(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FinalStep(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_InitialStep(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_InitialStep(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsFinalStepSingleFrame(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsFinalStepSingleFrame(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsInitialStepSingleFrame(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsInitialStepSingleFrame(bool) noexcept = 0;
            virtual int32_t __stdcall get_StepCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StepCount(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IVector2KeyFrameAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InsertKeyFrame(float, Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall InsertKeyFrameWithEasingFunction(float, Windows::Foundation::Numerics::float2, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IVector2NaturalMotionAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FinalValue(void**) noexcept = 0;
            virtual int32_t __stdcall put_FinalValue(void*) noexcept = 0;
            virtual int32_t __stdcall get_InitialValue(void**) noexcept = 0;
            virtual int32_t __stdcall put_InitialValue(void*) noexcept = 0;
            virtual int32_t __stdcall get_InitialVelocity(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_InitialVelocity(Windows::Foundation::Numerics::float2) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IVector2NaturalMotionAnimationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::IVector3KeyFrameAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InsertKeyFrame(float, Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall InsertKeyFrameWithEasingFunction(float, Windows::Foundation::Numerics::float3, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IVector3NaturalMotionAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FinalValue(void**) noexcept = 0;
            virtual int32_t __stdcall put_FinalValue(void*) noexcept = 0;
            virtual int32_t __stdcall get_InitialValue(void**) noexcept = 0;
            virtual int32_t __stdcall put_InitialValue(void*) noexcept = 0;
            virtual int32_t __stdcall get_InitialVelocity(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_InitialVelocity(Windows::Foundation::Numerics::float3) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IVector3NaturalMotionAnimationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::IVector4KeyFrameAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InsertKeyFrame(float, Windows::Foundation::Numerics::float4) noexcept = 0;
            virtual int32_t __stdcall InsertKeyFrameWithEasingFunction(float, Windows::Foundation::Numerics::float4, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IVisual>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AnchorPoint(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_AnchorPoint(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_BackfaceVisibility(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BackfaceVisibility(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_BorderMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BorderMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CenterPoint(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_CenterPoint(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_Clip(void**) noexcept = 0;
            virtual int32_t __stdcall put_Clip(void*) noexcept = 0;
            virtual int32_t __stdcall get_CompositeMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CompositeMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_Offset(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Offset(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_Opacity(float*) noexcept = 0;
            virtual int32_t __stdcall put_Opacity(float) noexcept = 0;
            virtual int32_t __stdcall get_Orientation(Windows::Foundation::Numerics::quaternion*) noexcept = 0;
            virtual int32_t __stdcall put_Orientation(Windows::Foundation::Numerics::quaternion) noexcept = 0;
            virtual int32_t __stdcall get_Parent(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationAngle(float*) noexcept = 0;
            virtual int32_t __stdcall put_RotationAngle(float) noexcept = 0;
            virtual int32_t __stdcall get_RotationAngleInDegrees(float*) noexcept = 0;
            virtual int32_t __stdcall put_RotationAngleInDegrees(float) noexcept = 0;
            virtual int32_t __stdcall get_RotationAxis(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_RotationAxis(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_Scale(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Scale(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_Size(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_Size(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float4x4*) noexcept = 0;
            virtual int32_t __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float4x4) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IVisual2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ParentForTransform(void**) noexcept = 0;
            virtual int32_t __stdcall put_ParentForTransform(void*) noexcept = 0;
            virtual int32_t __stdcall get_RelativeOffsetAdjustment(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_RelativeOffsetAdjustment(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_RelativeSizeAdjustment(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall put_RelativeSizeAdjustment(Windows::Foundation::Numerics::float2) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IVisual3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsHitTestVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsHitTestVisible(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IVisualCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Count(int32_t*) noexcept = 0;
            virtual int32_t __stdcall InsertAbove(void*, void*) noexcept = 0;
            virtual int32_t __stdcall InsertAtBottom(void*) noexcept = 0;
            virtual int32_t __stdcall InsertAtTop(void*) noexcept = 0;
            virtual int32_t __stdcall InsertBelow(void*, void*) noexcept = 0;
            virtual int32_t __stdcall Remove(void*) noexcept = 0;
            virtual int32_t __stdcall RemoveAll() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::IVisualElement>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::IVisualFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::IVisualUnorderedCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Count(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Add(void*) noexcept = 0;
            virtual int32_t __stdcall Remove(void*) noexcept = 0;
            virtual int32_t __stdcall RemoveAll() noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IAmbientLight
    {
        [[nodiscard]] auto Color() const;
        auto Color(Windows::UI::Color const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::IAmbientLight>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IAmbientLight<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IAmbientLight2
    {
        [[nodiscard]] auto Intensity() const;
        auto Intensity(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::IAmbientLight2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IAmbientLight2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IAnimationController
    {
        [[nodiscard]] auto PlaybackRate() const;
        auto PlaybackRate(float value) const;
        [[nodiscard]] auto Progress() const;
        auto Progress(float value) const;
        [[nodiscard]] auto ProgressBehavior() const;
        auto ProgressBehavior(Windows::UI::Composition::AnimationControllerProgressBehavior const& value) const;
        auto Pause() const;
        auto Resume() const;
    };
    template <> struct consume<Windows::UI::Composition::IAnimationController>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IAnimationController<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IAnimationControllerStatics
    {
        [[nodiscard]] auto MaxPlaybackRate() const;
        [[nodiscard]] auto MinPlaybackRate() const;
    };
    template <> struct consume<Windows::UI::Composition::IAnimationControllerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IAnimationControllerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IAnimationObject
    {
        auto PopulatePropertyInfo(param::hstring const& propertyName, Windows::UI::Composition::AnimationPropertyInfo const& propertyInfo) const;
    };
    template <> struct consume<Windows::UI::Composition::IAnimationObject>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IAnimationObject<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IAnimationPropertyInfo
    {
        [[nodiscard]] auto AccessMode() const;
        auto AccessMode(Windows::UI::Composition::AnimationPropertyAccessMode const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::IAnimationPropertyInfo>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IAnimationPropertyInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IBooleanKeyFrameAnimation
    {
        auto InsertKeyFrame(float normalizedProgressKey, bool value) const;
    };
    template <> struct consume<Windows::UI::Composition::IBooleanKeyFrameAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IBooleanKeyFrameAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IBounceScalarNaturalMotionAnimation
    {
        [[nodiscard]] auto Acceleration() const;
        auto Acceleration(float value) const;
        [[nodiscard]] auto Restitution() const;
        auto Restitution(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::IBounceScalarNaturalMotionAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IBounceScalarNaturalMotionAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IBounceVector2NaturalMotionAnimation
    {
        [[nodiscard]] auto Acceleration() const;
        auto Acceleration(float value) const;
        [[nodiscard]] auto Restitution() const;
        auto Restitution(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::IBounceVector2NaturalMotionAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IBounceVector2NaturalMotionAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IBounceVector3NaturalMotionAnimation
    {
        [[nodiscard]] auto Acceleration() const;
        auto Acceleration(float value) const;
        [[nodiscard]] auto Restitution() const;
        auto Restitution(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::IBounceVector3NaturalMotionAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IBounceVector3NaturalMotionAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IColorKeyFrameAnimation
    {
        [[nodiscard]] auto InterpolationColorSpace() const;
        auto InterpolationColorSpace(Windows::UI::Composition::CompositionColorSpace const& value) const;
        auto InsertKeyFrame(float normalizedProgressKey, Windows::UI::Color const& value) const;
        auto InsertKeyFrame(float normalizedProgressKey, Windows::UI::Color const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const;
    };
    template <> struct consume<Windows::UI::Composition::IColorKeyFrameAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IColorKeyFrameAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionAnimation
    {
        auto ClearAllParameters() const;
        auto ClearParameter(param::hstring const& key) const;
        auto SetColorParameter(param::hstring const& key, Windows::UI::Color const& value) const;
        auto SetMatrix3x2Parameter(param::hstring const& key, Windows::Foundation::Numerics::float3x2 const& value) const;
        auto SetMatrix4x4Parameter(param::hstring const& key, Windows::Foundation::Numerics::float4x4 const& value) const;
        auto SetQuaternionParameter(param::hstring const& key, Windows::Foundation::Numerics::quaternion const& value) const;
        auto SetReferenceParameter(param::hstring const& key, Windows::UI::Composition::CompositionObject const& compositionObject) const;
        auto SetScalarParameter(param::hstring const& key, float value) const;
        auto SetVector2Parameter(param::hstring const& key, Windows::Foundation::Numerics::float2 const& value) const;
        auto SetVector3Parameter(param::hstring const& key, Windows::Foundation::Numerics::float3 const& value) const;
        auto SetVector4Parameter(param::hstring const& key, Windows::Foundation::Numerics::float4 const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionAnimation2
    {
        auto SetBooleanParameter(param::hstring const& key, bool value) const;
        [[nodiscard]] auto Target() const;
        auto Target(param::hstring const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionAnimation2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionAnimation2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionAnimation3
    {
        [[nodiscard]] auto InitialValueExpressions() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionAnimation3>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionAnimation3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionAnimation4
    {
        auto SetExpressionReferenceParameter(param::hstring const& parameterName, Windows::UI::Composition::IAnimationObject const& source) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionAnimation4>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionAnimation4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionAnimationBase
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionAnimationBase>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionAnimationBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionAnimationFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionAnimationFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionAnimationFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionAnimationGroup
    {
        [[nodiscard]] auto Count() const;
        auto Add(Windows::UI::Composition::CompositionAnimation const& value) const;
        auto Remove(Windows::UI::Composition::CompositionAnimation const& value) const;
        auto RemoveAll() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionAnimationGroup>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionAnimationGroup<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionBackdropBrush
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionBackdropBrush>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionBackdropBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionBatchCompletedEventArgs
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionBatchCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionBatchCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionBrush
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionBrush>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionBrushFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionCapabilities
    {
        auto AreEffectsSupported() const;
        auto AreEffectsFast() const;
        auto Changed(Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionCapabilities, Windows::Foundation::IInspectable> const& handler) const;
        using Changed_revoker = impl::event_revoker<Windows::UI::Composition::ICompositionCapabilities, &impl::abi_t<Windows::UI::Composition::ICompositionCapabilities>::remove_Changed>;
        Changed_revoker Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionCapabilities, Windows::Foundation::IInspectable> const& handler) const;
        auto Changed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionCapabilities>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionCapabilitiesStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionCapabilitiesStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionCapabilitiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionClip
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionClip>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionClip<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionClip2
    {
        [[nodiscard]] auto AnchorPoint() const;
        auto AnchorPoint(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto CenterPoint() const;
        auto CenterPoint(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto Offset() const;
        auto Offset(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto RotationAngle() const;
        auto RotationAngle(float value) const;
        [[nodiscard]] auto RotationAngleInDegrees() const;
        auto RotationAngleInDegrees(float value) const;
        [[nodiscard]] auto Scale() const;
        auto Scale(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto TransformMatrix() const;
        auto TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionClip2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionClip2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionClipFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionClipFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionClipFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionColorBrush
    {
        [[nodiscard]] auto Color() const;
        auto Color(Windows::UI::Color const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionColorBrush>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionColorBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionColorGradientStop
    {
        [[nodiscard]] auto Color() const;
        auto Color(Windows::UI::Color const& value) const;
        [[nodiscard]] auto Offset() const;
        auto Offset(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionColorGradientStop>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionColorGradientStop<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionColorGradientStopCollection
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionColorGradientStopCollection>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionColorGradientStopCollection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionCommitBatch
    {
        [[nodiscard]] auto IsActive() const;
        [[nodiscard]] auto IsEnded() const;
        auto Completed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler) const;
        using Completed_revoker = impl::event_revoker<Windows::UI::Composition::ICompositionCommitBatch, &impl::abi_t<Windows::UI::Composition::ICompositionCommitBatch>::remove_Completed>;
        Completed_revoker Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler) const;
        auto Completed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionCommitBatch>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionCommitBatch<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionContainerShape
    {
        [[nodiscard]] auto Shapes() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionContainerShape>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionContainerShape<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionDrawingSurface
    {
        [[nodiscard]] auto AlphaMode() const;
        [[nodiscard]] auto PixelFormat() const;
        [[nodiscard]] auto Size() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionDrawingSurface>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionDrawingSurface<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionDrawingSurface2
    {
        [[nodiscard]] auto SizeInt32() const;
        auto Resize(Windows::Graphics::SizeInt32 const& sizePixels) const;
        auto Scroll(Windows::Graphics::PointInt32 const& offset) const;
        auto Scroll(Windows::Graphics::PointInt32 const& offset, Windows::Graphics::RectInt32 const& scrollRect) const;
        auto ScrollWithClip(Windows::Graphics::PointInt32 const& offset, Windows::Graphics::RectInt32 const& clipRect) const;
        auto ScrollWithClip(Windows::Graphics::PointInt32 const& offset, Windows::Graphics::RectInt32 const& clipRect, Windows::Graphics::RectInt32 const& scrollRect) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionDrawingSurface2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionDrawingSurface2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionDrawingSurfaceFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionDrawingSurfaceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionDrawingSurfaceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionEasingFunction
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionEasingFunction>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionEasingFunction<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionEasingFunctionFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionEasingFunctionFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionEasingFunctionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionEffectBrush
    {
        auto GetSourceParameter(param::hstring const& name) const;
        auto SetSourceParameter(param::hstring const& name, Windows::UI::Composition::CompositionBrush const& source) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionEffectBrush>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionEffectBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionEffectFactory
    {
        auto CreateBrush() const;
        [[nodiscard]] auto ExtendedError() const;
        [[nodiscard]] auto LoadStatus() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionEffectFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionEffectFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionEffectSourceParameter
    {
        [[nodiscard]] auto Name() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionEffectSourceParameter>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionEffectSourceParameter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionEffectSourceParameterFactory
    {
        auto Create(param::hstring const& name) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionEffectSourceParameterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionEllipseGeometry
    {
        [[nodiscard]] auto Center() const;
        auto Center(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto Radius() const;
        auto Radius(Windows::Foundation::Numerics::float2 const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionEllipseGeometry>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionEllipseGeometry<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionGeometricClip
    {
        [[nodiscard]] auto Geometry() const;
        auto Geometry(Windows::UI::Composition::CompositionGeometry const& value) const;
        [[nodiscard]] auto ViewBox() const;
        auto ViewBox(Windows::UI::Composition::CompositionViewBox const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionGeometricClip>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionGeometricClip<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionGeometry
    {
        [[nodiscard]] auto TrimEnd() const;
        auto TrimEnd(float value) const;
        [[nodiscard]] auto TrimOffset() const;
        auto TrimOffset(float value) const;
        [[nodiscard]] auto TrimStart() const;
        auto TrimStart(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionGeometry>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionGeometry<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionGeometryFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionGeometryFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionGeometryFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionGradientBrush
    {
        [[nodiscard]] auto AnchorPoint() const;
        auto AnchorPoint(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto CenterPoint() const;
        auto CenterPoint(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto ColorStops() const;
        [[nodiscard]] auto ExtendMode() const;
        auto ExtendMode(Windows::UI::Composition::CompositionGradientExtendMode const& value) const;
        [[nodiscard]] auto InterpolationSpace() const;
        auto InterpolationSpace(Windows::UI::Composition::CompositionColorSpace const& value) const;
        [[nodiscard]] auto Offset() const;
        auto Offset(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto RotationAngle() const;
        auto RotationAngle(float value) const;
        [[nodiscard]] auto RotationAngleInDegrees() const;
        auto RotationAngleInDegrees(float value) const;
        [[nodiscard]] auto Scale() const;
        auto Scale(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto TransformMatrix() const;
        auto TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionGradientBrush>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionGradientBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionGradientBrush2
    {
        [[nodiscard]] auto MappingMode() const;
        auto MappingMode(Windows::UI::Composition::CompositionMappingMode const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionGradientBrush2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionGradientBrush2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionGradientBrushFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionGradientBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionGradientBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionGraphicsDevice
    {
        auto CreateDrawingSurface(Windows::Foundation::Size const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode) const;
        auto RenderingDeviceReplaced(Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice, Windows::UI::Composition::RenderingDeviceReplacedEventArgs> const& handler) const;
        using RenderingDeviceReplaced_revoker = impl::event_revoker<Windows::UI::Composition::ICompositionGraphicsDevice, &impl::abi_t<Windows::UI::Composition::ICompositionGraphicsDevice>::remove_RenderingDeviceReplaced>;
        RenderingDeviceReplaced_revoker RenderingDeviceReplaced(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice, Windows::UI::Composition::RenderingDeviceReplacedEventArgs> const& handler) const;
        auto RenderingDeviceReplaced(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionGraphicsDevice>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionGraphicsDevice<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionGraphicsDevice2
    {
        auto CreateDrawingSurface2(Windows::Graphics::SizeInt32 const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode) const;
        auto CreateVirtualDrawingSurface(Windows::Graphics::SizeInt32 const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionGraphicsDevice2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionGraphicsDevice2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionGraphicsDevice3
    {
        auto CreateMipmapSurface(Windows::Graphics::SizeInt32 const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode) const;
        auto Trim() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionGraphicsDevice3>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionGraphicsDevice3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionLight
    {
        [[nodiscard]] auto Targets() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionLight>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionLight<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionLight2
    {
        [[nodiscard]] auto ExclusionsFromTargets() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionLight2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionLight2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionLight3
    {
        [[nodiscard]] auto IsEnabled() const;
        auto IsEnabled(bool value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionLight3>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionLight3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionLightFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionLightFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionLightFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionLineGeometry
    {
        [[nodiscard]] auto Start() const;
        auto Start(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto End() const;
        auto End(Windows::Foundation::Numerics::float2 const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionLineGeometry>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionLineGeometry<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionLinearGradientBrush
    {
        [[nodiscard]] auto EndPoint() const;
        auto EndPoint(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto StartPoint() const;
        auto StartPoint(Windows::Foundation::Numerics::float2 const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionLinearGradientBrush>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionLinearGradientBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionMaskBrush
    {
        [[nodiscard]] auto Mask() const;
        auto Mask(Windows::UI::Composition::CompositionBrush const& value) const;
        [[nodiscard]] auto Source() const;
        auto Source(Windows::UI::Composition::CompositionBrush const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionMaskBrush>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionMaskBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionMipmapSurface
    {
        [[nodiscard]] auto LevelCount() const;
        [[nodiscard]] auto AlphaMode() const;
        [[nodiscard]] auto PixelFormat() const;
        [[nodiscard]] auto SizeInt32() const;
        auto GetDrawingSurfaceForLevel(uint32_t level) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionMipmapSurface>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionMipmapSurface<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionNineGridBrush
    {
        [[nodiscard]] auto BottomInset() const;
        auto BottomInset(float value) const;
        [[nodiscard]] auto BottomInsetScale() const;
        auto BottomInsetScale(float value) const;
        [[nodiscard]] auto IsCenterHollow() const;
        auto IsCenterHollow(bool value) const;
        [[nodiscard]] auto LeftInset() const;
        auto LeftInset(float value) const;
        [[nodiscard]] auto LeftInsetScale() const;
        auto LeftInsetScale(float value) const;
        [[nodiscard]] auto RightInset() const;
        auto RightInset(float value) const;
        [[nodiscard]] auto RightInsetScale() const;
        auto RightInsetScale(float value) const;
        [[nodiscard]] auto Source() const;
        auto Source(Windows::UI::Composition::CompositionBrush const& value) const;
        [[nodiscard]] auto TopInset() const;
        auto TopInset(float value) const;
        [[nodiscard]] auto TopInsetScale() const;
        auto TopInsetScale(float value) const;
        auto SetInsets(float inset) const;
        auto SetInsets(float left, float top, float right, float bottom) const;
        auto SetInsetScales(float scale) const;
        auto SetInsetScales(float left, float top, float right, float bottom) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionNineGridBrush>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionNineGridBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionObject
    {
        [[nodiscard]] auto Compositor() const;
        [[nodiscard]] auto Dispatcher() const;
        [[nodiscard]] auto Properties() const;
        auto StartAnimation(param::hstring const& propertyName, Windows::UI::Composition::CompositionAnimation const& animation) const;
        auto StopAnimation(param::hstring const& propertyName) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionObject>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionObject<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionObject2
    {
        [[nodiscard]] auto Comment() const;
        auto Comment(param::hstring const& value) const;
        [[nodiscard]] auto ImplicitAnimations() const;
        auto ImplicitAnimations(Windows::UI::Composition::ImplicitAnimationCollection const& value) const;
        auto StartAnimationGroup(Windows::UI::Composition::ICompositionAnimationBase const& value) const;
        auto StopAnimationGroup(Windows::UI::Composition::ICompositionAnimationBase const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionObject2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionObject2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionObject3
    {
        [[nodiscard]] auto DispatcherQueue() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionObject3>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionObject3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionObject4
    {
        auto TryGetAnimationController(param::hstring const& propertyName) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionObject4>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionObject4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionObjectFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionObjectFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionObjectFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionObjectStatics
    {
        auto StartAnimationWithIAnimationObject(Windows::UI::Composition::IAnimationObject const& target, param::hstring const& propertyName, Windows::UI::Composition::CompositionAnimation const& animation) const;
        auto StartAnimationGroupWithIAnimationObject(Windows::UI::Composition::IAnimationObject const& target, Windows::UI::Composition::ICompositionAnimationBase const& animation) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionObjectStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionObjectStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionPath
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionPath>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionPath<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionPathFactory
    {
        auto Create(Windows::Graphics::IGeometrySource2D const& source) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionPathFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionPathFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionPathGeometry
    {
        [[nodiscard]] auto Path() const;
        auto Path(Windows::UI::Composition::CompositionPath const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionPathGeometry>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionPathGeometry<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionProjectedShadow
    {
        [[nodiscard]] auto BlurRadiusMultiplier() const;
        auto BlurRadiusMultiplier(float value) const;
        [[nodiscard]] auto Casters() const;
        [[nodiscard]] auto LightSource() const;
        auto LightSource(Windows::UI::Composition::CompositionLight const& value) const;
        [[nodiscard]] auto MaxBlurRadius() const;
        auto MaxBlurRadius(float value) const;
        [[nodiscard]] auto MinBlurRadius() const;
        auto MinBlurRadius(float value) const;
        [[nodiscard]] auto Receivers() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionProjectedShadow>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionProjectedShadow<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionProjectedShadowCaster
    {
        [[nodiscard]] auto Brush() const;
        auto Brush(Windows::UI::Composition::CompositionBrush const& value) const;
        [[nodiscard]] auto CastingVisual() const;
        auto CastingVisual(Windows::UI::Composition::Visual const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionProjectedShadowCaster>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionProjectedShadowCaster<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionProjectedShadowCasterCollection
    {
        [[nodiscard]] auto Count() const;
        auto InsertAbove(Windows::UI::Composition::CompositionProjectedShadowCaster const& newCaster, Windows::UI::Composition::CompositionProjectedShadowCaster const& reference) const;
        auto InsertAtBottom(Windows::UI::Composition::CompositionProjectedShadowCaster const& newCaster) const;
        auto InsertAtTop(Windows::UI::Composition::CompositionProjectedShadowCaster const& newCaster) const;
        auto InsertBelow(Windows::UI::Composition::CompositionProjectedShadowCaster const& newCaster, Windows::UI::Composition::CompositionProjectedShadowCaster const& reference) const;
        auto Remove(Windows::UI::Composition::CompositionProjectedShadowCaster const& caster) const;
        auto RemoveAll() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionProjectedShadowCasterCollection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionProjectedShadowCasterCollectionStatics
    {
        [[nodiscard]] auto MaxRespectedCasters() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionProjectedShadowCasterCollectionStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionProjectedShadowCasterCollectionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionProjectedShadowReceiver
    {
        [[nodiscard]] auto ReceivingVisual() const;
        auto ReceivingVisual(Windows::UI::Composition::Visual const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionProjectedShadowReceiver>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionProjectedShadowReceiver<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionProjectedShadowReceiverUnorderedCollection
    {
        auto Add(Windows::UI::Composition::CompositionProjectedShadowReceiver const& value) const;
        [[nodiscard]] auto Count() const;
        auto Remove(Windows::UI::Composition::CompositionProjectedShadowReceiver const& value) const;
        auto RemoveAll() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionProjectedShadowReceiverUnorderedCollection>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionProjectedShadowReceiverUnorderedCollection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionPropertySet
    {
        auto InsertColor(param::hstring const& propertyName, Windows::UI::Color const& value) const;
        auto InsertMatrix3x2(param::hstring const& propertyName, Windows::Foundation::Numerics::float3x2 const& value) const;
        auto InsertMatrix4x4(param::hstring const& propertyName, Windows::Foundation::Numerics::float4x4 const& value) const;
        auto InsertQuaternion(param::hstring const& propertyName, Windows::Foundation::Numerics::quaternion const& value) const;
        auto InsertScalar(param::hstring const& propertyName, float value) const;
        auto InsertVector2(param::hstring const& propertyName, Windows::Foundation::Numerics::float2 const& value) const;
        auto InsertVector3(param::hstring const& propertyName, Windows::Foundation::Numerics::float3 const& value) const;
        auto InsertVector4(param::hstring const& propertyName, Windows::Foundation::Numerics::float4 const& value) const;
        auto TryGetColor(param::hstring const& propertyName, Windows::UI::Color& value) const;
        auto TryGetMatrix3x2(param::hstring const& propertyName, Windows::Foundation::Numerics::float3x2& value) const;
        auto TryGetMatrix4x4(param::hstring const& propertyName, Windows::Foundation::Numerics::float4x4& value) const;
        auto TryGetQuaternion(param::hstring const& propertyName, Windows::Foundation::Numerics::quaternion& value) const;
        auto TryGetScalar(param::hstring const& propertyName, float& value) const;
        auto TryGetVector2(param::hstring const& propertyName, Windows::Foundation::Numerics::float2& value) const;
        auto TryGetVector3(param::hstring const& propertyName, Windows::Foundation::Numerics::float3& value) const;
        auto TryGetVector4(param::hstring const& propertyName, Windows::Foundation::Numerics::float4& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionPropertySet>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionPropertySet<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionPropertySet2
    {
        auto InsertBoolean(param::hstring const& propertyName, bool value) const;
        auto TryGetBoolean(param::hstring const& propertyName, bool& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionPropertySet2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionPropertySet2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionRadialGradientBrush
    {
        [[nodiscard]] auto EllipseCenter() const;
        auto EllipseCenter(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto EllipseRadius() const;
        auto EllipseRadius(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto GradientOriginOffset() const;
        auto GradientOriginOffset(Windows::Foundation::Numerics::float2 const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionRadialGradientBrush>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionRadialGradientBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionRectangleGeometry
    {
        [[nodiscard]] auto Offset() const;
        auto Offset(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto Size() const;
        auto Size(Windows::Foundation::Numerics::float2 const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionRectangleGeometry>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionRectangleGeometry<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionRoundedRectangleGeometry
    {
        [[nodiscard]] auto CornerRadius() const;
        auto CornerRadius(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto Offset() const;
        auto Offset(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto Size() const;
        auto Size(Windows::Foundation::Numerics::float2 const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionRoundedRectangleGeometry>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionRoundedRectangleGeometry<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionScopedBatch
    {
        [[nodiscard]] auto IsActive() const;
        [[nodiscard]] auto IsEnded() const;
        auto End() const;
        auto Resume() const;
        auto Suspend() const;
        auto Completed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler) const;
        using Completed_revoker = impl::event_revoker<Windows::UI::Composition::ICompositionScopedBatch, &impl::abi_t<Windows::UI::Composition::ICompositionScopedBatch>::remove_Completed>;
        Completed_revoker Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler) const;
        auto Completed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionScopedBatch>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionScopedBatch<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionShadow
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionShadow>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionShadow<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionShadowFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionShadowFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionShadowFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionShape
    {
        [[nodiscard]] auto CenterPoint() const;
        auto CenterPoint(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto Offset() const;
        auto Offset(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto RotationAngle() const;
        auto RotationAngle(float value) const;
        [[nodiscard]] auto RotationAngleInDegrees() const;
        auto RotationAngleInDegrees(float value) const;
        [[nodiscard]] auto Scale() const;
        auto Scale(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto TransformMatrix() const;
        auto TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionShape>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionShape<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionShapeFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionShapeFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionShapeFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionSpriteShape
    {
        [[nodiscard]] auto FillBrush() const;
        auto FillBrush(Windows::UI::Composition::CompositionBrush const& value) const;
        [[nodiscard]] auto Geometry() const;
        auto Geometry(Windows::UI::Composition::CompositionGeometry const& value) const;
        [[nodiscard]] auto IsStrokeNonScaling() const;
        auto IsStrokeNonScaling(bool value) const;
        [[nodiscard]] auto StrokeBrush() const;
        auto StrokeBrush(Windows::UI::Composition::CompositionBrush const& value) const;
        [[nodiscard]] auto StrokeDashArray() const;
        [[nodiscard]] auto StrokeDashCap() const;
        auto StrokeDashCap(Windows::UI::Composition::CompositionStrokeCap const& value) const;
        [[nodiscard]] auto StrokeDashOffset() const;
        auto StrokeDashOffset(float value) const;
        [[nodiscard]] auto StrokeEndCap() const;
        auto StrokeEndCap(Windows::UI::Composition::CompositionStrokeCap const& value) const;
        [[nodiscard]] auto StrokeLineJoin() const;
        auto StrokeLineJoin(Windows::UI::Composition::CompositionStrokeLineJoin const& value) const;
        [[nodiscard]] auto StrokeMiterLimit() const;
        auto StrokeMiterLimit(float value) const;
        [[nodiscard]] auto StrokeStartCap() const;
        auto StrokeStartCap(Windows::UI::Composition::CompositionStrokeCap const& value) const;
        [[nodiscard]] auto StrokeThickness() const;
        auto StrokeThickness(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionSpriteShape>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionSpriteShape<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionSurface
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionSurface>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionSurface<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionSurfaceBrush
    {
        [[nodiscard]] auto BitmapInterpolationMode() const;
        auto BitmapInterpolationMode(Windows::UI::Composition::CompositionBitmapInterpolationMode const& value) const;
        [[nodiscard]] auto HorizontalAlignmentRatio() const;
        auto HorizontalAlignmentRatio(float value) const;
        [[nodiscard]] auto Stretch() const;
        auto Stretch(Windows::UI::Composition::CompositionStretch const& value) const;
        [[nodiscard]] auto Surface() const;
        auto Surface(Windows::UI::Composition::ICompositionSurface const& value) const;
        [[nodiscard]] auto VerticalAlignmentRatio() const;
        auto VerticalAlignmentRatio(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionSurfaceBrush>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionSurfaceBrush2
    {
        [[nodiscard]] auto AnchorPoint() const;
        auto AnchorPoint(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto CenterPoint() const;
        auto CenterPoint(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto Offset() const;
        auto Offset(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto RotationAngle() const;
        auto RotationAngle(float value) const;
        [[nodiscard]] auto RotationAngleInDegrees() const;
        auto RotationAngleInDegrees(float value) const;
        [[nodiscard]] auto Scale() const;
        auto Scale(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto TransformMatrix() const;
        auto TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionSurfaceBrush2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionSurfaceBrush3
    {
        [[nodiscard]] auto SnapToPixels() const;
        auto SnapToPixels(bool value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionSurfaceBrush3>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionSurfaceBrush3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionTarget
    {
        [[nodiscard]] auto Root() const;
        auto Root(Windows::UI::Composition::Visual const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionTarget>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionTarget<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionTargetFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionTargetFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionTargetFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionTransform
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionTransform>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionTransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionTransformFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionTransformFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionTransformFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionViewBox
    {
        [[nodiscard]] auto HorizontalAlignmentRatio() const;
        auto HorizontalAlignmentRatio(float value) const;
        [[nodiscard]] auto Offset() const;
        auto Offset(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto Size() const;
        auto Size(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto Stretch() const;
        auto Stretch(Windows::UI::Composition::CompositionStretch const& value) const;
        [[nodiscard]] auto VerticalAlignmentRatio() const;
        auto VerticalAlignmentRatio(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionViewBox>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionViewBox<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionVirtualDrawingSurface
    {
        auto Trim(array_view<Windows::Graphics::RectInt32 const> rects) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionVirtualDrawingSurface>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionVirtualDrawingSurface<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionVirtualDrawingSurfaceFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionVirtualDrawingSurfaceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositionVisualSurface
    {
        [[nodiscard]] auto SourceVisual() const;
        auto SourceVisual(Windows::UI::Composition::Visual const& value) const;
        [[nodiscard]] auto SourceOffset() const;
        auto SourceOffset(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto SourceSize() const;
        auto SourceSize(Windows::Foundation::Numerics::float2 const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositionVisualSurface>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositionVisualSurface<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositor
    {
        auto CreateColorKeyFrameAnimation() const;
        auto CreateColorBrush() const;
        auto CreateColorBrush(Windows::UI::Color const& color) const;
        auto CreateContainerVisual() const;
        auto CreateCubicBezierEasingFunction(Windows::Foundation::Numerics::float2 const& controlPoint1, Windows::Foundation::Numerics::float2 const& controlPoint2) const;
        auto CreateEffectFactory(Windows::Graphics::Effects::IGraphicsEffect const& graphicsEffect) const;
        auto CreateEffectFactory(Windows::Graphics::Effects::IGraphicsEffect const& graphicsEffect, param::iterable<hstring> const& animatableProperties) const;
        auto CreateExpressionAnimation() const;
        auto CreateExpressionAnimation(param::hstring const& expression) const;
        auto CreateInsetClip() const;
        auto CreateInsetClip(float leftInset, float topInset, float rightInset, float bottomInset) const;
        auto CreateLinearEasingFunction() const;
        auto CreatePropertySet() const;
        auto CreateQuaternionKeyFrameAnimation() const;
        auto CreateScalarKeyFrameAnimation() const;
        auto CreateScopedBatch(Windows::UI::Composition::CompositionBatchTypes const& batchType) const;
        auto CreateSpriteVisual() const;
        auto CreateSurfaceBrush() const;
        auto CreateSurfaceBrush(Windows::UI::Composition::ICompositionSurface const& surface) const;
        auto CreateTargetForCurrentView() const;
        auto CreateVector2KeyFrameAnimation() const;
        auto CreateVector3KeyFrameAnimation() const;
        auto CreateVector4KeyFrameAnimation() const;
        auto GetCommitBatch(Windows::UI::Composition::CompositionBatchTypes const& batchType) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositor>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositor<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositor2
    {
        auto CreateAmbientLight() const;
        auto CreateAnimationGroup() const;
        auto CreateBackdropBrush() const;
        auto CreateDistantLight() const;
        auto CreateDropShadow() const;
        auto CreateImplicitAnimationCollection() const;
        auto CreateLayerVisual() const;
        auto CreateMaskBrush() const;
        auto CreateNineGridBrush() const;
        auto CreatePointLight() const;
        auto CreateSpotLight() const;
        auto CreateStepEasingFunction() const;
        auto CreateStepEasingFunction(int32_t stepCount) const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositor2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositor2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositor3
    {
        auto CreateHostBackdropBrush() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositor3>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositor3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositor4
    {
        auto CreateColorGradientStop() const;
        auto CreateColorGradientStop(float offset, Windows::UI::Color const& color) const;
        auto CreateLinearGradientBrush() const;
        auto CreateSpringScalarAnimation() const;
        auto CreateSpringVector2Animation() const;
        auto CreateSpringVector3Animation() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositor4>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositor4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositor5
    {
        [[nodiscard]] auto Comment() const;
        auto Comment(param::hstring const& value) const;
        [[nodiscard]] auto GlobalPlaybackRate() const;
        auto GlobalPlaybackRate(float value) const;
        auto CreateBounceScalarAnimation() const;
        auto CreateBounceVector2Animation() const;
        auto CreateBounceVector3Animation() const;
        auto CreateContainerShape() const;
        auto CreateEllipseGeometry() const;
        auto CreateLineGeometry() const;
        auto CreatePathGeometry() const;
        auto CreatePathGeometry(Windows::UI::Composition::CompositionPath const& path) const;
        auto CreatePathKeyFrameAnimation() const;
        auto CreateRectangleGeometry() const;
        auto CreateRoundedRectangleGeometry() const;
        auto CreateShapeVisual() const;
        auto CreateSpriteShape() const;
        auto CreateSpriteShape(Windows::UI::Composition::CompositionGeometry const& geometry) const;
        auto CreateViewBox() const;
        auto RequestCommitAsync() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositor5>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositor5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositor6
    {
        auto CreateGeometricClip() const;
        auto CreateGeometricClip(Windows::UI::Composition::CompositionGeometry const& geometry) const;
        auto CreateRedirectVisual() const;
        auto CreateRedirectVisual(Windows::UI::Composition::Visual const& source) const;
        auto CreateBooleanKeyFrameAnimation() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositor6>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositor6<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositorStatics
    {
        [[nodiscard]] auto MaxGlobalPlaybackRate() const;
        [[nodiscard]] auto MinGlobalPlaybackRate() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositorStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositorWithProjectedShadow
    {
        auto CreateProjectedShadowCaster() const;
        auto CreateProjectedShadow() const;
        auto CreateProjectedShadowReceiver() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositorWithProjectedShadow>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositorWithProjectedShadow<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositorWithRadialGradient
    {
        auto CreateRadialGradientBrush() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositorWithRadialGradient>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositorWithRadialGradient<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICompositorWithVisualSurface
    {
        auto CreateVisualSurface() const;
    };
    template <> struct consume<Windows::UI::Composition::ICompositorWithVisualSurface>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICompositorWithVisualSurface<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IContainerVisual
    {
        [[nodiscard]] auto Children() const;
    };
    template <> struct consume<Windows::UI::Composition::IContainerVisual>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IContainerVisual<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IContainerVisualFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::IContainerVisualFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IContainerVisualFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ICubicBezierEasingFunction
    {
        [[nodiscard]] auto ControlPoint1() const;
        [[nodiscard]] auto ControlPoint2() const;
    };
    template <> struct consume<Windows::UI::Composition::ICubicBezierEasingFunction>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ICubicBezierEasingFunction<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IDistantLight
    {
        [[nodiscard]] auto Color() const;
        auto Color(Windows::UI::Color const& value) const;
        [[nodiscard]] auto CoordinateSpace() const;
        auto CoordinateSpace(Windows::UI::Composition::Visual const& value) const;
        [[nodiscard]] auto Direction() const;
        auto Direction(Windows::Foundation::Numerics::float3 const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::IDistantLight>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IDistantLight<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IDistantLight2
    {
        [[nodiscard]] auto Intensity() const;
        auto Intensity(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::IDistantLight2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IDistantLight2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IDropShadow
    {
        [[nodiscard]] auto BlurRadius() const;
        auto BlurRadius(float value) const;
        [[nodiscard]] auto Color() const;
        auto Color(Windows::UI::Color const& value) const;
        [[nodiscard]] auto Mask() const;
        auto Mask(Windows::UI::Composition::CompositionBrush const& value) const;
        [[nodiscard]] auto Offset() const;
        auto Offset(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto Opacity() const;
        auto Opacity(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::IDropShadow>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IDropShadow<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IDropShadow2
    {
        [[nodiscard]] auto SourcePolicy() const;
        auto SourcePolicy(Windows::UI::Composition::CompositionDropShadowSourcePolicy const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::IDropShadow2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IDropShadow2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IExpressionAnimation
    {
        [[nodiscard]] auto Expression() const;
        auto Expression(param::hstring const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::IExpressionAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IExpressionAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IImplicitAnimationCollection
    {
    };
    template <> struct consume<Windows::UI::Composition::IImplicitAnimationCollection>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IImplicitAnimationCollection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IInsetClip
    {
        [[nodiscard]] auto BottomInset() const;
        auto BottomInset(float value) const;
        [[nodiscard]] auto LeftInset() const;
        auto LeftInset(float value) const;
        [[nodiscard]] auto RightInset() const;
        auto RightInset(float value) const;
        [[nodiscard]] auto TopInset() const;
        auto TopInset(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::IInsetClip>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IInsetClip<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IKeyFrameAnimation
    {
        [[nodiscard]] auto DelayTime() const;
        auto DelayTime(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto Duration() const;
        auto Duration(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto IterationBehavior() const;
        auto IterationBehavior(Windows::UI::Composition::AnimationIterationBehavior const& value) const;
        [[nodiscard]] auto IterationCount() const;
        auto IterationCount(int32_t value) const;
        [[nodiscard]] auto KeyFrameCount() const;
        [[nodiscard]] auto StopBehavior() const;
        auto StopBehavior(Windows::UI::Composition::AnimationStopBehavior const& value) const;
        auto InsertExpressionKeyFrame(float normalizedProgressKey, param::hstring const& value) const;
        auto InsertExpressionKeyFrame(float normalizedProgressKey, param::hstring const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const;
    };
    template <> struct consume<Windows::UI::Composition::IKeyFrameAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IKeyFrameAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IKeyFrameAnimation2
    {
        [[nodiscard]] auto Direction() const;
        auto Direction(Windows::UI::Composition::AnimationDirection const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::IKeyFrameAnimation2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IKeyFrameAnimation2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IKeyFrameAnimation3
    {
        [[nodiscard]] auto DelayBehavior() const;
        auto DelayBehavior(Windows::UI::Composition::AnimationDelayBehavior const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::IKeyFrameAnimation3>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IKeyFrameAnimation3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IKeyFrameAnimationFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::IKeyFrameAnimationFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IKeyFrameAnimationFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ILayerVisual
    {
        [[nodiscard]] auto Effect() const;
        auto Effect(Windows::UI::Composition::CompositionEffectBrush const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ILayerVisual>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ILayerVisual<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ILayerVisual2
    {
        [[nodiscard]] auto Shadow() const;
        auto Shadow(Windows::UI::Composition::CompositionShadow const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ILayerVisual2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ILayerVisual2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ILinearEasingFunction
    {
    };
    template <> struct consume<Windows::UI::Composition::ILinearEasingFunction>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ILinearEasingFunction<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_INaturalMotionAnimation
    {
        [[nodiscard]] auto DelayBehavior() const;
        auto DelayBehavior(Windows::UI::Composition::AnimationDelayBehavior const& value) const;
        [[nodiscard]] auto DelayTime() const;
        auto DelayTime(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto StopBehavior() const;
        auto StopBehavior(Windows::UI::Composition::AnimationStopBehavior const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::INaturalMotionAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_INaturalMotionAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_INaturalMotionAnimationFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::INaturalMotionAnimationFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_INaturalMotionAnimationFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IPathKeyFrameAnimation
    {
        auto InsertKeyFrame(float normalizedProgressKey, Windows::UI::Composition::CompositionPath const& path) const;
        auto InsertKeyFrame(float normalizedProgressKey, Windows::UI::Composition::CompositionPath const& path, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const;
    };
    template <> struct consume<Windows::UI::Composition::IPathKeyFrameAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IPathKeyFrameAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IPointLight
    {
        [[nodiscard]] auto Color() const;
        auto Color(Windows::UI::Color const& value) const;
        [[nodiscard]] auto ConstantAttenuation() const;
        auto ConstantAttenuation(float value) const;
        [[nodiscard]] auto CoordinateSpace() const;
        auto CoordinateSpace(Windows::UI::Composition::Visual const& value) const;
        [[nodiscard]] auto LinearAttenuation() const;
        auto LinearAttenuation(float value) const;
        [[nodiscard]] auto Offset() const;
        auto Offset(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto QuadraticAttenuation() const;
        auto QuadraticAttenuation(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::IPointLight>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IPointLight<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IPointLight2
    {
        [[nodiscard]] auto Intensity() const;
        auto Intensity(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::IPointLight2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IPointLight2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IPointLight3
    {
        [[nodiscard]] auto MinAttenuationCutoff() const;
        auto MinAttenuationCutoff(float value) const;
        [[nodiscard]] auto MaxAttenuationCutoff() const;
        auto MaxAttenuationCutoff(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::IPointLight3>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IPointLight3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IQuaternionKeyFrameAnimation
    {
        auto InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::quaternion const& value) const;
        auto InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::quaternion const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const;
    };
    template <> struct consume<Windows::UI::Composition::IQuaternionKeyFrameAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IQuaternionKeyFrameAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IRedirectVisual
    {
        [[nodiscard]] auto Source() const;
        auto Source(Windows::UI::Composition::Visual const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::IRedirectVisual>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IRedirectVisual<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IRenderingDeviceReplacedEventArgs
    {
        [[nodiscard]] auto GraphicsDevice() const;
    };
    template <> struct consume<Windows::UI::Composition::IRenderingDeviceReplacedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IRenderingDeviceReplacedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IScalarKeyFrameAnimation
    {
        auto InsertKeyFrame(float normalizedProgressKey, float value) const;
        auto InsertKeyFrame(float normalizedProgressKey, float value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const;
    };
    template <> struct consume<Windows::UI::Composition::IScalarKeyFrameAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IScalarKeyFrameAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IScalarNaturalMotionAnimation
    {
        [[nodiscard]] auto FinalValue() const;
        auto FinalValue(Windows::Foundation::IReference<float> const& value) const;
        [[nodiscard]] auto InitialValue() const;
        auto InitialValue(Windows::Foundation::IReference<float> const& value) const;
        [[nodiscard]] auto InitialVelocity() const;
        auto InitialVelocity(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::IScalarNaturalMotionAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IScalarNaturalMotionAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IScalarNaturalMotionAnimationFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::IScalarNaturalMotionAnimationFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IScalarNaturalMotionAnimationFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IShapeVisual
    {
        [[nodiscard]] auto Shapes() const;
        [[nodiscard]] auto ViewBox() const;
        auto ViewBox(Windows::UI::Composition::CompositionViewBox const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::IShapeVisual>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IShapeVisual<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ISpotLight
    {
        [[nodiscard]] auto ConstantAttenuation() const;
        auto ConstantAttenuation(float value) const;
        [[nodiscard]] auto CoordinateSpace() const;
        auto CoordinateSpace(Windows::UI::Composition::Visual const& value) const;
        [[nodiscard]] auto Direction() const;
        auto Direction(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto InnerConeAngle() const;
        auto InnerConeAngle(float value) const;
        [[nodiscard]] auto InnerConeAngleInDegrees() const;
        auto InnerConeAngleInDegrees(float value) const;
        [[nodiscard]] auto InnerConeColor() const;
        auto InnerConeColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto LinearAttenuation() const;
        auto LinearAttenuation(float value) const;
        [[nodiscard]] auto Offset() const;
        auto Offset(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto OuterConeAngle() const;
        auto OuterConeAngle(float value) const;
        [[nodiscard]] auto OuterConeAngleInDegrees() const;
        auto OuterConeAngleInDegrees(float value) const;
        [[nodiscard]] auto OuterConeColor() const;
        auto OuterConeColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto QuadraticAttenuation() const;
        auto QuadraticAttenuation(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::ISpotLight>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ISpotLight<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ISpotLight2
    {
        [[nodiscard]] auto InnerConeIntensity() const;
        auto InnerConeIntensity(float value) const;
        [[nodiscard]] auto OuterConeIntensity() const;
        auto OuterConeIntensity(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::ISpotLight2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ISpotLight2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ISpotLight3
    {
        [[nodiscard]] auto MinAttenuationCutoff() const;
        auto MinAttenuationCutoff(float value) const;
        [[nodiscard]] auto MaxAttenuationCutoff() const;
        auto MaxAttenuationCutoff(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::ISpotLight3>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ISpotLight3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ISpringScalarNaturalMotionAnimation
    {
        [[nodiscard]] auto DampingRatio() const;
        auto DampingRatio(float value) const;
        [[nodiscard]] auto Period() const;
        auto Period(Windows::Foundation::TimeSpan const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ISpringScalarNaturalMotionAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ISpringScalarNaturalMotionAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ISpringVector2NaturalMotionAnimation
    {
        [[nodiscard]] auto DampingRatio() const;
        auto DampingRatio(float value) const;
        [[nodiscard]] auto Period() const;
        auto Period(Windows::Foundation::TimeSpan const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ISpringVector2NaturalMotionAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ISpringVector2NaturalMotionAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ISpringVector3NaturalMotionAnimation
    {
        [[nodiscard]] auto DampingRatio() const;
        auto DampingRatio(float value) const;
        [[nodiscard]] auto Period() const;
        auto Period(Windows::Foundation::TimeSpan const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ISpringVector3NaturalMotionAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ISpringVector3NaturalMotionAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ISpriteVisual
    {
        [[nodiscard]] auto Brush() const;
        auto Brush(Windows::UI::Composition::CompositionBrush const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ISpriteVisual>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ISpriteVisual<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_ISpriteVisual2
    {
        [[nodiscard]] auto Shadow() const;
        auto Shadow(Windows::UI::Composition::CompositionShadow const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::ISpriteVisual2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_ISpriteVisual2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IStepEasingFunction
    {
        [[nodiscard]] auto FinalStep() const;
        auto FinalStep(int32_t value) const;
        [[nodiscard]] auto InitialStep() const;
        auto InitialStep(int32_t value) const;
        [[nodiscard]] auto IsFinalStepSingleFrame() const;
        auto IsFinalStepSingleFrame(bool value) const;
        [[nodiscard]] auto IsInitialStepSingleFrame() const;
        auto IsInitialStepSingleFrame(bool value) const;
        [[nodiscard]] auto StepCount() const;
        auto StepCount(int32_t value) const;
    };
    template <> struct consume<Windows::UI::Composition::IStepEasingFunction>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IStepEasingFunction<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IVector2KeyFrameAnimation
    {
        auto InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float2 const& value) const;
        auto InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float2 const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const;
    };
    template <> struct consume<Windows::UI::Composition::IVector2KeyFrameAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IVector2KeyFrameAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IVector2NaturalMotionAnimation
    {
        [[nodiscard]] auto FinalValue() const;
        auto FinalValue(Windows::Foundation::IReference<Windows::Foundation::Numerics::float2> const& value) const;
        [[nodiscard]] auto InitialValue() const;
        auto InitialValue(Windows::Foundation::IReference<Windows::Foundation::Numerics::float2> const& value) const;
        [[nodiscard]] auto InitialVelocity() const;
        auto InitialVelocity(Windows::Foundation::Numerics::float2 const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::IVector2NaturalMotionAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IVector2NaturalMotionAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IVector2NaturalMotionAnimationFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::IVector2NaturalMotionAnimationFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IVector2NaturalMotionAnimationFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IVector3KeyFrameAnimation
    {
        auto InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float3 const& value) const;
        auto InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float3 const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const;
    };
    template <> struct consume<Windows::UI::Composition::IVector3KeyFrameAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IVector3KeyFrameAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IVector3NaturalMotionAnimation
    {
        [[nodiscard]] auto FinalValue() const;
        auto FinalValue(Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> const& value) const;
        [[nodiscard]] auto InitialValue() const;
        auto InitialValue(Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> const& value) const;
        [[nodiscard]] auto InitialVelocity() const;
        auto InitialVelocity(Windows::Foundation::Numerics::float3 const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::IVector3NaturalMotionAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IVector3NaturalMotionAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IVector3NaturalMotionAnimationFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::IVector3NaturalMotionAnimationFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IVector3NaturalMotionAnimationFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IVector4KeyFrameAnimation
    {
        auto InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float4 const& value) const;
        auto InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float4 const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const;
    };
    template <> struct consume<Windows::UI::Composition::IVector4KeyFrameAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IVector4KeyFrameAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IVisual
    {
        [[nodiscard]] auto AnchorPoint() const;
        auto AnchorPoint(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto BackfaceVisibility() const;
        auto BackfaceVisibility(Windows::UI::Composition::CompositionBackfaceVisibility const& value) const;
        [[nodiscard]] auto BorderMode() const;
        auto BorderMode(Windows::UI::Composition::CompositionBorderMode const& value) const;
        [[nodiscard]] auto CenterPoint() const;
        auto CenterPoint(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto Clip() const;
        auto Clip(Windows::UI::Composition::CompositionClip const& value) const;
        [[nodiscard]] auto CompositeMode() const;
        auto CompositeMode(Windows::UI::Composition::CompositionCompositeMode const& value) const;
        [[nodiscard]] auto IsVisible() const;
        auto IsVisible(bool value) const;
        [[nodiscard]] auto Offset() const;
        auto Offset(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto Opacity() const;
        auto Opacity(float value) const;
        [[nodiscard]] auto Orientation() const;
        auto Orientation(Windows::Foundation::Numerics::quaternion const& value) const;
        [[nodiscard]] auto Parent() const;
        [[nodiscard]] auto RotationAngle() const;
        auto RotationAngle(float value) const;
        [[nodiscard]] auto RotationAngleInDegrees() const;
        auto RotationAngleInDegrees(float value) const;
        [[nodiscard]] auto RotationAxis() const;
        auto RotationAxis(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto Scale() const;
        auto Scale(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto Size() const;
        auto Size(Windows::Foundation::Numerics::float2 const& value) const;
        [[nodiscard]] auto TransformMatrix() const;
        auto TransformMatrix(Windows::Foundation::Numerics::float4x4 const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::IVisual>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IVisual<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IVisual2
    {
        [[nodiscard]] auto ParentForTransform() const;
        auto ParentForTransform(Windows::UI::Composition::Visual const& value) const;
        [[nodiscard]] auto RelativeOffsetAdjustment() const;
        auto RelativeOffsetAdjustment(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] auto RelativeSizeAdjustment() const;
        auto RelativeSizeAdjustment(Windows::Foundation::Numerics::float2 const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::IVisual2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IVisual2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IVisual3
    {
        [[nodiscard]] auto IsHitTestVisible() const;
        auto IsHitTestVisible(bool value) const;
    };
    template <> struct consume<Windows::UI::Composition::IVisual3>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IVisual3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IVisualCollection
    {
        [[nodiscard]] auto Count() const;
        auto InsertAbove(Windows::UI::Composition::Visual const& newChild, Windows::UI::Composition::Visual const& sibling) const;
        auto InsertAtBottom(Windows::UI::Composition::Visual const& newChild) const;
        auto InsertAtTop(Windows::UI::Composition::Visual const& newChild) const;
        auto InsertBelow(Windows::UI::Composition::Visual const& newChild, Windows::UI::Composition::Visual const& sibling) const;
        auto Remove(Windows::UI::Composition::Visual const& child) const;
        auto RemoveAll() const;
    };
    template <> struct consume<Windows::UI::Composition::IVisualCollection>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IVisualCollection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IVisualElement
    {
    };
    template <> struct consume<Windows::UI::Composition::IVisualElement>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IVisualElement<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IVisualFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::IVisualFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IVisualFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_IVisualUnorderedCollection
    {
        [[nodiscard]] auto Count() const;
        auto Add(Windows::UI::Composition::Visual const& newVisual) const;
        auto Remove(Windows::UI::Composition::Visual const& visual) const;
        auto RemoveAll() const;
    };
    template <> struct consume<Windows::UI::Composition::IVisualUnorderedCollection>
    {
        template <typename D> using type = consume_Windows_UI_Composition_IVisualUnorderedCollection<D>;
    };
}
#endif
