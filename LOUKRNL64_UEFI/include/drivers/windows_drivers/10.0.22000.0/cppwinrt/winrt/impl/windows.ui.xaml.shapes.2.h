// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Shapes_2_H
#define WINRT_Windows_UI_Xaml_Shapes_2_H
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Shapes.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Shapes
{
    struct __declspec(empty_bases) Ellipse : Windows::UI::Xaml::Shapes::IEllipse,
        impl::base<Ellipse, Windows::UI::Xaml::Shapes::Shape, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Ellipse, Windows::UI::Xaml::Shapes::IShape, Windows::UI::Xaml::Shapes::IShape2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Ellipse(std::nullptr_t) noexcept {}
        Ellipse(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Shapes::IEllipse(ptr, take_ownership_from_abi) {}
        Ellipse();
    };
    struct __declspec(empty_bases) Line : Windows::UI::Xaml::Shapes::ILine,
        impl::base<Line, Windows::UI::Xaml::Shapes::Shape, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Line, Windows::UI::Xaml::Shapes::IShape, Windows::UI::Xaml::Shapes::IShape2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Line(std::nullptr_t) noexcept {}
        Line(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Shapes::ILine(ptr, take_ownership_from_abi) {}
        Line();
        [[nodiscard]] static auto X1Property();
        [[nodiscard]] static auto Y1Property();
        [[nodiscard]] static auto X2Property();
        [[nodiscard]] static auto Y2Property();
    };
    struct __declspec(empty_bases) Path : Windows::UI::Xaml::Shapes::IPath,
        impl::base<Path, Windows::UI::Xaml::Shapes::Shape, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Path, Windows::UI::Xaml::Shapes::IShape, Windows::UI::Xaml::Shapes::IShape2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Path(std::nullptr_t) noexcept {}
        Path(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Shapes::IPath(ptr, take_ownership_from_abi) {}
        Path();
        [[nodiscard]] static auto DataProperty();
    };
    struct __declspec(empty_bases) Polygon : Windows::UI::Xaml::Shapes::IPolygon,
        impl::base<Polygon, Windows::UI::Xaml::Shapes::Shape, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Polygon, Windows::UI::Xaml::Shapes::IShape, Windows::UI::Xaml::Shapes::IShape2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Polygon(std::nullptr_t) noexcept {}
        Polygon(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Shapes::IPolygon(ptr, take_ownership_from_abi) {}
        Polygon();
        [[nodiscard]] static auto FillRuleProperty();
        [[nodiscard]] static auto PointsProperty();
    };
    struct __declspec(empty_bases) Polyline : Windows::UI::Xaml::Shapes::IPolyline,
        impl::base<Polyline, Windows::UI::Xaml::Shapes::Shape, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Polyline, Windows::UI::Xaml::Shapes::IShape, Windows::UI::Xaml::Shapes::IShape2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Polyline(std::nullptr_t) noexcept {}
        Polyline(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Shapes::IPolyline(ptr, take_ownership_from_abi) {}
        Polyline();
        [[nodiscard]] static auto FillRuleProperty();
        [[nodiscard]] static auto PointsProperty();
    };
    struct __declspec(empty_bases) Rectangle : Windows::UI::Xaml::Shapes::IRectangle,
        impl::base<Rectangle, Windows::UI::Xaml::Shapes::Shape, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Rectangle, Windows::UI::Xaml::Shapes::IShape, Windows::UI::Xaml::Shapes::IShape2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Rectangle(std::nullptr_t) noexcept {}
        Rectangle(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Shapes::IRectangle(ptr, take_ownership_from_abi) {}
        Rectangle();
        [[nodiscard]] static auto RadiusXProperty();
        [[nodiscard]] static auto RadiusYProperty();
    };
    struct __declspec(empty_bases) Shape : Windows::UI::Xaml::Shapes::IShape,
        impl::base<Shape, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<Shape, Windows::UI::Xaml::Shapes::IShape2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Shape(std::nullptr_t) noexcept {}
        Shape(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Shapes::IShape(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto FillProperty();
        [[nodiscard]] static auto StrokeProperty();
        [[nodiscard]] static auto StrokeMiterLimitProperty();
        [[nodiscard]] static auto StrokeThicknessProperty();
        [[nodiscard]] static auto StrokeStartLineCapProperty();
        [[nodiscard]] static auto StrokeEndLineCapProperty();
        [[nodiscard]] static auto StrokeLineJoinProperty();
        [[nodiscard]] static auto StrokeDashOffsetProperty();
        [[nodiscard]] static auto StrokeDashCapProperty();
        [[nodiscard]] static auto StrokeDashArrayProperty();
        [[nodiscard]] static auto StretchProperty();
    };
}
#endif
