// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Input_Preview_1_H
#define WINRT_Windows_Devices_Input_Preview_1_H
#include "winrt/impl/Windows.Devices.Input.Preview.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Input::Preview
{
    struct __declspec(empty_bases) IGazeDevicePreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGazeDevicePreview>
    {
        IGazeDevicePreview(std::nullptr_t = nullptr) noexcept {}
        IGazeDevicePreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGazeDeviceWatcherAddedPreviewEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGazeDeviceWatcherAddedPreviewEventArgs>
    {
        IGazeDeviceWatcherAddedPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGazeDeviceWatcherAddedPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGazeDeviceWatcherPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGazeDeviceWatcherPreview>
    {
        IGazeDeviceWatcherPreview(std::nullptr_t = nullptr) noexcept {}
        IGazeDeviceWatcherPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGazeDeviceWatcherRemovedPreviewEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGazeDeviceWatcherRemovedPreviewEventArgs>
    {
        IGazeDeviceWatcherRemovedPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGazeDeviceWatcherRemovedPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGazeDeviceWatcherUpdatedPreviewEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGazeDeviceWatcherUpdatedPreviewEventArgs>
    {
        IGazeDeviceWatcherUpdatedPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGazeDeviceWatcherUpdatedPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGazeEnteredPreviewEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGazeEnteredPreviewEventArgs>
    {
        IGazeEnteredPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGazeEnteredPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGazeExitedPreviewEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGazeExitedPreviewEventArgs>
    {
        IGazeExitedPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGazeExitedPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGazeInputSourcePreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGazeInputSourcePreview>
    {
        IGazeInputSourcePreview(std::nullptr_t = nullptr) noexcept {}
        IGazeInputSourcePreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGazeInputSourcePreviewStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGazeInputSourcePreviewStatics>
    {
        IGazeInputSourcePreviewStatics(std::nullptr_t = nullptr) noexcept {}
        IGazeInputSourcePreviewStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGazeMovedPreviewEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGazeMovedPreviewEventArgs>
    {
        IGazeMovedPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGazeMovedPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGazePointPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGazePointPreview>
    {
        IGazePointPreview(std::nullptr_t = nullptr) noexcept {}
        IGazePointPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
