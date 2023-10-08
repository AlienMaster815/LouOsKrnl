// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Perception_2_H
#define WINRT_Windows_Perception_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Perception.1.h"
WINRT_EXPORT namespace winrt::Windows::Perception
{
    struct __declspec(empty_bases) PerceptionTimestamp : Windows::Perception::IPerceptionTimestamp,
        impl::require<PerceptionTimestamp, Windows::Perception::IPerceptionTimestamp2>
    {
        PerceptionTimestamp(std::nullptr_t) noexcept {}
        PerceptionTimestamp(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::IPerceptionTimestamp(ptr, take_ownership_from_abi) {}
    };
    struct PerceptionTimestampHelper
    {
        PerceptionTimestampHelper() = delete;
        static auto FromHistoricalTargetTime(Windows::Foundation::DateTime const& targetTime);
        static auto FromSystemRelativeTargetTime(Windows::Foundation::TimeSpan const& targetTime);
    };
}
#endif
