// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_AI_MachineLearning_Preview_2_H
#define WINRT_Windows_AI_MachineLearning_Preview_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.AI.MachineLearning.Preview.1.h"
WINRT_EXPORT namespace winrt::Windows::AI::MachineLearning::Preview
{
    struct __declspec(empty_bases) ImageVariableDescriptorPreview : Windows::AI::MachineLearning::Preview::IImageVariableDescriptorPreview
    {
        ImageVariableDescriptorPreview(std::nullptr_t) noexcept {}
        ImageVariableDescriptorPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::AI::MachineLearning::Preview::IImageVariableDescriptorPreview(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InferencingOptionsPreview : Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview
    {
        InferencingOptionsPreview(std::nullptr_t) noexcept {}
        InferencingOptionsPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LearningModelBindingPreview : Windows::AI::MachineLearning::Preview::ILearningModelBindingPreview
    {
        LearningModelBindingPreview(std::nullptr_t) noexcept {}
        LearningModelBindingPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::AI::MachineLearning::Preview::ILearningModelBindingPreview(ptr, take_ownership_from_abi) {}
        explicit LearningModelBindingPreview(Windows::AI::MachineLearning::Preview::LearningModelPreview const& model);
    };
    struct __declspec(empty_bases) LearningModelDescriptionPreview : Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview
    {
        LearningModelDescriptionPreview(std::nullptr_t) noexcept {}
        LearningModelDescriptionPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LearningModelEvaluationResultPreview : Windows::AI::MachineLearning::Preview::ILearningModelEvaluationResultPreview
    {
        LearningModelEvaluationResultPreview(std::nullptr_t) noexcept {}
        LearningModelEvaluationResultPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::AI::MachineLearning::Preview::ILearningModelEvaluationResultPreview(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LearningModelPreview : Windows::AI::MachineLearning::Preview::ILearningModelPreview
    {
        LearningModelPreview(std::nullptr_t) noexcept {}
        LearningModelPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::AI::MachineLearning::Preview::ILearningModelPreview(ptr, take_ownership_from_abi) {}
        static auto LoadModelFromStorageFileAsync(Windows::Storage::IStorageFile const& modelFile);
        static auto LoadModelFromStreamAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& modelStream);
    };
    struct __declspec(empty_bases) LearningModelVariableDescriptorPreview : Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview
    {
        LearningModelVariableDescriptorPreview(std::nullptr_t) noexcept {}
        LearningModelVariableDescriptorPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MapVariableDescriptorPreview : Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview
    {
        MapVariableDescriptorPreview(std::nullptr_t) noexcept {}
        MapVariableDescriptorPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SequenceVariableDescriptorPreview : Windows::AI::MachineLearning::Preview::ISequenceVariableDescriptorPreview
    {
        SequenceVariableDescriptorPreview(std::nullptr_t) noexcept {}
        SequenceVariableDescriptorPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::AI::MachineLearning::Preview::ISequenceVariableDescriptorPreview(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TensorVariableDescriptorPreview : Windows::AI::MachineLearning::Preview::ITensorVariableDescriptorPreview
    {
        TensorVariableDescriptorPreview(std::nullptr_t) noexcept {}
        TensorVariableDescriptorPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::AI::MachineLearning::Preview::ITensorVariableDescriptorPreview(ptr, take_ownership_from_abi) {}
    };
}
#endif
