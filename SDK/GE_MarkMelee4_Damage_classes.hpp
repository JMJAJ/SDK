#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_MarkMelee4_Damage

#include "Basic.hpp"

#include "MarkDefaultDamage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_MarkMelee4_Damage.GE_MarkMelee4_Damage_C
// 0x0000 (0x1050 - 0x1050)
class UGE_MarkMelee4_Damage_C final : public UMarkDefaultDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_MarkMelee4_Damage_C">();
	}
	static class UGE_MarkMelee4_Damage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_MarkMelee4_Damage_C>();
	}
};
static_assert(alignof(UGE_MarkMelee4_Damage_C) == 0x000008, "Wrong alignment on UGE_MarkMelee4_Damage_C");
static_assert(sizeof(UGE_MarkMelee4_Damage_C) == 0x001050, "Wrong size on UGE_MarkMelee4_Damage_C");

}

