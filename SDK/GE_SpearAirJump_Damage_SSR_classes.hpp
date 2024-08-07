#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_SpearAirJump_Damage_SSR

#include "Basic.hpp"

#include "SpearDefaultDamage_SSR_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_SpearAirJump_Damage_SSR.GE_SpearAirJump_Damage_SSR_C
// 0x0000 (0x1050 - 0x1050)
class UGE_SpearAirJump_Damage_SSR_C : public USpearDefaultDamage_SSR_C
{
public:
	float CalcExtraDamage(class AHottaCharacter* TargetActor, class UAbilitySystemComponent* SourceAbilityComp) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_SpearAirJump_Damage_SSR_C">();
	}
	static class UGE_SpearAirJump_Damage_SSR_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_SpearAirJump_Damage_SSR_C>();
	}
};
static_assert(alignof(UGE_SpearAirJump_Damage_SSR_C) == 0x000008, "Wrong alignment on UGE_SpearAirJump_Damage_SSR_C");
static_assert(sizeof(UGE_SpearAirJump_Damage_SSR_C) == 0x001050, "Wrong size on UGE_SpearAirJump_Damage_SSR_C");

}

