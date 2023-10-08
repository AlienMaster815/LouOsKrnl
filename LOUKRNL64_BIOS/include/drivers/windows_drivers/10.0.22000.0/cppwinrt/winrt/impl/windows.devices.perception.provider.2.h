// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Perception_Provider_2_H
#define WINRT_Windows_Devices_Perception_Provider_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Foundation.Numerics.1.h"
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
#include "winrt/impl/Windows.Devices.Perception.Provider.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Perception::Provider
{
    struct PerceptionStartFaceAuthenticationHandler : Windows::Foundation::IUnknown
    {
        PerceptionStartFaceAuthenticationHandler(std::nullptr_t = nullptr) noexcept {}
        PerceptionStartFaceAuthenticationHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> PerceptionStartFaceAuthenticationHandler(L lambda);
        template <typename F> PerceptionStartFaceAuthenticationHandler(F* function);
        template <typename O, typename M> PerceptionStartFaceAuthenticationHandler(O* object, M method);
        template <typename O, typename M> PerceptionStartFaceAuthenticationHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> PerceptionStartFaceAuthenticationHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const& sender) const;
    };
    struct PerceptionStopFaceAuthenticationHandler : Windows::Foundation::IUnknown
    {
        PerceptionStopFaceAuthenticationHandler(std::nullptr_t = nullptr) noexcept {}
        PerceptionStopFaceAuthenticationHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> PerceptionStopFaceAuthenticationHandler(L lambda);
        template <typename F> PerceptionStopFaceAuthenticationHandler(F* function);
        template <typename O, typename M> PerceptionStopFaceAuthenticationHandler(O* object, M method);
        template <typename O, typename M> PerceptionStopFaceAuthenticationHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> PerceptionStopFaceAuthenticationHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const& sender) const;
    };
    struct KnownPerceptionFrameKind
    {
        KnownPerceptionFrameKind() = delete;
        [[nodiscard]] static auto Color();
        [[nodiscard]] static auto Depth();
        [[nodiscard]] static auto Infrared();
    };
    struct __declspec(empty_bases) PerceptionControlGroup : Windows::Devices::Perception::Provider::IPerceptionControlGroup
    {
        PerceptionControlGroup(std::nullptr_t) noexcept {}
        PerceptionControlGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::Provider::IPerceptionControlGroup(ptr, take_ownership_from_abi) {}
        explicit PerceptionControlGroup(param::iterable<hstring> const& ids);
    };
    struct __declspec(empty_bases) PerceptionCorrelation : Windows::Devices::Perception::Provider::IPerceptionCorrelation
    {
        PerceptionCorrelation(std::nullptr_t) noexcept {}
        PerceptionCorrelation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::Provider::IPerceptionCorrelation(ptr, take_ownership_from_abi) {}
        PerceptionCorrelation(param::hstring const& targetId, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::quaternion const& orientation);
    };
    struct __declspec(empty_bases) PerceptionCorrelationGroup : Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup
    {
        PerceptionCorrelationGroup(std::nullptr_t) noexcept {}
        PerceptionCorrelationGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup(ptr, take_ownership_from_abi) {}
        explicit PerceptionCorrelationGroup(param::iterable<Windows::Devices::Perception::Provider::PerceptionCorrelation> const& relativeLocations);
    };
    struct __declspec(empty_bases) PerceptionFaceAuthenticationGroup : Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup
    {
        PerceptionFaceAuthenticationGroup(std::nullptr_t) noexcept {}
        PerceptionFaceAuthenticationGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup(ptr, take_ownership_from_abi) {}
        PerceptionFaceAuthenticationGroup(param::iterable<hstring> const& ids, Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler const& startHandler, Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler const& stopHandler);
    };
    struct __declspec(empty_bases) PerceptionFrame : Windows::Devices::Perception::Provider::IPerceptionFrame
    {
        PerceptionFrame(std::nullptr_t) noexcept {}
        PerceptionFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::Provider::IPerceptionFrame(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PerceptionFrameProviderInfo : Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo
    {
        PerceptionFrameProviderInfo(std::nullptr_t) noexcept {}
        PerceptionFrameProviderInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo(ptr, take_ownership_from_abi) {}
        PerceptionFrameProviderInfo();
    };
    struct PerceptionFrameProviderManagerService
    {
        PerceptionFrameProviderManagerService() = delete;
        static auto RegisterFrameProviderInfo(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo const& frameProviderInfo);
        static auto UnregisterFrameProviderInfo(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo const& frameProviderInfo);
        static auto RegisterFaceAuthenticationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const& faceAuthenticationGroup);
        static auto UnregisterFaceAuthenticationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const& faceAuthenticationGroup);
        static auto RegisterControlGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionControlGroup const& controlGroup);
        static auto UnregisterControlGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionControlGroup const& controlGroup);
        static auto RegisterCorrelationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionCorrelationGroup const& correlationGroup);
        static auto UnregisterCorrelationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionCorrelationGroup const& correlationGroup);
        static auto UpdateAvailabilityForProvider(Windows::Devices::Perception::Provider::IPerceptionFrameProvider const& provider, bool available);
        static auto PublishFrameForProvider(Windows::Devices::Perception::Provider::IPerceptionFrameProvider const& provider, Windows::Devices::Perception::Provider::PerceptionFrame const& frame);
    };
    struct __declspec(empty_bases) PerceptionPropertyChangeRequest : Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest
    {
        PerceptionPropertyChangeRequest(std::nullptr_t) noexcept {}
        PerceptionPropertyChangeRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PerceptionVideoFrameAllocator : Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocator
    {
        PerceptionVideoFrameAllocator(std::nullptr_t) noexcept {}
        PerceptionVideoFrameAllocator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocator(ptr, take_ownership_from_abi) {}
        PerceptionVideoFrameAllocator(uint32_t maxOutstandingFrameCountForWrite, Windows::Graphics::Imaging::BitmapPixelFormat const& format, Windows::Foundation::Size const& resolution, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha);
    };
}
#endif
