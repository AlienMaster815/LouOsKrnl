// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Interop_1_H
#define WINRT_Windows_UI_Xaml_Interop_1_H
#include "winrt/impl/Windows.UI.Xaml.Interop.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Interop
{
    struct __declspec(empty_bases) IBindableIterable :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBindableIterable>
    {
        IBindableIterable(std::nullptr_t = nullptr) noexcept {}
        IBindableIterable(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBindableIterator :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBindableIterator>
    {
        IBindableIterator(std::nullptr_t = nullptr) noexcept {}
        IBindableIterator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBindableObservableVector :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBindableObservableVector>,
        impl::require<Windows::UI::Xaml::Interop::IBindableObservableVector, Windows::UI::Xaml::Interop::IBindableIterable, Windows::UI::Xaml::Interop::IBindableVector>
    {
        IBindableObservableVector(std::nullptr_t = nullptr) noexcept {}
        IBindableObservableVector(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBindableVector :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBindableVector>,
        impl::require<Windows::UI::Xaml::Interop::IBindableVector, Windows::UI::Xaml::Interop::IBindableIterable>
    {
        IBindableVector(std::nullptr_t = nullptr) noexcept {}
        IBindableVector(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBindableVectorView :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBindableVectorView>,
        impl::require<Windows::UI::Xaml::Interop::IBindableVectorView, Windows::UI::Xaml::Interop::IBindableIterable>
    {
        IBindableVectorView(std::nullptr_t = nullptr) noexcept {}
        IBindableVectorView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INotifyCollectionChanged :
        Windows::Foundation::IInspectable,
        impl::consume_t<INotifyCollectionChanged>
    {
        INotifyCollectionChanged(std::nullptr_t = nullptr) noexcept {}
        INotifyCollectionChanged(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INotifyCollectionChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<INotifyCollectionChangedEventArgs>
    {
        INotifyCollectionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        INotifyCollectionChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INotifyCollectionChangedEventArgsFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<INotifyCollectionChangedEventArgsFactory>
    {
        INotifyCollectionChangedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
        INotifyCollectionChangedEventArgsFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
