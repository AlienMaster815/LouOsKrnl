// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Data_Pdf_0_H
#define WINRT_Windows_Data_Pdf_0_H
namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
    struct Rect;
    struct Size;
}
namespace winrt::Windows::Storage
{
    struct IStorageFile;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStream;
}
namespace winrt::Windows::UI
{
    struct Color;
}
namespace winrt::Windows::Data::Pdf
{
    enum class PdfPageRotation : int32_t
    {
        Normal = 0,
        Rotate90 = 1,
        Rotate180 = 2,
        Rotate270 = 3,
    };
    struct IPdfDocument;
    struct IPdfDocumentStatics;
    struct IPdfPage;
    struct IPdfPageDimensions;
    struct IPdfPageRenderOptions;
    struct PdfDocument;
    struct PdfPage;
    struct PdfPageDimensions;
    struct PdfPageRenderOptions;
}
namespace winrt::impl
{
    template <> struct category<Windows::Data::Pdf::IPdfDocument>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Data::Pdf::IPdfDocumentStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Data::Pdf::IPdfPage>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Data::Pdf::IPdfPageDimensions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Data::Pdf::IPdfPageRenderOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Data::Pdf::PdfDocument>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Data::Pdf::PdfPage>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Data::Pdf::PdfPageDimensions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Data::Pdf::PdfPageRenderOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Data::Pdf::PdfPageRotation>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Data::Pdf::IPdfDocument>
    {
        static constexpr auto & value{ L"Windows.Data.Pdf.IPdfDocument" };
    };
    template <> struct name<Windows::Data::Pdf::IPdfDocumentStatics>
    {
        static constexpr auto & value{ L"Windows.Data.Pdf.IPdfDocumentStatics" };
    };
    template <> struct name<Windows::Data::Pdf::IPdfPage>
    {
        static constexpr auto & value{ L"Windows.Data.Pdf.IPdfPage" };
    };
    template <> struct name<Windows::Data::Pdf::IPdfPageDimensions>
    {
        static constexpr auto & value{ L"Windows.Data.Pdf.IPdfPageDimensions" };
    };
    template <> struct name<Windows::Data::Pdf::IPdfPageRenderOptions>
    {
        static constexpr auto & value{ L"Windows.Data.Pdf.IPdfPageRenderOptions" };
    };
    template <> struct name<Windows::Data::Pdf::PdfDocument>
    {
        static constexpr auto & value{ L"Windows.Data.Pdf.PdfDocument" };
    };
    template <> struct name<Windows::Data::Pdf::PdfPage>
    {
        static constexpr auto & value{ L"Windows.Data.Pdf.PdfPage" };
    };
    template <> struct name<Windows::Data::Pdf::PdfPageDimensions>
    {
        static constexpr auto & value{ L"Windows.Data.Pdf.PdfPageDimensions" };
    };
    template <> struct name<Windows::Data::Pdf::PdfPageRenderOptions>
    {
        static constexpr auto & value{ L"Windows.Data.Pdf.PdfPageRenderOptions" };
    };
    template <> struct name<Windows::Data::Pdf::PdfPageRotation>
    {
        static constexpr auto & value{ L"Windows.Data.Pdf.PdfPageRotation" };
    };
    template <> struct guid_storage<Windows::Data::Pdf::IPdfDocument>
    {
        static constexpr guid value{ 0xAC7EBEDD,0x80FA,0x4089,{ 0x84,0x6E,0x81,0xB7,0x7F,0xF5,0xA8,0x6C } };
    };
    template <> struct guid_storage<Windows::Data::Pdf::IPdfDocumentStatics>
    {
        static constexpr guid value{ 0x433A0B5F,0xC007,0x4788,{ 0x90,0xF2,0x08,0x14,0x3D,0x92,0x25,0x99 } };
    };
    template <> struct guid_storage<Windows::Data::Pdf::IPdfPage>
    {
        static constexpr guid value{ 0x9DB4B0C8,0x5320,0x4CFC,{ 0xAD,0x76,0x49,0x3F,0xDA,0xD0,0xE5,0x94 } };
    };
    template <> struct guid_storage<Windows::Data::Pdf::IPdfPageDimensions>
    {
        static constexpr guid value{ 0x22170471,0x313E,0x44E8,{ 0x83,0x5D,0x63,0xA3,0xE7,0x62,0x4A,0x10 } };
    };
    template <> struct guid_storage<Windows::Data::Pdf::IPdfPageRenderOptions>
    {
        static constexpr guid value{ 0x3C98056F,0xB7CF,0x4C29,{ 0x9A,0x04,0x52,0xD9,0x02,0x67,0xF4,0x25 } };
    };
    template <> struct default_interface<Windows::Data::Pdf::PdfDocument>
    {
        using type = Windows::Data::Pdf::IPdfDocument;
    };
    template <> struct default_interface<Windows::Data::Pdf::PdfPage>
    {
        using type = Windows::Data::Pdf::IPdfPage;
    };
    template <> struct default_interface<Windows::Data::Pdf::PdfPageDimensions>
    {
        using type = Windows::Data::Pdf::IPdfPageDimensions;
    };
    template <> struct default_interface<Windows::Data::Pdf::PdfPageRenderOptions>
    {
        using type = Windows::Data::Pdf::IPdfPageRenderOptions;
    };
    template <> struct abi<Windows::Data::Pdf::IPdfDocument>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetPage(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_PageCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsPasswordProtected(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Data::Pdf::IPdfDocumentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LoadFromFileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromFileWithPasswordAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromStreamAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromStreamWithPasswordAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Data::Pdf::IPdfPage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RenderToStreamAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RenderWithOptionsToStreamAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall PreparePageAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_Index(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Size(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_Dimensions(void**) noexcept = 0;
            virtual int32_t __stdcall get_Rotation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PreferredZoom(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Data::Pdf::IPdfPageDimensions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MediaBox(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_CropBox(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_BleedBox(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_TrimBox(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_ArtBox(Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Data::Pdf::IPdfPageRenderOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall put_SourceRect(Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall get_DestinationWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DestinationWidth(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_DestinationHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DestinationHeight(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_BackgroundColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_IsIgnoringHighContrast(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsIgnoringHighContrast(bool) noexcept = 0;
            virtual int32_t __stdcall get_BitmapEncoderId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall put_BitmapEncoderId(winrt::guid) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Data_Pdf_IPdfDocument
    {
        auto GetPage(uint32_t pageIndex) const;
        [[nodiscard]] auto PageCount() const;
        [[nodiscard]] auto IsPasswordProtected() const;
    };
    template <> struct consume<Windows::Data::Pdf::IPdfDocument>
    {
        template <typename D> using type = consume_Windows_Data_Pdf_IPdfDocument<D>;
    };
    template <typename D>
    struct consume_Windows_Data_Pdf_IPdfDocumentStatics
    {
        auto LoadFromFileAsync(Windows::Storage::IStorageFile const& file) const;
        auto LoadFromFileAsync(Windows::Storage::IStorageFile const& file, param::hstring const& password) const;
        auto LoadFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& inputStream) const;
        auto LoadFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& inputStream, param::hstring const& password) const;
    };
    template <> struct consume<Windows::Data::Pdf::IPdfDocumentStatics>
    {
        template <typename D> using type = consume_Windows_Data_Pdf_IPdfDocumentStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Data_Pdf_IPdfPage
    {
        auto RenderToStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& outputStream) const;
        auto RenderToStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& outputStream, Windows::Data::Pdf::PdfPageRenderOptions const& options) const;
        auto PreparePageAsync() const;
        [[nodiscard]] auto Index() const;
        [[nodiscard]] auto Size() const;
        [[nodiscard]] auto Dimensions() const;
        [[nodiscard]] auto Rotation() const;
        [[nodiscard]] auto PreferredZoom() const;
    };
    template <> struct consume<Windows::Data::Pdf::IPdfPage>
    {
        template <typename D> using type = consume_Windows_Data_Pdf_IPdfPage<D>;
    };
    template <typename D>
    struct consume_Windows_Data_Pdf_IPdfPageDimensions
    {
        [[nodiscard]] auto MediaBox() const;
        [[nodiscard]] auto CropBox() const;
        [[nodiscard]] auto BleedBox() const;
        [[nodiscard]] auto TrimBox() const;
        [[nodiscard]] auto ArtBox() const;
    };
    template <> struct consume<Windows::Data::Pdf::IPdfPageDimensions>
    {
        template <typename D> using type = consume_Windows_Data_Pdf_IPdfPageDimensions<D>;
    };
    template <typename D>
    struct consume_Windows_Data_Pdf_IPdfPageRenderOptions
    {
        [[nodiscard]] auto SourceRect() const;
        auto SourceRect(Windows::Foundation::Rect const& value) const;
        [[nodiscard]] auto DestinationWidth() const;
        auto DestinationWidth(uint32_t value) const;
        [[nodiscard]] auto DestinationHeight() const;
        auto DestinationHeight(uint32_t value) const;
        [[nodiscard]] auto BackgroundColor() const;
        auto BackgroundColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto IsIgnoringHighContrast() const;
        auto IsIgnoringHighContrast(bool value) const;
        [[nodiscard]] auto BitmapEncoderId() const;
        auto BitmapEncoderId(winrt::guid const& value) const;
    };
    template <> struct consume<Windows::Data::Pdf::IPdfPageRenderOptions>
    {
        template <typename D> using type = consume_Windows_Data_Pdf_IPdfPageRenderOptions<D>;
    };
}
#endif
