// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Perception_1_H
#define WINRT_Windows_Devices_Perception_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Perception.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Perception
{
    struct __declspec(empty_bases) IKnownCameraIntrinsicsPropertiesStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IKnownCameraIntrinsicsPropertiesStatics>
    {
        IKnownCameraIntrinsicsPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
        IKnownCameraIntrinsicsPropertiesStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IKnownPerceptionColorFrameSourcePropertiesStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IKnownPerceptionColorFrameSourcePropertiesStatics>
    {
        IKnownPerceptionColorFrameSourcePropertiesStatics(std::nullptr_t = nullptr) noexcept {}
        IKnownPerceptionColorFrameSourcePropertiesStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IKnownPerceptionDepthFrameSourcePropertiesStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IKnownPerceptionDepthFrameSourcePropertiesStatics>
    {
        IKnownPerceptionDepthFrameSourcePropertiesStatics(std::nullptr_t = nullptr) noexcept {}
        IKnownPerceptionDepthFrameSourcePropertiesStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IKnownPerceptionFrameSourcePropertiesStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IKnownPerceptionFrameSourcePropertiesStatics>
    {
        IKnownPerceptionFrameSourcePropertiesStatics(std::nullptr_t = nullptr) noexcept {}
        IKnownPerceptionFrameSourcePropertiesStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IKnownPerceptionFrameSourcePropertiesStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IKnownPerceptionFrameSourcePropertiesStatics2>
    {
        IKnownPerceptionFrameSourcePropertiesStatics2(std::nullptr_t = nullptr) noexcept {}
        IKnownPerceptionFrameSourcePropertiesStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IKnownPerceptionInfraredFrameSourcePropertiesStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IKnownPerceptionInfraredFrameSourcePropertiesStatics>
    {
        IKnownPerceptionInfraredFrameSourcePropertiesStatics(std::nullptr_t = nullptr) noexcept {}
        IKnownPerceptionInfraredFrameSourcePropertiesStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IKnownPerceptionVideoFrameSourcePropertiesStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IKnownPerceptionVideoFrameSourcePropertiesStatics>
    {
        IKnownPerceptionVideoFrameSourcePropertiesStatics(std::nullptr_t = nullptr) noexcept {}
        IKnownPerceptionVideoFrameSourcePropertiesStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IKnownPerceptionVideoProfilePropertiesStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IKnownPerceptionVideoProfilePropertiesStatics>
    {
        IKnownPerceptionVideoProfilePropertiesStatics(std::nullptr_t = nullptr) noexcept {}
        IKnownPerceptionVideoProfilePropertiesStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionColorFrame :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionColorFrame>,
        impl::require<Windows::Devices::Perception::IPerceptionColorFrame, Windows::Foundation::IClosable>
    {
        IPerceptionColorFrame(std::nullptr_t = nullptr) noexcept {}
        IPerceptionColorFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionColorFrameArrivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionColorFrameArrivedEventArgs>
    {
        IPerceptionColorFrameArrivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPerceptionColorFrameArrivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionColorFrameReader :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionColorFrameReader>,
        impl::require<Windows::Devices::Perception::IPerceptionColorFrameReader, Windows::Foundation::IClosable>
    {
        IPerceptionColorFrameReader(std::nullptr_t = nullptr) noexcept {}
        IPerceptionColorFrameReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionColorFrameSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionColorFrameSource>
    {
        IPerceptionColorFrameSource(std::nullptr_t = nullptr) noexcept {}
        IPerceptionColorFrameSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionColorFrameSource2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionColorFrameSource2>
    {
        IPerceptionColorFrameSource2(std::nullptr_t = nullptr) noexcept {}
        IPerceptionColorFrameSource2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionColorFrameSourceAddedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionColorFrameSourceAddedEventArgs>
    {
        IPerceptionColorFrameSourceAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPerceptionColorFrameSourceAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionColorFrameSourceRemovedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionColorFrameSourceRemovedEventArgs>
    {
        IPerceptionColorFrameSourceRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPerceptionColorFrameSourceRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionColorFrameSourceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionColorFrameSourceStatics>
    {
        IPerceptionColorFrameSourceStatics(std::nullptr_t = nullptr) noexcept {}
        IPerceptionColorFrameSourceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionColorFrameSourceWatcher :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionColorFrameSourceWatcher>
    {
        IPerceptionColorFrameSourceWatcher(std::nullptr_t = nullptr) noexcept {}
        IPerceptionColorFrameSourceWatcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionControlSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionControlSession>,
        impl::require<Windows::Devices::Perception::IPerceptionControlSession, Windows::Foundation::IClosable>
    {
        IPerceptionControlSession(std::nullptr_t = nullptr) noexcept {}
        IPerceptionControlSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionDepthCorrelatedCameraIntrinsics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionDepthCorrelatedCameraIntrinsics>
    {
        IPerceptionDepthCorrelatedCameraIntrinsics(std::nullptr_t = nullptr) noexcept {}
        IPerceptionDepthCorrelatedCameraIntrinsics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionDepthCorrelatedCoordinateMapper :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionDepthCorrelatedCoordinateMapper>
    {
        IPerceptionDepthCorrelatedCoordinateMapper(std::nullptr_t = nullptr) noexcept {}
        IPerceptionDepthCorrelatedCoordinateMapper(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionDepthFrame :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionDepthFrame>,
        impl::require<Windows::Devices::Perception::IPerceptionDepthFrame, Windows::Foundation::IClosable>
    {
        IPerceptionDepthFrame(std::nullptr_t = nullptr) noexcept {}
        IPerceptionDepthFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionDepthFrameArrivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionDepthFrameArrivedEventArgs>
    {
        IPerceptionDepthFrameArrivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPerceptionDepthFrameArrivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionDepthFrameReader :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionDepthFrameReader>,
        impl::require<Windows::Devices::Perception::IPerceptionDepthFrameReader, Windows::Foundation::IClosable>
    {
        IPerceptionDepthFrameReader(std::nullptr_t = nullptr) noexcept {}
        IPerceptionDepthFrameReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionDepthFrameSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionDepthFrameSource>
    {
        IPerceptionDepthFrameSource(std::nullptr_t = nullptr) noexcept {}
        IPerceptionDepthFrameSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionDepthFrameSource2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionDepthFrameSource2>
    {
        IPerceptionDepthFrameSource2(std::nullptr_t = nullptr) noexcept {}
        IPerceptionDepthFrameSource2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionDepthFrameSourceAddedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionDepthFrameSourceAddedEventArgs>
    {
        IPerceptionDepthFrameSourceAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPerceptionDepthFrameSourceAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionDepthFrameSourceRemovedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionDepthFrameSourceRemovedEventArgs>
    {
        IPerceptionDepthFrameSourceRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPerceptionDepthFrameSourceRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionDepthFrameSourceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionDepthFrameSourceStatics>
    {
        IPerceptionDepthFrameSourceStatics(std::nullptr_t = nullptr) noexcept {}
        IPerceptionDepthFrameSourceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionDepthFrameSourceWatcher :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionDepthFrameSourceWatcher>
    {
        IPerceptionDepthFrameSourceWatcher(std::nullptr_t = nullptr) noexcept {}
        IPerceptionDepthFrameSourceWatcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionFrameSourcePropertiesChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionFrameSourcePropertiesChangedEventArgs>
    {
        IPerceptionFrameSourcePropertiesChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPerceptionFrameSourcePropertiesChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionFrameSourcePropertyChangeResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionFrameSourcePropertyChangeResult>
    {
        IPerceptionFrameSourcePropertyChangeResult(std::nullptr_t = nullptr) noexcept {}
        IPerceptionFrameSourcePropertyChangeResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionInfraredFrame :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionInfraredFrame>,
        impl::require<Windows::Devices::Perception::IPerceptionInfraredFrame, Windows::Foundation::IClosable>
    {
        IPerceptionInfraredFrame(std::nullptr_t = nullptr) noexcept {}
        IPerceptionInfraredFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionInfraredFrameArrivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionInfraredFrameArrivedEventArgs>
    {
        IPerceptionInfraredFrameArrivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPerceptionInfraredFrameArrivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionInfraredFrameReader :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionInfraredFrameReader>,
        impl::require<Windows::Devices::Perception::IPerceptionInfraredFrameReader, Windows::Foundation::IClosable>
    {
        IPerceptionInfraredFrameReader(std::nullptr_t = nullptr) noexcept {}
        IPerceptionInfraredFrameReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionInfraredFrameSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionInfraredFrameSource>
    {
        IPerceptionInfraredFrameSource(std::nullptr_t = nullptr) noexcept {}
        IPerceptionInfraredFrameSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionInfraredFrameSource2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionInfraredFrameSource2>
    {
        IPerceptionInfraredFrameSource2(std::nullptr_t = nullptr) noexcept {}
        IPerceptionInfraredFrameSource2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionInfraredFrameSourceAddedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionInfraredFrameSourceAddedEventArgs>
    {
        IPerceptionInfraredFrameSourceAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPerceptionInfraredFrameSourceAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionInfraredFrameSourceRemovedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionInfraredFrameSourceRemovedEventArgs>
    {
        IPerceptionInfraredFrameSourceRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPerceptionInfraredFrameSourceRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionInfraredFrameSourceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionInfraredFrameSourceStatics>
    {
        IPerceptionInfraredFrameSourceStatics(std::nullptr_t = nullptr) noexcept {}
        IPerceptionInfraredFrameSourceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionInfraredFrameSourceWatcher :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionInfraredFrameSourceWatcher>
    {
        IPerceptionInfraredFrameSourceWatcher(std::nullptr_t = nullptr) noexcept {}
        IPerceptionInfraredFrameSourceWatcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPerceptionVideoProfile :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPerceptionVideoProfile>
    {
        IPerceptionVideoProfile(std::nullptr_t = nullptr) noexcept {}
        IPerceptionVideoProfile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
