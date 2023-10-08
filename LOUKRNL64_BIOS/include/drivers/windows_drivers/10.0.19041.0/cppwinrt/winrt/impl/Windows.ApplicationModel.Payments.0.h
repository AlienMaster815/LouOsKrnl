// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Payments_0_H
#define WINRT_Windows_ApplicationModel_Payments_0_H
namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    template <typename T> struct IVectorView;
    struct ValueSet;
}
namespace winrt::Windows::ApplicationModel::Payments
{
    enum class PaymentCanMakePaymentResultStatus : int32_t
    {
        Unknown = 0,
        Yes = 1,
        No = 2,
        NotAllowed = 3,
        UserNotSignedIn = 4,
        SpecifiedPaymentMethodIdsNotSupported = 5,
        NoQualifyingCardOnFile = 6,
    };
    enum class PaymentOptionPresence : int32_t
    {
        None = 0,
        Optional = 1,
        Required = 2,
    };
    enum class PaymentRequestChangeKind : int32_t
    {
        ShippingOption = 0,
        ShippingAddress = 1,
    };
    enum class PaymentRequestCompletionStatus : int32_t
    {
        Succeeded = 0,
        Failed = 1,
        Unknown = 2,
    };
    enum class PaymentRequestStatus : int32_t
    {
        Succeeded = 0,
        Failed = 1,
        Canceled = 2,
    };
    enum class PaymentShippingType : int32_t
    {
        Shipping = 0,
        Delivery = 1,
        Pickup = 2,
    };
    struct IPaymentAddress;
    struct IPaymentCanMakePaymentResult;
    struct IPaymentCanMakePaymentResultFactory;
    struct IPaymentCurrencyAmount;
    struct IPaymentCurrencyAmountFactory;
    struct IPaymentDetails;
    struct IPaymentDetailsFactory;
    struct IPaymentDetailsModifier;
    struct IPaymentDetailsModifierFactory;
    struct IPaymentItem;
    struct IPaymentItemFactory;
    struct IPaymentMediator;
    struct IPaymentMediator2;
    struct IPaymentMerchantInfo;
    struct IPaymentMerchantInfoFactory;
    struct IPaymentMethodData;
    struct IPaymentMethodDataFactory;
    struct IPaymentOptions;
    struct IPaymentRequest;
    struct IPaymentRequest2;
    struct IPaymentRequestChangedArgs;
    struct IPaymentRequestChangedResult;
    struct IPaymentRequestChangedResultFactory;
    struct IPaymentRequestFactory;
    struct IPaymentRequestFactory2;
    struct IPaymentRequestSubmitResult;
    struct IPaymentResponse;
    struct IPaymentShippingOption;
    struct IPaymentShippingOptionFactory;
    struct IPaymentToken;
    struct IPaymentTokenFactory;
    struct PaymentAddress;
    struct PaymentCanMakePaymentResult;
    struct PaymentCurrencyAmount;
    struct PaymentDetails;
    struct PaymentDetailsModifier;
    struct PaymentItem;
    struct PaymentMediator;
    struct PaymentMerchantInfo;
    struct PaymentMethodData;
    struct PaymentOptions;
    struct PaymentRequest;
    struct PaymentRequestChangedArgs;
    struct PaymentRequestChangedResult;
    struct PaymentRequestSubmitResult;
    struct PaymentResponse;
    struct PaymentShippingOption;
    struct PaymentToken;
    struct PaymentRequestChangedHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentAddress>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentDetailsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentDetailsModifier>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentItem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentItemFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentMediator>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentMediator2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentMerchantInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentMethodData>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentMethodDataFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentRequest2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentRequestChangedResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentRequestFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentRequestFactory2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentResponse>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentShippingOption>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentToken>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::IPaymentTokenFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentAddress>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentCurrencyAmount>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentDetailsModifier>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentItem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentMediator>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentMerchantInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentMethodData>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentRequestChangedArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentRequestChangedResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentResponse>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentShippingOption>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentToken>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentOptionPresence>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentRequestChangeKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentRequestStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentShippingType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler>
    {
        using type = delegate_category;
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentAddress>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentAddress" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentCanMakePaymentResult" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentCanMakePaymentResultFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentCurrencyAmount" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentCurrencyAmountFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentDetailsFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentDetailsFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentDetailsModifier>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentDetailsModifier" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentDetailsModifierFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentItem>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentItem" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentItemFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentItemFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentMediator>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentMediator" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentMediator2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentMediator2" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentMerchantInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentMerchantInfo" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentMerchantInfoFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentMethodData>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentMethodData" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentMethodDataFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentMethodDataFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentRequest2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentRequest2" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentRequestChangedArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentRequestChangedResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentRequestChangedResult" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentRequestChangedResultFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentRequestFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentRequestFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentRequestFactory2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentRequestFactory2" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentRequestSubmitResult" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentResponse>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentResponse" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentShippingOption>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentShippingOption" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentShippingOptionFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentToken>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentToken" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::IPaymentTokenFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentTokenFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentAddress>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentAddress" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentCanMakePaymentResult" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentCurrencyAmount>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentCurrencyAmount" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentDetailsModifier>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentDetailsModifier" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentItem>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentItem" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentMediator>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentMediator" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentMerchantInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentMerchantInfo" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentMethodData>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentMethodData" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentOptions>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentOptions" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentRequest>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentRequest" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentRequestChangedArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentRequestChangedArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentRequestChangedResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentRequestChangedResult" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentRequestSubmitResult" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentResponse>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentResponse" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentShippingOption>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentShippingOption" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentToken>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentToken" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentCanMakePaymentResultStatus" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentOptionPresence>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentOptionPresence" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentRequestChangeKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentRequestChangeKind" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentRequestCompletionStatus" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentRequestStatus>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentRequestStatus" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentShippingType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentShippingType" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentRequestChangedHandler" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentAddress>
    {
        static constexpr guid value{ 0x5F2264E9,0x6F3A,0x4166,{ 0xA0,0x18,0x0A,0x0B,0x06,0xBB,0x32,0xB5 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult>
    {
        static constexpr guid value{ 0x7696FE55,0xD5D3,0x4D3D,{ 0xB3,0x45,0x45,0x59,0x17,0x59,0xC5,0x10 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory>
    {
        static constexpr guid value{ 0xBBDCAA3E,0x7D49,0x4F69,{ 0xAA,0x53,0x2A,0x0F,0x81,0x64,0xB7,0xC9 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount>
    {
        static constexpr guid value{ 0xE3A3E9E0,0xB41F,0x4987,{ 0xBD,0xCB,0x07,0x13,0x31,0xF2,0xDA,0xA4 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>
    {
        static constexpr guid value{ 0x3257D338,0x140C,0x4575,{ 0x85,0x35,0xF7,0x73,0x17,0x8C,0x09,0xA7 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentDetails>
    {
        static constexpr guid value{ 0x53BB2D7D,0xE0EB,0x4053,{ 0x8E,0xAE,0xCE,0x7C,0x48,0xE0,0x29,0x45 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentDetailsFactory>
    {
        static constexpr guid value{ 0xCFE8AFEE,0xC0EA,0x4CA1,{ 0x8B,0xC7,0x6D,0xE6,0x7B,0x1F,0x37,0x63 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentDetailsModifier>
    {
        static constexpr guid value{ 0xBE1C7D65,0x4323,0x41D7,{ 0xB3,0x05,0xDF,0xCB,0x76,0x5F,0x69,0xDE } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>
    {
        static constexpr guid value{ 0x79005286,0x54DE,0x429C,{ 0x9E,0x4F,0x5D,0xCE,0x6E,0x10,0xEB,0xCE } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentItem>
    {
        static constexpr guid value{ 0x685AC88B,0x79B2,0x4B76,{ 0x9E,0x03,0xA8,0x76,0x22,0x3D,0xFE,0x72 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentItemFactory>
    {
        static constexpr guid value{ 0xC6AB7AD8,0x2503,0x4D1D,{ 0xA7,0x78,0x02,0xB2,0xE5,0x92,0x7B,0x2C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentMediator>
    {
        static constexpr guid value{ 0xFB0EE829,0xEC0C,0x449A,{ 0x83,0xDA,0x7A,0xE3,0x07,0x33,0x65,0xA2 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentMediator2>
    {
        static constexpr guid value{ 0xCEEF98F1,0xE407,0x4128,{ 0x8E,0x73,0xD9,0x3D,0x5F,0x82,0x27,0x86 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentMerchantInfo>
    {
        static constexpr guid value{ 0x63445050,0x0E94,0x4ED6,{ 0xAA,0xCB,0xE6,0x01,0x2B,0xD3,0x27,0xA7 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory>
    {
        static constexpr guid value{ 0x9E89CED3,0xCCB7,0x4167,{ 0xA8,0xEC,0xE1,0x0A,0xE9,0x6D,0xBC,0xD1 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentMethodData>
    {
        static constexpr guid value{ 0xD1D3CAF4,0xDE98,0x4129,{ 0xB1,0xB7,0xC3,0xAD,0x86,0x23,0x7B,0xF4 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentMethodDataFactory>
    {
        static constexpr guid value{ 0x8ADDD27F,0x9BAA,0x4A82,{ 0x83,0x42,0xA8,0x21,0x09,0x92,0xA3,0x6B } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentOptions>
    {
        static constexpr guid value{ 0xAAA30854,0x1F2B,0x4365,{ 0x82,0x51,0x01,0xB5,0x89,0x15,0xA5,0xBC } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentRequest>
    {
        static constexpr guid value{ 0xB74942E1,0xED7B,0x47EB,{ 0xBC,0x08,0x78,0xCC,0x5D,0x68,0x96,0xB6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentRequest2>
    {
        static constexpr guid value{ 0xB63CCFB5,0x5998,0x493E,{ 0xA0,0x4C,0x67,0x04,0x8A,0x50,0xF1,0x41 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs>
    {
        static constexpr guid value{ 0xC6145E44,0xCD8B,0x4BE4,{ 0xB5,0x55,0x27,0xC9,0x91,0x94,0xC0,0xC5 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentRequestChangedResult>
    {
        static constexpr guid value{ 0xDF699E5C,0x16C4,0x47AD,{ 0x94,0x01,0x84,0x40,0xEC,0x07,0x57,0xDB } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>
    {
        static constexpr guid value{ 0x08740F56,0x1D33,0x4431,{ 0x81,0x4B,0x67,0xEA,0x24,0xBF,0x21,0xDB } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentRequestFactory>
    {
        static constexpr guid value{ 0x3E8A79DC,0x6B74,0x42D3,{ 0xB1,0x03,0xF0,0xDE,0x35,0xFB,0x18,0x48 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentRequestFactory2>
    {
        static constexpr guid value{ 0xE6CE1325,0xA506,0x4372,{ 0xB7,0xEF,0x1A,0x03,0x1D,0x56,0x62,0xD1 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult>
    {
        static constexpr guid value{ 0x7B9C3912,0x30F2,0x4E90,{ 0xB2,0x49,0x8C,0xE7,0xD7,0x8F,0xFE,0x56 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentResponse>
    {
        static constexpr guid value{ 0xE1389457,0x8BD2,0x4888,{ 0x9F,0xA8,0x97,0x98,0x55,0x45,0x10,0x8E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentShippingOption>
    {
        static constexpr guid value{ 0x13372ADA,0x9753,0x4574,{ 0x89,0x66,0x93,0x14,0x5A,0x76,0xC7,0xF9 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>
    {
        static constexpr guid value{ 0x5DE5F917,0xB2D7,0x446B,{ 0x9D,0x73,0x61,0x23,0xFB,0xCA,0x3B,0xC6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentToken>
    {
        static constexpr guid value{ 0xBBCAC013,0xCCD0,0x41F2,{ 0xB2,0xA1,0x0A,0x2E,0x4B,0x5D,0xCE,0x25 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::IPaymentTokenFactory>
    {
        static constexpr guid value{ 0x988CD7AA,0x4753,0x4904,{ 0x83,0x73,0xDD,0x7B,0x08,0xB9,0x95,0xC1 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler>
    {
        static constexpr guid value{ 0x5078B9E1,0xF398,0x4F2C,{ 0xA2,0x7E,0x94,0xD3,0x71,0xCF,0x6C,0x7D } };
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentAddress>
    {
        using type = Windows::ApplicationModel::Payments::IPaymentAddress;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult>
    {
        using type = Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentCurrencyAmount>
    {
        using type = Windows::ApplicationModel::Payments::IPaymentCurrencyAmount;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentDetails>
    {
        using type = Windows::ApplicationModel::Payments::IPaymentDetails;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentDetailsModifier>
    {
        using type = Windows::ApplicationModel::Payments::IPaymentDetailsModifier;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentItem>
    {
        using type = Windows::ApplicationModel::Payments::IPaymentItem;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentMediator>
    {
        using type = Windows::ApplicationModel::Payments::IPaymentMediator;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentMerchantInfo>
    {
        using type = Windows::ApplicationModel::Payments::IPaymentMerchantInfo;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentMethodData>
    {
        using type = Windows::ApplicationModel::Payments::IPaymentMethodData;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentOptions>
    {
        using type = Windows::ApplicationModel::Payments::IPaymentOptions;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentRequest>
    {
        using type = Windows::ApplicationModel::Payments::IPaymentRequest;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentRequestChangedArgs>
    {
        using type = Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentRequestChangedResult>
    {
        using type = Windows::ApplicationModel::Payments::IPaymentRequestChangedResult;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult>
    {
        using type = Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentResponse>
    {
        using type = Windows::ApplicationModel::Payments::IPaymentResponse;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentShippingOption>
    {
        using type = Windows::ApplicationModel::Payments::IPaymentShippingOption;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentToken>
    {
        using type = Windows::ApplicationModel::Payments::IPaymentToken;
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentAddress>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Country(void**) noexcept = 0;
            virtual int32_t __stdcall put_Country(void*) noexcept = 0;
            virtual int32_t __stdcall get_AddressLines(void**) noexcept = 0;
            virtual int32_t __stdcall put_AddressLines(void*) noexcept = 0;
            virtual int32_t __stdcall get_Region(void**) noexcept = 0;
            virtual int32_t __stdcall put_Region(void*) noexcept = 0;
            virtual int32_t __stdcall get_City(void**) noexcept = 0;
            virtual int32_t __stdcall put_City(void*) noexcept = 0;
            virtual int32_t __stdcall get_DependentLocality(void**) noexcept = 0;
            virtual int32_t __stdcall put_DependentLocality(void*) noexcept = 0;
            virtual int32_t __stdcall get_PostalCode(void**) noexcept = 0;
            virtual int32_t __stdcall put_PostalCode(void*) noexcept = 0;
            virtual int32_t __stdcall get_SortingCode(void**) noexcept = 0;
            virtual int32_t __stdcall put_SortingCode(void*) noexcept = 0;
            virtual int32_t __stdcall get_LanguageCode(void**) noexcept = 0;
            virtual int32_t __stdcall put_LanguageCode(void*) noexcept = 0;
            virtual int32_t __stdcall get_Organization(void**) noexcept = 0;
            virtual int32_t __stdcall put_Organization(void*) noexcept = 0;
            virtual int32_t __stdcall get_Recipient(void**) noexcept = 0;
            virtual int32_t __stdcall put_Recipient(void*) noexcept = 0;
            virtual int32_t __stdcall get_PhoneNumber(void**) noexcept = 0;
            virtual int32_t __stdcall put_PhoneNumber(void*) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Currency(void**) noexcept = 0;
            virtual int32_t __stdcall put_Currency(void*) noexcept = 0;
            virtual int32_t __stdcall get_CurrencySystem(void**) noexcept = 0;
            virtual int32_t __stdcall put_CurrencySystem(void*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithCurrencySystem(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Total(void**) noexcept = 0;
            virtual int32_t __stdcall put_Total(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayItems(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayItems(void*) noexcept = 0;
            virtual int32_t __stdcall get_ShippingOptions(void**) noexcept = 0;
            virtual int32_t __stdcall put_ShippingOptions(void*) noexcept = 0;
            virtual int32_t __stdcall get_Modifiers(void**) noexcept = 0;
            virtual int32_t __stdcall put_Modifiers(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentDetailsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithDisplayItems(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentDetailsModifier>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_JsonData(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedMethodIds(void**) noexcept = 0;
            virtual int32_t __stdcall get_Total(void**) noexcept = 0;
            virtual int32_t __stdcall get_AdditionalDisplayItems(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithAdditionalDisplayItems(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithAdditionalDisplayItemsAndJsonData(void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Label(void**) noexcept = 0;
            virtual int32_t __stdcall put_Label(void*) noexcept = 0;
            virtual int32_t __stdcall get_Amount(void**) noexcept = 0;
            virtual int32_t __stdcall put_Amount(void*) noexcept = 0;
            virtual int32_t __stdcall get_Pending(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Pending(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentItemFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentMediator>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetSupportedMethodIdsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SubmitPaymentRequestAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SubmitPaymentRequestWithChangeHandlerAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentMediator2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CanMakePaymentAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentMerchantInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PackageFullName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentMethodData>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportedMethodIds(void**) noexcept = 0;
            virtual int32_t __stdcall get_JsonData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentMethodDataFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithJsonData(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestPayerEmail(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RequestPayerEmail(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RequestPayerName(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RequestPayerName(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RequestPayerPhoneNumber(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RequestPayerPhoneNumber(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RequestShipping(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RequestShipping(bool) noexcept = 0;
            virtual int32_t __stdcall get_ShippingType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ShippingType(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MerchantInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_Details(void**) noexcept = 0;
            virtual int32_t __stdcall get_MethodData(void**) noexcept = 0;
            virtual int32_t __stdcall get_Options(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ShippingAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedShippingOption(void**) noexcept = 0;
            virtual int32_t __stdcall Acknowledge(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentRequestChangedResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeAcceptedByMerchant(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ChangeAcceptedByMerchant(bool) noexcept = 0;
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
            virtual int32_t __stdcall put_Message(void*) noexcept = 0;
            virtual int32_t __stdcall get_UpdatedPaymentDetails(void**) noexcept = 0;
            virtual int32_t __stdcall put_UpdatedPaymentDetails(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(bool, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithPaymentDetails(bool, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentRequestFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithMerchantInfo(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithMerchantInfoAndOptions(void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentRequestFactory2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithMerchantInfoOptionsAndId(void*, void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Response(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentResponse>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PaymentToken(void**) noexcept = 0;
            virtual int32_t __stdcall get_ShippingOption(void**) noexcept = 0;
            virtual int32_t __stdcall get_ShippingAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_PayerEmail(void**) noexcept = 0;
            virtual int32_t __stdcall get_PayerName(void**) noexcept = 0;
            virtual int32_t __stdcall get_PayerPhoneNumber(void**) noexcept = 0;
            virtual int32_t __stdcall CompleteAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentShippingOption>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Label(void**) noexcept = 0;
            virtual int32_t __stdcall put_Label(void*) noexcept = 0;
            virtual int32_t __stdcall get_Amount(void**) noexcept = 0;
            virtual int32_t __stdcall put_Amount(void*) noexcept = 0;
            virtual int32_t __stdcall get_Tag(void**) noexcept = 0;
            virtual int32_t __stdcall put_Tag(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsSelected(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSelected(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithSelected(void*, void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithSelectedAndTag(void*, void*, bool, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentToken>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PaymentMethodId(void**) noexcept = 0;
            virtual int32_t __stdcall get_JsonDetails(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::IPaymentTokenFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithJsonDetails(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentAddress
    {
        [[nodiscard]] auto Country() const;
        auto Country(param::hstring const& value) const;
        [[nodiscard]] auto AddressLines() const;
        auto AddressLines(param::async_vector_view<hstring> const& value) const;
        [[nodiscard]] auto Region() const;
        auto Region(param::hstring const& value) const;
        [[nodiscard]] auto City() const;
        auto City(param::hstring const& value) const;
        [[nodiscard]] auto DependentLocality() const;
        auto DependentLocality(param::hstring const& value) const;
        [[nodiscard]] auto PostalCode() const;
        auto PostalCode(param::hstring const& value) const;
        [[nodiscard]] auto SortingCode() const;
        auto SortingCode(param::hstring const& value) const;
        [[nodiscard]] auto LanguageCode() const;
        auto LanguageCode(param::hstring const& value) const;
        [[nodiscard]] auto Organization() const;
        auto Organization(param::hstring const& value) const;
        [[nodiscard]] auto Recipient() const;
        auto Recipient(param::hstring const& value) const;
        [[nodiscard]] auto PhoneNumber() const;
        auto PhoneNumber(param::hstring const& value) const;
        [[nodiscard]] auto Properties() const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentAddress>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentCanMakePaymentResult
    {
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentCanMakePaymentResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentCanMakePaymentResultFactory
    {
        auto Create(Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentCanMakePaymentResultFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount
    {
        [[nodiscard]] auto Currency() const;
        auto Currency(param::hstring const& value) const;
        [[nodiscard]] auto CurrencySystem() const;
        auto CurrencySystem(param::hstring const& value) const;
        [[nodiscard]] auto Value() const;
        auto Value(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmountFactory
    {
        auto Create(param::hstring const& value, param::hstring const& currency) const;
        auto CreateWithCurrencySystem(param::hstring const& value, param::hstring const& currency, param::hstring const& currencySystem) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmountFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentDetails
    {
        [[nodiscard]] auto Total() const;
        auto Total(Windows::ApplicationModel::Payments::PaymentItem const& value) const;
        [[nodiscard]] auto DisplayItems() const;
        auto DisplayItems(param::async_vector_view<Windows::ApplicationModel::Payments::PaymentItem> const& value) const;
        [[nodiscard]] auto ShippingOptions() const;
        auto ShippingOptions(param::async_vector_view<Windows::ApplicationModel::Payments::PaymentShippingOption> const& value) const;
        [[nodiscard]] auto Modifiers() const;
        auto Modifiers(param::async_vector_view<Windows::ApplicationModel::Payments::PaymentDetailsModifier> const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentDetailsFactory
    {
        auto Create(Windows::ApplicationModel::Payments::PaymentItem const& total) const;
        auto CreateWithDisplayItems(Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& displayItems) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentDetailsFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentDetailsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifier
    {
        [[nodiscard]] auto JsonData() const;
        [[nodiscard]] auto SupportedMethodIds() const;
        [[nodiscard]] auto Total() const;
        [[nodiscard]] auto AdditionalDisplayItems() const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentDetailsModifier>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifier<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifierFactory
    {
        auto Create(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total) const;
        auto CreateWithAdditionalDisplayItems(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems) const;
        auto CreateWithAdditionalDisplayItemsAndJsonData(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems, param::hstring const& jsonData) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifierFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentItem
    {
        [[nodiscard]] auto Label() const;
        auto Label(param::hstring const& value) const;
        [[nodiscard]] auto Amount() const;
        auto Amount(Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& value) const;
        [[nodiscard]] auto Pending() const;
        auto Pending(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentItem>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentItem<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentItemFactory
    {
        auto Create(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentItemFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentItemFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentMediator
    {
        auto GetSupportedMethodIdsAsync() const;
        auto SubmitPaymentRequestAsync(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest) const;
        auto SubmitPaymentRequestAsync(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest, Windows::ApplicationModel::Payments::PaymentRequestChangedHandler const& changeHandler) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentMediator>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentMediator<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentMediator2
    {
        auto CanMakePaymentAsync(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentMediator2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentMediator2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfo
    {
        [[nodiscard]] auto PackageFullName() const;
        [[nodiscard]] auto Uri() const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentMerchantInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfoFactory
    {
        auto Create(Windows::Foundation::Uri const& uri) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfoFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentMethodData
    {
        [[nodiscard]] auto SupportedMethodIds() const;
        [[nodiscard]] auto JsonData() const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentMethodData>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentMethodData<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentMethodDataFactory
    {
        auto Create(param::iterable<hstring> const& supportedMethodIds) const;
        auto CreateWithJsonData(param::iterable<hstring> const& supportedMethodIds, param::hstring const& jsonData) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentMethodDataFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentMethodDataFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentOptions
    {
        [[nodiscard]] auto RequestPayerEmail() const;
        auto RequestPayerEmail(Windows::ApplicationModel::Payments::PaymentOptionPresence const& value) const;
        [[nodiscard]] auto RequestPayerName() const;
        auto RequestPayerName(Windows::ApplicationModel::Payments::PaymentOptionPresence const& value) const;
        [[nodiscard]] auto RequestPayerPhoneNumber() const;
        auto RequestPayerPhoneNumber(Windows::ApplicationModel::Payments::PaymentOptionPresence const& value) const;
        [[nodiscard]] auto RequestShipping() const;
        auto RequestShipping(bool value) const;
        [[nodiscard]] auto ShippingType() const;
        auto ShippingType(Windows::ApplicationModel::Payments::PaymentShippingType const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentRequest
    {
        [[nodiscard]] auto MerchantInfo() const;
        [[nodiscard]] auto Details() const;
        [[nodiscard]] auto MethodData() const;
        [[nodiscard]] auto Options() const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentRequest2
    {
        [[nodiscard]] auto Id() const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentRequest2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs
    {
        [[nodiscard]] auto ChangeKind() const;
        [[nodiscard]] auto ShippingAddress() const;
        [[nodiscard]] auto SelectedShippingOption() const;
        auto Acknowledge(Windows::ApplicationModel::Payments::PaymentRequestChangedResult const& changeResult) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult
    {
        [[nodiscard]] auto ChangeAcceptedByMerchant() const;
        auto ChangeAcceptedByMerchant(bool value) const;
        [[nodiscard]] auto Message() const;
        auto Message(param::hstring const& value) const;
        [[nodiscard]] auto UpdatedPaymentDetails() const;
        auto UpdatedPaymentDetails(Windows::ApplicationModel::Payments::PaymentDetails const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentRequestChangedResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResultFactory
    {
        auto Create(bool changeAcceptedByMerchant) const;
        auto CreateWithPaymentDetails(bool changeAcceptedByMerchant, Windows::ApplicationModel::Payments::PaymentDetails const& updatedPaymentDetails) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResultFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory
    {
        auto Create(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData) const;
        auto CreateWithMerchantInfo(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo) const;
        auto CreateWithMerchantInfoAndOptions(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, Windows::ApplicationModel::Payments::PaymentOptions const& options) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentRequestFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory2
    {
        auto CreateWithMerchantInfoOptionsAndId(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, Windows::ApplicationModel::Payments::PaymentOptions const& options, param::hstring const& id) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentRequestFactory2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentRequestSubmitResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto Response() const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequestSubmitResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentResponse
    {
        [[nodiscard]] auto PaymentToken() const;
        [[nodiscard]] auto ShippingOption() const;
        [[nodiscard]] auto ShippingAddress() const;
        [[nodiscard]] auto PayerEmail() const;
        [[nodiscard]] auto PayerName() const;
        [[nodiscard]] auto PayerPhoneNumber() const;
        auto CompleteAsync(Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus const& status) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentResponse>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentShippingOption
    {
        [[nodiscard]] auto Label() const;
        auto Label(param::hstring const& value) const;
        [[nodiscard]] auto Amount() const;
        auto Amount(Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& value) const;
        [[nodiscard]] auto Tag() const;
        auto Tag(param::hstring const& value) const;
        [[nodiscard]] auto IsSelected() const;
        auto IsSelected(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentShippingOption>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentShippingOptionFactory
    {
        auto Create(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount) const;
        auto CreateWithSelected(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected) const;
        auto CreateWithSelectedAndTag(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected, param::hstring const& tag) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentShippingOptionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentToken
    {
        [[nodiscard]] auto PaymentMethodId() const;
        [[nodiscard]] auto JsonDetails() const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentToken>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentToken<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_IPaymentTokenFactory
    {
        auto Create(param::hstring const& paymentMethodId) const;
        auto CreateWithJsonDetails(param::hstring const& paymentMethodId, param::hstring const& jsonDetails) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::IPaymentTokenFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentTokenFactory<D>;
    };
}
#endif
