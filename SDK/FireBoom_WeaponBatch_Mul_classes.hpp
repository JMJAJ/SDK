#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FireBoom_WeaponBatch_Mul

#include "Basic.hpp"

#include "HottaFramework_structs.hpp"
#include "BP_HottaGameplayMMCalcBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FireBoom_WeaponBatch_Mul.FireBoom_WeaponBatch_Mul_C
// 0x0008 (0x0048 - 0x0040)
class UFireBoom_WeaponBatch_Mul_C : public UBP_HottaGameplayMMCalcBase_C
{
public:
	int32                                         Index_FireBoom_WeaponBatch_Mul_C;                  // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWeaponElementType                            Type;                                              // 0x0044(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	float HottaCalculateBaseMagnitude(const class AActor* OwnerActor, const class AActor* HitActor, const class AActor* InstigatorActor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FireBoom_WeaponBatch_Mul_C">();
	}
	static class UFireBoom_WeaponBatch_Mul_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFireBoom_WeaponBatch_Mul_C>();
	}
};
static_assert(alignof(UFireBoom_WeaponBatch_Mul_C) == 0x000008, "Wrong alignment on UFireBoom_WeaponBatch_Mul_C");
static_assert(sizeof(UFireBoom_WeaponBatch_Mul_C) == 0x000048, "Wrong size on UFireBoom_WeaponBatch_Mul_C");
static_assert(offsetof(UFireBoom_WeaponBatch_Mul_C, Index_FireBoom_WeaponBatch_Mul_C) == 0x000040, "Member 'UFireBoom_WeaponBatch_Mul_C::Index_FireBoom_WeaponBatch_Mul_C' has a wrong offset!");
static_assert(offsetof(UFireBoom_WeaponBatch_Mul_C, Type) == 0x000044, "Member 'UFireBoom_WeaponBatch_Mul_C::Type' has a wrong offset!");

}

