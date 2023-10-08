// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_Pickers_2_H
#define WINRT_Windows_Storage_Pickers_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Storage.Pickers.1.h"
WINRT_EXPORT namespace winrt::Windows::Storage::Pickers
{
    struct __declspec(empty_bases) FileExtensionVector : Windows::Foundation::Collections::IVector<hstring>
    {
        FileExtensionVector(std::nullptr_t) noexcept {}
        FileExtensionVector(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<hstring>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FileOpenPicker : Windows::Storage::Pickers::IFileOpenPicker,
        impl::require<FileOpenPicker, Windows::Storage::Pickers::IFileOpenPicker2, Windows::Storage::Pickers::IFileOpenPickerWithOperationId, Windows::Storage::Pickers::IFileOpenPicker3>
    {
        FileOpenPicker(std::nullptr_t) noexcept {}
        FileOpenPicker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Pickers::IFileOpenPicker(ptr, take_ownership_from_abi) {}
        FileOpenPicker();
        using Windows::Storage::Pickers::IFileOpenPicker::PickSingleFileAsync;
        using impl::consume_t<FileOpenPicker, Windows::Storage::Pickers::IFileOpenPickerWithOperationId>::PickSingleFileAsync;
        static auto ResumePickSingleFileAsync();
        static auto CreateForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) FilePickerFileTypesOrderedMap : Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>>
    {
        FilePickerFileTypesOrderedMap(std::nullptr_t) noexcept {}
        FilePickerFileTypesOrderedMap(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FilePickerSelectedFilesArray : Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>
    {
        FilePickerSelectedFilesArray(std::nullptr_t) noexcept {}
        FilePickerSelectedFilesArray(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FileSavePicker : Windows::Storage::Pickers::IFileSavePicker,
        impl::require<FileSavePicker, Windows::Storage::Pickers::IFileSavePicker2, Windows::Storage::Pickers::IFileSavePicker3, Windows::Storage::Pickers::IFileSavePicker4>
    {
        FileSavePicker(std::nullptr_t) noexcept {}
        FileSavePicker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Pickers::IFileSavePicker(ptr, take_ownership_from_abi) {}
        FileSavePicker();
        static auto CreateForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) FolderPicker : Windows::Storage::Pickers::IFolderPicker,
        impl::require<FolderPicker, Windows::Storage::Pickers::IFolderPicker2, Windows::Storage::Pickers::IFolderPicker3>
    {
        FolderPicker(std::nullptr_t) noexcept {}
        FolderPicker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Pickers::IFolderPicker(ptr, take_ownership_from_abi) {}
        FolderPicker();
        static auto CreateForUser(Windows::System::User const& user);
    };
}
#endif
