#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_SpearMelee4_2

#include "Basic.hpp"

#include "SpearDefaultDamage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_SpearMelee4_2.GE_SpearMelee4_2_C
// 0x0000 (0x1050 - 0x1050)
class UGE_SpearMelee4_2_C final : public USpearDefaultDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_SpearMelee4_2_C">();
	}
	static class UGE_SpearMelee4_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_SpearMelee4_2_C>();
	}
};
static_assert(alignof(UGE_SpearMelee4_2_C) == 0x000008, "Wrong alignment on UGE_SpearMelee4_2_C");
static_assert(sizeof(UGE_SpearMelee4_2_C) == 0x001050, "Wrong size on UGE_SpearMelee4_2_C");

}

