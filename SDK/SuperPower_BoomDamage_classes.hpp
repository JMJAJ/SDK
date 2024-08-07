#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SuperPower_BoomDamage

#include "Basic.hpp"

#include "BP_HottaGameplayMMCalcBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SuperPower_BoomDamage.SuperPower_BoomDamage_C
// 0x0000 (0x0040 - 0x0040)
class USuperPower_BoomDamage_C final : public UBP_HottaGameplayMMCalcBase_C
{
public:
	float HottaCalculateBaseMagnitude(const class AActor* OwnerActor, const class AActor* HitActor, const class AActor* InstigatorActor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SuperPower_BoomDamage_C">();
	}
	static class USuperPower_BoomDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USuperPower_BoomDamage_C>();
	}
};
static_assert(alignof(USuperPower_BoomDamage_C) == 0x000008, "Wrong alignment on USuperPower_BoomDamage_C");
static_assert(sizeof(USuperPower_BoomDamage_C) == 0x000040, "Wrong size on USuperPower_BoomDamage_C");

}

