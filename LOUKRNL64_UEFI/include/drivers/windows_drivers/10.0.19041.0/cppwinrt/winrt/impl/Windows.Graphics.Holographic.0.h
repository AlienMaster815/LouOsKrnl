// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Holographic_0_H
#define WINRT_Windows_Graphics_Holographic_0_H
namespace winrt::Windows::Foundation
{
    struct Deferral;
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Numerics
{
}
namespace winrt::Windows::Graphics::DirectX
{
    enum class DirectXPixelFormat : int32_t;
}
namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    struct IDirect3DDevice;
    struct IDirect3DSurface;
}
namespace winrt::Windows::Perception
{
    struct PerceptionTimestamp;
}
namespace winrt::Windows::Perception::Spatial
{
    struct SpatialCoordinateSystem;
    struct SpatialLocator;
}
namespace winrt::Windows::UI::Core
{
    struct CoreWindow;
}
namespace winrt::Windows::Graphics::Holographic
{
    enum class HolographicFramePresentResult : int32_t
    {
        Success = 0,
        DeviceRemoved = 1,
    };
    enum class HolographicFramePresentWaitBehavior : int32_t
    {
        WaitForFrameToFinish = 0,
        DoNotWaitForFrameToFinish = 1,
    };
    enum class HolographicReprojectionMode : int32_t
    {
        PositionAndOrientation = 0,
        OrientationOnly = 1,
        Disabled = 2,
    };
    enum class HolographicSpaceUserPresence : int32_t
    {
        Absent = 0,
        PresentPassive = 1,
        PresentActive = 2,
    };
    enum class HolographicViewConfigurationKind : int32_t
    {
        Display = 0,
        PhotoVideoCamera = 1,
    };
    struct IHolographicCamera;
    struct IHolographicCamera2;
    struct IHolographicCamera3;
    struct IHolographicCamera4;
    struct IHolographicCamera5;
    struct IHolographicCamera6;
    struct IHolographicCameraPose;
    struct IHolographicCameraPose2;
    struct IHolographicCameraRenderingParameters;
    struct IHolographicCameraRenderingParameters2;
    struct IHolographicCameraRenderingParameters3;
    struct IHolographicCameraViewportParameters;
    struct IHolographicDisplay;
    struct IHolographicDisplay2;
    struct IHolographicDisplay3;
    struct IHolographicDisplayStatics;
    struct IHolographicFrame;
    struct IHolographicFrame2;
    struct IHolographicFrame3;
    struct IHolographicFramePrediction;
    struct IHolographicFramePresentationMonitor;
    struct IHolographicFramePresentationReport;
    struct IHolographicFrameRenderingReport;
    struct IHolographicFrameScanoutMonitor;
    struct IHolographicFrameScanoutReport;
    struct IHolographicQuadLayer;
    struct IHolographicQuadLayerFactory;
    struct IHolographicQuadLayerUpdateParameters;
    struct IHolographicQuadLayerUpdateParameters2;
    struct IHolographicSpace;
    struct IHolographicSpace2;
    struct IHolographicSpace3;
    struct IHolographicSpaceCameraAddedEventArgs;
    struct IHolographicSpaceCameraRemovedEventArgs;
    struct IHolographicSpaceStatics;
    struct IHolographicSpaceStatics2;
    struct IHolographicSpaceStatics3;
    struct IHolographicViewConfiguration;
    struct HolographicCamera;
    struct HolographicCameraPose;
    struct HolographicCameraRenderingParameters;
    struct HolographicCameraViewportParameters;
    struct HolographicDisplay;
    struct HolographicFrame;
    struct HolographicFramePrediction;
    struct HolographicFramePresentationMonitor;
    struct HolographicFramePresentationReport;
    struct HolographicFrameRenderingReport;
    struct HolographicFrameScanoutMonitor;
    struct HolographicFrameScanoutReport;
    struct HolographicQuadLayer;
    struct HolographicQuadLayerUpdateParameters;
    struct HolographicSpace;
    struct HolographicSpaceCameraAddedEventArgs;
    struct HolographicSpaceCameraRemovedEventArgs;
    struct HolographicViewConfiguration;
    struct HolographicAdapterId;
    struct HolographicFrameId;
    struct HolographicStereoTransform;
}
namespace winrt::impl
{
    template <> struct category<Windows::Graphics::Holographic::IHolographicCamera>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicCamera2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicCamera3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicCamera4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicCamera5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicCamera6>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicCameraPose>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicCameraPose2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicCameraViewportParameters>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicDisplay>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicDisplay2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicDisplay3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicDisplayStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicFrame>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicFrame2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicFrame3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicFramePrediction>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicFramePresentationMonitor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicFramePresentationReport>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicFrameRenderingReport>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicFrameScanoutMonitor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicFrameScanoutReport>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicQuadLayer>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicQuadLayerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicSpace>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicSpace2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicSpace3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicSpaceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicSpaceStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicSpaceStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::IHolographicViewConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicCamera>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicCameraPose>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicCameraRenderingParameters>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicCameraViewportParameters>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicDisplay>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicFrame>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicFramePrediction>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicFramePresentationMonitor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicFramePresentationReport>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicFrameRenderingReport>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicFrameScanoutMonitor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicFrameScanoutReport>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicQuadLayer>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicQuadLayerUpdateParameters>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicSpace>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicViewConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicFramePresentResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicReprojectionMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicSpaceUserPresence>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicViewConfigurationKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicAdapterId>
    {
        using type = struct_category<uint32_t, int32_t>;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicFrameId>
    {
        using type = struct_category<uint64_t>;
    };
    template <> struct category<Windows::Graphics::Holographic::HolographicStereoTransform>
    {
        using type = struct_category<Windows::Foundation::Numerics::float4x4, Windows::Foundation::Numerics::float4x4>;
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicCamera>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCamera" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicCamera2>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCamera2" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicCamera3>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCamera3" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicCamera4>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCamera4" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicCamera5>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCamera5" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicCamera6>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCamera6" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicCameraPose>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCameraPose" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicCameraPose2>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCameraPose2" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters2" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters3" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicCameraViewportParameters>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicCameraViewportParameters" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicDisplay>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicDisplay" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicDisplay2>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicDisplay2" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicDisplay3>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicDisplay3" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicDisplayStatics>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicDisplayStatics" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicFrame>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicFrame" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicFrame2>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicFrame2" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicFrame3>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicFrame3" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicFramePrediction>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicFramePrediction" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicFramePresentationMonitor>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicFramePresentationMonitor" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicFramePresentationReport>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicFramePresentationReport" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicFrameRenderingReport>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicFrameRenderingReport" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicFrameScanoutMonitor>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicFrameScanoutMonitor" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicFrameScanoutReport>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicFrameScanoutReport" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicQuadLayer>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicQuadLayer" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicQuadLayerFactory>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicQuadLayerFactory" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicQuadLayerUpdateParameters" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters2>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicQuadLayerUpdateParameters2" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicSpace>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpace" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicSpace2>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpace2" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicSpace3>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpace3" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpaceCameraAddedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpaceCameraRemovedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicSpaceStatics>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpaceStatics" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicSpaceStatics2>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpaceStatics2" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicSpaceStatics3>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicSpaceStatics3" };
    };
    template <> struct name<Windows::Graphics::Holographic::IHolographicViewConfiguration>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.IHolographicViewConfiguration" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicCamera>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicCamera" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicCameraPose>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicCameraPose" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicCameraRenderingParameters>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicCameraRenderingParameters" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicCameraViewportParameters>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicCameraViewportParameters" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicDisplay>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicDisplay" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicFrame>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicFrame" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicFramePrediction>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicFramePrediction" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicFramePresentationMonitor>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicFramePresentationMonitor" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicFramePresentationReport>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicFramePresentationReport" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicFrameRenderingReport>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicFrameRenderingReport" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicFrameScanoutMonitor>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicFrameScanoutMonitor" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicFrameScanoutReport>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicFrameScanoutReport" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicQuadLayer>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicQuadLayer" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicQuadLayerUpdateParameters>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicQuadLayerUpdateParameters" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicSpace>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicSpace" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicSpaceCameraAddedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicSpaceCameraRemovedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicViewConfiguration>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicViewConfiguration" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicFramePresentResult>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicFramePresentResult" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicFramePresentWaitBehavior" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicReprojectionMode>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicReprojectionMode" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicSpaceUserPresence>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicSpaceUserPresence" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicViewConfigurationKind>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicViewConfigurationKind" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicAdapterId>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicAdapterId" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicFrameId>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicFrameId" };
    };
    template <> struct name<Windows::Graphics::Holographic::HolographicStereoTransform>
    {
        static constexpr auto & value{ L"Windows.Graphics.Holographic.HolographicStereoTransform" };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicCamera>
    {
        static constexpr guid value{ 0xE4E98445,0x9BED,0x4980,{ 0x9B,0xA0,0xE8,0x76,0x80,0xD1,0xCB,0x74 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicCamera2>
    {
        static constexpr guid value{ 0xB55B9F1A,0xBA8C,0x4F84,{ 0xAD,0x79,0x2E,0x7E,0x1E,0x24,0x50,0xF3 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicCamera3>
    {
        static constexpr guid value{ 0x45AA4FB3,0x7B59,0x524E,{ 0x4A,0x3F,0x4A,0x6A,0xD6,0x65,0x04,0x77 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicCamera4>
    {
        static constexpr guid value{ 0x9A2531D6,0x4723,0x4F39,{ 0xA9,0xA5,0x9D,0x05,0x18,0x1D,0x9B,0x44 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicCamera5>
    {
        static constexpr guid value{ 0x229706F2,0x628D,0x4EF5,{ 0x9C,0x08,0xA6,0x3F,0xDD,0x77,0x87,0xC6 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicCamera6>
    {
        static constexpr guid value{ 0x0209194F,0x632D,0x5154,{ 0xAB,0x52,0x0B,0x5D,0x15,0xB1,0x25,0x05 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicCameraPose>
    {
        static constexpr guid value{ 0x0D7D7E30,0x12DE,0x45BD,{ 0x91,0x2B,0xC7,0xF6,0x56,0x15,0x99,0xD1 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicCameraPose2>
    {
        static constexpr guid value{ 0x232BE073,0x5D2D,0x4560,{ 0x81,0x4E,0x26,0x97,0xC4,0xFC,0xE1,0x6B } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>
    {
        static constexpr guid value{ 0x8EAC2ED1,0x5BF4,0x4E16,{ 0x82,0x36,0xAE,0x08,0x00,0xC1,0x1D,0x0D } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>
    {
        static constexpr guid value{ 0x261270E3,0xB696,0x4634,{ 0x94,0xD6,0xBE,0x06,0x81,0x64,0x35,0x99 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3>
    {
        static constexpr guid value{ 0xB1AA513F,0x136D,0x4B06,{ 0xB9,0xD4,0xE4,0xB9,0x14,0xCD,0x06,0x83 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicCameraViewportParameters>
    {
        static constexpr guid value{ 0x80CDF3F7,0x842A,0x41E1,{ 0x93,0xED,0x56,0x92,0xAB,0x1F,0xBB,0x10 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicDisplay>
    {
        static constexpr guid value{ 0x9ACEA414,0x1D9F,0x4090,{ 0xA3,0x88,0x90,0xC0,0x6F,0x6E,0xAE,0x9C } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicDisplay2>
    {
        static constexpr guid value{ 0x75AC3F82,0xE755,0x436C,{ 0x8D,0x96,0x4D,0x32,0xD1,0x31,0x47,0x3E } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicDisplay3>
    {
        static constexpr guid value{ 0xFC4C6AC6,0x6480,0x5008,{ 0xB2,0x9E,0x15,0x7D,0x77,0xC8,0x43,0xF7 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicDisplayStatics>
    {
        static constexpr guid value{ 0xCB374983,0xE7B0,0x4841,{ 0x83,0x55,0x3A,0xE5,0xB5,0x36,0xE9,0xA4 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicFrame>
    {
        static constexpr guid value{ 0xC6988EB6,0xA8B9,0x3054,{ 0xA6,0xEB,0xD6,0x24,0xB6,0x53,0x63,0x75 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicFrame2>
    {
        static constexpr guid value{ 0x283F37BF,0x3BF2,0x5E91,{ 0x66,0x33,0x87,0x05,0x74,0xE6,0xF2,0x17 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicFrame3>
    {
        static constexpr guid value{ 0xE5E964C9,0x8A27,0x55D3,{ 0x9F,0x98,0x94,0x53,0x0D,0x36,0x90,0x52 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicFramePrediction>
    {
        static constexpr guid value{ 0x520F4DE1,0x5C0A,0x4E79,{ 0xA8,0x1E,0x6A,0xBE,0x02,0xBB,0x27,0x39 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicFramePresentationMonitor>
    {
        static constexpr guid value{ 0xCA87256C,0x6FAE,0x428E,{ 0xBB,0x83,0x25,0xDF,0xEE,0x51,0x13,0x6B } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicFramePresentationReport>
    {
        static constexpr guid value{ 0x80BAF614,0xF2F4,0x4C8A,{ 0x8D,0xE3,0x06,0x5C,0x78,0xF6,0xD5,0xDE } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicFrameRenderingReport>
    {
        static constexpr guid value{ 0x05F32DE4,0xE384,0x51B3,{ 0xB9,0x34,0xF0,0xD3,0xA0,0xF7,0x86,0x06 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicFrameScanoutMonitor>
    {
        static constexpr guid value{ 0x7E83EFA9,0x843C,0x5401,{ 0x80,0x95,0x9B,0xC1,0xB8,0xB0,0x86,0x38 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicFrameScanoutReport>
    {
        static constexpr guid value{ 0x0EBBE606,0x03A0,0x5CA0,{ 0xB4,0x6E,0xBB,0xA0,0x68,0xD7,0x23,0x3F } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicQuadLayer>
    {
        static constexpr guid value{ 0x903460C9,0xC9D9,0x5D5C,{ 0x41,0xAC,0xA2,0xD5,0xAB,0x0F,0xD3,0x31 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicQuadLayerFactory>
    {
        static constexpr guid value{ 0xA67538F3,0x5A14,0x5A10,{ 0x48,0x9A,0x45,0x50,0x65,0xB3,0x7B,0x76 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters>
    {
        static constexpr guid value{ 0x2B0EA3B0,0x798D,0x5BCA,{ 0x55,0xC2,0x2C,0x0C,0x76,0x2E,0xBB,0x08 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters2>
    {
        static constexpr guid value{ 0x4F33D32D,0x82C1,0x46C1,{ 0x89,0x80,0x3C,0xB7,0x0D,0x98,0x18,0x2B } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicSpace>
    {
        static constexpr guid value{ 0x4380DBA6,0x5E78,0x434F,{ 0x80,0x7C,0x34,0x33,0xD1,0xEF,0xE8,0xB7 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicSpace2>
    {
        static constexpr guid value{ 0x4F81A9A8,0xB7FF,0x4883,{ 0x98,0x27,0x7D,0x67,0x72,0x87,0xEA,0x70 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicSpace3>
    {
        static constexpr guid value{ 0xDF1733D1,0xF224,0x587E,{ 0x8D,0x71,0x1E,0x8F,0xC8,0xF0,0x7B,0x1F } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>
    {
        static constexpr guid value{ 0x58F1DA35,0xBBB3,0x3C8F,{ 0x99,0x3D,0x6C,0x80,0xE7,0xFE,0xB9,0x9F } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>
    {
        static constexpr guid value{ 0x805444A8,0xF2AE,0x322E,{ 0x8D,0xA9,0x83,0x6A,0x0A,0x95,0xA4,0xC1 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicSpaceStatics>
    {
        static constexpr guid value{ 0x364E6064,0xC8F2,0x3BA1,{ 0x83,0x91,0x66,0xB8,0x48,0x9E,0x67,0xFD } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicSpaceStatics2>
    {
        static constexpr guid value{ 0x0E777088,0x75FC,0x48AF,{ 0x87,0x58,0x06,0x52,0xF6,0xF0,0x7C,0x59 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicSpaceStatics3>
    {
        static constexpr guid value{ 0x3B00DE3D,0xB1A3,0x4DFE,{ 0x8E,0x79,0xFE,0xC5,0x90,0x9E,0x6D,0xF8 } };
    };
    template <> struct guid_storage<Windows::Graphics::Holographic::IHolographicViewConfiguration>
    {
        static constexpr guid value{ 0x5C1DE6E6,0x67E9,0x5004,{ 0xB0,0x2C,0x67,0xA3,0xA1,0x22,0xB5,0x76 } };
    };
    template <> struct default_interface<Windows::Graphics::Holographic::HolographicCamera>
    {
        using type = Windows::Graphics::Holographic::IHolographicCamera;
    };
    template <> struct default_interface<Windows::Graphics::Holographic::HolographicCameraPose>
    {
        using type = Windows::Graphics::Holographic::IHolographicCameraPose;
    };
    template <> struct default_interface<Windows::Graphics::Holographic::HolographicCameraRenderingParameters>
    {
        using type = Windows::Graphics::Holographic::IHolographicCameraRenderingParameters;
    };
    template <> struct default_interface<Windows::Graphics::Holographic::HolographicCameraViewportParameters>
    {
        using type = Windows::Graphics::Holographic::IHolographicCameraViewportParameters;
    };
    template <> struct default_interface<Windows::Graphics::Holographic::HolographicDisplay>
    {
        using type = Windows::Graphics::Holographic::IHolographicDisplay;
    };
    template <> struct default_interface<Windows::Graphics::Holographic::HolographicFrame>
    {
        using type = Windows::Graphics::Holographic::IHolographicFrame;
    };
    template <> struct default_interface<Windows::Graphics::Holographic::HolographicFramePrediction>
    {
        using type = Windows::Graphics::Holographic::IHolographicFramePrediction;
    };
    template <> struct default_interface<Windows::Graphics::Holographic::HolographicFramePresentationMonitor>
    {
        using type = Windows::Graphics::Holographic::IHolographicFramePresentationMonitor;
    };
    template <> struct default_interface<Windows::Graphics::Holographic::HolographicFramePresentationReport>
    {
        using type = Windows::Graphics::Holographic::IHolographicFramePresentationReport;
    };
    template <> struct default_interface<Windows::Graphics::Holographic::HolographicFrameRenderingReport>
    {
        using type = Windows::Graphics::Holographic::IHolographicFrameRenderingReport;
    };
    template <> struct default_interface<Windows::Graphics::Holographic::HolographicFrameScanoutMonitor>
    {
        using type = Windows::Graphics::Holographic::IHolographicFrameScanoutMonitor;
    };
    template <> struct default_interface<Windows::Graphics::Holographic::HolographicFrameScanoutReport>
    {
        using type = Windows::Graphics::Holographic::IHolographicFrameScanoutReport;
    };
    template <> struct default_interface<Windows::Graphics::Holographic::HolographicQuadLayer>
    {
        using type = Windows::Graphics::Holographic::IHolographicQuadLayer;
    };
    template <> struct default_interface<Windows::Graphics::Holographic::HolographicQuadLayerUpdateParameters>
    {
        using type = Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters;
    };
    template <> struct default_interface<Windows::Graphics::Holographic::HolographicSpace>
    {
        using type = Windows::Graphics::Holographic::IHolographicSpace;
    };
    template <> struct default_interface<Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs>
    {
        using type = Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs;
    };
    template <> struct default_interface<Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs>
    {
        using type = Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs;
    };
    template <> struct default_interface<Windows::Graphics::Holographic::HolographicViewConfiguration>
    {
        using type = Windows::Graphics::Holographic::IHolographicViewConfiguration;
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicCamera>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RenderTargetSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_ViewportScaleFactor(double*) noexcept = 0;
            virtual int32_t __stdcall put_ViewportScaleFactor(double) noexcept = 0;
            virtual int32_t __stdcall get_IsStereo(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall SetNearPlaneDistance(double) noexcept = 0;
            virtual int32_t __stdcall SetFarPlaneDistance(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicCamera2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LeftViewportParameters(void**) noexcept = 0;
            virtual int32_t __stdcall get_RightViewportParameters(void**) noexcept = 0;
            virtual int32_t __stdcall get_Display(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicCamera3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsPrimaryLayerEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPrimaryLayerEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_MaxQuadLayerCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_QuadLayers(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicCamera4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanOverrideViewport(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicCamera5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsHardwareContentProtectionSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsHardwareContentProtectionEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsHardwareContentProtectionEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicCamera6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ViewConfiguration(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicCameraPose>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HolographicCamera(void**) noexcept = 0;
            virtual int32_t __stdcall get_Viewport(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall TryGetViewTransform(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_ProjectionTransform(struct struct_Windows_Graphics_Holographic_HolographicStereoTransform*) noexcept = 0;
            virtual int32_t __stdcall TryGetCullingFrustum(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryGetVisibleFrustum(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_NearPlaneDistance(double*) noexcept = 0;
            virtual int32_t __stdcall get_FarPlaneDistance(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicCameraPose2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OverrideViewTransform(void*, struct struct_Windows_Graphics_Holographic_HolographicStereoTransform) noexcept = 0;
            virtual int32_t __stdcall OverrideProjectionTransform(struct struct_Windows_Graphics_Holographic_HolographicStereoTransform) noexcept = 0;
            virtual int32_t __stdcall OverrideViewport(Windows::Foundation::Rect, Windows::Foundation::Rect) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetFocusPoint(void*, Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall SetFocusPointWithNormal(void*, Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall SetFocusPointWithNormalLinearVelocity(void*, Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_Direct3D11Device(void**) noexcept = 0;
            virtual int32_t __stdcall get_Direct3D11BackBuffer(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReprojectionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReprojectionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall CommitDirect3D11DepthBuffer(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsContentProtectionEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsContentProtectionEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicCameraViewportParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HiddenAreaMesh(uint32_t* __valueSize, Windows::Foundation::Numerics::float2**) noexcept = 0;
            virtual int32_t __stdcall get_VisibleAreaMesh(uint32_t* __valueSize, Windows::Foundation::Numerics::float2**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicDisplay>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxViewportSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_IsStereo(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsOpaque(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AdapterId(struct struct_Windows_Graphics_Holographic_HolographicAdapterId*) noexcept = 0;
            virtual int32_t __stdcall get_SpatialLocator(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicDisplay2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RefreshRate(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicDisplay3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryGetViewConfiguration(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicDisplayStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AddedCameras(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemovedCameras(void**) noexcept = 0;
            virtual int32_t __stdcall GetRenderingParameters(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_CurrentPrediction(void**) noexcept = 0;
            virtual int32_t __stdcall UpdateCurrentPrediction() noexcept = 0;
            virtual int32_t __stdcall PresentUsingCurrentPrediction(int32_t*) noexcept = 0;
            virtual int32_t __stdcall PresentUsingCurrentPredictionWithBehavior(int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall WaitForFrameToFinish() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicFrame2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetQuadLayerUpdateParameters(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicFrame3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(struct struct_Windows_Graphics_Holographic_HolographicFrameId*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicFramePrediction>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CameraPoses(void**) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicFramePresentationMonitor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReadReports(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicFramePresentationReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CompositorGpuDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_AppGpuDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_AppGpuOverrun(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_MissedPresentationOpportunityCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PresentationCount(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicFrameRenderingReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameId(struct struct_Windows_Graphics_Holographic_HolographicFrameId*) noexcept = 0;
            virtual int32_t __stdcall get_MissedLatchCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SystemRelativeFrameReadyTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SystemRelativeActualGpuFinishTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SystemRelativeTargetLatchTime(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicFrameScanoutMonitor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReadReports(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicFrameScanoutReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RenderingReport(void**) noexcept = 0;
            virtual int32_t __stdcall get_MissedScanoutCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SystemRelativeLatchTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SystemRelativeScanoutStartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SystemRelativePhotonTime(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicQuadLayer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PixelFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Size(Windows::Foundation::Size*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicQuadLayerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(Windows::Foundation::Size, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithPixelFormat(Windows::Foundation::Size, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AcquireBufferToUpdateContent(void**) noexcept = 0;
            virtual int32_t __stdcall UpdateViewport(Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall UpdateContentProtectionEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall UpdateExtents(Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall UpdateLocationWithStationaryMode(void*, Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::quaternion) noexcept = 0;
            virtual int32_t __stdcall UpdateLocationWithDisplayRelativeMode(Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::quaternion) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanAcquireWithHardwareProtection(bool*) noexcept = 0;
            virtual int32_t __stdcall AcquireBufferToUpdateContentWithHardwareProtection(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicSpace>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrimaryAdapterId(struct struct_Windows_Graphics_Holographic_HolographicAdapterId*) noexcept = 0;
            virtual int32_t __stdcall SetDirect3D11Device(void*) noexcept = 0;
            virtual int32_t __stdcall add_CameraAdded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CameraAdded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CameraRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CameraRemoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CreateNextFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicSpace2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UserPresence(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_UserPresenceChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UserPresenceChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall WaitForNextFrameReady() noexcept = 0;
            virtual int32_t __stdcall WaitForNextFrameReadyWithHeadStart(int64_t) noexcept = 0;
            virtual int32_t __stdcall CreateFramePresentationMonitor(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicSpace3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFrameScanoutMonitor(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Camera(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Camera(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicSpaceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForCoreWindow(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicSpaceStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsAvailable(bool*) noexcept = 0;
            virtual int32_t __stdcall add_IsAvailableChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsAvailableChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicSpaceStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsConfigured(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Holographic::IHolographicViewConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NativeRenderTargetSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_RenderTargetSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall RequestRenderTargetSize(Windows::Foundation::Size, Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedPixelFormats(void**) noexcept = 0;
            virtual int32_t __stdcall get_PixelFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PixelFormat(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsStereo(bool*) noexcept = 0;
            virtual int32_t __stdcall get_RefreshRate(double*) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Display(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCamera
    {
        [[nodiscard]] auto RenderTargetSize() const;
        [[nodiscard]] auto ViewportScaleFactor() const;
        auto ViewportScaleFactor(double value) const;
        [[nodiscard]] auto IsStereo() const;
        [[nodiscard]] auto Id() const;
        auto SetNearPlaneDistance(double value) const;
        auto SetFarPlaneDistance(double value) const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicCamera>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCamera<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCamera2
    {
        [[nodiscard]] auto LeftViewportParameters() const;
        [[nodiscard]] auto RightViewportParameters() const;
        [[nodiscard]] auto Display() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicCamera2>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCamera2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCamera3
    {
        [[nodiscard]] auto IsPrimaryLayerEnabled() const;
        auto IsPrimaryLayerEnabled(bool value) const;
        [[nodiscard]] auto MaxQuadLayerCount() const;
        [[nodiscard]] auto QuadLayers() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicCamera3>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCamera3<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCamera4
    {
        [[nodiscard]] auto CanOverrideViewport() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicCamera4>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCamera4<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCamera5
    {
        [[nodiscard]] auto IsHardwareContentProtectionSupported() const;
        [[nodiscard]] auto IsHardwareContentProtectionEnabled() const;
        auto IsHardwareContentProtectionEnabled(bool value) const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicCamera5>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCamera5<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCamera6
    {
        [[nodiscard]] auto ViewConfiguration() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicCamera6>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCamera6<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCameraPose
    {
        [[nodiscard]] auto HolographicCamera() const;
        [[nodiscard]] auto Viewport() const;
        auto TryGetViewTransform(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
        [[nodiscard]] auto ProjectionTransform() const;
        auto TryGetCullingFrustum(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
        auto TryGetVisibleFrustum(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
        [[nodiscard]] auto NearPlaneDistance() const;
        [[nodiscard]] auto FarPlaneDistance() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicCameraPose>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCameraPose2
    {
        auto OverrideViewTransform(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Graphics::Holographic::HolographicStereoTransform const& coordinateSystemToViewTransform) const;
        auto OverrideProjectionTransform(Windows::Graphics::Holographic::HolographicStereoTransform const& projectionTransform) const;
        auto OverrideViewport(Windows::Foundation::Rect const& leftViewport, Windows::Foundation::Rect const& rightViewport) const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicCameraPose2>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraPose2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters
    {
        auto SetFocusPoint(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position) const;
        auto SetFocusPoint(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::float3 const& normal) const;
        auto SetFocusPoint(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::float3 const& normal, Windows::Foundation::Numerics::float3 const& linearVelocity) const;
        [[nodiscard]] auto Direct3D11Device() const;
        [[nodiscard]] auto Direct3D11BackBuffer() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters2
    {
        [[nodiscard]] auto ReprojectionMode() const;
        auto ReprojectionMode(Windows::Graphics::Holographic::HolographicReprojectionMode const& value) const;
        auto CommitDirect3D11DepthBuffer(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& value) const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters3
    {
        [[nodiscard]] auto IsContentProtectionEnabled() const;
        auto IsContentProtectionEnabled(bool value) const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters3<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCameraViewportParameters
    {
        [[nodiscard]] auto HiddenAreaMesh() const;
        [[nodiscard]] auto VisibleAreaMesh() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicCameraViewportParameters>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraViewportParameters<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicDisplay
    {
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto MaxViewportSize() const;
        [[nodiscard]] auto IsStereo() const;
        [[nodiscard]] auto IsOpaque() const;
        [[nodiscard]] auto AdapterId() const;
        [[nodiscard]] auto SpatialLocator() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicDisplay>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicDisplay<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicDisplay2
    {
        [[nodiscard]] auto RefreshRate() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicDisplay2>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicDisplay2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicDisplay3
    {
        auto TryGetViewConfiguration(Windows::Graphics::Holographic::HolographicViewConfigurationKind const& kind) const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicDisplay3>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicDisplay3<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicDisplayStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicDisplayStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicDisplayStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicFrame
    {
        [[nodiscard]] auto AddedCameras() const;
        [[nodiscard]] auto RemovedCameras() const;
        auto GetRenderingParameters(Windows::Graphics::Holographic::HolographicCameraPose const& cameraPose) const;
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto CurrentPrediction() const;
        auto UpdateCurrentPrediction() const;
        auto PresentUsingCurrentPrediction() const;
        auto PresentUsingCurrentPrediction(Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior const& waitBehavior) const;
        auto WaitForFrameToFinish() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicFrame>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicFrame2
    {
        auto GetQuadLayerUpdateParameters(Windows::Graphics::Holographic::HolographicQuadLayer const& layer) const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicFrame2>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFrame2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicFrame3
    {
        [[nodiscard]] auto Id() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicFrame3>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFrame3<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicFramePrediction
    {
        [[nodiscard]] auto CameraPoses() const;
        [[nodiscard]] auto Timestamp() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicFramePrediction>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFramePrediction<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicFramePresentationMonitor
    {
        auto ReadReports() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicFramePresentationMonitor>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFramePresentationMonitor<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicFramePresentationReport
    {
        [[nodiscard]] auto CompositorGpuDuration() const;
        [[nodiscard]] auto AppGpuDuration() const;
        [[nodiscard]] auto AppGpuOverrun() const;
        [[nodiscard]] auto MissedPresentationOpportunityCount() const;
        [[nodiscard]] auto PresentationCount() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicFramePresentationReport>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFramePresentationReport<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicFrameRenderingReport
    {
        [[nodiscard]] auto FrameId() const;
        [[nodiscard]] auto MissedLatchCount() const;
        [[nodiscard]] auto SystemRelativeFrameReadyTime() const;
        [[nodiscard]] auto SystemRelativeActualGpuFinishTime() const;
        [[nodiscard]] auto SystemRelativeTargetLatchTime() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicFrameRenderingReport>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFrameRenderingReport<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicFrameScanoutMonitor
    {
        auto ReadReports() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicFrameScanoutMonitor>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFrameScanoutMonitor<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicFrameScanoutReport
    {
        [[nodiscard]] auto RenderingReport() const;
        [[nodiscard]] auto MissedScanoutCount() const;
        [[nodiscard]] auto SystemRelativeLatchTime() const;
        [[nodiscard]] auto SystemRelativeScanoutStartTime() const;
        [[nodiscard]] auto SystemRelativePhotonTime() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicFrameScanoutReport>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFrameScanoutReport<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicQuadLayer
    {
        [[nodiscard]] auto PixelFormat() const;
        [[nodiscard]] auto Size() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicQuadLayer>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicQuadLayer<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicQuadLayerFactory
    {
        auto Create(Windows::Foundation::Size const& size) const;
        auto CreateWithPixelFormat(Windows::Foundation::Size const& size, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat) const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicQuadLayerFactory>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicQuadLayerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters
    {
        auto AcquireBufferToUpdateContent() const;
        auto UpdateViewport(Windows::Foundation::Rect const& value) const;
        auto UpdateContentProtectionEnabled(bool value) const;
        auto UpdateExtents(Windows::Foundation::Numerics::float2 const& value) const;
        auto UpdateLocationWithStationaryMode(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::quaternion const& orientation) const;
        auto UpdateLocationWithDisplayRelativeMode(Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::quaternion const& orientation) const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters2
    {
        [[nodiscard]] auto CanAcquireWithHardwareProtection() const;
        auto AcquireBufferToUpdateContentWithHardwareProtection() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters2>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicSpace
    {
        [[nodiscard]] auto PrimaryAdapterId() const;
        auto SetDirect3D11Device(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& value) const;
        auto CameraAdded(Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> const& handler) const;
        using CameraAdded_revoker = impl::event_revoker<Windows::Graphics::Holographic::IHolographicSpace, &impl::abi_t<Windows::Graphics::Holographic::IHolographicSpace>::remove_CameraAdded>;
        CameraAdded_revoker CameraAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> const& handler) const;
        auto CameraAdded(winrt::event_token const& cookie) const noexcept;
        auto CameraRemoved(Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> const& handler) const;
        using CameraRemoved_revoker = impl::event_revoker<Windows::Graphics::Holographic::IHolographicSpace, &impl::abi_t<Windows::Graphics::Holographic::IHolographicSpace>::remove_CameraRemoved>;
        CameraRemoved_revoker CameraRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> const& handler) const;
        auto CameraRemoved(winrt::event_token const& cookie) const noexcept;
        auto CreateNextFrame() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicSpace>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpace<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicSpace2
    {
        [[nodiscard]] auto UserPresence() const;
        auto UserPresenceChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Foundation::IInspectable> const& handler) const;
        using UserPresenceChanged_revoker = impl::event_revoker<Windows::Graphics::Holographic::IHolographicSpace2, &impl::abi_t<Windows::Graphics::Holographic::IHolographicSpace2>::remove_UserPresenceChanged>;
        UserPresenceChanged_revoker UserPresenceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Foundation::IInspectable> const& handler) const;
        auto UserPresenceChanged(winrt::event_token const& token) const noexcept;
        auto WaitForNextFrameReady() const;
        auto WaitForNextFrameReadyWithHeadStart(Windows::Foundation::TimeSpan const& requestedHeadStartDuration) const;
        auto CreateFramePresentationMonitor(uint32_t maxQueuedReports) const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicSpace2>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpace2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicSpace3
    {
        auto CreateFrameScanoutMonitor(uint32_t maxQueuedReports) const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicSpace3>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpace3<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicSpaceCameraAddedEventArgs
    {
        [[nodiscard]] auto Camera() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpaceCameraAddedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicSpaceCameraRemovedEventArgs
    {
        [[nodiscard]] auto Camera() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpaceCameraRemovedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicSpaceStatics
    {
        auto CreateForCoreWindow(Windows::UI::Core::CoreWindow const& window) const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicSpaceStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpaceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicSpaceStatics2
    {
        [[nodiscard]] auto IsSupported() const;
        [[nodiscard]] auto IsAvailable() const;
        auto IsAvailableChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using IsAvailableChanged_revoker = impl::event_revoker<Windows::Graphics::Holographic::IHolographicSpaceStatics2, &impl::abi_t<Windows::Graphics::Holographic::IHolographicSpaceStatics2>::remove_IsAvailableChanged>;
        IsAvailableChanged_revoker IsAvailableChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto IsAvailableChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicSpaceStatics2>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpaceStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicSpaceStatics3
    {
        [[nodiscard]] auto IsConfigured() const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicSpaceStatics3>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpaceStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicViewConfiguration
    {
        [[nodiscard]] auto NativeRenderTargetSize() const;
        [[nodiscard]] auto RenderTargetSize() const;
        auto RequestRenderTargetSize(Windows::Foundation::Size const& size) const;
        [[nodiscard]] auto SupportedPixelFormats() const;
        [[nodiscard]] auto PixelFormat() const;
        auto PixelFormat(Windows::Graphics::DirectX::DirectXPixelFormat const& value) const;
        [[nodiscard]] auto IsStereo() const;
        [[nodiscard]] auto RefreshRate() const;
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto Display() const;
        [[nodiscard]] auto IsEnabled() const;
        auto IsEnabled(bool value) const;
    };
    template <> struct consume<Windows::Graphics::Holographic::IHolographicViewConfiguration>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicViewConfiguration<D>;
    };
    struct struct_Windows_Graphics_Holographic_HolographicAdapterId
    {
        uint32_t LowPart;
        int32_t HighPart;
    };
    template <> struct abi<Windows::Graphics::Holographic::HolographicAdapterId>
    {
        using type = struct_Windows_Graphics_Holographic_HolographicAdapterId;
    };
    struct struct_Windows_Graphics_Holographic_HolographicFrameId
    {
        uint64_t Value;
    };
    template <> struct abi<Windows::Graphics::Holographic::HolographicFrameId>
    {
        using type = struct_Windows_Graphics_Holographic_HolographicFrameId;
    };
    struct struct_Windows_Graphics_Holographic_HolographicStereoTransform
    {
        Windows::Foundation::Numerics::float4x4 Left;
        Windows::Foundation::Numerics::float4x4 Right;
    };
    template <> struct abi<Windows::Graphics::Holographic::HolographicStereoTransform>
    {
        using type = struct_Windows_Graphics_Holographic_HolographicStereoTransform;
    };
}
#endif
