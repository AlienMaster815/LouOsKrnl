// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Globalization_DateTimeFormatting_2_H
#define WINRT_Windows_Globalization_DateTimeFormatting_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Globalization.DateTimeFormatting.1.h"
WINRT_EXPORT namespace winrt::Windows::Globalization::DateTimeFormatting
{
    struct __declspec(empty_bases) DateTimeFormatter : Windows::Globalization::DateTimeFormatting::IDateTimeFormatter,
        impl::require<DateTimeFormatter, Windows::Globalization::DateTimeFormatting::IDateTimeFormatter2>
    {
        DateTimeFormatter(std::nullptr_t) noexcept {}
        DateTimeFormatter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Globalization::DateTimeFormatting::IDateTimeFormatter(ptr, take_ownership_from_abi) {}
        explicit DateTimeFormatter(param::hstring const& formatTemplate);
        DateTimeFormatter(param::hstring const& formatTemplate, param::iterable<hstring> const& languages);
        DateTimeFormatter(param::hstring const& formatTemplate, param::iterable<hstring> const& languages, param::hstring const& geographicRegion, param::hstring const& calendar, param::hstring const& clock);
        DateTimeFormatter(Windows::Globalization::DateTimeFormatting::YearFormat const& yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat const& monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat const& dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat const& dayOfWeekFormat);
        DateTimeFormatter(Windows::Globalization::DateTimeFormatting::HourFormat const& hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat const& minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat const& secondFormat);
        DateTimeFormatter(Windows::Globalization::DateTimeFormatting::YearFormat const& yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat const& monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat const& dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat const& dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::HourFormat const& hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat const& minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat const& secondFormat, param::iterable<hstring> const& languages);
        DateTimeFormatter(Windows::Globalization::DateTimeFormatting::YearFormat const& yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat const& monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat const& dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat const& dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::HourFormat const& hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat const& minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat const& secondFormat, param::iterable<hstring> const& languages, param::hstring const& geographicRegion, param::hstring const& calendar, param::hstring const& clock);
        using Windows::Globalization::DateTimeFormatting::IDateTimeFormatter::Format;
        using impl::consume_t<DateTimeFormatter, Windows::Globalization::DateTimeFormatting::IDateTimeFormatter2>::Format;
        [[nodiscard]] static auto LongDate();
        [[nodiscard]] static auto LongTime();
        [[nodiscard]] static auto ShortDate();
        [[nodiscard]] static auto ShortTime();
    };
}
#endif
