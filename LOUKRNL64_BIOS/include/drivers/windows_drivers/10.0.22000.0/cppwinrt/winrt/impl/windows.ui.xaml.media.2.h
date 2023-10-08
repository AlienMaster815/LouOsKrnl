// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Media_2_H
#define WINRT_Windows_UI_Xaml_Media_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media
{
    struct RateChangedRoutedEventHandler : Windows::Foundation::IUnknown
    {
        RateChangedRoutedEventHandler(std::nullptr_t = nullptr) noexcept {}
        RateChangedRoutedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> RateChangedRoutedEventHandler(L lambda);
        template <typename F> RateChangedRoutedEventHandler(F* function);
        template <typename O, typename M> RateChangedRoutedEventHandler(O* object, M method);
        template <typename O, typename M> RateChangedRoutedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> RateChangedRoutedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Media::RateChangedRoutedEventArgs const& e) const;
    };
    struct TimelineMarkerRoutedEventHandler : Windows::Foundation::IUnknown
    {
        TimelineMarkerRoutedEventHandler(std::nullptr_t = nullptr) noexcept {}
        TimelineMarkerRoutedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> TimelineMarkerRoutedEventHandler(L lambda);
        template <typename F> TimelineMarkerRoutedEventHandler(F* function);
        template <typename O, typename M> TimelineMarkerRoutedEventHandler(O* object, M method);
        template <typename O, typename M> TimelineMarkerRoutedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> TimelineMarkerRoutedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs const& e) const;
    };
    struct Matrix
    {
        double M11;
        double M12;
        double M21;
        double M22;
        double OffsetX;
        double OffsetY;
    };
    inline bool operator==(Matrix const& left, Matrix const& right) noexcept
    {
        return left.M11 == right.M11 && left.M12 == right.M12 && left.M21 == right.M21 && left.M22 == right.M22 && left.OffsetX == right.OffsetX && left.OffsetY == right.OffsetY;
    }
    inline bool operator!=(Matrix const& left, Matrix const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AcrylicBrush : Windows::UI::Xaml::Media::IAcrylicBrush,
        impl::base<AcrylicBrush, Windows::UI::Xaml::Media::XamlCompositionBrushBase, Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::DependencyObject>,
        impl::require<AcrylicBrush, Windows::UI::Xaml::Media::IAcrylicBrush2, Windows::UI::Xaml::Media::IXamlCompositionBrushBase, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::IBrushOverrides2, Windows::UI::Composition::IAnimationObject, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        AcrylicBrush(std::nullptr_t) noexcept {}
        AcrylicBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IAcrylicBrush(ptr, take_ownership_from_abi) {}
        AcrylicBrush();
        [[nodiscard]] static auto BackgroundSourceProperty();
        [[nodiscard]] static auto TintColorProperty();
        [[nodiscard]] static auto TintOpacityProperty();
        [[nodiscard]] static auto TintTransitionDurationProperty();
        [[nodiscard]] static auto AlwaysUseFallbackProperty();
        [[nodiscard]] static auto TintLuminosityOpacityProperty();
    };
    struct __declspec(empty_bases) ArcSegment : Windows::UI::Xaml::Media::IArcSegment,
        impl::base<ArcSegment, Windows::UI::Xaml::Media::PathSegment, Windows::UI::Xaml::DependencyObject>,
        impl::require<ArcSegment, Windows::UI::Xaml::Media::IPathSegment, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ArcSegment(std::nullptr_t) noexcept {}
        ArcSegment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IArcSegment(ptr, take_ownership_from_abi) {}
        ArcSegment();
        [[nodiscard]] static auto PointProperty();
        [[nodiscard]] static auto SizeProperty();
        [[nodiscard]] static auto RotationAngleProperty();
        [[nodiscard]] static auto IsLargeArcProperty();
        [[nodiscard]] static auto SweepDirectionProperty();
    };
    struct __declspec(empty_bases) BezierSegment : Windows::UI::Xaml::Media::IBezierSegment,
        impl::base<BezierSegment, Windows::UI::Xaml::Media::PathSegment, Windows::UI::Xaml::DependencyObject>,
        impl::require<BezierSegment, Windows::UI::Xaml::Media::IPathSegment, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        BezierSegment(std::nullptr_t) noexcept {}
        BezierSegment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IBezierSegment(ptr, take_ownership_from_abi) {}
        BezierSegment();
        [[nodiscard]] static auto Point1Property();
        [[nodiscard]] static auto Point2Property();
        [[nodiscard]] static auto Point3Property();
    };
    struct __declspec(empty_bases) BitmapCache : Windows::UI::Xaml::Media::IBitmapCache,
        impl::base<BitmapCache, Windows::UI::Xaml::Media::CacheMode, Windows::UI::Xaml::DependencyObject>,
        impl::require<BitmapCache, Windows::UI::Xaml::Media::ICacheMode, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        BitmapCache(std::nullptr_t) noexcept {}
        BitmapCache(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IBitmapCache(ptr, take_ownership_from_abi) {}
        BitmapCache();
    };
    struct __declspec(empty_bases) Brush : Windows::UI::Xaml::Media::IBrush,
        impl::base<Brush, Windows::UI::Xaml::DependencyObject>,
        impl::require<Brush, Windows::UI::Xaml::Media::IBrushOverrides2, Windows::UI::Composition::IAnimationObject, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Brush(std::nullptr_t) noexcept {}
        Brush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IBrush(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto OpacityProperty();
        [[nodiscard]] static auto TransformProperty();
        [[nodiscard]] static auto RelativeTransformProperty();
    };
    struct __declspec(empty_bases) BrushCollection : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Brush>
    {
        BrushCollection(std::nullptr_t) noexcept {}
        BrushCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Brush>(ptr, take_ownership_from_abi) {}
        BrushCollection();
    };
    struct __declspec(empty_bases) CacheMode : Windows::UI::Xaml::Media::ICacheMode,
        impl::base<CacheMode, Windows::UI::Xaml::DependencyObject>,
        impl::require<CacheMode, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        CacheMode(std::nullptr_t) noexcept {}
        CacheMode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::ICacheMode(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositeTransform : Windows::UI::Xaml::Media::ICompositeTransform,
        impl::base<CompositeTransform, Windows::UI::Xaml::Media::Transform, Windows::UI::Xaml::Media::GeneralTransform, Windows::UI::Xaml::DependencyObject>,
        impl::require<CompositeTransform, Windows::UI::Xaml::Media::ITransform, Windows::UI::Xaml::Media::IGeneralTransform, Windows::UI::Xaml::Media::IGeneralTransformOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        CompositeTransform(std::nullptr_t) noexcept {}
        CompositeTransform(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::ICompositeTransform(ptr, take_ownership_from_abi) {}
        CompositeTransform();
        [[nodiscard]] static auto CenterXProperty();
        [[nodiscard]] static auto CenterYProperty();
        [[nodiscard]] static auto ScaleXProperty();
        [[nodiscard]] static auto ScaleYProperty();
        [[nodiscard]] static auto SkewXProperty();
        [[nodiscard]] static auto SkewYProperty();
        [[nodiscard]] static auto RotationProperty();
        [[nodiscard]] static auto TranslateXProperty();
        [[nodiscard]] static auto TranslateYProperty();
    };
    struct __declspec(empty_bases) CompositionTarget : Windows::UI::Xaml::Media::ICompositionTarget
    {
        CompositionTarget(std::nullptr_t) noexcept {}
        CompositionTarget(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::ICompositionTarget(ptr, take_ownership_from_abi) {}
        static auto Rendering(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using Rendering_revoker = impl::factory_event_revoker<Windows::UI::Xaml::Media::ICompositionTargetStatics, &impl::abi_t<Windows::UI::Xaml::Media::ICompositionTargetStatics>::remove_Rendering>;
        [[nodiscard]] static Rendering_revoker Rendering(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto Rendering(winrt::event_token const& token);
        static auto SurfaceContentsLost(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using SurfaceContentsLost_revoker = impl::factory_event_revoker<Windows::UI::Xaml::Media::ICompositionTargetStatics, &impl::abi_t<Windows::UI::Xaml::Media::ICompositionTargetStatics>::remove_SurfaceContentsLost>;
        [[nodiscard]] static SurfaceContentsLost_revoker SurfaceContentsLost(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto SurfaceContentsLost(winrt::event_token const& token);
        static auto Rendered(Windows::Foundation::EventHandler<Windows::UI::Xaml::Media::RenderedEventArgs> const& handler);
        using Rendered_revoker = impl::factory_event_revoker<Windows::UI::Xaml::Media::ICompositionTargetStatics3, &impl::abi_t<Windows::UI::Xaml::Media::ICompositionTargetStatics3>::remove_Rendered>;
        [[nodiscard]] static Rendered_revoker Rendered(auto_revoke_t, Windows::Foundation::EventHandler<Windows::UI::Xaml::Media::RenderedEventArgs> const& handler);
        static auto Rendered(winrt::event_token const& token);
    };
    struct __declspec(empty_bases) DoubleCollection : Windows::Foundation::Collections::IVector<double>
    {
        DoubleCollection(std::nullptr_t) noexcept {}
        DoubleCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<double>(ptr, take_ownership_from_abi) {}
        DoubleCollection();
    };
    struct __declspec(empty_bases) EllipseGeometry : Windows::UI::Xaml::Media::IEllipseGeometry,
        impl::base<EllipseGeometry, Windows::UI::Xaml::Media::Geometry, Windows::UI::Xaml::DependencyObject>,
        impl::require<EllipseGeometry, Windows::UI::Xaml::Media::IGeometry, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        EllipseGeometry(std::nullptr_t) noexcept {}
        EllipseGeometry(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IEllipseGeometry(ptr, take_ownership_from_abi) {}
        EllipseGeometry();
        [[nodiscard]] static auto CenterProperty();
        [[nodiscard]] static auto RadiusXProperty();
        [[nodiscard]] static auto RadiusYProperty();
    };
    struct __declspec(empty_bases) FontFamily : Windows::UI::Xaml::Media::IFontFamily
    {
        FontFamily(std::nullptr_t) noexcept {}
        FontFamily(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IFontFamily(ptr, take_ownership_from_abi) {}
        explicit FontFamily(param::hstring const& familyName);
        [[nodiscard]] static auto XamlAutoFontFamily();
    };
    struct __declspec(empty_bases) GeneralTransform : Windows::UI::Xaml::Media::IGeneralTransform,
        impl::base<GeneralTransform, Windows::UI::Xaml::DependencyObject>,
        impl::require<GeneralTransform, Windows::UI::Xaml::Media::IGeneralTransformOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        GeneralTransform(std::nullptr_t) noexcept {}
        GeneralTransform(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IGeneralTransform(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Geometry : Windows::UI::Xaml::Media::IGeometry,
        impl::base<Geometry, Windows::UI::Xaml::DependencyObject>,
        impl::require<Geometry, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Geometry(std::nullptr_t) noexcept {}
        Geometry(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IGeometry(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Empty();
        [[nodiscard]] static auto StandardFlatteningTolerance();
        [[nodiscard]] static auto TransformProperty();
    };
    struct __declspec(empty_bases) GeometryCollection : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Geometry>
    {
        GeometryCollection(std::nullptr_t) noexcept {}
        GeometryCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Geometry>(ptr, take_ownership_from_abi) {}
        GeometryCollection();
    };
    struct __declspec(empty_bases) GeometryGroup : Windows::UI::Xaml::Media::IGeometryGroup,
        impl::base<GeometryGroup, Windows::UI::Xaml::Media::Geometry, Windows::UI::Xaml::DependencyObject>,
        impl::require<GeometryGroup, Windows::UI::Xaml::Media::IGeometry, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        GeometryGroup(std::nullptr_t) noexcept {}
        GeometryGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IGeometryGroup(ptr, take_ownership_from_abi) {}
        GeometryGroup();
        [[nodiscard]] static auto FillRuleProperty();
        [[nodiscard]] static auto ChildrenProperty();
    };
    struct __declspec(empty_bases) GradientBrush : Windows::UI::Xaml::Media::IGradientBrush,
        impl::base<GradientBrush, Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::DependencyObject>,
        impl::require<GradientBrush, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::IBrushOverrides2, Windows::UI::Composition::IAnimationObject, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        GradientBrush(std::nullptr_t) noexcept {}
        GradientBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IGradientBrush(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto SpreadMethodProperty();
        [[nodiscard]] static auto MappingModeProperty();
        [[nodiscard]] static auto ColorInterpolationModeProperty();
        [[nodiscard]] static auto GradientStopsProperty();
    };
    struct __declspec(empty_bases) GradientStop : Windows::UI::Xaml::Media::IGradientStop,
        impl::base<GradientStop, Windows::UI::Xaml::DependencyObject>,
        impl::require<GradientStop, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        GradientStop(std::nullptr_t) noexcept {}
        GradientStop(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IGradientStop(ptr, take_ownership_from_abi) {}
        GradientStop();
        [[nodiscard]] static auto ColorProperty();
        [[nodiscard]] static auto OffsetProperty();
    };
    struct __declspec(empty_bases) GradientStopCollection : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::GradientStop>
    {
        GradientStopCollection(std::nullptr_t) noexcept {}
        GradientStopCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::GradientStop>(ptr, take_ownership_from_abi) {}
        GradientStopCollection();
    };
    struct __declspec(empty_bases) ImageBrush : Windows::UI::Xaml::Media::IImageBrush,
        impl::base<ImageBrush, Windows::UI::Xaml::Media::TileBrush, Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::DependencyObject>,
        impl::require<ImageBrush, Windows::UI::Xaml::Media::ITileBrush, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::IBrushOverrides2, Windows::UI::Composition::IAnimationObject, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ImageBrush(std::nullptr_t) noexcept {}
        ImageBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IImageBrush(ptr, take_ownership_from_abi) {}
        ImageBrush();
        [[nodiscard]] static auto ImageSourceProperty();
    };
    struct __declspec(empty_bases) ImageSource : Windows::UI::Xaml::Media::IImageSource,
        impl::base<ImageSource, Windows::UI::Xaml::DependencyObject>,
        impl::require<ImageSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ImageSource(std::nullptr_t) noexcept {}
        ImageSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IImageSource(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LineGeometry : Windows::UI::Xaml::Media::ILineGeometry,
        impl::base<LineGeometry, Windows::UI::Xaml::Media::Geometry, Windows::UI::Xaml::DependencyObject>,
        impl::require<LineGeometry, Windows::UI::Xaml::Media::IGeometry, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        LineGeometry(std::nullptr_t) noexcept {}
        LineGeometry(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::ILineGeometry(ptr, take_ownership_from_abi) {}
        LineGeometry();
        [[nodiscard]] static auto StartPointProperty();
        [[nodiscard]] static auto EndPointProperty();
    };
    struct __declspec(empty_bases) LineSegment : Windows::UI::Xaml::Media::ILineSegment,
        impl::base<LineSegment, Windows::UI::Xaml::Media::PathSegment, Windows::UI::Xaml::DependencyObject>,
        impl::require<LineSegment, Windows::UI::Xaml::Media::IPathSegment, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        LineSegment(std::nullptr_t) noexcept {}
        LineSegment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::ILineSegment(ptr, take_ownership_from_abi) {}
        LineSegment();
        [[nodiscard]] static auto PointProperty();
    };
    struct __declspec(empty_bases) LinearGradientBrush : Windows::UI::Xaml::Media::ILinearGradientBrush,
        impl::base<LinearGradientBrush, Windows::UI::Xaml::Media::GradientBrush, Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::DependencyObject>,
        impl::require<LinearGradientBrush, Windows::UI::Xaml::Media::IGradientBrush, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::IBrushOverrides2, Windows::UI::Composition::IAnimationObject, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        LinearGradientBrush(std::nullptr_t) noexcept {}
        LinearGradientBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::ILinearGradientBrush(ptr, take_ownership_from_abi) {}
        LinearGradientBrush();
        LinearGradientBrush(Windows::UI::Xaml::Media::GradientStopCollection const& gradientStopCollection, double angle);
        [[nodiscard]] static auto StartPointProperty();
        [[nodiscard]] static auto EndPointProperty();
    };
    struct __declspec(empty_bases) LoadedImageSourceLoadCompletedEventArgs : Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs
    {
        LoadedImageSourceLoadCompletedEventArgs(std::nullptr_t) noexcept {}
        LoadedImageSourceLoadCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LoadedImageSurface : Windows::UI::Xaml::Media::ILoadedImageSurface,
        impl::require<LoadedImageSurface, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionSurface>
    {
        LoadedImageSurface(std::nullptr_t) noexcept {}
        LoadedImageSurface(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::ILoadedImageSurface(ptr, take_ownership_from_abi) {}
        static auto StartLoadFromUri(Windows::Foundation::Uri const& uri, Windows::Foundation::Size const& desiredMaxSize);
        static auto StartLoadFromUri(Windows::Foundation::Uri const& uri);
        static auto StartLoadFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Foundation::Size const& desiredMaxSize);
        static auto StartLoadFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream);
    };
    struct __declspec(empty_bases) Matrix3DProjection : Windows::UI::Xaml::Media::IMatrix3DProjection,
        impl::base<Matrix3DProjection, Windows::UI::Xaml::Media::Projection, Windows::UI::Xaml::DependencyObject>,
        impl::require<Matrix3DProjection, Windows::UI::Xaml::Media::IProjection, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Matrix3DProjection(std::nullptr_t) noexcept {}
        Matrix3DProjection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IMatrix3DProjection(ptr, take_ownership_from_abi) {}
        Matrix3DProjection();
        [[nodiscard]] static auto ProjectionMatrixProperty();
    };
    struct __declspec(empty_bases) MatrixHelper : Windows::UI::Xaml::Media::IMatrixHelper
    {
        MatrixHelper(std::nullptr_t) noexcept {}
        MatrixHelper(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IMatrixHelper(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Identity();
        static auto FromElements(double m11, double m12, double m21, double m22, double offsetX, double offsetY);
        static auto GetIsIdentity(Windows::UI::Xaml::Media::Matrix const& target);
        static auto Transform(Windows::UI::Xaml::Media::Matrix const& target, Windows::Foundation::Point const& point);
    };
    struct __declspec(empty_bases) MatrixTransform : Windows::UI::Xaml::Media::IMatrixTransform,
        impl::base<MatrixTransform, Windows::UI::Xaml::Media::Transform, Windows::UI::Xaml::Media::GeneralTransform, Windows::UI::Xaml::DependencyObject>,
        impl::require<MatrixTransform, Windows::UI::Xaml::Media::ITransform, Windows::UI::Xaml::Media::IGeneralTransform, Windows::UI::Xaml::Media::IGeneralTransformOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MatrixTransform(std::nullptr_t) noexcept {}
        MatrixTransform(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IMatrixTransform(ptr, take_ownership_from_abi) {}
        MatrixTransform();
        [[nodiscard]] static auto MatrixProperty();
    };
    struct __declspec(empty_bases) MediaTransportControlsThumbnailRequestedEventArgs : Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs
    {
        MediaTransportControlsThumbnailRequestedEventArgs(std::nullptr_t) noexcept {}
        MediaTransportControlsThumbnailRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PartialMediaFailureDetectedEventArgs : Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs,
        impl::require<PartialMediaFailureDetectedEventArgs, Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2>
    {
        PartialMediaFailureDetectedEventArgs(std::nullptr_t) noexcept {}
        PartialMediaFailureDetectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs(ptr, take_ownership_from_abi) {}
        PartialMediaFailureDetectedEventArgs();
    };
    struct __declspec(empty_bases) PathFigure : Windows::UI::Xaml::Media::IPathFigure,
        impl::base<PathFigure, Windows::UI::Xaml::DependencyObject>,
        impl::require<PathFigure, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        PathFigure(std::nullptr_t) noexcept {}
        PathFigure(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IPathFigure(ptr, take_ownership_from_abi) {}
        PathFigure();
        [[nodiscard]] static auto SegmentsProperty();
        [[nodiscard]] static auto StartPointProperty();
        [[nodiscard]] static auto IsClosedProperty();
        [[nodiscard]] static auto IsFilledProperty();
    };
    struct __declspec(empty_bases) PathFigureCollection : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::PathFigure>
    {
        PathFigureCollection(std::nullptr_t) noexcept {}
        PathFigureCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::PathFigure>(ptr, take_ownership_from_abi) {}
        PathFigureCollection();
    };
    struct __declspec(empty_bases) PathGeometry : Windows::UI::Xaml::Media::IPathGeometry,
        impl::base<PathGeometry, Windows::UI::Xaml::Media::Geometry, Windows::UI::Xaml::DependencyObject>,
        impl::require<PathGeometry, Windows::UI::Xaml::Media::IGeometry, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        PathGeometry(std::nullptr_t) noexcept {}
        PathGeometry(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IPathGeometry(ptr, take_ownership_from_abi) {}
        PathGeometry();
        [[nodiscard]] static auto FillRuleProperty();
        [[nodiscard]] static auto FiguresProperty();
    };
    struct __declspec(empty_bases) PathSegment : Windows::UI::Xaml::Media::IPathSegment,
        impl::base<PathSegment, Windows::UI::Xaml::DependencyObject>,
        impl::require<PathSegment, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        PathSegment(std::nullptr_t) noexcept {}
        PathSegment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IPathSegment(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PathSegmentCollection : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::PathSegment>
    {
        PathSegmentCollection(std::nullptr_t) noexcept {}
        PathSegmentCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::PathSegment>(ptr, take_ownership_from_abi) {}
        PathSegmentCollection();
    };
    struct __declspec(empty_bases) PlaneProjection : Windows::UI::Xaml::Media::IPlaneProjection,
        impl::base<PlaneProjection, Windows::UI::Xaml::Media::Projection, Windows::UI::Xaml::DependencyObject>,
        impl::require<PlaneProjection, Windows::UI::Xaml::Media::IProjection, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        PlaneProjection(std::nullptr_t) noexcept {}
        PlaneProjection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IPlaneProjection(ptr, take_ownership_from_abi) {}
        PlaneProjection();
        [[nodiscard]] static auto LocalOffsetXProperty();
        [[nodiscard]] static auto LocalOffsetYProperty();
        [[nodiscard]] static auto LocalOffsetZProperty();
        [[nodiscard]] static auto RotationXProperty();
        [[nodiscard]] static auto RotationYProperty();
        [[nodiscard]] static auto RotationZProperty();
        [[nodiscard]] static auto CenterOfRotationXProperty();
        [[nodiscard]] static auto CenterOfRotationYProperty();
        [[nodiscard]] static auto CenterOfRotationZProperty();
        [[nodiscard]] static auto GlobalOffsetXProperty();
        [[nodiscard]] static auto GlobalOffsetYProperty();
        [[nodiscard]] static auto GlobalOffsetZProperty();
        [[nodiscard]] static auto ProjectionMatrixProperty();
    };
    struct __declspec(empty_bases) PointCollection : Windows::Foundation::Collections::IVector<Windows::Foundation::Point>
    {
        PointCollection(std::nullptr_t) noexcept {}
        PointCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<Windows::Foundation::Point>(ptr, take_ownership_from_abi) {}
        PointCollection();
    };
    struct __declspec(empty_bases) PolyBezierSegment : Windows::UI::Xaml::Media::IPolyBezierSegment,
        impl::base<PolyBezierSegment, Windows::UI::Xaml::Media::PathSegment, Windows::UI::Xaml::DependencyObject>,
        impl::require<PolyBezierSegment, Windows::UI::Xaml::Media::IPathSegment, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        PolyBezierSegment(std::nullptr_t) noexcept {}
        PolyBezierSegment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IPolyBezierSegment(ptr, take_ownership_from_abi) {}
        PolyBezierSegment();
        [[nodiscard]] static auto PointsProperty();
    };
    struct __declspec(empty_bases) PolyLineSegment : Windows::UI::Xaml::Media::IPolyLineSegment,
        impl::base<PolyLineSegment, Windows::UI::Xaml::Media::PathSegment, Windows::UI::Xaml::DependencyObject>,
        impl::require<PolyLineSegment, Windows::UI::Xaml::Media::IPathSegment, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        PolyLineSegment(std::nullptr_t) noexcept {}
        PolyLineSegment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IPolyLineSegment(ptr, take_ownership_from_abi) {}
        PolyLineSegment();
        [[nodiscard]] static auto PointsProperty();
    };
    struct __declspec(empty_bases) PolyQuadraticBezierSegment : Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment,
        impl::base<PolyQuadraticBezierSegment, Windows::UI::Xaml::Media::PathSegment, Windows::UI::Xaml::DependencyObject>,
        impl::require<PolyQuadraticBezierSegment, Windows::UI::Xaml::Media::IPathSegment, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        PolyQuadraticBezierSegment(std::nullptr_t) noexcept {}
        PolyQuadraticBezierSegment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment(ptr, take_ownership_from_abi) {}
        PolyQuadraticBezierSegment();
        [[nodiscard]] static auto PointsProperty();
    };
    struct __declspec(empty_bases) Projection : Windows::UI::Xaml::Media::IProjection,
        impl::base<Projection, Windows::UI::Xaml::DependencyObject>,
        impl::require<Projection, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Projection(std::nullptr_t) noexcept {}
        Projection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IProjection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) QuadraticBezierSegment : Windows::UI::Xaml::Media::IQuadraticBezierSegment,
        impl::base<QuadraticBezierSegment, Windows::UI::Xaml::Media::PathSegment, Windows::UI::Xaml::DependencyObject>,
        impl::require<QuadraticBezierSegment, Windows::UI::Xaml::Media::IPathSegment, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        QuadraticBezierSegment(std::nullptr_t) noexcept {}
        QuadraticBezierSegment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IQuadraticBezierSegment(ptr, take_ownership_from_abi) {}
        QuadraticBezierSegment();
        [[nodiscard]] static auto Point1Property();
        [[nodiscard]] static auto Point2Property();
    };
    struct __declspec(empty_bases) RateChangedRoutedEventArgs : Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs,
        impl::base<RateChangedRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<RateChangedRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
    {
        RateChangedRoutedEventArgs(std::nullptr_t) noexcept {}
        RateChangedRoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs(ptr, take_ownership_from_abi) {}
        RateChangedRoutedEventArgs();
    };
    struct __declspec(empty_bases) RectangleGeometry : Windows::UI::Xaml::Media::IRectangleGeometry,
        impl::base<RectangleGeometry, Windows::UI::Xaml::Media::Geometry, Windows::UI::Xaml::DependencyObject>,
        impl::require<RectangleGeometry, Windows::UI::Xaml::Media::IGeometry, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        RectangleGeometry(std::nullptr_t) noexcept {}
        RectangleGeometry(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IRectangleGeometry(ptr, take_ownership_from_abi) {}
        RectangleGeometry();
        [[nodiscard]] static auto RectProperty();
    };
    struct __declspec(empty_bases) RenderedEventArgs : Windows::UI::Xaml::Media::IRenderedEventArgs
    {
        RenderedEventArgs(std::nullptr_t) noexcept {}
        RenderedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IRenderedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RenderingEventArgs : Windows::UI::Xaml::Media::IRenderingEventArgs
    {
        RenderingEventArgs(std::nullptr_t) noexcept {}
        RenderingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IRenderingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RevealBackgroundBrush : Windows::UI::Xaml::Media::IRevealBackgroundBrush,
        impl::base<RevealBackgroundBrush, Windows::UI::Xaml::Media::RevealBrush, Windows::UI::Xaml::Media::XamlCompositionBrushBase, Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::DependencyObject>,
        impl::require<RevealBackgroundBrush, Windows::UI::Xaml::Media::IRevealBrush, Windows::UI::Xaml::Media::IXamlCompositionBrushBase, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::IBrushOverrides2, Windows::UI::Composition::IAnimationObject, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        RevealBackgroundBrush(std::nullptr_t) noexcept {}
        RevealBackgroundBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IRevealBackgroundBrush(ptr, take_ownership_from_abi) {}
        RevealBackgroundBrush();
    };
    struct __declspec(empty_bases) RevealBorderBrush : Windows::UI::Xaml::Media::IRevealBorderBrush,
        impl::base<RevealBorderBrush, Windows::UI::Xaml::Media::RevealBrush, Windows::UI::Xaml::Media::XamlCompositionBrushBase, Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::DependencyObject>,
        impl::require<RevealBorderBrush, Windows::UI::Xaml::Media::IRevealBrush, Windows::UI::Xaml::Media::IXamlCompositionBrushBase, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::IBrushOverrides2, Windows::UI::Composition::IAnimationObject, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        RevealBorderBrush(std::nullptr_t) noexcept {}
        RevealBorderBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IRevealBorderBrush(ptr, take_ownership_from_abi) {}
        RevealBorderBrush();
    };
    struct __declspec(empty_bases) RevealBrush : Windows::UI::Xaml::Media::IRevealBrush,
        impl::base<RevealBrush, Windows::UI::Xaml::Media::XamlCompositionBrushBase, Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::DependencyObject>,
        impl::require<RevealBrush, Windows::UI::Xaml::Media::IXamlCompositionBrushBase, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::IBrushOverrides2, Windows::UI::Composition::IAnimationObject, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        RevealBrush(std::nullptr_t) noexcept {}
        RevealBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IRevealBrush(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto ColorProperty();
        [[nodiscard]] static auto TargetThemeProperty();
        [[nodiscard]] static auto AlwaysUseFallbackProperty();
        [[nodiscard]] static auto StateProperty();
        static auto SetState(Windows::UI::Xaml::UIElement const& element, Windows::UI::Xaml::Media::RevealBrushState const& value);
        static auto GetState(Windows::UI::Xaml::UIElement const& element);
    };
    struct __declspec(empty_bases) RotateTransform : Windows::UI::Xaml::Media::IRotateTransform,
        impl::base<RotateTransform, Windows::UI::Xaml::Media::Transform, Windows::UI::Xaml::Media::GeneralTransform, Windows::UI::Xaml::DependencyObject>,
        impl::require<RotateTransform, Windows::UI::Xaml::Media::ITransform, Windows::UI::Xaml::Media::IGeneralTransform, Windows::UI::Xaml::Media::IGeneralTransformOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        RotateTransform(std::nullptr_t) noexcept {}
        RotateTransform(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IRotateTransform(ptr, take_ownership_from_abi) {}
        RotateTransform();
        [[nodiscard]] static auto CenterXProperty();
        [[nodiscard]] static auto CenterYProperty();
        [[nodiscard]] static auto AngleProperty();
    };
    struct __declspec(empty_bases) ScaleTransform : Windows::UI::Xaml::Media::IScaleTransform,
        impl::base<ScaleTransform, Windows::UI::Xaml::Media::Transform, Windows::UI::Xaml::Media::GeneralTransform, Windows::UI::Xaml::DependencyObject>,
        impl::require<ScaleTransform, Windows::UI::Xaml::Media::ITransform, Windows::UI::Xaml::Media::IGeneralTransform, Windows::UI::Xaml::Media::IGeneralTransformOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ScaleTransform(std::nullptr_t) noexcept {}
        ScaleTransform(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IScaleTransform(ptr, take_ownership_from_abi) {}
        ScaleTransform();
        [[nodiscard]] static auto CenterXProperty();
        [[nodiscard]] static auto CenterYProperty();
        [[nodiscard]] static auto ScaleXProperty();
        [[nodiscard]] static auto ScaleYProperty();
    };
    struct __declspec(empty_bases) Shadow : Windows::UI::Xaml::Media::IShadow,
        impl::base<Shadow, Windows::UI::Xaml::DependencyObject>,
        impl::require<Shadow, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Shadow(std::nullptr_t) noexcept {}
        Shadow(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IShadow(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SkewTransform : Windows::UI::Xaml::Media::ISkewTransform,
        impl::base<SkewTransform, Windows::UI::Xaml::Media::Transform, Windows::UI::Xaml::Media::GeneralTransform, Windows::UI::Xaml::DependencyObject>,
        impl::require<SkewTransform, Windows::UI::Xaml::Media::ITransform, Windows::UI::Xaml::Media::IGeneralTransform, Windows::UI::Xaml::Media::IGeneralTransformOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        SkewTransform(std::nullptr_t) noexcept {}
        SkewTransform(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::ISkewTransform(ptr, take_ownership_from_abi) {}
        SkewTransform();
        [[nodiscard]] static auto CenterXProperty();
        [[nodiscard]] static auto CenterYProperty();
        [[nodiscard]] static auto AngleXProperty();
        [[nodiscard]] static auto AngleYProperty();
    };
    struct __declspec(empty_bases) SolidColorBrush : Windows::UI::Xaml::Media::ISolidColorBrush,
        impl::base<SolidColorBrush, Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::DependencyObject>,
        impl::require<SolidColorBrush, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::IBrushOverrides2, Windows::UI::Composition::IAnimationObject, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        SolidColorBrush(std::nullptr_t) noexcept {}
        SolidColorBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::ISolidColorBrush(ptr, take_ownership_from_abi) {}
        SolidColorBrush();
        explicit SolidColorBrush(Windows::UI::Color const& color);
        [[nodiscard]] static auto ColorProperty();
    };
    struct __declspec(empty_bases) ThemeShadow : Windows::UI::Xaml::Media::IThemeShadow,
        impl::base<ThemeShadow, Windows::UI::Xaml::Media::Shadow, Windows::UI::Xaml::DependencyObject>,
        impl::require<ThemeShadow, Windows::UI::Xaml::Media::IShadow, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ThemeShadow(std::nullptr_t) noexcept {}
        ThemeShadow(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IThemeShadow(ptr, take_ownership_from_abi) {}
        ThemeShadow();
    };
    struct __declspec(empty_bases) TileBrush : Windows::UI::Xaml::Media::ITileBrush,
        impl::base<TileBrush, Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::DependencyObject>,
        impl::require<TileBrush, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::IBrushOverrides2, Windows::UI::Composition::IAnimationObject, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        TileBrush(std::nullptr_t) noexcept {}
        TileBrush(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::ITileBrush(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto AlignmentXProperty();
        [[nodiscard]] static auto AlignmentYProperty();
        [[nodiscard]] static auto StretchProperty();
    };
    struct __declspec(empty_bases) TimelineMarker : Windows::UI::Xaml::Media::ITimelineMarker,
        impl::base<TimelineMarker, Windows::UI::Xaml::DependencyObject>,
        impl::require<TimelineMarker, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        TimelineMarker(std::nullptr_t) noexcept {}
        TimelineMarker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::ITimelineMarker(ptr, take_ownership_from_abi) {}
        TimelineMarker();
        [[nodiscard]] static auto TimeProperty();
        [[nodiscard]] static auto TypeProperty();
        [[nodiscard]] static auto TextProperty();
    };
    struct __declspec(empty_bases) TimelineMarkerCollection : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::TimelineMarker>
    {
        TimelineMarkerCollection(std::nullptr_t) noexcept {}
        TimelineMarkerCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::TimelineMarker>(ptr, take_ownership_from_abi) {}
        TimelineMarkerCollection();
    };
    struct __declspec(empty_bases) TimelineMarkerRoutedEventArgs : Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs,
        impl::base<TimelineMarkerRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<TimelineMarkerRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
    {
        TimelineMarkerRoutedEventArgs(std::nullptr_t) noexcept {}
        TimelineMarkerRoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs(ptr, take_ownership_from_abi) {}
        TimelineMarkerRoutedEventArgs();
    };
    struct __declspec(empty_bases) Transform : Windows::UI::Xaml::Media::ITransform,
        impl::base<Transform, Windows::UI::Xaml::Media::GeneralTransform, Windows::UI::Xaml::DependencyObject>,
        impl::require<Transform, Windows::UI::Xaml::Media::IGeneralTransform, Windows::UI::Xaml::Media::IGeneralTransformOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Transform(std::nullptr_t) noexcept {}
        Transform(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::ITransform(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TransformCollection : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Transform>
    {
        TransformCollection(std::nullptr_t) noexcept {}
        TransformCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Transform>(ptr, take_ownership_from_abi) {}
        TransformCollection();
    };
    struct __declspec(empty_bases) TransformGroup : Windows::UI::Xaml::Media::ITransformGroup,
        impl::base<TransformGroup, Windows::UI::Xaml::Media::Transform, Windows::UI::Xaml::Media::GeneralTransform, Windows::UI::Xaml::DependencyObject>,
        impl::require<TransformGroup, Windows::UI::Xaml::Media::ITransform, Windows::UI::Xaml::Media::IGeneralTransform, Windows::UI::Xaml::Media::IGeneralTransformOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        TransformGroup(std::nullptr_t) noexcept {}
        TransformGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::ITransformGroup(ptr, take_ownership_from_abi) {}
        TransformGroup();
        [[nodiscard]] static auto ChildrenProperty();
    };
    struct __declspec(empty_bases) TranslateTransform : Windows::UI::Xaml::Media::ITranslateTransform,
        impl::base<TranslateTransform, Windows::UI::Xaml::Media::Transform, Windows::UI::Xaml::Media::GeneralTransform, Windows::UI::Xaml::DependencyObject>,
        impl::require<TranslateTransform, Windows::UI::Xaml::Media::ITransform, Windows::UI::Xaml::Media::IGeneralTransform, Windows::UI::Xaml::Media::IGeneralTransformOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        TranslateTransform(std::nullptr_t) noexcept {}
        TranslateTransform(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::ITranslateTransform(ptr, take_ownership_from_abi) {}
        TranslateTransform();
        [[nodiscard]] static auto XProperty();
        [[nodiscard]] static auto YProperty();
    };
    struct __declspec(empty_bases) VisualTreeHelper : Windows::UI::Xaml::Media::IVisualTreeHelper
    {
        VisualTreeHelper(std::nullptr_t) noexcept {}
        VisualTreeHelper(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IVisualTreeHelper(ptr, take_ownership_from_abi) {}
        static auto FindElementsInHostCoordinates(Windows::Foundation::Point const& intersectingPoint, Windows::UI::Xaml::UIElement const& subtree);
        static auto FindElementsInHostCoordinates(Windows::Foundation::Rect const& intersectingRect, Windows::UI::Xaml::UIElement const& subtree);
        static auto FindElementsInHostCoordinates(Windows::Foundation::Point const& intersectingPoint, Windows::UI::Xaml::UIElement const& subtree, bool includeAllElements);
        static auto FindElementsInHostCoordinates(Windows::Foundation::Rect const& intersectingRect, Windows::UI::Xaml::UIElement const& subtree, bool includeAllElements);
        static auto GetChild(Windows::UI::Xaml::DependencyObject const& reference, int32_t childIndex);
        static auto GetChildrenCount(Windows::UI::Xaml::DependencyObject const& reference);
        static auto GetParent(Windows::UI::Xaml::DependencyObject const& reference);
        static auto DisconnectChildrenRecursive(Windows::UI::Xaml::UIElement const& element);
        static auto GetOpenPopups(Windows::UI::Xaml::Window const& window);
        static auto GetOpenPopupsForXamlRoot(Windows::UI::Xaml::XamlRoot const& xamlRoot);
    };
    struct __declspec(empty_bases) XamlCompositionBrushBase : Windows::UI::Xaml::Media::IXamlCompositionBrushBase,
        impl::base<XamlCompositionBrushBase, Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::DependencyObject>,
        impl::require<XamlCompositionBrushBase, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::IBrushOverrides2, Windows::UI::Composition::IAnimationObject, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        XamlCompositionBrushBase(std::nullptr_t) noexcept {}
        XamlCompositionBrushBase(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IXamlCompositionBrushBase(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto FallbackColorProperty();
    };
    struct __declspec(empty_bases) XamlLight : Windows::UI::Xaml::Media::IXamlLight,
        impl::base<XamlLight, Windows::UI::Xaml::DependencyObject>,
        impl::require<XamlLight, Windows::UI::Xaml::Media::IXamlLightProtected, Windows::UI::Xaml::Media::IXamlLightOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        XamlLight(std::nullptr_t) noexcept {}
        XamlLight(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Media::IXamlLight(ptr, take_ownership_from_abi) {}
        XamlLight();
        static auto AddTargetElement(param::hstring const& lightId, Windows::UI::Xaml::UIElement const& element);
        static auto RemoveTargetElement(param::hstring const& lightId, Windows::UI::Xaml::UIElement const& element);
        static auto AddTargetBrush(param::hstring const& lightId, Windows::UI::Xaml::Media::Brush const& brush);
        static auto RemoveTargetBrush(param::hstring const& lightId, Windows::UI::Xaml::Media::Brush const& brush);
    };
    template <typename D>
    class IBrushOverrides2T
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IBrushOverrides2 = winrt::Windows::UI::Xaml::Media::IBrushOverrides2;
        WINRT_IMPL_AUTO(void) PopulatePropertyInfoOverride(param::hstring const& propertyName, Windows::UI::Composition::AnimationPropertyInfo const& animationPropertyInfo) const;
    };
    template <typename D>
    class IGeneralTransformOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IGeneralTransformOverrides = winrt::Windows::UI::Xaml::Media::IGeneralTransformOverrides;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::GeneralTransform) InverseCore() const;
        WINRT_IMPL_AUTO(bool) TryTransformCore(Windows::Foundation::Point const& inPoint, Windows::Foundation::Point& outPoint) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Rect) TransformBoundsCore(Windows::Foundation::Rect const& rect) const;
    };
    template <typename D>
    class IXamlCompositionBrushBaseOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IXamlCompositionBrushBaseOverrides = winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides;
        WINRT_IMPL_AUTO(void) OnConnected() const;
        WINRT_IMPL_AUTO(void) OnDisconnected() const;
    };
    template <typename D>
    class IXamlLightOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IXamlLightOverrides = winrt::Windows::UI::Xaml::Media::IXamlLightOverrides;
        WINRT_IMPL_AUTO(hstring) GetId() const;
        WINRT_IMPL_AUTO(void) OnConnected(Windows::UI::Xaml::UIElement const& newElement) const;
        WINRT_IMPL_AUTO(void) OnDisconnected(Windows::UI::Xaml::UIElement const& oldElement) const;
    };
}
#endif
