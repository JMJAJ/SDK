#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TargetIsMonster

#include "Basic.hpp"

#include "HottaFramework_structs.hpp"
#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TargetIsMonster.TargetIsMonster_C
// 0x0000 (0x0058 - 0x0058)
class UTargetIsMonster_C final : public UHottaGameplayEffectCustomApplicationRequirement
{
public:
	bool CanApplyGameplayEffectContent(class AActor* SourceActor, class AActor* TargetActor, class AActor* InstigatorActor, const class UGameplayEffect* GameplayEffect) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TargetIsMonster_C">();
	}
	static class UTargetIsMonster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTargetIsMonster_C>();
	}
};
static_assert(alignof(UTargetIsMonster_C) == 0x000008, "Wrong alignment on UTargetIsMonster_C");
static_assert(sizeof(UTargetIsMonster_C) == 0x000058, "Wrong size on UTargetIsMonster_C");

}

