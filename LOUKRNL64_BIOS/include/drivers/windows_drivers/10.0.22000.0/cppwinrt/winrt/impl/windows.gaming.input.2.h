// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_Input_2_H
#define WINRT_Windows_Gaming_Input_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Gaming.Input.1.h"
WINRT_EXPORT namespace winrt::Windows::Gaming::Input
{
    struct ArcadeStickReading
    {
        uint64_t Timestamp;
        Windows::Gaming::Input::ArcadeStickButtons Buttons;
    };
    inline bool operator==(ArcadeStickReading const& left, ArcadeStickReading const& right) noexcept
    {
        return left.Timestamp == right.Timestamp && left.Buttons == right.Buttons;
    }
    inline bool operator!=(ArcadeStickReading const& left, ArcadeStickReading const& right) noexcept
    {
        return !(left == right);
    }
    struct FlightStickReading
    {
        uint64_t Timestamp;
        Windows::Gaming::Input::FlightStickButtons Buttons;
        Windows::Gaming::Input::GameControllerSwitchPosition HatSwitch;
        double Roll;
        double Pitch;
        double Yaw;
        double Throttle;
    };
    inline bool operator==(FlightStickReading const& left, FlightStickReading const& right) noexcept
    {
        return left.Timestamp == right.Timestamp && left.Buttons == right.Buttons && left.HatSwitch == right.HatSwitch && left.Roll == right.Roll && left.Pitch == right.Pitch && left.Yaw == right.Yaw && left.Throttle == right.Throttle;
    }
    inline bool operator!=(FlightStickReading const& left, FlightStickReading const& right) noexcept
    {
        return !(left == right);
    }
    struct GamepadReading
    {
        uint64_t Timestamp;
        Windows::Gaming::Input::GamepadButtons Buttons;
        double LeftTrigger;
        double RightTrigger;
        double LeftThumbstickX;
        double LeftThumbstickY;
        double RightThumbstickX;
        double RightThumbstickY;
    };
    inline bool operator==(GamepadReading const& left, GamepadReading const& right) noexcept
    {
        return left.Timestamp == right.Timestamp && left.Buttons == right.Buttons && left.LeftTrigger == right.LeftTrigger && left.RightTrigger == right.RightTrigger && left.LeftThumbstickX == right.LeftThumbstickX && left.LeftThumbstickY == right.LeftThumbstickY && left.RightThumbstickX == right.RightThumbstickX && left.RightThumbstickY == right.RightThumbstickY;
    }
    inline bool operator!=(GamepadReading const& left, GamepadReading const& right) noexcept
    {
        return !(left == right);
    }
    struct GamepadVibration
    {
        double LeftMotor;
        double RightMotor;
        double LeftTrigger;
        double RightTrigger;
    };
    inline bool operator==(GamepadVibration const& left, GamepadVibration const& right) noexcept
    {
        return left.LeftMotor == right.LeftMotor && left.RightMotor == right.RightMotor && left.LeftTrigger == right.LeftTrigger && left.RightTrigger == right.RightTrigger;
    }
    inline bool operator!=(GamepadVibration const& left, GamepadVibration const& right) noexcept
    {
        return !(left == right);
    }
    struct RacingWheelReading
    {
        uint64_t Timestamp;
        Windows::Gaming::Input::RacingWheelButtons Buttons;
        int32_t PatternShifterGear;
        double Wheel;
        double Throttle;
        double Brake;
        double Clutch;
        double Handbrake;
    };
    inline bool operator==(RacingWheelReading const& left, RacingWheelReading const& right) noexcept
    {
        return left.Timestamp == right.Timestamp && left.Buttons == right.Buttons && left.PatternShifterGear == right.PatternShifterGear && left.Wheel == right.Wheel && left.Throttle == right.Throttle && left.Brake == right.Brake && left.Clutch == right.Clutch && left.Handbrake == right.Handbrake;
    }
    inline bool operator!=(RacingWheelReading const& left, RacingWheelReading const& right) noexcept
    {
        return !(left == right);
    }
    struct UINavigationReading
    {
        uint64_t Timestamp;
        Windows::Gaming::Input::RequiredUINavigationButtons RequiredButtons;
        Windows::Gaming::Input::OptionalUINavigationButtons OptionalButtons;
    };
    inline bool operator==(UINavigationReading const& left, UINavigationReading const& right) noexcept
    {
        return left.Timestamp == right.Timestamp && left.RequiredButtons == right.RequiredButtons && left.OptionalButtons == right.OptionalButtons;
    }
    inline bool operator!=(UINavigationReading const& left, UINavigationReading const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) ArcadeStick : Windows::Gaming::Input::IArcadeStick,
        impl::require<ArcadeStick, Windows::Gaming::Input::IGameControllerBatteryInfo>
    {
        ArcadeStick(std::nullptr_t) noexcept {}
        ArcadeStick(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::Input::IArcadeStick(ptr, take_ownership_from_abi) {}
        static auto ArcadeStickAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value);
        using ArcadeStickAdded_revoker = impl::factory_event_revoker<Windows::Gaming::Input::IArcadeStickStatics, &impl::abi_t<Windows::Gaming::Input::IArcadeStickStatics>::remove_ArcadeStickAdded>;
        [[nodiscard]] static ArcadeStickAdded_revoker ArcadeStickAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value);
        static auto ArcadeStickAdded(winrt::event_token const& token);
        static auto ArcadeStickRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value);
        using ArcadeStickRemoved_revoker = impl::factory_event_revoker<Windows::Gaming::Input::IArcadeStickStatics, &impl::abi_t<Windows::Gaming::Input::IArcadeStickStatics>::remove_ArcadeStickRemoved>;
        [[nodiscard]] static ArcadeStickRemoved_revoker ArcadeStickRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value);
        static auto ArcadeStickRemoved(winrt::event_token const& token);
        [[nodiscard]] static auto ArcadeSticks();
        static auto FromGameController(Windows::Gaming::Input::IGameController const& gameController);
    };
    struct __declspec(empty_bases) FlightStick : Windows::Gaming::Input::IFlightStick,
        impl::require<FlightStick, Windows::Gaming::Input::IGameControllerBatteryInfo>
    {
        FlightStick(std::nullptr_t) noexcept {}
        FlightStick(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::Input::IFlightStick(ptr, take_ownership_from_abi) {}
        static auto FlightStickAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value);
        using FlightStickAdded_revoker = impl::factory_event_revoker<Windows::Gaming::Input::IFlightStickStatics, &impl::abi_t<Windows::Gaming::Input::IFlightStickStatics>::remove_FlightStickAdded>;
        [[nodiscard]] static FlightStickAdded_revoker FlightStickAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value);
        static auto FlightStickAdded(winrt::event_token const& token);
        static auto FlightStickRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value);
        using FlightStickRemoved_revoker = impl::factory_event_revoker<Windows::Gaming::Input::IFlightStickStatics, &impl::abi_t<Windows::Gaming::Input::IFlightStickStatics>::remove_FlightStickRemoved>;
        [[nodiscard]] static FlightStickRemoved_revoker FlightStickRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value);
        static auto FlightStickRemoved(winrt::event_token const& token);
        [[nodiscard]] static auto FlightSticks();
        static auto FromGameController(Windows::Gaming::Input::IGameController const& gameController);
    };
    struct __declspec(empty_bases) Gamepad : Windows::Gaming::Input::IGamepad,
        impl::require<Gamepad, Windows::Gaming::Input::IGamepad2, Windows::Gaming::Input::IGameControllerBatteryInfo>
    {
        Gamepad(std::nullptr_t) noexcept {}
        Gamepad(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::Input::IGamepad(ptr, take_ownership_from_abi) {}
        static auto GamepadAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value);
        using GamepadAdded_revoker = impl::factory_event_revoker<Windows::Gaming::Input::IGamepadStatics, &impl::abi_t<Windows::Gaming::Input::IGamepadStatics>::remove_GamepadAdded>;
        [[nodiscard]] static GamepadAdded_revoker GamepadAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value);
        static auto GamepadAdded(winrt::event_token const& token);
        static auto GamepadRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value);
        using GamepadRemoved_revoker = impl::factory_event_revoker<Windows::Gaming::Input::IGamepadStatics, &impl::abi_t<Windows::Gaming::Input::IGamepadStatics>::remove_GamepadRemoved>;
        [[nodiscard]] static GamepadRemoved_revoker GamepadRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value);
        static auto GamepadRemoved(winrt::event_token const& token);
        [[nodiscard]] static auto Gamepads();
        static auto FromGameController(Windows::Gaming::Input::IGameController const& gameController);
    };
    struct __declspec(empty_bases) Headset : Windows::Gaming::Input::IHeadset,
        impl::require<Headset, Windows::Gaming::Input::IGameControllerBatteryInfo>
    {
        Headset(std::nullptr_t) noexcept {}
        Headset(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::Input::IHeadset(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RacingWheel : Windows::Gaming::Input::IRacingWheel,
        impl::require<RacingWheel, Windows::Gaming::Input::IGameControllerBatteryInfo>
    {
        RacingWheel(std::nullptr_t) noexcept {}
        RacingWheel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::Input::IRacingWheel(ptr, take_ownership_from_abi) {}
        static auto RacingWheelAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value);
        using RacingWheelAdded_revoker = impl::factory_event_revoker<Windows::Gaming::Input::IRacingWheelStatics, &impl::abi_t<Windows::Gaming::Input::IRacingWheelStatics>::remove_RacingWheelAdded>;
        [[nodiscard]] static RacingWheelAdded_revoker RacingWheelAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value);
        static auto RacingWheelAdded(winrt::event_token const& token);
        static auto RacingWheelRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value);
        using RacingWheelRemoved_revoker = impl::factory_event_revoker<Windows::Gaming::Input::IRacingWheelStatics, &impl::abi_t<Windows::Gaming::Input::IRacingWheelStatics>::remove_RacingWheelRemoved>;
        [[nodiscard]] static RacingWheelRemoved_revoker RacingWheelRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value);
        static auto RacingWheelRemoved(winrt::event_token const& token);
        [[nodiscard]] static auto RacingWheels();
        static auto FromGameController(Windows::Gaming::Input::IGameController const& gameController);
    };
    struct __declspec(empty_bases) RawGameController : Windows::Gaming::Input::IRawGameController,
        impl::require<RawGameController, Windows::Gaming::Input::IGameControllerBatteryInfo, Windows::Gaming::Input::IRawGameController2>
    {
        RawGameController(std::nullptr_t) noexcept {}
        RawGameController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::Input::IRawGameController(ptr, take_ownership_from_abi) {}
        static auto RawGameControllerAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value);
        using RawGameControllerAdded_revoker = impl::factory_event_revoker<Windows::Gaming::Input::IRawGameControllerStatics, &impl::abi_t<Windows::Gaming::Input::IRawGameControllerStatics>::remove_RawGameControllerAdded>;
        [[nodiscard]] static RawGameControllerAdded_revoker RawGameControllerAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value);
        static auto RawGameControllerAdded(winrt::event_token const& token);
        static auto RawGameControllerRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value);
        using RawGameControllerRemoved_revoker = impl::factory_event_revoker<Windows::Gaming::Input::IRawGameControllerStatics, &impl::abi_t<Windows::Gaming::Input::IRawGameControllerStatics>::remove_RawGameControllerRemoved>;
        [[nodiscard]] static RawGameControllerRemoved_revoker RawGameControllerRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value);
        static auto RawGameControllerRemoved(winrt::event_token const& token);
        [[nodiscard]] static auto RawGameControllers();
        static auto FromGameController(Windows::Gaming::Input::IGameController const& gameController);
    };
    struct __declspec(empty_bases) UINavigationController : Windows::Gaming::Input::IUINavigationController,
        impl::require<UINavigationController, Windows::Gaming::Input::IGameControllerBatteryInfo>
    {
        UINavigationController(std::nullptr_t) noexcept {}
        UINavigationController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::Input::IUINavigationController(ptr, take_ownership_from_abi) {}
        static auto UINavigationControllerAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value);
        using UINavigationControllerAdded_revoker = impl::factory_event_revoker<Windows::Gaming::Input::IUINavigationControllerStatics, &impl::abi_t<Windows::Gaming::Input::IUINavigationControllerStatics>::remove_UINavigationControllerAdded>;
        [[nodiscard]] static UINavigationControllerAdded_revoker UINavigationControllerAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value);
        static auto UINavigationControllerAdded(winrt::event_token const& token);
        static auto UINavigationControllerRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value);
        using UINavigationControllerRemoved_revoker = impl::factory_event_revoker<Windows::Gaming::Input::IUINavigationControllerStatics, &impl::abi_t<Windows::Gaming::Input::IUINavigationControllerStatics>::remove_UINavigationControllerRemoved>;
        [[nodiscard]] static UINavigationControllerRemoved_revoker UINavigationControllerRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value);
        static auto UINavigationControllerRemoved(winrt::event_token const& token);
        [[nodiscard]] static auto UINavigationControllers();
        static auto FromGameController(Windows::Gaming::Input::IGameController const& gameController);
    };
}
#endif
