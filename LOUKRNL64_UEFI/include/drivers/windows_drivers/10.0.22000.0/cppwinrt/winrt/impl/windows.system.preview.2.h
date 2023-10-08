// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Preview_2_H
#define WINRT_Windows_System_Preview_2_H
#include "winrt/impl/Windows.System.Preview.1.h"
WINRT_EXPORT namespace winrt::Windows::System::Preview
{
    struct __declspec(empty_bases) TwoPanelHingedDevicePosturePreview : Windows::System::Preview::ITwoPanelHingedDevicePosturePreview
    {
        TwoPanelHingedDevicePosturePreview(std::nullptr_t) noexcept {}
        TwoPanelHingedDevicePosturePreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Preview::ITwoPanelHingedDevicePosturePreview(ptr, take_ownership_from_abi) {}
        static auto GetDefaultAsync();
    };
    struct __declspec(empty_bases) TwoPanelHingedDevicePosturePreviewReading : Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReading
    {
        TwoPanelHingedDevicePosturePreviewReading(std::nullptr_t) noexcept {}
        TwoPanelHingedDevicePosturePreviewReading(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs : Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs
    {
        TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs(std::nullptr_t) noexcept {}
        TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
