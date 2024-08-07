#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Npc019_animBP

#include "Basic.hpp"

#include "MonsterAnimBP_Base_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass npc019_animBP.npc019_animBP_C
// 0x0000 (0x3C60 - 0x3C60)
class UNpc019_animBP_C final : public UMonsterAnimBP_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"npc019_animBP_C">();
	}
	static class UNpc019_animBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNpc019_animBP_C>();
	}
};
static_assert(alignof(UNpc019_animBP_C) == 0x000010, "Wrong alignment on UNpc019_animBP_C");
static_assert(sizeof(UNpc019_animBP_C) == 0x003C60, "Wrong size on UNpc019_animBP_C");

}

