#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SceneEffectCutTreeShockBase

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SceneEffectCutTreeShockBase.BP_SceneEffectCutTreeShockBase_C
// 0x0010 (0x02B0 - 0x02A0)
class ABP_SceneEffectCutTreeShockBase_C final : public ASceneEffectCutTreeShockBase
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SceneEffectCutTreeShockBase_C">();
	}
	static class ABP_SceneEffectCutTreeShockBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SceneEffectCutTreeShockBase_C>();
	}
};
static_assert(alignof(ABP_SceneEffectCutTreeShockBase_C) == 0x000010, "Wrong alignment on ABP_SceneEffectCutTreeShockBase_C");
static_assert(sizeof(ABP_SceneEffectCutTreeShockBase_C) == 0x0002B0, "Wrong size on ABP_SceneEffectCutTreeShockBase_C");
static_assert(offsetof(ABP_SceneEffectCutTreeShockBase_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_SceneEffectCutTreeShockBase_C::DefaultSceneRoot' has a wrong offset!");

}

