// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Devices_Core_0_H
#define WINRT_Windows_Media_Devices_Core_0_H
namespace winrt::Windows::Foundation
{
    template <typename T> struct IReference;
    struct Point;
}
namespace winrt::Windows::Foundation::Numerics
{
}
namespace winrt::Windows::Media::MediaProperties
{
    struct IMediaEncodingProperties;
    struct MediaRatio;
}
namespace winrt::Windows::Perception::Spatial
{
    struct SpatialCoordinateSystem;
}
namespace winrt::Windows::Media::Devices::Core
{
    enum class FrameFlashMode : int32_t
    {
        Disable = 0,
        Enable = 1,
        Global = 2,
    };
    struct ICameraIntrinsics;
    struct ICameraIntrinsics2;
    struct ICameraIntrinsicsFactory;
    struct IDepthCorrelatedCoordinateMapper;
    struct IFrameControlCapabilities;
    struct IFrameControlCapabilities2;
    struct IFrameController;
    struct IFrameController2;
    struct IFrameExposureCapabilities;
    struct IFrameExposureCompensationCapabilities;
    struct IFrameExposureCompensationControl;
    struct IFrameExposureControl;
    struct IFrameFlashCapabilities;
    struct IFrameFlashControl;
    struct IFrameFocusCapabilities;
    struct IFrameFocusControl;
    struct IFrameIsoSpeedCapabilities;
    struct IFrameIsoSpeedControl;
    struct IVariablePhotoSequenceController;
    struct CameraIntrinsics;
    struct DepthCorrelatedCoordinateMapper;
    struct FrameControlCapabilities;
    struct FrameController;
    struct FrameExposureCapabilities;
    struct FrameExposureCompensationCapabilities;
    struct FrameExposureCompensationControl;
    struct FrameExposureControl;
    struct FrameFlashCapabilities;
    struct FrameFlashControl;
    struct FrameFocusCapabilities;
    struct FrameFocusControl;
    struct FrameIsoSpeedCapabilities;
    struct FrameIsoSpeedControl;
    struct VariablePhotoSequenceController;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::Devices::Core::ICameraIntrinsics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::ICameraIntrinsics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::ICameraIntrinsicsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::IFrameControlCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::IFrameControlCapabilities2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::IFrameController>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::IFrameController2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::IFrameExposureCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::IFrameExposureCompensationControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::IFrameExposureControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::IFrameFlashCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::IFrameFlashControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::IFrameFocusCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::IFrameFocusControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::IFrameIsoSpeedControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::IVariablePhotoSequenceController>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Media::Devices::Core::CameraIntrinsics>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::Core::DepthCorrelatedCoordinateMapper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::Core::FrameControlCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::Core::FrameController>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::Core::FrameExposureCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::Core::FrameExposureCompensationCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::Core::FrameExposureCompensationControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::Core::FrameExposureControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::Core::FrameFlashCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::Core::FrameFlashControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::Core::FrameFocusCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::Core::FrameFocusControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::Core::FrameIsoSpeedCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::Core::FrameIsoSpeedControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::Core::VariablePhotoSequenceController>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Media::Devices::Core::FrameFlashMode>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Media::Devices::Core::ICameraIntrinsics>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.ICameraIntrinsics" };
    };
    template <> struct name<Windows::Media::Devices::Core::ICameraIntrinsics2>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.ICameraIntrinsics2" };
    };
    template <> struct name<Windows::Media::Devices::Core::ICameraIntrinsicsFactory>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.ICameraIntrinsicsFactory" };
    };
    template <> struct name<Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.IDepthCorrelatedCoordinateMapper" };
    };
    template <> struct name<Windows::Media::Devices::Core::IFrameControlCapabilities>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.IFrameControlCapabilities" };
    };
    template <> struct name<Windows::Media::Devices::Core::IFrameControlCapabilities2>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.IFrameControlCapabilities2" };
    };
    template <> struct name<Windows::Media::Devices::Core::IFrameController>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.IFrameController" };
    };
    template <> struct name<Windows::Media::Devices::Core::IFrameController2>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.IFrameController2" };
    };
    template <> struct name<Windows::Media::Devices::Core::IFrameExposureCapabilities>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.IFrameExposureCapabilities" };
    };
    template <> struct name<Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.IFrameExposureCompensationCapabilities" };
    };
    template <> struct name<Windows::Media::Devices::Core::IFrameExposureCompensationControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.IFrameExposureCompensationControl" };
    };
    template <> struct name<Windows::Media::Devices::Core::IFrameExposureControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.IFrameExposureControl" };
    };
    template <> struct name<Windows::Media::Devices::Core::IFrameFlashCapabilities>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.IFrameFlashCapabilities" };
    };
    template <> struct name<Windows::Media::Devices::Core::IFrameFlashControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.IFrameFlashControl" };
    };
    template <> struct name<Windows::Media::Devices::Core::IFrameFocusCapabilities>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.IFrameFocusCapabilities" };
    };
    template <> struct name<Windows::Media::Devices::Core::IFrameFocusControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.IFrameFocusControl" };
    };
    template <> struct name<Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.IFrameIsoSpeedCapabilities" };
    };
    template <> struct name<Windows::Media::Devices::Core::IFrameIsoSpeedControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.IFrameIsoSpeedControl" };
    };
    template <> struct name<Windows::Media::Devices::Core::IVariablePhotoSequenceController>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.IVariablePhotoSequenceController" };
    };
    template <> struct name<Windows::Media::Devices::Core::CameraIntrinsics>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.CameraIntrinsics" };
    };
    template <> struct name<Windows::Media::Devices::Core::DepthCorrelatedCoordinateMapper>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper" };
    };
    template <> struct name<Windows::Media::Devices::Core::FrameControlCapabilities>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.FrameControlCapabilities" };
    };
    template <> struct name<Windows::Media::Devices::Core::FrameController>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.FrameController" };
    };
    template <> struct name<Windows::Media::Devices::Core::FrameExposureCapabilities>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.FrameExposureCapabilities" };
    };
    template <> struct name<Windows::Media::Devices::Core::FrameExposureCompensationCapabilities>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.FrameExposureCompensationCapabilities" };
    };
    template <> struct name<Windows::Media::Devices::Core::FrameExposureCompensationControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.FrameExposureCompensationControl" };
    };
    template <> struct name<Windows::Media::Devices::Core::FrameExposureControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.FrameExposureControl" };
    };
    template <> struct name<Windows::Media::Devices::Core::FrameFlashCapabilities>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.FrameFlashCapabilities" };
    };
    template <> struct name<Windows::Media::Devices::Core::FrameFlashControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.FrameFlashControl" };
    };
    template <> struct name<Windows::Media::Devices::Core::FrameFocusCapabilities>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.FrameFocusCapabilities" };
    };
    template <> struct name<Windows::Media::Devices::Core::FrameFocusControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.FrameFocusControl" };
    };
    template <> struct name<Windows::Media::Devices::Core::FrameIsoSpeedCapabilities>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.FrameIsoSpeedCapabilities" };
    };
    template <> struct name<Windows::Media::Devices::Core::FrameIsoSpeedControl>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.FrameIsoSpeedControl" };
    };
    template <> struct name<Windows::Media::Devices::Core::VariablePhotoSequenceController>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.VariablePhotoSequenceController" };
    };
    template <> struct name<Windows::Media::Devices::Core::FrameFlashMode>
    {
        static constexpr auto & value{ L"Windows.Media.Devices.Core.FrameFlashMode" };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::ICameraIntrinsics>
    {
        static constexpr guid value{ 0x0AA6ED32,0x6589,0x49DA,{ 0xAF,0xDE,0x59,0x42,0x70,0xCA,0x0A,0xAC } };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::ICameraIntrinsics2>
    {
        static constexpr guid value{ 0x0CDAA447,0x0798,0x4B4D,{ 0x83,0x9F,0xC5,0xEC,0x41,0x4D,0xB2,0x7A } };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::ICameraIntrinsicsFactory>
    {
        static constexpr guid value{ 0xC0DDC486,0x2132,0x4A34,{ 0xA6,0x59,0x9B,0xFE,0x2A,0x05,0x57,0x12 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper>
    {
        static constexpr guid value{ 0xF95D89FB,0x8AF0,0x4CB0,{ 0x92,0x6D,0x69,0x68,0x66,0xE5,0x04,0x6A } };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::IFrameControlCapabilities>
    {
        static constexpr guid value{ 0xA8FFAE60,0x4E9E,0x4377,{ 0xA7,0x89,0xE2,0x4C,0x4A,0xE7,0xE5,0x44 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::IFrameControlCapabilities2>
    {
        static constexpr guid value{ 0xCE9B0464,0x4730,0x440F,{ 0xBD,0x3E,0xEF,0xE8,0xA8,0xF2,0x30,0xA8 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::IFrameController>
    {
        static constexpr guid value{ 0xC16459D9,0xBAEF,0x4052,{ 0x91,0x77,0x48,0xAF,0xF2,0xAF,0x75,0x22 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::IFrameController2>
    {
        static constexpr guid value{ 0x00D3BC75,0xD87C,0x485B,{ 0x8A,0x09,0x5C,0x35,0x85,0x68,0xB4,0x27 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::IFrameExposureCapabilities>
    {
        static constexpr guid value{ 0xBDBE9CE3,0x3985,0x4E72,{ 0x97,0xC2,0x05,0x90,0xD6,0x13,0x07,0xA1 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities>
    {
        static constexpr guid value{ 0xB988A823,0x8065,0x41EE,{ 0xB0,0x4F,0x72,0x22,0x65,0x95,0x45,0x00 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::IFrameExposureCompensationControl>
    {
        static constexpr guid value{ 0xE95896C9,0xF7F9,0x48CA,{ 0x85,0x91,0xA2,0x65,0x31,0xCB,0x15,0x78 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::IFrameExposureControl>
    {
        static constexpr guid value{ 0xB1605A61,0xFFAF,0x4752,{ 0xB6,0x21,0xF5,0xB6,0xF1,0x17,0xF4,0x32 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::IFrameFlashCapabilities>
    {
        static constexpr guid value{ 0xBB9341A2,0x5EBE,0x4F62,{ 0x82,0x23,0x0E,0x2B,0x05,0xBF,0xBB,0xD0 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::IFrameFlashControl>
    {
        static constexpr guid value{ 0x75D5F6C7,0xBD45,0x4FAB,{ 0x93,0x75,0x45,0xAC,0x04,0xB3,0x32,0xC2 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::IFrameFocusCapabilities>
    {
        static constexpr guid value{ 0x7B25CD58,0x01C0,0x4065,{ 0x9C,0x40,0xC1,0xA7,0x21,0x42,0x5C,0x1A } };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::IFrameFocusControl>
    {
        static constexpr guid value{ 0x272DF1D0,0xD912,0x4214,{ 0xA6,0x7B,0xE3,0x8A,0x8D,0x48,0xD8,0xC6 } };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities>
    {
        static constexpr guid value{ 0x16BDFF61,0x6DF6,0x4AC9,{ 0xB9,0x2A,0x9F,0x6E,0xCD,0x1A,0xD2,0xFA } };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::IFrameIsoSpeedControl>
    {
        static constexpr guid value{ 0x1A03EFED,0x786A,0x4C75,{ 0xA5,0x57,0x7A,0xB9,0xA8,0x5F,0x58,0x8C } };
    };
    template <> struct guid_storage<Windows::Media::Devices::Core::IVariablePhotoSequenceController>
    {
        static constexpr guid value{ 0x7FBFF880,0xED8C,0x43FD,{ 0xA7,0xC3,0xB3,0x58,0x09,0xE4,0x22,0x9A } };
    };
    template <> struct default_interface<Windows::Media::Devices::Core::CameraIntrinsics>
    {
        using type = Windows::Media::Devices::Core::ICameraIntrinsics;
    };
    template <> struct default_interface<Windows::Media::Devices::Core::DepthCorrelatedCoordinateMapper>
    {
        using type = Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper;
    };
    template <> struct default_interface<Windows::Media::Devices::Core::FrameControlCapabilities>
    {
        using type = Windows::Media::Devices::Core::IFrameControlCapabilities;
    };
    template <> struct default_interface<Windows::Media::Devices::Core::FrameController>
    {
        using type = Windows::Media::Devices::Core::IFrameController;
    };
    template <> struct default_interface<Windows::Media::Devices::Core::FrameExposureCapabilities>
    {
        using type = Windows::Media::Devices::Core::IFrameExposureCapabilities;
    };
    template <> struct default_interface<Windows::Media::Devices::Core::FrameExposureCompensationCapabilities>
    {
        using type = Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities;
    };
    template <> struct default_interface<Windows::Media::Devices::Core::FrameExposureCompensationControl>
    {
        using type = Windows::Media::Devices::Core::IFrameExposureCompensationControl;
    };
    template <> struct default_interface<Windows::Media::Devices::Core::FrameExposureControl>
    {
        using type = Windows::Media::Devices::Core::IFrameExposureControl;
    };
    template <> struct default_interface<Windows::Media::Devices::Core::FrameFlashCapabilities>
    {
        using type = Windows::Media::Devices::Core::IFrameFlashCapabilities;
    };
    template <> struct default_interface<Windows::Media::Devices::Core::FrameFlashControl>
    {
        using type = Windows::Media::Devices::Core::IFrameFlashControl;
    };
    template <> struct default_interface<Windows::Media::Devices::Core::FrameFocusCapabilities>
    {
        using type = Windows::Media::Devices::Core::IFrameFocusCapabilities;
    };
    template <> struct default_interface<Windows::Media::Devices::Core::FrameFocusControl>
    {
        using type = Windows::Media::Devices::Core::IFrameFocusControl;
    };
    template <> struct default_interface<Windows::Media::Devices::Core::FrameIsoSpeedCapabilities>
    {
        using type = Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities;
    };
    template <> struct default_interface<Windows::Media::Devices::Core::FrameIsoSpeedControl>
    {
        using type = Windows::Media::Devices::Core::IFrameIsoSpeedControl;
    };
    template <> struct default_interface<Windows::Media::Devices::Core::VariablePhotoSequenceController>
    {
        using type = Windows::Media::Devices::Core::IVariablePhotoSequenceController;
    };
    template <> struct abi<Windows::Media::Devices::Core::ICameraIntrinsics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FocalLength(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall get_PrincipalPoint(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall get_RadialDistortion(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_TangentialDistortion(Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall get_ImageWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ImageHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall ProjectOntoFrame(Windows::Foundation::Numerics::float3, Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall UnprojectAtUnitDepth(Windows::Foundation::Point, Windows::Foundation::Numerics::float2*) noexcept = 0;
            virtual int32_t __stdcall ProjectManyOntoFrame(uint32_t, Windows::Foundation::Numerics::float3*, uint32_t, Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall UnprojectPixelsAtUnitDepth(uint32_t, Windows::Foundation::Point*, uint32_t, Windows::Foundation::Numerics::float2*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::Core::ICameraIntrinsics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UndistortedProjectionTransform(Windows::Foundation::Numerics::float4x4*) noexcept = 0;
            virtual int32_t __stdcall DistortPoint(Windows::Foundation::Point, Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall DistortPoints(uint32_t, Windows::Foundation::Point*, uint32_t, Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall UndistortPoint(Windows::Foundation::Point, Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall UndistortPoints(uint32_t, Windows::Foundation::Point*, uint32_t, Windows::Foundation::Point*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::Core::ICameraIntrinsicsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(Windows::Foundation::Numerics::float2, Windows::Foundation::Numerics::float2, Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::float2, uint32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall UnprojectPoint(Windows::Foundation::Point, void*, Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall UnprojectPoints(uint32_t, Windows::Foundation::Point*, void*, uint32_t, Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall MapPoint(Windows::Foundation::Point, void*, void*, Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall MapPoints(uint32_t, Windows::Foundation::Point*, void*, void*, uint32_t, Windows::Foundation::Point*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::Core::IFrameControlCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Exposure(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExposureCompensation(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsoSpeed(void**) noexcept = 0;
            virtual int32_t __stdcall get_Focus(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhotoConfirmationSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::Core::IFrameControlCapabilities2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Flash(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::Core::IFrameController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExposureControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExposureCompensationControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsoSpeedControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_FocusControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhotoConfirmationEnabled(void**) noexcept = 0;
            virtual int32_t __stdcall put_PhotoConfirmationEnabled(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::Core::IFrameController2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FlashControl(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::Core::IFrameExposureCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Min(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Max(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Step(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Min(float*) noexcept = 0;
            virtual int32_t __stdcall get_Max(float*) noexcept = 0;
            virtual int32_t __stdcall get_Step(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::Core::IFrameExposureCompensationControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::Core::IFrameExposureControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Auto(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Auto(bool) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::Core::IFrameFlashCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_RedEyeReductionSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_PowerSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::Core::IFrameFlashControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Auto(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Auto(bool) noexcept = 0;
            virtual int32_t __stdcall get_RedEyeReduction(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RedEyeReduction(bool) noexcept = 0;
            virtual int32_t __stdcall get_PowerPercent(float*) noexcept = 0;
            virtual int32_t __stdcall put_PowerPercent(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::Core::IFrameFocusCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Min(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Max(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Step(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::Core::IFrameFocusControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Min(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Max(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Step(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::Core::IFrameIsoSpeedControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Auto(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Auto(bool) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Devices::Core::IVariablePhotoSequenceController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Supported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MaxPhotosPerSecond(float*) noexcept = 0;
            virtual int32_t __stdcall get_PhotosPerSecondLimit(float*) noexcept = 0;
            virtual int32_t __stdcall put_PhotosPerSecondLimit(float) noexcept = 0;
            virtual int32_t __stdcall GetHighestConcurrentFrameRate(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentFrameRate(void**) noexcept = 0;
            virtual int32_t __stdcall get_FrameCapabilities(void**) noexcept = 0;
            virtual int32_t __stdcall get_DesiredFrameControllers(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_ICameraIntrinsics
    {
        [[nodiscard]] auto FocalLength() const;
        [[nodiscard]] auto PrincipalPoint() const;
        [[nodiscard]] auto RadialDistortion() const;
        [[nodiscard]] auto TangentialDistortion() const;
        [[nodiscard]] auto ImageWidth() const;
        [[nodiscard]] auto ImageHeight() const;
        auto ProjectOntoFrame(Windows::Foundation::Numerics::float3 const& coordinate) const;
        auto UnprojectAtUnitDepth(Windows::Foundation::Point const& pixelCoordinate) const;
        auto ProjectManyOntoFrame(array_view<Windows::Foundation::Numerics::float3 const> coordinates, array_view<Windows::Foundation::Point> results) const;
        auto UnprojectPixelsAtUnitDepth(array_view<Windows::Foundation::Point const> pixelCoordinates, array_view<Windows::Foundation::Numerics::float2> results) const;
    };
    template <> struct consume<Windows::Media::Devices::Core::ICameraIntrinsics>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_ICameraIntrinsics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_ICameraIntrinsics2
    {
        [[nodiscard]] auto UndistortedProjectionTransform() const;
        auto DistortPoint(Windows::Foundation::Point const& input) const;
        auto DistortPoints(array_view<Windows::Foundation::Point const> inputs, array_view<Windows::Foundation::Point> results) const;
        auto UndistortPoint(Windows::Foundation::Point const& input) const;
        auto UndistortPoints(array_view<Windows::Foundation::Point const> inputs, array_view<Windows::Foundation::Point> results) const;
    };
    template <> struct consume<Windows::Media::Devices::Core::ICameraIntrinsics2>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_ICameraIntrinsics2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_ICameraIntrinsicsFactory
    {
        auto Create(Windows::Foundation::Numerics::float2 const& focalLength, Windows::Foundation::Numerics::float2 const& principalPoint, Windows::Foundation::Numerics::float3 const& radialDistortion, Windows::Foundation::Numerics::float2 const& tangentialDistortion, uint32_t imageWidth, uint32_t imageHeight) const;
    };
    template <> struct consume<Windows::Media::Devices::Core::ICameraIntrinsicsFactory>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_ICameraIntrinsicsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_IDepthCorrelatedCoordinateMapper
    {
        auto UnprojectPoint(Windows::Foundation::Point const& sourcePoint, Windows::Perception::Spatial::SpatialCoordinateSystem const& targetCoordinateSystem) const;
        auto UnprojectPoints(array_view<Windows::Foundation::Point const> sourcePoints, Windows::Perception::Spatial::SpatialCoordinateSystem const& targetCoordinateSystem, array_view<Windows::Foundation::Numerics::float3> results) const;
        auto MapPoint(Windows::Foundation::Point const& sourcePoint, Windows::Perception::Spatial::SpatialCoordinateSystem const& targetCoordinateSystem, Windows::Media::Devices::Core::CameraIntrinsics const& targetCameraIntrinsics) const;
        auto MapPoints(array_view<Windows::Foundation::Point const> sourcePoints, Windows::Perception::Spatial::SpatialCoordinateSystem const& targetCoordinateSystem, Windows::Media::Devices::Core::CameraIntrinsics const& targetCameraIntrinsics, array_view<Windows::Foundation::Point> results) const;
    };
    template <> struct consume<Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_IDepthCorrelatedCoordinateMapper<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_IFrameControlCapabilities
    {
        [[nodiscard]] auto Exposure() const;
        [[nodiscard]] auto ExposureCompensation() const;
        [[nodiscard]] auto IsoSpeed() const;
        [[nodiscard]] auto Focus() const;
        [[nodiscard]] auto PhotoConfirmationSupported() const;
    };
    template <> struct consume<Windows::Media::Devices::Core::IFrameControlCapabilities>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_IFrameControlCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_IFrameControlCapabilities2
    {
        [[nodiscard]] auto Flash() const;
    };
    template <> struct consume<Windows::Media::Devices::Core::IFrameControlCapabilities2>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_IFrameControlCapabilities2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_IFrameController
    {
        [[nodiscard]] auto ExposureControl() const;
        [[nodiscard]] auto ExposureCompensationControl() const;
        [[nodiscard]] auto IsoSpeedControl() const;
        [[nodiscard]] auto FocusControl() const;
        [[nodiscard]] auto PhotoConfirmationEnabled() const;
        auto PhotoConfirmationEnabled(Windows::Foundation::IReference<bool> const& value) const;
    };
    template <> struct consume<Windows::Media::Devices::Core::IFrameController>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_IFrameController<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_IFrameController2
    {
        [[nodiscard]] auto FlashControl() const;
    };
    template <> struct consume<Windows::Media::Devices::Core::IFrameController2>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_IFrameController2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_IFrameExposureCapabilities
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto Min() const;
        [[nodiscard]] auto Max() const;
        [[nodiscard]] auto Step() const;
    };
    template <> struct consume<Windows::Media::Devices::Core::IFrameExposureCapabilities>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_IFrameExposureCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_IFrameExposureCompensationCapabilities
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto Min() const;
        [[nodiscard]] auto Max() const;
        [[nodiscard]] auto Step() const;
    };
    template <> struct consume<Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_IFrameExposureCompensationCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_IFrameExposureCompensationControl
    {
        [[nodiscard]] auto Value() const;
        auto Value(Windows::Foundation::IReference<float> const& value) const;
    };
    template <> struct consume<Windows::Media::Devices::Core::IFrameExposureCompensationControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_IFrameExposureCompensationControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_IFrameExposureControl
    {
        [[nodiscard]] auto Auto() const;
        auto Auto(bool value) const;
        [[nodiscard]] auto Value() const;
        auto Value(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
    };
    template <> struct consume<Windows::Media::Devices::Core::IFrameExposureControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_IFrameExposureControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_IFrameFlashCapabilities
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto RedEyeReductionSupported() const;
        [[nodiscard]] auto PowerSupported() const;
    };
    template <> struct consume<Windows::Media::Devices::Core::IFrameFlashCapabilities>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_IFrameFlashCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_IFrameFlashControl
    {
        [[nodiscard]] auto Mode() const;
        auto Mode(Windows::Media::Devices::Core::FrameFlashMode const& value) const;
        [[nodiscard]] auto Auto() const;
        auto Auto(bool value) const;
        [[nodiscard]] auto RedEyeReduction() const;
        auto RedEyeReduction(bool value) const;
        [[nodiscard]] auto PowerPercent() const;
        auto PowerPercent(float value) const;
    };
    template <> struct consume<Windows::Media::Devices::Core::IFrameFlashControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_IFrameFlashControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_IFrameFocusCapabilities
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto Min() const;
        [[nodiscard]] auto Max() const;
        [[nodiscard]] auto Step() const;
    };
    template <> struct consume<Windows::Media::Devices::Core::IFrameFocusCapabilities>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_IFrameFocusCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_IFrameFocusControl
    {
        [[nodiscard]] auto Value() const;
        auto Value(Windows::Foundation::IReference<uint32_t> const& value) const;
    };
    template <> struct consume<Windows::Media::Devices::Core::IFrameFocusControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_IFrameFocusControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_IFrameIsoSpeedCapabilities
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto Min() const;
        [[nodiscard]] auto Max() const;
        [[nodiscard]] auto Step() const;
    };
    template <> struct consume<Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_IFrameIsoSpeedCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_IFrameIsoSpeedControl
    {
        [[nodiscard]] auto Auto() const;
        auto Auto(bool value) const;
        [[nodiscard]] auto Value() const;
        auto Value(Windows::Foundation::IReference<uint32_t> const& value) const;
    };
    template <> struct consume<Windows::Media::Devices::Core::IFrameIsoSpeedControl>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_IFrameIsoSpeedControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Devices_Core_IVariablePhotoSequenceController
    {
        [[nodiscard]] auto Supported() const;
        [[nodiscard]] auto MaxPhotosPerSecond() const;
        [[nodiscard]] auto PhotosPerSecondLimit() const;
        auto PhotosPerSecondLimit(float value) const;
        auto GetHighestConcurrentFrameRate(Windows::Media::MediaProperties::IMediaEncodingProperties const& captureProperties) const;
        auto GetCurrentFrameRate() const;
        [[nodiscard]] auto FrameCapabilities() const;
        [[nodiscard]] auto DesiredFrameControllers() const;
    };
    template <> struct consume<Windows::Media::Devices::Core::IVariablePhotoSequenceController>
    {
        template <typename D> using type = consume_Windows_Media_Devices_Core_IVariablePhotoSequenceController<D>;
    };
}
#endif
