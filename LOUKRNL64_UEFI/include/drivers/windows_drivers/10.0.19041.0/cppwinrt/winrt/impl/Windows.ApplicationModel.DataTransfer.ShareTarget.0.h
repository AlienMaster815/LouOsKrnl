// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_DataTransfer_ShareTarget_0_H
#define WINRT_Windows_ApplicationModel_DataTransfer_ShareTarget_0_H
namespace winrt::Windows::ApplicationModel::DataTransfer
{
    struct DataPackageView;
}
namespace winrt::Windows::Storage::Streams
{
    struct RandomAccessStreamReference;
}
namespace winrt::Windows::ApplicationModel::DataTransfer::ShareTarget
{
    struct IQuickLink;
    struct IShareOperation;
    struct IShareOperation2;
    struct IShareOperation3;
    struct QuickLink;
    struct ShareOperation;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation>
    {
        using type = class_category;
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareTarget.IQuickLink" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareTarget.IShareOperation" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareTarget.IShareOperation2" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareTarget.IShareOperation3" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareTarget.QuickLink" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareTarget.ShareOperation" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink>
    {
        static constexpr guid value{ 0x603E4308,0xF0BE,0x4ADC,{ 0xAC,0xC9,0x8B,0x27,0xAB,0x9C,0xF5,0x56 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation>
    {
        static constexpr guid value{ 0x2246BAB8,0xD0F8,0x41C1,{ 0xA8,0x2A,0x41,0x37,0xDB,0x65,0x04,0xFB } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2>
    {
        static constexpr guid value{ 0x0FFB97C1,0x9778,0x4A09,{ 0x8E,0x5B,0xCB,0x5E,0x48,0x2D,0x05,0x55 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation3>
    {
        static constexpr guid value{ 0x5EF6B382,0xB7A7,0x4571,{ 0xA2,0xA6,0x99,0x4A,0x03,0x49,0x88,0xB2 } };
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink>
    {
        using type = Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation>
    {
        using type = Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation;
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall put_Thumbnail(void*) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall put_Id(void*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedDataFormats(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedFileTypes(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall get_QuickLinkId(void**) noexcept = 0;
            virtual int32_t __stdcall RemoveThisQuickLink() noexcept = 0;
            virtual int32_t __stdcall ReportStarted() noexcept = 0;
            virtual int32_t __stdcall ReportDataRetrieved() noexcept = 0;
            virtual int32_t __stdcall ReportSubmittedBackgroundTask() noexcept = 0;
            virtual int32_t __stdcall ReportCompletedWithQuickLink(void*) noexcept = 0;
            virtual int32_t __stdcall ReportCompleted() noexcept = 0;
            virtual int32_t __stdcall ReportError(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall DismissUI() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Contacts(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IQuickLink
    {
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Thumbnail() const;
        auto Thumbnail(Windows::Storage::Streams::RandomAccessStreamReference const& value) const;
        [[nodiscard]] auto Id() const;
        auto Id(param::hstring const& value) const;
        [[nodiscard]] auto SupportedDataFormats() const;
        [[nodiscard]] auto SupportedFileTypes() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IQuickLink<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation
    {
        [[nodiscard]] auto Data() const;
        [[nodiscard]] auto QuickLinkId() const;
        auto RemoveThisQuickLink() const;
        auto ReportStarted() const;
        auto ReportDataRetrieved() const;
        auto ReportSubmittedBackgroundTask() const;
        auto ReportCompleted(Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink const& quicklink) const;
        auto ReportCompleted() const;
        auto ReportError(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation2
    {
        auto DismissUI() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation3
    {
        [[nodiscard]] auto Contacts() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation3<D>;
    };
}
#endif
