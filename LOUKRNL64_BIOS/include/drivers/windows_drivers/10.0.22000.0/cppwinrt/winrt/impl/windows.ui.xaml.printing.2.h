// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Printing_2_H
#define WINRT_Windows_UI_Xaml_Printing_2_H
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Printing.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Printing
{
    struct AddPagesEventHandler : Windows::Foundation::IUnknown
    {
        AddPagesEventHandler(std::nullptr_t = nullptr) noexcept {}
        AddPagesEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> AddPagesEventHandler(L lambda);
        template <typename F> AddPagesEventHandler(F* function);
        template <typename O, typename M> AddPagesEventHandler(O* object, M method);
        template <typename O, typename M> AddPagesEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> AddPagesEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Printing::AddPagesEventArgs const& e) const;
    };
    struct GetPreviewPageEventHandler : Windows::Foundation::IUnknown
    {
        GetPreviewPageEventHandler(std::nullptr_t = nullptr) noexcept {}
        GetPreviewPageEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> GetPreviewPageEventHandler(L lambda);
        template <typename F> GetPreviewPageEventHandler(F* function);
        template <typename O, typename M> GetPreviewPageEventHandler(O* object, M method);
        template <typename O, typename M> GetPreviewPageEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> GetPreviewPageEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Printing::GetPreviewPageEventArgs const& e) const;
    };
    struct PaginateEventHandler : Windows::Foundation::IUnknown
    {
        PaginateEventHandler(std::nullptr_t = nullptr) noexcept {}
        PaginateEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> PaginateEventHandler(L lambda);
        template <typename F> PaginateEventHandler(F* function);
        template <typename O, typename M> PaginateEventHandler(O* object, M method);
        template <typename O, typename M> PaginateEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> PaginateEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Printing::PaginateEventArgs const& e) const;
    };
    struct __declspec(empty_bases) AddPagesEventArgs : Windows::UI::Xaml::Printing::IAddPagesEventArgs
    {
        AddPagesEventArgs(std::nullptr_t) noexcept {}
        AddPagesEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Printing::IAddPagesEventArgs(ptr, take_ownership_from_abi) {}
        AddPagesEventArgs();
    };
    struct __declspec(empty_bases) GetPreviewPageEventArgs : Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs
    {
        GetPreviewPageEventArgs(std::nullptr_t) noexcept {}
        GetPreviewPageEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs(ptr, take_ownership_from_abi) {}
        GetPreviewPageEventArgs();
    };
    struct __declspec(empty_bases) PaginateEventArgs : Windows::UI::Xaml::Printing::IPaginateEventArgs
    {
        PaginateEventArgs(std::nullptr_t) noexcept {}
        PaginateEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Printing::IPaginateEventArgs(ptr, take_ownership_from_abi) {}
        PaginateEventArgs();
    };
    struct __declspec(empty_bases) PrintDocument : Windows::UI::Xaml::Printing::IPrintDocument,
        impl::base<PrintDocument, Windows::UI::Xaml::DependencyObject>,
        impl::require<PrintDocument, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        PrintDocument(std::nullptr_t) noexcept {}
        PrintDocument(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Printing::IPrintDocument(ptr, take_ownership_from_abi) {}
        PrintDocument();
        [[nodiscard]] static auto DocumentSourceProperty();
    };
}
#endif
