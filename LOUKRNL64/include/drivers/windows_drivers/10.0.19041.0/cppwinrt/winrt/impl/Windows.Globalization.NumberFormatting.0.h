// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Globalization_NumberFormatting_0_H
#define WINRT_Windows_Globalization_NumberFormatting_0_H
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Globalization::NumberFormatting
{
    enum class CurrencyFormatterMode : int32_t
    {
        UseSymbol = 0,
        UseCurrencyCode = 1,
    };
    enum class RoundingAlgorithm : int32_t
    {
        None = 0,
        RoundDown = 1,
        RoundUp = 2,
        RoundTowardsZero = 3,
        RoundAwayFromZero = 4,
        RoundHalfDown = 5,
        RoundHalfUp = 6,
        RoundHalfTowardsZero = 7,
        RoundHalfAwayFromZero = 8,
        RoundHalfToEven = 9,
        RoundHalfToOdd = 10,
    };
    struct ICurrencyFormatter;
    struct ICurrencyFormatter2;
    struct ICurrencyFormatterFactory;
    struct IDecimalFormatterFactory;
    struct IIncrementNumberRounder;
    struct INumberFormatter;
    struct INumberFormatter2;
    struct INumberFormatterOptions;
    struct INumberParser;
    struct INumberRounder;
    struct INumberRounderOption;
    struct INumeralSystemTranslator;
    struct INumeralSystemTranslatorFactory;
    struct IPercentFormatterFactory;
    struct IPermilleFormatterFactory;
    struct ISignedZeroOption;
    struct ISignificantDigitsNumberRounder;
    struct ISignificantDigitsOption;
    struct CurrencyFormatter;
    struct DecimalFormatter;
    struct IncrementNumberRounder;
    struct NumeralSystemTranslator;
    struct PercentFormatter;
    struct PermilleFormatter;
    struct SignificantDigitsNumberRounder;
}
namespace winrt::impl
{
    template <> struct category<Windows::Globalization::NumberFormatting::ICurrencyFormatter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::ICurrencyFormatter2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::IDecimalFormatterFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::IIncrementNumberRounder>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::INumberFormatter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::INumberFormatter2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::INumberFormatterOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::INumberParser>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::INumberRounder>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::INumberRounderOption>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::INumeralSystemTranslator>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::IPercentFormatterFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::IPermilleFormatterFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::ISignedZeroOption>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::ISignificantDigitsOption>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::CurrencyFormatter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::DecimalFormatter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::IncrementNumberRounder>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::NumeralSystemTranslator>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::PercentFormatter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::PermilleFormatter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::SignificantDigitsNumberRounder>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::CurrencyFormatterMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Globalization::NumberFormatting::RoundingAlgorithm>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Globalization::NumberFormatting::ICurrencyFormatter>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.ICurrencyFormatter" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::ICurrencyFormatter2>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.ICurrencyFormatter2" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.ICurrencyFormatterFactory" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::IDecimalFormatterFactory>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.IDecimalFormatterFactory" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::IIncrementNumberRounder>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.IIncrementNumberRounder" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::INumberFormatter>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.INumberFormatter" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::INumberFormatter2>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.INumberFormatter2" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::INumberFormatterOptions>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.INumberFormatterOptions" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::INumberParser>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.INumberParser" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::INumberRounder>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.INumberRounder" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::INumberRounderOption>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.INumberRounderOption" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::INumeralSystemTranslator>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.INumeralSystemTranslator" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.INumeralSystemTranslatorFactory" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::IPercentFormatterFactory>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.IPercentFormatterFactory" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::IPermilleFormatterFactory>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.IPermilleFormatterFactory" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::ISignedZeroOption>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.ISignedZeroOption" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.ISignificantDigitsNumberRounder" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::ISignificantDigitsOption>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.ISignificantDigitsOption" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::CurrencyFormatter>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.CurrencyFormatter" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::DecimalFormatter>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.DecimalFormatter" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::IncrementNumberRounder>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.IncrementNumberRounder" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::NumeralSystemTranslator>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.NumeralSystemTranslator" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::PercentFormatter>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.PercentFormatter" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::PermilleFormatter>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.PermilleFormatter" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::SignificantDigitsNumberRounder>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.SignificantDigitsNumberRounder" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::CurrencyFormatterMode>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.CurrencyFormatterMode" };
    };
    template <> struct name<Windows::Globalization::NumberFormatting::RoundingAlgorithm>
    {
        static constexpr auto & value{ L"Windows.Globalization.NumberFormatting.RoundingAlgorithm" };
    };
    template <> struct guid_storage<Windows::Globalization::NumberFormatting::ICurrencyFormatter>
    {
        static constexpr guid value{ 0x11730CA5,0x4B00,0x41B2,{ 0xB3,0x32,0x73,0xB1,0x2A,0x49,0x7D,0x54 } };
    };
    template <> struct guid_storage<Windows::Globalization::NumberFormatting::ICurrencyFormatter2>
    {
        static constexpr guid value{ 0x072C2F1D,0xE7BA,0x4197,{ 0x92,0x0E,0x24,0x7C,0x92,0xF7,0xDE,0xA6 } };
    };
    template <> struct guid_storage<Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory>
    {
        static constexpr guid value{ 0x86C7537E,0xB938,0x4AA2,{ 0x84,0xB0,0x2C,0x33,0xDC,0x5B,0x14,0x50 } };
    };
    template <> struct guid_storage<Windows::Globalization::NumberFormatting::IDecimalFormatterFactory>
    {
        static constexpr guid value{ 0x0D018C9A,0xE393,0x46B8,{ 0xB8,0x30,0x7A,0x69,0xC8,0xF8,0x9F,0xBB } };
    };
    template <> struct guid_storage<Windows::Globalization::NumberFormatting::IIncrementNumberRounder>
    {
        static constexpr guid value{ 0x70A64FF8,0x66AB,0x4155,{ 0x9D,0xA1,0x73,0x9E,0x46,0x76,0x45,0x43 } };
    };
    template <> struct guid_storage<Windows::Globalization::NumberFormatting::INumberFormatter>
    {
        static constexpr guid value{ 0xA5007C49,0x7676,0x4DB7,{ 0x86,0x31,0x1B,0x6F,0xF2,0x65,0xCA,0xA9 } };
    };
    template <> struct guid_storage<Windows::Globalization::NumberFormatting::INumberFormatter2>
    {
        static constexpr guid value{ 0xD4A8C1F0,0x80D0,0x4B0D,{ 0xA8,0x9E,0x88,0x2C,0x1E,0x8F,0x83,0x10 } };
    };
    template <> struct guid_storage<Windows::Globalization::NumberFormatting::INumberFormatterOptions>
    {
        static constexpr guid value{ 0x80332D21,0xAEE1,0x4A39,{ 0xBA,0xA2,0x07,0xED,0x8C,0x96,0xDA,0xF6 } };
    };
    template <> struct guid_storage<Windows::Globalization::NumberFormatting::INumberParser>
    {
        static constexpr guid value{ 0xE6659412,0x4A13,0x4A53,{ 0x83,0xA1,0x39,0x2F,0xBE,0x4C,0xFF,0x9F } };
    };
    template <> struct guid_storage<Windows::Globalization::NumberFormatting::INumberRounder>
    {
        static constexpr guid value{ 0x5473C375,0x38ED,0x4631,{ 0xB8,0x0C,0xEF,0x34,0xFC,0x48,0xB7,0xF5 } };
    };
    template <> struct guid_storage<Windows::Globalization::NumberFormatting::INumberRounderOption>
    {
        static constexpr guid value{ 0x3B088433,0x646F,0x4EFE,{ 0x8D,0x48,0x66,0xEB,0x2E,0x49,0xE7,0x36 } };
    };
    template <> struct guid_storage<Windows::Globalization::NumberFormatting::INumeralSystemTranslator>
    {
        static constexpr guid value{ 0x28F5BC2C,0x8C23,0x4234,{ 0xAD,0x2E,0xFA,0x5A,0x3A,0x42,0x6E,0x9B } };
    };
    template <> struct guid_storage<Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory>
    {
        static constexpr guid value{ 0x9630C8DA,0x36EF,0x4D88,{ 0xA8,0x5C,0x6F,0x0D,0x98,0xD6,0x20,0xA6 } };
    };
    template <> struct guid_storage<Windows::Globalization::NumberFormatting::IPercentFormatterFactory>
    {
        static constexpr guid value{ 0xB7828AEF,0xFED4,0x4018,{ 0xA6,0xE2,0xE0,0x99,0x61,0xE0,0x37,0x65 } };
    };
    template <> struct guid_storage<Windows::Globalization::NumberFormatting::IPermilleFormatterFactory>
    {
        static constexpr guid value{ 0x2B37B4AC,0xE638,0x4ED5,{ 0xA9,0x98,0x62,0xF6,0xB0,0x6A,0x49,0xAE } };
    };
    template <> struct guid_storage<Windows::Globalization::NumberFormatting::ISignedZeroOption>
    {
        static constexpr guid value{ 0xFD1CDD31,0x0A3C,0x49C4,{ 0xA6,0x42,0x96,0xA1,0x56,0x4F,0x4F,0x30 } };
    };
    template <> struct guid_storage<Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder>
    {
        static constexpr guid value{ 0xF5941BCA,0x6646,0x4913,{ 0x8C,0x76,0x1B,0x19,0x1F,0xF9,0x4D,0xFD } };
    };
    template <> struct guid_storage<Windows::Globalization::NumberFormatting::ISignificantDigitsOption>
    {
        static constexpr guid value{ 0x1D4DFCDD,0x2D43,0x4EE8,{ 0xBB,0xF1,0xC1,0xB2,0x6A,0x71,0x1A,0x58 } };
    };
    template <> struct default_interface<Windows::Globalization::NumberFormatting::CurrencyFormatter>
    {
        using type = Windows::Globalization::NumberFormatting::ICurrencyFormatter;
    };
    template <> struct default_interface<Windows::Globalization::NumberFormatting::DecimalFormatter>
    {
        using type = Windows::Globalization::NumberFormatting::INumberFormatter;
    };
    template <> struct default_interface<Windows::Globalization::NumberFormatting::IncrementNumberRounder>
    {
        using type = Windows::Globalization::NumberFormatting::INumberRounder;
    };
    template <> struct default_interface<Windows::Globalization::NumberFormatting::NumeralSystemTranslator>
    {
        using type = Windows::Globalization::NumberFormatting::INumeralSystemTranslator;
    };
    template <> struct default_interface<Windows::Globalization::NumberFormatting::PercentFormatter>
    {
        using type = Windows::Globalization::NumberFormatting::INumberFormatter;
    };
    template <> struct default_interface<Windows::Globalization::NumberFormatting::PermilleFormatter>
    {
        using type = Windows::Globalization::NumberFormatting::INumberFormatter;
    };
    template <> struct default_interface<Windows::Globalization::NumberFormatting::SignificantDigitsNumberRounder>
    {
        using type = Windows::Globalization::NumberFormatting::INumberRounder;
    };
    template <> struct abi<Windows::Globalization::NumberFormatting::ICurrencyFormatter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Currency(void**) noexcept = 0;
            virtual int32_t __stdcall put_Currency(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::NumberFormatting::ICurrencyFormatter2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
            virtual int32_t __stdcall ApplyRoundingForCurrency(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateCurrencyFormatterCode(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCurrencyFormatterCodeContext(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::NumberFormatting::IDecimalFormatterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateDecimalFormatter(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::NumberFormatting::IIncrementNumberRounder>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RoundingAlgorithm(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RoundingAlgorithm(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Increment(double*) noexcept = 0;
            virtual int32_t __stdcall put_Increment(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::NumberFormatting::INumberFormatter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FormatInt(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall FormatUInt(uint64_t, void**) noexcept = 0;
            virtual int32_t __stdcall FormatDouble(double, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::NumberFormatting::INumberFormatter2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FormatInt(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall FormatUInt(uint64_t, void**) noexcept = 0;
            virtual int32_t __stdcall FormatDouble(double, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::NumberFormatting::INumberFormatterOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Languages(void**) noexcept = 0;
            virtual int32_t __stdcall get_GeographicRegion(void**) noexcept = 0;
            virtual int32_t __stdcall get_IntegerDigits(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IntegerDigits(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_FractionDigits(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FractionDigits(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsGrouped(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsGrouped(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsDecimalPointAlwaysDisplayed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsDecimalPointAlwaysDisplayed(bool) noexcept = 0;
            virtual int32_t __stdcall get_NumeralSystem(void**) noexcept = 0;
            virtual int32_t __stdcall put_NumeralSystem(void*) noexcept = 0;
            virtual int32_t __stdcall get_ResolvedLanguage(void**) noexcept = 0;
            virtual int32_t __stdcall get_ResolvedGeographicRegion(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::NumberFormatting::INumberParser>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ParseInt(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ParseUInt(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ParseDouble(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::NumberFormatting::INumberRounder>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RoundInt32(int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall RoundUInt32(uint32_t, uint32_t*) noexcept = 0;
            virtual int32_t __stdcall RoundInt64(int64_t, int64_t*) noexcept = 0;
            virtual int32_t __stdcall RoundUInt64(uint64_t, uint64_t*) noexcept = 0;
            virtual int32_t __stdcall RoundSingle(float, float*) noexcept = 0;
            virtual int32_t __stdcall RoundDouble(double, double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::NumberFormatting::INumberRounderOption>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NumberRounder(void**) noexcept = 0;
            virtual int32_t __stdcall put_NumberRounder(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::NumberFormatting::INumeralSystemTranslator>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Languages(void**) noexcept = 0;
            virtual int32_t __stdcall get_ResolvedLanguage(void**) noexcept = 0;
            virtual int32_t __stdcall get_NumeralSystem(void**) noexcept = 0;
            virtual int32_t __stdcall put_NumeralSystem(void*) noexcept = 0;
            virtual int32_t __stdcall TranslateNumerals(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::NumberFormatting::IPercentFormatterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreatePercentFormatter(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::NumberFormatting::IPermilleFormatterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreatePermilleFormatter(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::NumberFormatting::ISignedZeroOption>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsZeroSigned(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsZeroSigned(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RoundingAlgorithm(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RoundingAlgorithm(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SignificantDigits(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SignificantDigits(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::NumberFormatting::ISignificantDigitsOption>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SignificantDigits(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SignificantDigits(int32_t) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Globalization_NumberFormatting_ICurrencyFormatter
    {
        [[nodiscard]] auto Currency() const;
        auto Currency(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Globalization::NumberFormatting::ICurrencyFormatter>
    {
        template <typename D> using type = consume_Windows_Globalization_NumberFormatting_ICurrencyFormatter<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_NumberFormatting_ICurrencyFormatter2
    {
        [[nodiscard]] auto Mode() const;
        auto Mode(Windows::Globalization::NumberFormatting::CurrencyFormatterMode const& value) const;
        auto ApplyRoundingForCurrency(Windows::Globalization::NumberFormatting::RoundingAlgorithm const& roundingAlgorithm) const;
    };
    template <> struct consume<Windows::Globalization::NumberFormatting::ICurrencyFormatter2>
    {
        template <typename D> using type = consume_Windows_Globalization_NumberFormatting_ICurrencyFormatter2<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_NumberFormatting_ICurrencyFormatterFactory
    {
        auto CreateCurrencyFormatterCode(param::hstring const& currencyCode) const;
        auto CreateCurrencyFormatterCodeContext(param::hstring const& currencyCode, param::iterable<hstring> const& languages, param::hstring const& geographicRegion) const;
    };
    template <> struct consume<Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory>
    {
        template <typename D> using type = consume_Windows_Globalization_NumberFormatting_ICurrencyFormatterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_NumberFormatting_IDecimalFormatterFactory
    {
        auto CreateDecimalFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion) const;
    };
    template <> struct consume<Windows::Globalization::NumberFormatting::IDecimalFormatterFactory>
    {
        template <typename D> using type = consume_Windows_Globalization_NumberFormatting_IDecimalFormatterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_NumberFormatting_IIncrementNumberRounder
    {
        [[nodiscard]] auto RoundingAlgorithm() const;
        auto RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm const& value) const;
        [[nodiscard]] auto Increment() const;
        auto Increment(double value) const;
    };
    template <> struct consume<Windows::Globalization::NumberFormatting::IIncrementNumberRounder>
    {
        template <typename D> using type = consume_Windows_Globalization_NumberFormatting_IIncrementNumberRounder<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_NumberFormatting_INumberFormatter
    {
        auto Format(int64_t value) const;
        auto Format(uint64_t value) const;
        auto Format(double value) const;
    };
    template <> struct consume<Windows::Globalization::NumberFormatting::INumberFormatter>
    {
        template <typename D> using type = consume_Windows_Globalization_NumberFormatting_INumberFormatter<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_NumberFormatting_INumberFormatter2
    {
        auto FormatInt(int64_t value) const;
        auto FormatUInt(uint64_t value) const;
        auto FormatDouble(double value) const;
    };
    template <> struct consume<Windows::Globalization::NumberFormatting::INumberFormatter2>
    {
        template <typename D> using type = consume_Windows_Globalization_NumberFormatting_INumberFormatter2<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions
    {
        [[nodiscard]] auto Languages() const;
        [[nodiscard]] auto GeographicRegion() const;
        [[nodiscard]] auto IntegerDigits() const;
        auto IntegerDigits(int32_t value) const;
        [[nodiscard]] auto FractionDigits() const;
        auto FractionDigits(int32_t value) const;
        [[nodiscard]] auto IsGrouped() const;
        auto IsGrouped(bool value) const;
        [[nodiscard]] auto IsDecimalPointAlwaysDisplayed() const;
        auto IsDecimalPointAlwaysDisplayed(bool value) const;
        [[nodiscard]] auto NumeralSystem() const;
        auto NumeralSystem(param::hstring const& value) const;
        [[nodiscard]] auto ResolvedLanguage() const;
        [[nodiscard]] auto ResolvedGeographicRegion() const;
    };
    template <> struct consume<Windows::Globalization::NumberFormatting::INumberFormatterOptions>
    {
        template <typename D> using type = consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_NumberFormatting_INumberParser
    {
        auto ParseInt(param::hstring const& text) const;
        auto ParseUInt(param::hstring const& text) const;
        auto ParseDouble(param::hstring const& text) const;
    };
    template <> struct consume<Windows::Globalization::NumberFormatting::INumberParser>
    {
        template <typename D> using type = consume_Windows_Globalization_NumberFormatting_INumberParser<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_NumberFormatting_INumberRounder
    {
        auto RoundInt32(int32_t value) const;
        auto RoundUInt32(uint32_t value) const;
        auto RoundInt64(int64_t value) const;
        auto RoundUInt64(uint64_t value) const;
        auto RoundSingle(float value) const;
        auto RoundDouble(double value) const;
    };
    template <> struct consume<Windows::Globalization::NumberFormatting::INumberRounder>
    {
        template <typename D> using type = consume_Windows_Globalization_NumberFormatting_INumberRounder<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_NumberFormatting_INumberRounderOption
    {
        [[nodiscard]] auto NumberRounder() const;
        auto NumberRounder(Windows::Globalization::NumberFormatting::INumberRounder const& value) const;
    };
    template <> struct consume<Windows::Globalization::NumberFormatting::INumberRounderOption>
    {
        template <typename D> using type = consume_Windows_Globalization_NumberFormatting_INumberRounderOption<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslator
    {
        [[nodiscard]] auto Languages() const;
        [[nodiscard]] auto ResolvedLanguage() const;
        [[nodiscard]] auto NumeralSystem() const;
        auto NumeralSystem(param::hstring const& value) const;
        auto TranslateNumerals(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Globalization::NumberFormatting::INumeralSystemTranslator>
    {
        template <typename D> using type = consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslator<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslatorFactory
    {
        auto Create(param::iterable<hstring> const& languages) const;
    };
    template <> struct consume<Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory>
    {
        template <typename D> using type = consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslatorFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_NumberFormatting_IPercentFormatterFactory
    {
        auto CreatePercentFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion) const;
    };
    template <> struct consume<Windows::Globalization::NumberFormatting::IPercentFormatterFactory>
    {
        template <typename D> using type = consume_Windows_Globalization_NumberFormatting_IPercentFormatterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_NumberFormatting_IPermilleFormatterFactory
    {
        auto CreatePermilleFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion) const;
    };
    template <> struct consume<Windows::Globalization::NumberFormatting::IPermilleFormatterFactory>
    {
        template <typename D> using type = consume_Windows_Globalization_NumberFormatting_IPermilleFormatterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_NumberFormatting_ISignedZeroOption
    {
        [[nodiscard]] auto IsZeroSigned() const;
        auto IsZeroSigned(bool value) const;
    };
    template <> struct consume<Windows::Globalization::NumberFormatting::ISignedZeroOption>
    {
        template <typename D> using type = consume_Windows_Globalization_NumberFormatting_ISignedZeroOption<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_NumberFormatting_ISignificantDigitsNumberRounder
    {
        [[nodiscard]] auto RoundingAlgorithm() const;
        auto RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm const& value) const;
        [[nodiscard]] auto SignificantDigits() const;
        auto SignificantDigits(uint32_t value) const;
    };
    template <> struct consume<Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder>
    {
        template <typename D> using type = consume_Windows_Globalization_NumberFormatting_ISignificantDigitsNumberRounder<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_NumberFormatting_ISignificantDigitsOption
    {
        [[nodiscard]] auto SignificantDigits() const;
        auto SignificantDigits(int32_t value) const;
    };
    template <> struct consume<Windows::Globalization::NumberFormatting::ISignificantDigitsOption>
    {
        template <typename D> using type = consume_Windows_Globalization_NumberFormatting_ISignificantDigitsOption<D>;
    };
}
#endif
