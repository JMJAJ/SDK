#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HitGroundLeft

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HitGroundLeft.HitGroundLeft_C
// 0x0000 (0x00D8 - 0x00D8)
class UHitGroundLeft_C final : public UHottaSkillEffect_Hit
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HitGroundLeft_C">();
	}
	static class UHitGroundLeft_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHitGroundLeft_C>();
	}
};
static_assert(alignof(UHitGroundLeft_C) == 0x000008, "Wrong alignment on UHitGroundLeft_C");
static_assert(sizeof(UHitGroundLeft_C) == 0x0000D8, "Wrong size on UHitGroundLeft_C");

}

