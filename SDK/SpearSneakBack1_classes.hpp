#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpearSneakBack1

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SpearSneakBack1.SpearSneakBack1_C
// 0x0000 (0x0168 - 0x0168)
class USpearSneakBack1_C final : public UHottaSkillEffect_HitBack
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpearSneakBack1_C">();
	}
	static class USpearSneakBack1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpearSneakBack1_C>();
	}
};
static_assert(alignof(USpearSneakBack1_C) == 0x000008, "Wrong alignment on USpearSneakBack1_C");
static_assert(sizeof(USpearSneakBack1_C) == 0x000168, "Wrong size on USpearSneakBack1_C");

}

