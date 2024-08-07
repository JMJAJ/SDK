#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RidingAttackState

#include "Basic.hpp"

#include "QRSL_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RidingAttackState.BP_RidingAttackState_C
// 0x0000 (0x0088 - 0x0088)
class UBP_RidingAttackState_C final : public UHottaPlayerRidingAttackState
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RidingAttackState_C">();
	}
	static class UBP_RidingAttackState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RidingAttackState_C>();
	}
};
static_assert(alignof(UBP_RidingAttackState_C) == 0x000008, "Wrong alignment on UBP_RidingAttackState_C");
static_assert(sizeof(UBP_RidingAttackState_C) == 0x000088, "Wrong size on UBP_RidingAttackState_C");

}

