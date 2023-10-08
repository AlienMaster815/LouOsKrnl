// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Foundation_Numerics_2_H
#define WINRT_Windows_Foundation_Numerics_2_H
#include "winrt/impl/Windows.Foundation.Numerics.1.h"
namespace winrt::Windows::Foundation::Numerics
{
    struct Rational
    {
        uint32_t Numerator;
        uint32_t Denominator;
    };
    inline bool operator==(Rational const& left, Rational const& right) noexcept
    {
        return left.Numerator == right.Numerator && left.Denominator == right.Denominator;
    }
    inline bool operator!=(Rational const& left, Rational const& right) noexcept
    {
        return !(left == right);
    }
}
#endif
