#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MarkRobMeleeBack3

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MarkRobMeleeBack3.MarkRobMeleeBack3_C
// 0x0000 (0x0168 - 0x0168)
class UMarkRobMeleeBack3_C final : public UHottaSkillEffect_HitBack
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MarkRobMeleeBack3_C">();
	}
	static class UMarkRobMeleeBack3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMarkRobMeleeBack3_C>();
	}
};
static_assert(alignof(UMarkRobMeleeBack3_C) == 0x000008, "Wrong alignment on UMarkRobMeleeBack3_C");
static_assert(sizeof(UMarkRobMeleeBack3_C) == 0x000168, "Wrong size on UMarkRobMeleeBack3_C");

}

