#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpBranchAttackSection

#include "Basic.hpp"

#include "BP_JumpSectionHoldTiggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SpBranchAttackSection.SpBranchAttackSection_C
// 0x0000 (0x0040 - 0x0040)
class USpBranchAttackSection_C final : public UBP_JumpSectionHoldTiggerBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpBranchAttackSection_C">();
	}
	static class USpBranchAttackSection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpBranchAttackSection_C>();
	}
};
static_assert(alignof(USpBranchAttackSection_C) == 0x000008, "Wrong alignment on USpBranchAttackSection_C");
static_assert(sizeof(USpBranchAttackSection_C) == 0x000040, "Wrong size on USpBranchAttackSection_C");

}

