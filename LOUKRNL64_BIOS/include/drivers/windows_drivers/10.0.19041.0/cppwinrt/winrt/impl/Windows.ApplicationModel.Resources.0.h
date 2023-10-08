// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Resources_0_H
#define WINRT_Windows_ApplicationModel_Resources_0_H
namespace winrt::Windows::Foundation
{
    struct Uri;
}
namespace winrt::Windows::UI
{
    struct UIContext;
}
namespace winrt::Windows::ApplicationModel::Resources
{
    struct IResourceLoader;
    struct IResourceLoader2;
    struct IResourceLoaderFactory;
    struct IResourceLoaderStatics;
    struct IResourceLoaderStatics2;
    struct IResourceLoaderStatics3;
    struct ResourceLoader;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Resources::IResourceLoader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::IResourceLoader2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::IResourceLoaderFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::IResourceLoaderStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::IResourceLoaderStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::IResourceLoaderStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::ResourceLoader>
    {
        using type = class_category;
    };
    template <> struct name<Windows::ApplicationModel::Resources::IResourceLoader>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.IResourceLoader" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::IResourceLoader2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.IResourceLoader2" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::IResourceLoaderFactory>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.IResourceLoaderFactory" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::IResourceLoaderStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.IResourceLoaderStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::IResourceLoaderStatics2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.IResourceLoaderStatics2" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::IResourceLoaderStatics3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.IResourceLoaderStatics3" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::ResourceLoader>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.ResourceLoader" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::IResourceLoader>
    {
        static constexpr guid value{ 0x08524908,0x16EF,0x45AD,{ 0xA6,0x02,0x29,0x36,0x37,0xD7,0xE6,0x1A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::IResourceLoader2>
    {
        static constexpr guid value{ 0x10EB6EC6,0x8138,0x48C1,{ 0xBC,0x65,0xE1,0xF1,0x42,0x07,0x36,0x7C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::IResourceLoaderFactory>
    {
        static constexpr guid value{ 0xC33A3603,0x69DC,0x4285,{ 0xA0,0x77,0xD5,0xC0,0xE4,0x7C,0xCB,0xE8 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::IResourceLoaderStatics>
    {
        static constexpr guid value{ 0xBF777CE1,0x19C8,0x49C2,{ 0x95,0x3C,0x47,0xE9,0x22,0x7B,0x33,0x4E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::IResourceLoaderStatics2>
    {
        static constexpr guid value{ 0x0CC04141,0x6466,0x4989,{ 0x94,0x94,0x0B,0x82,0xDF,0xC5,0x3F,0x1F } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::IResourceLoaderStatics3>
    {
        static constexpr guid value{ 0x64609DFB,0x64AC,0x491B,{ 0x81,0x00,0x0E,0x55,0x8D,0x61,0xC1,0xD0 } };
    };
    template <> struct default_interface<Windows::ApplicationModel::Resources::ResourceLoader>
    {
        using type = Windows::ApplicationModel::Resources::IResourceLoader;
    };
    template <> struct abi<Windows::ApplicationModel::Resources::IResourceLoader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetString(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::IResourceLoader2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetStringForUri(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::IResourceLoaderFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateResourceLoaderByName(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::IResourceLoaderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetStringForReference(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::IResourceLoaderStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall GetForCurrentViewWithName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetForViewIndependentUse(void**) noexcept = 0;
            virtual int32_t __stdcall GetForViewIndependentUseWithName(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::IResourceLoaderStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForUIContext(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_IResourceLoader
    {
        auto GetString(param::hstring const& resource) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::IResourceLoader>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_IResourceLoader<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_IResourceLoader2
    {
        auto GetStringForUri(Windows::Foundation::Uri const& uri) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::IResourceLoader2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_IResourceLoader2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_IResourceLoaderFactory
    {
        auto CreateResourceLoaderByName(param::hstring const& name) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::IResourceLoaderFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_IResourceLoaderFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics
    {
        auto GetStringForReference(Windows::Foundation::Uri const& uri) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::IResourceLoaderStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics2
    {
        auto GetForCurrentView() const;
        auto GetForCurrentView(param::hstring const& name) const;
        auto GetForViewIndependentUse() const;
        auto GetForViewIndependentUse(param::hstring const& name) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::IResourceLoaderStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics3
    {
        auto GetForUIContext(Windows::UI::UIContext const& context) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::IResourceLoaderStatics3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics3<D>;
    };
}
#endif
