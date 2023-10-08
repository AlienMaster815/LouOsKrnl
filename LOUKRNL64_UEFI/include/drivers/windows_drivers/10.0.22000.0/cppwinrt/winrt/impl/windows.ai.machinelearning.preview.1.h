// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_AI_MachineLearning_Preview_1_H
#define WINRT_Windows_AI_MachineLearning_Preview_1_H
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.AI.MachineLearning.Preview.0.h"
WINRT_EXPORT namespace winrt::Windows::AI::MachineLearning::Preview
{
    struct __declspec(empty_bases) IImageVariableDescriptorPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<IImageVariableDescriptorPreview>,
        impl::require<Windows::AI::MachineLearning::Preview::IImageVariableDescriptorPreview, Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>
    {
        IImageVariableDescriptorPreview(std::nullptr_t = nullptr) noexcept {}
        IImageVariableDescriptorPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IInferencingOptionsPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInferencingOptionsPreview>
    {
        IInferencingOptionsPreview(std::nullptr_t = nullptr) noexcept {}
        IInferencingOptionsPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILearningModelBindingPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILearningModelBindingPreview>,
        impl::require<Windows::AI::MachineLearning::Preview::ILearningModelBindingPreview, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Foundation::IInspectable>>, Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>
    {
        ILearningModelBindingPreview(std::nullptr_t = nullptr) noexcept {}
        ILearningModelBindingPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILearningModelBindingPreviewFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILearningModelBindingPreviewFactory>
    {
        ILearningModelBindingPreviewFactory(std::nullptr_t = nullptr) noexcept {}
        ILearningModelBindingPreviewFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILearningModelDescriptionPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILearningModelDescriptionPreview>
    {
        ILearningModelDescriptionPreview(std::nullptr_t = nullptr) noexcept {}
        ILearningModelDescriptionPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILearningModelEvaluationResultPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILearningModelEvaluationResultPreview>
    {
        ILearningModelEvaluationResultPreview(std::nullptr_t = nullptr) noexcept {}
        ILearningModelEvaluationResultPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILearningModelPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILearningModelPreview>
    {
        ILearningModelPreview(std::nullptr_t = nullptr) noexcept {}
        ILearningModelPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILearningModelPreviewStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILearningModelPreviewStatics>
    {
        ILearningModelPreviewStatics(std::nullptr_t = nullptr) noexcept {}
        ILearningModelPreviewStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILearningModelVariableDescriptorPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILearningModelVariableDescriptorPreview>
    {
        ILearningModelVariableDescriptorPreview(std::nullptr_t = nullptr) noexcept {}
        ILearningModelVariableDescriptorPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMapVariableDescriptorPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMapVariableDescriptorPreview>,
        impl::require<Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview, Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>
    {
        IMapVariableDescriptorPreview(std::nullptr_t = nullptr) noexcept {}
        IMapVariableDescriptorPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISequenceVariableDescriptorPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISequenceVariableDescriptorPreview>,
        impl::require<Windows::AI::MachineLearning::Preview::ISequenceVariableDescriptorPreview, Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>
    {
        ISequenceVariableDescriptorPreview(std::nullptr_t = nullptr) noexcept {}
        ISequenceVariableDescriptorPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITensorVariableDescriptorPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITensorVariableDescriptorPreview>,
        impl::require<Windows::AI::MachineLearning::Preview::ITensorVariableDescriptorPreview, Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>
    {
        ITensorVariableDescriptorPreview(std::nullptr_t = nullptr) noexcept {}
        ITensorVariableDescriptorPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
