#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BePhyDamage

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BePhyDamage.BePhyDamage_C
// 0x0000 (0x0058 - 0x0058)
class UBePhyDamage_C final : public UHottaGameplayEffectCustomApplicationRequirement
{
public:
	bool CanApplyGameplayEffectContent(class AActor* SourceActor, class AActor* TargetActor, class AActor* InstigatorActor, const class UGameplayEffect* GameplayEffect) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BePhyDamage_C">();
	}
	static class UBePhyDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBePhyDamage_C>();
	}
};
static_assert(alignof(UBePhyDamage_C) == 0x000008, "Wrong alignment on UBePhyDamage_C");
static_assert(sizeof(UBePhyDamage_C) == 0x000058, "Wrong size on UBePhyDamage_C");

}

