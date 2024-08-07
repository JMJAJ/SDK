#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LockRangeMarkRobMelee10

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LockRangeMarkRobMelee10.LockRangeMarkRobMelee10_C
// 0x0008 (0x0040 - 0x0038)
class ULockRangeMarkRobMelee10_C final : public UHottaTargetType_AttackTarget
{
public:
	float                                         Range;                                             // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetTargets(class AActor* OwningActor, class AActor* TargetingActor, const struct FGameplayEventData& EventData, TArray<struct FHitResult>* OutHitResults, TArray<class AActor*>* OutActors) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LockRangeMarkRobMelee10_C">();
	}
	static class ULockRangeMarkRobMelee10_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULockRangeMarkRobMelee10_C>();
	}
};
static_assert(alignof(ULockRangeMarkRobMelee10_C) == 0x000008, "Wrong alignment on ULockRangeMarkRobMelee10_C");
static_assert(sizeof(ULockRangeMarkRobMelee10_C) == 0x000040, "Wrong size on ULockRangeMarkRobMelee10_C");
static_assert(offsetof(ULockRangeMarkRobMelee10_C, Range) == 0x000038, "Member 'ULockRangeMarkRobMelee10_C::Range' has a wrong offset!");

}

