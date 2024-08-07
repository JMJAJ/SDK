#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TargetHasFirearms

#include "Basic.hpp"

#include "HottaFramework_structs.hpp"
#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TargetHasFirearms.TargetHasFirearms_C
// 0x0000 (0x0058 - 0x0058)
class UTargetHasFirearms_C final : public UHottaGameplayEffectCustomApplicationRequirement
{
public:
	bool CanApplyGameplayEffectContent(class AActor* SourceActor, class AActor* TargetActor, class AActor* InstigatorActor, const class UGameplayEffect* GameplayEffect) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TargetHasFirearms_C">();
	}
	static class UTargetHasFirearms_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTargetHasFirearms_C>();
	}
};
static_assert(alignof(UTargetHasFirearms_C) == 0x000008, "Wrong alignment on UTargetHasFirearms_C");
static_assert(sizeof(UTargetHasFirearms_C) == 0x000058, "Wrong size on UTargetHasFirearms_C");

}

