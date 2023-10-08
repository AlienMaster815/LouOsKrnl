// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Payments_Provider_0_H
#define WINRT_Windows_ApplicationModel_Payments_Provider_0_H
namespace winrt::Windows::ApplicationModel::Payments
{
    struct PaymentAddress;
    struct PaymentCanMakePaymentResult;
    struct PaymentRequest;
    enum class PaymentRequestCompletionStatus : int32_t;
    struct PaymentShippingOption;
    struct PaymentToken;
}
namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::ApplicationModel::Payments::Provider
{
    struct IPaymentAppCanMakePaymentTriggerDetails;
    struct IPaymentAppManager;
    struct IPaymentAppManagerStatics;
    struct IPaymentTransaction;
    struct IPaymentTransactionAcceptResult;
    struct IPaymentTransactionStatics;
    struct PaymentAppCanMakePaymentTriggerDetails;
    struct PaymentAppManager;
    struct PaymentTransaction;
    struct PaymentTransactionAcceptResult;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Payments::Provider::IPaymentAppCanMakePaymentTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::Provider::IPaymentAppManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::Provider::IPaymentTransaction>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::Provider::PaymentAppCanMakePaymentTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::Provider::PaymentAppManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::Provider::PaymentTransaction>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult>
    {
        using type = class_category;
    };
    template <> struct name<Windows::ApplicationModel::Payments::Provider::IPaymentAppCanMakePaymentTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.Provider.IPaymentAppCanMakePaymentTriggerDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::Provider::IPaymentAppManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.Provider.IPaymentAppManager" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.Provider.IPaymentAppManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::Provider::IPaymentTransaction>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.Provider.IPaymentTransaction" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.Provider.IPaymentTransactionAcceptResult" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.Provider.IPaymentTransactionStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::Provider::PaymentAppCanMakePaymentTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.Provider.PaymentAppCanMakePaymentTriggerDetails" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::Provider::PaymentAppManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.Provider.PaymentAppManager" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::Provider::PaymentTransaction>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.Provider.PaymentTransaction" };
    };
    template <> struct name<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Payments.Provider.PaymentTransactionAcceptResult" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::Provider::IPaymentAppCanMakePaymentTriggerDetails>
    {
        static constexpr guid value{ 0x0CE201F0,0x8B93,0x4EB6,{ 0x8C,0x46,0x2E,0x4A,0x6C,0x6A,0x26,0xF6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::Provider::IPaymentAppManager>
    {
        static constexpr guid value{ 0x0E47AA53,0x8521,0x4969,{ 0xA9,0x57,0xDF,0x25,0x38,0xA3,0xA9,0x8F } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics>
    {
        static constexpr guid value{ 0xA341AC28,0xFC89,0x4406,{ 0xB4,0xD9,0x34,0xE7,0xFE,0x79,0xDF,0xB6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::Provider::IPaymentTransaction>
    {
        static constexpr guid value{ 0x62581DA0,0x26A5,0x4E9B,{ 0xA6,0xEB,0x66,0x60,0x6C,0xF0,0x01,0xD3 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult>
    {
        static constexpr guid value{ 0x060E3276,0xD30C,0x4817,{ 0x95,0xA2,0xDF,0x7A,0xE9,0x27,0x3B,0x56 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics>
    {
        static constexpr guid value{ 0x8D639750,0xEE0A,0x4DF5,{ 0x9B,0x1E,0x1C,0x0F,0x9E,0xC5,0x98,0x81 } };
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::Provider::PaymentAppCanMakePaymentTriggerDetails>
    {
        using type = Windows::ApplicationModel::Payments::Provider::IPaymentAppCanMakePaymentTriggerDetails;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::Provider::PaymentAppManager>
    {
        using type = Windows::ApplicationModel::Payments::Provider::IPaymentAppManager;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::Provider::PaymentTransaction>
    {
        using type = Windows::ApplicationModel::Payments::Provider::IPaymentTransaction;
    };
    template <> struct default_interface<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult>
    {
        using type = Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult;
    };
    template <> struct abi<Windows::ApplicationModel::Payments::Provider::IPaymentAppCanMakePaymentTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCanMakePaymentResult(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::Provider::IPaymentAppManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RegisterAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UnregisterAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::Provider::IPaymentTransaction>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PaymentRequest(void**) noexcept = 0;
            virtual int32_t __stdcall get_PayerEmail(void**) noexcept = 0;
            virtual int32_t __stdcall put_PayerEmail(void*) noexcept = 0;
            virtual int32_t __stdcall get_PayerName(void**) noexcept = 0;
            virtual int32_t __stdcall put_PayerName(void*) noexcept = 0;
            virtual int32_t __stdcall get_PayerPhoneNumber(void**) noexcept = 0;
            virtual int32_t __stdcall put_PayerPhoneNumber(void*) noexcept = 0;
            virtual int32_t __stdcall UpdateShippingAddressAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateSelectedShippingOptionAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall AcceptAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall Reject() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_Provider_IPaymentAppCanMakePaymentTriggerDetails
    {
        [[nodiscard]] auto Request() const;
        auto ReportCanMakePaymentResult(Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::Provider::IPaymentAppCanMakePaymentTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_Provider_IPaymentAppCanMakePaymentTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_Provider_IPaymentAppManager
    {
        auto RegisterAsync(param::async_iterable<hstring> const& supportedPaymentMethodIds) const;
        auto UnregisterAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::Provider::IPaymentAppManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_Provider_IPaymentAppManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_Provider_IPaymentAppManagerStatics
    {
        [[nodiscard]] auto Current() const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_Provider_IPaymentAppManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransaction
    {
        [[nodiscard]] auto PaymentRequest() const;
        [[nodiscard]] auto PayerEmail() const;
        auto PayerEmail(param::hstring const& value) const;
        [[nodiscard]] auto PayerName() const;
        auto PayerName(param::hstring const& value) const;
        [[nodiscard]] auto PayerPhoneNumber() const;
        auto PayerPhoneNumber(param::hstring const& value) const;
        auto UpdateShippingAddressAsync(Windows::ApplicationModel::Payments::PaymentAddress const& shippingAddress) const;
        auto UpdateSelectedShippingOptionAsync(Windows::ApplicationModel::Payments::PaymentShippingOption const& selectedShippingOption) const;
        auto AcceptAsync(Windows::ApplicationModel::Payments::PaymentToken const& paymentToken) const;
        auto Reject() const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::Provider::IPaymentTransaction>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransaction<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransactionAcceptResult
    {
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransactionAcceptResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransactionStatics
    {
        auto FromIdAsync(param::hstring const& id) const;
    };
    template <> struct consume<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransactionStatics<D>;
    };
}
#endif
