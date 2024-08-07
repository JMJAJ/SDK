#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FPlayerMarkRobChangeSkillPhy

#include "Basic.hpp"

#include "GA_SpawnProjectileBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_FPlayerMarkRobChangeSkillPhy.GA_FPlayerMarkRobChangeSkillPhy_C
// 0x0000 (0x0CF0 - 0x0CF0)
class UGA_FPlayerMarkRobChangeSkillPhy_C final : public UGA_SpawnProjectileBase_C
{
public:
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_FPlayerMarkRobChangeSkillPhy_C">();
	}
	static class UGA_FPlayerMarkRobChangeSkillPhy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FPlayerMarkRobChangeSkillPhy_C>();
	}
};
static_assert(alignof(UGA_FPlayerMarkRobChangeSkillPhy_C) == 0x000010, "Wrong alignment on UGA_FPlayerMarkRobChangeSkillPhy_C");
static_assert(sizeof(UGA_FPlayerMarkRobChangeSkillPhy_C) == 0x000CF0, "Wrong size on UGA_FPlayerMarkRobChangeSkillPhy_C");

}

