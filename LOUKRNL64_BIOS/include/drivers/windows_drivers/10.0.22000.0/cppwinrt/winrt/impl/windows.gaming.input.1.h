// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_Input_1_H
#define WINRT_Windows_Gaming_Input_1_H
#include "winrt/impl/Windows.Gaming.Input.0.h"
WINRT_EXPORT namespace winrt::Windows::Gaming::Input
{
    struct __declspec(empty_bases) IArcadeStick :
        Windows::Foundation::IInspectable,
        impl::consume_t<IArcadeStick>,
        impl::require<Windows::Gaming::Input::IArcadeStick, Windows::Gaming::Input::IGameController>
    {
        IArcadeStick(std::nullptr_t = nullptr) noexcept {}
        IArcadeStick(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IArcadeStickStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IArcadeStickStatics>
    {
        IArcadeStickStatics(std::nullptr_t = nullptr) noexcept {}
        IArcadeStickStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IArcadeStickStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IArcadeStickStatics2>,
        impl::require<Windows::Gaming::Input::IArcadeStickStatics2, Windows::Gaming::Input::IArcadeStickStatics>
    {
        IArcadeStickStatics2(std::nullptr_t = nullptr) noexcept {}
        IArcadeStickStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFlightStick :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFlightStick>,
        impl::require<Windows::Gaming::Input::IFlightStick, Windows::Gaming::Input::IGameController>
    {
        IFlightStick(std::nullptr_t = nullptr) noexcept {}
        IFlightStick(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFlightStickStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFlightStickStatics>
    {
        IFlightStickStatics(std::nullptr_t = nullptr) noexcept {}
        IFlightStickStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGameController :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGameController>
    {
        IGameController(std::nullptr_t = nullptr) noexcept {}
        IGameController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGameControllerBatteryInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGameControllerBatteryInfo>
    {
        IGameControllerBatteryInfo(std::nullptr_t = nullptr) noexcept {}
        IGameControllerBatteryInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGamepad :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGamepad>,
        impl::require<Windows::Gaming::Input::IGamepad, Windows::Gaming::Input::IGameController>
    {
        IGamepad(std::nullptr_t = nullptr) noexcept {}
        IGamepad(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGamepad2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGamepad2>,
        impl::require<Windows::Gaming::Input::IGamepad2, Windows::Gaming::Input::IGameController, Windows::Gaming::Input::IGamepad>
    {
        IGamepad2(std::nullptr_t = nullptr) noexcept {}
        IGamepad2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGamepadStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGamepadStatics>
    {
        IGamepadStatics(std::nullptr_t = nullptr) noexcept {}
        IGamepadStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGamepadStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGamepadStatics2>,
        impl::require<Windows::Gaming::Input::IGamepadStatics2, Windows::Gaming::Input::IGamepadStatics>
    {
        IGamepadStatics2(std::nullptr_t = nullptr) noexcept {}
        IGamepadStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHeadset :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHeadset>
    {
        IHeadset(std::nullptr_t = nullptr) noexcept {}
        IHeadset(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRacingWheel :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRacingWheel>,
        impl::require<Windows::Gaming::Input::IRacingWheel, Windows::Gaming::Input::IGameController>
    {
        IRacingWheel(std::nullptr_t = nullptr) noexcept {}
        IRacingWheel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRacingWheelStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRacingWheelStatics>
    {
        IRacingWheelStatics(std::nullptr_t = nullptr) noexcept {}
        IRacingWheelStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRacingWheelStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRacingWheelStatics2>,
        impl::require<Windows::Gaming::Input::IRacingWheelStatics2, Windows::Gaming::Input::IRacingWheelStatics>
    {
        IRacingWheelStatics2(std::nullptr_t = nullptr) noexcept {}
        IRacingWheelStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRawGameController :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRawGameController>,
        impl::require<Windows::Gaming::Input::IRawGameController, Windows::Gaming::Input::IGameController>
    {
        IRawGameController(std::nullptr_t = nullptr) noexcept {}
        IRawGameController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRawGameController2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRawGameController2>,
        impl::require<Windows::Gaming::Input::IRawGameController2, Windows::Gaming::Input::IGameController, Windows::Gaming::Input::IRawGameController>
    {
        IRawGameController2(std::nullptr_t = nullptr) noexcept {}
        IRawGameController2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRawGameControllerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRawGameControllerStatics>
    {
        IRawGameControllerStatics(std::nullptr_t = nullptr) noexcept {}
        IRawGameControllerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUINavigationController :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUINavigationController>,
        impl::require<Windows::Gaming::Input::IUINavigationController, Windows::Gaming::Input::IGameController>
    {
        IUINavigationController(std::nullptr_t = nullptr) noexcept {}
        IUINavigationController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUINavigationControllerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUINavigationControllerStatics>
    {
        IUINavigationControllerStatics(std::nullptr_t = nullptr) noexcept {}
        IUINavigationControllerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUINavigationControllerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUINavigationControllerStatics2>,
        impl::require<Windows::Gaming::Input::IUINavigationControllerStatics2, Windows::Gaming::Input::IUINavigationControllerStatics>
    {
        IUINavigationControllerStatics2(std::nullptr_t = nullptr) noexcept {}
        IUINavigationControllerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
