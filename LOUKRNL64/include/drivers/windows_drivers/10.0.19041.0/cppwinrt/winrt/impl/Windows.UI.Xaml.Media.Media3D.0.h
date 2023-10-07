// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Media_Media3D_0_H
#define WINRT_Windows_UI_Xaml_Media_Media3D_0_H
namespace winrt::Windows::UI::Xaml
{
    struct DependencyProperty;
}
namespace winrt::Windows::UI::Xaml::Media::Media3D
{
    struct ICompositeTransform3D;
    struct ICompositeTransform3DStatics;
    struct IMatrix3DHelper;
    struct IMatrix3DHelperStatics;
    struct IPerspectiveTransform3D;
    struct IPerspectiveTransform3DStatics;
    struct ITransform3D;
    struct ITransform3DFactory;
    struct CompositeTransform3D;
    struct Matrix3DHelper;
    struct PerspectiveTransform3D;
    struct Transform3D;
    struct Matrix3D;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::ITransform3D>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::ITransform3DFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::CompositeTransform3D>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::Matrix3DHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::PerspectiveTransform3D>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::Transform3D>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::Matrix3D>
    {
        using type = struct_category<double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double>;
    };
    template <> struct name<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.ICompositeTransform3D" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.ICompositeTransform3DStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.IMatrix3DHelper" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.IMatrix3DHelperStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.IPerspectiveTransform3D" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.IPerspectiveTransform3DStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Media3D::ITransform3D>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.ITransform3D" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Media3D::ITransform3DFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.ITransform3DFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Media3D::CompositeTransform3D>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.CompositeTransform3D" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Media3D::Matrix3DHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.Matrix3DHelper" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Media3D::PerspectiveTransform3D>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.PerspectiveTransform3D" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Media3D::Transform3D>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.Transform3D" };
    };
    template <> struct name<Windows::UI::Xaml::Media::Media3D::Matrix3D>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.Matrix3D" };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D>
    {
        static constexpr guid value{ 0x8977CB01,0xAF8D,0x4AF5,{ 0xB0,0x84,0xC0,0x8E,0xB9,0x70,0x4A,0xBE } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>
    {
        static constexpr guid value{ 0xDDBF4D67,0x2A25,0x48F3,{ 0x98,0x08,0xC5,0x1E,0xC3,0xD5,0x5B,0xEC } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper>
    {
        static constexpr guid value{ 0xE48C10EF,0x9927,0x4C9B,{ 0x82,0x13,0x07,0x77,0x55,0x12,0xBA,0x04 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>
    {
        static constexpr guid value{ 0x9264545E,0xE158,0x4E74,{ 0x88,0x99,0x68,0x91,0x60,0xBD,0x2F,0x8C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>
    {
        static constexpr guid value{ 0x9A7B532A,0x30F9,0x40A1,{ 0x96,0xC9,0xC5,0x9D,0x87,0xF9,0x5A,0xC3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>
    {
        static constexpr guid value{ 0x8E6F6400,0x620C,0x48C7,{ 0x84,0x4D,0x3F,0x09,0x84,0xDA,0x5B,0x17 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::Media3D::ITransform3D>
    {
        static constexpr guid value{ 0xAE3ED43A,0xA9FC,0x4C31,{ 0x86,0xCD,0x56,0xD9,0xCA,0x25,0x1A,0x69 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Media::Media3D::ITransform3DFactory>
    {
        static constexpr guid value{ 0x052C1F7A,0x8D73,0x48CD,{ 0xBB,0xB8,0xD0,0x04,0x34,0xCA,0xAE,0x5D } };
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::Media3D::CompositeTransform3D>
    {
        using type = Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::Media3D::Matrix3DHelper>
    {
        using type = Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::Media3D::PerspectiveTransform3D>
    {
        using type = Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D;
    };
    template <> struct default_interface<Windows::UI::Xaml::Media::Media3D::Transform3D>
    {
        using type = Windows::UI::Xaml::Media::Media3D::ITransform3D;
    };
    template <> struct abi<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterX(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterX(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterY(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterY(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterZ(double) noexcept = 0;
            virtual int32_t __stdcall get_RotationX(double*) noexcept = 0;
            virtual int32_t __stdcall put_RotationX(double) noexcept = 0;
            virtual int32_t __stdcall get_RotationY(double*) noexcept = 0;
            virtual int32_t __stdcall put_RotationY(double) noexcept = 0;
            virtual int32_t __stdcall get_RotationZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_RotationZ(double) noexcept = 0;
            virtual int32_t __stdcall get_ScaleX(double*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleX(double) noexcept = 0;
            virtual int32_t __stdcall get_ScaleY(double*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleY(double) noexcept = 0;
            virtual int32_t __stdcall get_ScaleZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleZ(double) noexcept = 0;
            virtual int32_t __stdcall get_TranslateX(double*) noexcept = 0;
            virtual int32_t __stdcall put_TranslateX(double) noexcept = 0;
            virtual int32_t __stdcall get_TranslateY(double*) noexcept = 0;
            virtual int32_t __stdcall put_TranslateY(double) noexcept = 0;
            virtual int32_t __stdcall get_TranslateZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_TranslateZ(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterZProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationZProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleZProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TranslateXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TranslateYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TranslateZProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Identity(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D*) noexcept = 0;
            virtual int32_t __stdcall Multiply(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D, struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D, struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D*) noexcept = 0;
            virtual int32_t __stdcall FromElements(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D*) noexcept = 0;
            virtual int32_t __stdcall GetHasInverse(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D, bool*) noexcept = 0;
            virtual int32_t __stdcall GetIsIdentity(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D, bool*) noexcept = 0;
            virtual int32_t __stdcall Invert(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D, struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Depth(double*) noexcept = 0;
            virtual int32_t __stdcall put_Depth(double) noexcept = 0;
            virtual int32_t __stdcall get_OffsetX(double*) noexcept = 0;
            virtual int32_t __stdcall put_OffsetX(double) noexcept = 0;
            virtual int32_t __stdcall get_OffsetY(double*) noexcept = 0;
            virtual int32_t __stdcall put_OffsetY(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DepthProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_OffsetXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_OffsetYProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Media3D::ITransform3D>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Media3D::ITransform3DFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D
    {
        [[nodiscard]] auto CenterX() const;
        auto CenterX(double value) const;
        [[nodiscard]] auto CenterY() const;
        auto CenterY(double value) const;
        [[nodiscard]] auto CenterZ() const;
        auto CenterZ(double value) const;
        [[nodiscard]] auto RotationX() const;
        auto RotationX(double value) const;
        [[nodiscard]] auto RotationY() const;
        auto RotationY(double value) const;
        [[nodiscard]] auto RotationZ() const;
        auto RotationZ(double value) const;
        [[nodiscard]] auto ScaleX() const;
        auto ScaleX(double value) const;
        [[nodiscard]] auto ScaleY() const;
        auto ScaleY(double value) const;
        [[nodiscard]] auto ScaleZ() const;
        auto ScaleZ(double value) const;
        [[nodiscard]] auto TranslateX() const;
        auto TranslateX(double value) const;
        [[nodiscard]] auto TranslateY() const;
        auto TranslateY(double value) const;
        [[nodiscard]] auto TranslateZ() const;
        auto TranslateZ(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics
    {
        [[nodiscard]] auto CenterXProperty() const;
        [[nodiscard]] auto CenterYProperty() const;
        [[nodiscard]] auto CenterZProperty() const;
        [[nodiscard]] auto RotationXProperty() const;
        [[nodiscard]] auto RotationYProperty() const;
        [[nodiscard]] auto RotationZProperty() const;
        [[nodiscard]] auto ScaleXProperty() const;
        [[nodiscard]] auto ScaleYProperty() const;
        [[nodiscard]] auto ScaleZProperty() const;
        [[nodiscard]] auto TranslateXProperty() const;
        [[nodiscard]] auto TranslateYProperty() const;
        [[nodiscard]] auto TranslateZProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelper
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelperStatics
    {
        [[nodiscard]] auto Identity() const;
        auto Multiply(Windows::UI::Xaml::Media::Media3D::Matrix3D const& matrix1, Windows::UI::Xaml::Media::Media3D::Matrix3D const& matrix2) const;
        auto FromElements(double m11, double m12, double m13, double m14, double m21, double m22, double m23, double m24, double m31, double m32, double m33, double m34, double offsetX, double offsetY, double offsetZ, double m44) const;
        auto GetHasInverse(Windows::UI::Xaml::Media::Media3D::Matrix3D const& target) const;
        auto GetIsIdentity(Windows::UI::Xaml::Media::Media3D::Matrix3D const& target) const;
        auto Invert(Windows::UI::Xaml::Media::Media3D::Matrix3D const& target) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3D
    {
        [[nodiscard]] auto Depth() const;
        auto Depth(double value) const;
        [[nodiscard]] auto OffsetX() const;
        auto OffsetX(double value) const;
        [[nodiscard]] auto OffsetY() const;
        auto OffsetY(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3D<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3DStatics
    {
        [[nodiscard]] auto DepthProperty() const;
        [[nodiscard]] auto OffsetXProperty() const;
        [[nodiscard]] auto OffsetYProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3DStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Media3D_ITransform3D
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::Media3D::ITransform3D>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_ITransform3D<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Media3D_ITransform3DFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Media3D::ITransform3DFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_ITransform3DFactory<D>;
    };
    struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D
    {
        double M11;
        double M12;
        double M13;
        double M14;
        double M21;
        double M22;
        double M23;
        double M24;
        double M31;
        double M32;
        double M33;
        double M34;
        double OffsetX;
        double OffsetY;
        double OffsetZ;
        double M44;
    };
    template <> struct abi<Windows::UI::Xaml::Media::Media3D::Matrix3D>
    {
        using type = struct_Windows_UI_Xaml_Media_Media3D_Matrix3D;
    };
}
#endif
