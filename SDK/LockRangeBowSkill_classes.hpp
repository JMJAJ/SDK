#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LockRangeBowSkill

#include "Basic.hpp"

#include "BP_TargetType_LockSphereBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LockRangeBowSkill.LockRangeBowSkill_C
// 0x0000 (0x00E8 - 0x00E8)
class ULockRangeBowSkill_C final : public UBP_TargetType_LockSphereBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LockRangeBowSkill_C">();
	}
	static class ULockRangeBowSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULockRangeBowSkill_C>();
	}
};
static_assert(alignof(ULockRangeBowSkill_C) == 0x000008, "Wrong alignment on ULockRangeBowSkill_C");
static_assert(sizeof(ULockRangeBowSkill_C) == 0x0000E8, "Wrong size on ULockRangeBowSkill_C");

}

