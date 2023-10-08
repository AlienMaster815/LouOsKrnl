// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Globalization_PhoneNumberFormatting_0_H
#define WINRT_Windows_Globalization_PhoneNumberFormatting_0_H
namespace winrt::Windows::Globalization::PhoneNumberFormatting
{
    enum class PhoneNumberFormat : int32_t
    {
        E164 = 0,
        International = 1,
        National = 2,
        Rfc3966 = 3,
    };
    enum class PhoneNumberMatchResult : int32_t
    {
        NoMatch = 0,
        ShortNationalSignificantNumberMatch = 1,
        NationalSignificantNumberMatch = 2,
        ExactMatch = 3,
    };
    enum class PhoneNumberParseResult : int32_t
    {
        Valid = 0,
        NotANumber = 1,
        InvalidCountryCode = 2,
        TooShort = 3,
        TooLong = 4,
    };
    enum class PredictedPhoneNumberKind : int32_t
    {
        FixedLine = 0,
        Mobile = 1,
        FixedLineOrMobile = 2,
        TollFree = 3,
        PremiumRate = 4,
        SharedCost = 5,
        Voip = 6,
        PersonalNumber = 7,
        Pager = 8,
        UniversalAccountNumber = 9,
        Voicemail = 10,
        Unknown = 11,
    };
    struct IPhoneNumberFormatter;
    struct IPhoneNumberFormatterStatics;
    struct IPhoneNumberInfo;
    struct IPhoneNumberInfoFactory;
    struct IPhoneNumberInfoStatics;
    struct PhoneNumberFormatter;
    struct PhoneNumberInfo;
}
namespace winrt::impl
{
    template <> struct category<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter>
    {
        static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatter" };
    };
    template <> struct name<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>
    {
        static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatterStatics" };
    };
    template <> struct name<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo>
    {
        static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfo" };
    };
    template <> struct name<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory>
    {
        static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoFactory" };
    };
    template <> struct name<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics>
    {
        static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoStatics" };
    };
    template <> struct name<Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter>
    {
        static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberFormatter" };
    };
    template <> struct name<Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo>
    {
        static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberInfo" };
    };
    template <> struct name<Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat>
    {
        static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberFormat" };
    };
    template <> struct name<Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult>
    {
        static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberMatchResult" };
    };
    template <> struct name<Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult>
    {
        static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberParseResult" };
    };
    template <> struct name<Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind>
    {
        static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.PredictedPhoneNumberKind" };
    };
    template <> struct guid_storage<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter>
    {
        static constexpr guid value{ 0x1556B49E,0xBAD4,0x4B4A,{ 0x90,0x0D,0x44,0x07,0xAD,0xB7,0xC9,0x81 } };
    };
    template <> struct guid_storage<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>
    {
        static constexpr guid value{ 0x5CA6F931,0x84D9,0x414B,{ 0xAB,0x4E,0xA0,0x55,0x2C,0x87,0x86,0x02 } };
    };
    template <> struct guid_storage<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo>
    {
        static constexpr guid value{ 0x1C7CE4DD,0xC8B4,0x4EA3,{ 0x9A,0xEF,0xB3,0x42,0xE2,0xC5,0xB4,0x17 } };
    };
    template <> struct guid_storage<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory>
    {
        static constexpr guid value{ 0x8202B964,0xADAA,0x4CFF,{ 0x8F,0xCF,0x17,0xE7,0x51,0x6A,0x28,0xFF } };
    };
    template <> struct guid_storage<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics>
    {
        static constexpr guid value{ 0x5B3F4F6A,0x86A9,0x40E9,{ 0x86,0x49,0x6D,0x61,0x16,0x19,0x28,0xD4 } };
    };
    template <> struct default_interface<Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter>
    {
        using type = Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter;
    };
    template <> struct default_interface<Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo>
    {
        using type = Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo;
    };
    template <> struct abi<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Format(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FormatWithOutputFormat(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FormatPartialString(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FormatString(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FormatStringWithLeftToRightMarkers(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCreate(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetCountryCodeForRegion(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetNationalDirectDialingPrefixForRegion(void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall WrapWithLeftToRightMarkers(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CountryCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PhoneNumber(void**) noexcept = 0;
            virtual int32_t __stdcall GetLengthOfGeographicalAreaCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetNationalSignificantNumber(void**) noexcept = 0;
            virtual int32_t __stdcall GetLengthOfNationalDestinationCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall PredictNumberKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetGeographicRegionCode(void**) noexcept = 0;
            virtual int32_t __stdcall CheckNumberMatch(void*, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryParse(void*, void**, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryParseWithRegion(void*, void*, void**, int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatter
    {
        auto Format(Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo const& number) const;
        auto Format(Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo const& number, Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat const& numberFormat) const;
        auto FormatPartialString(param::hstring const& number) const;
        auto FormatString(param::hstring const& number) const;
        auto FormatStringWithLeftToRightMarkers(param::hstring const& number) const;
    };
    template <> struct consume<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter>
    {
        template <typename D> using type = consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatter<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatterStatics
    {
        auto TryCreate(param::hstring const& regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter& phoneNumber) const;
        auto GetCountryCodeForRegion(param::hstring const& regionCode) const;
        auto GetNationalDirectDialingPrefixForRegion(param::hstring const& regionCode, bool stripNonDigit) const;
        auto WrapWithLeftToRightMarkers(param::hstring const& number) const;
    };
    template <> struct consume<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>
    {
        template <typename D> using type = consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfo
    {
        [[nodiscard]] auto CountryCode() const;
        [[nodiscard]] auto PhoneNumber() const;
        auto GetLengthOfGeographicalAreaCode() const;
        auto GetNationalSignificantNumber() const;
        auto GetLengthOfNationalDestinationCode() const;
        auto PredictNumberKind() const;
        auto GetGeographicRegionCode() const;
        auto CheckNumberMatch(Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo const& otherNumber) const;
    };
    template <> struct consume<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo>
    {
        template <typename D> using type = consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoFactory
    {
        auto Create(param::hstring const& number) const;
    };
    template <> struct consume<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory>
    {
        template <typename D> using type = consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoStatics
    {
        auto TryParse(param::hstring const& input, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo& phoneNumber) const;
        auto TryParse(param::hstring const& input, param::hstring const& regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo& phoneNumber) const;
    };
    template <> struct consume<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics>
    {
        template <typename D> using type = consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoStatics<D>;
    };
}
#endif
