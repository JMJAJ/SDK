#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SwordJumpAttackDown1

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SwordJumpAttackDown1.SwordJumpAttackDown1_C
// 0x0000 (0x0140 - 0x0140)
class USwordJumpAttackDown1_C final : public UHottaSkillEffect_HitDown
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SwordJumpAttackDown1_C">();
	}
	static class USwordJumpAttackDown1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USwordJumpAttackDown1_C>();
	}
};
static_assert(alignof(USwordJumpAttackDown1_C) == 0x000008, "Wrong alignment on USwordJumpAttackDown1_C");
static_assert(sizeof(USwordJumpAttackDown1_C) == 0x000140, "Wrong size on USwordJumpAttackDown1_C");

}

