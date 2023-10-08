// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_PointOfService_Provider_0_H
#define WINRT_Windows_Devices_PointOfService_Provider_0_H
namespace winrt::Windows::Devices::PointOfService
{
    struct BarcodeScannerReport;
    struct BarcodeSymbologyAttributes;
    struct UnifiedPosErrorData;
}
namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Graphics::Imaging
{
    enum class BitmapPixelFormat : int32_t;
    struct BitmapSize;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
namespace winrt::Windows::Devices::PointOfService::Provider
{
    enum class BarcodeScannerTriggerState : int32_t
    {
        Released = 0,
        Pressed = 1,
    };
    struct IBarcodeScannerDisableScannerRequest;
    struct IBarcodeScannerDisableScannerRequest2;
    struct IBarcodeScannerDisableScannerRequestEventArgs;
    struct IBarcodeScannerEnableScannerRequest;
    struct IBarcodeScannerEnableScannerRequest2;
    struct IBarcodeScannerEnableScannerRequestEventArgs;
    struct IBarcodeScannerFrameReader;
    struct IBarcodeScannerFrameReaderFrameArrivedEventArgs;
    struct IBarcodeScannerGetSymbologyAttributesRequest;
    struct IBarcodeScannerGetSymbologyAttributesRequest2;
    struct IBarcodeScannerGetSymbologyAttributesRequestEventArgs;
    struct IBarcodeScannerHideVideoPreviewRequest;
    struct IBarcodeScannerHideVideoPreviewRequest2;
    struct IBarcodeScannerHideVideoPreviewRequestEventArgs;
    struct IBarcodeScannerProviderConnection;
    struct IBarcodeScannerProviderConnection2;
    struct IBarcodeScannerProviderTriggerDetails;
    struct IBarcodeScannerSetActiveSymbologiesRequest;
    struct IBarcodeScannerSetActiveSymbologiesRequest2;
    struct IBarcodeScannerSetActiveSymbologiesRequestEventArgs;
    struct IBarcodeScannerSetSymbologyAttributesRequest;
    struct IBarcodeScannerSetSymbologyAttributesRequest2;
    struct IBarcodeScannerSetSymbologyAttributesRequestEventArgs;
    struct IBarcodeScannerStartSoftwareTriggerRequest;
    struct IBarcodeScannerStartSoftwareTriggerRequest2;
    struct IBarcodeScannerStartSoftwareTriggerRequestEventArgs;
    struct IBarcodeScannerStopSoftwareTriggerRequest;
    struct IBarcodeScannerStopSoftwareTriggerRequest2;
    struct IBarcodeScannerStopSoftwareTriggerRequestEventArgs;
    struct IBarcodeScannerVideoFrame;
    struct IBarcodeSymbologyAttributesBuilder;
    struct BarcodeScannerDisableScannerRequest;
    struct BarcodeScannerDisableScannerRequestEventArgs;
    struct BarcodeScannerEnableScannerRequest;
    struct BarcodeScannerEnableScannerRequestEventArgs;
    struct BarcodeScannerFrameReader;
    struct BarcodeScannerFrameReaderFrameArrivedEventArgs;
    struct BarcodeScannerGetSymbologyAttributesRequest;
    struct BarcodeScannerGetSymbologyAttributesRequestEventArgs;
    struct BarcodeScannerHideVideoPreviewRequest;
    struct BarcodeScannerHideVideoPreviewRequestEventArgs;
    struct BarcodeScannerProviderConnection;
    struct BarcodeScannerProviderTriggerDetails;
    struct BarcodeScannerSetActiveSymbologiesRequest;
    struct BarcodeScannerSetActiveSymbologiesRequestEventArgs;
    struct BarcodeScannerSetSymbologyAttributesRequest;
    struct BarcodeScannerSetSymbologyAttributesRequestEventArgs;
    struct BarcodeScannerStartSoftwareTriggerRequest;
    struct BarcodeScannerStartSoftwareTriggerRequestEventArgs;
    struct BarcodeScannerStopSoftwareTriggerRequest;
    struct BarcodeScannerStopSoftwareTriggerRequestEventArgs;
    struct BarcodeScannerVideoFrame;
    struct BarcodeSymbologyAttributesBuilder;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReaderFrameArrivedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerVideoFrame>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReader>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReaderFrameArrivedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerVideoFrame>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeSymbologyAttributesBuilder>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerTriggerState>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerDisableScannerRequest" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerDisableScannerRequest2" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerDisableScannerRequestEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerEnableScannerRequest" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerEnableScannerRequest2" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerEnableScannerRequestEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerFrameReader" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReaderFrameArrivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerFrameReaderFrameArrivedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerGetSymbologyAttributesRequest" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerGetSymbologyAttributesRequest2" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerGetSymbologyAttributesRequestEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerHideVideoPreviewRequest" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerHideVideoPreviewRequest2" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerHideVideoPreviewRequestEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerProviderConnection" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerProviderConnection2" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerProviderTriggerDetails" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerSetActiveSymbologiesRequest" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerSetActiveSymbologiesRequest2" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerSetActiveSymbologiesRequestEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerSetSymbologyAttributesRequest" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerSetSymbologyAttributesRequest2" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerSetSymbologyAttributesRequestEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerStartSoftwareTriggerRequest" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerStartSoftwareTriggerRequest2" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerStartSoftwareTriggerRequestEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerStopSoftwareTriggerRequest" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerStopSoftwareTriggerRequest2" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerStopSoftwareTriggerRequestEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerVideoFrame>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerVideoFrame" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeSymbologyAttributesBuilder" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerDisableScannerRequest" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerDisableScannerRequestEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerEnableScannerRequest" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerEnableScannerRequestEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReader>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerFrameReader" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReaderFrameArrivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerFrameReaderFrameArrivedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerGetSymbologyAttributesRequest" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerGetSymbologyAttributesRequestEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerHideVideoPreviewRequest" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerHideVideoPreviewRequestEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerProviderConnection" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerProviderTriggerDetails" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerSetActiveSymbologiesRequest" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerSetActiveSymbologiesRequestEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerSetSymbologyAttributesRequest" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerSetSymbologyAttributesRequestEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerStartSoftwareTriggerRequest" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerStartSoftwareTriggerRequestEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerStopSoftwareTriggerRequest" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerStopSoftwareTriggerRequestEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerVideoFrame>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerVideoFrame" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeSymbologyAttributesBuilder>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeSymbologyAttributesBuilder" };
    };
    template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerTriggerState>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerTriggerState" };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest>
    {
        static constexpr guid value{ 0x88ECF7C0,0x37B9,0x4275,{ 0x8E,0x77,0xC8,0xE5,0x2A,0xE5,0xA9,0xC8 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest2>
    {
        static constexpr guid value{ 0xCCDFE625,0x65C3,0x4CCC,{ 0xB4,0x57,0xF3,0x9C,0x7A,0x9E,0xA6,0x0D } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs>
    {
        static constexpr guid value{ 0x7006E142,0xE802,0x46F5,{ 0xB6,0x04,0x35,0x2A,0x15,0xCE,0x92,0x32 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest>
    {
        static constexpr guid value{ 0xC0B3E9BA,0x816A,0x452B,{ 0xBD,0x77,0xB7,0xE4,0x53,0xEC,0x44,0x6D } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest2>
    {
        static constexpr guid value{ 0x71A4F2A8,0x9905,0x41AC,{ 0x91,0x21,0xB6,0x45,0x91,0x6A,0x84,0xA1 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs>
    {
        static constexpr guid value{ 0x956C9419,0x7B4E,0x4451,{ 0x8C,0x41,0x8E,0x10,0xCF,0xBC,0x5B,0x41 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader>
    {
        static constexpr guid value{ 0xDBC72B07,0x64C3,0x482B,{ 0x93,0xC8,0x65,0xFB,0x33,0xC2,0x22,0x08 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReaderFrameArrivedEventArgs>
    {
        static constexpr guid value{ 0xB0BBD604,0x54FD,0x436D,{ 0x86,0x29,0x71,0x2E,0x78,0x72,0x23,0xDD } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest>
    {
        static constexpr guid value{ 0x9774C46A,0x58E4,0x4C5F,{ 0xB8,0xE9,0xE4,0x14,0x67,0x63,0x27,0x00 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest2>
    {
        static constexpr guid value{ 0x6A6A2B13,0x75A8,0x49FB,{ 0xB8,0x52,0xBF,0xB9,0x3D,0x76,0x0A,0xF7 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs>
    {
        static constexpr guid value{ 0x7F89DE3E,0xFB5D,0x493C,{ 0xB4,0x02,0x35,0x6B,0x24,0xD5,0x74,0xA6 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest>
    {
        static constexpr guid value{ 0xFA4EBE7F,0x6670,0x40E1,{ 0xB9,0x0B,0xBB,0x10,0xD8,0xD4,0x25,0xFA } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest2>
    {
        static constexpr guid value{ 0x7E28435D,0x9814,0x431D,{ 0xA2,0xF2,0xD6,0x24,0x8C,0x5A,0xD4,0xB5 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs>
    {
        static constexpr guid value{ 0x16A281FC,0xD6BE,0x4BC7,{ 0x9D,0xF1,0x33,0x74,0x1F,0x3E,0xAD,0xEA } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>
    {
        static constexpr guid value{ 0xB44ACBED,0x0B3A,0x4FA3,{ 0x86,0xC5,0x49,0x1E,0xA3,0x07,0x80,0xEB } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection2>
    {
        static constexpr guid value{ 0xBE9B53CD,0x1134,0x418C,{ 0xA0,0x6B,0x04,0x42,0x3A,0x73,0xF3,0xD7 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails>
    {
        static constexpr guid value{ 0x50856D82,0x24E3,0x48CE,{ 0x99,0xC7,0x70,0xAA,0xC1,0xCB,0xC9,0xF7 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest>
    {
        static constexpr guid value{ 0xDB3F32B9,0xF7DA,0x41A1,{ 0x9F,0x79,0x07,0xBC,0xD9,0x5F,0x0B,0xDF } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest2>
    {
        static constexpr guid value{ 0xF5FF6EDF,0xFA9A,0x4749,{ 0xB1,0x1B,0xE8,0xFC,0xCB,0x75,0xBC,0x6B } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs>
    {
        static constexpr guid value{ 0x06305AFA,0x7BF6,0x4D52,{ 0x80,0x1A,0x33,0x02,0x72,0xF6,0x0A,0xE1 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest>
    {
        static constexpr guid value{ 0x32FB814F,0xA37F,0x48B0,{ 0xAC,0xEA,0xDC,0xE1,0x48,0x0F,0x12,0xAE } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest2>
    {
        static constexpr guid value{ 0xDFFBBFC1,0xDBA8,0x4B77,{ 0xBE,0x1E,0xB5,0x6C,0xD7,0x2F,0x65,0xB3 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs>
    {
        static constexpr guid value{ 0xB2B89809,0x9824,0x47D4,{ 0x85,0xBD,0xD0,0x07,0x7B,0xAA,0x7B,0xD2 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest>
    {
        static constexpr guid value{ 0xE3FA7B27,0xFF62,0x4454,{ 0xAF,0x4A,0xCB,0x61,0x44,0xA3,0xE3,0xF7 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest2>
    {
        static constexpr guid value{ 0xEB72A25C,0x6658,0x4765,{ 0xA6,0x8E,0x32,0x74,0x82,0x65,0x3D,0xEB } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs>
    {
        static constexpr guid value{ 0x2305D843,0xC88F,0x4F3B,{ 0x8C,0x3B,0xD3,0xDF,0x07,0x10,0x51,0xEC } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest>
    {
        static constexpr guid value{ 0x6F9FAF35,0xE287,0x4CA8,{ 0xB7,0x0D,0x5A,0x91,0xD6,0x94,0xF6,0x68 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest2>
    {
        static constexpr guid value{ 0xCB57C5DD,0xFE50,0x49F8,{ 0xA0,0xB4,0xBD,0xC2,0x30,0x81,0x4D,0xA2 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs>
    {
        static constexpr guid value{ 0xEAC34450,0x4EB7,0x481A,{ 0x92,0x73,0x14,0x7A,0x27,0x3B,0x99,0xB8 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeScannerVideoFrame>
    {
        static constexpr guid value{ 0x7E585248,0x9DF7,0x4121,{ 0xA1,0x75,0x80,0x1D,0x80,0x00,0x11,0x2E } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder>
    {
        static constexpr guid value{ 0xC57B0CBF,0xE4F5,0x40B9,{ 0x84,0xCF,0xE6,0x3F,0xBA,0xEA,0x42,0xB4 } };
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequest>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequest>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReader>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReaderFrameArrivedEventArgs>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReaderFrameArrivedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequest>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequest>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderTriggerDetails>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequest>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequest>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequest>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequest>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerVideoFrame>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerVideoFrame;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeSymbologyAttributesBuilder>
    {
        using type = Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder;
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportFailedWithFailedReasonAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedWithFailedReasonAndDescriptionAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportFailedWithFailedReasonAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedWithFailedReasonAndDescriptionAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StopAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryAcquireLatestFrameAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_Connection(void**) noexcept = 0;
            virtual int32_t __stdcall add_FrameArrived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FrameArrived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReaderFrameArrivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Symbology(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportFailedWithFailedReasonAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedWithFailedReasonAndDescriptionAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportFailedWithFailedReasonAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedWithFailedReasonAndDescriptionAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedSymbologies(void**) noexcept = 0;
            virtual int32_t __stdcall get_CompanyName(void**) noexcept = 0;
            virtual int32_t __stdcall put_CompanyName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_Version(void**) noexcept = 0;
            virtual int32_t __stdcall put_Version(void*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall ReportScannedDataAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportTriggerStateAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportErrorAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportErrorAsyncWithScanReport(void*, bool, void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_EnableScannerRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnableScannerRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DisableScannerRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DisableScannerRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SetActiveSymbologiesRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SetActiveSymbologiesRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StartSoftwareTriggerRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StartSoftwareTriggerRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StopSoftwareTriggerRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StopSoftwareTriggerRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_GetBarcodeSymbologyAttributesRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GetBarcodeSymbologyAttributesRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SetBarcodeSymbologyAttributesRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SetBarcodeSymbologyAttributesRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_HideVideoPreviewRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HideVideoPreviewRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFrameReaderAsync(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFrameReaderWithFormatAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFrameReaderWithFormatAndSizeAsync(int32_t, struct struct_Windows_Graphics_Imaging_BitmapSize, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Connection(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Symbologies(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportFailedWithFailedReasonAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedWithFailedReasonAndDescriptionAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Symbology(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Attributes(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportFailedWithFailedReasonAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedWithFailedReasonAndDescriptionAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportFailedWithFailedReasonAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedWithFailedReasonAndDescriptionAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportFailedWithFailedReasonAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedWithFailedReasonAndDescriptionAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerVideoFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Format(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Width(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Height(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PixelData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCheckDigitValidationSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCheckDigitValidationSupported(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsCheckDigitTransmissionSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCheckDigitTransmissionSupported(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsDecodeLengthSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsDecodeLengthSupported(bool) noexcept = 0;
            virtual int32_t __stdcall CreateAttributes(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequest
    {
        auto ReportCompletedAsync() const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequest2
    {
        auto ReportFailedAsync(int32_t reason) const;
        auto ReportFailedAsync(int32_t reason, param::hstring const& failedReasonDescription) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequest
    {
        auto ReportCompletedAsync() const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequest2
    {
        auto ReportFailedAsync(int32_t reason) const;
        auto ReportFailedAsync(int32_t reason, param::hstring const& failedReasonDescription) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerFrameReader
    {
        auto StartAsync() const;
        auto StopAsync() const;
        auto TryAcquireLatestFrameAsync() const;
        [[nodiscard]] auto Connection() const;
        auto FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReader, Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReaderFrameArrivedEventArgs> const& handler) const;
        using FrameArrived_revoker = impl::event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader, &impl::abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader>::remove_FrameArrived>;
        FrameArrived_revoker FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReader, Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReaderFrameArrivedEventArgs> const& handler) const;
        auto FrameArrived(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerFrameReader<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerFrameReaderFrameArrivedEventArgs
    {
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReaderFrameArrivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerFrameReaderFrameArrivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequest
    {
        [[nodiscard]] auto Symbology() const;
        auto ReportCompletedAsync(Windows::Devices::PointOfService::BarcodeSymbologyAttributes const& attributes) const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequest2
    {
        auto ReportFailedAsync(int32_t reason) const;
        auto ReportFailedAsync(int32_t reason, param::hstring const& failedReasonDescription) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequest
    {
        auto ReportCompletedAsync() const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequest2
    {
        auto ReportFailedAsync(int32_t reason) const;
        auto ReportFailedAsync(int32_t reason, param::hstring const& failedReasonDescription) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto VideoDeviceId() const;
        [[nodiscard]] auto SupportedSymbologies() const;
        [[nodiscard]] auto CompanyName() const;
        auto CompanyName(param::hstring const& value) const;
        [[nodiscard]] auto Name() const;
        auto Name(param::hstring const& value) const;
        [[nodiscard]] auto Version() const;
        auto Version(param::hstring const& value) const;
        auto Start() const;
        auto ReportScannedDataAsync(Windows::Devices::PointOfService::BarcodeScannerReport const& report) const;
        auto ReportTriggerStateAsync(Windows::Devices::PointOfService::Provider::BarcodeScannerTriggerState const& state) const;
        auto ReportErrorAsync(Windows::Devices::PointOfService::UnifiedPosErrorData const& errorData) const;
        auto ReportErrorAsync(Windows::Devices::PointOfService::UnifiedPosErrorData const& errorData, bool isRetriable, Windows::Devices::PointOfService::BarcodeScannerReport const& scanReport) const;
        auto EnableScannerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs> const& handler) const;
        using EnableScannerRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection, &impl::abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_EnableScannerRequested>;
        EnableScannerRequested_revoker EnableScannerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs> const& handler) const;
        auto EnableScannerRequested(winrt::event_token const& token) const noexcept;
        auto DisableScannerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs> const& handler) const;
        using DisableScannerRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection, &impl::abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_DisableScannerRequested>;
        DisableScannerRequested_revoker DisableScannerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs> const& handler) const;
        auto DisableScannerRequested(winrt::event_token const& token) const noexcept;
        auto SetActiveSymbologiesRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs> const& handler) const;
        using SetActiveSymbologiesRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection, &impl::abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_SetActiveSymbologiesRequested>;
        SetActiveSymbologiesRequested_revoker SetActiveSymbologiesRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs> const& handler) const;
        auto SetActiveSymbologiesRequested(winrt::event_token const& token) const noexcept;
        auto StartSoftwareTriggerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs> const& handler) const;
        using StartSoftwareTriggerRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection, &impl::abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_StartSoftwareTriggerRequested>;
        StartSoftwareTriggerRequested_revoker StartSoftwareTriggerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs> const& handler) const;
        auto StartSoftwareTriggerRequested(winrt::event_token const& token) const noexcept;
        auto StopSoftwareTriggerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs> const& handler) const;
        using StopSoftwareTriggerRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection, &impl::abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_StopSoftwareTriggerRequested>;
        StopSoftwareTriggerRequested_revoker StopSoftwareTriggerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs> const& handler) const;
        auto StopSoftwareTriggerRequested(winrt::event_token const& token) const noexcept;
        auto GetBarcodeSymbologyAttributesRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs> const& handler) const;
        using GetBarcodeSymbologyAttributesRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection, &impl::abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_GetBarcodeSymbologyAttributesRequested>;
        GetBarcodeSymbologyAttributesRequested_revoker GetBarcodeSymbologyAttributesRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs> const& handler) const;
        auto GetBarcodeSymbologyAttributesRequested(winrt::event_token const& token) const noexcept;
        auto SetBarcodeSymbologyAttributesRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs> const& handler) const;
        using SetBarcodeSymbologyAttributesRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection, &impl::abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_SetBarcodeSymbologyAttributesRequested>;
        SetBarcodeSymbologyAttributesRequested_revoker SetBarcodeSymbologyAttributesRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs> const& handler) const;
        auto SetBarcodeSymbologyAttributesRequested(winrt::event_token const& token) const noexcept;
        auto HideVideoPreviewRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs> const& handler) const;
        using HideVideoPreviewRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection, &impl::abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_HideVideoPreviewRequested>;
        HideVideoPreviewRequested_revoker HideVideoPreviewRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs> const& handler) const;
        auto HideVideoPreviewRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection2
    {
        auto CreateFrameReaderAsync() const;
        auto CreateFrameReaderAsync(Windows::Graphics::Imaging::BitmapPixelFormat const& preferredFormat) const;
        auto CreateFrameReaderAsync(Windows::Graphics::Imaging::BitmapPixelFormat const& preferredFormat, Windows::Graphics::Imaging::BitmapSize const& preferredSize) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderTriggerDetails
    {
        [[nodiscard]] auto Connection() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequest
    {
        [[nodiscard]] auto Symbologies() const;
        auto ReportCompletedAsync() const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequest2
    {
        auto ReportFailedAsync(int32_t reason) const;
        auto ReportFailedAsync(int32_t reason, param::hstring const& failedReasonDescription) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequest
    {
        [[nodiscard]] auto Symbology() const;
        [[nodiscard]] auto Attributes() const;
        auto ReportCompletedAsync() const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequest2
    {
        auto ReportFailedAsync(int32_t reason) const;
        auto ReportFailedAsync(int32_t reason, param::hstring const& failedReasonDescription) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequest
    {
        auto ReportCompletedAsync() const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequest2
    {
        auto ReportFailedAsync(int32_t reason) const;
        auto ReportFailedAsync(int32_t reason, param::hstring const& failedReasonDescription) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequest
    {
        auto ReportCompletedAsync() const;
        auto ReportFailedAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequest2
    {
        auto ReportFailedAsync(int32_t reason) const;
        auto ReportFailedAsync(int32_t reason, param::hstring const& failedReasonDescription) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequestEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerVideoFrame
    {
        [[nodiscard]] auto Format() const;
        [[nodiscard]] auto Width() const;
        [[nodiscard]] auto Height() const;
        [[nodiscard]] auto PixelData() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerVideoFrame>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerVideoFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_Provider_IBarcodeSymbologyAttributesBuilder
    {
        [[nodiscard]] auto IsCheckDigitValidationSupported() const;
        auto IsCheckDigitValidationSupported(bool value) const;
        [[nodiscard]] auto IsCheckDigitTransmissionSupported() const;
        auto IsCheckDigitTransmissionSupported(bool value) const;
        [[nodiscard]] auto IsDecodeLengthSupported() const;
        auto IsDecodeLengthSupported(bool value) const;
        auto CreateAttributes() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeSymbologyAttributesBuilder<D>;
    };
}
#endif
