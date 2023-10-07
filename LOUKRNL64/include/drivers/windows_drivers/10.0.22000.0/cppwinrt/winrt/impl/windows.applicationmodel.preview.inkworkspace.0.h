// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Preview_InkWorkspace_0_H
#define WINRT_Windows_ApplicationModel_Preview_InkWorkspace_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    struct SoftwareBitmap;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::InkWorkspace
{
    struct IInkWorkspaceHostedAppManager;
    struct IInkWorkspaceHostedAppManagerStatics;
    struct InkWorkspaceHostedAppManager;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager> = L"Windows.ApplicationModel.Preview.InkWorkspace.InkWorkspaceHostedAppManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager> = L"Windows.ApplicationModel.Preview.InkWorkspace.IInkWorkspaceHostedAppManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics> = L"Windows.ApplicationModel.Preview.InkWorkspace.IInkWorkspaceHostedAppManagerStatics";
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager>{ 0xFE0A7990,0x5E59,0x4BB7,{ 0x8A,0x63,0x7D,0x21,0x8C,0xD9,0x63,0x00 } }; // FE0A7990-5E59-4BB7-8A63-7D218CD96300
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics>{ 0xCBFD8CC5,0xA162,0x4BC4,{ 0x84,0xEE,0xE8,0x71,0x6D,0x52,0x33,0xC5 } }; // CBFD8CC5-A162-4BC4-84EE-E8716D5233C5
    template <> struct default_interface<Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager>{ using type = Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager; };
    template <> struct abi<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetThumbnailAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentApp(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Preview_InkWorkspace_IInkWorkspaceHostedAppManager
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SetThumbnailAsync(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const;
    };
    template <> struct consume<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Preview_InkWorkspace_IInkWorkspaceHostedAppManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Preview_InkWorkspace_IInkWorkspaceHostedAppManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager) GetForCurrentApp() const;
    };
    template <> struct consume<Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Preview_InkWorkspace_IInkWorkspaceHostedAppManagerStatics<D>;
    };
}
#endif
