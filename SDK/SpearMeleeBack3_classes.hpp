#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpearMeleeBack3

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SpearMeleeBack3.SpearMeleeBack3_C
// 0x0000 (0x0168 - 0x0168)
class USpearMeleeBack3_C final : public UHottaSkillEffect_HitBack
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpearMeleeBack3_C">();
	}
	static class USpearMeleeBack3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpearMeleeBack3_C>();
	}
};
static_assert(alignof(USpearMeleeBack3_C) == 0x000008, "Wrong alignment on USpearMeleeBack3_C");
static_assert(sizeof(USpearMeleeBack3_C) == 0x000168, "Wrong size on USpearMeleeBack3_C");

}

