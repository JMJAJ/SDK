#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhysicFrame

#include "Basic.hpp"

#include "BP_HottaGameplayMMCalcBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PhysicFrame.PhysicFrame_C
// 0x0000 (0x0040 - 0x0040)
class UPhysicFrame_C final : public UBP_HottaGameplayMMCalcBase_C
{
public:
	float HottaCalculateBaseMagnitude(const class AActor* OwnerActor, const class AActor* HitActor, const class AActor* InstigatorActor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PhysicFrame_C">();
	}
	static class UPhysicFrame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicFrame_C>();
	}
};
static_assert(alignof(UPhysicFrame_C) == 0x000008, "Wrong alignment on UPhysicFrame_C");
static_assert(sizeof(UPhysicFrame_C) == 0x000040, "Wrong size on UPhysicFrame_C");

}

