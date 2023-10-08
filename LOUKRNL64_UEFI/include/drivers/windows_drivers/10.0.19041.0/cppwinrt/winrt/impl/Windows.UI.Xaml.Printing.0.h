// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Printing_0_H
#define WINRT_Windows_UI_Xaml_Printing_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
}
namespace winrt::Windows::Graphics::Printing
{
    struct IPrintDocumentSource;
    struct PrintTaskOptions;
}
namespace winrt::Windows::UI::Xaml
{
    struct DependencyProperty;
    struct UIElement;
}
namespace winrt::Windows::UI::Xaml::Printing
{
    enum class PreviewPageCountType : int32_t
    {
        Final = 0,
        Intermediate = 1,
    };
    struct IAddPagesEventArgs;
    struct IGetPreviewPageEventArgs;
    struct IPaginateEventArgs;
    struct IPrintDocument;
    struct IPrintDocumentFactory;
    struct IPrintDocumentStatics;
    struct AddPagesEventArgs;
    struct GetPreviewPageEventArgs;
    struct PaginateEventArgs;
    struct PrintDocument;
    struct AddPagesEventHandler;
    struct GetPreviewPageEventHandler;
    struct PaginateEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Printing::IAddPagesEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Printing::IPaginateEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Printing::IPrintDocument>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Printing::IPrintDocumentFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Printing::IPrintDocumentStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Printing::AddPagesEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Printing::GetPreviewPageEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Printing::PaginateEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Printing::PrintDocument>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Printing::PreviewPageCountType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Printing::AddPagesEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::Printing::GetPreviewPageEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::Printing::PaginateEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct name<Windows::UI::Xaml::Printing::IAddPagesEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Printing.IAddPagesEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Printing.IGetPreviewPageEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Printing::IPaginateEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Printing.IPaginateEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Printing::IPrintDocument>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Printing.IPrintDocument" };
    };
    template <> struct name<Windows::UI::Xaml::Printing::IPrintDocumentFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Printing.IPrintDocumentFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Printing::IPrintDocumentStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Printing.IPrintDocumentStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Printing::AddPagesEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Printing.AddPagesEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Printing::GetPreviewPageEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Printing.GetPreviewPageEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Printing::PaginateEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Printing.PaginateEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Printing::PrintDocument>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Printing.PrintDocument" };
    };
    template <> struct name<Windows::UI::Xaml::Printing::PreviewPageCountType>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Printing.PreviewPageCountType" };
    };
    template <> struct name<Windows::UI::Xaml::Printing::AddPagesEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Printing.AddPagesEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::Printing::GetPreviewPageEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Printing.GetPreviewPageEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::Printing::PaginateEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Printing.PaginateEventHandler" };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Printing::IAddPagesEventArgs>
    {
        static constexpr guid value{ 0xE2E52BE5,0x056C,0x4420,{ 0x97,0x95,0xCB,0x35,0x26,0xCE,0x0C,0x20 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs>
    {
        static constexpr guid value{ 0xA43D703D,0xDEA9,0x4DF6,{ 0xA7,0xED,0x35,0x04,0x9C,0xD4,0x85,0xC7 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Printing::IPaginateEventArgs>
    {
        static constexpr guid value{ 0xED945FD6,0x79AB,0x42B7,{ 0x93,0x0A,0x3D,0x6E,0x09,0x01,0x1D,0x21 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Printing::IPrintDocument>
    {
        static constexpr guid value{ 0xE44327C3,0xA999,0x485B,{ 0xB1,0xD8,0x72,0xDC,0x51,0x78,0x21,0xE6 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Printing::IPrintDocumentFactory>
    {
        static constexpr guid value{ 0xFB87B18F,0x2606,0x4A2F,{ 0x99,0xD4,0xA7,0xCD,0xBC,0x35,0xD7,0xC7 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Printing::IPrintDocumentStatics>
    {
        static constexpr guid value{ 0xFD970A3C,0xB152,0x49E0,{ 0xA6,0xBD,0x6A,0xA6,0x47,0x7E,0x43,0xC7 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Printing::AddPagesEventHandler>
    {
        static constexpr guid value{ 0xD4B57970,0x57A0,0x4209,{ 0x84,0x7C,0xC0,0x93,0xB5,0x4B,0xC7,0x29 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Printing::GetPreviewPageEventHandler>
    {
        static constexpr guid value{ 0xCCB3E9ED,0x9C11,0x4E50,{ 0xAB,0x49,0xE9,0x80,0x86,0xBB,0xFD,0xEF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Printing::PaginateEventHandler>
    {
        static constexpr guid value{ 0x0CC05B61,0x811B,0x4A32,{ 0x99,0x65,0x13,0xEB,0x78,0xDB,0xB0,0x1B } };
    };
    template <> struct default_interface<Windows::UI::Xaml::Printing::AddPagesEventArgs>
    {
        using type = Windows::UI::Xaml::Printing::IAddPagesEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Printing::GetPreviewPageEventArgs>
    {
        using type = Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Printing::PaginateEventArgs>
    {
        using type = Windows::UI::Xaml::Printing::IPaginateEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Printing::PrintDocument>
    {
        using type = Windows::UI::Xaml::Printing::IPrintDocument;
    };
    template <> struct abi<Windows::UI::Xaml::Printing::IAddPagesEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrintTaskOptions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PageNumber(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Printing::IPaginateEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrintTaskOptions(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentPreviewPageNumber(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Printing::IPrintDocument>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DocumentSource(void**) noexcept = 0;
            virtual int32_t __stdcall add_Paginate(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Paginate(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_GetPreviewPage(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GetPreviewPage(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AddPages(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AddPages(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall AddPage(void*) noexcept = 0;
            virtual int32_t __stdcall AddPagesComplete() noexcept = 0;
            virtual int32_t __stdcall SetPreviewPageCount(int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall SetPreviewPage(int32_t, void*) noexcept = 0;
            virtual int32_t __stdcall InvalidatePreview() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Printing::IPrintDocumentFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Printing::IPrintDocumentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DocumentSourceProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Printing::AddPagesEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Printing::GetPreviewPageEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Printing::PaginateEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Printing_IAddPagesEventArgs
    {
        [[nodiscard]] auto PrintTaskOptions() const;
    };
    template <> struct consume<Windows::UI::Xaml::Printing::IAddPagesEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Printing_IAddPagesEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Printing_IGetPreviewPageEventArgs
    {
        [[nodiscard]] auto PageNumber() const;
    };
    template <> struct consume<Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Printing_IGetPreviewPageEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Printing_IPaginateEventArgs
    {
        [[nodiscard]] auto PrintTaskOptions() const;
        [[nodiscard]] auto CurrentPreviewPageNumber() const;
    };
    template <> struct consume<Windows::UI::Xaml::Printing::IPaginateEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Printing_IPaginateEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Printing_IPrintDocument
    {
        [[nodiscard]] auto DocumentSource() const;
        auto Paginate(Windows::UI::Xaml::Printing::PaginateEventHandler const& handler) const;
        using Paginate_revoker = impl::event_revoker<Windows::UI::Xaml::Printing::IPrintDocument, &impl::abi_t<Windows::UI::Xaml::Printing::IPrintDocument>::remove_Paginate>;
        Paginate_revoker Paginate(auto_revoke_t, Windows::UI::Xaml::Printing::PaginateEventHandler const& handler) const;
        auto Paginate(winrt::event_token const& token) const noexcept;
        auto GetPreviewPage(Windows::UI::Xaml::Printing::GetPreviewPageEventHandler const& handler) const;
        using GetPreviewPage_revoker = impl::event_revoker<Windows::UI::Xaml::Printing::IPrintDocument, &impl::abi_t<Windows::UI::Xaml::Printing::IPrintDocument>::remove_GetPreviewPage>;
        GetPreviewPage_revoker GetPreviewPage(auto_revoke_t, Windows::UI::Xaml::Printing::GetPreviewPageEventHandler const& handler) const;
        auto GetPreviewPage(winrt::event_token const& token) const noexcept;
        auto AddPages(Windows::UI::Xaml::Printing::AddPagesEventHandler const& handler) const;
        using AddPages_revoker = impl::event_revoker<Windows::UI::Xaml::Printing::IPrintDocument, &impl::abi_t<Windows::UI::Xaml::Printing::IPrintDocument>::remove_AddPages>;
        AddPages_revoker AddPages(auto_revoke_t, Windows::UI::Xaml::Printing::AddPagesEventHandler const& handler) const;
        auto AddPages(winrt::event_token const& token) const noexcept;
        auto AddPage(Windows::UI::Xaml::UIElement const& pageVisual) const;
        auto AddPagesComplete() const;
        auto SetPreviewPageCount(int32_t count, Windows::UI::Xaml::Printing::PreviewPageCountType const& type) const;
        auto SetPreviewPage(int32_t pageNumber, Windows::UI::Xaml::UIElement const& pageVisual) const;
        auto InvalidatePreview() const;
    };
    template <> struct consume<Windows::UI::Xaml::Printing::IPrintDocument>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Printing_IPrintDocument<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Printing_IPrintDocumentFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Printing::IPrintDocumentFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Printing_IPrintDocumentFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Printing_IPrintDocumentStatics
    {
        [[nodiscard]] auto DocumentSourceProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Printing::IPrintDocumentStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Printing_IPrintDocumentStatics<D>;
    };
}
#endif
