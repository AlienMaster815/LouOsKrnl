// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Lights_Effects_2_H
#define WINRT_Windows_Devices_Lights_Effects_2_H
#include "winrt/impl/Windows.Devices.Lights.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Devices.Lights.Effects.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Lights::Effects
{
    struct __declspec(empty_bases) LampArrayBitmapEffect : Windows::Devices::Lights::Effects::ILampArrayBitmapEffect,
        impl::require<LampArrayBitmapEffect, Windows::Devices::Lights::Effects::ILampArrayEffect>
    {
        LampArrayBitmapEffect(std::nullptr_t) noexcept {}
        LampArrayBitmapEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Lights::Effects::ILampArrayBitmapEffect(ptr, take_ownership_from_abi) {}
        LampArrayBitmapEffect(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes);
    };
    struct __declspec(empty_bases) LampArrayBitmapRequestedEventArgs : Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs
    {
        LampArrayBitmapRequestedEventArgs(std::nullptr_t) noexcept {}
        LampArrayBitmapRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LampArrayBlinkEffect : Windows::Devices::Lights::Effects::ILampArrayBlinkEffect,
        impl::require<LampArrayBlinkEffect, Windows::Devices::Lights::Effects::ILampArrayEffect>
    {
        LampArrayBlinkEffect(std::nullptr_t) noexcept {}
        LampArrayBlinkEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Lights::Effects::ILampArrayBlinkEffect(ptr, take_ownership_from_abi) {}
        LampArrayBlinkEffect(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes);
    };
    struct __declspec(empty_bases) LampArrayColorRampEffect : Windows::Devices::Lights::Effects::ILampArrayColorRampEffect,
        impl::require<LampArrayColorRampEffect, Windows::Devices::Lights::Effects::ILampArrayEffect>
    {
        LampArrayColorRampEffect(std::nullptr_t) noexcept {}
        LampArrayColorRampEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Lights::Effects::ILampArrayColorRampEffect(ptr, take_ownership_from_abi) {}
        LampArrayColorRampEffect(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes);
    };
    struct __declspec(empty_bases) LampArrayCustomEffect : Windows::Devices::Lights::Effects::ILampArrayCustomEffect,
        impl::require<LampArrayCustomEffect, Windows::Devices::Lights::Effects::ILampArrayEffect>
    {
        LampArrayCustomEffect(std::nullptr_t) noexcept {}
        LampArrayCustomEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Lights::Effects::ILampArrayCustomEffect(ptr, take_ownership_from_abi) {}
        LampArrayCustomEffect(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes);
    };
    struct __declspec(empty_bases) LampArrayEffectPlaylist : Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist,
        impl::require<LampArrayEffectPlaylist, Windows::Foundation::Collections::IIterable<Windows::Devices::Lights::Effects::ILampArrayEffect>, Windows::Foundation::Collections::IVectorView<Windows::Devices::Lights::Effects::ILampArrayEffect>>
    {
        LampArrayEffectPlaylist(std::nullptr_t) noexcept {}
        LampArrayEffectPlaylist(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist(ptr, take_ownership_from_abi) {}
        LampArrayEffectPlaylist();
        static auto StartAll(param::iterable<Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const& value);
        static auto StopAll(param::iterable<Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const& value);
        static auto PauseAll(param::iterable<Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const& value);
    };
    struct __declspec(empty_bases) LampArraySolidEffect : Windows::Devices::Lights::Effects::ILampArraySolidEffect,
        impl::require<LampArraySolidEffect, Windows::Devices::Lights::Effects::ILampArrayEffect>
    {
        LampArraySolidEffect(std::nullptr_t) noexcept {}
        LampArraySolidEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Lights::Effects::ILampArraySolidEffect(ptr, take_ownership_from_abi) {}
        LampArraySolidEffect(Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes);
    };
    struct __declspec(empty_bases) LampArrayUpdateRequestedEventArgs : Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs
    {
        LampArrayUpdateRequestedEventArgs(std::nullptr_t) noexcept {}
        LampArrayUpdateRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
