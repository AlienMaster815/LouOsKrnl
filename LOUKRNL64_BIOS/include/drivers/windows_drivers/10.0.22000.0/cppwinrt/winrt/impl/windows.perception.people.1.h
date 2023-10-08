// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Perception_People_1_H
#define WINRT_Windows_Perception_People_1_H
#include "winrt/impl/Windows.Perception.People.0.h"
WINRT_EXPORT namespace winrt::Windows::Perception::People
{
    struct __declspec(empty_bases) IEyesPose :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEyesPose>
    {
        IEyesPose(std::nullptr_t = nullptr) noexcept {}
        IEyesPose(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEyesPoseStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEyesPoseStatics>
    {
        IEyesPoseStatics(std::nullptr_t = nullptr) noexcept {}
        IEyesPoseStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHandMeshObserver :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHandMeshObserver>
    {
        IHandMeshObserver(std::nullptr_t = nullptr) noexcept {}
        IHandMeshObserver(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHandMeshVertexState :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHandMeshVertexState>
    {
        IHandMeshVertexState(std::nullptr_t = nullptr) noexcept {}
        IHandMeshVertexState(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHandPose :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHandPose>
    {
        IHandPose(std::nullptr_t = nullptr) noexcept {}
        IHandPose(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHeadPose :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHeadPose>
    {
        IHeadPose(std::nullptr_t = nullptr) noexcept {}
        IHeadPose(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
