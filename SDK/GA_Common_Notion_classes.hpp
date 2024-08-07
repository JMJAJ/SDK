#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Common_Notion

#include "Basic.hpp"

#include "GA_TriggerGEBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Common_Notion.GA_Common_Notion_C
// 0x0000 (0x0D10 - 0x0D10)
class UGA_Common_Notion_C final : public UGA_TriggerGEBase_C
{
public:
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Common_Notion_C">();
	}
	static class UGA_Common_Notion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Common_Notion_C>();
	}
};
static_assert(alignof(UGA_Common_Notion_C) == 0x000010, "Wrong alignment on UGA_Common_Notion_C");
static_assert(sizeof(UGA_Common_Notion_C) == 0x000D10, "Wrong size on UGA_Common_Notion_C");

}

