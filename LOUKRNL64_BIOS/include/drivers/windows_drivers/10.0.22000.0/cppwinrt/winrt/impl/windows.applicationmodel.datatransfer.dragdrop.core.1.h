// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_DataTransfer_DragDrop_Core_1_H
#define WINRT_Windows_ApplicationModel_DataTransfer_DragDrop_Core_1_H
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.DragDrop.Core.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core
{
    struct __declspec(empty_bases) ICoreDragDropManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreDragDropManager>
    {
        ICoreDragDropManager(std::nullptr_t = nullptr) noexcept {}
        ICoreDragDropManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreDragDropManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreDragDropManagerStatics>
    {
        ICoreDragDropManagerStatics(std::nullptr_t = nullptr) noexcept {}
        ICoreDragDropManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreDragInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreDragInfo>
    {
        ICoreDragInfo(std::nullptr_t = nullptr) noexcept {}
        ICoreDragInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreDragInfo2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreDragInfo2>,
        impl::require<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>
    {
        ICoreDragInfo2(std::nullptr_t = nullptr) noexcept {}
        ICoreDragInfo2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreDragOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreDragOperation>
    {
        ICoreDragOperation(std::nullptr_t = nullptr) noexcept {}
        ICoreDragOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreDragOperation2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreDragOperation2>,
        impl::require<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>
    {
        ICoreDragOperation2(std::nullptr_t = nullptr) noexcept {}
        ICoreDragOperation2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreDragUIOverride :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreDragUIOverride>
    {
        ICoreDragUIOverride(std::nullptr_t = nullptr) noexcept {}
        ICoreDragUIOverride(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreDropOperationTarget :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreDropOperationTarget>
    {
        ICoreDropOperationTarget(std::nullptr_t = nullptr) noexcept {}
        ICoreDropOperationTarget(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICoreDropOperationTargetRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreDropOperationTargetRequestedEventArgs>
    {
        ICoreDropOperationTargetRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ICoreDropOperationTargetRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
