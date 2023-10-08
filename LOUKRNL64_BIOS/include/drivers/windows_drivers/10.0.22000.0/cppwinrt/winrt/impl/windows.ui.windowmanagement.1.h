// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_WindowManagement_1_H
#define WINRT_Windows_UI_WindowManagement_1_H
#include "winrt/impl/Windows.UI.WindowManagement.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::WindowManagement
{
    struct __declspec(empty_bases) IAppWindow :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppWindow>
    {
        IAppWindow(std::nullptr_t = nullptr) noexcept {}
        IAppWindow(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppWindowChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppWindowChangedEventArgs>
    {
        IAppWindowChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppWindowChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppWindowCloseRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppWindowCloseRequestedEventArgs>
    {
        IAppWindowCloseRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppWindowCloseRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppWindowClosedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppWindowClosedEventArgs>
    {
        IAppWindowClosedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppWindowClosedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppWindowFrame :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppWindowFrame>
    {
        IAppWindowFrame(std::nullptr_t = nullptr) noexcept {}
        IAppWindowFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppWindowFrameStyle :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppWindowFrameStyle>
    {
        IAppWindowFrameStyle(std::nullptr_t = nullptr) noexcept {}
        IAppWindowFrameStyle(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppWindowPlacement :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppWindowPlacement>
    {
        IAppWindowPlacement(std::nullptr_t = nullptr) noexcept {}
        IAppWindowPlacement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppWindowPresentationConfiguration :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppWindowPresentationConfiguration>
    {
        IAppWindowPresentationConfiguration(std::nullptr_t = nullptr) noexcept {}
        IAppWindowPresentationConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppWindowPresentationConfigurationFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppWindowPresentationConfigurationFactory>
    {
        IAppWindowPresentationConfigurationFactory(std::nullptr_t = nullptr) noexcept {}
        IAppWindowPresentationConfigurationFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppWindowPresenter :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppWindowPresenter>
    {
        IAppWindowPresenter(std::nullptr_t = nullptr) noexcept {}
        IAppWindowPresenter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppWindowStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppWindowStatics>
    {
        IAppWindowStatics(std::nullptr_t = nullptr) noexcept {}
        IAppWindowStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppWindowTitleBar :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppWindowTitleBar>
    {
        IAppWindowTitleBar(std::nullptr_t = nullptr) noexcept {}
        IAppWindowTitleBar(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppWindowTitleBarOcclusion :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppWindowTitleBarOcclusion>
    {
        IAppWindowTitleBarOcclusion(std::nullptr_t = nullptr) noexcept {}
        IAppWindowTitleBarOcclusion(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppWindowTitleBarVisibility :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppWindowTitleBarVisibility>
    {
        IAppWindowTitleBarVisibility(std::nullptr_t = nullptr) noexcept {}
        IAppWindowTitleBarVisibility(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICompactOverlayPresentationConfiguration :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICompactOverlayPresentationConfiguration>
    {
        ICompactOverlayPresentationConfiguration(std::nullptr_t = nullptr) noexcept {}
        ICompactOverlayPresentationConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDefaultPresentationConfiguration :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDefaultPresentationConfiguration>
    {
        IDefaultPresentationConfiguration(std::nullptr_t = nullptr) noexcept {}
        IDefaultPresentationConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayRegion :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayRegion>
    {
        IDisplayRegion(std::nullptr_t = nullptr) noexcept {}
        IDisplayRegion(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFullScreenPresentationConfiguration :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFullScreenPresentationConfiguration>
    {
        IFullScreenPresentationConfiguration(std::nullptr_t = nullptr) noexcept {}
        IFullScreenPresentationConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowServicesStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowServicesStatics>
    {
        IWindowServicesStatics(std::nullptr_t = nullptr) noexcept {}
        IWindowServicesStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowingEnvironment :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowingEnvironment>
    {
        IWindowingEnvironment(std::nullptr_t = nullptr) noexcept {}
        IWindowingEnvironment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowingEnvironmentAddedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowingEnvironmentAddedEventArgs>
    {
        IWindowingEnvironmentAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWindowingEnvironmentAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowingEnvironmentChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowingEnvironmentChangedEventArgs>
    {
        IWindowingEnvironmentChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWindowingEnvironmentChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowingEnvironmentRemovedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowingEnvironmentRemovedEventArgs>
    {
        IWindowingEnvironmentRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWindowingEnvironmentRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowingEnvironmentStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowingEnvironmentStatics>
    {
        IWindowingEnvironmentStatics(std::nullptr_t = nullptr) noexcept {}
        IWindowingEnvironmentStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
