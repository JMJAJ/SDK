#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SceneEffectCutTree33

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SceneEffectCutTree33.SceneEffectCutTree33_C
// 0x0020 (0x02F8 - 0x02D8)
class ASceneEffectCutTree33_C final : public ASceneEffectCutTreeActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       EffectPosSphere;                                   // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   TreeRootComponent;                                 // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               TreeTrunkMaterial;                                 // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SceneEffectCutTree33(int32 EntryPoint);
	void OpenCutTreeShockEffectEvent();
	void CloseCutTreeEffectEvent();
	void OpenCutTreeEffectEvent(const struct FVector& HitLocation, float EffectScale);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SceneEffectCutTree33_C">();
	}
	static class ASceneEffectCutTree33_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASceneEffectCutTree33_C>();
	}
};
static_assert(alignof(ASceneEffectCutTree33_C) == 0x000008, "Wrong alignment on ASceneEffectCutTree33_C");
static_assert(sizeof(ASceneEffectCutTree33_C) == 0x0002F8, "Wrong size on ASceneEffectCutTree33_C");
static_assert(offsetof(ASceneEffectCutTree33_C, UberGraphFrame) == 0x0002D8, "Member 'ASceneEffectCutTree33_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASceneEffectCutTree33_C, EffectPosSphere) == 0x0002E0, "Member 'ASceneEffectCutTree33_C::EffectPosSphere' has a wrong offset!");
static_assert(offsetof(ASceneEffectCutTree33_C, TreeRootComponent) == 0x0002E8, "Member 'ASceneEffectCutTree33_C::TreeRootComponent' has a wrong offset!");
static_assert(offsetof(ASceneEffectCutTree33_C, TreeTrunkMaterial) == 0x0002F0, "Member 'ASceneEffectCutTree33_C::TreeTrunkMaterial' has a wrong offset!");

}

