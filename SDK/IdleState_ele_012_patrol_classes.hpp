#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IdleState_ele_012_patrol

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IdleState_ele_012_patrol.IdleState_ele_012_patrol_C
// 0x0000 (0x0280 - 0x0280)
class UIdleState_ele_012_patrol_C final : public UHottaAIIdleState_Patrol
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IdleState_ele_012_patrol_C">();
	}
	static class UIdleState_ele_012_patrol_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIdleState_ele_012_patrol_C>();
	}
};
static_assert(alignof(UIdleState_ele_012_patrol_C) == 0x000008, "Wrong alignment on UIdleState_ele_012_patrol_C");
static_assert(sizeof(UIdleState_ele_012_patrol_C) == 0x000280, "Wrong size on UIdleState_ele_012_patrol_C");

}

