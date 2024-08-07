#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Limit_Matrix_R_7_level2

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Limit_Matrix_R_7_level2.Limit_Matrix_R_7_level2_C
// 0x0000 (0x0058 - 0x0058)
class ULimit_Matrix_R_7_level2_C final : public UHottaGameplayEffectCustomApplicationRequirement
{
public:
	bool CanApplyGameplayEffectContent(class AActor* SourceActor, class AActor* TargetActor, class AActor* InstigatorActor, const class UGameplayEffect* GameplayEffect) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Limit_Matrix_R_7_level2_C">();
	}
	static class ULimit_Matrix_R_7_level2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULimit_Matrix_R_7_level2_C>();
	}
};
static_assert(alignof(ULimit_Matrix_R_7_level2_C) == 0x000008, "Wrong alignment on ULimit_Matrix_R_7_level2_C");
static_assert(sizeof(ULimit_Matrix_R_7_level2_C) == 0x000058, "Wrong size on ULimit_Matrix_R_7_level2_C");

}

