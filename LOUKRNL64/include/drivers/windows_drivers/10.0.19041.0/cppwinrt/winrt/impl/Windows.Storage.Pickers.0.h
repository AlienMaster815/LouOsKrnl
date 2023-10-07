// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_Pickers_0_H
#define WINRT_Windows_Storage_Pickers_0_H
namespace winrt::Windows::Foundation::Collections
{
    template <typename K, typename V> struct IMap;
    template <typename T> struct IVectorView;
    template <typename T> struct IVector;
    struct ValueSet;
}
namespace winrt::Windows::Storage
{
    struct StorageFile;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::Storage::Pickers
{
    enum class PickerLocationId : int32_t
    {
        DocumentsLibrary = 0,
        ComputerFolder = 1,
        Desktop = 2,
        Downloads = 3,
        HomeGroup = 4,
        MusicLibrary = 5,
        PicturesLibrary = 6,
        VideosLibrary = 7,
        Objects3D = 8,
        Unspecified = 9,
    };
    enum class PickerViewMode : int32_t
    {
        List = 0,
        Thumbnail = 1,
    };
    struct IFileOpenPicker;
    struct IFileOpenPicker2;
    struct IFileOpenPicker3;
    struct IFileOpenPickerStatics;
    struct IFileOpenPickerStatics2;
    struct IFileOpenPickerWithOperationId;
    struct IFileSavePicker;
    struct IFileSavePicker2;
    struct IFileSavePicker3;
    struct IFileSavePicker4;
    struct IFileSavePickerStatics;
    struct IFolderPicker;
    struct IFolderPicker2;
    struct IFolderPicker3;
    struct IFolderPickerStatics;
    struct FileExtensionVector;
    struct FileOpenPicker;
    struct FilePickerFileTypesOrderedMap;
    struct FilePickerSelectedFilesArray;
    struct FileSavePicker;
    struct FolderPicker;
}
namespace winrt::impl
{
    template <> struct category<Windows::Storage::Pickers::IFileOpenPicker>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::IFileOpenPicker2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::IFileOpenPicker3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::IFileOpenPickerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::IFileOpenPickerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::IFileOpenPickerWithOperationId>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::IFileSavePicker>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::IFileSavePicker2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::IFileSavePicker3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::IFileSavePicker4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::IFileSavePickerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::IFolderPicker>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::IFolderPicker2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::IFolderPicker3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::IFolderPickerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Pickers::FileExtensionVector>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Pickers::FileOpenPicker>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Pickers::FilePickerFileTypesOrderedMap>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Pickers::FilePickerSelectedFilesArray>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Pickers::FileSavePicker>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Pickers::FolderPicker>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Pickers::PickerLocationId>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Storage::Pickers::PickerViewMode>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Storage::Pickers::IFileOpenPicker>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.IFileOpenPicker" };
    };
    template <> struct name<Windows::Storage::Pickers::IFileOpenPicker2>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.IFileOpenPicker2" };
    };
    template <> struct name<Windows::Storage::Pickers::IFileOpenPicker3>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.IFileOpenPicker3" };
    };
    template <> struct name<Windows::Storage::Pickers::IFileOpenPickerStatics>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.IFileOpenPickerStatics" };
    };
    template <> struct name<Windows::Storage::Pickers::IFileOpenPickerStatics2>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.IFileOpenPickerStatics2" };
    };
    template <> struct name<Windows::Storage::Pickers::IFileOpenPickerWithOperationId>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.IFileOpenPickerWithOperationId" };
    };
    template <> struct name<Windows::Storage::Pickers::IFileSavePicker>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.IFileSavePicker" };
    };
    template <> struct name<Windows::Storage::Pickers::IFileSavePicker2>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.IFileSavePicker2" };
    };
    template <> struct name<Windows::Storage::Pickers::IFileSavePicker3>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.IFileSavePicker3" };
    };
    template <> struct name<Windows::Storage::Pickers::IFileSavePicker4>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.IFileSavePicker4" };
    };
    template <> struct name<Windows::Storage::Pickers::IFileSavePickerStatics>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.IFileSavePickerStatics" };
    };
    template <> struct name<Windows::Storage::Pickers::IFolderPicker>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.IFolderPicker" };
    };
    template <> struct name<Windows::Storage::Pickers::IFolderPicker2>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.IFolderPicker2" };
    };
    template <> struct name<Windows::Storage::Pickers::IFolderPicker3>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.IFolderPicker3" };
    };
    template <> struct name<Windows::Storage::Pickers::IFolderPickerStatics>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.IFolderPickerStatics" };
    };
    template <> struct name<Windows::Storage::Pickers::FileExtensionVector>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.FileExtensionVector" };
    };
    template <> struct name<Windows::Storage::Pickers::FileOpenPicker>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.FileOpenPicker" };
    };
    template <> struct name<Windows::Storage::Pickers::FilePickerFileTypesOrderedMap>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.FilePickerFileTypesOrderedMap" };
    };
    template <> struct name<Windows::Storage::Pickers::FilePickerSelectedFilesArray>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.FilePickerSelectedFilesArray" };
    };
    template <> struct name<Windows::Storage::Pickers::FileSavePicker>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.FileSavePicker" };
    };
    template <> struct name<Windows::Storage::Pickers::FolderPicker>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.FolderPicker" };
    };
    template <> struct name<Windows::Storage::Pickers::PickerLocationId>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.PickerLocationId" };
    };
    template <> struct name<Windows::Storage::Pickers::PickerViewMode>
    {
        static constexpr auto & value{ L"Windows.Storage.Pickers.PickerViewMode" };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::IFileOpenPicker>
    {
        static constexpr guid value{ 0x2CA8278A,0x12C5,0x4C5F,{ 0x89,0x77,0x94,0x54,0x77,0x93,0xC2,0x41 } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::IFileOpenPicker2>
    {
        static constexpr guid value{ 0x8CEB6CD2,0xB446,0x46F7,{ 0xB2,0x65,0x90,0xF8,0xE5,0x5A,0xD6,0x50 } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::IFileOpenPicker3>
    {
        static constexpr guid value{ 0xD9A5C5B3,0xC5DC,0x5B98,{ 0xBD,0x80,0xA8,0xD0,0xCA,0x05,0x84,0xD8 } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::IFileOpenPickerStatics>
    {
        static constexpr guid value{ 0x6821573B,0x2F02,0x4833,{ 0x96,0xD4,0xAB,0xBF,0xAD,0x72,0xB6,0x7B } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::IFileOpenPickerStatics2>
    {
        static constexpr guid value{ 0xE8917415,0xEDDD,0x5C98,{ 0xB6,0xF3,0x36,0x6F,0xDF,0xCA,0xD3,0x92 } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::IFileOpenPickerWithOperationId>
    {
        static constexpr guid value{ 0x3F57B569,0x2522,0x4CA5,{ 0xAA,0x73,0xA1,0x55,0x09,0xF1,0xFC,0xBF } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::IFileSavePicker>
    {
        static constexpr guid value{ 0x3286FFCB,0x617F,0x4CC5,{ 0xAF,0x6A,0xB3,0xFD,0xF2,0x9A,0xD1,0x45 } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::IFileSavePicker2>
    {
        static constexpr guid value{ 0x0EC313A2,0xD24B,0x449A,{ 0x81,0x97,0xE8,0x91,0x04,0xFD,0x42,0xCC } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::IFileSavePicker3>
    {
        static constexpr guid value{ 0x698AEC69,0xBA3C,0x4E51,{ 0xBD,0x90,0x4A,0xBC,0xBB,0xF4,0xCF,0xAF } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::IFileSavePicker4>
    {
        static constexpr guid value{ 0xE7D83A5A,0xDDFA,0x5DE0,{ 0x8B,0x70,0xC8,0x42,0xC2,0x19,0x88,0xEC } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::IFileSavePickerStatics>
    {
        static constexpr guid value{ 0x28E3CF9E,0x961C,0x5E2C,{ 0xAE,0xD7,0xE6,0x47,0x37,0xF4,0xCE,0x37 } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::IFolderPicker>
    {
        static constexpr guid value{ 0x084F7799,0xF3FB,0x400A,{ 0x99,0xB1,0x7B,0x4A,0x77,0x2F,0xD6,0x0D } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::IFolderPicker2>
    {
        static constexpr guid value{ 0x8EB3BA97,0xDC85,0x4616,{ 0xBE,0x94,0x96,0x60,0x88,0x1F,0x2F,0x5D } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::IFolderPicker3>
    {
        static constexpr guid value{ 0x673B1E29,0xD326,0x53C0,{ 0xBD,0x24,0xA2,0x5C,0x71,0x4C,0xEE,0x36 } };
    };
    template <> struct guid_storage<Windows::Storage::Pickers::IFolderPickerStatics>
    {
        static constexpr guid value{ 0x9BE34740,0x7CA1,0x5942,{ 0xA3,0xC8,0x46,0xF2,0x55,0x1E,0xCF,0xF3 } };
    };
    template <> struct default_interface<Windows::Storage::Pickers::FileExtensionVector>
    {
        using type = Windows::Foundation::Collections::IVector<hstring>;
    };
    template <> struct default_interface<Windows::Storage::Pickers::FileOpenPicker>
    {
        using type = Windows::Storage::Pickers::IFileOpenPicker;
    };
    template <> struct default_interface<Windows::Storage::Pickers::FilePickerFileTypesOrderedMap>
    {
        using type = Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>>;
    };
    template <> struct default_interface<Windows::Storage::Pickers::FilePickerSelectedFilesArray>
    {
        using type = Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>;
    };
    template <> struct default_interface<Windows::Storage::Pickers::FileSavePicker>
    {
        using type = Windows::Storage::Pickers::IFileSavePicker;
    };
    template <> struct default_interface<Windows::Storage::Pickers::FolderPicker>
    {
        using type = Windows::Storage::Pickers::IFolderPicker;
    };
    template <> struct abi<Windows::Storage::Pickers::IFileOpenPicker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ViewMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ViewMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SettingsIdentifier(void**) noexcept = 0;
            virtual int32_t __stdcall put_SettingsIdentifier(void*) noexcept = 0;
            virtual int32_t __stdcall get_SuggestedStartLocation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SuggestedStartLocation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CommitButtonText(void**) noexcept = 0;
            virtual int32_t __stdcall put_CommitButtonText(void*) noexcept = 0;
            virtual int32_t __stdcall get_FileTypeFilter(void**) noexcept = 0;
            virtual int32_t __stdcall PickSingleFileAsync(void**) noexcept = 0;
            virtual int32_t __stdcall PickMultipleFilesAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::IFileOpenPicker2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContinuationData(void**) noexcept = 0;
            virtual int32_t __stdcall PickSingleFileAndContinue() noexcept = 0;
            virtual int32_t __stdcall PickMultipleFilesAndContinue() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::IFileOpenPicker3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::IFileOpenPickerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ResumePickSingleFileAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::IFileOpenPickerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::IFileOpenPickerWithOperationId>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PickSingleFileAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::IFileSavePicker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SettingsIdentifier(void**) noexcept = 0;
            virtual int32_t __stdcall put_SettingsIdentifier(void*) noexcept = 0;
            virtual int32_t __stdcall get_SuggestedStartLocation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SuggestedStartLocation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CommitButtonText(void**) noexcept = 0;
            virtual int32_t __stdcall put_CommitButtonText(void*) noexcept = 0;
            virtual int32_t __stdcall get_FileTypeChoices(void**) noexcept = 0;
            virtual int32_t __stdcall get_DefaultFileExtension(void**) noexcept = 0;
            virtual int32_t __stdcall put_DefaultFileExtension(void*) noexcept = 0;
            virtual int32_t __stdcall get_SuggestedSaveFile(void**) noexcept = 0;
            virtual int32_t __stdcall put_SuggestedSaveFile(void*) noexcept = 0;
            virtual int32_t __stdcall get_SuggestedFileName(void**) noexcept = 0;
            virtual int32_t __stdcall put_SuggestedFileName(void*) noexcept = 0;
            virtual int32_t __stdcall PickSaveFileAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::IFileSavePicker2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContinuationData(void**) noexcept = 0;
            virtual int32_t __stdcall PickSaveFileAndContinue() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::IFileSavePicker3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnterpriseId(void**) noexcept = 0;
            virtual int32_t __stdcall put_EnterpriseId(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::IFileSavePicker4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::IFileSavePickerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::IFolderPicker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ViewMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ViewMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SettingsIdentifier(void**) noexcept = 0;
            virtual int32_t __stdcall put_SettingsIdentifier(void*) noexcept = 0;
            virtual int32_t __stdcall get_SuggestedStartLocation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SuggestedStartLocation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CommitButtonText(void**) noexcept = 0;
            virtual int32_t __stdcall put_CommitButtonText(void*) noexcept = 0;
            virtual int32_t __stdcall get_FileTypeFilter(void**) noexcept = 0;
            virtual int32_t __stdcall PickSingleFolderAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::IFolderPicker2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContinuationData(void**) noexcept = 0;
            virtual int32_t __stdcall PickFolderAndContinue() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::IFolderPicker3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Pickers::IFolderPickerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForUser(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_IFileOpenPicker
    {
        [[nodiscard]] auto ViewMode() const;
        auto ViewMode(Windows::Storage::Pickers::PickerViewMode const& value) const;
        [[nodiscard]] auto SettingsIdentifier() const;
        auto SettingsIdentifier(param::hstring const& value) const;
        [[nodiscard]] auto SuggestedStartLocation() const;
        auto SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId const& value) const;
        [[nodiscard]] auto CommitButtonText() const;
        auto CommitButtonText(param::hstring const& value) const;
        [[nodiscard]] auto FileTypeFilter() const;
        auto PickSingleFileAsync() const;
        auto PickMultipleFilesAsync() const;
    };
    template <> struct consume<Windows::Storage::Pickers::IFileOpenPicker>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_IFileOpenPicker<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_IFileOpenPicker2
    {
        [[nodiscard]] auto ContinuationData() const;
        auto PickSingleFileAndContinue() const;
        auto PickMultipleFilesAndContinue() const;
    };
    template <> struct consume<Windows::Storage::Pickers::IFileOpenPicker2>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_IFileOpenPicker2<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_IFileOpenPicker3
    {
        [[nodiscard]] auto User() const;
    };
    template <> struct consume<Windows::Storage::Pickers::IFileOpenPicker3>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_IFileOpenPicker3<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_IFileOpenPickerStatics
    {
        auto ResumePickSingleFileAsync() const;
    };
    template <> struct consume<Windows::Storage::Pickers::IFileOpenPickerStatics>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_IFileOpenPickerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_IFileOpenPickerStatics2
    {
        auto CreateForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::Storage::Pickers::IFileOpenPickerStatics2>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_IFileOpenPickerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_IFileOpenPickerWithOperationId
    {
        auto PickSingleFileAsync(param::hstring const& pickerOperationId) const;
    };
    template <> struct consume<Windows::Storage::Pickers::IFileOpenPickerWithOperationId>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_IFileOpenPickerWithOperationId<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_IFileSavePicker
    {
        [[nodiscard]] auto SettingsIdentifier() const;
        auto SettingsIdentifier(param::hstring const& value) const;
        [[nodiscard]] auto SuggestedStartLocation() const;
        auto SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId const& value) const;
        [[nodiscard]] auto CommitButtonText() const;
        auto CommitButtonText(param::hstring const& value) const;
        [[nodiscard]] auto FileTypeChoices() const;
        [[nodiscard]] auto DefaultFileExtension() const;
        auto DefaultFileExtension(param::hstring const& value) const;
        [[nodiscard]] auto SuggestedSaveFile() const;
        auto SuggestedSaveFile(Windows::Storage::StorageFile const& value) const;
        [[nodiscard]] auto SuggestedFileName() const;
        auto SuggestedFileName(param::hstring const& value) const;
        auto PickSaveFileAsync() const;
    };
    template <> struct consume<Windows::Storage::Pickers::IFileSavePicker>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_IFileSavePicker<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_IFileSavePicker2
    {
        [[nodiscard]] auto ContinuationData() const;
        auto PickSaveFileAndContinue() const;
    };
    template <> struct consume<Windows::Storage::Pickers::IFileSavePicker2>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_IFileSavePicker2<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_IFileSavePicker3
    {
        [[nodiscard]] auto EnterpriseId() const;
        auto EnterpriseId(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Storage::Pickers::IFileSavePicker3>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_IFileSavePicker3<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_IFileSavePicker4
    {
        [[nodiscard]] auto User() const;
    };
    template <> struct consume<Windows::Storage::Pickers::IFileSavePicker4>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_IFileSavePicker4<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_IFileSavePickerStatics
    {
        auto CreateForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::Storage::Pickers::IFileSavePickerStatics>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_IFileSavePickerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_IFolderPicker
    {
        [[nodiscard]] auto ViewMode() const;
        auto ViewMode(Windows::Storage::Pickers::PickerViewMode const& value) const;
        [[nodiscard]] auto SettingsIdentifier() const;
        auto SettingsIdentifier(param::hstring const& value) const;
        [[nodiscard]] auto SuggestedStartLocation() const;
        auto SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId const& value) const;
        [[nodiscard]] auto CommitButtonText() const;
        auto CommitButtonText(param::hstring const& value) const;
        [[nodiscard]] auto FileTypeFilter() const;
        auto PickSingleFolderAsync() const;
    };
    template <> struct consume<Windows::Storage::Pickers::IFolderPicker>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_IFolderPicker<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_IFolderPicker2
    {
        [[nodiscard]] auto ContinuationData() const;
        auto PickFolderAndContinue() const;
    };
    template <> struct consume<Windows::Storage::Pickers::IFolderPicker2>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_IFolderPicker2<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_IFolderPicker3
    {
        [[nodiscard]] auto User() const;
    };
    template <> struct consume<Windows::Storage::Pickers::IFolderPicker3>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_IFolderPicker3<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Pickers_IFolderPickerStatics
    {
        auto CreateForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::Storage::Pickers::IFolderPickerStatics>
    {
        template <typename D> using type = consume_Windows_Storage_Pickers_IFolderPickerStatics<D>;
    };
}
#endif
