// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_XboxLive_Storage_2_H
#define WINRT_Windows_Gaming_XboxLive_Storage_2_H
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Gaming.XboxLive.Storage.1.h"
WINRT_EXPORT namespace winrt::Windows::Gaming::XboxLive::Storage
{
    struct __declspec(empty_bases) GameSaveBlobGetResult : Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult
    {
        GameSaveBlobGetResult(std::nullptr_t) noexcept {}
        GameSaveBlobGetResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GameSaveBlobInfo : Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo
    {
        GameSaveBlobInfo(std::nullptr_t) noexcept {}
        GameSaveBlobInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GameSaveBlobInfoGetResult : Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult
    {
        GameSaveBlobInfoGetResult(std::nullptr_t) noexcept {}
        GameSaveBlobInfoGetResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GameSaveBlobInfoQuery : Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery
    {
        GameSaveBlobInfoQuery(std::nullptr_t) noexcept {}
        GameSaveBlobInfoQuery(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GameSaveContainer : Windows::Gaming::XboxLive::Storage::IGameSaveContainer
    {
        GameSaveContainer(std::nullptr_t) noexcept {}
        GameSaveContainer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveContainer(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GameSaveContainerInfo : Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo
    {
        GameSaveContainerInfo(std::nullptr_t) noexcept {}
        GameSaveContainerInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GameSaveContainerInfoGetResult : Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult
    {
        GameSaveContainerInfoGetResult(std::nullptr_t) noexcept {}
        GameSaveContainerInfoGetResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GameSaveContainerInfoQuery : Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery
    {
        GameSaveContainerInfoQuery(std::nullptr_t) noexcept {}
        GameSaveContainerInfoQuery(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GameSaveOperationResult : Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult
    {
        GameSaveOperationResult(std::nullptr_t) noexcept {}
        GameSaveOperationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GameSaveProvider : Windows::Gaming::XboxLive::Storage::IGameSaveProvider
    {
        GameSaveProvider(std::nullptr_t) noexcept {}
        GameSaveProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveProvider(ptr, take_ownership_from_abi) {}
        static auto GetForUserAsync(Windows::System::User const& user, param::hstring const& serviceConfigId);
        static auto GetSyncOnDemandForUserAsync(Windows::System::User const& user, param::hstring const& serviceConfigId);
    };
    struct __declspec(empty_bases) GameSaveProviderGetResult : Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult
    {
        GameSaveProviderGetResult(std::nullptr_t) noexcept {}
        GameSaveProviderGetResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult(ptr, take_ownership_from_abi) {}
    };
}
#endif
