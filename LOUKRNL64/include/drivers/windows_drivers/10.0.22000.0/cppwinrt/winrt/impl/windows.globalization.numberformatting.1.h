// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Globalization_NumberFormatting_1_H
#define WINRT_Windows_Globalization_NumberFormatting_1_H
#include "winrt/impl/Windows.Globalization.NumberFormatting.0.h"
WINRT_EXPORT namespace winrt::Windows::Globalization::NumberFormatting
{
    struct __declspec(empty_bases) ICurrencyFormatter :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICurrencyFormatter>,
        impl::require<Windows::Globalization::NumberFormatting::ICurrencyFormatter, Windows::Globalization::NumberFormatting::INumberFormatterOptions, Windows::Globalization::NumberFormatting::INumberFormatter, Windows::Globalization::NumberFormatting::INumberFormatter2, Windows::Globalization::NumberFormatting::INumberParser>
    {
        ICurrencyFormatter(std::nullptr_t = nullptr) noexcept {}
        ICurrencyFormatter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICurrencyFormatter2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICurrencyFormatter2>
    {
        ICurrencyFormatter2(std::nullptr_t = nullptr) noexcept {}
        ICurrencyFormatter2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICurrencyFormatterFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICurrencyFormatterFactory>
    {
        ICurrencyFormatterFactory(std::nullptr_t = nullptr) noexcept {}
        ICurrencyFormatterFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDecimalFormatterFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDecimalFormatterFactory>
    {
        IDecimalFormatterFactory(std::nullptr_t = nullptr) noexcept {}
        IDecimalFormatterFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IIncrementNumberRounder :
        Windows::Foundation::IInspectable,
        impl::consume_t<IIncrementNumberRounder>
    {
        IIncrementNumberRounder(std::nullptr_t = nullptr) noexcept {}
        IIncrementNumberRounder(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INumberFormatter :
        Windows::Foundation::IInspectable,
        impl::consume_t<INumberFormatter>
    {
        INumberFormatter(std::nullptr_t = nullptr) noexcept {}
        INumberFormatter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INumberFormatter2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<INumberFormatter2>
    {
        INumberFormatter2(std::nullptr_t = nullptr) noexcept {}
        INumberFormatter2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INumberFormatterOptions :
        Windows::Foundation::IInspectable,
        impl::consume_t<INumberFormatterOptions>
    {
        INumberFormatterOptions(std::nullptr_t = nullptr) noexcept {}
        INumberFormatterOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INumberParser :
        Windows::Foundation::IInspectable,
        impl::consume_t<INumberParser>
    {
        INumberParser(std::nullptr_t = nullptr) noexcept {}
        INumberParser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INumberRounder :
        Windows::Foundation::IInspectable,
        impl::consume_t<INumberRounder>
    {
        INumberRounder(std::nullptr_t = nullptr) noexcept {}
        INumberRounder(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INumberRounderOption :
        Windows::Foundation::IInspectable,
        impl::consume_t<INumberRounderOption>
    {
        INumberRounderOption(std::nullptr_t = nullptr) noexcept {}
        INumberRounderOption(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INumeralSystemTranslator :
        Windows::Foundation::IInspectable,
        impl::consume_t<INumeralSystemTranslator>
    {
        INumeralSystemTranslator(std::nullptr_t = nullptr) noexcept {}
        INumeralSystemTranslator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INumeralSystemTranslatorFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<INumeralSystemTranslatorFactory>
    {
        INumeralSystemTranslatorFactory(std::nullptr_t = nullptr) noexcept {}
        INumeralSystemTranslatorFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPercentFormatterFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPercentFormatterFactory>
    {
        IPercentFormatterFactory(std::nullptr_t = nullptr) noexcept {}
        IPercentFormatterFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPermilleFormatterFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPermilleFormatterFactory>
    {
        IPermilleFormatterFactory(std::nullptr_t = nullptr) noexcept {}
        IPermilleFormatterFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISignedZeroOption :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISignedZeroOption>
    {
        ISignedZeroOption(std::nullptr_t = nullptr) noexcept {}
        ISignedZeroOption(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISignificantDigitsNumberRounder :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISignificantDigitsNumberRounder>
    {
        ISignificantDigitsNumberRounder(std::nullptr_t = nullptr) noexcept {}
        ISignificantDigitsNumberRounder(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISignificantDigitsOption :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISignificantDigitsOption>
    {
        ISignificantDigitsOption(std::nullptr_t = nullptr) noexcept {}
        ISignificantDigitsOption(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
