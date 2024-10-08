#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MrakPhyLevel6_4

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MrakPhyLevel6_4.MrakPhyLevel6_4_C
// 0x0008 (0x0060 - 0x0058)
class UMrakPhyLevel6_4_C final : public UHottaGameplayEffectCustomApplicationRequirement
{
public:
	class AWeaponBase*                            NewVar_0;                                          // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool CanApplyGameplayEffectContent(class AActor* SourceActor, class AActor* TargetActor, class AActor* InstigatorActor, const class UGameplayEffect* GameplayEffect) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MrakPhyLevel6_4_C">();
	}
	static class UMrakPhyLevel6_4_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMrakPhyLevel6_4_C>();
	}
};
static_assert(alignof(UMrakPhyLevel6_4_C) == 0x000008, "Wrong alignment on UMrakPhyLevel6_4_C");
static_assert(sizeof(UMrakPhyLevel6_4_C) == 0x000060, "Wrong size on UMrakPhyLevel6_4_C");
static_assert(offsetof(UMrakPhyLevel6_4_C, NewVar_0) == 0x000058, "Member 'UMrakPhyLevel6_4_C::NewVar_0' has a wrong offset!");

}

