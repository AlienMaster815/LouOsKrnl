// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Composition_Effects_0_H
#define WINRT_Windows_UI_Composition_Effects_0_H
namespace winrt::Windows::Graphics::Effects
{
    struct IGraphicsEffectSource;
}
namespace winrt::Windows::UI::Composition::Effects
{
    enum class SceneLightingEffectReflectanceModel : int32_t
    {
        BlinnPhong = 0,
        PhysicallyBasedBlinnPhong = 1,
    };
    struct ISceneLightingEffect;
    struct ISceneLightingEffect2;
    struct SceneLightingEffect;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Composition::Effects::ISceneLightingEffect>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Effects::ISceneLightingEffect2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Composition::Effects::SceneLightingEffect>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Composition::Effects::SceneLightingEffectReflectanceModel>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::UI::Composition::Effects::ISceneLightingEffect>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Effects.ISceneLightingEffect" };
    };
    template <> struct name<Windows::UI::Composition::Effects::ISceneLightingEffect2>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Effects.ISceneLightingEffect2" };
    };
    template <> struct name<Windows::UI::Composition::Effects::SceneLightingEffect>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Effects.SceneLightingEffect" };
    };
    template <> struct name<Windows::UI::Composition::Effects::SceneLightingEffectReflectanceModel>
    {
        static constexpr auto & value{ L"Windows.UI.Composition.Effects.SceneLightingEffectReflectanceModel" };
    };
    template <> struct guid_storage<Windows::UI::Composition::Effects::ISceneLightingEffect>
    {
        static constexpr guid value{ 0x91BB5E52,0x95D1,0x4F8B,{ 0x9A,0x5A,0x64,0x08,0xB2,0x4B,0x8C,0x6A } };
    };
    template <> struct guid_storage<Windows::UI::Composition::Effects::ISceneLightingEffect2>
    {
        static constexpr guid value{ 0x9E270E81,0x72F0,0x4C5C,{ 0x95,0xF8,0x8A,0x6E,0x00,0x24,0xF4,0x09 } };
    };
    template <> struct default_interface<Windows::UI::Composition::Effects::SceneLightingEffect>
    {
        using type = Windows::UI::Composition::Effects::ISceneLightingEffect;
    };
    template <> struct abi<Windows::UI::Composition::Effects::ISceneLightingEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AmbientAmount(float*) noexcept = 0;
            virtual int32_t __stdcall put_AmbientAmount(float) noexcept = 0;
            virtual int32_t __stdcall get_DiffuseAmount(float*) noexcept = 0;
            virtual int32_t __stdcall put_DiffuseAmount(float) noexcept = 0;
            virtual int32_t __stdcall get_NormalMapSource(void**) noexcept = 0;
            virtual int32_t __stdcall put_NormalMapSource(void*) noexcept = 0;
            virtual int32_t __stdcall get_SpecularAmount(float*) noexcept = 0;
            virtual int32_t __stdcall put_SpecularAmount(float) noexcept = 0;
            virtual int32_t __stdcall get_SpecularShine(float*) noexcept = 0;
            virtual int32_t __stdcall put_SpecularShine(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Effects::ISceneLightingEffect2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReflectanceModel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReflectanceModel(int32_t) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Effects_ISceneLightingEffect
    {
        [[nodiscard]] auto AmbientAmount() const;
        auto AmbientAmount(float value) const;
        [[nodiscard]] auto DiffuseAmount() const;
        auto DiffuseAmount(float value) const;
        [[nodiscard]] auto NormalMapSource() const;
        auto NormalMapSource(Windows::Graphics::Effects::IGraphicsEffectSource const& value) const;
        [[nodiscard]] auto SpecularAmount() const;
        auto SpecularAmount(float value) const;
        [[nodiscard]] auto SpecularShine() const;
        auto SpecularShine(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::Effects::ISceneLightingEffect>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Effects_ISceneLightingEffect2
    {
        [[nodiscard]] auto ReflectanceModel() const;
        auto ReflectanceModel(Windows::UI::Composition::Effects::SceneLightingEffectReflectanceModel const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::Effects::ISceneLightingEffect2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Effects_ISceneLightingEffect2<D>;
    };
}
#endif
