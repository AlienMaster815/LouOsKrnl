// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_H
#define WINRT_Windows_Graphics_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/impl/Windows.Graphics.2.h"
namespace winrt::impl
{
    template <typename D>
    struct produce<D, Windows::Graphics::IGeometrySource2D> : produce_base<D, Windows::Graphics::IGeometrySource2D>
    {
    };
}
WINRT_EXPORT namespace winrt::Windows::Graphics
{
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Graphics::IGeometrySource2D> : winrt::impl::hash_base {};
#endif
}
#endif
