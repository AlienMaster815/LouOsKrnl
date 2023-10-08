// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Display_Core_2_H
#define WINRT_Windows_Devices_Display_Core_2_H
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Windows.Graphics.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Devices.Display.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Display::Core
{
    struct DisplayPresentationRate
    {
        Windows::Foundation::Numerics::Rational VerticalSyncRate;
        int32_t VerticalSyncsPerPresentation;
    };
    inline bool operator==(DisplayPresentationRate const& left, DisplayPresentationRate const& right) noexcept
    {
        return left.VerticalSyncRate == right.VerticalSyncRate && left.VerticalSyncsPerPresentation == right.VerticalSyncsPerPresentation;
    }
    inline bool operator!=(DisplayPresentationRate const& left, DisplayPresentationRate const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) DisplayAdapter : Windows::Devices::Display::Core::IDisplayAdapter
    {
        DisplayAdapter(std::nullptr_t) noexcept {}
        DisplayAdapter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayAdapter(ptr, take_ownership_from_abi) {}
        static auto FromId(Windows::Graphics::DisplayAdapterId const& id);
    };
    struct __declspec(empty_bases) DisplayDevice : Windows::Devices::Display::Core::IDisplayDevice,
        impl::require<DisplayDevice, Windows::Devices::Display::Core::IDisplayDevice2>
    {
        DisplayDevice(std::nullptr_t) noexcept {}
        DisplayDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayDevice(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayFence : Windows::Devices::Display::Core::IDisplayFence
    {
        DisplayFence(std::nullptr_t) noexcept {}
        DisplayFence(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayFence(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayManager : Windows::Devices::Display::Core::IDisplayManager,
        impl::require<DisplayManager, Windows::Foundation::IClosable>
    {
        DisplayManager(std::nullptr_t) noexcept {}
        DisplayManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayManager(ptr, take_ownership_from_abi) {}
        static auto Create(Windows::Devices::Display::Core::DisplayManagerOptions const& options);
    };
    struct __declspec(empty_bases) DisplayManagerChangedEventArgs : Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs
    {
        DisplayManagerChangedEventArgs(std::nullptr_t) noexcept {}
        DisplayManagerChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayManagerDisabledEventArgs : Windows::Devices::Display::Core::IDisplayManagerDisabledEventArgs
    {
        DisplayManagerDisabledEventArgs(std::nullptr_t) noexcept {}
        DisplayManagerDisabledEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayManagerDisabledEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayManagerEnabledEventArgs : Windows::Devices::Display::Core::IDisplayManagerEnabledEventArgs
    {
        DisplayManagerEnabledEventArgs(std::nullptr_t) noexcept {}
        DisplayManagerEnabledEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayManagerEnabledEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayManagerPathsFailedOrInvalidatedEventArgs : Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs
    {
        DisplayManagerPathsFailedOrInvalidatedEventArgs(std::nullptr_t) noexcept {}
        DisplayManagerPathsFailedOrInvalidatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayManagerResultWithState : Windows::Devices::Display::Core::IDisplayManagerResultWithState
    {
        DisplayManagerResultWithState(std::nullptr_t) noexcept {}
        DisplayManagerResultWithState(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayManagerResultWithState(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayModeInfo : Windows::Devices::Display::Core::IDisplayModeInfo,
        impl::require<DisplayModeInfo, Windows::Devices::Display::Core::IDisplayModeInfo2>
    {
        DisplayModeInfo(std::nullptr_t) noexcept {}
        DisplayModeInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayModeInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayPath : Windows::Devices::Display::Core::IDisplayPath,
        impl::require<DisplayPath, Windows::Devices::Display::Core::IDisplayPath2>
    {
        DisplayPath(std::nullptr_t) noexcept {}
        DisplayPath(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayPath(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayPrimaryDescription : Windows::Devices::Display::Core::IDisplayPrimaryDescription
    {
        DisplayPrimaryDescription(std::nullptr_t) noexcept {}
        DisplayPrimaryDescription(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayPrimaryDescription(ptr, take_ownership_from_abi) {}
        DisplayPrimaryDescription(uint32_t width, uint32_t height, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXColorSpace const& colorSpace, bool isStereo, Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription const& multisampleDescription);
        static auto CreateWithProperties(param::iterable<Windows::Foundation::Collections::IKeyValuePair<winrt::guid, Windows::Foundation::IInspectable>> const& extraProperties, uint32_t width, uint32_t height, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXColorSpace const& colorSpace, bool isStereo, Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription const& multisampleDescription);
    };
    struct __declspec(empty_bases) DisplayScanout : Windows::Devices::Display::Core::IDisplayScanout
    {
        DisplayScanout(std::nullptr_t) noexcept {}
        DisplayScanout(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayScanout(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplaySource : Windows::Devices::Display::Core::IDisplaySource,
        impl::require<DisplaySource, Windows::Devices::Display::Core::IDisplaySource2>
    {
        DisplaySource(std::nullptr_t) noexcept {}
        DisplaySource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplaySource(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayState : Windows::Devices::Display::Core::IDisplayState
    {
        DisplayState(std::nullptr_t) noexcept {}
        DisplayState(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayState(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayStateOperationResult : Windows::Devices::Display::Core::IDisplayStateOperationResult
    {
        DisplayStateOperationResult(std::nullptr_t) noexcept {}
        DisplayStateOperationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayStateOperationResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplaySurface : Windows::Devices::Display::Core::IDisplaySurface
    {
        DisplaySurface(std::nullptr_t) noexcept {}
        DisplaySurface(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplaySurface(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayTarget : Windows::Devices::Display::Core::IDisplayTarget
    {
        DisplayTarget(std::nullptr_t) noexcept {}
        DisplayTarget(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayTarget(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayTask : Windows::Devices::Display::Core::IDisplayTask,
        impl::require<DisplayTask, Windows::Devices::Display::Core::IDisplayTask2>
    {
        DisplayTask(std::nullptr_t) noexcept {}
        DisplayTask(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayTask(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayTaskPool : Windows::Devices::Display::Core::IDisplayTaskPool,
        impl::require<DisplayTaskPool, Windows::Devices::Display::Core::IDisplayTaskPool2>
    {
        DisplayTaskPool(std::nullptr_t) noexcept {}
        DisplayTaskPool(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayTaskPool(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayTaskResult : Windows::Devices::Display::Core::IDisplayTaskResult
    {
        DisplayTaskResult(std::nullptr_t) noexcept {}
        DisplayTaskResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayTaskResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayView : Windows::Devices::Display::Core::IDisplayView
    {
        DisplayView(std::nullptr_t) noexcept {}
        DisplayView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayView(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DisplayWireFormat : Windows::Devices::Display::Core::IDisplayWireFormat
    {
        DisplayWireFormat(std::nullptr_t) noexcept {}
        DisplayWireFormat(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::Core::IDisplayWireFormat(ptr, take_ownership_from_abi) {}
        DisplayWireFormat(Windows::Devices::Display::Core::DisplayWireFormatPixelEncoding const& pixelEncoding, int32_t bitsPerChannel, Windows::Devices::Display::Core::DisplayWireFormatColorSpace const& colorSpace, Windows::Devices::Display::Core::DisplayWireFormatEotf const& eotf, Windows::Devices::Display::Core::DisplayWireFormatHdrMetadata const& hdrMetadata);
        static auto CreateWithProperties(param::iterable<Windows::Foundation::Collections::IKeyValuePair<winrt::guid, Windows::Foundation::IInspectable>> const& extraProperties, Windows::Devices::Display::Core::DisplayWireFormatPixelEncoding const& pixelEncoding, int32_t bitsPerChannel, Windows::Devices::Display::Core::DisplayWireFormatColorSpace const& colorSpace, Windows::Devices::Display::Core::DisplayWireFormatEotf const& eotf, Windows::Devices::Display::Core::DisplayWireFormatHdrMetadata const& hdrMetadata);
    };
}
#endif
