// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Composition_Scenes_2_H
#define WINRT_Windows_UI_Composition_Scenes_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Composition.Scenes.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Composition::Scenes
{
    struct __declspec(empty_bases) SceneBoundingBox : Windows::UI::Composition::Scenes::ISceneBoundingBox,
        impl::base<SceneBoundingBox, Windows::UI::Composition::Scenes::SceneObject, Windows::UI::Composition::CompositionObject>,
        impl::require<SceneBoundingBox, Windows::UI::Composition::Scenes::ISceneObject, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SceneBoundingBox(std::nullptr_t) noexcept {}
        SceneBoundingBox(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Scenes::ISceneBoundingBox(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SceneComponent : Windows::UI::Composition::Scenes::ISceneComponent,
        impl::base<SceneComponent, Windows::UI::Composition::Scenes::SceneObject, Windows::UI::Composition::CompositionObject>,
        impl::require<SceneComponent, Windows::UI::Composition::Scenes::ISceneObject, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SceneComponent(std::nullptr_t) noexcept {}
        SceneComponent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Scenes::ISceneComponent(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SceneComponentCollection : Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneComponent>,
        impl::base<SceneComponentCollection, Windows::UI::Composition::Scenes::SceneObject, Windows::UI::Composition::CompositionObject>,
        impl::require<SceneComponentCollection, Windows::UI::Composition::Scenes::ISceneComponentCollection, Windows::UI::Composition::Scenes::ISceneObject, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SceneComponentCollection(std::nullptr_t) noexcept {}
        SceneComponentCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneComponent>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SceneMaterial : Windows::UI::Composition::Scenes::ISceneMaterial,
        impl::base<SceneMaterial, Windows::UI::Composition::Scenes::SceneObject, Windows::UI::Composition::CompositionObject>,
        impl::require<SceneMaterial, Windows::UI::Composition::Scenes::ISceneObject, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SceneMaterial(std::nullptr_t) noexcept {}
        SceneMaterial(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Scenes::ISceneMaterial(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SceneMaterialInput : Windows::UI::Composition::Scenes::ISceneMaterialInput,
        impl::base<SceneMaterialInput, Windows::UI::Composition::Scenes::SceneObject, Windows::UI::Composition::CompositionObject>,
        impl::require<SceneMaterialInput, Windows::UI::Composition::Scenes::ISceneObject, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SceneMaterialInput(std::nullptr_t) noexcept {}
        SceneMaterialInput(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Scenes::ISceneMaterialInput(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SceneMesh : Windows::UI::Composition::Scenes::ISceneMesh,
        impl::base<SceneMesh, Windows::UI::Composition::Scenes::SceneObject, Windows::UI::Composition::CompositionObject>,
        impl::require<SceneMesh, Windows::UI::Composition::Scenes::ISceneObject, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SceneMesh(std::nullptr_t) noexcept {}
        SceneMesh(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Scenes::ISceneMesh(ptr, take_ownership_from_abi) {}
        static auto Create(Windows::UI::Composition::Compositor const& compositor);
    };
    struct __declspec(empty_bases) SceneMeshMaterialAttributeMap : Windows::UI::Composition::Scenes::ISceneMeshMaterialAttributeMap,
        impl::base<SceneMeshMaterialAttributeMap, Windows::UI::Composition::Scenes::SceneObject, Windows::UI::Composition::CompositionObject>,
        impl::require<SceneMeshMaterialAttributeMap, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::UI::Composition::Scenes::SceneAttributeSemantic>>, Windows::Foundation::Collections::IMap<hstring, Windows::UI::Composition::Scenes::SceneAttributeSemantic>, Windows::UI::Composition::Scenes::ISceneObject, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SceneMeshMaterialAttributeMap(std::nullptr_t) noexcept {}
        SceneMeshMaterialAttributeMap(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Scenes::ISceneMeshMaterialAttributeMap(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SceneMeshRendererComponent : Windows::UI::Composition::Scenes::ISceneMeshRendererComponent,
        impl::base<SceneMeshRendererComponent, Windows::UI::Composition::Scenes::SceneRendererComponent, Windows::UI::Composition::Scenes::SceneComponent, Windows::UI::Composition::Scenes::SceneObject, Windows::UI::Composition::CompositionObject>,
        impl::require<SceneMeshRendererComponent, Windows::UI::Composition::Scenes::ISceneRendererComponent, Windows::UI::Composition::Scenes::ISceneComponent, Windows::UI::Composition::Scenes::ISceneObject, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SceneMeshRendererComponent(std::nullptr_t) noexcept {}
        SceneMeshRendererComponent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Scenes::ISceneMeshRendererComponent(ptr, take_ownership_from_abi) {}
        static auto Create(Windows::UI::Composition::Compositor const& compositor);
    };
    struct __declspec(empty_bases) SceneMetallicRoughnessMaterial : Windows::UI::Composition::Scenes::ISceneMetallicRoughnessMaterial,
        impl::base<SceneMetallicRoughnessMaterial, Windows::UI::Composition::Scenes::ScenePbrMaterial, Windows::UI::Composition::Scenes::SceneMaterial, Windows::UI::Composition::Scenes::SceneObject, Windows::UI::Composition::CompositionObject>,
        impl::require<SceneMetallicRoughnessMaterial, Windows::UI::Composition::Scenes::IScenePbrMaterial, Windows::UI::Composition::Scenes::ISceneMaterial, Windows::UI::Composition::Scenes::ISceneObject, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SceneMetallicRoughnessMaterial(std::nullptr_t) noexcept {}
        SceneMetallicRoughnessMaterial(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Scenes::ISceneMetallicRoughnessMaterial(ptr, take_ownership_from_abi) {}
        static auto Create(Windows::UI::Composition::Compositor const& compositor);
    };
    struct __declspec(empty_bases) SceneModelTransform : Windows::UI::Composition::Scenes::ISceneModelTransform,
        impl::base<SceneModelTransform, Windows::UI::Composition::CompositionTransform, Windows::UI::Composition::CompositionObject>,
        impl::require<SceneModelTransform, Windows::UI::Composition::ICompositionTransform, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SceneModelTransform(std::nullptr_t) noexcept {}
        SceneModelTransform(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Scenes::ISceneModelTransform(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SceneNode : Windows::UI::Composition::Scenes::ISceneNode,
        impl::base<SceneNode, Windows::UI::Composition::Scenes::SceneObject, Windows::UI::Composition::CompositionObject>,
        impl::require<SceneNode, Windows::UI::Composition::Scenes::ISceneObject, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SceneNode(std::nullptr_t) noexcept {}
        SceneNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Scenes::ISceneNode(ptr, take_ownership_from_abi) {}
        static auto Create(Windows::UI::Composition::Compositor const& compositor);
    };
    struct __declspec(empty_bases) SceneNodeCollection : Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneNode>,
        impl::base<SceneNodeCollection, Windows::UI::Composition::Scenes::SceneObject, Windows::UI::Composition::CompositionObject>,
        impl::require<SceneNodeCollection, Windows::UI::Composition::Scenes::ISceneNodeCollection, Windows::UI::Composition::Scenes::ISceneObject, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SceneNodeCollection(std::nullptr_t) noexcept {}
        SceneNodeCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneNode>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SceneObject : Windows::UI::Composition::Scenes::ISceneObject,
        impl::base<SceneObject, Windows::UI::Composition::CompositionObject>,
        impl::require<SceneObject, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SceneObject(std::nullptr_t) noexcept {}
        SceneObject(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Scenes::ISceneObject(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ScenePbrMaterial : Windows::UI::Composition::Scenes::IScenePbrMaterial,
        impl::base<ScenePbrMaterial, Windows::UI::Composition::Scenes::SceneMaterial, Windows::UI::Composition::Scenes::SceneObject, Windows::UI::Composition::CompositionObject>,
        impl::require<ScenePbrMaterial, Windows::UI::Composition::Scenes::ISceneMaterial, Windows::UI::Composition::Scenes::ISceneObject, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        ScenePbrMaterial(std::nullptr_t) noexcept {}
        ScenePbrMaterial(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Scenes::IScenePbrMaterial(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SceneRendererComponent : Windows::UI::Composition::Scenes::ISceneRendererComponent,
        impl::base<SceneRendererComponent, Windows::UI::Composition::Scenes::SceneComponent, Windows::UI::Composition::Scenes::SceneObject, Windows::UI::Composition::CompositionObject>,
        impl::require<SceneRendererComponent, Windows::UI::Composition::Scenes::ISceneComponent, Windows::UI::Composition::Scenes::ISceneObject, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SceneRendererComponent(std::nullptr_t) noexcept {}
        SceneRendererComponent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Scenes::ISceneRendererComponent(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SceneSurfaceMaterialInput : Windows::UI::Composition::Scenes::ISceneSurfaceMaterialInput,
        impl::base<SceneSurfaceMaterialInput, Windows::UI::Composition::Scenes::SceneMaterialInput, Windows::UI::Composition::Scenes::SceneObject, Windows::UI::Composition::CompositionObject>,
        impl::require<SceneSurfaceMaterialInput, Windows::UI::Composition::Scenes::ISceneMaterialInput, Windows::UI::Composition::Scenes::ISceneObject, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SceneSurfaceMaterialInput(std::nullptr_t) noexcept {}
        SceneSurfaceMaterialInput(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Scenes::ISceneSurfaceMaterialInput(ptr, take_ownership_from_abi) {}
        static auto Create(Windows::UI::Composition::Compositor const& compositor);
    };
    struct __declspec(empty_bases) SceneVisual : Windows::UI::Composition::Scenes::ISceneVisual,
        impl::base<SceneVisual, Windows::UI::Composition::ContainerVisual, Windows::UI::Composition::Visual, Windows::UI::Composition::CompositionObject>,
        impl::require<SceneVisual, Windows::UI::Composition::IContainerVisual, Windows::UI::Composition::IVisual, Windows::UI::Composition::IVisual2, Windows::UI::Composition::IVisual3, Windows::UI::Composition::IVisual4, Windows::UI::Composition::ICompositionObject, Windows::UI::Composition::ICompositionObject2, Windows::UI::Composition::ICompositionObject3, Windows::UI::Composition::ICompositionObject4, Windows::Foundation::IClosable, Windows::UI::Composition::IAnimationObject>
    {
        SceneVisual(std::nullptr_t) noexcept {}
        SceneVisual(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Composition::Scenes::ISceneVisual(ptr, take_ownership_from_abi) {}
        static auto Create(Windows::UI::Composition::Compositor const& compositor);
    };
}
#endif
