// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_PointOfService_0_H
#define WINRT_Windows_Devices_PointOfService_0_H
namespace winrt::Windows::Foundation
{
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
    struct IAsyncAction;
    struct Point;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    template <typename K, typename V> struct IKeyValuePair;
}
namespace winrt::Windows::Graphics::Imaging
{
    struct BitmapFrame;
}
namespace winrt::Windows::Storage
{
    struct StorageFile;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IRandomAccessStreamWithContentType;
}
namespace winrt::Windows::Devices::PointOfService
{
    enum class BarcodeScannerStatus : int32_t
    {
        Online = 0,
        Off = 1,
        Offline = 2,
        OffOrOffline = 3,
        Extended = 4,
    };
    enum class BarcodeSymbologyDecodeLengthKind : int32_t
    {
        AnyLength = 0,
        Discrete = 1,
        Range = 2,
    };
    enum class CashDrawerStatusKind : int32_t
    {
        Online = 0,
        Off = 1,
        Offline = 2,
        OffOrOffline = 3,
        Extended = 4,
    };
    enum class LineDisplayCursorType : int32_t
    {
        None = 0,
        Block = 1,
        HalfBlock = 2,
        Underline = 3,
        Reverse = 4,
        Other = 5,
    };
    enum class LineDisplayDescriptorState : int32_t
    {
        Off = 0,
        On = 1,
        Blink = 2,
    };
    enum class LineDisplayHorizontalAlignment : int32_t
    {
        Left = 0,
        Center = 1,
        Right = 2,
    };
    enum class LineDisplayMarqueeFormat : int32_t
    {
        None = 0,
        Walk = 1,
        Place = 2,
    };
    enum class LineDisplayPowerStatus : int32_t
    {
        Unknown = 0,
        Online = 1,
        Off = 2,
        Offline = 3,
        OffOrOffline = 4,
    };
    enum class LineDisplayScrollDirection : int32_t
    {
        Up = 0,
        Down = 1,
        Left = 2,
        Right = 3,
    };
    enum class LineDisplayTextAttribute : int32_t
    {
        Normal = 0,
        Blink = 1,
        Reverse = 2,
        ReverseBlink = 3,
    };
    enum class LineDisplayTextAttributeGranularity : int32_t
    {
        NotSupported = 0,
        EntireDisplay = 1,
        PerCharacter = 2,
    };
    enum class LineDisplayVerticalAlignment : int32_t
    {
        Top = 0,
        Center = 1,
        Bottom = 2,
    };
    enum class MagneticStripeReaderAuthenticationLevel : int32_t
    {
        NotSupported = 0,
        Optional = 1,
        Required = 2,
    };
    enum class MagneticStripeReaderAuthenticationProtocol : int32_t
    {
        None = 0,
        ChallengeResponse = 1,
    };
    enum class MagneticStripeReaderErrorReportingType : int32_t
    {
        CardLevel = 0,
        TrackLevel = 1,
    };
    enum class MagneticStripeReaderStatus : int32_t
    {
        Unauthenticated = 0,
        Authenticated = 1,
        Extended = 2,
    };
    enum class MagneticStripeReaderTrackErrorType : int32_t
    {
        None = 0,
        StartSentinelError = 1,
        EndSentinelError = 2,
        ParityError = 3,
        LrcError = 4,
        Unknown = -1,
    };
    enum class MagneticStripeReaderTrackIds : int32_t
    {
        None = 0,
        Track1 = 1,
        Track2 = 2,
        Track3 = 4,
        Track4 = 8,
    };
    enum class PosConnectionTypes : uint32_t
    {
        Local = 0x1,
        IP = 0x2,
        Bluetooth = 0x4,
        All = 0xffffffff,
    };
    enum class PosPrinterAlignment : int32_t
    {
        Left = 0,
        Center = 1,
        Right = 2,
    };
    enum class PosPrinterBarcodeTextPosition : int32_t
    {
        None = 0,
        Above = 1,
        Below = 2,
    };
    enum class PosPrinterCartridgeSensors : uint32_t
    {
        None = 0,
        Removed = 0x1,
        Empty = 0x2,
        HeadCleaning = 0x4,
        NearEnd = 0x8,
    };
    enum class PosPrinterColorCapabilities : uint32_t
    {
        None = 0,
        Primary = 0x1,
        Custom1 = 0x2,
        Custom2 = 0x4,
        Custom3 = 0x8,
        Custom4 = 0x10,
        Custom5 = 0x20,
        Custom6 = 0x40,
        Cyan = 0x80,
        Magenta = 0x100,
        Yellow = 0x200,
        Full = 0x400,
    };
    enum class PosPrinterColorCartridge : int32_t
    {
        Unknown = 0,
        Primary = 1,
        Custom1 = 2,
        Custom2 = 3,
        Custom3 = 4,
        Custom4 = 5,
        Custom5 = 6,
        Custom6 = 7,
        Cyan = 8,
        Magenta = 9,
        Yellow = 10,
    };
    enum class PosPrinterLineDirection : int32_t
    {
        Horizontal = 0,
        Vertical = 1,
    };
    enum class PosPrinterLineStyle : int32_t
    {
        SingleSolid = 0,
        DoubleSolid = 1,
        Broken = 2,
        Chain = 3,
    };
    enum class PosPrinterMapMode : int32_t
    {
        Dots = 0,
        Twips = 1,
        English = 2,
        Metric = 3,
    };
    enum class PosPrinterMarkFeedCapabilities : uint32_t
    {
        None = 0,
        ToTakeUp = 0x1,
        ToCutter = 0x2,
        ToCurrentTopOfForm = 0x4,
        ToNextTopOfForm = 0x8,
    };
    enum class PosPrinterMarkFeedKind : int32_t
    {
        ToTakeUp = 0,
        ToCutter = 1,
        ToCurrentTopOfForm = 2,
        ToNextTopOfForm = 3,
    };
    enum class PosPrinterPrintSide : int32_t
    {
        Unknown = 0,
        Side1 = 1,
        Side2 = 2,
    };
    enum class PosPrinterRotation : int32_t
    {
        Normal = 0,
        Right90 = 1,
        Left90 = 2,
        Rotate180 = 3,
    };
    enum class PosPrinterRuledLineCapabilities : uint32_t
    {
        None = 0,
        Horizontal = 0x1,
        Vertical = 0x2,
    };
    enum class PosPrinterStatusKind : int32_t
    {
        Online = 0,
        Off = 1,
        Offline = 2,
        OffOrOffline = 3,
        Extended = 4,
    };
    enum class UnifiedPosErrorReason : int32_t
    {
        UnknownErrorReason = 0,
        NoService = 1,
        Disabled = 2,
        Illegal = 3,
        NoHardware = 4,
        Closed = 5,
        Offline = 6,
        Failure = 7,
        Timeout = 8,
        Busy = 9,
        Extended = 10,
    };
    enum class UnifiedPosErrorSeverity : int32_t
    {
        UnknownErrorSeverity = 0,
        Warning = 1,
        Recoverable = 2,
        Unrecoverable = 3,
        AssistanceRequired = 4,
        Fatal = 5,
    };
    enum class UnifiedPosHealthCheckLevel : int32_t
    {
        UnknownHealthCheckLevel = 0,
        POSInternal = 1,
        External = 2,
        Interactive = 3,
    };
    enum class UnifiedPosPowerReportingType : int32_t
    {
        UnknownPowerReportingType = 0,
        Standard = 1,
        Advanced = 2,
    };
    struct IBarcodeScanner;
    struct IBarcodeScanner2;
    struct IBarcodeScannerCapabilities;
    struct IBarcodeScannerCapabilities1;
    struct IBarcodeScannerCapabilities2;
    struct IBarcodeScannerDataReceivedEventArgs;
    struct IBarcodeScannerErrorOccurredEventArgs;
    struct IBarcodeScannerImagePreviewReceivedEventArgs;
    struct IBarcodeScannerReport;
    struct IBarcodeScannerReportFactory;
    struct IBarcodeScannerStatics;
    struct IBarcodeScannerStatics2;
    struct IBarcodeScannerStatusUpdatedEventArgs;
    struct IBarcodeSymbologiesStatics;
    struct IBarcodeSymbologiesStatics2;
    struct IBarcodeSymbologyAttributes;
    struct ICashDrawer;
    struct ICashDrawerCapabilities;
    struct ICashDrawerCloseAlarm;
    struct ICashDrawerEventSource;
    struct ICashDrawerEventSourceEventArgs;
    struct ICashDrawerStatics;
    struct ICashDrawerStatics2;
    struct ICashDrawerStatus;
    struct ICashDrawerStatusUpdatedEventArgs;
    struct IClaimedBarcodeScanner;
    struct IClaimedBarcodeScanner1;
    struct IClaimedBarcodeScanner2;
    struct IClaimedBarcodeScanner3;
    struct IClaimedBarcodeScanner4;
    struct IClaimedBarcodeScannerClosedEventArgs;
    struct IClaimedCashDrawer;
    struct IClaimedCashDrawer2;
    struct IClaimedCashDrawerClosedEventArgs;
    struct IClaimedJournalPrinter;
    struct IClaimedLineDisplay;
    struct IClaimedLineDisplay2;
    struct IClaimedLineDisplay3;
    struct IClaimedLineDisplayClosedEventArgs;
    struct IClaimedLineDisplayStatics;
    struct IClaimedMagneticStripeReader;
    struct IClaimedMagneticStripeReader2;
    struct IClaimedMagneticStripeReaderClosedEventArgs;
    struct IClaimedPosPrinter;
    struct IClaimedPosPrinter2;
    struct IClaimedPosPrinterClosedEventArgs;
    struct IClaimedReceiptPrinter;
    struct IClaimedSlipPrinter;
    struct ICommonClaimedPosPrinterStation;
    struct ICommonPosPrintStationCapabilities;
    struct ICommonReceiptSlipCapabilities;
    struct IJournalPrintJob;
    struct IJournalPrinterCapabilities;
    struct IJournalPrinterCapabilities2;
    struct ILineDisplay;
    struct ILineDisplay2;
    struct ILineDisplayAttributes;
    struct ILineDisplayCapabilities;
    struct ILineDisplayCursor;
    struct ILineDisplayCursorAttributes;
    struct ILineDisplayCustomGlyphs;
    struct ILineDisplayMarquee;
    struct ILineDisplayStatics;
    struct ILineDisplayStatics2;
    struct ILineDisplayStatisticsCategorySelector;
    struct ILineDisplayStatusUpdatedEventArgs;
    struct ILineDisplayStoredBitmap;
    struct ILineDisplayWindow;
    struct ILineDisplayWindow2;
    struct IMagneticStripeReader;
    struct IMagneticStripeReaderAamvaCardDataReceivedEventArgs;
    struct IMagneticStripeReaderBankCardDataReceivedEventArgs;
    struct IMagneticStripeReaderCapabilities;
    struct IMagneticStripeReaderCardTypesStatics;
    struct IMagneticStripeReaderEncryptionAlgorithmsStatics;
    struct IMagneticStripeReaderErrorOccurredEventArgs;
    struct IMagneticStripeReaderReport;
    struct IMagneticStripeReaderStatics;
    struct IMagneticStripeReaderStatics2;
    struct IMagneticStripeReaderStatusUpdatedEventArgs;
    struct IMagneticStripeReaderTrackData;
    struct IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs;
    struct IPosPrinter;
    struct IPosPrinter2;
    struct IPosPrinterCapabilities;
    struct IPosPrinterCharacterSetIdsStatics;
    struct IPosPrinterFontProperty;
    struct IPosPrinterJob;
    struct IPosPrinterPrintOptions;
    struct IPosPrinterReleaseDeviceRequestedEventArgs;
    struct IPosPrinterStatics;
    struct IPosPrinterStatics2;
    struct IPosPrinterStatus;
    struct IPosPrinterStatusUpdatedEventArgs;
    struct IReceiptOrSlipJob;
    struct IReceiptPrintJob;
    struct IReceiptPrintJob2;
    struct IReceiptPrinterCapabilities;
    struct IReceiptPrinterCapabilities2;
    struct ISlipPrintJob;
    struct ISlipPrinterCapabilities;
    struct ISlipPrinterCapabilities2;
    struct IUnifiedPosErrorData;
    struct IUnifiedPosErrorDataFactory;
    struct BarcodeScanner;
    struct BarcodeScannerCapabilities;
    struct BarcodeScannerDataReceivedEventArgs;
    struct BarcodeScannerErrorOccurredEventArgs;
    struct BarcodeScannerImagePreviewReceivedEventArgs;
    struct BarcodeScannerReport;
    struct BarcodeScannerStatusUpdatedEventArgs;
    struct BarcodeSymbologies;
    struct BarcodeSymbologyAttributes;
    struct CashDrawer;
    struct CashDrawerCapabilities;
    struct CashDrawerCloseAlarm;
    struct CashDrawerClosedEventArgs;
    struct CashDrawerEventSource;
    struct CashDrawerOpenedEventArgs;
    struct CashDrawerStatus;
    struct CashDrawerStatusUpdatedEventArgs;
    struct ClaimedBarcodeScanner;
    struct ClaimedBarcodeScannerClosedEventArgs;
    struct ClaimedCashDrawer;
    struct ClaimedCashDrawerClosedEventArgs;
    struct ClaimedJournalPrinter;
    struct ClaimedLineDisplay;
    struct ClaimedLineDisplayClosedEventArgs;
    struct ClaimedMagneticStripeReader;
    struct ClaimedMagneticStripeReaderClosedEventArgs;
    struct ClaimedPosPrinter;
    struct ClaimedPosPrinterClosedEventArgs;
    struct ClaimedReceiptPrinter;
    struct ClaimedSlipPrinter;
    struct JournalPrintJob;
    struct JournalPrinterCapabilities;
    struct LineDisplay;
    struct LineDisplayAttributes;
    struct LineDisplayCapabilities;
    struct LineDisplayCursor;
    struct LineDisplayCursorAttributes;
    struct LineDisplayCustomGlyphs;
    struct LineDisplayMarquee;
    struct LineDisplayStatisticsCategorySelector;
    struct LineDisplayStatusUpdatedEventArgs;
    struct LineDisplayStoredBitmap;
    struct LineDisplayWindow;
    struct MagneticStripeReader;
    struct MagneticStripeReaderAamvaCardDataReceivedEventArgs;
    struct MagneticStripeReaderBankCardDataReceivedEventArgs;
    struct MagneticStripeReaderCapabilities;
    struct MagneticStripeReaderCardTypes;
    struct MagneticStripeReaderEncryptionAlgorithms;
    struct MagneticStripeReaderErrorOccurredEventArgs;
    struct MagneticStripeReaderReport;
    struct MagneticStripeReaderStatusUpdatedEventArgs;
    struct MagneticStripeReaderTrackData;
    struct MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs;
    struct PosPrinter;
    struct PosPrinterCapabilities;
    struct PosPrinterCharacterSetIds;
    struct PosPrinterFontProperty;
    struct PosPrinterPrintOptions;
    struct PosPrinterReleaseDeviceRequestedEventArgs;
    struct PosPrinterStatus;
    struct PosPrinterStatusUpdatedEventArgs;
    struct ReceiptPrintJob;
    struct ReceiptPrinterCapabilities;
    struct SlipPrintJob;
    struct SlipPrinterCapabilities;
    struct UnifiedPosErrorData;
    struct SizeUInt32;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::PointOfService::IBarcodeScanner>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IBarcodeScanner2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerCapabilities1>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerCapabilities2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerReport>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerReportFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IBarcodeSymbologyAttributes>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ICashDrawer>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ICashDrawerCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ICashDrawerCloseAlarm>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ICashDrawerEventSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ICashDrawerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ICashDrawerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ICashDrawerStatus>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedBarcodeScanner>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedBarcodeScanner1>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedBarcodeScanner2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedBarcodeScanner3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedBarcodeScanner4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedBarcodeScannerClosedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedCashDrawer>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedCashDrawer2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedCashDrawerClosedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedJournalPrinter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedLineDisplay>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedLineDisplay2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedLineDisplay3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedLineDisplayClosedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedLineDisplayStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedMagneticStripeReader2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedMagneticStripeReaderClosedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedPosPrinter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedPosPrinter2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedPosPrinterClosedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedReceiptPrinter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IClaimedSlipPrinter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IJournalPrintJob>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IJournalPrinterCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IJournalPrinterCapabilities2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ILineDisplay>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ILineDisplay2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ILineDisplayAttributes>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ILineDisplayCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ILineDisplayCursor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ILineDisplayCursorAttributes>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ILineDisplayCustomGlyphs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ILineDisplayMarquee>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ILineDisplayStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ILineDisplayStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ILineDisplayStatisticsCategorySelector>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ILineDisplayStatusUpdatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ILineDisplayStoredBitmap>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ILineDisplayWindow>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ILineDisplayWindow2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderReport>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderTrackData>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IPosPrinter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IPosPrinter2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IPosPrinterCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IPosPrinterFontProperty>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IPosPrinterJob>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IPosPrinterPrintOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IPosPrinterStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IPosPrinterStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IPosPrinterStatus>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IReceiptOrSlipJob>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IReceiptPrintJob>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IReceiptPrintJob2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IReceiptPrinterCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IReceiptPrinterCapabilities2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ISlipPrintJob>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ISlipPrinterCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ISlipPrinterCapabilities2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IUnifiedPosErrorData>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::IUnifiedPosErrorDataFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::PointOfService::BarcodeScanner>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::BarcodeScannerCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::BarcodeScannerReport>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::BarcodeSymbologies>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::BarcodeSymbologyAttributes>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::CashDrawer>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::CashDrawerCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::CashDrawerCloseAlarm>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::CashDrawerClosedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::CashDrawerEventSource>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::CashDrawerOpenedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::CashDrawerStatus>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ClaimedBarcodeScanner>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ClaimedBarcodeScannerClosedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ClaimedCashDrawer>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ClaimedCashDrawerClosedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ClaimedJournalPrinter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ClaimedLineDisplay>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ClaimedLineDisplayClosedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ClaimedMagneticStripeReader>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ClaimedMagneticStripeReaderClosedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ClaimedPosPrinter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ClaimedPosPrinterClosedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ClaimedReceiptPrinter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ClaimedSlipPrinter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::JournalPrintJob>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::JournalPrinterCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplay>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayAttributes>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayCursor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayCursorAttributes>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayCustomGlyphs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayMarquee>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayStatisticsCategorySelector>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayStatusUpdatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayStoredBitmap>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayWindow>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::MagneticStripeReader>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderCardTypes>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderEncryptionAlgorithms>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderReport>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderTrackData>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterCharacterSetIds>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterFontProperty>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterPrintOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterStatus>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ReceiptPrintJob>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::ReceiptPrinterCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::SlipPrintJob>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::SlipPrinterCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::UnifiedPosErrorData>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::PointOfService::BarcodeScannerStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::BarcodeSymbologyDecodeLengthKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::CashDrawerStatusKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayCursorType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayDescriptorState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayHorizontalAlignment>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayMarqueeFormat>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayPowerStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayScrollDirection>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayTextAttribute>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayTextAttributeGranularity>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::LineDisplayVerticalAlignment>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationLevel>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationProtocol>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::MagneticStripeReaderTrackIds>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosConnectionTypes>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterAlignment>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterCartridgeSensors>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterColorCapabilities>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterColorCartridge>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterLineDirection>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterLineStyle>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterMapMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterMarkFeedCapabilities>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterMarkFeedKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterPrintSide>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterRotation>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterRuledLineCapabilities>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::PosPrinterStatusKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::UnifiedPosErrorReason>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::UnifiedPosErrorSeverity>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::UnifiedPosPowerReportingType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::PointOfService::SizeUInt32>
    {
        using type = struct_category<uint32_t, uint32_t>;
    };
    template <> struct name<Windows::Devices::PointOfService::IBarcodeScanner>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScanner" };
    };
    template <> struct name<Windows::Devices::PointOfService::IBarcodeScanner2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScanner2" };
    };
    template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerCapabilities1>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerCapabilities1" };
    };
    template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerCapabilities2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerCapabilities2" };
    };
    template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerDataReceivedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerErrorOccurredEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerImagePreviewReceivedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerReport>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerReport" };
    };
    template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerReportFactory>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerReportFactory" };
    };
    template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerStatics" };
    };
    template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerStatics2" };
    };
    template <> struct name<Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeScannerStatusUpdatedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeSymbologiesStatics" };
    };
    template <> struct name<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeSymbologiesStatics2" };
    };
    template <> struct name<Windows::Devices::PointOfService::IBarcodeSymbologyAttributes>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IBarcodeSymbologyAttributes" };
    };
    template <> struct name<Windows::Devices::PointOfService::ICashDrawer>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ICashDrawer" };
    };
    template <> struct name<Windows::Devices::PointOfService::ICashDrawerCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ICashDrawerCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::ICashDrawerCloseAlarm>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ICashDrawerCloseAlarm" };
    };
    template <> struct name<Windows::Devices::PointOfService::ICashDrawerEventSource>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ICashDrawerEventSource" };
    };
    template <> struct name<Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ICashDrawerEventSourceEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::ICashDrawerStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ICashDrawerStatics" };
    };
    template <> struct name<Windows::Devices::PointOfService::ICashDrawerStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ICashDrawerStatics2" };
    };
    template <> struct name<Windows::Devices::PointOfService::ICashDrawerStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ICashDrawerStatus" };
    };
    template <> struct name<Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ICashDrawerStatusUpdatedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedBarcodeScanner>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedBarcodeScanner" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedBarcodeScanner1>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedBarcodeScanner1" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedBarcodeScanner2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedBarcodeScanner2" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedBarcodeScanner3>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedBarcodeScanner3" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedBarcodeScanner4>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedBarcodeScanner4" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedBarcodeScannerClosedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedBarcodeScannerClosedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedCashDrawer>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedCashDrawer" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedCashDrawer2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedCashDrawer2" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedCashDrawerClosedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedCashDrawerClosedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedJournalPrinter>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedJournalPrinter" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedLineDisplay>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedLineDisplay" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedLineDisplay2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedLineDisplay2" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedLineDisplay3>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedLineDisplay3" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedLineDisplayClosedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedLineDisplayClosedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedLineDisplayStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedLineDisplayStatics" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedMagneticStripeReader" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedMagneticStripeReader2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedMagneticStripeReader2" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedMagneticStripeReaderClosedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedMagneticStripeReaderClosedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedPosPrinter>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedPosPrinter" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedPosPrinter2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedPosPrinter2" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedPosPrinterClosedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedPosPrinterClosedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedReceiptPrinter>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedReceiptPrinter" };
    };
    template <> struct name<Windows::Devices::PointOfService::IClaimedSlipPrinter>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IClaimedSlipPrinter" };
    };
    template <> struct name<Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ICommonClaimedPosPrinterStation" };
    };
    template <> struct name<Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ICommonPosPrintStationCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ICommonReceiptSlipCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::IJournalPrintJob>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IJournalPrintJob" };
    };
    template <> struct name<Windows::Devices::PointOfService::IJournalPrinterCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IJournalPrinterCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::IJournalPrinterCapabilities2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IJournalPrinterCapabilities2" };
    };
    template <> struct name<Windows::Devices::PointOfService::ILineDisplay>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplay" };
    };
    template <> struct name<Windows::Devices::PointOfService::ILineDisplay2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplay2" };
    };
    template <> struct name<Windows::Devices::PointOfService::ILineDisplayAttributes>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayAttributes" };
    };
    template <> struct name<Windows::Devices::PointOfService::ILineDisplayCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::ILineDisplayCursor>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayCursor" };
    };
    template <> struct name<Windows::Devices::PointOfService::ILineDisplayCursorAttributes>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayCursorAttributes" };
    };
    template <> struct name<Windows::Devices::PointOfService::ILineDisplayCustomGlyphs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayCustomGlyphs" };
    };
    template <> struct name<Windows::Devices::PointOfService::ILineDisplayMarquee>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayMarquee" };
    };
    template <> struct name<Windows::Devices::PointOfService::ILineDisplayStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayStatics" };
    };
    template <> struct name<Windows::Devices::PointOfService::ILineDisplayStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayStatics2" };
    };
    template <> struct name<Windows::Devices::PointOfService::ILineDisplayStatisticsCategorySelector>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayStatisticsCategorySelector" };
    };
    template <> struct name<Windows::Devices::PointOfService::ILineDisplayStatusUpdatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayStatusUpdatedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::ILineDisplayStoredBitmap>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayStoredBitmap" };
    };
    template <> struct name<Windows::Devices::PointOfService::ILineDisplayWindow>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayWindow" };
    };
    template <> struct name<Windows::Devices::PointOfService::ILineDisplayWindow2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ILineDisplayWindow2" };
    };
    template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReader>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReader" };
    };
    template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderAamvaCardDataReceivedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderBankCardDataReceivedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderCardTypesStatics" };
    };
    template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderEncryptionAlgorithmsStatics" };
    };
    template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderErrorOccurredEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderReport>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderReport" };
    };
    template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderStatics" };
    };
    template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderStatics2" };
    };
    template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderStatusUpdatedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderTrackData>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderTrackData" };
    };
    template <> struct name<Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::IPosPrinter>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinter" };
    };
    template <> struct name<Windows::Devices::PointOfService::IPosPrinter2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinter2" };
    };
    template <> struct name<Windows::Devices::PointOfService::IPosPrinterCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinterCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinterCharacterSetIdsStatics" };
    };
    template <> struct name<Windows::Devices::PointOfService::IPosPrinterFontProperty>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinterFontProperty" };
    };
    template <> struct name<Windows::Devices::PointOfService::IPosPrinterJob>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinterJob" };
    };
    template <> struct name<Windows::Devices::PointOfService::IPosPrinterPrintOptions>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinterPrintOptions" };
    };
    template <> struct name<Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinterReleaseDeviceRequestedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::IPosPrinterStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinterStatics" };
    };
    template <> struct name<Windows::Devices::PointOfService::IPosPrinterStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinterStatics2" };
    };
    template <> struct name<Windows::Devices::PointOfService::IPosPrinterStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinterStatus" };
    };
    template <> struct name<Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IPosPrinterStatusUpdatedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::IReceiptOrSlipJob>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IReceiptOrSlipJob" };
    };
    template <> struct name<Windows::Devices::PointOfService::IReceiptPrintJob>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IReceiptPrintJob" };
    };
    template <> struct name<Windows::Devices::PointOfService::IReceiptPrintJob2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IReceiptPrintJob2" };
    };
    template <> struct name<Windows::Devices::PointOfService::IReceiptPrinterCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IReceiptPrinterCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::IReceiptPrinterCapabilities2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IReceiptPrinterCapabilities2" };
    };
    template <> struct name<Windows::Devices::PointOfService::ISlipPrintJob>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ISlipPrintJob" };
    };
    template <> struct name<Windows::Devices::PointOfService::ISlipPrinterCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ISlipPrinterCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::ISlipPrinterCapabilities2>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ISlipPrinterCapabilities2" };
    };
    template <> struct name<Windows::Devices::PointOfService::IUnifiedPosErrorData>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IUnifiedPosErrorData" };
    };
    template <> struct name<Windows::Devices::PointOfService::IUnifiedPosErrorDataFactory>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.IUnifiedPosErrorDataFactory" };
    };
    template <> struct name<Windows::Devices::PointOfService::BarcodeScanner>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeScanner" };
    };
    template <> struct name<Windows::Devices::PointOfService::BarcodeScannerCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeScannerCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeScannerDataReceivedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeScannerErrorOccurredEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeScannerImagePreviewReceivedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::BarcodeScannerReport>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeScannerReport" };
    };
    template <> struct name<Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeScannerStatusUpdatedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::BarcodeSymbologies>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeSymbologies" };
    };
    template <> struct name<Windows::Devices::PointOfService::BarcodeSymbologyAttributes>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeSymbologyAttributes" };
    };
    template <> struct name<Windows::Devices::PointOfService::CashDrawer>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.CashDrawer" };
    };
    template <> struct name<Windows::Devices::PointOfService::CashDrawerCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.CashDrawerCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::CashDrawerCloseAlarm>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.CashDrawerCloseAlarm" };
    };
    template <> struct name<Windows::Devices::PointOfService::CashDrawerClosedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.CashDrawerClosedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::CashDrawerEventSource>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.CashDrawerEventSource" };
    };
    template <> struct name<Windows::Devices::PointOfService::CashDrawerOpenedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.CashDrawerOpenedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::CashDrawerStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.CashDrawerStatus" };
    };
    template <> struct name<Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.CashDrawerStatusUpdatedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::ClaimedBarcodeScanner>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedBarcodeScanner" };
    };
    template <> struct name<Windows::Devices::PointOfService::ClaimedBarcodeScannerClosedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedBarcodeScannerClosedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::ClaimedCashDrawer>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedCashDrawer" };
    };
    template <> struct name<Windows::Devices::PointOfService::ClaimedCashDrawerClosedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedCashDrawerClosedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::ClaimedJournalPrinter>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedJournalPrinter" };
    };
    template <> struct name<Windows::Devices::PointOfService::ClaimedLineDisplay>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedLineDisplay" };
    };
    template <> struct name<Windows::Devices::PointOfService::ClaimedLineDisplayClosedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedLineDisplayClosedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::ClaimedMagneticStripeReader>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedMagneticStripeReader" };
    };
    template <> struct name<Windows::Devices::PointOfService::ClaimedMagneticStripeReaderClosedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedMagneticStripeReaderClosedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::ClaimedPosPrinter>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedPosPrinter" };
    };
    template <> struct name<Windows::Devices::PointOfService::ClaimedPosPrinterClosedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedPosPrinterClosedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::ClaimedReceiptPrinter>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedReceiptPrinter" };
    };
    template <> struct name<Windows::Devices::PointOfService::ClaimedSlipPrinter>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ClaimedSlipPrinter" };
    };
    template <> struct name<Windows::Devices::PointOfService::JournalPrintJob>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.JournalPrintJob" };
    };
    template <> struct name<Windows::Devices::PointOfService::JournalPrinterCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.JournalPrinterCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplay>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplay" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayAttributes>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayAttributes" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayCursor>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayCursor" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayCursorAttributes>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayCursorAttributes" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayCustomGlyphs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayCustomGlyphs" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayMarquee>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayMarquee" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayStatisticsCategorySelector>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayStatisticsCategorySelector" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayStatusUpdatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayStatusUpdatedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayStoredBitmap>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayStoredBitmap" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayWindow>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayWindow" };
    };
    template <> struct name<Windows::Devices::PointOfService::MagneticStripeReader>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReader" };
    };
    template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderAamvaCardDataReceivedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderBankCardDataReceivedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderCardTypes>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderCardTypes" };
    };
    template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderEncryptionAlgorithms>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderEncryptionAlgorithms" };
    };
    template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderErrorOccurredEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderReport>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderReport" };
    };
    template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderStatusUpdatedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderTrackData>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderTrackData" };
    };
    template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinter>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinter" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterCharacterSetIds>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterCharacterSetIds" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterFontProperty>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterFontProperty" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterPrintOptions>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterPrintOptions" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterReleaseDeviceRequestedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterStatus" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterStatusUpdatedEventArgs" };
    };
    template <> struct name<Windows::Devices::PointOfService::ReceiptPrintJob>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ReceiptPrintJob" };
    };
    template <> struct name<Windows::Devices::PointOfService::ReceiptPrinterCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.ReceiptPrinterCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::SlipPrintJob>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.SlipPrintJob" };
    };
    template <> struct name<Windows::Devices::PointOfService::SlipPrinterCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.SlipPrinterCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::UnifiedPosErrorData>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.UnifiedPosErrorData" };
    };
    template <> struct name<Windows::Devices::PointOfService::BarcodeScannerStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeScannerStatus" };
    };
    template <> struct name<Windows::Devices::PointOfService::BarcodeSymbologyDecodeLengthKind>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.BarcodeSymbologyDecodeLengthKind" };
    };
    template <> struct name<Windows::Devices::PointOfService::CashDrawerStatusKind>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.CashDrawerStatusKind" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayCursorType>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayCursorType" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayDescriptorState>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayDescriptorState" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayHorizontalAlignment>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayHorizontalAlignment" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayMarqueeFormat>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayMarqueeFormat" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayPowerStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayPowerStatus" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayScrollDirection>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayScrollDirection" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayTextAttribute>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayTextAttribute" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayTextAttributeGranularity>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayTextAttributeGranularity" };
    };
    template <> struct name<Windows::Devices::PointOfService::LineDisplayVerticalAlignment>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.LineDisplayVerticalAlignment" };
    };
    template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationLevel>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderAuthenticationLevel" };
    };
    template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationProtocol>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderAuthenticationProtocol" };
    };
    template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderErrorReportingType" };
    };
    template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderStatus" };
    };
    template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderTrackErrorType" };
    };
    template <> struct name<Windows::Devices::PointOfService::MagneticStripeReaderTrackIds>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.MagneticStripeReaderTrackIds" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosConnectionTypes>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosConnectionTypes" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterAlignment>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterAlignment" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterBarcodeTextPosition" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterCartridgeSensors>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterCartridgeSensors" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterColorCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterColorCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterColorCartridge>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterColorCartridge" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterLineDirection>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterLineDirection" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterLineStyle>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterLineStyle" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterMapMode>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterMapMode" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterMarkFeedCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterMarkFeedCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterMarkFeedKind>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterMarkFeedKind" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterPrintSide>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterPrintSide" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterRotation>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterRotation" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterRuledLineCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterRuledLineCapabilities" };
    };
    template <> struct name<Windows::Devices::PointOfService::PosPrinterStatusKind>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.PosPrinterStatusKind" };
    };
    template <> struct name<Windows::Devices::PointOfService::UnifiedPosErrorReason>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.UnifiedPosErrorReason" };
    };
    template <> struct name<Windows::Devices::PointOfService::UnifiedPosErrorSeverity>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.UnifiedPosErrorSeverity" };
    };
    template <> struct name<Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.UnifiedPosHealthCheckLevel" };
    };
    template <> struct name<Windows::Devices::PointOfService::UnifiedPosPowerReportingType>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.UnifiedPosPowerReportingType" };
    };
    template <> struct name<Windows::Devices::PointOfService::SizeUInt32>
    {
        static constexpr auto & value{ L"Windows.Devices.PointOfService.SizeUInt32" };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IBarcodeScanner>
    {
        static constexpr guid value{ 0xBEA33E06,0xB264,0x4F03,{ 0xA9,0xC1,0x45,0xB2,0x0F,0x01,0x13,0x4F } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IBarcodeScanner2>
    {
        static constexpr guid value{ 0x89215167,0x8CEE,0x436D,{ 0x89,0xAB,0x8D,0xFB,0x43,0xBB,0x42,0x86 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IBarcodeScannerCapabilities>
    {
        static constexpr guid value{ 0xC60691E4,0xF2C8,0x4420,{ 0xA3,0x07,0xB1,0x2E,0xF6,0x62,0x28,0x57 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IBarcodeScannerCapabilities1>
    {
        static constexpr guid value{ 0x8E5AB3E9,0x0E2C,0x472F,{ 0xA1,0xCC,0xEE,0x80,0x54,0xB6,0xA6,0x84 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IBarcodeScannerCapabilities2>
    {
        static constexpr guid value{ 0xF211CFEC,0xE1A1,0x4EA8,{ 0x9A,0xBC,0x92,0xB1,0x59,0x62,0x70,0xAB } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs>
    {
        static constexpr guid value{ 0x4234A7E2,0xED97,0x467D,{ 0xAD,0x2B,0x01,0xE4,0x43,0x13,0xA9,0x29 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs>
    {
        static constexpr guid value{ 0x2CD2602F,0xCF3A,0x4002,{ 0xA7,0x5A,0xC5,0xEC,0x46,0x8F,0x0A,0x20 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs>
    {
        static constexpr guid value{ 0xF3B7DE85,0x6E8B,0x434E,{ 0x9F,0x58,0x06,0xEF,0x26,0xBC,0x4B,0xAF } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IBarcodeScannerReport>
    {
        static constexpr guid value{ 0x5CE4D8B0,0xA489,0x4B96,{ 0x86,0xC4,0xF0,0xBF,0x8A,0x37,0x75,0x3D } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IBarcodeScannerReportFactory>
    {
        static constexpr guid value{ 0xA2547326,0x2013,0x457C,{ 0x89,0x63,0x49,0xC1,0x5D,0xCA,0x78,0xCE } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IBarcodeScannerStatics>
    {
        static constexpr guid value{ 0x5D115F6F,0xDA49,0x41E8,{ 0x8C,0x8C,0xF0,0xCB,0x62,0xA9,0xC4,0xFC } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IBarcodeScannerStatics2>
    {
        static constexpr guid value{ 0xB8652473,0xA36F,0x4007,{ 0xB1,0xD0,0x27,0x9E,0xBE,0x92,0xA6,0x56 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs>
    {
        static constexpr guid value{ 0x355D8586,0x9C43,0x462B,{ 0xA9,0x1A,0x81,0x6D,0xC9,0x7F,0x45,0x2C } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>
    {
        static constexpr guid value{ 0xCA8549BB,0x06D2,0x43F4,{ 0xA4,0x4B,0xC6,0x20,0x67,0x9F,0xD8,0xD0 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics2>
    {
        static constexpr guid value{ 0x8B7518F4,0x99D0,0x40BF,{ 0x94,0x24,0xB9,0x1D,0x6D,0xD4,0xC6,0xE0 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IBarcodeSymbologyAttributes>
    {
        static constexpr guid value{ 0x66413A78,0xAB7A,0x4ADA,{ 0x8E,0xCE,0x93,0x60,0x14,0xB2,0xEA,0xD7 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ICashDrawer>
    {
        static constexpr guid value{ 0x9F88F5C8,0xDE54,0x4AEE,{ 0xA8,0x90,0x92,0x0B,0xCB,0xFE,0x30,0xFC } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ICashDrawerCapabilities>
    {
        static constexpr guid value{ 0x0BC6DE0B,0xE8E7,0x4B1F,{ 0xB1,0xD1,0x3E,0x50,0x1A,0xD0,0x82,0x47 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ICashDrawerCloseAlarm>
    {
        static constexpr guid value{ 0x6BF88CC7,0x6F63,0x430E,{ 0xAB,0x3B,0x95,0xD7,0x5F,0xFB,0xE8,0x7F } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ICashDrawerEventSource>
    {
        static constexpr guid value{ 0xE006E46C,0xF2F9,0x442F,{ 0x8D,0xD6,0x06,0xC1,0x0A,0x42,0x27,0xBA } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs>
    {
        static constexpr guid value{ 0x69CB3BC1,0x147F,0x421C,{ 0x9C,0x23,0x09,0x01,0x23,0xBB,0x78,0x6C } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ICashDrawerStatics>
    {
        static constexpr guid value{ 0xDFA0955A,0xD437,0x4FFF,{ 0xB5,0x47,0xDD,0xA9,0x69,0xA4,0xF8,0x83 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ICashDrawerStatics2>
    {
        static constexpr guid value{ 0x3E818121,0x8C42,0x40E8,{ 0x9C,0x0E,0x40,0x29,0x70,0x48,0x10,0x4C } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ICashDrawerStatus>
    {
        static constexpr guid value{ 0x6BBD78BF,0xDCA1,0x4E06,{ 0x99,0xEB,0x5A,0xF6,0xA5,0xAE,0xC1,0x08 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs>
    {
        static constexpr guid value{ 0x30AAE98A,0x0D70,0x459C,{ 0x95,0x53,0x87,0xE1,0x24,0xC5,0x24,0x88 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedBarcodeScanner>
    {
        static constexpr guid value{ 0x4A63B49C,0x8FA4,0x4332,{ 0xBB,0x26,0x94,0x5D,0x11,0xD8,0x1E,0x0F } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedBarcodeScanner1>
    {
        static constexpr guid value{ 0xF61AAD0C,0x8551,0x42B4,{ 0x99,0x8C,0x97,0x0C,0x20,0x21,0x0A,0x22 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedBarcodeScanner2>
    {
        static constexpr guid value{ 0xE3B59E8C,0x2D8B,0x4F70,{ 0x8A,0xF3,0x34,0x48,0xBE,0xDD,0x5F,0xE2 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedBarcodeScanner3>
    {
        static constexpr guid value{ 0xE6CEB430,0x712E,0x45FC,{ 0x8B,0x86,0xCD,0x55,0xF5,0xAE,0xF7,0x9D } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedBarcodeScanner4>
    {
        static constexpr guid value{ 0x5D501F97,0x376A,0x41A8,{ 0xA2,0x30,0x2F,0x37,0xC1,0x94,0x9D,0xDE } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedBarcodeScannerClosedEventArgs>
    {
        static constexpr guid value{ 0xCF7D5489,0xA22C,0x4C65,{ 0xA9,0x01,0x88,0xD7,0x7D,0x83,0x39,0x54 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedCashDrawer>
    {
        static constexpr guid value{ 0xCA3F99AF,0xABB8,0x42C1,{ 0x8A,0x84,0x5C,0x66,0x51,0x2F,0x5A,0x75 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedCashDrawer2>
    {
        static constexpr guid value{ 0x9CBAB5A2,0xDE42,0x4D5B,{ 0xB0,0xC1,0x9B,0x57,0xA2,0xBA,0x89,0xC3 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedCashDrawerClosedEventArgs>
    {
        static constexpr guid value{ 0xCC573F33,0x3F34,0x4C5C,{ 0xBA,0xAE,0xDE,0xAD,0xF1,0x6C,0xD7,0xFA } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedJournalPrinter>
    {
        static constexpr guid value{ 0x67EA0630,0x517D,0x487F,{ 0x9F,0xDF,0xD2,0xE0,0xA0,0xA2,0x64,0xA5 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedLineDisplay>
    {
        static constexpr guid value{ 0x120AC970,0x9A75,0x4ACF,{ 0xAA,0xE7,0x09,0x97,0x2B,0xCF,0x87,0x94 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedLineDisplay2>
    {
        static constexpr guid value{ 0xA31C75ED,0x41F5,0x4E76,{ 0xA0,0x74,0x79,0x5E,0x47,0xA4,0x6E,0x97 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedLineDisplay3>
    {
        static constexpr guid value{ 0x642ECD92,0xE9D4,0x4ECC,{ 0xAF,0x75,0x32,0x9C,0x27,0x4C,0xD1,0x8F } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedLineDisplayClosedEventArgs>
    {
        static constexpr guid value{ 0xF915F364,0xD3D5,0x4F10,{ 0xB5,0x11,0x90,0x93,0x9E,0xDF,0xAC,0xD8 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedLineDisplayStatics>
    {
        static constexpr guid value{ 0x78CA98FB,0x8B6B,0x4973,{ 0x86,0xF0,0x3E,0x57,0x0C,0x35,0x18,0x25 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>
    {
        static constexpr guid value{ 0x475CA8F3,0x9417,0x48BC,{ 0xB9,0xD7,0x41,0x63,0xA7,0x84,0x4C,0x02 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedMagneticStripeReader2>
    {
        static constexpr guid value{ 0x236FAFDF,0xE2DC,0x4D7D,{ 0x9C,0x78,0x06,0x0D,0xF2,0xBF,0x29,0x28 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedMagneticStripeReaderClosedEventArgs>
    {
        static constexpr guid value{ 0x14ADA93A,0xADCD,0x4C80,{ 0xAC,0xDA,0xC3,0xEA,0xED,0x26,0x47,0xE1 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedPosPrinter>
    {
        static constexpr guid value{ 0x6D64CE0C,0xE03E,0x4B14,{ 0xA3,0x8E,0xC2,0x8C,0x34,0xB8,0x63,0x53 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedPosPrinter2>
    {
        static constexpr guid value{ 0x5BF7A3D5,0x5198,0x437A,{ 0x82,0xDF,0x58,0x99,0x93,0xFA,0x77,0xE1 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedPosPrinterClosedEventArgs>
    {
        static constexpr guid value{ 0xE2B7A27B,0x4D40,0x471D,{ 0x92,0xED,0x63,0x37,0x5B,0x18,0xC7,0x88 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedReceiptPrinter>
    {
        static constexpr guid value{ 0x9AD27A74,0xDD61,0x4EE2,{ 0x98,0x37,0x5B,0x5D,0x72,0xD5,0x38,0xB9 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IClaimedSlipPrinter>
    {
        static constexpr guid value{ 0xBD5DEFF2,0xAF90,0x4E8A,{ 0xB7,0x7B,0xE3,0xAE,0x9C,0xA6,0x3A,0x7F } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>
    {
        static constexpr guid value{ 0xB7EB66A8,0xFE8A,0x4CFB,{ 0x8B,0x42,0xE3,0x5B,0x28,0x0C,0xB2,0x7C } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities>
    {
        static constexpr guid value{ 0xDE5B52CA,0xE02E,0x40E9,{ 0x9E,0x5E,0x1B,0x48,0x8E,0x6A,0xAC,0xFC } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities>
    {
        static constexpr guid value{ 0x09286B8B,0x9873,0x4D05,{ 0xBF,0xBE,0x47,0x27,0xA6,0x03,0x8F,0x69 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IJournalPrintJob>
    {
        static constexpr guid value{ 0x9F4F2864,0xF3F0,0x55D0,{ 0x8C,0x39,0x74,0xCC,0x91,0x78,0x3E,0xED } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IJournalPrinterCapabilities>
    {
        static constexpr guid value{ 0x3B5CCC43,0xE047,0x4463,{ 0xBB,0x58,0x17,0xB5,0xBA,0x1D,0x80,0x56 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IJournalPrinterCapabilities2>
    {
        static constexpr guid value{ 0x03B0B645,0x33B8,0x533B,{ 0xBA,0xAA,0xA4,0x38,0x92,0x83,0xAB,0x0A } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ILineDisplay>
    {
        static constexpr guid value{ 0x24F5DF4E,0x3C99,0x44E2,{ 0xB7,0x3F,0xE5,0x1B,0xE3,0x63,0x7A,0x8C } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ILineDisplay2>
    {
        static constexpr guid value{ 0xC296A628,0xEF44,0x40F3,{ 0xBD,0x1C,0xB0,0x4C,0x6A,0x5C,0xDC,0x7D } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ILineDisplayAttributes>
    {
        static constexpr guid value{ 0xC17DE99C,0x229A,0x4C14,{ 0xA6,0xF1,0xB4,0xE4,0xB1,0xFE,0xAD,0x92 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ILineDisplayCapabilities>
    {
        static constexpr guid value{ 0x5A15B5D1,0x8DC5,0x4B9C,{ 0x91,0x72,0x30,0x3E,0x47,0xB7,0x0C,0x55 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ILineDisplayCursor>
    {
        static constexpr guid value{ 0xECDFFC45,0x754A,0x4E3B,{ 0xAB,0x2B,0x15,0x11,0x81,0x08,0x56,0x05 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ILineDisplayCursorAttributes>
    {
        static constexpr guid value{ 0x4E2D54FE,0x4FFD,0x4190,{ 0xAA,0xE1,0xCE,0x28,0x5F,0x20,0xC8,0x96 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ILineDisplayCustomGlyphs>
    {
        static constexpr guid value{ 0x2257F63C,0xF263,0x44F1,{ 0xA1,0xA0,0xE7,0x50,0xA6,0xA0,0xEC,0x54 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ILineDisplayMarquee>
    {
        static constexpr guid value{ 0xA3D33E3E,0xF46A,0x4B7A,{ 0xBC,0x21,0x53,0xEB,0x3B,0x57,0xF8,0xB4 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ILineDisplayStatics>
    {
        static constexpr guid value{ 0x022DC0B6,0x11B0,0x4690,{ 0x95,0x47,0x0B,0x39,0xC5,0xAF,0x21,0x14 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ILineDisplayStatics2>
    {
        static constexpr guid value{ 0x600C3F1C,0x77AB,0x4968,{ 0xA7,0xDE,0xC0,0x2F,0xF1,0x69,0xF2,0xCC } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ILineDisplayStatisticsCategorySelector>
    {
        static constexpr guid value{ 0xB521C46B,0x9274,0x4D24,{ 0x94,0xF3,0xB6,0x01,0x7B,0x83,0x24,0x44 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ILineDisplayStatusUpdatedEventArgs>
    {
        static constexpr guid value{ 0xDDD57C1A,0x86FB,0x4EBA,{ 0x93,0xD1,0x6F,0x5E,0xDA,0x52,0xB7,0x52 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ILineDisplayStoredBitmap>
    {
        static constexpr guid value{ 0xF621515B,0xD81E,0x43BA,{ 0xBF,0x1B,0xBC,0xFA,0x3C,0x78,0x5B,0xA0 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ILineDisplayWindow>
    {
        static constexpr guid value{ 0xD21FEEF4,0x2364,0x4BE5,{ 0xBE,0xE1,0x85,0x16,0x80,0xAF,0x49,0x64 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ILineDisplayWindow2>
    {
        static constexpr guid value{ 0xA95CE2E6,0xBDD8,0x4365,{ 0x8E,0x11,0xDE,0x94,0xDE,0x8D,0xFF,0x02 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IMagneticStripeReader>
    {
        static constexpr guid value{ 0x1A92B015,0x47C3,0x468A,{ 0x93,0x33,0x0C,0x65,0x17,0x57,0x48,0x83 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs>
    {
        static constexpr guid value{ 0x0A4BBD51,0xC316,0x4910,{ 0x87,0xF3,0x7A,0x62,0xBA,0x86,0x2D,0x31 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs>
    {
        static constexpr guid value{ 0x2E958823,0xA31A,0x4763,{ 0x88,0x2C,0x23,0x72,0x5E,0x39,0xB0,0x8E } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities>
    {
        static constexpr guid value{ 0x7128809C,0xC440,0x44A2,{ 0xA4,0x67,0x46,0x91,0x75,0xD0,0x28,0x96 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics>
    {
        static constexpr guid value{ 0x528F2C5D,0x2986,0x474F,{ 0x84,0x54,0x7C,0xCD,0x05,0x92,0x8D,0x5F } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics>
    {
        static constexpr guid value{ 0x53B57350,0xC3DB,0x4754,{ 0x9C,0x00,0x41,0x39,0x23,0x74,0xA1,0x09 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs>
    {
        static constexpr guid value{ 0x1FEDF95D,0x2C84,0x41AD,{ 0xB7,0x78,0xF2,0x35,0x6A,0x78,0x9A,0xB1 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IMagneticStripeReaderReport>
    {
        static constexpr guid value{ 0x6A5B6047,0x99B0,0x4188,{ 0xBE,0xF1,0xED,0xDF,0x79,0xF7,0x8F,0xE6 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IMagneticStripeReaderStatics>
    {
        static constexpr guid value{ 0xC45FAB4A,0xEFD7,0x4760,{ 0xA5,0xCE,0x15,0xB0,0xE4,0x7E,0x94,0xEB } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IMagneticStripeReaderStatics2>
    {
        static constexpr guid value{ 0x8CADC362,0xD667,0x48FA,{ 0x86,0xBC,0xF5,0xAE,0x11,0x89,0x26,0x2B } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs>
    {
        static constexpr guid value{ 0x09CC6BB0,0x3262,0x401D,{ 0x9E,0x8A,0xE8,0x0D,0x63,0x58,0x90,0x6B } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IMagneticStripeReaderTrackData>
    {
        static constexpr guid value{ 0x104CF671,0x4A9D,0x446E,{ 0xAB,0xC5,0x20,0x40,0x23,0x07,0xBA,0x36 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>
    {
        static constexpr guid value{ 0xAF0A5514,0x59CC,0x4A60,{ 0x99,0xE8,0x99,0xA5,0x3D,0xAC,0xE5,0xAA } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IPosPrinter>
    {
        static constexpr guid value{ 0x2A03C10E,0x9A19,0x4A01,{ 0x99,0x4F,0x12,0xDF,0xAD,0x6A,0xDC,0xBF } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IPosPrinter2>
    {
        static constexpr guid value{ 0x248475E8,0x8B98,0x5517,{ 0x8E,0x48,0x76,0x0E,0x86,0xF6,0x89,0x87 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IPosPrinterCapabilities>
    {
        static constexpr guid value{ 0xCDE95721,0x4380,0x4985,{ 0xAD,0xC5,0x39,0xDB,0x30,0xCD,0x93,0xBC } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics>
    {
        static constexpr guid value{ 0x5C709EFF,0x709A,0x4FE7,{ 0xB2,0x15,0x06,0xA7,0x48,0xA3,0x8B,0x39 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IPosPrinterFontProperty>
    {
        static constexpr guid value{ 0xA7F4E93A,0xF8AC,0x5F04,{ 0x84,0xD2,0x29,0xB1,0x6D,0x8A,0x63,0x3C } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IPosPrinterJob>
    {
        static constexpr guid value{ 0x9A94005C,0x0615,0x4591,{ 0xA5,0x8F,0x30,0xF8,0x7E,0xDF,0xE2,0xE4 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IPosPrinterPrintOptions>
    {
        static constexpr guid value{ 0x0A2E16FD,0x1D02,0x5A58,{ 0x9D,0x59,0xBF,0xCD,0xE7,0x6F,0xDE,0x86 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs>
    {
        static constexpr guid value{ 0x2BCBA359,0x1CEF,0x40B2,{ 0x9E,0xCB,0xF9,0x27,0xF8,0x56,0xAE,0x3C } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IPosPrinterStatics>
    {
        static constexpr guid value{ 0x8CE0D4EA,0x132F,0x4CDF,{ 0xA6,0x4A,0x2D,0x0D,0x7C,0x96,0xA8,0x5B } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IPosPrinterStatics2>
    {
        static constexpr guid value{ 0xEECD2C1C,0xB0D0,0x42E7,{ 0xB1,0x37,0xB8,0x9B,0x16,0x24,0x4D,0x41 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IPosPrinterStatus>
    {
        static constexpr guid value{ 0xD1F0C730,0xDA40,0x4328,{ 0xBF,0x76,0x51,0x56,0xFA,0x33,0xB7,0x47 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs>
    {
        static constexpr guid value{ 0x2EDB87DF,0x13A6,0x428D,{ 0xBA,0x81,0xB0,0xE7,0xC3,0xE5,0xA3,0xCD } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IReceiptOrSlipJob>
    {
        static constexpr guid value{ 0x532199BE,0xC8C3,0x4DC2,{ 0x89,0xE9,0x5C,0x4A,0x37,0xB3,0x4D,0xDC } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IReceiptPrintJob>
    {
        static constexpr guid value{ 0xAA96066E,0xACAD,0x4B79,{ 0x9D,0x0F,0xC0,0xCF,0xC0,0x8D,0xC7,0x7B } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IReceiptPrintJob2>
    {
        static constexpr guid value{ 0x0CBC12E3,0x9E29,0x5179,{ 0xBC,0xD8,0x18,0x11,0xD3,0xB9,0xA1,0x0E } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IReceiptPrinterCapabilities>
    {
        static constexpr guid value{ 0xB8F0B58F,0x51A8,0x43FC,{ 0x9B,0xD5,0x8D,0xE2,0x72,0xA6,0x41,0x5B } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IReceiptPrinterCapabilities2>
    {
        static constexpr guid value{ 0x20030638,0x8A2C,0x55AC,{ 0x9A,0x7B,0x75,0x76,0xD8,0x86,0x9E,0x99 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ISlipPrintJob>
    {
        static constexpr guid value{ 0x5D88F95D,0x6131,0x5A4B,{ 0xB7,0xD5,0x8E,0xF2,0xDA,0x7B,0x41,0x65 } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ISlipPrinterCapabilities>
    {
        static constexpr guid value{ 0x99B16399,0x488C,0x4157,{ 0x8A,0xC2,0x9F,0x57,0xF7,0x08,0xD3,0xDB } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::ISlipPrinterCapabilities2>
    {
        static constexpr guid value{ 0x6FF89671,0x2D1A,0x5000,{ 0x87,0xC2,0xB0,0x85,0x1B,0xFD,0xF0,0x7E } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IUnifiedPosErrorData>
    {
        static constexpr guid value{ 0x2B998C3A,0x555C,0x4889,{ 0x8E,0xD8,0xC5,0x99,0xBB,0x3A,0x71,0x2A } };
    };
    template <> struct guid_storage<Windows::Devices::PointOfService::IUnifiedPosErrorDataFactory>
    {
        static constexpr guid value{ 0x4B982551,0x1FFE,0x451B,{ 0xA3,0x68,0x63,0xE0,0xCE,0x46,0x5F,0x5A } };
    };
    template <> struct default_interface<Windows::Devices::PointOfService::BarcodeScanner>
    {
        using type = Windows::Devices::PointOfService::IBarcodeScanner;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::BarcodeScannerCapabilities>
    {
        using type = Windows::Devices::PointOfService::IBarcodeScannerCapabilities;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs>
    {
        using type = Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs>
    {
        using type = Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs>
    {
        using type = Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::BarcodeScannerReport>
    {
        using type = Windows::Devices::PointOfService::IBarcodeScannerReport;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs>
    {
        using type = Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::BarcodeSymbologyAttributes>
    {
        using type = Windows::Devices::PointOfService::IBarcodeSymbologyAttributes;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::CashDrawer>
    {
        using type = Windows::Devices::PointOfService::ICashDrawer;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::CashDrawerCapabilities>
    {
        using type = Windows::Devices::PointOfService::ICashDrawerCapabilities;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::CashDrawerCloseAlarm>
    {
        using type = Windows::Devices::PointOfService::ICashDrawerCloseAlarm;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::CashDrawerClosedEventArgs>
    {
        using type = Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::CashDrawerEventSource>
    {
        using type = Windows::Devices::PointOfService::ICashDrawerEventSource;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::CashDrawerOpenedEventArgs>
    {
        using type = Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::CashDrawerStatus>
    {
        using type = Windows::Devices::PointOfService::ICashDrawerStatus;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs>
    {
        using type = Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::ClaimedBarcodeScanner>
    {
        using type = Windows::Devices::PointOfService::IClaimedBarcodeScanner;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::ClaimedBarcodeScannerClosedEventArgs>
    {
        using type = Windows::Devices::PointOfService::IClaimedBarcodeScannerClosedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::ClaimedCashDrawer>
    {
        using type = Windows::Devices::PointOfService::IClaimedCashDrawer;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::ClaimedCashDrawerClosedEventArgs>
    {
        using type = Windows::Devices::PointOfService::IClaimedCashDrawerClosedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::ClaimedJournalPrinter>
    {
        using type = Windows::Devices::PointOfService::IClaimedJournalPrinter;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::ClaimedLineDisplay>
    {
        using type = Windows::Devices::PointOfService::IClaimedLineDisplay;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::ClaimedLineDisplayClosedEventArgs>
    {
        using type = Windows::Devices::PointOfService::IClaimedLineDisplayClosedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::ClaimedMagneticStripeReader>
    {
        using type = Windows::Devices::PointOfService::IClaimedMagneticStripeReader;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::ClaimedMagneticStripeReaderClosedEventArgs>
    {
        using type = Windows::Devices::PointOfService::IClaimedMagneticStripeReaderClosedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::ClaimedPosPrinter>
    {
        using type = Windows::Devices::PointOfService::IClaimedPosPrinter;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::ClaimedPosPrinterClosedEventArgs>
    {
        using type = Windows::Devices::PointOfService::IClaimedPosPrinterClosedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::ClaimedReceiptPrinter>
    {
        using type = Windows::Devices::PointOfService::IClaimedReceiptPrinter;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::ClaimedSlipPrinter>
    {
        using type = Windows::Devices::PointOfService::IClaimedSlipPrinter;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::JournalPrintJob>
    {
        using type = Windows::Devices::PointOfService::IPosPrinterJob;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::JournalPrinterCapabilities>
    {
        using type = Windows::Devices::PointOfService::IJournalPrinterCapabilities;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::LineDisplay>
    {
        using type = Windows::Devices::PointOfService::ILineDisplay;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayAttributes>
    {
        using type = Windows::Devices::PointOfService::ILineDisplayAttributes;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayCapabilities>
    {
        using type = Windows::Devices::PointOfService::ILineDisplayCapabilities;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayCursor>
    {
        using type = Windows::Devices::PointOfService::ILineDisplayCursor;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayCursorAttributes>
    {
        using type = Windows::Devices::PointOfService::ILineDisplayCursorAttributes;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayCustomGlyphs>
    {
        using type = Windows::Devices::PointOfService::ILineDisplayCustomGlyphs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayMarquee>
    {
        using type = Windows::Devices::PointOfService::ILineDisplayMarquee;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayStatisticsCategorySelector>
    {
        using type = Windows::Devices::PointOfService::ILineDisplayStatisticsCategorySelector;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayStatusUpdatedEventArgs>
    {
        using type = Windows::Devices::PointOfService::ILineDisplayStatusUpdatedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayStoredBitmap>
    {
        using type = Windows::Devices::PointOfService::ILineDisplayStoredBitmap;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::LineDisplayWindow>
    {
        using type = Windows::Devices::PointOfService::ILineDisplayWindow;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::MagneticStripeReader>
    {
        using type = Windows::Devices::PointOfService::IMagneticStripeReader;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs>
    {
        using type = Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs>
    {
        using type = Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::MagneticStripeReaderCapabilities>
    {
        using type = Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs>
    {
        using type = Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::MagneticStripeReaderReport>
    {
        using type = Windows::Devices::PointOfService::IMagneticStripeReaderReport;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs>
    {
        using type = Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::MagneticStripeReaderTrackData>
    {
        using type = Windows::Devices::PointOfService::IMagneticStripeReaderTrackData;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>
    {
        using type = Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::PosPrinter>
    {
        using type = Windows::Devices::PointOfService::IPosPrinter;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::PosPrinterCapabilities>
    {
        using type = Windows::Devices::PointOfService::IPosPrinterCapabilities;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::PosPrinterFontProperty>
    {
        using type = Windows::Devices::PointOfService::IPosPrinterFontProperty;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::PosPrinterPrintOptions>
    {
        using type = Windows::Devices::PointOfService::IPosPrinterPrintOptions;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs>
    {
        using type = Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::PosPrinterStatus>
    {
        using type = Windows::Devices::PointOfService::IPosPrinterStatus;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs>
    {
        using type = Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::ReceiptPrintJob>
    {
        using type = Windows::Devices::PointOfService::IReceiptPrintJob;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::ReceiptPrinterCapabilities>
    {
        using type = Windows::Devices::PointOfService::IReceiptPrinterCapabilities;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::SlipPrintJob>
    {
        using type = Windows::Devices::PointOfService::IReceiptOrSlipJob;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::SlipPrinterCapabilities>
    {
        using type = Windows::Devices::PointOfService::ISlipPrinterCapabilities;
    };
    template <> struct default_interface<Windows::Devices::PointOfService::UnifiedPosErrorData>
    {
        using type = Windows::Devices::PointOfService::IUnifiedPosErrorData;
    };
    template <> struct abi<Windows::Devices::PointOfService::IBarcodeScanner>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Capabilities(void**) noexcept = 0;
            virtual int32_t __stdcall ClaimScannerAsync(void**) noexcept = 0;
            virtual int32_t __stdcall CheckHealthAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetSupportedSymbologiesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall IsSymbologySupportedAsync(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RetrieveStatisticsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetSupportedProfiles(void**) noexcept = 0;
            virtual int32_t __stdcall IsProfileSupported(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall add_StatusUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StatusUpdated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IBarcodeScanner2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoDeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PowerReportingType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsStatisticsReportingSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsStatisticsUpdatingSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsImagePreviewSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerCapabilities1>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSoftwareTriggerSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerCapabilities2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsVideoPreviewSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Report(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PartialInputData(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsRetriable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Preview(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ScanDataType(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ScanData(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScanDataLabel(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerReportFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(uint32_t, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelectorWithConnectionTypes(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedStatus(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Unknown(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Ean8(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Ean8Add2(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Ean8Add5(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Eanv(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_EanvAdd2(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_EanvAdd5(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Ean13(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Ean13Add2(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Ean13Add5(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Isbn(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsbnAdd5(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Ismn(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsmnAdd2(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsmnAdd5(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Issn(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IssnAdd2(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IssnAdd5(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Ean99(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Ean99Add2(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Ean99Add5(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Upca(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UpcaAdd2(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UpcaAdd5(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Upce(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UpceAdd2(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UpceAdd5(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UpcCoupon(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TfStd(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TfDis(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TfInt(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TfInd(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TfMat(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TfIata(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Gs1DatabarType1(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Gs1DatabarType2(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Gs1DatabarType3(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Code39(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Code39Ex(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Trioptic39(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Code32(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Pzn(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Code93(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Code93Ex(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Code128(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Gs1128(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Gs1128Coupon(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UccEan128(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Sisac(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Isbt(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Codabar(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Code11(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Msi(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Plessey(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Telepen(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Code16k(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CodablockA(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CodablockF(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Codablock128(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Code49(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Aztec(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DataCode(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DataMatrix(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_HanXin(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Maxicode(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MicroPdf417(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MicroQr(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Pdf417(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Qr(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MsTag(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Ccab(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Ccc(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Tlc39(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AusPost(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CanPost(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ChinaPost(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DutchKix(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_InfoMail(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ItalianPost25(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ItalianPost39(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_JapanPost(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_KoreanPost(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SwedenPost(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UkPost(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsIntelligent(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsIntelligentPkg(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsPlanet(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsPostNet(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Us4StateFics(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OcrA(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OcrB(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Micr(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedBase(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall GetName(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Gs1DWCode(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IBarcodeSymbologyAttributes>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCheckDigitValidationEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCheckDigitValidationEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsCheckDigitValidationSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsCheckDigitTransmissionEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCheckDigitTransmissionEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsCheckDigitTransmissionSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DecodeLength1(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DecodeLength1(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_DecodeLength2(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DecodeLength2(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_DecodeLengthKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DecodeLengthKind(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsDecodeLengthSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ICashDrawer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Capabilities(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsDrawerOpen(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DrawerEventSource(void**) noexcept = 0;
            virtual int32_t __stdcall ClaimDrawerAsync(void**) noexcept = 0;
            virtual int32_t __stdcall CheckHealthAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetStatisticsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_StatusUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StatusUpdated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ICashDrawerCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PowerReportingType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsStatisticsReportingSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsStatisticsUpdatingSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsStatusReportingSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsStatusMultiDrawerDetectSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDrawerOpenSensorAvailable(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ICashDrawerCloseAlarm>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_AlarmTimeout(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_AlarmTimeout(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_BeepFrequency(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_BeepFrequency(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BeepDuration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_BeepDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_BeepDelay(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_BeepDelay(int64_t*) noexcept = 0;
            virtual int32_t __stdcall add_AlarmTimeoutExpired(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AlarmTimeoutExpired(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ICashDrawerEventSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_DrawerClosed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DrawerClosed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DrawerOpened(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DrawerOpened(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CashDrawer(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ICashDrawerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ICashDrawerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelectorWithConnectionTypes(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ICashDrawerStatus>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StatusKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedStatus(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedBarcodeScanner>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsDisabledOnDataReceived(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsDisabledOnDataReceived(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsDecodeDataEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsDecodeDataEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall EnableAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DisableAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RetainDevice() noexcept = 0;
            virtual int32_t __stdcall SetActiveSymbologiesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ResetStatisticsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateStatisticsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetActiveProfileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_DataReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DataReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TriggerPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TriggerPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TriggerReleased(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TriggerReleased(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ReleaseDeviceRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReleaseDeviceRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ImagePreviewReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ImagePreviewReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ErrorOccurred(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ErrorOccurred(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedBarcodeScanner1>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartSoftwareTriggerAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StopSoftwareTriggerAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedBarcodeScanner2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetSymbologyAttributesAsync(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SetSymbologyAttributesAsync(uint32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedBarcodeScanner3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowVideoPreviewAsync(void**) noexcept = 0;
            virtual int32_t __stdcall HideVideoPreview() noexcept = 0;
            virtual int32_t __stdcall put_IsVideoPreviewShownOnEnable(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsVideoPreviewShownOnEnable(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedBarcodeScanner4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedBarcodeScannerClosedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedCashDrawer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDrawerOpen(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CloseAlarm(void**) noexcept = 0;
            virtual int32_t __stdcall OpenDrawerAsync(void**) noexcept = 0;
            virtual int32_t __stdcall EnableAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DisableAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RetainDeviceAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ResetStatisticsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateStatisticsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_ReleaseDeviceRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReleaseDeviceRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedCashDrawer2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedCashDrawerClosedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedJournalPrinter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateJob(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedLineDisplay>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Capabilities(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhysicalDeviceName(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhysicalDeviceDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceControlDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceControlVersion(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceServiceVersion(void**) noexcept = 0;
            virtual int32_t __stdcall get_DefaultWindow(void**) noexcept = 0;
            virtual int32_t __stdcall RetainDevice() noexcept = 0;
            virtual int32_t __stdcall add_ReleaseDeviceRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReleaseDeviceRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedLineDisplay2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetStatisticsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CheckHealthAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CheckPowerStatusAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_StatusUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StatusUpdated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_SupportedScreenSizesInCharacters(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxBitmapSizeInPixels(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedCharacterSets(void**) noexcept = 0;
            virtual int32_t __stdcall get_CustomGlyphs(void**) noexcept = 0;
            virtual int32_t __stdcall GetAttributes(void**) noexcept = 0;
            virtual int32_t __stdcall TryUpdateAttributesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySetDescriptorAsync(uint32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryClearDescriptorsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryCreateWindowAsync(Windows::Foundation::Rect, Windows::Foundation::Size, void**) noexcept = 0;
            virtual int32_t __stdcall TryStoreStorageFileBitmapAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryStoreStorageFileBitmapWithAlignmentAsync(void*, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryStoreStorageFileBitmapWithAlignmentAndWidthAsync(void*, int32_t, int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedLineDisplay3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedLineDisplayClosedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedLineDisplayStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorWithConnectionTypes(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsDisabledOnDataReceived(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsDisabledOnDataReceived(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsDecodeDataEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsDecodeDataEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDeviceAuthenticated(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DataEncryptionAlgorithm(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_DataEncryptionAlgorithm(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TracksToRead(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TracksToRead(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IsTransmitSentinelsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsTransmitSentinelsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall EnableAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DisableAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RetainDevice() noexcept = 0;
            virtual int32_t __stdcall SetErrorReportingType(int32_t) noexcept = 0;
            virtual int32_t __stdcall RetrieveDeviceAuthenticationDataAsync(void**) noexcept = 0;
            virtual int32_t __stdcall AuthenticateDeviceAsync(uint32_t, uint8_t*, void**) noexcept = 0;
            virtual int32_t __stdcall DeAuthenticateDeviceAsync(uint32_t, uint8_t*, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateKeyAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ResetStatisticsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateStatisticsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_BankCardDataReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BankCardDataReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AamvaCardDataReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AamvaCardDataReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_VendorSpecificDataReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VendorSpecificDataReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ReleaseDeviceRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReleaseDeviceRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ErrorOccurred(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ErrorOccurred(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedMagneticStripeReader2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedMagneticStripeReaderClosedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedPosPrinter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CharacterSet(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_CharacterSet(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsCoverOpen(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCharacterSetMappingEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsCharacterSetMappingEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_MapMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MapMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Receipt(void**) noexcept = 0;
            virtual int32_t __stdcall get_Slip(void**) noexcept = 0;
            virtual int32_t __stdcall get_Journal(void**) noexcept = 0;
            virtual int32_t __stdcall EnableAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DisableAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RetainDeviceAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ResetStatisticsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateStatisticsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_ReleaseDeviceRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReleaseDeviceRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedPosPrinter2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedPosPrinterClosedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedReceiptPrinter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SidewaysMaxLines(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SidewaysMaxChars(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LinesToPaperCut(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PageSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_PrintArea(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall CreateJob(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IClaimedSlipPrinter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SidewaysMaxLines(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SidewaysMaxChars(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxLines(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LinesNearEndToEnd(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PrintSide(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PageSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_PrintArea(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall OpenJaws() noexcept = 0;
            virtual int32_t __stdcall CloseJaws() noexcept = 0;
            virtual int32_t __stdcall InsertSlipAsync(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall RemoveSlipAsync(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ChangePrintSide(int32_t) noexcept = 0;
            virtual int32_t __stdcall CreateJob(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_CharactersPerLine(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_CharactersPerLine(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_LineHeight(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_LineHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_LineSpacing(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_LineSpacing(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LineWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IsLetterQuality(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsLetterQuality(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPaperNearEnd(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ColorCartridge(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ColorCartridge(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsCoverOpen(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsCartridgeRemoved(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsCartridgeEmpty(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsHeadCleaning(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPaperEmpty(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsReadyToPrint(bool*) noexcept = 0;
            virtual int32_t __stdcall ValidateData(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsPrinterPresent(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDualColorSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ColorCartridgeCapabilities(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CartridgeSensors(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsBoldSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsItalicSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsUnderlineSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDoubleHighPrintSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDoubleWidePrintSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDoubleHighDoubleWidePrintSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPaperEmptySensorSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPaperNearEndSensorSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedCharactersPerLine(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsBarcodeSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsBitmapSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsLeft90RotationSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsRight90RotationSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Is180RotationSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPrintAreaSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_RuledLineCapabilities(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedBarcodeRotations(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedBitmapRotations(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IJournalPrintJob>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Print(void*, void*) noexcept = 0;
            virtual int32_t __stdcall FeedPaperByLine(int32_t) noexcept = 0;
            virtual int32_t __stdcall FeedPaperByMapModeUnit(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IJournalPrinterCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IJournalPrinterCapabilities2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsReverseVideoSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsStrikethroughSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSuperscriptSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSubscriptSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsReversePaperFeedByLineSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsReversePaperFeedByMapModeUnitSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ILineDisplay>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Capabilities(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhysicalDeviceName(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhysicalDeviceDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceControlDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceControlVersion(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceServiceVersion(void**) noexcept = 0;
            virtual int32_t __stdcall ClaimAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ILineDisplay2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CheckPowerStatusAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ILineDisplayAttributes>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsPowerNotifyEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPowerNotifyEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Brightness(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Brightness(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_BlinkRate(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_BlinkRate(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_ScreenSizeInCharacters(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall put_ScreenSizeInCharacters(Windows::Foundation::Size) noexcept = 0;
            virtual int32_t __stdcall get_CharacterSet(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CharacterSet(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsCharacterSetMappingEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCharacterSetMappingEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_CurrentWindow(void**) noexcept = 0;
            virtual int32_t __stdcall put_CurrentWindow(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ILineDisplayCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsStatisticsReportingSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsStatisticsUpdatingSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_PowerReportingType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CanChangeScreenSize(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanDisplayBitmaps(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanReadCharacterAtCursor(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanMapCharacterSets(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanDisplayCustomGlyphs(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanReverse(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CanBlink(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CanChangeBlinkRate(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsBrightnessSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsCursorSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsHorizontalMarqueeSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsVerticalMarqueeSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsInterCharacterWaitSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedDescriptors(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedWindows(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ILineDisplayCursor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanCustomize(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsBlinkSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsBlockSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsHalfBlockSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsUnderlineSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsReverseSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsOtherSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall GetAttributes(void**) noexcept = 0;
            virtual int32_t __stdcall TryUpdateAttributesAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ILineDisplayCursorAttributes>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsBlinkEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsBlinkEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_CursorType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CursorType(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsAutoAdvanceEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsAutoAdvanceEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Position(Windows::Foundation::Point) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ILineDisplayCustomGlyphs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SizeInPixels(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedGlyphCodes(void**) noexcept = 0;
            virtual int32_t __stdcall TryRedefineAsync(uint32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ILineDisplayMarquee>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Format(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Format(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RepeatWaitInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_RepeatWaitInterval(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_ScrollWaitInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_ScrollWaitInterval(int64_t) noexcept = 0;
            virtual int32_t __stdcall TryStartScrollingAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryStopScrollingAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ILineDisplayStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorWithConnectionTypes(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ILineDisplayStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StatisticsCategorySelector(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ILineDisplayStatisticsCategorySelector>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllStatistics(void**) noexcept = 0;
            virtual int32_t __stdcall get_UnifiedPosStatistics(void**) noexcept = 0;
            virtual int32_t __stdcall get_ManufacturerStatistics(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ILineDisplayStatusUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ILineDisplayStoredBitmap>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EscapeSequence(void**) noexcept = 0;
            virtual int32_t __stdcall TryDeleteAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ILineDisplayWindow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SizeInCharacters(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_InterCharacterWaitInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_InterCharacterWaitInterval(int64_t) noexcept = 0;
            virtual int32_t __stdcall TryRefreshAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryDisplayTextAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryDisplayTextAtPositionAsync(void*, int32_t, Windows::Foundation::Point, void**) noexcept = 0;
            virtual int32_t __stdcall TryDisplayTextNormalAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryScrollTextAsync(int32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryClearTextAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ILineDisplayWindow2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Cursor(void**) noexcept = 0;
            virtual int32_t __stdcall get_Marquee(void**) noexcept = 0;
            virtual int32_t __stdcall ReadCharacterAtCursorAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryDisplayStoredBitmapAtCursorAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryDisplayStorageFileBitmapAtCursorAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryDisplayStorageFileBitmapAtCursorWithAlignmentAsync(void*, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryDisplayStorageFileBitmapAtCursorWithAlignmentAndWidthAsync(void*, int32_t, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryDisplayStorageFileBitmapAtPointAsync(void*, Windows::Foundation::Point, void**) noexcept = 0;
            virtual int32_t __stdcall TryDisplayStorageFileBitmapAtPointWithWidthAsync(void*, Windows::Foundation::Point, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Capabilities(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedCardTypes(uint32_t* __valueSize, uint32_t**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceAuthenticationProtocol(int32_t*) noexcept = 0;
            virtual int32_t __stdcall CheckHealthAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ClaimReaderAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RetrieveStatisticsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetErrorReportingType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_StatusUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StatusUpdated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Report(void**) noexcept = 0;
            virtual int32_t __stdcall get_LicenseNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExpirationDate(void**) noexcept = 0;
            virtual int32_t __stdcall get_Restrictions(void**) noexcept = 0;
            virtual int32_t __stdcall get_Class(void**) noexcept = 0;
            virtual int32_t __stdcall get_Endorsements(void**) noexcept = 0;
            virtual int32_t __stdcall get_BirthDate(void**) noexcept = 0;
            virtual int32_t __stdcall get_FirstName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Surname(void**) noexcept = 0;
            virtual int32_t __stdcall get_Suffix(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gender(void**) noexcept = 0;
            virtual int32_t __stdcall get_HairColor(void**) noexcept = 0;
            virtual int32_t __stdcall get_EyeColor(void**) noexcept = 0;
            virtual int32_t __stdcall get_Height(void**) noexcept = 0;
            virtual int32_t __stdcall get_Weight(void**) noexcept = 0;
            virtual int32_t __stdcall get_Address(void**) noexcept = 0;
            virtual int32_t __stdcall get_City(void**) noexcept = 0;
            virtual int32_t __stdcall get_State(void**) noexcept = 0;
            virtual int32_t __stdcall get_PostalCode(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Report(void**) noexcept = 0;
            virtual int32_t __stdcall get_AccountNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExpirationDate(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServiceCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall get_FirstName(void**) noexcept = 0;
            virtual int32_t __stdcall get_MiddleInitial(void**) noexcept = 0;
            virtual int32_t __stdcall get_Surname(void**) noexcept = 0;
            virtual int32_t __stdcall get_Suffix(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CardAuthentication(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedEncryptionAlgorithms(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AuthenticationLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsIsoSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsJisOneSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsJisTwoSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_PowerReportingType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsStatisticsReportingSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsStatisticsUpdatingSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsTrackDataMaskingSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsTransmitSentinelsSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Unknown(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Bank(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Aamva(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedBase(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_None(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TripleDesDukpt(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedBase(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Track1Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Track2Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Track3Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Track4Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorData(void**) noexcept = 0;
            virtual int32_t __stdcall get_PartialInputData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CardType(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Track1(void**) noexcept = 0;
            virtual int32_t __stdcall get_Track2(void**) noexcept = 0;
            virtual int32_t __stdcall get_Track3(void**) noexcept = 0;
            virtual int32_t __stdcall get_Track4(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall get_CardAuthenticationData(void**) noexcept = 0;
            virtual int32_t __stdcall get_CardAuthenticationDataLength(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AdditionalSecurityInformation(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelectorWithConnectionTypes(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedStatus(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderTrackData>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall get_DiscretionaryData(void**) noexcept = 0;
            virtual int32_t __stdcall get_EncryptedData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Report(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IPosPrinter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Capabilities(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedCharacterSets(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedTypeFaces(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(void**) noexcept = 0;
            virtual int32_t __stdcall ClaimPrinterAsync(void**) noexcept = 0;
            virtual int32_t __stdcall CheckHealthAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetStatisticsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_StatusUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StatusUpdated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IPosPrinter2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportedBarcodeSymbologies(void**) noexcept = 0;
            virtual int32_t __stdcall GetFontProperty(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IPosPrinterCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PowerReportingType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsStatisticsReportingSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsStatisticsUpdatingSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DefaultCharacterSet(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_HasCoverSensor(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanMapCharacterSet(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsTransactionSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Receipt(void**) noexcept = 0;
            virtual int32_t __stdcall get_Slip(void**) noexcept = 0;
            virtual int32_t __stdcall get_Journal(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Utf16LE(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Ascii(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Ansi(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IPosPrinterFontProperty>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TypeFace(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsScalableToAnySize(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CharacterSizes(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IPosPrinterJob>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Print(void*) noexcept = 0;
            virtual int32_t __stdcall PrintLine(void*) noexcept = 0;
            virtual int32_t __stdcall PrintNewline() noexcept = 0;
            virtual int32_t __stdcall ExecuteAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IPosPrinterPrintOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TypeFace(void**) noexcept = 0;
            virtual int32_t __stdcall put_TypeFace(void*) noexcept = 0;
            virtual int32_t __stdcall get_CharacterHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CharacterHeight(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Bold(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Bold(bool) noexcept = 0;
            virtual int32_t __stdcall get_Italic(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Italic(bool) noexcept = 0;
            virtual int32_t __stdcall get_Underline(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Underline(bool) noexcept = 0;
            virtual int32_t __stdcall get_ReverseVideo(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ReverseVideo(bool) noexcept = 0;
            virtual int32_t __stdcall get_Strikethrough(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Strikethrough(bool) noexcept = 0;
            virtual int32_t __stdcall get_Superscript(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Superscript(bool) noexcept = 0;
            virtual int32_t __stdcall get_Subscript(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Subscript(bool) noexcept = 0;
            virtual int32_t __stdcall get_DoubleWide(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DoubleWide(bool) noexcept = 0;
            virtual int32_t __stdcall get_DoubleHigh(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DoubleHigh(bool) noexcept = 0;
            virtual int32_t __stdcall get_Alignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Alignment(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CharacterSet(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CharacterSet(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IPosPrinterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IPosPrinterStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelectorWithConnectionTypes(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IPosPrinterStatus>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StatusKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedStatus(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IReceiptOrSlipJob>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetBarcodeRotation(int32_t) noexcept = 0;
            virtual int32_t __stdcall SetPrintRotation(int32_t, bool) noexcept = 0;
            virtual int32_t __stdcall SetPrintArea(Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall SetBitmap(uint32_t, void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall SetBitmapCustomWidthStandardAlign(uint32_t, void*, int32_t, uint32_t) noexcept = 0;
            virtual int32_t __stdcall SetCustomAlignedBitmap(uint32_t, void*, uint32_t) noexcept = 0;
            virtual int32_t __stdcall SetBitmapCustomWidthCustomAlign(uint32_t, void*, uint32_t, uint32_t) noexcept = 0;
            virtual int32_t __stdcall PrintSavedBitmap(uint32_t) noexcept = 0;
            virtual int32_t __stdcall DrawRuledLine(void*, int32_t, uint32_t, int32_t, uint32_t) noexcept = 0;
            virtual int32_t __stdcall PrintBarcode(void*, uint32_t, uint32_t, uint32_t, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall PrintBarcodeCustomAlign(void*, uint32_t, uint32_t, uint32_t, int32_t, uint32_t) noexcept = 0;
            virtual int32_t __stdcall PrintBitmap(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall PrintBitmapCustomWidthStandardAlign(void*, int32_t, uint32_t) noexcept = 0;
            virtual int32_t __stdcall PrintCustomAlignedBitmap(void*, uint32_t) noexcept = 0;
            virtual int32_t __stdcall PrintBitmapCustomWidthCustomAlign(void*, uint32_t, uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IReceiptPrintJob>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall MarkFeed(int32_t) noexcept = 0;
            virtual int32_t __stdcall CutPaper(double) noexcept = 0;
            virtual int32_t __stdcall CutPaperDefault() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IReceiptPrintJob2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StampPaper() noexcept = 0;
            virtual int32_t __stdcall Print(void*, void*) noexcept = 0;
            virtual int32_t __stdcall FeedPaperByLine(int32_t) noexcept = 0;
            virtual int32_t __stdcall FeedPaperByMapModeUnit(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IReceiptPrinterCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanCutPaper(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsStampSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MarkFeedCapabilities(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IReceiptPrinterCapabilities2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsReverseVideoSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsStrikethroughSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSuperscriptSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSubscriptSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsReversePaperFeedByLineSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsReversePaperFeedByMapModeUnitSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ISlipPrintJob>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Print(void*, void*) noexcept = 0;
            virtual int32_t __stdcall FeedPaperByLine(int32_t) noexcept = 0;
            virtual int32_t __stdcall FeedPaperByMapModeUnit(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ISlipPrinterCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsFullLengthSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsBothSidesPrintingSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::ISlipPrinterCapabilities2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsReverseVideoSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsStrikethroughSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSuperscriptSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSubscriptSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsReversePaperFeedByLineSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsReversePaperFeedByMapModeUnitSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IUnifiedPosErrorData>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
            virtual int32_t __stdcall get_Severity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedReason(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::PointOfService::IUnifiedPosErrorDataFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, int32_t, int32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IBarcodeScanner
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto Capabilities() const;
        auto ClaimScannerAsync() const;
        auto CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel const& level) const;
        auto GetSupportedSymbologiesAsync() const;
        auto IsSymbologySupportedAsync(uint32_t barcodeSymbology) const;
        auto RetrieveStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const;
        auto GetSupportedProfiles() const;
        auto IsProfileSupported(param::hstring const& profile) const;
        auto StatusUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::BarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs> const& handler) const;
        using StatusUpdated_revoker = impl::event_revoker<Windows::Devices::PointOfService::IBarcodeScanner, &impl::abi_t<Windows::Devices::PointOfService::IBarcodeScanner>::remove_StatusUpdated>;
        StatusUpdated_revoker StatusUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::BarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs> const& handler) const;
        auto StatusUpdated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::IBarcodeScanner>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScanner<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IBarcodeScanner2
    {
        [[nodiscard]] auto VideoDeviceId() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IBarcodeScanner2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScanner2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IBarcodeScannerCapabilities
    {
        [[nodiscard]] auto PowerReportingType() const;
        [[nodiscard]] auto IsStatisticsReportingSupported() const;
        [[nodiscard]] auto IsStatisticsUpdatingSupported() const;
        [[nodiscard]] auto IsImagePreviewSupported() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerCapabilities>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IBarcodeScannerCapabilities1
    {
        [[nodiscard]] auto IsSoftwareTriggerSupported() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerCapabilities1>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerCapabilities1<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IBarcodeScannerCapabilities2
    {
        [[nodiscard]] auto IsVideoPreviewSupported() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerCapabilities2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerCapabilities2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IBarcodeScannerDataReceivedEventArgs
    {
        [[nodiscard]] auto Report() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerDataReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerDataReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IBarcodeScannerErrorOccurredEventArgs
    {
        [[nodiscard]] auto PartialInputData() const;
        [[nodiscard]] auto IsRetriable() const;
        [[nodiscard]] auto ErrorData() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerErrorOccurredEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerErrorOccurredEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IBarcodeScannerImagePreviewReceivedEventArgs
    {
        [[nodiscard]] auto Preview() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerImagePreviewReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerImagePreviewReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IBarcodeScannerReport
    {
        [[nodiscard]] auto ScanDataType() const;
        [[nodiscard]] auto ScanData() const;
        [[nodiscard]] auto ScanDataLabel() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerReport>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerReport<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IBarcodeScannerReportFactory
    {
        auto CreateInstance(uint32_t scanDataType, Windows::Storage::Streams::IBuffer const& scanData, Windows::Storage::Streams::IBuffer const& scanDataLabel) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerReportFactory>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerReportFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IBarcodeScannerStatics
    {
        auto GetDefaultAsync() const;
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto GetDeviceSelector() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerStatics>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IBarcodeScannerStatics2
    {
        auto GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IBarcodeScannerStatusUpdatedEventArgs
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ExtendedStatus() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IBarcodeScannerStatusUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeScannerStatusUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics
    {
        [[nodiscard]] auto Unknown() const;
        [[nodiscard]] auto Ean8() const;
        [[nodiscard]] auto Ean8Add2() const;
        [[nodiscard]] auto Ean8Add5() const;
        [[nodiscard]] auto Eanv() const;
        [[nodiscard]] auto EanvAdd2() const;
        [[nodiscard]] auto EanvAdd5() const;
        [[nodiscard]] auto Ean13() const;
        [[nodiscard]] auto Ean13Add2() const;
        [[nodiscard]] auto Ean13Add5() const;
        [[nodiscard]] auto Isbn() const;
        [[nodiscard]] auto IsbnAdd5() const;
        [[nodiscard]] auto Ismn() const;
        [[nodiscard]] auto IsmnAdd2() const;
        [[nodiscard]] auto IsmnAdd5() const;
        [[nodiscard]] auto Issn() const;
        [[nodiscard]] auto IssnAdd2() const;
        [[nodiscard]] auto IssnAdd5() const;
        [[nodiscard]] auto Ean99() const;
        [[nodiscard]] auto Ean99Add2() const;
        [[nodiscard]] auto Ean99Add5() const;
        [[nodiscard]] auto Upca() const;
        [[nodiscard]] auto UpcaAdd2() const;
        [[nodiscard]] auto UpcaAdd5() const;
        [[nodiscard]] auto Upce() const;
        [[nodiscard]] auto UpceAdd2() const;
        [[nodiscard]] auto UpceAdd5() const;
        [[nodiscard]] auto UpcCoupon() const;
        [[nodiscard]] auto TfStd() const;
        [[nodiscard]] auto TfDis() const;
        [[nodiscard]] auto TfInt() const;
        [[nodiscard]] auto TfInd() const;
        [[nodiscard]] auto TfMat() const;
        [[nodiscard]] auto TfIata() const;
        [[nodiscard]] auto Gs1DatabarType1() const;
        [[nodiscard]] auto Gs1DatabarType2() const;
        [[nodiscard]] auto Gs1DatabarType3() const;
        [[nodiscard]] auto Code39() const;
        [[nodiscard]] auto Code39Ex() const;
        [[nodiscard]] auto Trioptic39() const;
        [[nodiscard]] auto Code32() const;
        [[nodiscard]] auto Pzn() const;
        [[nodiscard]] auto Code93() const;
        [[nodiscard]] auto Code93Ex() const;
        [[nodiscard]] auto Code128() const;
        [[nodiscard]] auto Gs1128() const;
        [[nodiscard]] auto Gs1128Coupon() const;
        [[nodiscard]] auto UccEan128() const;
        [[nodiscard]] auto Sisac() const;
        [[nodiscard]] auto Isbt() const;
        [[nodiscard]] auto Codabar() const;
        [[nodiscard]] auto Code11() const;
        [[nodiscard]] auto Msi() const;
        [[nodiscard]] auto Plessey() const;
        [[nodiscard]] auto Telepen() const;
        [[nodiscard]] auto Code16k() const;
        [[nodiscard]] auto CodablockA() const;
        [[nodiscard]] auto CodablockF() const;
        [[nodiscard]] auto Codablock128() const;
        [[nodiscard]] auto Code49() const;
        [[nodiscard]] auto Aztec() const;
        [[nodiscard]] auto DataCode() const;
        [[nodiscard]] auto DataMatrix() const;
        [[nodiscard]] auto HanXin() const;
        [[nodiscard]] auto Maxicode() const;
        [[nodiscard]] auto MicroPdf417() const;
        [[nodiscard]] auto MicroQr() const;
        [[nodiscard]] auto Pdf417() const;
        [[nodiscard]] auto Qr() const;
        [[nodiscard]] auto MsTag() const;
        [[nodiscard]] auto Ccab() const;
        [[nodiscard]] auto Ccc() const;
        [[nodiscard]] auto Tlc39() const;
        [[nodiscard]] auto AusPost() const;
        [[nodiscard]] auto CanPost() const;
        [[nodiscard]] auto ChinaPost() const;
        [[nodiscard]] auto DutchKix() const;
        [[nodiscard]] auto InfoMail() const;
        [[nodiscard]] auto ItalianPost25() const;
        [[nodiscard]] auto ItalianPost39() const;
        [[nodiscard]] auto JapanPost() const;
        [[nodiscard]] auto KoreanPost() const;
        [[nodiscard]] auto SwedenPost() const;
        [[nodiscard]] auto UkPost() const;
        [[nodiscard]] auto UsIntelligent() const;
        [[nodiscard]] auto UsIntelligentPkg() const;
        [[nodiscard]] auto UsPlanet() const;
        [[nodiscard]] auto UsPostNet() const;
        [[nodiscard]] auto Us4StateFics() const;
        [[nodiscard]] auto OcrA() const;
        [[nodiscard]] auto OcrB() const;
        [[nodiscard]] auto Micr() const;
        [[nodiscard]] auto ExtendedBase() const;
        auto GetName(uint32_t scanDataType) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics2
    {
        [[nodiscard]] auto Gs1DWCode() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IBarcodeSymbologiesStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeSymbologiesStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IBarcodeSymbologyAttributes
    {
        [[nodiscard]] auto IsCheckDigitValidationEnabled() const;
        auto IsCheckDigitValidationEnabled(bool value) const;
        [[nodiscard]] auto IsCheckDigitValidationSupported() const;
        [[nodiscard]] auto IsCheckDigitTransmissionEnabled() const;
        auto IsCheckDigitTransmissionEnabled(bool value) const;
        [[nodiscard]] auto IsCheckDigitTransmissionSupported() const;
        [[nodiscard]] auto DecodeLength1() const;
        auto DecodeLength1(uint32_t value) const;
        [[nodiscard]] auto DecodeLength2() const;
        auto DecodeLength2(uint32_t value) const;
        [[nodiscard]] auto DecodeLengthKind() const;
        auto DecodeLengthKind(Windows::Devices::PointOfService::BarcodeSymbologyDecodeLengthKind const& value) const;
        [[nodiscard]] auto IsDecodeLengthSupported() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IBarcodeSymbologyAttributes>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IBarcodeSymbologyAttributes<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ICashDrawer
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto Capabilities() const;
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto IsDrawerOpen() const;
        [[nodiscard]] auto DrawerEventSource() const;
        auto ClaimDrawerAsync() const;
        auto CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel const& level) const;
        auto GetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const;
        auto StatusUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawer, Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs> const& handler) const;
        using StatusUpdated_revoker = impl::event_revoker<Windows::Devices::PointOfService::ICashDrawer, &impl::abi_t<Windows::Devices::PointOfService::ICashDrawer>::remove_StatusUpdated>;
        StatusUpdated_revoker StatusUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawer, Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs> const& handler) const;
        auto StatusUpdated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::ICashDrawer>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ICashDrawer<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ICashDrawerCapabilities
    {
        [[nodiscard]] auto PowerReportingType() const;
        [[nodiscard]] auto IsStatisticsReportingSupported() const;
        [[nodiscard]] auto IsStatisticsUpdatingSupported() const;
        [[nodiscard]] auto IsStatusReportingSupported() const;
        [[nodiscard]] auto IsStatusMultiDrawerDetectSupported() const;
        [[nodiscard]] auto IsDrawerOpenSensorAvailable() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ICashDrawerCapabilities>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ICashDrawerCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ICashDrawerCloseAlarm
    {
        auto AlarmTimeout(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto AlarmTimeout() const;
        auto BeepFrequency(uint32_t value) const;
        [[nodiscard]] auto BeepFrequency() const;
        auto BeepDuration(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto BeepDuration() const;
        auto BeepDelay(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto BeepDelay() const;
        auto AlarmTimeoutExpired(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerCloseAlarm, Windows::Foundation::IInspectable> const& handler) const;
        using AlarmTimeoutExpired_revoker = impl::event_revoker<Windows::Devices::PointOfService::ICashDrawerCloseAlarm, &impl::abi_t<Windows::Devices::PointOfService::ICashDrawerCloseAlarm>::remove_AlarmTimeoutExpired>;
        AlarmTimeoutExpired_revoker AlarmTimeoutExpired(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerCloseAlarm, Windows::Foundation::IInspectable> const& handler) const;
        auto AlarmTimeoutExpired(winrt::event_token const& token) const noexcept;
        auto StartAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ICashDrawerCloseAlarm>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ICashDrawerCloseAlarm<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ICashDrawerEventSource
    {
        auto DrawerClosed(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerEventSource, Windows::Devices::PointOfService::CashDrawerClosedEventArgs> const& handler) const;
        using DrawerClosed_revoker = impl::event_revoker<Windows::Devices::PointOfService::ICashDrawerEventSource, &impl::abi_t<Windows::Devices::PointOfService::ICashDrawerEventSource>::remove_DrawerClosed>;
        DrawerClosed_revoker DrawerClosed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerEventSource, Windows::Devices::PointOfService::CashDrawerClosedEventArgs> const& handler) const;
        auto DrawerClosed(winrt::event_token const& token) const noexcept;
        auto DrawerOpened(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerEventSource, Windows::Devices::PointOfService::CashDrawerOpenedEventArgs> const& handler) const;
        using DrawerOpened_revoker = impl::event_revoker<Windows::Devices::PointOfService::ICashDrawerEventSource, &impl::abi_t<Windows::Devices::PointOfService::ICashDrawerEventSource>::remove_DrawerOpened>;
        DrawerOpened_revoker DrawerOpened(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::CashDrawerEventSource, Windows::Devices::PointOfService::CashDrawerOpenedEventArgs> const& handler) const;
        auto DrawerOpened(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::ICashDrawerEventSource>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ICashDrawerEventSource<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ICashDrawerEventSourceEventArgs
    {
        [[nodiscard]] auto CashDrawer() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ICashDrawerEventSourceEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ICashDrawerStatics
    {
        auto GetDefaultAsync() const;
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto GetDeviceSelector() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ICashDrawerStatics>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ICashDrawerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ICashDrawerStatics2
    {
        auto GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ICashDrawerStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ICashDrawerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ICashDrawerStatus
    {
        [[nodiscard]] auto StatusKind() const;
        [[nodiscard]] auto ExtendedStatus() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ICashDrawerStatus>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ICashDrawerStatus<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ICashDrawerStatusUpdatedEventArgs
    {
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ICashDrawerStatusUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ICashDrawerStatusUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto IsEnabled() const;
        auto IsDisabledOnDataReceived(bool value) const;
        [[nodiscard]] auto IsDisabledOnDataReceived() const;
        auto IsDecodeDataEnabled(bool value) const;
        [[nodiscard]] auto IsDecodeDataEnabled() const;
        auto EnableAsync() const;
        auto DisableAsync() const;
        auto RetainDevice() const;
        auto SetActiveSymbologiesAsync(param::async_iterable<uint32_t> const& symbologies) const;
        auto ResetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const;
        auto UpdateStatisticsAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& statistics) const;
        auto SetActiveProfileAsync(param::hstring const& profile) const;
        auto DataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs> const& handler) const;
        using DataReceived_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner, &impl::abi_t<Windows::Devices::PointOfService::IClaimedBarcodeScanner>::remove_DataReceived>;
        DataReceived_revoker DataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs> const& handler) const;
        auto DataReceived(winrt::event_token const& token) const noexcept;
        auto TriggerPressed(Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const& handler) const;
        using TriggerPressed_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner, &impl::abi_t<Windows::Devices::PointOfService::IClaimedBarcodeScanner>::remove_TriggerPressed>;
        TriggerPressed_revoker TriggerPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const& handler) const;
        auto TriggerPressed(winrt::event_token const& token) const noexcept;
        auto TriggerReleased(Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const& handler) const;
        using TriggerReleased_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner, &impl::abi_t<Windows::Devices::PointOfService::IClaimedBarcodeScanner>::remove_TriggerReleased>;
        TriggerReleased_revoker TriggerReleased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const& handler) const;
        auto TriggerReleased(winrt::event_token const& token) const noexcept;
        auto ReleaseDeviceRequested(Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const& handler) const;
        using ReleaseDeviceRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner, &impl::abi_t<Windows::Devices::PointOfService::IClaimedBarcodeScanner>::remove_ReleaseDeviceRequested>;
        ReleaseDeviceRequested_revoker ReleaseDeviceRequested(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner> const& handler) const;
        auto ReleaseDeviceRequested(winrt::event_token const& token) const noexcept;
        auto ImagePreviewReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs> const& handler) const;
        using ImagePreviewReceived_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner, &impl::abi_t<Windows::Devices::PointOfService::IClaimedBarcodeScanner>::remove_ImagePreviewReceived>;
        ImagePreviewReceived_revoker ImagePreviewReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs> const& handler) const;
        auto ImagePreviewReceived(winrt::event_token const& token) const noexcept;
        auto ErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs> const& handler) const;
        using ErrorOccurred_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner, &impl::abi_t<Windows::Devices::PointOfService::IClaimedBarcodeScanner>::remove_ErrorOccurred>;
        ErrorOccurred_revoker ErrorOccurred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs> const& handler) const;
        auto ErrorOccurred(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedBarcodeScanner>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner1
    {
        auto StartSoftwareTriggerAsync() const;
        auto StopSoftwareTriggerAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedBarcodeScanner1>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner1<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner2
    {
        auto GetSymbologyAttributesAsync(uint32_t barcodeSymbology) const;
        auto SetSymbologyAttributesAsync(uint32_t barcodeSymbology, Windows::Devices::PointOfService::BarcodeSymbologyAttributes const& attributes) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedBarcodeScanner2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner3
    {
        auto ShowVideoPreviewAsync() const;
        auto HideVideoPreview() const;
        auto IsVideoPreviewShownOnEnable(bool value) const;
        [[nodiscard]] auto IsVideoPreviewShownOnEnable() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedBarcodeScanner3>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner4
    {
        auto Closed(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::ClaimedBarcodeScannerClosedEventArgs> const& handler) const;
        using Closed_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedBarcodeScanner4, &impl::abi_t<Windows::Devices::PointOfService::IClaimedBarcodeScanner4>::remove_Closed>;
        Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedBarcodeScanner, Windows::Devices::PointOfService::ClaimedBarcodeScannerClosedEventArgs> const& handler) const;
        auto Closed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedBarcodeScanner4>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedBarcodeScanner4<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedBarcodeScannerClosedEventArgs
    {
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedBarcodeScannerClosedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedBarcodeScannerClosedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedCashDrawer
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto IsEnabled() const;
        [[nodiscard]] auto IsDrawerOpen() const;
        [[nodiscard]] auto CloseAlarm() const;
        auto OpenDrawerAsync() const;
        auto EnableAsync() const;
        auto DisableAsync() const;
        auto RetainDeviceAsync() const;
        auto ResetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const;
        auto UpdateStatisticsAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& statistics) const;
        auto ReleaseDeviceRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedCashDrawer, Windows::Foundation::IInspectable> const& handler) const;
        using ReleaseDeviceRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedCashDrawer, &impl::abi_t<Windows::Devices::PointOfService::IClaimedCashDrawer>::remove_ReleaseDeviceRequested>;
        ReleaseDeviceRequested_revoker ReleaseDeviceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedCashDrawer, Windows::Foundation::IInspectable> const& handler) const;
        auto ReleaseDeviceRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedCashDrawer>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedCashDrawer<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedCashDrawer2
    {
        auto Closed(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedCashDrawer, Windows::Devices::PointOfService::ClaimedCashDrawerClosedEventArgs> const& handler) const;
        using Closed_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedCashDrawer2, &impl::abi_t<Windows::Devices::PointOfService::IClaimedCashDrawer2>::remove_Closed>;
        Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedCashDrawer, Windows::Devices::PointOfService::ClaimedCashDrawerClosedEventArgs> const& handler) const;
        auto Closed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedCashDrawer2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedCashDrawer2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedCashDrawerClosedEventArgs
    {
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedCashDrawerClosedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedCashDrawerClosedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedJournalPrinter
    {
        auto CreateJob() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedJournalPrinter>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedJournalPrinter<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedLineDisplay
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto Capabilities() const;
        [[nodiscard]] auto PhysicalDeviceName() const;
        [[nodiscard]] auto PhysicalDeviceDescription() const;
        [[nodiscard]] auto DeviceControlDescription() const;
        [[nodiscard]] auto DeviceControlVersion() const;
        [[nodiscard]] auto DeviceServiceVersion() const;
        [[nodiscard]] auto DefaultWindow() const;
        auto RetainDevice() const;
        auto ReleaseDeviceRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedLineDisplay, Windows::Foundation::IInspectable> const& handler) const;
        using ReleaseDeviceRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedLineDisplay, &impl::abi_t<Windows::Devices::PointOfService::IClaimedLineDisplay>::remove_ReleaseDeviceRequested>;
        ReleaseDeviceRequested_revoker ReleaseDeviceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedLineDisplay, Windows::Foundation::IInspectable> const& handler) const;
        auto ReleaseDeviceRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedLineDisplay>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedLineDisplay<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedLineDisplay2
    {
        auto GetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const;
        auto CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel const& level) const;
        auto CheckPowerStatusAsync() const;
        auto StatusUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedLineDisplay, Windows::Devices::PointOfService::LineDisplayStatusUpdatedEventArgs> const& handler) const;
        using StatusUpdated_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedLineDisplay2, &impl::abi_t<Windows::Devices::PointOfService::IClaimedLineDisplay2>::remove_StatusUpdated>;
        StatusUpdated_revoker StatusUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedLineDisplay, Windows::Devices::PointOfService::LineDisplayStatusUpdatedEventArgs> const& handler) const;
        auto StatusUpdated(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto SupportedScreenSizesInCharacters() const;
        [[nodiscard]] auto MaxBitmapSizeInPixels() const;
        [[nodiscard]] auto SupportedCharacterSets() const;
        [[nodiscard]] auto CustomGlyphs() const;
        auto GetAttributes() const;
        auto TryUpdateAttributesAsync(Windows::Devices::PointOfService::LineDisplayAttributes const& attributes) const;
        auto TrySetDescriptorAsync(uint32_t descriptor, Windows::Devices::PointOfService::LineDisplayDescriptorState const& descriptorState) const;
        auto TryClearDescriptorsAsync() const;
        auto TryCreateWindowAsync(Windows::Foundation::Rect const& viewport, Windows::Foundation::Size const& windowSize) const;
        auto TryStoreStorageFileBitmapAsync(Windows::Storage::StorageFile const& bitmap) const;
        auto TryStoreStorageFileBitmapAsync(Windows::Storage::StorageFile const& bitmap, Windows::Devices::PointOfService::LineDisplayHorizontalAlignment const& horizontalAlignment, Windows::Devices::PointOfService::LineDisplayVerticalAlignment const& verticalAlignment) const;
        auto TryStoreStorageFileBitmapAsync(Windows::Storage::StorageFile const& bitmap, Windows::Devices::PointOfService::LineDisplayHorizontalAlignment const& horizontalAlignment, Windows::Devices::PointOfService::LineDisplayVerticalAlignment const& verticalAlignment, int32_t widthInPixels) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedLineDisplay2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedLineDisplay2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedLineDisplay3
    {
        auto Closed(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedLineDisplay, Windows::Devices::PointOfService::ClaimedLineDisplayClosedEventArgs> const& handler) const;
        using Closed_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedLineDisplay3, &impl::abi_t<Windows::Devices::PointOfService::IClaimedLineDisplay3>::remove_Closed>;
        Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedLineDisplay, Windows::Devices::PointOfService::ClaimedLineDisplayClosedEventArgs> const& handler) const;
        auto Closed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedLineDisplay3>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedLineDisplay3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedLineDisplayClosedEventArgs
    {
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedLineDisplayClosedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedLineDisplayClosedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedLineDisplayStatics
    {
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto GetDeviceSelector() const;
        auto GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedLineDisplayStatics>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedLineDisplayStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto IsEnabled() const;
        auto IsDisabledOnDataReceived(bool value) const;
        [[nodiscard]] auto IsDisabledOnDataReceived() const;
        auto IsDecodeDataEnabled(bool value) const;
        [[nodiscard]] auto IsDecodeDataEnabled() const;
        [[nodiscard]] auto IsDeviceAuthenticated() const;
        auto DataEncryptionAlgorithm(uint32_t value) const;
        [[nodiscard]] auto DataEncryptionAlgorithm() const;
        auto TracksToRead(Windows::Devices::PointOfService::MagneticStripeReaderTrackIds const& value) const;
        [[nodiscard]] auto TracksToRead() const;
        auto IsTransmitSentinelsEnabled(bool value) const;
        [[nodiscard]] auto IsTransmitSentinelsEnabled() const;
        auto EnableAsync() const;
        auto DisableAsync() const;
        auto RetainDevice() const;
        auto SetErrorReportingType(Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType const& value) const;
        auto RetrieveDeviceAuthenticationDataAsync() const;
        auto AuthenticateDeviceAsync(array_view<uint8_t const> responseToken) const;
        auto DeAuthenticateDeviceAsync(array_view<uint8_t const> responseToken) const;
        auto UpdateKeyAsync(param::hstring const& key, param::hstring const& keyName) const;
        auto ResetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const;
        auto UpdateStatisticsAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& statistics) const;
        auto BankCardDataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs> const& handler) const;
        using BankCardDataReceived_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedMagneticStripeReader, &impl::abi_t<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>::remove_BankCardDataReceived>;
        BankCardDataReceived_revoker BankCardDataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs> const& handler) const;
        auto BankCardDataReceived(winrt::event_token const& token) const noexcept;
        auto AamvaCardDataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs> const& handler) const;
        using AamvaCardDataReceived_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedMagneticStripeReader, &impl::abi_t<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>::remove_AamvaCardDataReceived>;
        AamvaCardDataReceived_revoker AamvaCardDataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs> const& handler) const;
        auto AamvaCardDataReceived(winrt::event_token const& token) const noexcept;
        auto VendorSpecificDataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs> const& handler) const;
        using VendorSpecificDataReceived_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedMagneticStripeReader, &impl::abi_t<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>::remove_VendorSpecificDataReceived>;
        VendorSpecificDataReceived_revoker VendorSpecificDataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs> const& handler) const;
        auto VendorSpecificDataReceived(winrt::event_token const& token) const noexcept;
        auto ReleaseDeviceRequested(Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader> const& handler) const;
        using ReleaseDeviceRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedMagneticStripeReader, &impl::abi_t<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>::remove_ReleaseDeviceRequested>;
        ReleaseDeviceRequested_revoker ReleaseDeviceRequested(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader> const& handler) const;
        auto ReleaseDeviceRequested(winrt::event_token const& token) const noexcept;
        auto ErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs> const& handler) const;
        using ErrorOccurred_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedMagneticStripeReader, &impl::abi_t<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>::remove_ErrorOccurred>;
        ErrorOccurred_revoker ErrorOccurred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs> const& handler) const;
        auto ErrorOccurred(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedMagneticStripeReader>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader2
    {
        auto Closed(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::ClaimedMagneticStripeReaderClosedEventArgs> const& handler) const;
        using Closed_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedMagneticStripeReader2, &impl::abi_t<Windows::Devices::PointOfService::IClaimedMagneticStripeReader2>::remove_Closed>;
        Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedMagneticStripeReader, Windows::Devices::PointOfService::ClaimedMagneticStripeReaderClosedEventArgs> const& handler) const;
        auto Closed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedMagneticStripeReader2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReader2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReaderClosedEventArgs
    {
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedMagneticStripeReaderClosedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedMagneticStripeReaderClosedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedPosPrinter
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto IsEnabled() const;
        auto CharacterSet(uint32_t value) const;
        [[nodiscard]] auto CharacterSet() const;
        [[nodiscard]] auto IsCoverOpen() const;
        auto IsCharacterSetMappingEnabled(bool value) const;
        [[nodiscard]] auto IsCharacterSetMappingEnabled() const;
        auto MapMode(Windows::Devices::PointOfService::PosPrinterMapMode const& value) const;
        [[nodiscard]] auto MapMode() const;
        [[nodiscard]] auto Receipt() const;
        [[nodiscard]] auto Slip() const;
        [[nodiscard]] auto Journal() const;
        auto EnableAsync() const;
        auto DisableAsync() const;
        auto RetainDeviceAsync() const;
        auto ResetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const;
        auto UpdateStatisticsAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& statistics) const;
        auto ReleaseDeviceRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedPosPrinter, Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs> const& handler) const;
        using ReleaseDeviceRequested_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedPosPrinter, &impl::abi_t<Windows::Devices::PointOfService::IClaimedPosPrinter>::remove_ReleaseDeviceRequested>;
        ReleaseDeviceRequested_revoker ReleaseDeviceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedPosPrinter, Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs> const& handler) const;
        auto ReleaseDeviceRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedPosPrinter>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedPosPrinter<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedPosPrinter2
    {
        auto Closed(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedPosPrinter, Windows::Devices::PointOfService::ClaimedPosPrinterClosedEventArgs> const& handler) const;
        using Closed_revoker = impl::event_revoker<Windows::Devices::PointOfService::IClaimedPosPrinter2, &impl::abi_t<Windows::Devices::PointOfService::IClaimedPosPrinter2>::remove_Closed>;
        Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::ClaimedPosPrinter, Windows::Devices::PointOfService::ClaimedPosPrinterClosedEventArgs> const& handler) const;
        auto Closed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedPosPrinter2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedPosPrinter2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedPosPrinterClosedEventArgs
    {
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedPosPrinterClosedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedPosPrinterClosedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedReceiptPrinter
    {
        [[nodiscard]] auto SidewaysMaxLines() const;
        [[nodiscard]] auto SidewaysMaxChars() const;
        [[nodiscard]] auto LinesToPaperCut() const;
        [[nodiscard]] auto PageSize() const;
        [[nodiscard]] auto PrintArea() const;
        auto CreateJob() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedReceiptPrinter>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedReceiptPrinter<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IClaimedSlipPrinter
    {
        [[nodiscard]] auto SidewaysMaxLines() const;
        [[nodiscard]] auto SidewaysMaxChars() const;
        [[nodiscard]] auto MaxLines() const;
        [[nodiscard]] auto LinesNearEndToEnd() const;
        [[nodiscard]] auto PrintSide() const;
        [[nodiscard]] auto PageSize() const;
        [[nodiscard]] auto PrintArea() const;
        auto OpenJaws() const;
        auto CloseJaws() const;
        auto InsertSlipAsync(Windows::Foundation::TimeSpan const& timeout) const;
        auto RemoveSlipAsync(Windows::Foundation::TimeSpan const& timeout) const;
        auto ChangePrintSide(Windows::Devices::PointOfService::PosPrinterPrintSide const& printSide) const;
        auto CreateJob() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IClaimedSlipPrinter>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IClaimedSlipPrinter<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation
    {
        auto CharactersPerLine(uint32_t value) const;
        [[nodiscard]] auto CharactersPerLine() const;
        auto LineHeight(uint32_t value) const;
        [[nodiscard]] auto LineHeight() const;
        auto LineSpacing(uint32_t value) const;
        [[nodiscard]] auto LineSpacing() const;
        [[nodiscard]] auto LineWidth() const;
        auto IsLetterQuality(bool value) const;
        [[nodiscard]] auto IsLetterQuality() const;
        [[nodiscard]] auto IsPaperNearEnd() const;
        auto ColorCartridge(Windows::Devices::PointOfService::PosPrinterColorCartridge const& value) const;
        [[nodiscard]] auto ColorCartridge() const;
        [[nodiscard]] auto IsCoverOpen() const;
        [[nodiscard]] auto IsCartridgeRemoved() const;
        [[nodiscard]] auto IsCartridgeEmpty() const;
        [[nodiscard]] auto IsHeadCleaning() const;
        [[nodiscard]] auto IsPaperEmpty() const;
        [[nodiscard]] auto IsReadyToPrint() const;
        auto ValidateData(param::hstring const& data) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ICommonClaimedPosPrinterStation<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ICommonPosPrintStationCapabilities
    {
        [[nodiscard]] auto IsPrinterPresent() const;
        [[nodiscard]] auto IsDualColorSupported() const;
        [[nodiscard]] auto ColorCartridgeCapabilities() const;
        [[nodiscard]] auto CartridgeSensors() const;
        [[nodiscard]] auto IsBoldSupported() const;
        [[nodiscard]] auto IsItalicSupported() const;
        [[nodiscard]] auto IsUnderlineSupported() const;
        [[nodiscard]] auto IsDoubleHighPrintSupported() const;
        [[nodiscard]] auto IsDoubleWidePrintSupported() const;
        [[nodiscard]] auto IsDoubleHighDoubleWidePrintSupported() const;
        [[nodiscard]] auto IsPaperEmptySensorSupported() const;
        [[nodiscard]] auto IsPaperNearEndSensorSupported() const;
        [[nodiscard]] auto SupportedCharactersPerLine() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ICommonPosPrintStationCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ICommonReceiptSlipCapabilities
    {
        [[nodiscard]] auto IsBarcodeSupported() const;
        [[nodiscard]] auto IsBitmapSupported() const;
        [[nodiscard]] auto IsLeft90RotationSupported() const;
        [[nodiscard]] auto IsRight90RotationSupported() const;
        [[nodiscard]] auto Is180RotationSupported() const;
        [[nodiscard]] auto IsPrintAreaSupported() const;
        [[nodiscard]] auto RuledLineCapabilities() const;
        [[nodiscard]] auto SupportedBarcodeRotations() const;
        [[nodiscard]] auto SupportedBitmapRotations() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ICommonReceiptSlipCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IJournalPrintJob
    {
        auto Print(param::hstring const& data, Windows::Devices::PointOfService::PosPrinterPrintOptions const& printOptions) const;
        auto FeedPaperByLine(int32_t lineCount) const;
        auto FeedPaperByMapModeUnit(int32_t distance) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IJournalPrintJob>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IJournalPrintJob<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IJournalPrinterCapabilities
    {
    };
    template <> struct consume<Windows::Devices::PointOfService::IJournalPrinterCapabilities>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IJournalPrinterCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IJournalPrinterCapabilities2
    {
        [[nodiscard]] auto IsReverseVideoSupported() const;
        [[nodiscard]] auto IsStrikethroughSupported() const;
        [[nodiscard]] auto IsSuperscriptSupported() const;
        [[nodiscard]] auto IsSubscriptSupported() const;
        [[nodiscard]] auto IsReversePaperFeedByLineSupported() const;
        [[nodiscard]] auto IsReversePaperFeedByMapModeUnitSupported() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IJournalPrinterCapabilities2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IJournalPrinterCapabilities2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ILineDisplay
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto Capabilities() const;
        [[nodiscard]] auto PhysicalDeviceName() const;
        [[nodiscard]] auto PhysicalDeviceDescription() const;
        [[nodiscard]] auto DeviceControlDescription() const;
        [[nodiscard]] auto DeviceControlVersion() const;
        [[nodiscard]] auto DeviceServiceVersion() const;
        auto ClaimAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ILineDisplay>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplay<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ILineDisplay2
    {
        auto CheckPowerStatusAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ILineDisplay2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplay2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ILineDisplayAttributes
    {
        [[nodiscard]] auto IsPowerNotifyEnabled() const;
        auto IsPowerNotifyEnabled(bool value) const;
        [[nodiscard]] auto Brightness() const;
        auto Brightness(int32_t value) const;
        [[nodiscard]] auto BlinkRate() const;
        auto BlinkRate(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto ScreenSizeInCharacters() const;
        auto ScreenSizeInCharacters(Windows::Foundation::Size const& value) const;
        [[nodiscard]] auto CharacterSet() const;
        auto CharacterSet(int32_t value) const;
        [[nodiscard]] auto IsCharacterSetMappingEnabled() const;
        auto IsCharacterSetMappingEnabled(bool value) const;
        [[nodiscard]] auto CurrentWindow() const;
        auto CurrentWindow(Windows::Devices::PointOfService::LineDisplayWindow const& value) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ILineDisplayAttributes>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayAttributes<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ILineDisplayCapabilities
    {
        [[nodiscard]] auto IsStatisticsReportingSupported() const;
        [[nodiscard]] auto IsStatisticsUpdatingSupported() const;
        [[nodiscard]] auto PowerReportingType() const;
        [[nodiscard]] auto CanChangeScreenSize() const;
        [[nodiscard]] auto CanDisplayBitmaps() const;
        [[nodiscard]] auto CanReadCharacterAtCursor() const;
        [[nodiscard]] auto CanMapCharacterSets() const;
        [[nodiscard]] auto CanDisplayCustomGlyphs() const;
        [[nodiscard]] auto CanReverse() const;
        [[nodiscard]] auto CanBlink() const;
        [[nodiscard]] auto CanChangeBlinkRate() const;
        [[nodiscard]] auto IsBrightnessSupported() const;
        [[nodiscard]] auto IsCursorSupported() const;
        [[nodiscard]] auto IsHorizontalMarqueeSupported() const;
        [[nodiscard]] auto IsVerticalMarqueeSupported() const;
        [[nodiscard]] auto IsInterCharacterWaitSupported() const;
        [[nodiscard]] auto SupportedDescriptors() const;
        [[nodiscard]] auto SupportedWindows() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ILineDisplayCapabilities>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ILineDisplayCursor
    {
        [[nodiscard]] auto CanCustomize() const;
        [[nodiscard]] auto IsBlinkSupported() const;
        [[nodiscard]] auto IsBlockSupported() const;
        [[nodiscard]] auto IsHalfBlockSupported() const;
        [[nodiscard]] auto IsUnderlineSupported() const;
        [[nodiscard]] auto IsReverseSupported() const;
        [[nodiscard]] auto IsOtherSupported() const;
        auto GetAttributes() const;
        auto TryUpdateAttributesAsync(Windows::Devices::PointOfService::LineDisplayCursorAttributes const& attributes) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ILineDisplayCursor>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayCursor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ILineDisplayCursorAttributes
    {
        [[nodiscard]] auto IsBlinkEnabled() const;
        auto IsBlinkEnabled(bool value) const;
        [[nodiscard]] auto CursorType() const;
        auto CursorType(Windows::Devices::PointOfService::LineDisplayCursorType const& value) const;
        [[nodiscard]] auto IsAutoAdvanceEnabled() const;
        auto IsAutoAdvanceEnabled(bool value) const;
        [[nodiscard]] auto Position() const;
        auto Position(Windows::Foundation::Point const& value) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ILineDisplayCursorAttributes>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayCursorAttributes<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ILineDisplayCustomGlyphs
    {
        [[nodiscard]] auto SizeInPixels() const;
        [[nodiscard]] auto SupportedGlyphCodes() const;
        auto TryRedefineAsync(uint32_t glyphCode, Windows::Storage::Streams::IBuffer const& glyphData) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ILineDisplayCustomGlyphs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayCustomGlyphs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ILineDisplayMarquee
    {
        [[nodiscard]] auto Format() const;
        auto Format(Windows::Devices::PointOfService::LineDisplayMarqueeFormat const& value) const;
        [[nodiscard]] auto RepeatWaitInterval() const;
        auto RepeatWaitInterval(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto ScrollWaitInterval() const;
        auto ScrollWaitInterval(Windows::Foundation::TimeSpan const& value) const;
        auto TryStartScrollingAsync(Windows::Devices::PointOfService::LineDisplayScrollDirection const& direction) const;
        auto TryStopScrollingAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ILineDisplayMarquee>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayMarquee<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ILineDisplayStatics
    {
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto GetDefaultAsync() const;
        auto GetDeviceSelector() const;
        auto GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ILineDisplayStatics>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ILineDisplayStatics2
    {
        [[nodiscard]] auto StatisticsCategorySelector() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ILineDisplayStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ILineDisplayStatisticsCategorySelector
    {
        [[nodiscard]] auto AllStatistics() const;
        [[nodiscard]] auto UnifiedPosStatistics() const;
        [[nodiscard]] auto ManufacturerStatistics() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ILineDisplayStatisticsCategorySelector>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayStatisticsCategorySelector<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ILineDisplayStatusUpdatedEventArgs
    {
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ILineDisplayStatusUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayStatusUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ILineDisplayStoredBitmap
    {
        [[nodiscard]] auto EscapeSequence() const;
        auto TryDeleteAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ILineDisplayStoredBitmap>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayStoredBitmap<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ILineDisplayWindow
    {
        [[nodiscard]] auto SizeInCharacters() const;
        [[nodiscard]] auto InterCharacterWaitInterval() const;
        auto InterCharacterWaitInterval(Windows::Foundation::TimeSpan const& value) const;
        auto TryRefreshAsync() const;
        auto TryDisplayTextAsync(param::hstring const& text, Windows::Devices::PointOfService::LineDisplayTextAttribute const& displayAttribute) const;
        auto TryDisplayTextAsync(param::hstring const& text, Windows::Devices::PointOfService::LineDisplayTextAttribute const& displayAttribute, Windows::Foundation::Point const& startPosition) const;
        auto TryDisplayTextAsync(param::hstring const& text) const;
        auto TryScrollTextAsync(Windows::Devices::PointOfService::LineDisplayScrollDirection const& direction, uint32_t numberOfColumnsOrRows) const;
        auto TryClearTextAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ILineDisplayWindow>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayWindow<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ILineDisplayWindow2
    {
        [[nodiscard]] auto Cursor() const;
        [[nodiscard]] auto Marquee() const;
        auto ReadCharacterAtCursorAsync() const;
        auto TryDisplayStoredBitmapAtCursorAsync(Windows::Devices::PointOfService::LineDisplayStoredBitmap const& bitmap) const;
        auto TryDisplayStorageFileBitmapAtCursorAsync(Windows::Storage::StorageFile const& bitmap) const;
        auto TryDisplayStorageFileBitmapAtCursorAsync(Windows::Storage::StorageFile const& bitmap, Windows::Devices::PointOfService::LineDisplayHorizontalAlignment const& horizontalAlignment, Windows::Devices::PointOfService::LineDisplayVerticalAlignment const& verticalAlignment) const;
        auto TryDisplayStorageFileBitmapAtCursorAsync(Windows::Storage::StorageFile const& bitmap, Windows::Devices::PointOfService::LineDisplayHorizontalAlignment const& horizontalAlignment, Windows::Devices::PointOfService::LineDisplayVerticalAlignment const& verticalAlignment, int32_t widthInPixels) const;
        auto TryDisplayStorageFileBitmapAtPointAsync(Windows::Storage::StorageFile const& bitmap, Windows::Foundation::Point const& offsetInPixels) const;
        auto TryDisplayStorageFileBitmapAtPointAsync(Windows::Storage::StorageFile const& bitmap, Windows::Foundation::Point const& offsetInPixels, int32_t widthInPixels) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ILineDisplayWindow2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ILineDisplayWindow2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IMagneticStripeReader
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto Capabilities() const;
        [[nodiscard]] auto SupportedCardTypes() const;
        [[nodiscard]] auto DeviceAuthenticationProtocol() const;
        auto CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel const& level) const;
        auto ClaimReaderAsync() const;
        auto RetrieveStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const;
        auto GetErrorReportingType() const;
        auto StatusUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::MagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs> const& handler) const;
        using StatusUpdated_revoker = impl::event_revoker<Windows::Devices::PointOfService::IMagneticStripeReader, &impl::abi_t<Windows::Devices::PointOfService::IMagneticStripeReader>::remove_StatusUpdated>;
        StatusUpdated_revoker StatusUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::MagneticStripeReader, Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs> const& handler) const;
        auto StatusUpdated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReader>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReader<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs
    {
        [[nodiscard]] auto Report() const;
        [[nodiscard]] auto LicenseNumber() const;
        [[nodiscard]] auto ExpirationDate() const;
        [[nodiscard]] auto Restrictions() const;
        [[nodiscard]] auto Class() const;
        [[nodiscard]] auto Endorsements() const;
        [[nodiscard]] auto BirthDate() const;
        [[nodiscard]] auto FirstName() const;
        [[nodiscard]] auto Surname() const;
        [[nodiscard]] auto Suffix() const;
        [[nodiscard]] auto Gender() const;
        [[nodiscard]] auto HairColor() const;
        [[nodiscard]] auto EyeColor() const;
        [[nodiscard]] auto Height() const;
        [[nodiscard]] auto Weight() const;
        [[nodiscard]] auto Address() const;
        [[nodiscard]] auto City() const;
        [[nodiscard]] auto State() const;
        [[nodiscard]] auto PostalCode() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderAamvaCardDataReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderAamvaCardDataReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderBankCardDataReceivedEventArgs
    {
        [[nodiscard]] auto Report() const;
        [[nodiscard]] auto AccountNumber() const;
        [[nodiscard]] auto ExpirationDate() const;
        [[nodiscard]] auto ServiceCode() const;
        [[nodiscard]] auto Title() const;
        [[nodiscard]] auto FirstName() const;
        [[nodiscard]] auto MiddleInitial() const;
        [[nodiscard]] auto Surname() const;
        [[nodiscard]] auto Suffix() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderBankCardDataReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderBankCardDataReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderCapabilities
    {
        [[nodiscard]] auto CardAuthentication() const;
        [[nodiscard]] auto SupportedEncryptionAlgorithms() const;
        [[nodiscard]] auto AuthenticationLevel() const;
        [[nodiscard]] auto IsIsoSupported() const;
        [[nodiscard]] auto IsJisOneSupported() const;
        [[nodiscard]] auto IsJisTwoSupported() const;
        [[nodiscard]] auto PowerReportingType() const;
        [[nodiscard]] auto IsStatisticsReportingSupported() const;
        [[nodiscard]] auto IsStatisticsUpdatingSupported() const;
        [[nodiscard]] auto IsTrackDataMaskingSupported() const;
        [[nodiscard]] auto IsTransmitSentinelsSupported() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderCapabilities>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderCardTypesStatics
    {
        [[nodiscard]] auto Unknown() const;
        [[nodiscard]] auto Bank() const;
        [[nodiscard]] auto Aamva() const;
        [[nodiscard]] auto ExtendedBase() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderCardTypesStatics>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderCardTypesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderEncryptionAlgorithmsStatics
    {
        [[nodiscard]] auto None() const;
        [[nodiscard]] auto TripleDesDukpt() const;
        [[nodiscard]] auto ExtendedBase() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderEncryptionAlgorithmsStatics>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderEncryptionAlgorithmsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderErrorOccurredEventArgs
    {
        [[nodiscard]] auto Track1Status() const;
        [[nodiscard]] auto Track2Status() const;
        [[nodiscard]] auto Track3Status() const;
        [[nodiscard]] auto Track4Status() const;
        [[nodiscard]] auto ErrorData() const;
        [[nodiscard]] auto PartialInputData() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderErrorOccurredEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderErrorOccurredEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderReport
    {
        [[nodiscard]] auto CardType() const;
        [[nodiscard]] auto Track1() const;
        [[nodiscard]] auto Track2() const;
        [[nodiscard]] auto Track3() const;
        [[nodiscard]] auto Track4() const;
        [[nodiscard]] auto Properties() const;
        [[nodiscard]] auto CardAuthenticationData() const;
        [[nodiscard]] auto CardAuthenticationDataLength() const;
        [[nodiscard]] auto AdditionalSecurityInformation() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderReport>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderReport<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderStatics
    {
        auto GetDefaultAsync() const;
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto GetDeviceSelector() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderStatics>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderStatics2
    {
        auto GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderStatusUpdatedEventArgs
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ExtendedStatus() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderStatusUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderStatusUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderTrackData
    {
        [[nodiscard]] auto Data() const;
        [[nodiscard]] auto DiscretionaryData() const;
        [[nodiscard]] auto EncryptedData() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderTrackData>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderTrackData<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs
    {
        [[nodiscard]] auto Report() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IMagneticStripeReaderVendorSpecificCardDataReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IPosPrinter
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto Capabilities() const;
        [[nodiscard]] auto SupportedCharacterSets() const;
        [[nodiscard]] auto SupportedTypeFaces() const;
        [[nodiscard]] auto Status() const;
        auto ClaimPrinterAsync() const;
        auto CheckHealthAsync(Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel const& level) const;
        auto GetStatisticsAsync(param::async_iterable<hstring> const& statisticsCategories) const;
        auto StatusUpdated(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::PosPrinter, Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs> const& handler) const;
        using StatusUpdated_revoker = impl::event_revoker<Windows::Devices::PointOfService::IPosPrinter, &impl::abi_t<Windows::Devices::PointOfService::IPosPrinter>::remove_StatusUpdated>;
        StatusUpdated_revoker StatusUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::PosPrinter, Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs> const& handler) const;
        auto StatusUpdated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::PointOfService::IPosPrinter>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinter<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IPosPrinter2
    {
        [[nodiscard]] auto SupportedBarcodeSymbologies() const;
        auto GetFontProperty(param::hstring const& typeface) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IPosPrinter2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinter2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IPosPrinterCapabilities
    {
        [[nodiscard]] auto PowerReportingType() const;
        [[nodiscard]] auto IsStatisticsReportingSupported() const;
        [[nodiscard]] auto IsStatisticsUpdatingSupported() const;
        [[nodiscard]] auto DefaultCharacterSet() const;
        [[nodiscard]] auto HasCoverSensor() const;
        [[nodiscard]] auto CanMapCharacterSet() const;
        [[nodiscard]] auto IsTransactionSupported() const;
        [[nodiscard]] auto Receipt() const;
        [[nodiscard]] auto Slip() const;
        [[nodiscard]] auto Journal() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IPosPrinterCapabilities>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinterCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IPosPrinterCharacterSetIdsStatics
    {
        [[nodiscard]] auto Utf16LE() const;
        [[nodiscard]] auto Ascii() const;
        [[nodiscard]] auto Ansi() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IPosPrinterCharacterSetIdsStatics>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinterCharacterSetIdsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IPosPrinterFontProperty
    {
        [[nodiscard]] auto TypeFace() const;
        [[nodiscard]] auto IsScalableToAnySize() const;
        [[nodiscard]] auto CharacterSizes() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IPosPrinterFontProperty>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinterFontProperty<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IPosPrinterJob
    {
        auto Print(param::hstring const& data) const;
        auto PrintLine(param::hstring const& data) const;
        auto PrintLine() const;
        auto ExecuteAsync() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IPosPrinterJob>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinterJob<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IPosPrinterPrintOptions
    {
        [[nodiscard]] auto TypeFace() const;
        auto TypeFace(param::hstring const& value) const;
        [[nodiscard]] auto CharacterHeight() const;
        auto CharacterHeight(uint32_t value) const;
        [[nodiscard]] auto Bold() const;
        auto Bold(bool value) const;
        [[nodiscard]] auto Italic() const;
        auto Italic(bool value) const;
        [[nodiscard]] auto Underline() const;
        auto Underline(bool value) const;
        [[nodiscard]] auto ReverseVideo() const;
        auto ReverseVideo(bool value) const;
        [[nodiscard]] auto Strikethrough() const;
        auto Strikethrough(bool value) const;
        [[nodiscard]] auto Superscript() const;
        auto Superscript(bool value) const;
        [[nodiscard]] auto Subscript() const;
        auto Subscript(bool value) const;
        [[nodiscard]] auto DoubleWide() const;
        auto DoubleWide(bool value) const;
        [[nodiscard]] auto DoubleHigh() const;
        auto DoubleHigh(bool value) const;
        [[nodiscard]] auto Alignment() const;
        auto Alignment(Windows::Devices::PointOfService::PosPrinterAlignment const& value) const;
        [[nodiscard]] auto CharacterSet() const;
        auto CharacterSet(uint32_t value) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IPosPrinterPrintOptions>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinterPrintOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IPosPrinterReleaseDeviceRequestedEventArgs
    {
    };
    template <> struct consume<Windows::Devices::PointOfService::IPosPrinterReleaseDeviceRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinterReleaseDeviceRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IPosPrinterStatics
    {
        auto GetDefaultAsync() const;
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto GetDeviceSelector() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IPosPrinterStatics>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IPosPrinterStatics2
    {
        auto GetDeviceSelector(Windows::Devices::PointOfService::PosConnectionTypes const& connectionTypes) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IPosPrinterStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinterStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IPosPrinterStatus
    {
        [[nodiscard]] auto StatusKind() const;
        [[nodiscard]] auto ExtendedStatus() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IPosPrinterStatus>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinterStatus<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IPosPrinterStatusUpdatedEventArgs
    {
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IPosPrinterStatusUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IPosPrinterStatusUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IReceiptOrSlipJob
    {
        auto SetBarcodeRotation(Windows::Devices::PointOfService::PosPrinterRotation const& value) const;
        auto SetPrintRotation(Windows::Devices::PointOfService::PosPrinterRotation const& value, bool includeBitmaps) const;
        auto SetPrintArea(Windows::Foundation::Rect const& value) const;
        auto SetBitmap(uint32_t bitmapNumber, Windows::Graphics::Imaging::BitmapFrame const& bitmap, Windows::Devices::PointOfService::PosPrinterAlignment const& alignment) const;
        auto SetBitmap(uint32_t bitmapNumber, Windows::Graphics::Imaging::BitmapFrame const& bitmap, Windows::Devices::PointOfService::PosPrinterAlignment const& alignment, uint32_t width) const;
        auto SetCustomAlignedBitmap(uint32_t bitmapNumber, Windows::Graphics::Imaging::BitmapFrame const& bitmap, uint32_t alignmentDistance) const;
        auto SetCustomAlignedBitmap(uint32_t bitmapNumber, Windows::Graphics::Imaging::BitmapFrame const& bitmap, uint32_t alignmentDistance, uint32_t width) const;
        auto PrintSavedBitmap(uint32_t bitmapNumber) const;
        auto DrawRuledLine(param::hstring const& positionList, Windows::Devices::PointOfService::PosPrinterLineDirection const& lineDirection, uint32_t lineWidth, Windows::Devices::PointOfService::PosPrinterLineStyle const& lineStyle, uint32_t lineColor) const;
        auto PrintBarcode(param::hstring const& data, uint32_t symbology, uint32_t height, uint32_t width, Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition const& textPosition, Windows::Devices::PointOfService::PosPrinterAlignment const& alignment) const;
        auto PrintBarcodeCustomAlign(param::hstring const& data, uint32_t symbology, uint32_t height, uint32_t width, Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition const& textPosition, uint32_t alignmentDistance) const;
        auto PrintBitmap(Windows::Graphics::Imaging::BitmapFrame const& bitmap, Windows::Devices::PointOfService::PosPrinterAlignment const& alignment) const;
        auto PrintBitmap(Windows::Graphics::Imaging::BitmapFrame const& bitmap, Windows::Devices::PointOfService::PosPrinterAlignment const& alignment, uint32_t width) const;
        auto PrintCustomAlignedBitmap(Windows::Graphics::Imaging::BitmapFrame const& bitmap, uint32_t alignmentDistance) const;
        auto PrintCustomAlignedBitmap(Windows::Graphics::Imaging::BitmapFrame const& bitmap, uint32_t alignmentDistance, uint32_t width) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IReceiptOrSlipJob>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IReceiptOrSlipJob<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IReceiptPrintJob
    {
        auto MarkFeed(Windows::Devices::PointOfService::PosPrinterMarkFeedKind const& kind) const;
        auto CutPaper(double percentage) const;
        auto CutPaper() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IReceiptPrintJob>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IReceiptPrintJob<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IReceiptPrintJob2
    {
        auto StampPaper() const;
        auto Print(param::hstring const& data, Windows::Devices::PointOfService::PosPrinterPrintOptions const& printOptions) const;
        auto FeedPaperByLine(int32_t lineCount) const;
        auto FeedPaperByMapModeUnit(int32_t distance) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IReceiptPrintJob2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IReceiptPrintJob2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IReceiptPrinterCapabilities
    {
        [[nodiscard]] auto CanCutPaper() const;
        [[nodiscard]] auto IsStampSupported() const;
        [[nodiscard]] auto MarkFeedCapabilities() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IReceiptPrinterCapabilities>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IReceiptPrinterCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IReceiptPrinterCapabilities2
    {
        [[nodiscard]] auto IsReverseVideoSupported() const;
        [[nodiscard]] auto IsStrikethroughSupported() const;
        [[nodiscard]] auto IsSuperscriptSupported() const;
        [[nodiscard]] auto IsSubscriptSupported() const;
        [[nodiscard]] auto IsReversePaperFeedByLineSupported() const;
        [[nodiscard]] auto IsReversePaperFeedByMapModeUnitSupported() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IReceiptPrinterCapabilities2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IReceiptPrinterCapabilities2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ISlipPrintJob
    {
        auto Print(param::hstring const& data, Windows::Devices::PointOfService::PosPrinterPrintOptions const& printOptions) const;
        auto FeedPaperByLine(int32_t lineCount) const;
        auto FeedPaperByMapModeUnit(int32_t distance) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ISlipPrintJob>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ISlipPrintJob<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ISlipPrinterCapabilities
    {
        [[nodiscard]] auto IsFullLengthSupported() const;
        [[nodiscard]] auto IsBothSidesPrintingSupported() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ISlipPrinterCapabilities>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ISlipPrinterCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_ISlipPrinterCapabilities2
    {
        [[nodiscard]] auto IsReverseVideoSupported() const;
        [[nodiscard]] auto IsStrikethroughSupported() const;
        [[nodiscard]] auto IsSuperscriptSupported() const;
        [[nodiscard]] auto IsSubscriptSupported() const;
        [[nodiscard]] auto IsReversePaperFeedByLineSupported() const;
        [[nodiscard]] auto IsReversePaperFeedByMapModeUnitSupported() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::ISlipPrinterCapabilities2>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_ISlipPrinterCapabilities2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IUnifiedPosErrorData
    {
        [[nodiscard]] auto Message() const;
        [[nodiscard]] auto Severity() const;
        [[nodiscard]] auto Reason() const;
        [[nodiscard]] auto ExtendedReason() const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IUnifiedPosErrorData>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IUnifiedPosErrorData<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_PointOfService_IUnifiedPosErrorDataFactory
    {
        auto CreateInstance(param::hstring const& message, Windows::Devices::PointOfService::UnifiedPosErrorSeverity const& severity, Windows::Devices::PointOfService::UnifiedPosErrorReason const& reason, uint32_t extendedReason) const;
    };
    template <> struct consume<Windows::Devices::PointOfService::IUnifiedPosErrorDataFactory>
    {
        template <typename D> using type = consume_Windows_Devices_PointOfService_IUnifiedPosErrorDataFactory<D>;
    };
    struct struct_Windows_Devices_PointOfService_SizeUInt32
    {
        uint32_t Width;
        uint32_t Height;
    };
    template <> struct abi<Windows::Devices::PointOfService::SizeUInt32>
    {
        using type = struct_Windows_Devices_PointOfService_SizeUInt32;
    };
}
#endif
