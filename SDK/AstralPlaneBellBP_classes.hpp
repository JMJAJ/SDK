#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AstralPlaneBellBP

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AstralPlaneBellBP.AstralPlaneBellBP_C
// 0x0008 (0x0338 - 0x0330)
class AAstralPlaneBellBP_C final : public AHottaBellmanActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AstralPlaneBellBP_C">();
	}
	static class AAstralPlaneBellBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAstralPlaneBellBP_C>();
	}
};
static_assert(alignof(AAstralPlaneBellBP_C) == 0x000008, "Wrong alignment on AAstralPlaneBellBP_C");
static_assert(sizeof(AAstralPlaneBellBP_C) == 0x000338, "Wrong size on AAstralPlaneBellBP_C");
static_assert(offsetof(AAstralPlaneBellBP_C, DefaultSceneRoot) == 0x000330, "Member 'AAstralPlaneBellBP_C::DefaultSceneRoot' has a wrong offset!");

}

