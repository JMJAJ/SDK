#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Artifact11SkillCoolDown

#include "Basic.hpp"

#include "GE_MeleeBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Artifact11SkillCoolDown.GE_Artifact11SkillCoolDown_C
// 0x0000 (0x1050 - 0x1050)
class UGE_Artifact11SkillCoolDown_C final : public UGE_MeleeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Artifact11SkillCoolDown_C">();
	}
	static class UGE_Artifact11SkillCoolDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Artifact11SkillCoolDown_C>();
	}
};
static_assert(alignof(UGE_Artifact11SkillCoolDown_C) == 0x000008, "Wrong alignment on UGE_Artifact11SkillCoolDown_C");
static_assert(sizeof(UGE_Artifact11SkillCoolDown_C) == 0x001050, "Wrong size on UGE_Artifact11SkillCoolDown_C");

}

