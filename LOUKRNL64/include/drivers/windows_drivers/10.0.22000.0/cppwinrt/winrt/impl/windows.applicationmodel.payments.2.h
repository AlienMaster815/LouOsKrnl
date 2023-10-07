// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Payments_2_H
#define WINRT_Windows_ApplicationModel_Payments_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.ApplicationModel.Payments.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Payments
{
    struct PaymentRequestChangedHandler : Windows::Foundation::IUnknown
    {
        PaymentRequestChangedHandler(std::nullptr_t = nullptr) noexcept {}
        PaymentRequestChangedHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> PaymentRequestChangedHandler(L lambda);
        template <typename F> PaymentRequestChangedHandler(F* function);
        template <typename O, typename M> PaymentRequestChangedHandler(O* object, M method);
        template <typename O, typename M> PaymentRequestChangedHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> PaymentRequestChangedHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest, Windows::ApplicationModel::Payments::PaymentRequestChangedArgs const& args) const;
    };
    struct __declspec(empty_bases) PaymentAddress : Windows::ApplicationModel::Payments::IPaymentAddress
    {
        PaymentAddress(std::nullptr_t) noexcept {}
        PaymentAddress(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Payments::IPaymentAddress(ptr, take_ownership_from_abi) {}
        PaymentAddress();
    };
    struct __declspec(empty_bases) PaymentCanMakePaymentResult : Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult
    {
        PaymentCanMakePaymentResult(std::nullptr_t) noexcept {}
        PaymentCanMakePaymentResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult(ptr, take_ownership_from_abi) {}
        explicit PaymentCanMakePaymentResult(Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus const& value);
    };
    struct __declspec(empty_bases) PaymentCurrencyAmount : Windows::ApplicationModel::Payments::IPaymentCurrencyAmount
    {
        PaymentCurrencyAmount(std::nullptr_t) noexcept {}
        PaymentCurrencyAmount(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Payments::IPaymentCurrencyAmount(ptr, take_ownership_from_abi) {}
        PaymentCurrencyAmount(param::hstring const& value, param::hstring const& currency);
        PaymentCurrencyAmount(param::hstring const& value, param::hstring const& currency, param::hstring const& currencySystem);
    };
    struct __declspec(empty_bases) PaymentDetails : Windows::ApplicationModel::Payments::IPaymentDetails
    {
        PaymentDetails(std::nullptr_t) noexcept {}
        PaymentDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Payments::IPaymentDetails(ptr, take_ownership_from_abi) {}
        PaymentDetails();
        explicit PaymentDetails(Windows::ApplicationModel::Payments::PaymentItem const& total);
        PaymentDetails(Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& displayItems);
    };
    struct __declspec(empty_bases) PaymentDetailsModifier : Windows::ApplicationModel::Payments::IPaymentDetailsModifier
    {
        PaymentDetailsModifier(std::nullptr_t) noexcept {}
        PaymentDetailsModifier(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Payments::IPaymentDetailsModifier(ptr, take_ownership_from_abi) {}
        PaymentDetailsModifier(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total);
        PaymentDetailsModifier(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems);
        PaymentDetailsModifier(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems, param::hstring const& jsonData);
    };
    struct __declspec(empty_bases) PaymentItem : Windows::ApplicationModel::Payments::IPaymentItem
    {
        PaymentItem(std::nullptr_t) noexcept {}
        PaymentItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Payments::IPaymentItem(ptr, take_ownership_from_abi) {}
        PaymentItem(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount);
    };
    struct __declspec(empty_bases) PaymentMediator : Windows::ApplicationModel::Payments::IPaymentMediator,
        impl::require<PaymentMediator, Windows::ApplicationModel::Payments::IPaymentMediator2>
    {
        PaymentMediator(std::nullptr_t) noexcept {}
        PaymentMediator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Payments::IPaymentMediator(ptr, take_ownership_from_abi) {}
        PaymentMediator();
    };
    struct __declspec(empty_bases) PaymentMerchantInfo : Windows::ApplicationModel::Payments::IPaymentMerchantInfo
    {
        PaymentMerchantInfo(std::nullptr_t) noexcept {}
        PaymentMerchantInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Payments::IPaymentMerchantInfo(ptr, take_ownership_from_abi) {}
        PaymentMerchantInfo();
        explicit PaymentMerchantInfo(Windows::Foundation::Uri const& uri);
    };
    struct __declspec(empty_bases) PaymentMethodData : Windows::ApplicationModel::Payments::IPaymentMethodData
    {
        PaymentMethodData(std::nullptr_t) noexcept {}
        PaymentMethodData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Payments::IPaymentMethodData(ptr, take_ownership_from_abi) {}
        explicit PaymentMethodData(param::iterable<hstring> const& supportedMethodIds);
        PaymentMethodData(param::iterable<hstring> const& supportedMethodIds, param::hstring const& jsonData);
    };
    struct __declspec(empty_bases) PaymentOptions : Windows::ApplicationModel::Payments::IPaymentOptions
    {
        PaymentOptions(std::nullptr_t) noexcept {}
        PaymentOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Payments::IPaymentOptions(ptr, take_ownership_from_abi) {}
        PaymentOptions();
    };
    struct __declspec(empty_bases) PaymentRequest : Windows::ApplicationModel::Payments::IPaymentRequest,
        impl::require<PaymentRequest, Windows::ApplicationModel::Payments::IPaymentRequest2>
    {
        PaymentRequest(std::nullptr_t) noexcept {}
        PaymentRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Payments::IPaymentRequest(ptr, take_ownership_from_abi) {}
        PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData);
        PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo);
        PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, Windows::ApplicationModel::Payments::PaymentOptions const& options);
        PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, Windows::ApplicationModel::Payments::PaymentOptions const& options, param::hstring const& id);
    };
    struct __declspec(empty_bases) PaymentRequestChangedArgs : Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs
    {
        PaymentRequestChangedArgs(std::nullptr_t) noexcept {}
        PaymentRequestChangedArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PaymentRequestChangedResult : Windows::ApplicationModel::Payments::IPaymentRequestChangedResult
    {
        PaymentRequestChangedResult(std::nullptr_t) noexcept {}
        PaymentRequestChangedResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Payments::IPaymentRequestChangedResult(ptr, take_ownership_from_abi) {}
        explicit PaymentRequestChangedResult(bool changeAcceptedByMerchant);
        PaymentRequestChangedResult(bool changeAcceptedByMerchant, Windows::ApplicationModel::Payments::PaymentDetails const& updatedPaymentDetails);
    };
    struct __declspec(empty_bases) PaymentRequestSubmitResult : Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult
    {
        PaymentRequestSubmitResult(std::nullptr_t) noexcept {}
        PaymentRequestSubmitResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PaymentResponse : Windows::ApplicationModel::Payments::IPaymentResponse
    {
        PaymentResponse(std::nullptr_t) noexcept {}
        PaymentResponse(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Payments::IPaymentResponse(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PaymentShippingOption : Windows::ApplicationModel::Payments::IPaymentShippingOption
    {
        PaymentShippingOption(std::nullptr_t) noexcept {}
        PaymentShippingOption(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Payments::IPaymentShippingOption(ptr, take_ownership_from_abi) {}
        PaymentShippingOption(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount);
        PaymentShippingOption(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected);
        PaymentShippingOption(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected, param::hstring const& tag);
    };
    struct __declspec(empty_bases) PaymentToken : Windows::ApplicationModel::Payments::IPaymentToken
    {
        PaymentToken(std::nullptr_t) noexcept {}
        PaymentToken(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Payments::IPaymentToken(ptr, take_ownership_from_abi) {}
        explicit PaymentToken(param::hstring const& paymentMethodId);
        PaymentToken(param::hstring const& paymentMethodId, param::hstring const& jsonDetails);
    };
}
#endif
