#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SelfIsInPVP

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SelfIsInPVP.SelfIsInPVP_C
// 0x0000 (0x0058 - 0x0058)
class USelfIsInPVP_C final : public UHottaGameplayEffectCustomApplicationRequirement
{
public:
	bool CanApplyGameplayEffectContent(class AActor* SourceActor, class AActor* TargetActor, class AActor* InstigatorActor, const class UGameplayEffect* GameplayEffect) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SelfIsInPVP_C">();
	}
	static class USelfIsInPVP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USelfIsInPVP_C>();
	}
};
static_assert(alignof(USelfIsInPVP_C) == 0x000008, "Wrong alignment on USelfIsInPVP_C");
static_assert(sizeof(USelfIsInPVP_C) == 0x000058, "Wrong size on USelfIsInPVP_C");

}

