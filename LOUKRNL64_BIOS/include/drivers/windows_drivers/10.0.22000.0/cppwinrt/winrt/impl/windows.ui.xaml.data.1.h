// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Data_1_H
#define WINRT_Windows_UI_Xaml_Data_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.UI.Xaml.Data.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Data
{
    struct __declspec(empty_bases) IBinding :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBinding>
    {
        IBinding(std::nullptr_t = nullptr) noexcept {}
        IBinding(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBinding2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBinding2>
    {
        IBinding2(std::nullptr_t = nullptr) noexcept {}
        IBinding2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBindingBase :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBindingBase>
    {
        IBindingBase(std::nullptr_t = nullptr) noexcept {}
        IBindingBase(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBindingBaseFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBindingBaseFactory>
    {
        IBindingBaseFactory(std::nullptr_t = nullptr) noexcept {}
        IBindingBaseFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBindingExpression :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBindingExpression>
    {
        IBindingExpression(std::nullptr_t = nullptr) noexcept {}
        IBindingExpression(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBindingExpressionBase :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBindingExpressionBase>
    {
        IBindingExpressionBase(std::nullptr_t = nullptr) noexcept {}
        IBindingExpressionBase(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBindingExpressionBaseFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBindingExpressionBaseFactory>
    {
        IBindingExpressionBaseFactory(std::nullptr_t = nullptr) noexcept {}
        IBindingExpressionBaseFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBindingExpressionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBindingExpressionFactory>
    {
        IBindingExpressionFactory(std::nullptr_t = nullptr) noexcept {}
        IBindingExpressionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBindingFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBindingFactory>
    {
        IBindingFactory(std::nullptr_t = nullptr) noexcept {}
        IBindingFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBindingOperations :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBindingOperations>
    {
        IBindingOperations(std::nullptr_t = nullptr) noexcept {}
        IBindingOperations(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBindingOperationsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBindingOperationsStatics>
    {
        IBindingOperationsStatics(std::nullptr_t = nullptr) noexcept {}
        IBindingOperationsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICollectionView :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICollectionView>,
        impl::require<Windows::UI::Xaml::Data::ICollectionView, Windows::Foundation::Collections::IIterable<Windows::Foundation::IInspectable>, Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable>, Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable>>
    {
        ICollectionView(std::nullptr_t = nullptr) noexcept {}
        ICollectionView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICollectionViewFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICollectionViewFactory>
    {
        ICollectionViewFactory(std::nullptr_t = nullptr) noexcept {}
        ICollectionViewFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICollectionViewGroup :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICollectionViewGroup>
    {
        ICollectionViewGroup(std::nullptr_t = nullptr) noexcept {}
        ICollectionViewGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICollectionViewSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICollectionViewSource>
    {
        ICollectionViewSource(std::nullptr_t = nullptr) noexcept {}
        ICollectionViewSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICollectionViewSourceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICollectionViewSourceStatics>
    {
        ICollectionViewSourceStatics(std::nullptr_t = nullptr) noexcept {}
        ICollectionViewSourceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICurrentChangingEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICurrentChangingEventArgs>
    {
        ICurrentChangingEventArgs(std::nullptr_t = nullptr) noexcept {}
        ICurrentChangingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICurrentChangingEventArgsFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICurrentChangingEventArgsFactory>
    {
        ICurrentChangingEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
        ICurrentChangingEventArgsFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICustomProperty :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICustomProperty>
    {
        ICustomProperty(std::nullptr_t = nullptr) noexcept {}
        ICustomProperty(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICustomPropertyProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICustomPropertyProvider>
    {
        ICustomPropertyProvider(std::nullptr_t = nullptr) noexcept {}
        ICustomPropertyProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IItemIndexRange :
        Windows::Foundation::IInspectable,
        impl::consume_t<IItemIndexRange>
    {
        IItemIndexRange(std::nullptr_t = nullptr) noexcept {}
        IItemIndexRange(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IItemIndexRangeFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IItemIndexRangeFactory>
    {
        IItemIndexRangeFactory(std::nullptr_t = nullptr) noexcept {}
        IItemIndexRangeFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IItemsRangeInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IItemsRangeInfo>,
        impl::require<Windows::UI::Xaml::Data::IItemsRangeInfo, Windows::Foundation::IClosable>
    {
        IItemsRangeInfo(std::nullptr_t = nullptr) noexcept {}
        IItemsRangeInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INotifyPropertyChanged :
        Windows::Foundation::IInspectable,
        impl::consume_t<INotifyPropertyChanged>
    {
        INotifyPropertyChanged(std::nullptr_t = nullptr) noexcept {}
        INotifyPropertyChanged(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPropertyChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPropertyChangedEventArgs>
    {
        IPropertyChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPropertyChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPropertyChangedEventArgsFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPropertyChangedEventArgsFactory>
    {
        IPropertyChangedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
        IPropertyChangedEventArgsFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRelativeSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRelativeSource>
    {
        IRelativeSource(std::nullptr_t = nullptr) noexcept {}
        IRelativeSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRelativeSourceFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRelativeSourceFactory>
    {
        IRelativeSourceFactory(std::nullptr_t = nullptr) noexcept {}
        IRelativeSourceFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISelectionInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISelectionInfo>
    {
        ISelectionInfo(std::nullptr_t = nullptr) noexcept {}
        ISelectionInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISupportIncrementalLoading :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISupportIncrementalLoading>
    {
        ISupportIncrementalLoading(std::nullptr_t = nullptr) noexcept {}
        ISupportIncrementalLoading(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IValueConverter :
        Windows::Foundation::IInspectable,
        impl::consume_t<IValueConverter>
    {
        IValueConverter(std::nullptr_t = nullptr) noexcept {}
        IValueConverter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
