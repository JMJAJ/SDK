#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buff_MonCantBeDamage_Forever

#include "Basic.hpp"

#include "GE_MeleeBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Buff_MonCantBeDamage_Forever.Buff_MonCantBeDamage_Forever_C
// 0x0000 (0x1050 - 0x1050)
class UBuff_MonCantBeDamage_Forever_C final : public UGE_MeleeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Buff_MonCantBeDamage_Forever_C">();
	}
	static class UBuff_MonCantBeDamage_Forever_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuff_MonCantBeDamage_Forever_C>();
	}
};
static_assert(alignof(UBuff_MonCantBeDamage_Forever_C) == 0x000008, "Wrong alignment on UBuff_MonCantBeDamage_Forever_C");
static_assert(sizeof(UBuff_MonCantBeDamage_Forever_C) == 0x001050, "Wrong size on UBuff_MonCantBeDamage_Forever_C");

}

