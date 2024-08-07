#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTDec_IsWithinAttackKeepingDistance

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTDec_IsWithinAttackKeepingDistance.BTDec_IsWithinAttackKeepingDistance_C
// 0x0000 (0x00A0 - 0x00A0)
class UBTDec_IsWithinAttackKeepingDistance_C final : public UBTDecorator_BlueprintBase
{
public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTDec_IsWithinAttackKeepingDistance_C">();
	}
	static class UBTDec_IsWithinAttackKeepingDistance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDec_IsWithinAttackKeepingDistance_C>();
	}
};
static_assert(alignof(UBTDec_IsWithinAttackKeepingDistance_C) == 0x000008, "Wrong alignment on UBTDec_IsWithinAttackKeepingDistance_C");
static_assert(sizeof(UBTDec_IsWithinAttackKeepingDistance_C) == 0x0000A0, "Wrong size on UBTDec_IsWithinAttackKeepingDistance_C");

}

