// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Wallet_0_H
#define WINRT_Windows_ApplicationModel_Wallet_0_H
namespace winrt::Windows::Devices::Geolocation
{
    struct BasicGeoposition;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename T> struct IReference;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
namespace winrt::Windows::UI
{
    struct Color;
}
namespace winrt::Windows::ApplicationModel::Wallet
{
    enum class WalletActionKind : int32_t
    {
        OpenItem = 0,
        Transaction = 1,
        MoreTransactions = 2,
        Message = 3,
        Verb = 4,
    };
    enum class WalletBarcodeSymbology : int32_t
    {
        Invalid = 0,
        Upca = 1,
        Upce = 2,
        Ean13 = 3,
        Ean8 = 4,
        Itf = 5,
        Code39 = 6,
        Code128 = 7,
        Qr = 8,
        Pdf417 = 9,
        Aztec = 10,
        Custom = 100000,
    };
    enum class WalletDetailViewPosition : int32_t
    {
        Hidden = 0,
        HeaderField1 = 1,
        HeaderField2 = 2,
        PrimaryField1 = 3,
        PrimaryField2 = 4,
        SecondaryField1 = 5,
        SecondaryField2 = 6,
        SecondaryField3 = 7,
        SecondaryField4 = 8,
        SecondaryField5 = 9,
        CenterField1 = 10,
        FooterField1 = 11,
        FooterField2 = 12,
        FooterField3 = 13,
        FooterField4 = 14,
    };
    enum class WalletItemKind : int32_t
    {
        Invalid = 0,
        Deal = 1,
        General = 2,
        PaymentInstrument = 3,
        Ticket = 4,
        BoardingPass = 5,
        MembershipCard = 6,
    };
    enum class WalletSummaryViewPosition : int32_t
    {
        Hidden = 0,
        Field1 = 1,
        Field2 = 2,
    };
    struct IWalletBarcode;
    struct IWalletBarcodeFactory;
    struct IWalletItem;
    struct IWalletItemCustomProperty;
    struct IWalletItemCustomPropertyFactory;
    struct IWalletItemFactory;
    struct IWalletItemStore;
    struct IWalletItemStore2;
    struct IWalletManagerStatics;
    struct IWalletRelevantLocation;
    struct IWalletTransaction;
    struct IWalletVerb;
    struct IWalletVerbFactory;
    struct WalletBarcode;
    struct WalletItem;
    struct WalletItemCustomProperty;
    struct WalletItemStore;
    struct WalletManager;
    struct WalletRelevantLocation;
    struct WalletTransaction;
    struct WalletVerb;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Wallet::IWalletBarcode>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::IWalletBarcodeFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::IWalletItem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::IWalletItemCustomProperty>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::IWalletItemCustomPropertyFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::IWalletItemFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::IWalletItemStore>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::IWalletItemStore2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::IWalletManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::IWalletRelevantLocation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::IWalletTransaction>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::IWalletVerb>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::IWalletVerbFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::WalletBarcode>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::WalletItem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::WalletItemCustomProperty>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::WalletItemStore>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::WalletManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::WalletRelevantLocation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::WalletTransaction>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::WalletVerb>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::WalletActionKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::WalletBarcodeSymbology>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::WalletDetailViewPosition>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::WalletItemKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Wallet::WalletSummaryViewPosition>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::Wallet::IWalletBarcode>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.IWalletBarcode" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::IWalletBarcodeFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.IWalletBarcodeFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::IWalletItem>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.IWalletItem" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::IWalletItemCustomProperty>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.IWalletItemCustomProperty" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::IWalletItemCustomPropertyFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.IWalletItemCustomPropertyFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::IWalletItemFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.IWalletItemFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::IWalletItemStore>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.IWalletItemStore" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::IWalletItemStore2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.IWalletItemStore2" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::IWalletManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.IWalletManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::IWalletRelevantLocation>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.IWalletRelevantLocation" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::IWalletTransaction>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.IWalletTransaction" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::IWalletVerb>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.IWalletVerb" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::IWalletVerbFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.IWalletVerbFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::WalletBarcode>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.WalletBarcode" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::WalletItem>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.WalletItem" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::WalletItemCustomProperty>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.WalletItemCustomProperty" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::WalletItemStore>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.WalletItemStore" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::WalletManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.WalletManager" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::WalletRelevantLocation>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.WalletRelevantLocation" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::WalletTransaction>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.WalletTransaction" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::WalletVerb>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.WalletVerb" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::WalletActionKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.WalletActionKind" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::WalletBarcodeSymbology>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.WalletBarcodeSymbology" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::WalletDetailViewPosition>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.WalletDetailViewPosition" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::WalletItemKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.WalletItemKind" };
    };
    template <> struct name<Windows::ApplicationModel::Wallet::WalletSummaryViewPosition>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Wallet.WalletSummaryViewPosition" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Wallet::IWalletBarcode>
    {
        static constexpr guid value{ 0x4F857B29,0xDE80,0x4EA4,{ 0xA1,0xCD,0x81,0xCD,0x08,0x4D,0xAC,0x27 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Wallet::IWalletBarcodeFactory>
    {
        static constexpr guid value{ 0x30117161,0xED9C,0x469E,{ 0xBB,0xFD,0x30,0x6C,0x95,0xEA,0x71,0x08 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Wallet::IWalletItem>
    {
        static constexpr guid value{ 0x20B54BE8,0x118D,0x4EC4,{ 0x99,0x6C,0xB9,0x63,0xE7,0xBD,0x3E,0x74 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Wallet::IWalletItemCustomProperty>
    {
        static constexpr guid value{ 0xB94B40F3,0xFA00,0x40FD,{ 0x98,0xDC,0x9D,0xE4,0x66,0x97,0xF1,0xE7 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Wallet::IWalletItemCustomPropertyFactory>
    {
        static constexpr guid value{ 0xD0046A44,0x61A1,0x41AA,{ 0xB2,0x59,0xA5,0x61,0x0A,0xB5,0xD5,0x75 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Wallet::IWalletItemFactory>
    {
        static constexpr guid value{ 0x53E27470,0x4F0B,0x4A3E,{ 0x99,0xE5,0x0B,0xBB,0x1E,0xAB,0x38,0xD4 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Wallet::IWalletItemStore>
    {
        static constexpr guid value{ 0x7160484B,0x6D49,0x48F8,{ 0x91,0xA9,0x40,0xA1,0xD0,0xF1,0x3E,0xF4 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Wallet::IWalletItemStore2>
    {
        static constexpr guid value{ 0x65E682F0,0x7009,0x4A15,{ 0xBD,0x54,0x4F,0xFF,0x37,0x9B,0xFF,0xE2 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Wallet::IWalletManagerStatics>
    {
        static constexpr guid value{ 0x5111D6B8,0xC9A4,0x4C64,{ 0xB4,0xDD,0xE1,0xE5,0x48,0x00,0x1C,0x0D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Wallet::IWalletRelevantLocation>
    {
        static constexpr guid value{ 0x9FD8782A,0xE3F9,0x4DE1,{ 0xBA,0xB3,0xBB,0x19,0x2E,0x46,0xB3,0xF3 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Wallet::IWalletTransaction>
    {
        static constexpr guid value{ 0x40E1E940,0x2606,0x4519,{ 0x81,0xCB,0xBF,0xF1,0xC6,0x0D,0x1F,0x79 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Wallet::IWalletVerb>
    {
        static constexpr guid value{ 0x17B826D6,0xE3C1,0x4C74,{ 0x8A,0x94,0x21,0x7A,0xAD,0xBC,0x48,0x84 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Wallet::IWalletVerbFactory>
    {
        static constexpr guid value{ 0x76012771,0xBE58,0x4D5E,{ 0x83,0xED,0x58,0xB1,0x66,0x9C,0x7A,0xD9 } };
    };
    template <> struct default_interface<Windows::ApplicationModel::Wallet::WalletBarcode>
    {
        using type = Windows::ApplicationModel::Wallet::IWalletBarcode;
    };
    template <> struct default_interface<Windows::ApplicationModel::Wallet::WalletItem>
    {
        using type = Windows::ApplicationModel::Wallet::IWalletItem;
    };
    template <> struct default_interface<Windows::ApplicationModel::Wallet::WalletItemCustomProperty>
    {
        using type = Windows::ApplicationModel::Wallet::IWalletItemCustomProperty;
    };
    template <> struct default_interface<Windows::ApplicationModel::Wallet::WalletItemStore>
    {
        using type = Windows::ApplicationModel::Wallet::IWalletItemStore;
    };
    template <> struct default_interface<Windows::ApplicationModel::Wallet::WalletRelevantLocation>
    {
        using type = Windows::ApplicationModel::Wallet::IWalletRelevantLocation;
    };
    template <> struct default_interface<Windows::ApplicationModel::Wallet::WalletTransaction>
    {
        using type = Windows::ApplicationModel::Wallet::IWalletTransaction;
    };
    template <> struct default_interface<Windows::ApplicationModel::Wallet::WalletVerb>
    {
        using type = Windows::ApplicationModel::Wallet::IWalletVerb;
    };
    template <> struct abi<Windows::ApplicationModel::Wallet::IWalletBarcode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Symbology(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall GetImageAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Wallet::IWalletBarcodeFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWalletBarcode(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCustomWalletBarcode(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Wallet::IWalletItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsAcknowledged(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsAcknowledged(bool) noexcept = 0;
            virtual int32_t __stdcall get_IssuerDisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_IssuerDisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_LastUpdated(void**) noexcept = 0;
            virtual int32_t __stdcall put_LastUpdated(void*) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Barcode(void**) noexcept = 0;
            virtual int32_t __stdcall put_Barcode(void*) noexcept = 0;
            virtual int32_t __stdcall get_ExpirationDate(void**) noexcept = 0;
            virtual int32_t __stdcall put_ExpirationDate(void*) noexcept = 0;
            virtual int32_t __stdcall get_Logo159x159(void**) noexcept = 0;
            virtual int32_t __stdcall put_Logo159x159(void*) noexcept = 0;
            virtual int32_t __stdcall get_Logo336x336(void**) noexcept = 0;
            virtual int32_t __stdcall put_Logo336x336(void*) noexcept = 0;
            virtual int32_t __stdcall get_Logo99x99(void**) noexcept = 0;
            virtual int32_t __stdcall put_Logo99x99(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayMessage(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayMessage(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsDisplayMessageLaunchable(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsDisplayMessageLaunchable(bool) noexcept = 0;
            virtual int32_t __stdcall get_LogoText(void**) noexcept = 0;
            virtual int32_t __stdcall put_LogoText(void*) noexcept = 0;
            virtual int32_t __stdcall get_HeaderColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_HeaderColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_BodyColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_BodyColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_HeaderFontColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_HeaderFontColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_BodyFontColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_BodyFontColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_HeaderBackgroundImage(void**) noexcept = 0;
            virtual int32_t __stdcall put_HeaderBackgroundImage(void*) noexcept = 0;
            virtual int32_t __stdcall get_BodyBackgroundImage(void**) noexcept = 0;
            virtual int32_t __stdcall put_BodyBackgroundImage(void*) noexcept = 0;
            virtual int32_t __stdcall get_LogoImage(void**) noexcept = 0;
            virtual int32_t __stdcall put_LogoImage(void*) noexcept = 0;
            virtual int32_t __stdcall get_PromotionalImage(void**) noexcept = 0;
            virtual int32_t __stdcall put_PromotionalImage(void*) noexcept = 0;
            virtual int32_t __stdcall get_RelevantDate(void**) noexcept = 0;
            virtual int32_t __stdcall put_RelevantDate(void*) noexcept = 0;
            virtual int32_t __stdcall get_RelevantDateDisplayMessage(void**) noexcept = 0;
            virtual int32_t __stdcall put_RelevantDateDisplayMessage(void*) noexcept = 0;
            virtual int32_t __stdcall get_TransactionHistory(void**) noexcept = 0;
            virtual int32_t __stdcall get_RelevantLocations(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsMoreTransactionHistoryLaunchable(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsMoreTransactionHistoryLaunchable(bool) noexcept = 0;
            virtual int32_t __stdcall get_DisplayProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_Verbs(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Wallet::IWalletItemCustomProperty>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
            virtual int32_t __stdcall get_AutoDetectLinks(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AutoDetectLinks(bool) noexcept = 0;
            virtual int32_t __stdcall get_DetailViewPosition(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DetailViewPosition(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SummaryViewPosition(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SummaryViewPosition(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Wallet::IWalletItemCustomPropertyFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWalletItemCustomProperty(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Wallet::IWalletItemFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWalletItem(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Wallet::IWalletItemStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ClearAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetWalletItemAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetItemsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetItemsWithKindAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ImportItemAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ShowItemAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Wallet::IWalletItemStore2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ItemsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ItemsChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Wallet::IWalletManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestStoreAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Wallet::IWalletRelevantLocation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(struct struct_Windows_Devices_Geolocation_BasicGeoposition*) noexcept = 0;
            virtual int32_t __stdcall put_Position(struct struct_Windows_Devices_Geolocation_BasicGeoposition) noexcept = 0;
            virtual int32_t __stdcall get_DisplayMessage(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayMessage(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Wallet::IWalletTransaction>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayAmount(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayAmount(void*) noexcept = 0;
            virtual int32_t __stdcall get_IgnoreTimeOfDay(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IgnoreTimeOfDay(bool) noexcept = 0;
            virtual int32_t __stdcall get_DisplayLocation(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayLocation(void*) noexcept = 0;
            virtual int32_t __stdcall get_TransactionDate(void**) noexcept = 0;
            virtual int32_t __stdcall put_TransactionDate(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsLaunchable(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsLaunchable(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Wallet::IWalletVerb>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Wallet::IWalletVerbFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWalletVerb(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Wallet_IWalletBarcode
    {
        [[nodiscard]] auto Symbology() const;
        [[nodiscard]] auto Value() const;
        auto GetImageAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Wallet::IWalletBarcode>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Wallet_IWalletBarcode<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Wallet_IWalletBarcodeFactory
    {
        auto CreateWalletBarcode(Windows::ApplicationModel::Wallet::WalletBarcodeSymbology const& symbology, param::hstring const& value) const;
        auto CreateCustomWalletBarcode(Windows::Storage::Streams::IRandomAccessStreamReference const& streamToBarcodeImage) const;
    };
    template <> struct consume<Windows::ApplicationModel::Wallet::IWalletBarcodeFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Wallet_IWalletBarcodeFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Wallet_IWalletItem
    {
        [[nodiscard]] auto DisplayName() const;
        auto DisplayName(param::hstring const& value) const;
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto IsAcknowledged() const;
        auto IsAcknowledged(bool value) const;
        [[nodiscard]] auto IssuerDisplayName() const;
        auto IssuerDisplayName(param::hstring const& value) const;
        [[nodiscard]] auto LastUpdated() const;
        auto LastUpdated(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto Barcode() const;
        auto Barcode(Windows::ApplicationModel::Wallet::WalletBarcode const& value) const;
        [[nodiscard]] auto ExpirationDate() const;
        auto ExpirationDate(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] auto Logo159x159() const;
        auto Logo159x159(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] auto Logo336x336() const;
        auto Logo336x336(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] auto Logo99x99() const;
        auto Logo99x99(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] auto DisplayMessage() const;
        auto DisplayMessage(param::hstring const& value) const;
        [[nodiscard]] auto IsDisplayMessageLaunchable() const;
        auto IsDisplayMessageLaunchable(bool value) const;
        [[nodiscard]] auto LogoText() const;
        auto LogoText(param::hstring const& value) const;
        [[nodiscard]] auto HeaderColor() const;
        auto HeaderColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto BodyColor() const;
        auto BodyColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto HeaderFontColor() const;
        auto HeaderFontColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto BodyFontColor() const;
        auto BodyFontColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto HeaderBackgroundImage() const;
        auto HeaderBackgroundImage(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] auto BodyBackgroundImage() const;
        auto BodyBackgroundImage(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] auto LogoImage() const;
        auto LogoImage(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] auto PromotionalImage() const;
        auto PromotionalImage(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] auto RelevantDate() const;
        auto RelevantDate(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] auto RelevantDateDisplayMessage() const;
        auto RelevantDateDisplayMessage(param::hstring const& value) const;
        [[nodiscard]] auto TransactionHistory() const;
        [[nodiscard]] auto RelevantLocations() const;
        [[nodiscard]] auto IsMoreTransactionHistoryLaunchable() const;
        auto IsMoreTransactionHistoryLaunchable(bool value) const;
        [[nodiscard]] auto DisplayProperties() const;
        [[nodiscard]] auto Verbs() const;
    };
    template <> struct consume<Windows::ApplicationModel::Wallet::IWalletItem>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Wallet_IWalletItem<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Wallet_IWalletItemCustomProperty
    {
        [[nodiscard]] auto Name() const;
        auto Name(param::hstring const& value) const;
        [[nodiscard]] auto Value() const;
        auto Value(param::hstring const& value) const;
        [[nodiscard]] auto AutoDetectLinks() const;
        auto AutoDetectLinks(bool value) const;
        [[nodiscard]] auto DetailViewPosition() const;
        auto DetailViewPosition(Windows::ApplicationModel::Wallet::WalletDetailViewPosition const& value) const;
        [[nodiscard]] auto SummaryViewPosition() const;
        auto SummaryViewPosition(Windows::ApplicationModel::Wallet::WalletSummaryViewPosition const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Wallet::IWalletItemCustomProperty>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Wallet_IWalletItemCustomProperty<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Wallet_IWalletItemCustomPropertyFactory
    {
        auto CreateWalletItemCustomProperty(param::hstring const& name, param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Wallet::IWalletItemCustomPropertyFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Wallet_IWalletItemCustomPropertyFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Wallet_IWalletItemFactory
    {
        auto CreateWalletItem(Windows::ApplicationModel::Wallet::WalletItemKind const& kind, param::hstring const& displayName) const;
    };
    template <> struct consume<Windows::ApplicationModel::Wallet::IWalletItemFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Wallet_IWalletItemFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Wallet_IWalletItemStore
    {
        auto AddAsync(param::hstring const& id, Windows::ApplicationModel::Wallet::WalletItem const& item) const;
        auto ClearAsync() const;
        auto GetWalletItemAsync(param::hstring const& id) const;
        auto GetItemsAsync() const;
        auto GetItemsAsync(Windows::ApplicationModel::Wallet::WalletItemKind const& kind) const;
        auto ImportItemAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& stream) const;
        auto DeleteAsync(param::hstring const& id) const;
        auto ShowAsync() const;
        auto ShowAsync(param::hstring const& id) const;
        auto UpdateAsync(Windows::ApplicationModel::Wallet::WalletItem const& item) const;
    };
    template <> struct consume<Windows::ApplicationModel::Wallet::IWalletItemStore>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Wallet_IWalletItemStore<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Wallet_IWalletItemStore2
    {
        auto ItemsChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::WalletItemStore, Windows::Foundation::IInspectable> const& handler) const;
        using ItemsChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Wallet::IWalletItemStore2, &impl::abi_t<Windows::ApplicationModel::Wallet::IWalletItemStore2>::remove_ItemsChanged>;
        ItemsChanged_revoker ItemsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Wallet::WalletItemStore, Windows::Foundation::IInspectable> const& handler) const;
        auto ItemsChanged(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Wallet::IWalletItemStore2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Wallet_IWalletItemStore2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Wallet_IWalletManagerStatics
    {
        auto RequestStoreAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Wallet::IWalletManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Wallet_IWalletManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Wallet_IWalletRelevantLocation
    {
        [[nodiscard]] auto Position() const;
        auto Position(Windows::Devices::Geolocation::BasicGeoposition const& value) const;
        [[nodiscard]] auto DisplayMessage() const;
        auto DisplayMessage(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Wallet::IWalletRelevantLocation>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Wallet_IWalletRelevantLocation<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Wallet_IWalletTransaction
    {
        [[nodiscard]] auto Description() const;
        auto Description(param::hstring const& value) const;
        [[nodiscard]] auto DisplayAmount() const;
        auto DisplayAmount(param::hstring const& value) const;
        [[nodiscard]] auto IgnoreTimeOfDay() const;
        auto IgnoreTimeOfDay(bool value) const;
        [[nodiscard]] auto DisplayLocation() const;
        auto DisplayLocation(param::hstring const& value) const;
        [[nodiscard]] auto TransactionDate() const;
        auto TransactionDate(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] auto IsLaunchable() const;
        auto IsLaunchable(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Wallet::IWalletTransaction>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Wallet_IWalletTransaction<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Wallet_IWalletVerb
    {
        [[nodiscard]] auto Name() const;
        auto Name(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Wallet::IWalletVerb>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Wallet_IWalletVerb<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Wallet_IWalletVerbFactory
    {
        auto CreateWalletVerb(param::hstring const& name) const;
    };
    template <> struct consume<Windows::ApplicationModel::Wallet::IWalletVerbFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Wallet_IWalletVerbFactory<D>;
    };
}
#endif
