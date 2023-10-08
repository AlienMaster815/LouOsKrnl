// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Shapes_0_H
#define WINRT_Windows_UI_Xaml_Shapes_0_H
namespace winrt::Windows::UI::Composition
{
    struct CompositionBrush;
}
namespace winrt::Windows::UI::Xaml
{
    struct DependencyProperty;
}
namespace winrt::Windows::UI::Xaml::Media
{
    struct Brush;
    struct DoubleCollection;
    enum class FillRule : int32_t;
    struct Geometry;
    enum class PenLineCap : int32_t;
    enum class PenLineJoin : int32_t;
    struct PointCollection;
    enum class Stretch : int32_t;
    struct Transform;
}
namespace winrt::Windows::UI::Xaml::Shapes
{
    struct IEllipse;
    struct ILine;
    struct ILineStatics;
    struct IPath;
    struct IPathFactory;
    struct IPathStatics;
    struct IPolygon;
    struct IPolygonStatics;
    struct IPolyline;
    struct IPolylineStatics;
    struct IRectangle;
    struct IRectangleStatics;
    struct IShape;
    struct IShape2;
    struct IShapeFactory;
    struct IShapeStatics;
    struct Ellipse;
    struct Line;
    struct Path;
    struct Polygon;
    struct Polyline;
    struct Rectangle;
    struct Shape;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Shapes::IEllipse>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::ILine>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::ILineStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::IPath>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::IPathFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::IPathStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::IPolygon>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::IPolygonStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::IPolyline>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::IPolylineStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::IRectangle>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::IRectangleStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::IShape>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::IShape2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::IShapeFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::IShapeStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::Ellipse>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::Line>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::Path>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::Polygon>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::Polyline>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::Rectangle>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Shapes::Shape>
    {
        using type = class_category;
    };
    template <> struct name<Windows::UI::Xaml::Shapes::IEllipse>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IEllipse" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::ILine>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.ILine" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::ILineStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.ILineStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::IPath>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IPath" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::IPathFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IPathFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::IPathStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IPathStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::IPolygon>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IPolygon" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::IPolygonStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IPolygonStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::IPolyline>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IPolyline" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::IPolylineStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IPolylineStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::IRectangle>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IRectangle" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::IRectangleStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IRectangleStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::IShape>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IShape" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::IShape2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IShape2" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::IShapeFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IShapeFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::IShapeStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IShapeStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::Ellipse>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.Ellipse" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::Line>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.Line" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::Path>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.Path" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::Polygon>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.Polygon" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::Polyline>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.Polyline" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::Rectangle>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.Rectangle" };
    };
    template <> struct name<Windows::UI::Xaml::Shapes::Shape>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.Shape" };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Shapes::IEllipse>
    {
        static constexpr guid value{ 0x70E05AC4,0xD38D,0x4BAB,{ 0x83,0x1F,0x4A,0x22,0xEF,0x52,0xAC,0x86 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Shapes::ILine>
    {
        static constexpr guid value{ 0x46A5433D,0x4FFB,0x48DF,{ 0x87,0x32,0x4E,0x15,0xC8,0x34,0x81,0x6B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Shapes::ILineStatics>
    {
        static constexpr guid value{ 0x267C123D,0x6EA4,0x4C50,{ 0x8B,0x1D,0x50,0x20,0x7A,0xFF,0x1E,0x8A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Shapes::IPath>
    {
        static constexpr guid value{ 0x78883609,0x3D57,0x4F3C,{ 0xB8,0xA5,0x6C,0xAB,0xCA,0xC9,0x71,0x1F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Shapes::IPathFactory>
    {
        static constexpr guid value{ 0x2340A4E3,0x5A86,0x4FC6,{ 0x9A,0x50,0xCB,0xB9,0x3B,0x82,0x87,0x66 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Shapes::IPathStatics>
    {
        static constexpr guid value{ 0xF627E59D,0x87DC,0x4142,{ 0x81,0xF1,0x97,0xFC,0x7F,0xF8,0x64,0x1C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Shapes::IPolygon>
    {
        static constexpr guid value{ 0xE3755C19,0x2E4D,0x4BCC,{ 0x8D,0x34,0x86,0x87,0x19,0x57,0xFA,0x01 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Shapes::IPolygonStatics>
    {
        static constexpr guid value{ 0x362A8AAB,0xD463,0x4366,{ 0x9E,0x1A,0xBE,0xBA,0x72,0x81,0x0F,0xB7 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Shapes::IPolyline>
    {
        static constexpr guid value{ 0x91DC62F8,0x42B3,0x47F3,{ 0x84,0x76,0xC5,0x51,0x24,0xA7,0xC4,0xC6 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Shapes::IPolylineStatics>
    {
        static constexpr guid value{ 0xC7AA2CD1,0xA26C,0x43B0,{ 0xAA,0xA5,0x82,0x2F,0xA6,0x4A,0x11,0xB9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Shapes::IRectangle>
    {
        static constexpr guid value{ 0x855BC230,0x8A11,0x4E18,{ 0xA1,0x36,0x4B,0xC2,0x1C,0x78,0x27,0xB0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Shapes::IRectangleStatics>
    {
        static constexpr guid value{ 0x9F25AA53,0xBB3A,0x4C3C,{ 0x89,0xDB,0x6F,0xBC,0x0D,0x1F,0xA0,0xCC } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Shapes::IShape>
    {
        static constexpr guid value{ 0x786F2B75,0x9AA0,0x454D,{ 0xAE,0x06,0xA2,0x46,0x6E,0x37,0xC8,0x32 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Shapes::IShape2>
    {
        static constexpr guid value{ 0x97248DBA,0x49F2,0x49A4,{ 0xA5,0xDD,0x16,0x4D,0xF8,0x24,0xDB,0x14 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Shapes::IShapeFactory>
    {
        static constexpr guid value{ 0x4B717613,0xF6AA,0x48D5,{ 0x95,0x88,0xE1,0xD1,0x88,0xEA,0xCB,0xC9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Shapes::IShapeStatics>
    {
        static constexpr guid value{ 0x1D7B4C55,0x9DF3,0x48DC,{ 0x91,0x94,0x9D,0x30,0x6F,0xAA,0x60,0x89 } };
    };
    template <> struct default_interface<Windows::UI::Xaml::Shapes::Ellipse>
    {
        using type = Windows::UI::Xaml::Shapes::IEllipse;
    };
    template <> struct default_interface<Windows::UI::Xaml::Shapes::Line>
    {
        using type = Windows::UI::Xaml::Shapes::ILine;
    };
    template <> struct default_interface<Windows::UI::Xaml::Shapes::Path>
    {
        using type = Windows::UI::Xaml::Shapes::IPath;
    };
    template <> struct default_interface<Windows::UI::Xaml::Shapes::Polygon>
    {
        using type = Windows::UI::Xaml::Shapes::IPolygon;
    };
    template <> struct default_interface<Windows::UI::Xaml::Shapes::Polyline>
    {
        using type = Windows::UI::Xaml::Shapes::IPolyline;
    };
    template <> struct default_interface<Windows::UI::Xaml::Shapes::Rectangle>
    {
        using type = Windows::UI::Xaml::Shapes::IRectangle;
    };
    template <> struct default_interface<Windows::UI::Xaml::Shapes::Shape>
    {
        using type = Windows::UI::Xaml::Shapes::IShape;
    };
    template <> struct abi<Windows::UI::Xaml::Shapes::IEllipse>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Shapes::ILine>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_X1(double*) noexcept = 0;
            virtual int32_t __stdcall put_X1(double) noexcept = 0;
            virtual int32_t __stdcall get_Y1(double*) noexcept = 0;
            virtual int32_t __stdcall put_Y1(double) noexcept = 0;
            virtual int32_t __stdcall get_X2(double*) noexcept = 0;
            virtual int32_t __stdcall put_X2(double) noexcept = 0;
            virtual int32_t __stdcall get_Y2(double*) noexcept = 0;
            virtual int32_t __stdcall put_Y2(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Shapes::ILineStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_X1Property(void**) noexcept = 0;
            virtual int32_t __stdcall get_Y1Property(void**) noexcept = 0;
            virtual int32_t __stdcall get_X2Property(void**) noexcept = 0;
            virtual int32_t __stdcall get_Y2Property(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Shapes::IPath>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall put_Data(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Shapes::IPathFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Shapes::IPathStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DataProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Shapes::IPolygon>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FillRule(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FillRule(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Points(void**) noexcept = 0;
            virtual int32_t __stdcall put_Points(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Shapes::IPolygonStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FillRuleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointsProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Shapes::IPolyline>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FillRule(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FillRule(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Points(void**) noexcept = 0;
            virtual int32_t __stdcall put_Points(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Shapes::IPolylineStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FillRuleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointsProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Shapes::IRectangle>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RadiusX(double*) noexcept = 0;
            virtual int32_t __stdcall put_RadiusX(double) noexcept = 0;
            virtual int32_t __stdcall get_RadiusY(double*) noexcept = 0;
            virtual int32_t __stdcall put_RadiusY(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Shapes::IRectangleStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RadiusXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RadiusYProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Shapes::IShape>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Fill(void**) noexcept = 0;
            virtual int32_t __stdcall put_Fill(void*) noexcept = 0;
            virtual int32_t __stdcall get_Stroke(void**) noexcept = 0;
            virtual int32_t __stdcall put_Stroke(void*) noexcept = 0;
            virtual int32_t __stdcall get_StrokeMiterLimit(double*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeMiterLimit(double) noexcept = 0;
            virtual int32_t __stdcall get_StrokeThickness(double*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeThickness(double) noexcept = 0;
            virtual int32_t __stdcall get_StrokeStartLineCap(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeStartLineCap(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StrokeEndLineCap(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeEndLineCap(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StrokeLineJoin(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeLineJoin(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDashOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeDashOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDashCap(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeDashCap(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDashArray(void**) noexcept = 0;
            virtual int32_t __stdcall put_StrokeDashArray(void*) noexcept = 0;
            virtual int32_t __stdcall get_Stretch(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Stretch(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_GeometryTransform(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Shapes::IShape2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAlphaMask(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Shapes::IShapeFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Shapes::IShapeStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FillProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeMiterLimitProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeThicknessProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeStartLineCapProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeEndLineCapProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeLineJoinProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDashOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDashCapProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDashArrayProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StretchProperty(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Shapes_IEllipse
    {
    };
    template <> struct consume<Windows::UI::Xaml::Shapes::IEllipse>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IEllipse<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Shapes_ILine
    {
        [[nodiscard]] auto X1() const;
        auto X1(double value) const;
        [[nodiscard]] auto Y1() const;
        auto Y1(double value) const;
        [[nodiscard]] auto X2() const;
        auto X2(double value) const;
        [[nodiscard]] auto Y2() const;
        auto Y2(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Shapes::ILine>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Shapes_ILine<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Shapes_ILineStatics
    {
        [[nodiscard]] auto X1Property() const;
        [[nodiscard]] auto Y1Property() const;
        [[nodiscard]] auto X2Property() const;
        [[nodiscard]] auto Y2Property() const;
    };
    template <> struct consume<Windows::UI::Xaml::Shapes::ILineStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Shapes_ILineStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Shapes_IPath
    {
        [[nodiscard]] auto Data() const;
        auto Data(Windows::UI::Xaml::Media::Geometry const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Shapes::IPath>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IPath<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Shapes_IPathFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Shapes::IPathFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IPathFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Shapes_IPathStatics
    {
        [[nodiscard]] auto DataProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Shapes::IPathStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IPathStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Shapes_IPolygon
    {
        [[nodiscard]] auto FillRule() const;
        auto FillRule(Windows::UI::Xaml::Media::FillRule const& value) const;
        [[nodiscard]] auto Points() const;
        auto Points(Windows::UI::Xaml::Media::PointCollection const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Shapes::IPolygon>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IPolygon<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Shapes_IPolygonStatics
    {
        [[nodiscard]] auto FillRuleProperty() const;
        [[nodiscard]] auto PointsProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Shapes::IPolygonStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IPolygonStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Shapes_IPolyline
    {
        [[nodiscard]] auto FillRule() const;
        auto FillRule(Windows::UI::Xaml::Media::FillRule const& value) const;
        [[nodiscard]] auto Points() const;
        auto Points(Windows::UI::Xaml::Media::PointCollection const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Shapes::IPolyline>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IPolyline<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Shapes_IPolylineStatics
    {
        [[nodiscard]] auto FillRuleProperty() const;
        [[nodiscard]] auto PointsProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Shapes::IPolylineStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IPolylineStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Shapes_IRectangle
    {
        [[nodiscard]] auto RadiusX() const;
        auto RadiusX(double value) const;
        [[nodiscard]] auto RadiusY() const;
        auto RadiusY(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Shapes::IRectangle>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IRectangle<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Shapes_IRectangleStatics
    {
        [[nodiscard]] auto RadiusXProperty() const;
        [[nodiscard]] auto RadiusYProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Shapes::IRectangleStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IRectangleStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Shapes_IShape
    {
        [[nodiscard]] auto Fill() const;
        auto Fill(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto Stroke() const;
        auto Stroke(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] auto StrokeMiterLimit() const;
        auto StrokeMiterLimit(double value) const;
        [[nodiscard]] auto StrokeThickness() const;
        auto StrokeThickness(double value) const;
        [[nodiscard]] auto StrokeStartLineCap() const;
        auto StrokeStartLineCap(Windows::UI::Xaml::Media::PenLineCap const& value) const;
        [[nodiscard]] auto StrokeEndLineCap() const;
        auto StrokeEndLineCap(Windows::UI::Xaml::Media::PenLineCap const& value) const;
        [[nodiscard]] auto StrokeLineJoin() const;
        auto StrokeLineJoin(Windows::UI::Xaml::Media::PenLineJoin const& value) const;
        [[nodiscard]] auto StrokeDashOffset() const;
        auto StrokeDashOffset(double value) const;
        [[nodiscard]] auto StrokeDashCap() const;
        auto StrokeDashCap(Windows::UI::Xaml::Media::PenLineCap const& value) const;
        [[nodiscard]] auto StrokeDashArray() const;
        auto StrokeDashArray(Windows::UI::Xaml::Media::DoubleCollection const& value) const;
        [[nodiscard]] auto Stretch() const;
        auto Stretch(Windows::UI::Xaml::Media::Stretch const& value) const;
        [[nodiscard]] auto GeometryTransform() const;
    };
    template <> struct consume<Windows::UI::Xaml::Shapes::IShape>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IShape<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Shapes_IShape2
    {
        auto GetAlphaMask() const;
    };
    template <> struct consume<Windows::UI::Xaml::Shapes::IShape2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IShape2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Shapes_IShapeFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Shapes::IShapeFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IShapeFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Shapes_IShapeStatics
    {
        [[nodiscard]] auto FillProperty() const;
        [[nodiscard]] auto StrokeProperty() const;
        [[nodiscard]] auto StrokeMiterLimitProperty() const;
        [[nodiscard]] auto StrokeThicknessProperty() const;
        [[nodiscard]] auto StrokeStartLineCapProperty() const;
        [[nodiscard]] auto StrokeEndLineCapProperty() const;
        [[nodiscard]] auto StrokeLineJoinProperty() const;
        [[nodiscard]] auto StrokeDashOffsetProperty() const;
        [[nodiscard]] auto StrokeDashCapProperty() const;
        [[nodiscard]] auto StrokeDashArrayProperty() const;
        [[nodiscard]] auto StretchProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Shapes::IShapeStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IShapeStatics<D>;
    };
}
#endif
