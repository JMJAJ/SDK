#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BurnGrassDamageManager

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BurnGrassDamageManager.BP_BurnGrassDamageManager_C
// 0x0008 (0x0250 - 0x0248)
class ABP_BurnGrassDamageManager_C final : public AHottaBurnGrassDamageActorManager
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BurnGrassDamageManager_C">();
	}
	static class ABP_BurnGrassDamageManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BurnGrassDamageManager_C>();
	}
};
static_assert(alignof(ABP_BurnGrassDamageManager_C) == 0x000008, "Wrong alignment on ABP_BurnGrassDamageManager_C");
static_assert(sizeof(ABP_BurnGrassDamageManager_C) == 0x000250, "Wrong size on ABP_BurnGrassDamageManager_C");
static_assert(offsetof(ABP_BurnGrassDamageManager_C, DefaultSceneRoot) == 0x000248, "Member 'ABP_BurnGrassDamageManager_C::DefaultSceneRoot' has a wrong offset!");

}

