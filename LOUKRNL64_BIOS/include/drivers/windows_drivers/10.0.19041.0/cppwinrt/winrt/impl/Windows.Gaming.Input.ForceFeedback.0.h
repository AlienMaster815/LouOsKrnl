// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_Input_ForceFeedback_0_H
#define WINRT_Windows_Gaming_Input_ForceFeedback_0_H
namespace winrt::Windows::Foundation
{
}
namespace winrt::Windows::Foundation::Numerics
{
}
namespace winrt::Windows::Gaming::Input::ForceFeedback
{
    enum class ConditionForceEffectKind : int32_t
    {
        Spring = 0,
        Damper = 1,
        Inertia = 2,
        Friction = 3,
    };
    enum class ForceFeedbackEffectAxes : uint32_t
    {
        None = 0,
        X = 0x1,
        Y = 0x2,
        Z = 0x4,
    };
    enum class ForceFeedbackEffectState : int32_t
    {
        Stopped = 0,
        Running = 1,
        Paused = 2,
        Faulted = 3,
    };
    enum class ForceFeedbackLoadEffectResult : int32_t
    {
        Succeeded = 0,
        EffectStorageFull = 1,
        EffectNotSupported = 2,
    };
    enum class PeriodicForceEffectKind : int32_t
    {
        SquareWave = 0,
        SineWave = 1,
        TriangleWave = 2,
        SawtoothWaveUp = 3,
        SawtoothWaveDown = 4,
    };
    struct IConditionForceEffect;
    struct IConditionForceEffectFactory;
    struct IConstantForceEffect;
    struct IForceFeedbackEffect;
    struct IForceFeedbackMotor;
    struct IPeriodicForceEffect;
    struct IPeriodicForceEffectFactory;
    struct IRampForceEffect;
    struct ConditionForceEffect;
    struct ConstantForceEffect;
    struct ForceFeedbackMotor;
    struct PeriodicForceEffect;
    struct RampForceEffect;
}
namespace winrt::impl
{
    template <> struct category<Windows::Gaming::Input::ForceFeedback::IConditionForceEffect>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Input::ForceFeedback::IConstantForceEffect>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Input::ForceFeedback::IRampForceEffect>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Input::ForceFeedback::ConditionForceEffect>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Gaming::Input::ForceFeedback::ConstantForceEffect>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Gaming::Input::ForceFeedback::PeriodicForceEffect>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Gaming::Input::ForceFeedback::RampForceEffect>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectAxes>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Gaming::Input::ForceFeedback::IConditionForceEffect>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.IConditionForceEffect" };
    };
    template <> struct name<Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.IConditionForceEffectFactory" };
    };
    template <> struct name<Windows::Gaming::Input::ForceFeedback::IConstantForceEffect>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.IConstantForceEffect" };
    };
    template <> struct name<Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect" };
    };
    template <> struct name<Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.IForceFeedbackMotor" };
    };
    template <> struct name<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.IPeriodicForceEffect" };
    };
    template <> struct name<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.IPeriodicForceEffectFactory" };
    };
    template <> struct name<Windows::Gaming::Input::ForceFeedback::IRampForceEffect>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.IRampForceEffect" };
    };
    template <> struct name<Windows::Gaming::Input::ForceFeedback::ConditionForceEffect>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.ConditionForceEffect" };
    };
    template <> struct name<Windows::Gaming::Input::ForceFeedback::ConstantForceEffect>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.ConstantForceEffect" };
    };
    template <> struct name<Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.ForceFeedbackMotor" };
    };
    template <> struct name<Windows::Gaming::Input::ForceFeedback::PeriodicForceEffect>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.PeriodicForceEffect" };
    };
    template <> struct name<Windows::Gaming::Input::ForceFeedback::RampForceEffect>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.RampForceEffect" };
    };
    template <> struct name<Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.ConditionForceEffectKind" };
    };
    template <> struct name<Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectAxes>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.ForceFeedbackEffectAxes" };
    };
    template <> struct name<Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectState>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.ForceFeedbackEffectState" };
    };
    template <> struct name<Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.ForceFeedbackLoadEffectResult" };
    };
    template <> struct name<Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.PeriodicForceEffectKind" };
    };
    template <> struct guid_storage<Windows::Gaming::Input::ForceFeedback::IConditionForceEffect>
    {
        static constexpr guid value{ 0x32D1EA68,0x3695,0x4E69,{ 0x85,0xC0,0xCD,0x19,0x44,0x18,0x91,0x40 } };
    };
    template <> struct guid_storage<Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory>
    {
        static constexpr guid value{ 0x91A99264,0x1810,0x4EB6,{ 0xA7,0x73,0xBF,0xD3,0xB8,0xCD,0xDB,0xAB } };
    };
    template <> struct guid_storage<Windows::Gaming::Input::ForceFeedback::IConstantForceEffect>
    {
        static constexpr guid value{ 0x9BFA0140,0xF3C7,0x415C,{ 0xB0,0x68,0x0F,0x06,0x87,0x34,0xBC,0xE0 } };
    };
    template <> struct guid_storage<Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        static constexpr guid value{ 0xA17FBA0C,0x2AE4,0x48C2,{ 0x80,0x63,0xEA,0xBD,0x07,0x77,0xCB,0x89 } };
    };
    template <> struct guid_storage<Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor>
    {
        static constexpr guid value{ 0x8D3D417C,0xA5EA,0x4516,{ 0x80,0x26,0x2B,0x00,0xF7,0x4E,0xF6,0xE5 } };
    };
    template <> struct guid_storage<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect>
    {
        static constexpr guid value{ 0x5C5138D7,0xFC75,0x4D52,{ 0x9A,0x0A,0xEF,0xE4,0xCA,0xB5,0xFE,0x64 } };
    };
    template <> struct guid_storage<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory>
    {
        static constexpr guid value{ 0x6F62EB1A,0x9851,0x477B,{ 0xB3,0x18,0x35,0xEC,0xAA,0x15,0x07,0x0F } };
    };
    template <> struct guid_storage<Windows::Gaming::Input::ForceFeedback::IRampForceEffect>
    {
        static constexpr guid value{ 0xF1F81259,0x1CA6,0x4080,{ 0xB5,0x6D,0xB4,0x3F,0x33,0x54,0xD0,0x52 } };
    };
    template <> struct default_interface<Windows::Gaming::Input::ForceFeedback::ConditionForceEffect>
    {
        using type = Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect;
    };
    template <> struct default_interface<Windows::Gaming::Input::ForceFeedback::ConstantForceEffect>
    {
        using type = Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect;
    };
    template <> struct default_interface<Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor>
    {
        using type = Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor;
    };
    template <> struct default_interface<Windows::Gaming::Input::ForceFeedback::PeriodicForceEffect>
    {
        using type = Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect;
    };
    template <> struct default_interface<Windows::Gaming::Input::ForceFeedback::RampForceEffect>
    {
        using type = Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect;
    };
    template <> struct abi<Windows::Gaming::Input::ForceFeedback::IConditionForceEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetParameters(Windows::Foundation::Numerics::float3, float, float, float, float, float, float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Input::ForceFeedback::IConstantForceEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetParameters(Windows::Foundation::Numerics::float3, int64_t) noexcept = 0;
            virtual int32_t __stdcall SetParametersWithEnvelope(Windows::Foundation::Numerics::float3, float, float, float, int64_t, int64_t, int64_t, int64_t, uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Gain(double*) noexcept = 0;
            virtual int32_t __stdcall put_Gain(double) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AreEffectsPaused(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MasterGain(double*) noexcept = 0;
            virtual int32_t __stdcall put_MasterGain(double) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedAxes(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall LoadEffectAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall PauseAllEffects() noexcept = 0;
            virtual int32_t __stdcall ResumeAllEffects() noexcept = 0;
            virtual int32_t __stdcall StopAllEffects() noexcept = 0;
            virtual int32_t __stdcall TryDisableAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryEnableAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryResetAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryUnloadEffectAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetParameters(Windows::Foundation::Numerics::float3, float, float, float, int64_t) noexcept = 0;
            virtual int32_t __stdcall SetParametersWithEnvelope(Windows::Foundation::Numerics::float3, float, float, float, float, float, float, int64_t, int64_t, int64_t, int64_t, uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Input::ForceFeedback::IRampForceEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetParameters(Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::float3, int64_t) noexcept = 0;
            virtual int32_t __stdcall SetParametersWithEnvelope(Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::float3, float, float, float, int64_t, int64_t, int64_t, int64_t, uint32_t) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Gaming_Input_ForceFeedback_IConditionForceEffect
    {
        [[nodiscard]] auto Kind() const;
        auto SetParameters(Windows::Foundation::Numerics::float3 const& direction, float positiveCoefficient, float negativeCoefficient, float maxPositiveMagnitude, float maxNegativeMagnitude, float deadZone, float bias) const;
    };
    template <> struct consume<Windows::Gaming::Input::ForceFeedback::IConditionForceEffect>
    {
        template <typename D> using type = consume_Windows_Gaming_Input_ForceFeedback_IConditionForceEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Input_ForceFeedback_IConditionForceEffectFactory
    {
        auto CreateInstance(Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind const& effectKind) const;
    };
    template <> struct consume<Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory>
    {
        template <typename D> using type = consume_Windows_Gaming_Input_ForceFeedback_IConditionForceEffectFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Input_ForceFeedback_IConstantForceEffect
    {
        auto SetParameters(Windows::Foundation::Numerics::float3 const& vector, Windows::Foundation::TimeSpan const& duration) const;
        auto SetParametersWithEnvelope(Windows::Foundation::Numerics::float3 const& vector, float attackGain, float sustainGain, float releaseGain, Windows::Foundation::TimeSpan const& startDelay, Windows::Foundation::TimeSpan const& attackDuration, Windows::Foundation::TimeSpan const& sustainDuration, Windows::Foundation::TimeSpan const& releaseDuration, uint32_t repeatCount) const;
    };
    template <> struct consume<Windows::Gaming::Input::ForceFeedback::IConstantForceEffect>
    {
        template <typename D> using type = consume_Windows_Gaming_Input_ForceFeedback_IConstantForceEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackEffect
    {
        [[nodiscard]] auto Gain() const;
        auto Gain(double value) const;
        [[nodiscard]] auto State() const;
        auto Start() const;
        auto Stop() const;
    };
    template <> struct consume<Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        template <typename D> using type = consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor
    {
        [[nodiscard]] auto AreEffectsPaused() const;
        [[nodiscard]] auto MasterGain() const;
        auto MasterGain(double value) const;
        [[nodiscard]] auto IsEnabled() const;
        [[nodiscard]] auto SupportedAxes() const;
        auto LoadEffectAsync(Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect const& effect) const;
        auto PauseAllEffects() const;
        auto ResumeAllEffects() const;
        auto StopAllEffects() const;
        auto TryDisableAsync() const;
        auto TryEnableAsync() const;
        auto TryResetAsync() const;
        auto TryUnloadEffectAsync(Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect const& effect) const;
    };
    template <> struct consume<Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor>
    {
        template <typename D> using type = consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffect
    {
        [[nodiscard]] auto Kind() const;
        auto SetParameters(Windows::Foundation::Numerics::float3 const& vector, float frequency, float phase, float bias, Windows::Foundation::TimeSpan const& duration) const;
        auto SetParametersWithEnvelope(Windows::Foundation::Numerics::float3 const& vector, float frequency, float phase, float bias, float attackGain, float sustainGain, float releaseGain, Windows::Foundation::TimeSpan const& startDelay, Windows::Foundation::TimeSpan const& attackDuration, Windows::Foundation::TimeSpan const& sustainDuration, Windows::Foundation::TimeSpan const& releaseDuration, uint32_t repeatCount) const;
    };
    template <> struct consume<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect>
    {
        template <typename D> using type = consume_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffectFactory
    {
        auto CreateInstance(Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind const& effectKind) const;
    };
    template <> struct consume<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory>
    {
        template <typename D> using type = consume_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffectFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Input_ForceFeedback_IRampForceEffect
    {
        auto SetParameters(Windows::Foundation::Numerics::float3 const& startVector, Windows::Foundation::Numerics::float3 const& endVector, Windows::Foundation::TimeSpan const& duration) const;
        auto SetParametersWithEnvelope(Windows::Foundation::Numerics::float3 const& startVector, Windows::Foundation::Numerics::float3 const& endVector, float attackGain, float sustainGain, float releaseGain, Windows::Foundation::TimeSpan const& startDelay, Windows::Foundation::TimeSpan const& attackDuration, Windows::Foundation::TimeSpan const& sustainDuration, Windows::Foundation::TimeSpan const& releaseDuration, uint32_t repeatCount) const;
    };
    template <> struct consume<Windows::Gaming::Input::ForceFeedback::IRampForceEffect>
    {
        template <typename D> using type = consume_Windows_Gaming_Input_ForceFeedback_IRampForceEffect<D>;
    };
}
#endif
