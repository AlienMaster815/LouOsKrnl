// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Media_0_H
#define WINRT_Windows_UI_Xaml_Media_0_H
namespace winrt::Windows::Foundation
{
    struct Deferral;
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
    template <typename T> struct IVector;
}
namespace winrt::Windows::Media::Playback
{
    enum class FailedMediaStreamKind : int32_t;
}
namespace winrt::Windows::Storage::Streams
{
    struct IInputStream;
    struct IRandomAccessStream;
}
namespace winrt::Windows::UI
{
    struct Color;
}
namespace winrt::Windows::UI::Composition
{
    struct AnimationPropertyInfo;
    struct CompositionBrush;
    struct CompositionLight;
}
namespace winrt::Windows::UI::Xaml
{
    enum class ApplicationTheme : int32_t;
    struct DependencyObject;
    struct DependencyProperty;
    struct ExceptionRoutedEventHandler;
    struct RoutedEventHandler;
    struct UIElement;
    struct UIElementWeakCollection;
    struct Window;
    struct XamlRoot;
}
namespace winrt::Windows::UI::Xaml::Media::Media3D
{
    struct Matrix3D;
}
namespace winrt::Windows::UI::Xaml::Media
{
    enum class AcrylicBackgroundSource : int32_t
    {
        HostBackdrop = 0,
        Backdrop = 1,
    };
    enum class AlignmentX : int32_t
    {
        Left = 0,
        Center = 1,
        Right = 2,
    };
    enum class AlignmentY : int32_t
    {
        Top = 0,
        Center = 1,
        Bottom = 2,
    };
    enum class AudioCategory : int32_t
    {
        Other = 0,
        ForegroundOnlyMedia = 1,
        BackgroundCapableMedia = 2,
        Communications = 3,
        Alerts = 4,
        SoundEffects = 5,
        GameEffects = 6,
        GameMedia = 7,
        GameChat = 8,
        Speech = 9,
        Movie = 10,
        Media = 11,
    };
    enum class AudioDeviceType : int32_t
    {
        Console = 0,
        Multimedia = 1,
        Communications = 2,
    };
    enum class BrushMappingMode : int32_t
    {
        Absolute = 0,
        RelativeToBoundingBox = 1,
    };
    enum class ColorInterpolationMode : int32_t
    {
        ScRgbLinearInterpolation = 0,
        SRgbLinearInterpolation = 1,
    };
    enum class ElementCompositeMode : int32_t
    {
        Inherit = 0,
        SourceOver = 1,
        MinBlend = 2,
    };
    enum class FastPlayFallbackBehaviour : int32_t
    {
        Skip = 0,
        Hide = 1,
        Disable = 2,
    };
    enum class FillRule : int32_t
    {
        EvenOdd = 0,
        Nonzero = 1,
    };
    enum class GradientSpreadMethod : int32_t
    {
        Pad = 0,
        Reflect = 1,
        Repeat = 2,
    };
    enum class LoadedImageSourceLoadStatus : int32_t
    {
        Success = 0,
        NetworkError = 1,
        InvalidFormat = 2,
        Other = 3,
    };
    enum class MediaCanPlayResponse : int32_t
    {
        NotSupported = 0,
        Maybe = 1,
        Probably = 2,
    };
    enum class MediaElementState : int32_t
    {
        Closed = 0,
        Opening = 1,
        Buffering = 2,
        Playing = 3,
        Paused = 4,
        Stopped = 5,
    };
    enum class PenLineCap : int32_t
    {
        Flat = 0,
        Square = 1,
        Round = 2,
        Triangle = 3,
    };
    enum class PenLineJoin : int32_t
    {
        Miter = 0,
        Bevel = 1,
        Round = 2,
    };
    enum class RevealBrushState : int32_t
    {
        Normal = 0,
        PointerOver = 1,
        Pressed = 2,
    };
    enum class Stereo3DVideoPackingMode : int32_t
    {
        None = 0,
        SideBySide = 1,
        TopBottom = 2,
    };
    enum class Stereo3DVideoRenderMode : int32_t
    {
        Mono = 0,
        Stereo = 1,
    };
    enum class Stretch : int32_t
    {
        None = 0,
        Fill = 1,
        Uniform = 2,
        UniformToFill = 3,
    };
    enum class StyleSimulations : int32_t
    {
        None = 0,
        BoldSimulation = 1,
        ItalicSimulation = 2,
        BoldItalicSimulation = 3,
    };
    enum class SweepDirection : int32_t
    {
        Counterclockwise = 0,
        Clockwise = 1,
    };
    struct IAcrylicBrush;
    struct IAcrylicBrush2;
    struct IAcrylicBrushFactory;
    struct IAcrylicBrushStatics;
    struct IAcrylicBrushStatics2;
    struct IArcSegment;
    struct IArcSegmentStatics;
    struct IBezierSegment;
    struct IBezierSegmentStatics;
    struct IBitmapCache;
    struct IBrush;
    struct IBrushFactory;
    struct IBrushOverrides2;
    struct IBrushStatics;
    struct ICacheMode;
    struct ICacheModeFactory;
    struct ICompositeTransform;
    struct ICompositeTransformStatics;
    struct ICompositionTarget;
    struct ICompositionTargetStatics;
    struct ICompositionTargetStatics3;
    struct IEllipseGeometry;
    struct IEllipseGeometryStatics;
    struct IFontFamily;
    struct IFontFamilyFactory;
    struct IFontFamilyStatics2;
    struct IGeneralTransform;
    struct IGeneralTransformFactory;
    struct IGeneralTransformOverrides;
    struct IGeometry;
    struct IGeometryFactory;
    struct IGeometryGroup;
    struct IGeometryGroupStatics;
    struct IGeometryStatics;
    struct IGradientBrush;
    struct IGradientBrushFactory;
    struct IGradientBrushStatics;
    struct IGradientStop;
    struct IGradientStopStatics;
    struct IImageBrush;
    struct IImageBrushStatics;
    struct IImageSource;
    struct IImageSourceFactory;
    struct ILineGeometry;
    struct ILineGeometryStatics;
    struct ILineSegment;
    struct ILineSegmentStatics;
    struct ILinearGradientBrush;
    struct ILinearGradientBrushFactory;
    struct ILinearGradientBrushStatics;
    struct ILoadedImageSourceLoadCompletedEventArgs;
    struct ILoadedImageSurface;
    struct ILoadedImageSurfaceStatics;
    struct IMatrix3DProjection;
    struct IMatrix3DProjectionStatics;
    struct IMatrixHelper;
    struct IMatrixHelperStatics;
    struct IMatrixTransform;
    struct IMatrixTransformStatics;
    struct IMediaTransportControlsThumbnailRequestedEventArgs;
    struct IPartialMediaFailureDetectedEventArgs;
    struct IPartialMediaFailureDetectedEventArgs2;
    struct IPathFigure;
    struct IPathFigureStatics;
    struct IPathGeometry;
    struct IPathGeometryStatics;
    struct IPathSegment;
    struct IPathSegmentFactory;
    struct IPlaneProjection;
    struct IPlaneProjectionStatics;
    struct IPolyBezierSegment;
    struct IPolyBezierSegmentStatics;
    struct IPolyLineSegment;
    struct IPolyLineSegmentStatics;
    struct IPolyQuadraticBezierSegment;
    struct IPolyQuadraticBezierSegmentStatics;
    struct IProjection;
    struct IProjectionFactory;
    struct IQuadraticBezierSegment;
    struct IQuadraticBezierSegmentStatics;
    struct IRateChangedRoutedEventArgs;
    struct IRectangleGeometry;
    struct IRectangleGeometryStatics;
    struct IRenderedEventArgs;
    struct IRenderingEventArgs;
    struct IRevealBackgroundBrush;
    struct IRevealBackgroundBrushFactory;
    struct IRevealBorderBrush;
    struct IRevealBorderBrushFactory;
    struct IRevealBrush;
    struct IRevealBrushFactory;
    struct IRevealBrushStatics;
    struct IRotateTransform;
    struct IRotateTransformStatics;
    struct IScaleTransform;
    struct IScaleTransformStatics;
    struct IShadow;
    struct IShadowFactory;
    struct ISkewTransform;
    struct ISkewTransformStatics;
    struct ISolidColorBrush;
    struct ISolidColorBrushFactory;
    struct ISolidColorBrushStatics;
    struct IThemeShadow;
    struct IThemeShadowFactory;
    struct ITileBrush;
    struct ITileBrushFactory;
    struct ITileBrushStatics;
    struct ITimelineMarker;
    struct ITimelineMarkerRoutedEventArgs;
    struct ITimelineMarkerStatics;
    struct ITransform;
    struct ITransformFactory;
    struct ITransformGroup;
    struct ITransformGroupStatics;
    struct ITranslateTransform;
    struct ITranslateTransformStatics;
    struct IVisualTreeHelper;
    struct IVisualTreeHelperStatics;
    struct IVisualTreeHelperStatics2;
    struct IVisualTreeHelperStatics3;
    struct IXamlCompositionBrushBase;
    struct IXamlCompositionBrushBaseFactory;
    struct IXamlCompositionBrushBaseOverrides;
    struct IXamlCompositionBrushBaseProtected;
    struct IXamlCompositionBrushBaseStatics;
    struct IXamlLight;
    struct IXamlLightFactory;
    struct IXamlLightOverrides;
    struct IXamlLightProtected;
    struct IXamlLightStatics;
    struct AcrylicBrush;
    struct ArcSegment;
    struct BezierSegment;
    struct BitmapCache;
    struct Brush;
    struct BrushCollection;
    struct CacheMode;
    struct CompositeTransform;
    struct CompositionTarget;
    struct DoubleCollection;
    struct EllipseGeometry;
    struct FontFamily;
    struct GeneralTransform;
    struct Geometry;
    struct GeometryCollection;
    struct GeometryGroup;
    struct GradientBrush;
    struct GradientStop;
    struct GradientStopCollection;
    struct ImageBrush;
    struct ImageSource;
    struct LineGeometry;
    struct LineSegment;
    struct LinearGradientBrush;
    struct LoadedImageSourceLoadCompletedEventArgs;
    struct LoadedImageSurface;
    struct Matrix3DProjection;
    struct MatrixHelper;
    struct MatrixTransform;
    struct MediaTransportControlsThumbnailRequestedEventArgs;
    struct PartialMediaFailureDetectedEventArgs;
    struct PathFigure;
    struct PathFigureCollection;
    struct PathGeometry;
    struct PathSegment;
    struct PathSegmentCollection;
    struct PlaneProjection;
    struct PointCollection;
    struct PolyBezierSegment;
    struct PolyLineSegment;
    struct PolyQuadraticBezierSegment;
    struct Projection;
    struct QuadraticBezierSegment;
    struct RateChangedRoutedEventArgs;
    struct RectangleGeometry;
    struct RenderedEventArgs;
    struct RenderingEventArgs;
    struct RevealBackgroundBrush;
    struct RevealBorderBrush;
    struct RevealBrush;
    struct RotateTransform;
    struct ScaleTransform;
    struct Shadow;
    struct SkewTransform;
    struct SolidColorBrush;
    struct ThemeShadow;
    struct TileBrush;
    struct TimelineMarker;
    struct TimelineMarkerCollection;
    struct TimelineMarkerRoutedEventArgs;
    struct Transform;
    struct TransformCollection;
    struct TransformGroup;
    struct TranslateTransform;
    struct VisualTreeHelper;
    struct XamlCompositionBrushBase;
    struct XamlLight;
    struct Matrix;
    struct RateChangedRoutedEventHandler;
    struct TimelineMarkerRoutedEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Media::IAcrylicBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IAcrylicBrush2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IAcrylicBrushFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IAcrylicBrushStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IAcrylicBrushStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IArcSegment>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IArcSegmentStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IBezierSegment>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IBezierSegmentStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IBitmapCache>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IBrushFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IBrushOverrides2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IBrushStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ICacheMode>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ICacheModeFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ICompositeTransform>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ICompositeTransformStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ICompositionTarget>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ICompositionTargetStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ICompositionTargetStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IEllipseGeometry>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IEllipseGeometryStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IFontFamily>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IFontFamilyFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IFontFamilyStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IGeneralTransform>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IGeneralTransformFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IGeneralTransformOverrides>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IGeometry>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IGeometryFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IGeometryGroup>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IGeometryGroupStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IGeometryStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IGradientBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IGradientBrushFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IGradientBrushStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IGradientStop>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IGradientStopStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IImageBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IImageBrushStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IImageSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IImageSourceFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ILineGeometry>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ILineGeometryStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ILineSegment>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ILineSegmentStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ILinearGradientBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ILinearGradientBrushFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ILinearGradientBrushStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ILoadedImageSurface>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IMatrix3DProjection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IMatrix3DProjectionStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IMatrixHelper>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IMatrixHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IMatrixTransform>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IMatrixTransformStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IPathFigure>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IPathFigureStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IPathGeometry>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IPathGeometryStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IPathSegment>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IPathSegmentFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IPlaneProjection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IPlaneProjectionStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IPolyBezierSegment>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IPolyBezierSegmentStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IPolyLineSegment>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IPolyLineSegmentStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IProjection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IProjectionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IQuadraticBezierSegment>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IRectangleGeometry>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IRectangleGeometryStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IRenderedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IRenderingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IRevealBackgroundBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IRevealBorderBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IRevealBorderBrushFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IRevealBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IRevealBrushFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IRevealBrushStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IRotateTransform>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IRotateTransformStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IScaleTransform>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IScaleTransformStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IShadow>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IShadowFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ISkewTransform>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ISkewTransformStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ISolidColorBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ISolidColorBrushFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ISolidColorBrushStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IThemeShadow>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IThemeShadowFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ITileBrush>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ITileBrushFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ITileBrushStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ITimelineMarker>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ITimelineMarkerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ITransform>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ITransformFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ITransformGroup>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ITransformGroupStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ITranslateTransform>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ITranslateTransformStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IVisualTreeHelper>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IVisualTreeHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IVisualTreeHelperStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IVisualTreeHelperStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IXamlCompositionBrushBase>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IXamlLight>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IXamlLightFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IXamlLightOverrides>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IXamlLightProtected>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::IXamlLightStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::AcrylicBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ArcSegment>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::BezierSegment>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::BitmapCache>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Brush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::BrushCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::CacheMode>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::CompositeTransform>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::CompositionTarget>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::DoubleCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::EllipseGeometry>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::FontFamily>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::GeneralTransform>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Geometry>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::GeometryCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::GeometryGroup>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::GradientBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::GradientStop>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::GradientStopCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ImageBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ImageSource>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::LineGeometry>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::LineSegment>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::LinearGradientBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::LoadedImageSurface>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Matrix3DProjection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::MatrixHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::MatrixTransform>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::PathFigure>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::PathFigureCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::PathGeometry>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::PathSegment>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::PathSegmentCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::PlaneProjection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::PointCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::PolyBezierSegment>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::PolyLineSegment>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::PolyQuadraticBezierSegment>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Projection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::QuadraticBezierSegment>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::RateChangedRoutedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::RectangleGeometry>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::RenderedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::RenderingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::RevealBackgroundBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::RevealBorderBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::RevealBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::RotateTransform>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ScaleTransform>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Shadow>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::SkewTransform>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::SolidColorBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ThemeShadow>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::TileBrush>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::TimelineMarker>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::TimelineMarkerCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Transform>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::TransformCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::TransformGroup>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::TranslateTransform>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::VisualTreeHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::XamlCompositionBrushBase>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::XamlLight>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::AcrylicBackgroundSource>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::AlignmentX>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::AlignmentY>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::AudioCategory>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::AudioDeviceType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::BrushMappingMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ColorInterpolationMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::ElementCompositeMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::FastPlayFallbackBehaviour>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::FillRule>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::GradientSpreadMethod>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::LoadedImageSourceLoadStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::MediaCanPlayResponse>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::MediaElementState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::PenLineCap>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::PenLineJoin>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::RevealBrushState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Stereo3DVideoPackingMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Stereo3DVideoRenderMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Stretch>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::StyleSimulations>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::SweepDirection>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Matrix>
    {
        using type = struct_category<double, double, double, double, double, double>;
    };
    template <> struct category<Windows::UI::Xaml::Media::RateChangedRoutedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::TimelineMarkerRoutedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct name<Windows::UI::Xaml::Media::IAcrylicBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IAcrylicBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IAcrylicBrush2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IAcrylicBrush2" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IAcrylicBrushFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IAcrylicBrushFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IAcrylicBrushStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IAcrylicBrushStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IAcrylicBrushStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IAcrylicBrushStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IArcSegment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IArcSegment" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IArcSegmentStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IArcSegmentStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IBezierSegment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IBezierSegment" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IBezierSegmentStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IBezierSegmentStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IBitmapCache>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IBitmapCache" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IBrushFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IBrushFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IBrushOverrides2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IBrushOverrides2" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IBrushStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IBrushStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ICacheMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ICacheMode" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ICacheModeFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ICacheModeFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ICompositeTransform>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ICompositeTransform" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ICompositeTransformStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ICompositeTransformStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ICompositionTarget>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ICompositionTarget" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ICompositionTargetStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ICompositionTargetStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ICompositionTargetStatics3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ICompositionTargetStatics3" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IEllipseGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IEllipseGeometry" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IEllipseGeometryStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IEllipseGeometryStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IFontFamily>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IFontFamily" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IFontFamilyFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IFontFamilyFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IFontFamilyStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IFontFamilyStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IGeneralTransform>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IGeneralTransform" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IGeneralTransformFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IGeneralTransformFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IGeneralTransformOverrides>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IGeneralTransformOverrides" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IGeometry" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IGeometryFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IGeometryFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IGeometryGroup>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IGeometryGroup" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IGeometryGroupStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IGeometryGroupStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IGeometryStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IGeometryStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IGradientBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IGradientBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IGradientBrushFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IGradientBrushFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IGradientBrushStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IGradientBrushStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IGradientStop>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IGradientStop" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IGradientStopStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IGradientStopStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IImageBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IImageBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IImageBrushStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IImageBrushStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IImageSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IImageSource" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IImageSourceFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IImageSourceFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ILineGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ILineGeometry" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ILineGeometryStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ILineGeometryStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ILineSegment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ILineSegment" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ILineSegmentStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ILineSegmentStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ILinearGradientBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ILinearGradientBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ILinearGradientBrushFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ILinearGradientBrushFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ILinearGradientBrushStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ILinearGradientBrushStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ILoadedImageSourceLoadCompletedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ILoadedImageSurface>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ILoadedImageSurface" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ILoadedImageSurfaceStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IMatrix3DProjection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IMatrix3DProjection" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IMatrix3DProjectionStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IMatrix3DProjectionStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IMatrixHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IMatrixHelper" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IMatrixHelperStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IMatrixHelperStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IMatrixTransform>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IMatrixTransform" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IMatrixTransformStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IMatrixTransformStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IMediaTransportControlsThumbnailRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IPartialMediaFailureDetectedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IPartialMediaFailureDetectedEventArgs2" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IPathFigure>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IPathFigure" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IPathFigureStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IPathFigureStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IPathGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IPathGeometry" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IPathGeometryStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IPathGeometryStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IPathSegment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IPathSegment" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IPathSegmentFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IPathSegmentFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IPlaneProjection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IPlaneProjection" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IPlaneProjectionStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IPlaneProjectionStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IPolyBezierSegment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IPolyBezierSegment" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IPolyBezierSegmentStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IPolyBezierSegmentStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IPolyLineSegment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IPolyLineSegment" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IPolyLineSegmentStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IPolyLineSegmentStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IPolyQuadraticBezierSegment" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IPolyQuadraticBezierSegmentStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IProjection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IProjection" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IProjectionFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IProjectionFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IQuadraticBezierSegment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IQuadraticBezierSegment" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IQuadraticBezierSegmentStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IRateChangedRoutedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IRectangleGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IRectangleGeometry" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IRectangleGeometryStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IRectangleGeometryStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IRenderedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IRenderedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IRenderingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IRenderingEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IRevealBackgroundBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IRevealBackgroundBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IRevealBackgroundBrushFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IRevealBorderBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IRevealBorderBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IRevealBorderBrushFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IRevealBorderBrushFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IRevealBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IRevealBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IRevealBrushFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IRevealBrushFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IRevealBrushStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IRevealBrushStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IRotateTransform>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IRotateTransform" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IRotateTransformStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IRotateTransformStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IScaleTransform>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IScaleTransform" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IScaleTransformStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IScaleTransformStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IShadow>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IShadow" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IShadowFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IShadowFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ISkewTransform>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ISkewTransform" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ISkewTransformStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ISkewTransformStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ISolidColorBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ISolidColorBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ISolidColorBrushFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ISolidColorBrushFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ISolidColorBrushStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ISolidColorBrushStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IThemeShadow>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IThemeShadow" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IThemeShadowFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IThemeShadowFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ITileBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ITileBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ITileBrushFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ITileBrushFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ITileBrushStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ITileBrushStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ITimelineMarker>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ITimelineMarker" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ITimelineMarkerRoutedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ITimelineMarkerStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ITimelineMarkerStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ITransform>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ITransform" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ITransformFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ITransformFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ITransformGroup>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ITransformGroup" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ITransformGroupStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ITransformGroupStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ITranslateTransform>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ITranslateTransform" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ITranslateTransformStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ITranslateTransformStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IVisualTreeHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IVisualTreeHelper" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IVisualTreeHelperStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IVisualTreeHelperStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IVisualTreeHelperStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IVisualTreeHelperStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IVisualTreeHelperStatics3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IVisualTreeHelperStatics3" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IXamlCompositionBrushBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IXamlCompositionBrushBase" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IXamlCompositionBrushBaseFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IXamlCompositionBrushBaseOverrides" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IXamlCompositionBrushBaseProtected" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IXamlCompositionBrushBaseStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IXamlLight>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IXamlLight" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IXamlLightFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IXamlLightFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IXamlLightOverrides>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IXamlLightOverrides" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IXamlLightProtected>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IXamlLightProtected" };
    };
    template <> struct name<Windows::UI::Xaml::Media::IXamlLightStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.IXamlLightStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::AcrylicBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.AcrylicBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ArcSegment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ArcSegment" };
    };
    template <> struct name<Windows::UI::Xaml::Media::BezierSegment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.BezierSegment" };
    };
    template <> struct name<Windows::UI::Xaml::Media::BitmapCache>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.BitmapCache" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Brush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Brush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::BrushCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.BrushCollection" };
    };
    template <> struct name<Windows::UI::Xaml::Media::CacheMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.CacheMode" };
    };
    template <> struct name<Windows::UI::Xaml::Media::CompositeTransform>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.CompositeTransform" };
    };
    template <> struct name<Windows::UI::Xaml::Media::CompositionTarget>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.CompositionTarget" };
    };
    template <> struct name<Windows::UI::Xaml::Media::DoubleCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.DoubleCollection" };
    };
    template <> struct name<Windows::UI::Xaml::Media::EllipseGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.EllipseGeometry" };
    };
    template <> struct name<Windows::UI::Xaml::Media::FontFamily>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.FontFamily" };
    };
    template <> struct name<Windows::UI::Xaml::Media::GeneralTransform>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.GeneralTransform" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Geometry>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Geometry" };
    };
    template <> struct name<Windows::UI::Xaml::Media::GeometryCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.GeometryCollection" };
    };
    template <> struct name<Windows::UI::Xaml::Media::GeometryGroup>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.GeometryGroup" };
    };
    template <> struct name<Windows::UI::Xaml::Media::GradientBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.GradientBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::GradientStop>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.GradientStop" };
    };
    template <> struct name<Windows::UI::Xaml::Media::GradientStopCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.GradientStopCollection" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ImageBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ImageBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ImageSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ImageSource" };
    };
    template <> struct name<Windows::UI::Xaml::Media::LineGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.LineGeometry" };
    };
    template <> struct name<Windows::UI::Xaml::Media::LineSegment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.LineSegment" };
    };
    template <> struct name<Windows::UI::Xaml::Media::LinearGradientBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.LinearGradientBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.LoadedImageSourceLoadCompletedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Media::LoadedImageSurface>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.LoadedImageSurface" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Matrix3DProjection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Matrix3DProjection" };
    };
    template <> struct name<Windows::UI::Xaml::Media::MatrixHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.MatrixHelper" };
    };
    template <> struct name<Windows::UI::Xaml::Media::MatrixTransform>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.MatrixTransform" };
    };
    template <> struct name<Windows::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.MediaTransportControlsThumbnailRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.PartialMediaFailureDetectedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Media::PathFigure>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.PathFigure" };
    };
    template <> struct name<Windows::UI::Xaml::Media::PathFigureCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.PathFigureCollection" };
    };
    template <> struct name<Windows::UI::Xaml::Media::PathGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.PathGeometry" };
    };
    template <> struct name<Windows::UI::Xaml::Media::PathSegment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.PathSegment" };
    };
    template <> struct name<Windows::UI::Xaml::Media::PathSegmentCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.PathSegmentCollection" };
    };
    template <> struct name<Windows::UI::Xaml::Media::PlaneProjection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.PlaneProjection" };
    };
    template <> struct name<Windows::UI::Xaml::Media::PointCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.PointCollection" };
    };
    template <> struct name<Windows::UI::Xaml::Media::PolyBezierSegment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.PolyBezierSegment" };
    };
    template <> struct name<Windows::UI::Xaml::Media::PolyLineSegment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.PolyLineSegment" };
    };
    template <> struct name<Windows::UI::Xaml::Media::PolyQuadraticBezierSegment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.PolyQuadraticBezierSegment" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Projection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Projection" };
    };
    template <> struct name<Windows::UI::Xaml::Media::QuadraticBezierSegment>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.QuadraticBezierSegment" };
    };
    template <> struct name<Windows::UI::Xaml::Media::RateChangedRoutedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.RateChangedRoutedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Media::RectangleGeometry>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.RectangleGeometry" };
    };
    template <> struct name<Windows::UI::Xaml::Media::RenderedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.RenderedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Media::RenderingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.RenderingEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Media::RevealBackgroundBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.RevealBackgroundBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::RevealBorderBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.RevealBorderBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::RevealBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.RevealBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::RotateTransform>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.RotateTransform" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ScaleTransform>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ScaleTransform" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Shadow>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Shadow" };
    };
    template <> struct name<Windows::UI::Xaml::Media::SkewTransform>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.SkewTransform" };
    };
    template <> struct name<Windows::UI::Xaml::Media::SolidColorBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.SolidColorBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ThemeShadow>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ThemeShadow" };
    };
    template <> struct name<Windows::UI::Xaml::Media::TileBrush>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.TileBrush" };
    };
    template <> struct name<Windows::UI::Xaml::Media::TimelineMarker>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.TimelineMarker" };
    };
    template <> struct name<Windows::UI::Xaml::Media::TimelineMarkerCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.TimelineMarkerCollection" };
    };
    template <> struct name<Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.TimelineMarkerRoutedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Transform>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Transform" };
    };
    template <> struct name<Windows::UI::Xaml::Media::TransformCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.TransformCollection" };
    };
    template <> struct name<Windows::UI::Xaml::Media::TransformGroup>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.TransformGroup" };
    };
    template <> struct name<Windows::UI::Xaml::Media::TranslateTransform>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.TranslateTransform" };
    };
    template <> struct name<Windows::UI::Xaml::Media::VisualTreeHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.VisualTreeHelper" };
    };
    template <> struct name<Windows::UI::Xaml::Media::XamlCompositionBrushBase>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.XamlCompositionBrushBase" };
    };
    template <> struct name<Windows::UI::Xaml::Media::XamlLight>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.XamlLight" };
    };
    template <> struct name<Windows::UI::Xaml::Media::AcrylicBackgroundSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.AcrylicBackgroundSource" };
    };
    template <> struct name<Windows::UI::Xaml::Media::AlignmentX>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.AlignmentX" };
    };
    template <> struct name<Windows::UI::Xaml::Media::AlignmentY>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.AlignmentY" };
    };
    template <> struct name<Windows::UI::Xaml::Media::AudioCategory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.AudioCategory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::AudioDeviceType>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.AudioDeviceType" };
    };
    template <> struct name<Windows::UI::Xaml::Media::BrushMappingMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.BrushMappingMode" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ColorInterpolationMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ColorInterpolationMode" };
    };
    template <> struct name<Windows::UI::Xaml::Media::ElementCompositeMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.ElementCompositeMode" };
    };
    template <> struct name<Windows::UI::Xaml::Media::FastPlayFallbackBehaviour>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.FastPlayFallbackBehaviour" };
    };
    template <> struct name<Windows::UI::Xaml::Media::FillRule>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.FillRule" };
    };
    template <> struct name<Windows::UI::Xaml::Media::GradientSpreadMethod>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.GradientSpreadMethod" };
    };
    template <> struct name<Windows::UI::Xaml::Media::LoadedImageSourceLoadStatus>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.LoadedImageSourceLoadStatus" };
    };
    template <> struct name<Windows::UI::Xaml::Media::MediaCanPlayResponse>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.MediaCanPlayResponse" };
    };
    template <> struct name<Windows::UI::Xaml::Media::MediaElementState>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.MediaElementState" };
    };
    template <> struct name<Windows::UI::Xaml::Media::PenLineCap>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.PenLineCap" };
    };
    template <> struct name<Windows::UI::Xaml::Media::PenLineJoin>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.PenLineJoin" };
    };
    template <> struct name<Windows::UI::Xaml::Media::RevealBrushState>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.RevealBrushState" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Stereo3DVideoPackingMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Stereo3DVideoPackingMode" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Stereo3DVideoRenderMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Stereo3DVideoRenderMode" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Stretch>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Stretch" };
    };
    template <> struct name<Windows::UI::Xaml::Media::StyleSimulations>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.StyleSimulations" };
    };
    template <> struct name<Windows::UI::Xaml::Media::SweepDirection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.SweepDirection" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Matrix>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Matrix" };
    };
    template <> struct name<Windows::UI::Xaml::Media::RateChangedRoutedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.RateChangedRoutedEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::Media::TimelineMarkerRoutedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.TimelineMarkerRoutedEventHandler" };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IAcrylicBrush>
    {
        static constexpr guid value{ 0x79BBCF4E,0xCD66,0x4F1B,{ 0xA8,0xB6,0xCD,0x6D,0x29,0x77,0xC1,0x8D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IAcrylicBrush2>
    {
        static constexpr guid value{ 0xC9645383,0xB19E,0x5AC0,{ 0x86,0xFF,0x3D,0x90,0x50,0x6D,0xBC,0xDA } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IAcrylicBrushFactory>
    {
        static constexpr guid value{ 0x81A32568,0xF6CC,0x4013,{ 0x83,0x63,0x92,0x8A,0xE2,0x3B,0x7A,0x61 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IAcrylicBrushStatics>
    {
        static constexpr guid value{ 0x2787FD79,0xA3DA,0x423F,{ 0xB8,0x1A,0x59,0x91,0x47,0x97,0x15,0x23 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IAcrylicBrushStatics2>
    {
        static constexpr guid value{ 0x129188A8,0xBF11,0x5BBC,{ 0x84,0x45,0x8C,0x51,0x0E,0x59,0x26,0xC0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IArcSegment>
    {
        static constexpr guid value{ 0x07940C5F,0x63FB,0x4469,{ 0x91,0xBE,0xF1,0x09,0x7C,0x16,0x80,0x52 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IArcSegmentStatics>
    {
        static constexpr guid value{ 0x82348F6E,0x8A69,0x4204,{ 0x9C,0x12,0x72,0x07,0xDF,0x31,0x76,0x43 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IBezierSegment>
    {
        static constexpr guid value{ 0xAF4BB9EE,0x8984,0x49B7,{ 0x81,0xDF,0x3F,0x35,0x99,0x4B,0x95,0xEB } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IBezierSegmentStatics>
    {
        static constexpr guid value{ 0xC0287BAC,0x1410,0x4530,{ 0x84,0x52,0x1C,0x9D,0x0A,0xD1,0xF3,0x41 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IBitmapCache>
    {
        static constexpr guid value{ 0x79C2219E,0x44D2,0x4610,{ 0x97,0x35,0x9B,0xEC,0x83,0x80,0x9E,0xCF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IBrush>
    {
        static constexpr guid value{ 0x8806A321,0x1E06,0x422C,{ 0xA1,0xCC,0x01,0x69,0x65,0x59,0xE0,0x21 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IBrushFactory>
    {
        static constexpr guid value{ 0x399658A2,0x14FB,0x4B8F,{ 0x83,0xE6,0x6E,0x3D,0xAB,0x12,0x06,0x9B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IBrushOverrides2>
    {
        static constexpr guid value{ 0xD092B151,0xD83B,0x5A81,{ 0xA7,0x1E,0xA1,0xC7,0xF8,0xAD,0x69,0x63 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IBrushStatics>
    {
        static constexpr guid value{ 0xE70C3102,0x0225,0x47F5,{ 0xB2,0x2E,0x04,0x67,0x61,0x9F,0x6A,0x22 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ICacheMode>
    {
        static constexpr guid value{ 0x98DC8B11,0xC6F9,0x4DAB,{ 0xB8,0x38,0x5F,0xD5,0xEC,0x8C,0x73,0x50 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ICacheModeFactory>
    {
        static constexpr guid value{ 0xEB1F8C5B,0x0ABB,0x4E70,{ 0xB8,0xA8,0x62,0x0D,0x0D,0x95,0x3A,0xB2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ICompositeTransform>
    {
        static constexpr guid value{ 0xC8A4385B,0xF24A,0x4701,{ 0xA2,0x65,0xA7,0x88,0x46,0xF1,0x42,0xB9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ICompositeTransformStatics>
    {
        static constexpr guid value{ 0x2F190C08,0x8266,0x496F,{ 0x96,0x53,0xA1,0x8B,0xD4,0xF8,0x36,0xAA } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ICompositionTarget>
    {
        static constexpr guid value{ 0x26CFBFF0,0x713C,0x4BEC,{ 0x88,0x03,0xE1,0x01,0xF7,0xB1,0x4E,0xD3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ICompositionTargetStatics>
    {
        static constexpr guid value{ 0x2B1AF03D,0x1ED2,0x4B59,{ 0xBD,0x00,0x75,0x94,0xEE,0x92,0x83,0x2B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ICompositionTargetStatics3>
    {
        static constexpr guid value{ 0xBC0A7CD9,0x6750,0x4708,{ 0x99,0x4C,0x20,0x28,0xE0,0x31,0x2A,0xC8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IEllipseGeometry>
    {
        static constexpr guid value{ 0xD4F61BBA,0x4EA2,0x40D6,{ 0xAA,0x6C,0x8D,0x38,0xAA,0x87,0x65,0x1F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IEllipseGeometryStatics>
    {
        static constexpr guid value{ 0x1744DB47,0xF635,0x4B16,{ 0xAE,0xE6,0xE0,0x52,0xA6,0x5D,0xEF,0xB2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IFontFamily>
    {
        static constexpr guid value{ 0x92467E64,0xD66A,0x4CF4,{ 0x93,0x22,0x3D,0x23,0xB3,0xC0,0xC3,0x61 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IFontFamilyFactory>
    {
        static constexpr guid value{ 0xD5603377,0x3DAE,0x4DCD,{ 0xAF,0x09,0xF9,0x49,0x8E,0x9E,0xC6,0x59 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IFontFamilyStatics2>
    {
        static constexpr guid value{ 0x52AD7AF9,0x37E6,0x4297,{ 0xA2,0x38,0x97,0xFB,0x6A,0x40,0x8D,0x9E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IGeneralTransform>
    {
        static constexpr guid value{ 0xA06798B7,0xA2EC,0x415F,{ 0xAD,0xE2,0xEA,0xDE,0x93,0x33,0xF2,0xC7 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IGeneralTransformFactory>
    {
        static constexpr guid value{ 0x7A25C930,0x29C4,0x4E31,{ 0xB6,0xF9,0xDE,0xDD,0x52,0xE4,0xDF,0x1B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IGeneralTransformOverrides>
    {
        static constexpr guid value{ 0x4F121083,0x24CF,0x4524,{ 0x90,0xAD,0x8A,0x42,0xB1,0xC1,0x27,0x83 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IGeometry>
    {
        static constexpr guid value{ 0xFA123889,0x0ACD,0x417B,{ 0xB6,0x2D,0x5C,0xA1,0xBF,0x4D,0xFC,0x0E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IGeometryFactory>
    {
        static constexpr guid value{ 0xF65DAF23,0xD5FD,0x42F9,{ 0xB3,0x2A,0x92,0x9C,0x5A,0x4B,0x54,0xE1 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IGeometryGroup>
    {
        static constexpr guid value{ 0x55225A61,0x8677,0x4C8C,{ 0x8E,0x46,0xEE,0x3D,0xC3,0x55,0x11,0x4B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IGeometryGroupStatics>
    {
        static constexpr guid value{ 0x56C955F4,0x8496,0x4BB6,{ 0xAB,0xF0,0x61,0x7B,0x1F,0xE7,0x8B,0x45 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IGeometryStatics>
    {
        static constexpr guid value{ 0x7A70AA8C,0x0B06,0x465F,{ 0xB6,0x37,0x9A,0x47,0xE5,0xA7,0x01,0x11 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IGradientBrush>
    {
        static constexpr guid value{ 0x2166E69F,0x935A,0x4191,{ 0x8E,0x3C,0x1C,0x8D,0xFD,0xFC,0xDC,0x78 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IGradientBrushFactory>
    {
        static constexpr guid value{ 0xED4779CA,0x45BD,0x4131,{ 0xB6,0x25,0xBE,0x86,0xE0,0x7C,0x61,0x12 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IGradientBrushStatics>
    {
        static constexpr guid value{ 0x961661F9,0x8BB4,0x4E6C,{ 0xB9,0x23,0xB5,0xD7,0x87,0xE0,0xF1,0xA9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IGradientStop>
    {
        static constexpr guid value{ 0x665F44FE,0x2E59,0x4C4A,{ 0xAB,0x53,0x07,0x6A,0x10,0x0C,0xCD,0x81 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IGradientStopStatics>
    {
        static constexpr guid value{ 0x602A6D75,0x6193,0x4FE5,{ 0x8E,0x82,0xC7,0xC6,0xF6,0xFE,0xBA,0xFD } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IImageBrush>
    {
        static constexpr guid value{ 0x9FD11377,0xC12A,0x4493,{ 0xBF,0x7D,0xF3,0xA8,0xAD,0x74,0xB5,0x54 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IImageBrushStatics>
    {
        static constexpr guid value{ 0x1255B1B2,0xDD18,0x42E5,{ 0x89,0x2C,0xEA,0xE3,0x0C,0x30,0x5B,0x8C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IImageSource>
    {
        static constexpr guid value{ 0x737EF309,0xEA41,0x4D96,{ 0xA7,0x1C,0x98,0xE9,0x8E,0xFC,0xAB,0x07 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IImageSourceFactory>
    {
        static constexpr guid value{ 0x297EC001,0x2540,0x4E5A,{ 0xAB,0x66,0x88,0x03,0x5D,0xD3,0xDD,0xB5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ILineGeometry>
    {
        static constexpr guid value{ 0x30EDD4A2,0x8FC5,0x40AF,{ 0xA7,0xA2,0xC2,0x7F,0xE7,0xAA,0x13,0x63 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ILineGeometryStatics>
    {
        static constexpr guid value{ 0x578AE763,0x5562,0x4EE4,{ 0x87,0x03,0xEA,0x40,0x36,0xD8,0x91,0xE3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ILineSegment>
    {
        static constexpr guid value{ 0xEF6A2E25,0x3FF0,0x4420,{ 0xA4,0x11,0x71,0x82,0xA4,0xCE,0xCB,0x15 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ILineSegmentStatics>
    {
        static constexpr guid value{ 0x9FCAB141,0x04C0,0x4AFB,{ 0x87,0xB3,0xE8,0x00,0xB9,0x69,0xB8,0x94 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ILinearGradientBrush>
    {
        static constexpr guid value{ 0x8E96D16B,0xBB84,0x4C6F,{ 0x9D,0xBF,0x9D,0x6C,0x5C,0x6D,0x9C,0x39 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ILinearGradientBrushFactory>
    {
        static constexpr guid value{ 0x0AE0861C,0x1E7A,0x4FED,{ 0x98,0x57,0xEA,0x8C,0xAA,0x79,0x84,0x90 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ILinearGradientBrushStatics>
    {
        static constexpr guid value{ 0x7AF6E504,0x2DC3,0x40E3,{ 0xBE,0x0B,0xB3,0x14,0xC1,0x3C,0xB9,0x91 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs>
    {
        static constexpr guid value{ 0x1AC60B1E,0x7837,0x4489,{ 0xB3,0xE5,0xD0,0xD5,0xAD,0x0A,0x56,0xC4 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ILoadedImageSurface>
    {
        static constexpr guid value{ 0x050C8313,0x6737,0x45BA,{ 0x85,0x31,0x33,0x09,0x4F,0xEB,0xEF,0x55 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics>
    {
        static constexpr guid value{ 0x22B8EDF6,0x84AD,0x40AB,{ 0x93,0x7D,0x48,0x71,0x61,0x3E,0x76,0x5D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IMatrix3DProjection>
    {
        static constexpr guid value{ 0x6F03E149,0xBFC9,0x4C01,{ 0xB5,0x78,0x50,0x33,0x8C,0xEC,0x97,0xFC } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IMatrix3DProjectionStatics>
    {
        static constexpr guid value{ 0xAE9D5895,0x41EC,0x4E37,{ 0xAB,0xAA,0x69,0xF4,0x1D,0x2F,0x87,0x6B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IMatrixHelper>
    {
        static constexpr guid value{ 0xF3CF4882,0x06B5,0x48C8,{ 0x9E,0xB2,0x17,0x63,0xE9,0x36,0x40,0x38 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IMatrixHelperStatics>
    {
        static constexpr guid value{ 0xC18606A6,0x39F4,0x4B8A,{ 0x84,0x03,0x28,0xE5,0xE5,0xF0,0x33,0xB4 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IMatrixTransform>
    {
        static constexpr guid value{ 0xEDFDD551,0x5FED,0x45FC,{ 0xAE,0x62,0x92,0xA4,0xB6,0xCF,0x97,0x07 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IMatrixTransformStatics>
    {
        static constexpr guid value{ 0x43E02E47,0x15B8,0x4758,{ 0xBB,0x97,0x7D,0x52,0x42,0x0A,0xCC,0x5B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs>
    {
        static constexpr guid value{ 0xE4A8B21C,0xE3C2,0x485C,{ 0xAE,0x69,0xF1,0x53,0x7B,0x76,0x75,0x5A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs>
    {
        static constexpr guid value{ 0x02B65A91,0xE5A1,0x442B,{ 0x88,0xD3,0x2D,0xC1,0x27,0xBF,0xC5,0x9B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2>
    {
        static constexpr guid value{ 0x73074875,0x890D,0x416B,{ 0xB9,0xAE,0xE8,0x4D,0xFD,0x9C,0x4B,0x1B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IPathFigure>
    {
        static constexpr guid value{ 0x5D955C8C,0x5FA9,0x4DDA,{ 0xA3,0xCC,0x10,0xFC,0xDC,0xAA,0x20,0xD7 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IPathFigureStatics>
    {
        static constexpr guid value{ 0xB60591D9,0x2395,0x4317,{ 0x95,0x52,0x3A,0x58,0x52,0x6F,0x8C,0x7B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IPathGeometry>
    {
        static constexpr guid value{ 0x081B9DF8,0xBAE6,0x4BCB,{ 0x81,0x3C,0xBD,0xE0,0xE4,0x6D,0xC8,0xB7 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IPathGeometryStatics>
    {
        static constexpr guid value{ 0xD9E58BBA,0x2CBA,0x4741,{ 0x8F,0x8D,0x31,0x98,0xCF,0x51,0x86,0xB9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IPathSegment>
    {
        static constexpr guid value{ 0xFCFA71CF,0x9CE3,0x474F,{ 0x81,0x57,0x10,0xB6,0x43,0x5A,0x61,0x6B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IPathSegmentFactory>
    {
        static constexpr guid value{ 0x2A1C0AAE,0xECCD,0x4464,{ 0xA1,0x48,0x6F,0xFD,0xB3,0xAA,0x28,0x1F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IPlaneProjection>
    {
        static constexpr guid value{ 0xE6F82BFA,0x6726,0x469A,{ 0xB2,0x59,0xA5,0x18,0x83,0x47,0xCA,0x8F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IPlaneProjectionStatics>
    {
        static constexpr guid value{ 0xAD919C67,0x3BDC,0x4855,{ 0x89,0x69,0xD1,0xF9,0xA3,0xAD,0xC2,0x7D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IPolyBezierSegment>
    {
        static constexpr guid value{ 0x36805271,0x38C4,0x4BCF,{ 0x96,0xCD,0x02,0x8A,0x6D,0x38,0xAF,0x25 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IPolyBezierSegmentStatics>
    {
        static constexpr guid value{ 0x1D91A6DA,0x1492,0x4ACC,{ 0xBD,0x66,0xA4,0x96,0xF3,0xD8,0x29,0xD6 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IPolyLineSegment>
    {
        static constexpr guid value{ 0x4B397F87,0xA2E6,0x479D,{ 0xBD,0xC8,0x6F,0x44,0x64,0x64,0x68,0x87 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IPolyLineSegmentStatics>
    {
        static constexpr guid value{ 0xD64A2C87,0x33F1,0x4E70,{ 0xA4,0x7F,0xB4,0x98,0x1E,0xF6,0x48,0xA2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment>
    {
        static constexpr guid value{ 0xDD5CED7D,0xE6DB,0x4C96,{ 0xB6,0xA1,0x3F,0xCE,0x96,0xE9,0x87,0xA6 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics>
    {
        static constexpr guid value{ 0xFDF5EB75,0x7AD5,0x4C89,{ 0x81,0x69,0x8C,0x97,0x86,0xAB,0xD9,0xEB } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IProjection>
    {
        static constexpr guid value{ 0xB3443557,0x7F39,0x4D04,{ 0xA8,0x9C,0x84,0x43,0x38,0xCA,0xC8,0x97 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IProjectionFactory>
    {
        static constexpr guid value{ 0xC4F29CAB,0x60AD,0x4F24,{ 0xBD,0x27,0x9D,0x69,0xC3,0x12,0x7C,0x9A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IQuadraticBezierSegment>
    {
        static constexpr guid value{ 0x2C509A5B,0xBF18,0x455A,{ 0xA0,0x78,0x91,0x4B,0x52,0x32,0xD8,0xAF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics>
    {
        static constexpr guid value{ 0x69C78278,0x3C0B,0x4B4F,{ 0xB7,0xA2,0xF0,0x03,0xDE,0xD4,0x1B,0xB0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs>
    {
        static constexpr guid value{ 0x9016AA6F,0x3CA8,0x4C80,{ 0x8E,0x2F,0x88,0x51,0xA6,0x8F,0x13,0x1F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IRectangleGeometry>
    {
        static constexpr guid value{ 0xA25A1F58,0xC575,0x4196,{ 0x91,0xCF,0x9F,0xDF,0xB1,0x04,0x45,0xC3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IRectangleGeometryStatics>
    {
        static constexpr guid value{ 0x377F8DBA,0x7902,0x48E3,{ 0x83,0xBE,0x7C,0x80,0x02,0xA6,0x65,0x3C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IRenderedEventArgs>
    {
        static constexpr guid value{ 0xE349817D,0x81C7,0x4938,{ 0x82,0x8C,0xA7,0xE2,0x79,0x7B,0x35,0xA6 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IRenderingEventArgs>
    {
        static constexpr guid value{ 0x5BF7D30D,0x9748,0x4AED,{ 0x83,0x80,0xD7,0x89,0x0E,0xB7,0x76,0xA0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IRevealBackgroundBrush>
    {
        static constexpr guid value{ 0x261DCC0E,0x1991,0x4CDF,{ 0xAE,0xE0,0x63,0x50,0xA3,0xF9,0x0B,0xB9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory>
    {
        static constexpr guid value{ 0x8C56BCAA,0x02A5,0x4F45,{ 0x85,0x06,0x8D,0x39,0x22,0x8F,0x5D,0x3F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IRevealBorderBrush>
    {
        static constexpr guid value{ 0x060BA115,0xC542,0x483C,{ 0x82,0x02,0x5F,0x03,0x33,0x18,0x66,0xC9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IRevealBorderBrushFactory>
    {
        static constexpr guid value{ 0x94C25298,0xF5F8,0x4482,{ 0xA2,0x5C,0x67,0x58,0x50,0x1A,0x86,0x26 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IRevealBrush>
    {
        static constexpr guid value{ 0x2036A0ED,0x8271,0x4398,{ 0x90,0x19,0x25,0x87,0x20,0x93,0xF1,0x3F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IRevealBrushFactory>
    {
        static constexpr guid value{ 0x9D9379CE,0xE3A0,0x4AAF,{ 0xBE,0x37,0xEA,0x9D,0x9D,0xD4,0x31,0x05 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IRevealBrushStatics>
    {
        static constexpr guid value{ 0x190F2625,0x7209,0x4D42,{ 0xA8,0x47,0x1A,0xC4,0xBB,0xBB,0x34,0x99 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IRotateTransform>
    {
        static constexpr guid value{ 0x688EA9B9,0x1E4E,0x4596,{ 0x86,0xE3,0x42,0x8B,0x27,0x33,0x4F,0xAF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IRotateTransformStatics>
    {
        static constexpr guid value{ 0xA131EB8A,0x51A3,0x41B6,{ 0xB9,0xD3,0xA1,0x0E,0x42,0x90,0x54,0xAB } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IScaleTransform>
    {
        static constexpr guid value{ 0xED67F18D,0x936E,0x43AB,{ 0x92,0x9A,0xE9,0xCD,0x0A,0x51,0x1E,0x52 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IScaleTransformStatics>
    {
        static constexpr guid value{ 0x9D9436F4,0x40A7,0x46DD,{ 0x97,0x5A,0x07,0xD3,0x37,0xCD,0x85,0x2E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IShadow>
    {
        static constexpr guid value{ 0x6813A583,0xF3B4,0x5FCF,{ 0x86,0x94,0x2C,0xD0,0xAE,0xFC,0x2F,0xAD } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IShadowFactory>
    {
        static constexpr guid value{ 0x19899F25,0xD28B,0x51E6,{ 0x94,0xB0,0xD7,0xE7,0x09,0x68,0x63,0x05 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ISkewTransform>
    {
        static constexpr guid value{ 0x4E8A3B15,0x7A0F,0x4617,{ 0x9E,0x98,0x1E,0x65,0xBD,0xC9,0x21,0x15 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ISkewTransformStatics>
    {
        static constexpr guid value{ 0xECD11D73,0x5614,0x4B31,{ 0xB6,0xAF,0xBE,0xAE,0x10,0x10,0x56,0x24 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ISolidColorBrush>
    {
        static constexpr guid value{ 0x9D850850,0x66F3,0x48DF,{ 0x9A,0x8F,0x82,0x4B,0xD5,0xE0,0x70,0xAF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ISolidColorBrushFactory>
    {
        static constexpr guid value{ 0xD935CE0C,0x86F5,0x4DA6,{ 0x8A,0x27,0xB1,0x61,0x9E,0xF7,0xF9,0x2B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ISolidColorBrushStatics>
    {
        static constexpr guid value{ 0xE1A65EFA,0x2B23,0x41BA,{ 0xB9,0xBA,0x70,0x94,0xEC,0x8E,0x4E,0x9F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IThemeShadow>
    {
        static constexpr guid value{ 0x3ECCAD09,0x7985,0x5F39,{ 0x8B,0x62,0x6C,0x10,0x69,0x6D,0xCA,0x6F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IThemeShadowFactory>
    {
        static constexpr guid value{ 0x2E71465D,0x0F67,0x590E,{ 0x83,0x1B,0x7E,0x5E,0x2A,0x32,0xB7,0x78 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ITileBrush>
    {
        static constexpr guid value{ 0xC201CF06,0xCD84,0x48A5,{ 0x96,0x07,0x66,0x4D,0x73,0x61,0xCD,0x61 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ITileBrushFactory>
    {
        static constexpr guid value{ 0xAA159F7C,0xED6A,0x4FB3,{ 0xB0,0x14,0xB5,0xC7,0xE3,0x79,0xA4,0xDE } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ITileBrushStatics>
    {
        static constexpr guid value{ 0x3497C25B,0xB562,0x4E68,{ 0x84,0x35,0x23,0x99,0xF6,0xEB,0x94,0xD5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ITimelineMarker>
    {
        static constexpr guid value{ 0xA68EF02D,0x45BA,0x4E50,{ 0x8C,0xAD,0xAA,0xEA,0x3A,0x22,0x7A,0xF5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs>
    {
        static constexpr guid value{ 0x7C3B3EF3,0x2C88,0x4D9C,{ 0x99,0xB6,0x46,0xCD,0xBD,0x48,0xD4,0xC1 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ITimelineMarkerStatics>
    {
        static constexpr guid value{ 0xC4AEF0C6,0x16A3,0x484B,{ 0x87,0xF5,0x65,0x28,0xB8,0xF0,0x4A,0x47 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ITransform>
    {
        static constexpr guid value{ 0x4DF74078,0xBFD6,0x4ED1,{ 0x96,0x82,0xD2,0xFD,0x8B,0xF2,0xFE,0x6F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ITransformFactory>
    {
        static constexpr guid value{ 0x1A955A66,0x7CF4,0x4320,{ 0xB4,0x16,0x61,0x81,0x19,0x2F,0xCC,0x6D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ITransformGroup>
    {
        static constexpr guid value{ 0x63418CCC,0x8D2D,0x4737,{ 0xB9,0x51,0x2A,0xFC,0xE1,0xDD,0xC4,0xC4 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ITransformGroupStatics>
    {
        static constexpr guid value{ 0x25312F2A,0xCFAB,0x4B24,{ 0x97,0x13,0x5B,0xDE,0xAD,0x19,0x29,0xC0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ITranslateTransform>
    {
        static constexpr guid value{ 0xC975905C,0x3C36,0x4229,{ 0x81,0x7B,0x17,0x8F,0x64,0xC0,0xE1,0x13 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::ITranslateTransformStatics>
    {
        static constexpr guid value{ 0xF419AA91,0xE042,0x4111,{ 0x9C,0x2F,0xD2,0x01,0x30,0x41,0x23,0xDD } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IVisualTreeHelper>
    {
        static constexpr guid value{ 0x24B935E3,0x52C7,0x4141,{ 0x8B,0xAC,0xA7,0x3D,0x06,0x13,0x05,0x69 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IVisualTreeHelperStatics>
    {
        static constexpr guid value{ 0xE75758C4,0xD25D,0x4B1D,{ 0x97,0x1F,0x59,0x6F,0x17,0xF1,0x2B,0xAA } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IVisualTreeHelperStatics2>
    {
        static constexpr guid value{ 0x07BCD176,0x869F,0x44A7,{ 0x87,0x97,0x21,0x03,0xA4,0xC3,0xE4,0x7A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IVisualTreeHelperStatics3>
    {
        static constexpr guid value{ 0x40420D50,0xCA16,0x57DA,{ 0x8A,0xAC,0x94,0x4C,0x8A,0xF5,0x77,0xFD } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IXamlCompositionBrushBase>
    {
        static constexpr guid value{ 0x03E432D9,0xB35C,0x4A79,{ 0x81,0x1C,0xC5,0x65,0x20,0x04,0xDA,0x0E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory>
    {
        static constexpr guid value{ 0x394F0823,0x2451,0x4ED8,{ 0xBD,0x24,0x48,0x81,0x49,0xB3,0x42,0x8D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides>
    {
        static constexpr guid value{ 0xD19127F1,0x38B4,0x4EA1,{ 0x8F,0x33,0x84,0x96,0x29,0xA4,0xC9,0xC1 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected>
    {
        static constexpr guid value{ 0x1513F3D8,0x0457,0x4E1C,{ 0xAD,0x77,0x11,0xC1,0xD9,0x87,0x97,0x43 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics>
    {
        static constexpr guid value{ 0x4FD49B06,0x061A,0x441F,{ 0xB9,0x7A,0xAD,0xFB,0xD4,0x1A,0xE6,0x81 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IXamlLight>
    {
        static constexpr guid value{ 0x0CC3FC1F,0xB327,0x4A18,{ 0x96,0x48,0x7C,0x84,0xDB,0x26,0xCE,0x22 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IXamlLightFactory>
    {
        static constexpr guid value{ 0x87DED768,0x3055,0x43B8,{ 0x8E,0xF6,0x79,0x8D,0xC4,0xC2,0x32,0x9A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IXamlLightOverrides>
    {
        static constexpr guid value{ 0x7C6296C7,0x0173,0x48E1,{ 0xB7,0x3D,0x7F,0xA2,0x16,0xA9,0xAC,0x28 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IXamlLightProtected>
    {
        static constexpr guid value{ 0x5ECF220B,0x1252,0x43D0,{ 0x97,0x29,0x6E,0xA6,0x92,0x04,0x68,0x38 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::IXamlLightStatics>
    {
        static constexpr guid value{ 0xB5EA9D69,0xB508,0x4E9C,{ 0xBD,0x27,0x6B,0x04,0x4B,0x5F,0x78,0xA0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::RateChangedRoutedEventHandler>
    {
        static constexpr guid value{ 0x08E9A257,0xAE05,0x489B,{ 0x88,0x39,0x28,0xC6,0x22,0x5D,0x23,0x49 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::TimelineMarkerRoutedEventHandler>
    {
        static constexpr guid value{ 0x72E2FA9C,0x6DEA,0x4CBE,{ 0xA1,0x59,0x06,0xCE,0x95,0xFB,0xEC,0xED } };
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::AcrylicBrush>
    {
        using type = Windows::UI::Xaml::Media::IAcrylicBrush;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::ArcSegment>
    {
        using type = Windows::UI::Xaml::Media::IArcSegment;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::BezierSegment>
    {
        using type = Windows::UI::Xaml::Media::IBezierSegment;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::BitmapCache>
    {
        using type = Windows::UI::Xaml::Media::IBitmapCache;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::Brush>
    {
        using type = Windows::UI::Xaml::Media::IBrush;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::BrushCollection>
    {
        using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Brush>;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::CacheMode>
    {
        using type = Windows::UI::Xaml::Media::ICacheMode;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::CompositeTransform>
    {
        using type = Windows::UI::Xaml::Media::ICompositeTransform;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::CompositionTarget>
    {
        using type = Windows::UI::Xaml::Media::ICompositionTarget;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::DoubleCollection>
    {
        using type = Windows::Foundation::Collections::IVector<double>;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::EllipseGeometry>
    {
        using type = Windows::UI::Xaml::Media::IEllipseGeometry;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::FontFamily>
    {
        using type = Windows::UI::Xaml::Media::IFontFamily;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::GeneralTransform>
    {
        using type = Windows::UI::Xaml::Media::IGeneralTransform;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::Geometry>
    {
        using type = Windows::UI::Xaml::Media::IGeometry;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::GeometryCollection>
    {
        using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Geometry>;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::GeometryGroup>
    {
        using type = Windows::UI::Xaml::Media::IGeometryGroup;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::GradientBrush>
    {
        using type = Windows::UI::Xaml::Media::IGradientBrush;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::GradientStop>
    {
        using type = Windows::UI::Xaml::Media::IGradientStop;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::GradientStopCollection>
    {
        using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::GradientStop>;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::ImageBrush>
    {
        using type = Windows::UI::Xaml::Media::IImageBrush;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::ImageSource>
    {
        using type = Windows::UI::Xaml::Media::IImageSource;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::LineGeometry>
    {
        using type = Windows::UI::Xaml::Media::ILineGeometry;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::LineSegment>
    {
        using type = Windows::UI::Xaml::Media::ILineSegment;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::LinearGradientBrush>
    {
        using type = Windows::UI::Xaml::Media::ILinearGradientBrush;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs>
    {
        using type = Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::LoadedImageSurface>
    {
        using type = Windows::UI::Xaml::Media::ILoadedImageSurface;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::Matrix3DProjection>
    {
        using type = Windows::UI::Xaml::Media::IMatrix3DProjection;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::MatrixHelper>
    {
        using type = Windows::UI::Xaml::Media::IMatrixHelper;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::MatrixTransform>
    {
        using type = Windows::UI::Xaml::Media::IMatrixTransform;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs>
    {
        using type = Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs>
    {
        using type = Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::PathFigure>
    {
        using type = Windows::UI::Xaml::Media::IPathFigure;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::PathFigureCollection>
    {
        using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::PathFigure>;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::PathGeometry>
    {
        using type = Windows::UI::Xaml::Media::IPathGeometry;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::PathSegment>
    {
        using type = Windows::UI::Xaml::Media::IPathSegment;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::PathSegmentCollection>
    {
        using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::PathSegment>;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::PlaneProjection>
    {
        using type = Windows::UI::Xaml::Media::IPlaneProjection;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::PointCollection>
    {
        using type = Windows::Foundation::Collections::IVector<Windows::Foundation::Point>;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::PolyBezierSegment>
    {
        using type = Windows::UI::Xaml::Media::IPolyBezierSegment;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::PolyLineSegment>
    {
        using type = Windows::UI::Xaml::Media::IPolyLineSegment;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::PolyQuadraticBezierSegment>
    {
        using type = Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::Projection>
    {
        using type = Windows::UI::Xaml::Media::IProjection;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::QuadraticBezierSegment>
    {
        using type = Windows::UI::Xaml::Media::IQuadraticBezierSegment;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::RateChangedRoutedEventArgs>
    {
        using type = Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::RectangleGeometry>
    {
        using type = Windows::UI::Xaml::Media::IRectangleGeometry;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::RenderedEventArgs>
    {
        using type = Windows::UI::Xaml::Media::IRenderedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::RenderingEventArgs>
    {
        using type = Windows::UI::Xaml::Media::IRenderingEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::RevealBackgroundBrush>
    {
        using type = Windows::UI::Xaml::Media::IRevealBackgroundBrush;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::RevealBorderBrush>
    {
        using type = Windows::UI::Xaml::Media::IRevealBorderBrush;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::RevealBrush>
    {
        using type = Windows::UI::Xaml::Media::IRevealBrush;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::RotateTransform>
    {
        using type = Windows::UI::Xaml::Media::IRotateTransform;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::ScaleTransform>
    {
        using type = Windows::UI::Xaml::Media::IScaleTransform;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::Shadow>
    {
        using type = Windows::UI::Xaml::Media::IShadow;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::SkewTransform>
    {
        using type = Windows::UI::Xaml::Media::ISkewTransform;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::SolidColorBrush>
    {
        using type = Windows::UI::Xaml::Media::ISolidColorBrush;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::ThemeShadow>
    {
        using type = Windows::UI::Xaml::Media::IThemeShadow;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::TileBrush>
    {
        using type = Windows::UI::Xaml::Media::ITileBrush;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::TimelineMarker>
    {
        using type = Windows::UI::Xaml::Media::ITimelineMarker;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::TimelineMarkerCollection>
    {
        using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::TimelineMarker>;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs>
    {
        using type = Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::Transform>
    {
        using type = Windows::UI::Xaml::Media::ITransform;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::TransformCollection>
    {
        using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Transform>;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::TransformGroup>
    {
        using type = Windows::UI::Xaml::Media::ITransformGroup;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::TranslateTransform>
    {
        using type = Windows::UI::Xaml::Media::ITranslateTransform;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::VisualTreeHelper>
    {
        using type = Windows::UI::Xaml::Media::IVisualTreeHelper;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::XamlCompositionBrushBase>
    {
        using type = Windows::UI::Xaml::Media::IXamlCompositionBrushBase;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::XamlLight>
    {
        using type = Windows::UI::Xaml::Media::IXamlLight;
    };
    template <> struct abi<Windows::UI::Xaml::Media::IAcrylicBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BackgroundSource(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BackgroundSource(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TintColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_TintColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_TintOpacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_TintOpacity(double) noexcept = 0;
            virtual int32_t __stdcall get_TintTransitionDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_TintTransitionDuration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_AlwaysUseFallback(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AlwaysUseFallback(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IAcrylicBrush2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TintLuminosityOpacity(void**) noexcept = 0;
            virtual int32_t __stdcall put_TintLuminosityOpacity(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IAcrylicBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IAcrylicBrushStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BackgroundSourceProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TintColorProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TintOpacityProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TintTransitionDurationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AlwaysUseFallbackProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IAcrylicBrushStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TintLuminosityOpacityProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IArcSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Point(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Point(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_Size(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall put_Size(Windows::Foundation::Size) noexcept = 0;
            virtual int32_t __stdcall get_RotationAngle(double*) noexcept = 0;
            virtual int32_t __stdcall put_RotationAngle(double) noexcept = 0;
            virtual int32_t __stdcall get_IsLargeArc(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsLargeArc(bool) noexcept = 0;
            virtual int32_t __stdcall get_SweepDirection(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SweepDirection(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IArcSegmentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SizeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationAngleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsLargeArcProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SweepDirectionProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IBezierSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Point1(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Point1(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_Point2(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Point2(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_Point3(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Point3(Windows::Foundation::Point) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IBezierSegmentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Point1Property(void**) noexcept = 0;
            virtual int32_t __stdcall get_Point2Property(void**) noexcept = 0;
            virtual int32_t __stdcall get_Point3Property(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IBitmapCache>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Opacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_Opacity(double) noexcept = 0;
            virtual int32_t __stdcall get_Transform(void**) noexcept = 0;
            virtual int32_t __stdcall put_Transform(void*) noexcept = 0;
            virtual int32_t __stdcall get_RelativeTransform(void**) noexcept = 0;
            virtual int32_t __stdcall put_RelativeTransform(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IBrushOverrides2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PopulatePropertyInfoOverride(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IBrushStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OpacityProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransformProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RelativeTransformProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ICacheMode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ICacheModeFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ICompositeTransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterX(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterX(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterY(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterY(double) noexcept = 0;
            virtual int32_t __stdcall get_ScaleX(double*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleX(double) noexcept = 0;
            virtual int32_t __stdcall get_ScaleY(double*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleY(double) noexcept = 0;
            virtual int32_t __stdcall get_SkewX(double*) noexcept = 0;
            virtual int32_t __stdcall put_SkewX(double) noexcept = 0;
            virtual int32_t __stdcall get_SkewY(double*) noexcept = 0;
            virtual int32_t __stdcall put_SkewY(double) noexcept = 0;
            virtual int32_t __stdcall get_Rotation(double*) noexcept = 0;
            virtual int32_t __stdcall put_Rotation(double) noexcept = 0;
            virtual int32_t __stdcall get_TranslateX(double*) noexcept = 0;
            virtual int32_t __stdcall put_TranslateX(double) noexcept = 0;
            virtual int32_t __stdcall get_TranslateY(double*) noexcept = 0;
            virtual int32_t __stdcall put_TranslateY(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ICompositeTransformStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SkewXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SkewYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TranslateXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TranslateYProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ICompositionTarget>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ICompositionTargetStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Rendering(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Rendering(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SurfaceContentsLost(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SurfaceContentsLost(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ICompositionTargetStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Rendered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Rendered(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IEllipseGeometry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Center(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Center(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_RadiusX(double*) noexcept = 0;
            virtual int32_t __stdcall put_RadiusX(double) noexcept = 0;
            virtual int32_t __stdcall get_RadiusY(double*) noexcept = 0;
            virtual int32_t __stdcall put_RadiusY(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IEllipseGeometryStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RadiusXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RadiusYProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IFontFamily>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IFontFamilyFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithName(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IFontFamilyStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_XamlAutoFontFamily(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGeneralTransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Inverse(void**) noexcept = 0;
            virtual int32_t __stdcall TransformPoint(Windows::Foundation::Point, Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall TryTransform(Windows::Foundation::Point, Windows::Foundation::Point*, bool*) noexcept = 0;
            virtual int32_t __stdcall TransformBounds(Windows::Foundation::Rect, Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGeneralTransformFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGeneralTransformOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InverseCore(void**) noexcept = 0;
            virtual int32_t __stdcall TryTransformCore(Windows::Foundation::Point, Windows::Foundation::Point*, bool*) noexcept = 0;
            virtual int32_t __stdcall TransformBoundsCore(Windows::Foundation::Rect, Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGeometry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Transform(void**) noexcept = 0;
            virtual int32_t __stdcall put_Transform(void*) noexcept = 0;
            virtual int32_t __stdcall get_Bounds(Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGeometryFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGeometryGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FillRule(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FillRule(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Children(void**) noexcept = 0;
            virtual int32_t __stdcall put_Children(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGeometryGroupStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FillRuleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChildrenProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGeometryStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Empty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StandardFlatteningTolerance(double*) noexcept = 0;
            virtual int32_t __stdcall get_TransformProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGradientBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SpreadMethod(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SpreadMethod(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MappingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MappingMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ColorInterpolationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ColorInterpolationMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_GradientStops(void**) noexcept = 0;
            virtual int32_t __stdcall put_GradientStops(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGradientBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGradientBrushStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SpreadMethodProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MappingModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ColorInterpolationModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_GradientStopsProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGradientStop>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_Offset(double*) noexcept = 0;
            virtual int32_t __stdcall put_Offset(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGradientStopStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ColorProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_OffsetProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IImageBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ImageSource(void**) noexcept = 0;
            virtual int32_t __stdcall put_ImageSource(void*) noexcept = 0;
            virtual int32_t __stdcall add_ImageFailed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ImageFailed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ImageOpened(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ImageOpened(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IImageBrushStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ImageSourceProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IImageSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IImageSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILineGeometry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartPoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_StartPoint(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_EndPoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_EndPoint(Windows::Foundation::Point) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILineGeometryStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartPointProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_EndPointProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILineSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Point(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Point(Windows::Foundation::Point) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILineSegmentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILinearGradientBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartPoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_StartPoint(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_EndPoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_EndPoint(Windows::Foundation::Point) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILinearGradientBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithGradientStopCollectionAndAngle(void*, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILinearGradientBrushStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartPointProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_EndPointProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILoadedImageSurface>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DecodedPhysicalSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_DecodedSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_NaturalSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall add_LoadCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LoadCompleted(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartLoadFromUriWithSize(void*, Windows::Foundation::Size, void**) noexcept = 0;
            virtual int32_t __stdcall StartLoadFromUri(void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartLoadFromStreamWithSize(void*, Windows::Foundation::Size, void**) noexcept = 0;
            virtual int32_t __stdcall StartLoadFromStream(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IMatrix3DProjection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProjectionMatrix(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D*) noexcept = 0;
            virtual int32_t __stdcall put_ProjectionMatrix(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IMatrix3DProjectionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProjectionMatrixProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IMatrixHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IMatrixHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Identity(struct struct_Windows_UI_Xaml_Media_Matrix*) noexcept = 0;
            virtual int32_t __stdcall FromElements(double, double, double, double, double, double, struct struct_Windows_UI_Xaml_Media_Matrix*) noexcept = 0;
            virtual int32_t __stdcall GetIsIdentity(struct struct_Windows_UI_Xaml_Media_Matrix, bool*) noexcept = 0;
            virtual int32_t __stdcall Transform(struct struct_Windows_UI_Xaml_Media_Matrix, Windows::Foundation::Point, Windows::Foundation::Point*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IMatrixTransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Matrix(struct struct_Windows_UI_Xaml_Media_Matrix*) noexcept = 0;
            virtual int32_t __stdcall put_Matrix(struct struct_Windows_UI_Xaml_Media_Matrix) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IMatrixTransformStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MatrixProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetThumbnailImage(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StreamKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPathFigure>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Segments(void**) noexcept = 0;
            virtual int32_t __stdcall put_Segments(void*) noexcept = 0;
            virtual int32_t __stdcall get_StartPoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_StartPoint(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_IsClosed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsClosed(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsFilled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsFilled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPathFigureStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SegmentsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StartPointProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsClosedProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsFilledProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPathGeometry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FillRule(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FillRule(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Figures(void**) noexcept = 0;
            virtual int32_t __stdcall put_Figures(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPathGeometryStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FillRuleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FiguresProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPathSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPathSegmentFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPlaneProjection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalOffsetX(double*) noexcept = 0;
            virtual int32_t __stdcall put_LocalOffsetX(double) noexcept = 0;
            virtual int32_t __stdcall get_LocalOffsetY(double*) noexcept = 0;
            virtual int32_t __stdcall put_LocalOffsetY(double) noexcept = 0;
            virtual int32_t __stdcall get_LocalOffsetZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_LocalOffsetZ(double) noexcept = 0;
            virtual int32_t __stdcall get_RotationX(double*) noexcept = 0;
            virtual int32_t __stdcall put_RotationX(double) noexcept = 0;
            virtual int32_t __stdcall get_RotationY(double*) noexcept = 0;
            virtual int32_t __stdcall put_RotationY(double) noexcept = 0;
            virtual int32_t __stdcall get_RotationZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_RotationZ(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterOfRotationX(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterOfRotationX(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterOfRotationY(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterOfRotationY(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterOfRotationZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterOfRotationZ(double) noexcept = 0;
            virtual int32_t __stdcall get_GlobalOffsetX(double*) noexcept = 0;
            virtual int32_t __stdcall put_GlobalOffsetX(double) noexcept = 0;
            virtual int32_t __stdcall get_GlobalOffsetY(double*) noexcept = 0;
            virtual int32_t __stdcall put_GlobalOffsetY(double) noexcept = 0;
            virtual int32_t __stdcall get_GlobalOffsetZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_GlobalOffsetZ(double) noexcept = 0;
            virtual int32_t __stdcall get_ProjectionMatrix(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPlaneProjectionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalOffsetXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocalOffsetYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocalOffsetZProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationZProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterOfRotationXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterOfRotationYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterOfRotationZProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_GlobalOffsetXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_GlobalOffsetYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_GlobalOffsetZProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProjectionMatrixProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPolyBezierSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Points(void**) noexcept = 0;
            virtual int32_t __stdcall put_Points(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPolyBezierSegmentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointsProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPolyLineSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Points(void**) noexcept = 0;
            virtual int32_t __stdcall put_Points(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPolyLineSegmentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointsProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Points(void**) noexcept = 0;
            virtual int32_t __stdcall put_Points(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointsProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IProjection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IProjectionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IQuadraticBezierSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Point1(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Point1(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_Point2(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Point2(Windows::Foundation::Point) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Point1Property(void**) noexcept = 0;
            virtual int32_t __stdcall get_Point2Property(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRectangleGeometry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Rect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall put_Rect(Windows::Foundation::Rect) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRectangleGeometryStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RectProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRenderedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameDuration(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRenderingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RenderingTime(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRevealBackgroundBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRevealBorderBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRevealBorderBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRevealBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_TargetTheme(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TargetTheme(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AlwaysUseFallback(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AlwaysUseFallback(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRevealBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRevealBrushStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ColorProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TargetThemeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AlwaysUseFallbackProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StateProperty(void**) noexcept = 0;
            virtual int32_t __stdcall SetState(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall GetState(void*, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRotateTransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterX(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterX(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterY(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterY(double) noexcept = 0;
            virtual int32_t __stdcall get_Angle(double*) noexcept = 0;
            virtual int32_t __stdcall put_Angle(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRotateTransformStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AngleProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IScaleTransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterX(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterX(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterY(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterY(double) noexcept = 0;
            virtual int32_t __stdcall get_ScaleX(double*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleX(double) noexcept = 0;
            virtual int32_t __stdcall get_ScaleY(double*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleY(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IScaleTransformStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleYProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IShadow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IShadowFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ISkewTransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterX(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterX(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterY(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterY(double) noexcept = 0;
            virtual int32_t __stdcall get_AngleX(double*) noexcept = 0;
            virtual int32_t __stdcall put_AngleX(double) noexcept = 0;
            virtual int32_t __stdcall get_AngleY(double*) noexcept = 0;
            virtual int32_t __stdcall put_AngleY(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ISkewTransformStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AngleXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AngleYProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ISolidColorBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ISolidColorBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithColor(struct struct_Windows_UI_Color, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ISolidColorBrushStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ColorProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IThemeShadow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Receivers(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IThemeShadowFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITileBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlignmentX(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AlignmentX(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AlignmentY(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AlignmentY(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Stretch(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Stretch(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITileBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITileBrushStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlignmentXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AlignmentYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StretchProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITimelineMarker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Time(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Time(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Type(void**) noexcept = 0;
            virtual int32_t __stdcall put_Type(void*) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall put_Text(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Marker(void**) noexcept = 0;
            virtual int32_t __stdcall put_Marker(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITimelineMarkerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TimeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TypeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TextProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITransformFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITransformGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Children(void**) noexcept = 0;
            virtual int32_t __stdcall put_Children(void*) noexcept = 0;
            virtual int32_t __stdcall get_Value(struct struct_Windows_UI_Xaml_Media_Matrix*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITransformGroupStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChildrenProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITranslateTransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_X(double*) noexcept = 0;
            virtual int32_t __stdcall put_X(double) noexcept = 0;
            virtual int32_t __stdcall get_Y(double*) noexcept = 0;
            virtual int32_t __stdcall put_Y(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITranslateTransformStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_XProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_YProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IVisualTreeHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IVisualTreeHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindElementsInHostCoordinatesPoint(Windows::Foundation::Point, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindElementsInHostCoordinatesRect(Windows::Foundation::Rect, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAllElementsInHostCoordinatesPoint(Windows::Foundation::Point, void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall FindAllElementsInHostCoordinatesRect(Windows::Foundation::Rect, void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall GetChild(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetChildrenCount(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetParent(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DisconnectChildrenRecursive(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IVisualTreeHelperStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetOpenPopups(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IVisualTreeHelperStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetOpenPopupsForXamlRoot(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlCompositionBrushBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FallbackColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_FallbackColor(struct struct_Windows_UI_Color) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OnConnected() noexcept = 0;
            virtual int32_t __stdcall OnDisconnected() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CompositionBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CompositionBrush(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FallbackColorProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlLight>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlLightFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlLightOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetId(void**) noexcept = 0;
            virtual int32_t __stdcall OnConnected(void*) noexcept = 0;
            virtual int32_t __stdcall OnDisconnected(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlLightProtected>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CompositionLight(void**) noexcept = 0;
            virtual int32_t __stdcall put_CompositionLight(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlLightStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddTargetElement(void*, void*) noexcept = 0;
            virtual int32_t __stdcall RemoveTargetElement(void*, void*) noexcept = 0;
            virtual int32_t __stdcall AddTargetBrush(void*, void*) noexcept = 0;
            virtual int32_t __stdcall RemoveTargetBrush(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::RateChangedRoutedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::TimelineMarkerRoutedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IAcrylicBrush
    {
        [[nodiscard]] auto BackgroundSource() const;
        auto BackgroundSource(Windows::UI::Xaml::Media::AcrylicBackgroundSource const& value) const;
        [[nodiscard]] auto TintColor() const;
        auto TintColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto TintOpacity() const;
        auto TintOpacity(double value) const;
        [[nodiscard]] auto TintTransitionDuration() const;
        auto TintTransitionDuration(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto AlwaysUseFallback() const;
        auto AlwaysUseFallback(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IAcrylicBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IAcrylicBrush2
    {
        [[nodiscard]] auto TintLuminosityOpacity() const;
        auto TintLuminosityOpacity(Windows::Foundation::IReference<double> const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IAcrylicBrush2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IAcrylicBrush2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IAcrylicBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics
    {
        [[nodiscard]] auto BackgroundSourceProperty() const;
        [[nodiscard]] auto TintColorProperty() const;
        [[nodiscard]] auto TintOpacityProperty() const;
        [[nodiscard]] auto TintTransitionDurationProperty() const;
        [[nodiscard]] auto AlwaysUseFallbackProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IAcrylicBrushStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics2
    {
        [[nodiscard]] auto TintLuminosityOpacityProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IAcrylicBrushStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IArcSegment
    {
        [[nodiscard]] auto Point() const;
        auto Point(Windows::Foundation::Point const& value) const;
        [[nodiscard]] auto Size() const;
        auto Size(Windows::Foundation::Size const& value) const;
        [[nodiscard]] auto RotationAngle() const;
        auto RotationAngle(double value) const;
        [[nodiscard]] auto IsLargeArc() const;
        auto IsLargeArc(bool value) const;
        [[nodiscard]] auto SweepDirection() const;
        auto SweepDirection(Windows::UI::Xaml::Media::SweepDirection const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IArcSegment>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IArcSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IArcSegmentStatics
    {
        [[nodiscard]] auto PointProperty() const;
        [[nodiscard]] auto SizeProperty() const;
        [[nodiscard]] auto RotationAngleProperty() const;
        [[nodiscard]] auto IsLargeArcProperty() const;
        [[nodiscard]] auto SweepDirectionProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IArcSegmentStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IArcSegmentStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IBezierSegment
    {
        [[nodiscard]] auto Point1() const;
        auto Point1(Windows::Foundation::Point const& value) const;
        [[nodiscard]] auto Point2() const;
        auto Point2(Windows::Foundation::Point const& value) const;
        [[nodiscard]] auto Point3() const;
        auto Point3(Windows::Foundation::Point const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IBezierSegment>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IBezierSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IBezierSegmentStatics
    {
        [[nodiscard]] auto Point1Property() const;
        [[nodiscard]] auto Point2Property() const;
        [[nodiscard]] auto Point3Property() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IBezierSegmentStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IBezierSegmentStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IBitmapCache
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IBitmapCache>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IBitmapCache<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IBrush
    {
        [[nodiscard]] auto Opacity() const;
        auto Opacity(double value) const;
        [[nodiscard]] auto Transform() const;
        auto Transform(Windows::UI::Xaml::Media::Transform const& value) const;
        [[nodiscard]] auto RelativeTransform() const;
        auto RelativeTransform(Windows::UI::Xaml::Media::Transform const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IBrushFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IBrushOverrides2
    {
        auto PopulatePropertyInfoOverride(param::hstring const& propertyName, Windows::UI::Composition::AnimationPropertyInfo const& animationPropertyInfo) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IBrushOverrides2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IBrushOverrides2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IBrushStatics
    {
        [[nodiscard]] auto OpacityProperty() const;
        [[nodiscard]] auto TransformProperty() const;
        [[nodiscard]] auto RelativeTransformProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IBrushStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IBrushStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ICacheMode
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::ICacheMode>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ICacheMode<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ICacheModeFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ICacheModeFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ICacheModeFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ICompositeTransform
    {
        [[nodiscard]] auto CenterX() const;
        auto CenterX(double value) const;
        [[nodiscard]] auto CenterY() const;
        auto CenterY(double value) const;
        [[nodiscard]] auto ScaleX() const;
        auto ScaleX(double value) const;
        [[nodiscard]] auto ScaleY() const;
        auto ScaleY(double value) const;
        [[nodiscard]] auto SkewX() const;
        auto SkewX(double value) const;
        [[nodiscard]] auto SkewY() const;
        auto SkewY(double value) const;
        [[nodiscard]] auto Rotation() const;
        auto Rotation(double value) const;
        [[nodiscard]] auto TranslateX() const;
        auto TranslateX(double value) const;
        [[nodiscard]] auto TranslateY() const;
        auto TranslateY(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ICompositeTransform>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ICompositeTransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ICompositeTransformStatics
    {
        [[nodiscard]] auto CenterXProperty() const;
        [[nodiscard]] auto CenterYProperty() const;
        [[nodiscard]] auto ScaleXProperty() const;
        [[nodiscard]] auto ScaleYProperty() const;
        [[nodiscard]] auto SkewXProperty() const;
        [[nodiscard]] auto SkewYProperty() const;
        [[nodiscard]] auto RotationProperty() const;
        [[nodiscard]] auto TranslateXProperty() const;
        [[nodiscard]] auto TranslateYProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ICompositeTransformStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ICompositionTarget
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::ICompositionTarget>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ICompositionTarget<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ICompositionTargetStatics
    {
        auto Rendering(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using Rendering_revoker = impl::event_revoker<Windows::UI::Xaml::Media::ICompositionTargetStatics, &impl::abi_t<Windows::UI::Xaml::Media::ICompositionTargetStatics>::remove_Rendering>;
        Rendering_revoker Rendering(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto Rendering(winrt::event_token const& token) const noexcept;
        auto SurfaceContentsLost(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using SurfaceContentsLost_revoker = impl::event_revoker<Windows::UI::Xaml::Media::ICompositionTargetStatics, &impl::abi_t<Windows::UI::Xaml::Media::ICompositionTargetStatics>::remove_SurfaceContentsLost>;
        SurfaceContentsLost_revoker SurfaceContentsLost(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto SurfaceContentsLost(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ICompositionTargetStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ICompositionTargetStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ICompositionTargetStatics3
    {
        auto Rendered(Windows::Foundation::EventHandler<Windows::UI::Xaml::Media::RenderedEventArgs> const& handler) const;
        using Rendered_revoker = impl::event_revoker<Windows::UI::Xaml::Media::ICompositionTargetStatics3, &impl::abi_t<Windows::UI::Xaml::Media::ICompositionTargetStatics3>::remove_Rendered>;
        Rendered_revoker Rendered(auto_revoke_t, Windows::Foundation::EventHandler<Windows::UI::Xaml::Media::RenderedEventArgs> const& handler) const;
        auto Rendered(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ICompositionTargetStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ICompositionTargetStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IEllipseGeometry
    {
        [[nodiscard]] auto Center() const;
        auto Center(Windows::Foundation::Point const& value) const;
        [[nodiscard]] auto RadiusX() const;
        auto RadiusX(double value) const;
        [[nodiscard]] auto RadiusY() const;
        auto RadiusY(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IEllipseGeometry>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IEllipseGeometry<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IEllipseGeometryStatics
    {
        [[nodiscard]] auto CenterProperty() const;
        [[nodiscard]] auto RadiusXProperty() const;
        [[nodiscard]] auto RadiusYProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IEllipseGeometryStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IEllipseGeometryStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IFontFamily
    {
        [[nodiscard]] auto Source() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IFontFamily>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IFontFamily<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IFontFamilyFactory
    {
        auto CreateInstanceWithName(param::hstring const& familyName, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IFontFamilyFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IFontFamilyFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IFontFamilyStatics2
    {
        [[nodiscard]] auto XamlAutoFontFamily() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IFontFamilyStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IFontFamilyStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGeneralTransform
    {
        [[nodiscard]] auto Inverse() const;
        auto TransformPoint(Windows::Foundation::Point const& point) const;
        auto TryTransform(Windows::Foundation::Point const& inPoint, Windows::Foundation::Point& outPoint) const;
        auto TransformBounds(Windows::Foundation::Rect const& rect) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGeneralTransform>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGeneralTransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGeneralTransformFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGeneralTransformFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGeneralTransformFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGeneralTransformOverrides
    {
        [[nodiscard]] auto InverseCore() const;
        auto TryTransformCore(Windows::Foundation::Point const& inPoint, Windows::Foundation::Point& outPoint) const;
        auto TransformBoundsCore(Windows::Foundation::Rect const& rect) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGeneralTransformOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGeneralTransformOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGeometry
    {
        [[nodiscard]] auto Transform() const;
        auto Transform(Windows::UI::Xaml::Media::Transform const& value) const;
        [[nodiscard]] auto Bounds() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGeometry>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGeometry<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGeometryFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGeometryFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGeometryFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGeometryGroup
    {
        [[nodiscard]] auto FillRule() const;
        auto FillRule(Windows::UI::Xaml::Media::FillRule const& value) const;
        [[nodiscard]] auto Children() const;
        auto Children(Windows::UI::Xaml::Media::GeometryCollection const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGeometryGroup>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGeometryGroup<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGeometryGroupStatics
    {
        [[nodiscard]] auto FillRuleProperty() const;
        [[nodiscard]] auto ChildrenProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGeometryGroupStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGeometryGroupStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGeometryStatics
    {
        [[nodiscard]] auto Empty() const;
        [[nodiscard]] auto StandardFlatteningTolerance() const;
        [[nodiscard]] auto TransformProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGeometryStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGeometryStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGradientBrush
    {
        [[nodiscard]] auto SpreadMethod() const;
        auto SpreadMethod(Windows::UI::Xaml::Media::GradientSpreadMethod const& value) const;
        [[nodiscard]] auto MappingMode() const;
        auto MappingMode(Windows::UI::Xaml::Media::BrushMappingMode const& value) const;
        [[nodiscard]] auto ColorInterpolationMode() const;
        auto ColorInterpolationMode(Windows::UI::Xaml::Media::ColorInterpolationMode const& value) const;
        [[nodiscard]] auto GradientStops() const;
        auto GradientStops(Windows::UI::Xaml::Media::GradientStopCollection const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGradientBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGradientBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGradientBrushFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGradientBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGradientBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGradientBrushStatics
    {
        [[nodiscard]] auto SpreadMethodProperty() const;
        [[nodiscard]] auto MappingModeProperty() const;
        [[nodiscard]] auto ColorInterpolationModeProperty() const;
        [[nodiscard]] auto GradientStopsProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGradientBrushStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGradientBrushStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGradientStop
    {
        [[nodiscard]] auto Color() const;
        auto Color(Windows::UI::Color const& value) const;
        [[nodiscard]] auto Offset() const;
        auto Offset(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGradientStop>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGradientStop<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGradientStopStatics
    {
        [[nodiscard]] auto ColorProperty() const;
        [[nodiscard]] auto OffsetProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGradientStopStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGradientStopStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IImageBrush
    {
        [[nodiscard]] auto ImageSource() const;
        auto ImageSource(Windows::UI::Xaml::Media::ImageSource const& value) const;
        auto ImageFailed(Windows::UI::Xaml::ExceptionRoutedEventHandler const& handler) const;
        using ImageFailed_revoker = impl::event_revoker<Windows::UI::Xaml::Media::IImageBrush, &impl::abi_t<Windows::UI::Xaml::Media::IImageBrush>::remove_ImageFailed>;
        ImageFailed_revoker ImageFailed(auto_revoke_t, Windows::UI::Xaml::ExceptionRoutedEventHandler const& handler) const;
        auto ImageFailed(winrt::event_token const& token) const noexcept;
        auto ImageOpened(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using ImageOpened_revoker = impl::event_revoker<Windows::UI::Xaml::Media::IImageBrush, &impl::abi_t<Windows::UI::Xaml::Media::IImageBrush>::remove_ImageOpened>;
        ImageOpened_revoker ImageOpened(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        auto ImageOpened(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IImageBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IImageBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IImageBrushStatics
    {
        [[nodiscard]] auto ImageSourceProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IImageBrushStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IImageBrushStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IImageSource
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IImageSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IImageSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IImageSourceFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IImageSourceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IImageSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILineGeometry
    {
        [[nodiscard]] auto StartPoint() const;
        auto StartPoint(Windows::Foundation::Point const& value) const;
        [[nodiscard]] auto EndPoint() const;
        auto EndPoint(Windows::Foundation::Point const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILineGeometry>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILineGeometry<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILineGeometryStatics
    {
        [[nodiscard]] auto StartPointProperty() const;
        [[nodiscard]] auto EndPointProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILineGeometryStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILineGeometryStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILineSegment
    {
        [[nodiscard]] auto Point() const;
        auto Point(Windows::Foundation::Point const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILineSegment>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILineSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILineSegmentStatics
    {
        [[nodiscard]] auto PointProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILineSegmentStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILineSegmentStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILinearGradientBrush
    {
        [[nodiscard]] auto StartPoint() const;
        auto StartPoint(Windows::Foundation::Point const& value) const;
        [[nodiscard]] auto EndPoint() const;
        auto EndPoint(Windows::Foundation::Point const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILinearGradientBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILinearGradientBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILinearGradientBrushFactory
    {
        auto CreateInstanceWithGradientStopCollectionAndAngle(Windows::UI::Xaml::Media::GradientStopCollection const& gradientStopCollection, double angle) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILinearGradientBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILinearGradientBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILinearGradientBrushStatics
    {
        [[nodiscard]] auto StartPointProperty() const;
        [[nodiscard]] auto EndPointProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILinearGradientBrushStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILinearGradientBrushStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILoadedImageSourceLoadCompletedEventArgs
    {
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILoadedImageSourceLoadCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILoadedImageSurface
    {
        [[nodiscard]] auto DecodedPhysicalSize() const;
        [[nodiscard]] auto DecodedSize() const;
        [[nodiscard]] auto NaturalSize() const;
        auto LoadCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::LoadedImageSurface, Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs> const& handler) const;
        using LoadCompleted_revoker = impl::event_revoker<Windows::UI::Xaml::Media::ILoadedImageSurface, &impl::abi_t<Windows::UI::Xaml::Media::ILoadedImageSurface>::remove_LoadCompleted>;
        LoadCompleted_revoker LoadCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::LoadedImageSurface, Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs> const& handler) const;
        auto LoadCompleted(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILoadedImageSurface>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILoadedImageSurface<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILoadedImageSurfaceStatics
    {
        auto StartLoadFromUri(Windows::Foundation::Uri const& uri, Windows::Foundation::Size const& desiredMaxSize) const;
        auto StartLoadFromUri(Windows::Foundation::Uri const& uri) const;
        auto StartLoadFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Foundation::Size const& desiredMaxSize) const;
        auto StartLoadFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILoadedImageSurfaceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IMatrix3DProjection
    {
        [[nodiscard]] auto ProjectionMatrix() const;
        auto ProjectionMatrix(Windows::UI::Xaml::Media::Media3D::Matrix3D const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IMatrix3DProjection>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IMatrix3DProjection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IMatrix3DProjectionStatics
    {
        [[nodiscard]] auto ProjectionMatrixProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IMatrix3DProjectionStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IMatrix3DProjectionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IMatrixHelper
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IMatrixHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IMatrixHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IMatrixHelperStatics
    {
        [[nodiscard]] auto Identity() const;
        auto FromElements(double m11, double m12, double m21, double m22, double offsetX, double offsetY) const;
        auto GetIsIdentity(Windows::UI::Xaml::Media::Matrix const& target) const;
        auto Transform(Windows::UI::Xaml::Media::Matrix const& target, Windows::Foundation::Point const& point) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IMatrixHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IMatrixHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IMatrixTransform
    {
        [[nodiscard]] auto Matrix() const;
        auto Matrix(Windows::UI::Xaml::Media::Matrix const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IMatrixTransform>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IMatrixTransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IMatrixTransformStatics
    {
        [[nodiscard]] auto MatrixProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IMatrixTransformStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IMatrixTransformStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IMediaTransportControlsThumbnailRequestedEventArgs
    {
        auto SetThumbnailImage(Windows::Storage::Streams::IInputStream const& source) const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IMediaTransportControlsThumbnailRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPartialMediaFailureDetectedEventArgs
    {
        [[nodiscard]] auto StreamKind() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPartialMediaFailureDetectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPartialMediaFailureDetectedEventArgs2
    {
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPartialMediaFailureDetectedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPathFigure
    {
        [[nodiscard]] auto Segments() const;
        auto Segments(Windows::UI::Xaml::Media::PathSegmentCollection const& value) const;
        [[nodiscard]] auto StartPoint() const;
        auto StartPoint(Windows::Foundation::Point const& value) const;
        [[nodiscard]] auto IsClosed() const;
        auto IsClosed(bool value) const;
        [[nodiscard]] auto IsFilled() const;
        auto IsFilled(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPathFigure>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPathFigure<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPathFigureStatics
    {
        [[nodiscard]] auto SegmentsProperty() const;
        [[nodiscard]] auto StartPointProperty() const;
        [[nodiscard]] auto IsClosedProperty() const;
        [[nodiscard]] auto IsFilledProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPathFigureStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPathFigureStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPathGeometry
    {
        [[nodiscard]] auto FillRule() const;
        auto FillRule(Windows::UI::Xaml::Media::FillRule const& value) const;
        [[nodiscard]] auto Figures() const;
        auto Figures(Windows::UI::Xaml::Media::PathFigureCollection const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPathGeometry>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPathGeometry<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPathGeometryStatics
    {
        [[nodiscard]] auto FillRuleProperty() const;
        [[nodiscard]] auto FiguresProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPathGeometryStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPathGeometryStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPathSegment
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPathSegment>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPathSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPathSegmentFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPathSegmentFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPathSegmentFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPlaneProjection
    {
        [[nodiscard]] auto LocalOffsetX() const;
        auto LocalOffsetX(double value) const;
        [[nodiscard]] auto LocalOffsetY() const;
        auto LocalOffsetY(double value) const;
        [[nodiscard]] auto LocalOffsetZ() const;
        auto LocalOffsetZ(double value) const;
        [[nodiscard]] auto RotationX() const;
        auto RotationX(double value) const;
        [[nodiscard]] auto RotationY() const;
        auto RotationY(double value) const;
        [[nodiscard]] auto RotationZ() const;
        auto RotationZ(double value) const;
        [[nodiscard]] auto CenterOfRotationX() const;
        auto CenterOfRotationX(double value) const;
        [[nodiscard]] auto CenterOfRotationY() const;
        auto CenterOfRotationY(double value) const;
        [[nodiscard]] auto CenterOfRotationZ() const;
        auto CenterOfRotationZ(double value) const;
        [[nodiscard]] auto GlobalOffsetX() const;
        auto GlobalOffsetX(double value) const;
        [[nodiscard]] auto GlobalOffsetY() const;
        auto GlobalOffsetY(double value) const;
        [[nodiscard]] auto GlobalOffsetZ() const;
        auto GlobalOffsetZ(double value) const;
        [[nodiscard]] auto ProjectionMatrix() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPlaneProjection>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPlaneProjection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics
    {
        [[nodiscard]] auto LocalOffsetXProperty() const;
        [[nodiscard]] auto LocalOffsetYProperty() const;
        [[nodiscard]] auto LocalOffsetZProperty() const;
        [[nodiscard]] auto RotationXProperty() const;
        [[nodiscard]] auto RotationYProperty() const;
        [[nodiscard]] auto RotationZProperty() const;
        [[nodiscard]] auto CenterOfRotationXProperty() const;
        [[nodiscard]] auto CenterOfRotationYProperty() const;
        [[nodiscard]] auto CenterOfRotationZProperty() const;
        [[nodiscard]] auto GlobalOffsetXProperty() const;
        [[nodiscard]] auto GlobalOffsetYProperty() const;
        [[nodiscard]] auto GlobalOffsetZProperty() const;
        [[nodiscard]] auto ProjectionMatrixProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPlaneProjectionStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPolyBezierSegment
    {
        [[nodiscard]] auto Points() const;
        auto Points(Windows::UI::Xaml::Media::PointCollection const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPolyBezierSegment>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPolyBezierSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPolyBezierSegmentStatics
    {
        [[nodiscard]] auto PointsProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPolyBezierSegmentStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPolyBezierSegmentStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPolyLineSegment
    {
        [[nodiscard]] auto Points() const;
        auto Points(Windows::UI::Xaml::Media::PointCollection const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPolyLineSegment>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPolyLineSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPolyLineSegmentStatics
    {
        [[nodiscard]] auto PointsProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPolyLineSegmentStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPolyLineSegmentStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPolyQuadraticBezierSegment
    {
        [[nodiscard]] auto Points() const;
        auto Points(Windows::UI::Xaml::Media::PointCollection const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPolyQuadraticBezierSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPolyQuadraticBezierSegmentStatics
    {
        [[nodiscard]] auto PointsProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPolyQuadraticBezierSegmentStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IProjection
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IProjection>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IProjection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IProjectionFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IProjectionFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IProjectionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IQuadraticBezierSegment
    {
        [[nodiscard]] auto Point1() const;
        auto Point1(Windows::Foundation::Point const& value) const;
        [[nodiscard]] auto Point2() const;
        auto Point2(Windows::Foundation::Point const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IQuadraticBezierSegment>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IQuadraticBezierSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IQuadraticBezierSegmentStatics
    {
        [[nodiscard]] auto Point1Property() const;
        [[nodiscard]] auto Point2Property() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IQuadraticBezierSegmentStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRateChangedRoutedEventArgs
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRateChangedRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRectangleGeometry
    {
        [[nodiscard]] auto Rect() const;
        auto Rect(Windows::Foundation::Rect const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRectangleGeometry>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRectangleGeometry<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRectangleGeometryStatics
    {
        [[nodiscard]] auto RectProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRectangleGeometryStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRectangleGeometryStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRenderedEventArgs
    {
        [[nodiscard]] auto FrameDuration() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRenderedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRenderedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRenderingEventArgs
    {
        [[nodiscard]] auto RenderingTime() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRenderingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRenderingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRevealBackgroundBrush
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRevealBackgroundBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRevealBackgroundBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRevealBackgroundBrushFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRevealBackgroundBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRevealBorderBrush
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRevealBorderBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRevealBorderBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRevealBorderBrushFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRevealBorderBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRevealBorderBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRevealBrush
    {
        [[nodiscard]] auto Color() const;
        auto Color(Windows::UI::Color const& value) const;
        [[nodiscard]] auto TargetTheme() const;
        auto TargetTheme(Windows::UI::Xaml::ApplicationTheme const& value) const;
        [[nodiscard]] auto AlwaysUseFallback() const;
        auto AlwaysUseFallback(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRevealBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRevealBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRevealBrushFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRevealBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRevealBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRevealBrushStatics
    {
        [[nodiscard]] auto ColorProperty() const;
        [[nodiscard]] auto TargetThemeProperty() const;
        [[nodiscard]] auto AlwaysUseFallbackProperty() const;
        [[nodiscard]] auto StateProperty() const;
        auto SetState(Windows::UI::Xaml::UIElement const& element, Windows::UI::Xaml::Media::RevealBrushState const& value) const;
        auto GetState(Windows::UI::Xaml::UIElement const& element) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRevealBrushStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRevealBrushStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRotateTransform
    {
        [[nodiscard]] auto CenterX() const;
        auto CenterX(double value) const;
        [[nodiscard]] auto CenterY() const;
        auto CenterY(double value) const;
        [[nodiscard]] auto Angle() const;
        auto Angle(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRotateTransform>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRotateTransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRotateTransformStatics
    {
        [[nodiscard]] auto CenterXProperty() const;
        [[nodiscard]] auto CenterYProperty() const;
        [[nodiscard]] auto AngleProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRotateTransformStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRotateTransformStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IScaleTransform
    {
        [[nodiscard]] auto CenterX() const;
        auto CenterX(double value) const;
        [[nodiscard]] auto CenterY() const;
        auto CenterY(double value) const;
        [[nodiscard]] auto ScaleX() const;
        auto ScaleX(double value) const;
        [[nodiscard]] auto ScaleY() const;
        auto ScaleY(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IScaleTransform>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IScaleTransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IScaleTransformStatics
    {
        [[nodiscard]] auto CenterXProperty() const;
        [[nodiscard]] auto CenterYProperty() const;
        [[nodiscard]] auto ScaleXProperty() const;
        [[nodiscard]] auto ScaleYProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IScaleTransformStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IScaleTransformStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IShadow
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IShadow>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IShadow<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IShadowFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IShadowFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IShadowFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ISkewTransform
    {
        [[nodiscard]] auto CenterX() const;
        auto CenterX(double value) const;
        [[nodiscard]] auto CenterY() const;
        auto CenterY(double value) const;
        [[nodiscard]] auto AngleX() const;
        auto AngleX(double value) const;
        [[nodiscard]] auto AngleY() const;
        auto AngleY(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ISkewTransform>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ISkewTransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ISkewTransformStatics
    {
        [[nodiscard]] auto CenterXProperty() const;
        [[nodiscard]] auto CenterYProperty() const;
        [[nodiscard]] auto AngleXProperty() const;
        [[nodiscard]] auto AngleYProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ISkewTransformStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ISkewTransformStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ISolidColorBrush
    {
        [[nodiscard]] auto Color() const;
        auto Color(Windows::UI::Color const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ISolidColorBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ISolidColorBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ISolidColorBrushFactory
    {
        auto CreateInstanceWithColor(Windows::UI::Color const& color) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ISolidColorBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ISolidColorBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ISolidColorBrushStatics
    {
        [[nodiscard]] auto ColorProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ISolidColorBrushStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ISolidColorBrushStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IThemeShadow
    {
        [[nodiscard]] auto Receivers() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IThemeShadow>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IThemeShadow<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IThemeShadowFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IThemeShadowFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IThemeShadowFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITileBrush
    {
        [[nodiscard]] auto AlignmentX() const;
        auto AlignmentX(Windows::UI::Xaml::Media::AlignmentX const& value) const;
        [[nodiscard]] auto AlignmentY() const;
        auto AlignmentY(Windows::UI::Xaml::Media::AlignmentY const& value) const;
        [[nodiscard]] auto Stretch() const;
        auto Stretch(Windows::UI::Xaml::Media::Stretch const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITileBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITileBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITileBrushFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITileBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITileBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITileBrushStatics
    {
        [[nodiscard]] auto AlignmentXProperty() const;
        [[nodiscard]] auto AlignmentYProperty() const;
        [[nodiscard]] auto StretchProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITileBrushStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITileBrushStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITimelineMarker
    {
        [[nodiscard]] auto Time() const;
        auto Time(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto Type() const;
        auto Type(param::hstring const& value) const;
        [[nodiscard]] auto Text() const;
        auto Text(param::hstring const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITimelineMarker>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITimelineMarker<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITimelineMarkerRoutedEventArgs
    {
        [[nodiscard]] auto Marker() const;
        auto Marker(Windows::UI::Xaml::Media::TimelineMarker const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITimelineMarkerRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITimelineMarkerStatics
    {
        [[nodiscard]] auto TimeProperty() const;
        [[nodiscard]] auto TypeProperty() const;
        [[nodiscard]] auto TextProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITimelineMarkerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITimelineMarkerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITransform
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITransform>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITransformFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITransformFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITransformFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITransformGroup
    {
        [[nodiscard]] auto Children() const;
        auto Children(Windows::UI::Xaml::Media::TransformCollection const& value) const;
        [[nodiscard]] auto Value() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITransformGroup>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITransformGroup<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITransformGroupStatics
    {
        [[nodiscard]] auto ChildrenProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITransformGroupStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITransformGroupStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITranslateTransform
    {
        [[nodiscard]] auto X() const;
        auto X(double value) const;
        [[nodiscard]] auto Y() const;
        auto Y(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITranslateTransform>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITranslateTransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITranslateTransformStatics
    {
        [[nodiscard]] auto XProperty() const;
        [[nodiscard]] auto YProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITranslateTransformStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITranslateTransformStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IVisualTreeHelper
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IVisualTreeHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IVisualTreeHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics
    {
        auto FindElementsInHostCoordinates(Windows::Foundation::Point const& intersectingPoint, Windows::UI::Xaml::UIElement const& subtree) const;
        auto FindElementsInHostCoordinates(Windows::Foundation::Rect const& intersectingRect, Windows::UI::Xaml::UIElement const& subtree) const;
        auto FindElementsInHostCoordinates(Windows::Foundation::Point const& intersectingPoint, Windows::UI::Xaml::UIElement const& subtree, bool includeAllElements) const;
        auto FindElementsInHostCoordinates(Windows::Foundation::Rect const& intersectingRect, Windows::UI::Xaml::UIElement const& subtree, bool includeAllElements) const;
        auto GetChild(Windows::UI::Xaml::DependencyObject const& reference, int32_t childIndex) const;
        auto GetChildrenCount(Windows::UI::Xaml::DependencyObject const& reference) const;
        auto GetParent(Windows::UI::Xaml::DependencyObject const& reference) const;
        auto DisconnectChildrenRecursive(Windows::UI::Xaml::UIElement const& element) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IVisualTreeHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics2
    {
        auto GetOpenPopups(Windows::UI::Xaml::Window const& window) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IVisualTreeHelperStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics3
    {
        auto GetOpenPopupsForXamlRoot(Windows::UI::Xaml::XamlRoot const& xamlRoot) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IVisualTreeHelperStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBase
    {
        [[nodiscard]] auto FallbackColor() const;
        auto FallbackColor(Windows::UI::Color const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlCompositionBrushBase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseOverrides
    {
        auto OnConnected() const;
        auto OnDisconnected() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseProtected
    {
        [[nodiscard]] auto CompositionBrush() const;
        auto CompositionBrush(Windows::UI::Composition::CompositionBrush const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseProtected<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseStatics
    {
        [[nodiscard]] auto FallbackColorProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlLight
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlLight>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlLight<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlLightFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlLightFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlLightFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlLightOverrides
    {
        auto GetId() const;
        auto OnConnected(Windows::UI::Xaml::UIElement const& newElement) const;
        auto OnDisconnected(Windows::UI::Xaml::UIElement const& oldElement) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlLightOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlLightOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlLightProtected
    {
        [[nodiscard]] auto CompositionLight() const;
        auto CompositionLight(Windows::UI::Composition::CompositionLight const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlLightProtected>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlLightProtected<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlLightStatics
    {
        auto AddTargetElement(param::hstring const& lightId, Windows::UI::Xaml::UIElement const& element) const;
        auto RemoveTargetElement(param::hstring const& lightId, Windows::UI::Xaml::UIElement const& element) const;
        auto AddTargetBrush(param::hstring const& lightId, Windows::UI::Xaml::Media::Brush const& brush) const;
        auto RemoveTargetBrush(param::hstring const& lightId, Windows::UI::Xaml::Media::Brush const& brush) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlLightStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlLightStatics<D>;
    };
    struct struct_Windows_UI_Xaml_Media_Matrix
    {
        double M11;
        double M12;
        double M21;
        double M22;
        double OffsetX;
        double OffsetY;
    };
    template <> struct abi<Windows::UI::Xaml::Media::Matrix>
    {
        using type = struct_Windows_UI_Xaml_Media_Matrix;
    };
}
#endif
