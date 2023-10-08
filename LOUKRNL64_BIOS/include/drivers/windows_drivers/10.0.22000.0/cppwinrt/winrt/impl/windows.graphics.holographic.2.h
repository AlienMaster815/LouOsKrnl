// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Holographic_2_H
#define WINRT_Windows_Graphics_Holographic_2_H
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.Graphics.Holographic.1.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Holographic
{
    struct HolographicAdapterId
    {
        uint32_t LowPart;
        int32_t HighPart;
    };
    inline bool operator==(HolographicAdapterId const& left, HolographicAdapterId const& right) noexcept
    {
        return left.LowPart == right.LowPart && left.HighPart == right.HighPart;
    }
    inline bool operator!=(HolographicAdapterId const& left, HolographicAdapterId const& right) noexcept
    {
        return !(left == right);
    }
    struct HolographicFrameId
    {
        uint64_t Value;
    };
    inline bool operator==(HolographicFrameId const& left, HolographicFrameId const& right) noexcept
    {
        return left.Value == right.Value;
    }
    inline bool operator!=(HolographicFrameId const& left, HolographicFrameId const& right) noexcept
    {
        return !(left == right);
    }
    struct HolographicStereoTransform
    {
        Windows::Foundation::Numerics::float4x4 Left;
        Windows::Foundation::Numerics::float4x4 Right;
    };
    inline bool operator==(HolographicStereoTransform const& left, HolographicStereoTransform const& right) noexcept
    {
        return left.Left == right.Left && left.Right == right.Right;
    }
    inline bool operator!=(HolographicStereoTransform const& left, HolographicStereoTransform const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) HolographicCamera : Windows::Graphics::Holographic::IHolographicCamera,
        impl::require<HolographicCamera, Windows::Graphics::Holographic::IHolographicCamera2, Windows::Graphics::Holographic::IHolographicCamera3, Windows::Graphics::Holographic::IHolographicCamera4, Windows::Graphics::Holographic::IHolographicCamera5, Windows::Graphics::Holographic::IHolographicCamera6>
    {
        HolographicCamera(std::nullptr_t) noexcept {}
        HolographicCamera(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicCamera(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HolographicCameraPose : Windows::Graphics::Holographic::IHolographicCameraPose,
        impl::require<HolographicCameraPose, Windows::Graphics::Holographic::IHolographicCameraPose2>
    {
        HolographicCameraPose(std::nullptr_t) noexcept {}
        HolographicCameraPose(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicCameraPose(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HolographicCameraRenderingParameters : Windows::Graphics::Holographic::IHolographicCameraRenderingParameters,
        impl::require<HolographicCameraRenderingParameters, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters4>
    {
        HolographicCameraRenderingParameters(std::nullptr_t) noexcept {}
        HolographicCameraRenderingParameters(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicCameraRenderingParameters(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HolographicCameraViewportParameters : Windows::Graphics::Holographic::IHolographicCameraViewportParameters
    {
        HolographicCameraViewportParameters(std::nullptr_t) noexcept {}
        HolographicCameraViewportParameters(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicCameraViewportParameters(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HolographicDisplay : Windows::Graphics::Holographic::IHolographicDisplay,
        impl::require<HolographicDisplay, Windows::Graphics::Holographic::IHolographicDisplay2, Windows::Graphics::Holographic::IHolographicDisplay3>
    {
        HolographicDisplay(std::nullptr_t) noexcept {}
        HolographicDisplay(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicDisplay(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
    };
    struct __declspec(empty_bases) HolographicFrame : Windows::Graphics::Holographic::IHolographicFrame,
        impl::require<HolographicFrame, Windows::Graphics::Holographic::IHolographicFrame2, Windows::Graphics::Holographic::IHolographicFrame3>
    {
        HolographicFrame(std::nullptr_t) noexcept {}
        HolographicFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicFrame(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HolographicFramePrediction : Windows::Graphics::Holographic::IHolographicFramePrediction
    {
        HolographicFramePrediction(std::nullptr_t) noexcept {}
        HolographicFramePrediction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicFramePrediction(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HolographicFramePresentationMonitor : Windows::Graphics::Holographic::IHolographicFramePresentationMonitor
    {
        HolographicFramePresentationMonitor(std::nullptr_t) noexcept {}
        HolographicFramePresentationMonitor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicFramePresentationMonitor(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HolographicFramePresentationReport : Windows::Graphics::Holographic::IHolographicFramePresentationReport
    {
        HolographicFramePresentationReport(std::nullptr_t) noexcept {}
        HolographicFramePresentationReport(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicFramePresentationReport(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HolographicFrameRenderingReport : Windows::Graphics::Holographic::IHolographicFrameRenderingReport
    {
        HolographicFrameRenderingReport(std::nullptr_t) noexcept {}
        HolographicFrameRenderingReport(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicFrameRenderingReport(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HolographicFrameScanoutMonitor : Windows::Graphics::Holographic::IHolographicFrameScanoutMonitor
    {
        HolographicFrameScanoutMonitor(std::nullptr_t) noexcept {}
        HolographicFrameScanoutMonitor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicFrameScanoutMonitor(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HolographicFrameScanoutReport : Windows::Graphics::Holographic::IHolographicFrameScanoutReport
    {
        HolographicFrameScanoutReport(std::nullptr_t) noexcept {}
        HolographicFrameScanoutReport(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicFrameScanoutReport(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HolographicQuadLayer : Windows::Graphics::Holographic::IHolographicQuadLayer,
        impl::require<HolographicQuadLayer, Windows::Foundation::IClosable>
    {
        HolographicQuadLayer(std::nullptr_t) noexcept {}
        HolographicQuadLayer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicQuadLayer(ptr, take_ownership_from_abi) {}
        explicit HolographicQuadLayer(Windows::Foundation::Size const& size);
        HolographicQuadLayer(Windows::Foundation::Size const& size, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat);
    };
    struct __declspec(empty_bases) HolographicQuadLayerUpdateParameters : Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters,
        impl::require<HolographicQuadLayerUpdateParameters, Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters2>
    {
        HolographicQuadLayerUpdateParameters(std::nullptr_t) noexcept {}
        HolographicQuadLayerUpdateParameters(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HolographicSpace : Windows::Graphics::Holographic::IHolographicSpace,
        impl::require<HolographicSpace, Windows::Graphics::Holographic::IHolographicSpace2, Windows::Graphics::Holographic::IHolographicSpace3>
    {
        HolographicSpace(std::nullptr_t) noexcept {}
        HolographicSpace(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicSpace(ptr, take_ownership_from_abi) {}
        static auto CreateForCoreWindow(Windows::UI::Core::CoreWindow const& window);
        [[nodiscard]] static auto IsSupported();
        [[nodiscard]] static auto IsAvailable();
        static auto IsAvailableChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using IsAvailableChanged_revoker = impl::factory_event_revoker<Windows::Graphics::Holographic::IHolographicSpaceStatics2, &impl::abi_t<Windows::Graphics::Holographic::IHolographicSpaceStatics2>::remove_IsAvailableChanged>;
        [[nodiscard]] static IsAvailableChanged_revoker IsAvailableChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto IsAvailableChanged(winrt::event_token const& token);
        [[nodiscard]] static auto IsConfigured();
    };
    struct __declspec(empty_bases) HolographicSpaceCameraAddedEventArgs : Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs
    {
        HolographicSpaceCameraAddedEventArgs(std::nullptr_t) noexcept {}
        HolographicSpaceCameraAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HolographicSpaceCameraRemovedEventArgs : Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs
    {
        HolographicSpaceCameraRemovedEventArgs(std::nullptr_t) noexcept {}
        HolographicSpaceCameraRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HolographicViewConfiguration : Windows::Graphics::Holographic::IHolographicViewConfiguration,
        impl::require<HolographicViewConfiguration, Windows::Graphics::Holographic::IHolographicViewConfiguration2>
    {
        HolographicViewConfiguration(std::nullptr_t) noexcept {}
        HolographicViewConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicViewConfiguration(ptr, take_ownership_from_abi) {}
    };
}
#endif
