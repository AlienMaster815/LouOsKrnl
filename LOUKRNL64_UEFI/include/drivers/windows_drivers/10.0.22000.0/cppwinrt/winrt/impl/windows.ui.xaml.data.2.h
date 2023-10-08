// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Data_2_H
#define WINRT_Windows_UI_Xaml_Data_2_H
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Data.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Data
{
    struct CurrentChangingEventHandler : Windows::Foundation::IUnknown
    {
        CurrentChangingEventHandler(std::nullptr_t = nullptr) noexcept {}
        CurrentChangingEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> CurrentChangingEventHandler(L lambda);
        template <typename F> CurrentChangingEventHandler(F* function);
        template <typename O, typename M> CurrentChangingEventHandler(O* object, M method);
        template <typename O, typename M> CurrentChangingEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> CurrentChangingEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Data::CurrentChangingEventArgs const& e) const;
    };
    struct PropertyChangedEventHandler : Windows::Foundation::IUnknown
    {
        PropertyChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        PropertyChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> PropertyChangedEventHandler(L lambda);
        template <typename F> PropertyChangedEventHandler(F* function);
        template <typename O, typename M> PropertyChangedEventHandler(O* object, M method);
        template <typename O, typename M> PropertyChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> PropertyChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Data::PropertyChangedEventArgs const& e) const;
    };
    struct LoadMoreItemsResult
    {
        uint32_t Count;
    };
    inline bool operator==(LoadMoreItemsResult const& left, LoadMoreItemsResult const& right) noexcept
    {
        return left.Count == right.Count;
    }
    inline bool operator!=(LoadMoreItemsResult const& left, LoadMoreItemsResult const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) Binding : Windows::UI::Xaml::Data::IBinding,
        impl::base<Binding, Windows::UI::Xaml::Data::BindingBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<Binding, Windows::UI::Xaml::Data::IBinding2, Windows::UI::Xaml::Data::IBindingBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        Binding(std::nullptr_t) noexcept {}
        Binding(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Data::IBinding(ptr, take_ownership_from_abi) {}
        Binding();
    };
    struct __declspec(empty_bases) BindingBase : Windows::UI::Xaml::Data::IBindingBase,
        impl::base<BindingBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<BindingBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        BindingBase(std::nullptr_t) noexcept {}
        BindingBase(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Data::IBindingBase(ptr, take_ownership_from_abi) {}
        BindingBase();
    };
    struct __declspec(empty_bases) BindingExpression : Windows::UI::Xaml::Data::IBindingExpression,
        impl::base<BindingExpression, Windows::UI::Xaml::Data::BindingExpressionBase>,
        impl::require<BindingExpression, Windows::UI::Xaml::Data::IBindingExpressionBase>
    {
        BindingExpression(std::nullptr_t) noexcept {}
        BindingExpression(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Data::IBindingExpression(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BindingExpressionBase : Windows::UI::Xaml::Data::IBindingExpressionBase
    {
        BindingExpressionBase(std::nullptr_t) noexcept {}
        BindingExpressionBase(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Data::IBindingExpressionBase(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BindingOperations : Windows::UI::Xaml::Data::IBindingOperations
    {
        BindingOperations(std::nullptr_t) noexcept {}
        BindingOperations(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Data::IBindingOperations(ptr, take_ownership_from_abi) {}
        static auto SetBinding(Windows::UI::Xaml::DependencyObject const& target, Windows::UI::Xaml::DependencyProperty const& dp, Windows::UI::Xaml::Data::BindingBase const& binding);
    };
    struct __declspec(empty_bases) CollectionViewSource : Windows::UI::Xaml::Data::ICollectionViewSource,
        impl::base<CollectionViewSource, Windows::UI::Xaml::DependencyObject>,
        impl::require<CollectionViewSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        CollectionViewSource(std::nullptr_t) noexcept {}
        CollectionViewSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Data::ICollectionViewSource(ptr, take_ownership_from_abi) {}
        CollectionViewSource();
        [[nodiscard]] static auto SourceProperty();
        [[nodiscard]] static auto ViewProperty();
        [[nodiscard]] static auto IsSourceGroupedProperty();
        [[nodiscard]] static auto ItemsPathProperty();
    };
    struct __declspec(empty_bases) CurrentChangingEventArgs : Windows::UI::Xaml::Data::ICurrentChangingEventArgs
    {
        CurrentChangingEventArgs(std::nullptr_t) noexcept {}
        CurrentChangingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Data::ICurrentChangingEventArgs(ptr, take_ownership_from_abi) {}
        CurrentChangingEventArgs();
        explicit CurrentChangingEventArgs(bool isCancelable);
    };
    struct __declspec(empty_bases) ItemIndexRange : Windows::UI::Xaml::Data::IItemIndexRange
    {
        ItemIndexRange(std::nullptr_t) noexcept {}
        ItemIndexRange(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Data::IItemIndexRange(ptr, take_ownership_from_abi) {}
        ItemIndexRange(int32_t firstIndex, uint32_t length);
    };
    struct __declspec(empty_bases) PropertyChangedEventArgs : Windows::UI::Xaml::Data::IPropertyChangedEventArgs
    {
        PropertyChangedEventArgs(std::nullptr_t) noexcept {}
        PropertyChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Data::IPropertyChangedEventArgs(ptr, take_ownership_from_abi) {}
        explicit PropertyChangedEventArgs(param::hstring const& name);
    };
    struct __declspec(empty_bases) RelativeSource : Windows::UI::Xaml::Data::IRelativeSource,
        impl::base<RelativeSource, Windows::UI::Xaml::DependencyObject>,
        impl::require<RelativeSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        RelativeSource(std::nullptr_t) noexcept {}
        RelativeSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Data::IRelativeSource(ptr, take_ownership_from_abi) {}
        RelativeSource();
    };
}
#endif
