#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FPlayerDSSkill

#include "Basic.hpp"

#include "GA_SpawnProjectileBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_FPlayerDSSkill.GA_FPlayerDSSkill_C
// 0x0000 (0x0CF0 - 0x0CF0)
class UGA_FPlayerDSSkill_C : public UGA_SpawnProjectileBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_FPlayerDSSkill_C">();
	}
	static class UGA_FPlayerDSSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FPlayerDSSkill_C>();
	}
};
static_assert(alignof(UGA_FPlayerDSSkill_C) == 0x000010, "Wrong alignment on UGA_FPlayerDSSkill_C");
static_assert(sizeof(UGA_FPlayerDSSkill_C) == 0x000CF0, "Wrong size on UGA_FPlayerDSSkill_C");

}

