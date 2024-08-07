#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_RescueTarget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_RescueTarget.BTTask_RescueTarget_C
// 0x0058 (0x0100 - 0x00A8)
class UBTTask_RescueTarget_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 TargetKey;                                         // 0x00B0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 ShouldRescueTarget;                                // 0x00D8(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTTask_RescueTarget(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_RescueTarget_C">();
	}
	static class UBTTask_RescueTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_RescueTarget_C>();
	}
};
static_assert(alignof(UBTTask_RescueTarget_C) == 0x000008, "Wrong alignment on UBTTask_RescueTarget_C");
static_assert(sizeof(UBTTask_RescueTarget_C) == 0x000100, "Wrong size on UBTTask_RescueTarget_C");
static_assert(offsetof(UBTTask_RescueTarget_C, UberGraphFrame) == 0x0000A8, "Member 'UBTTask_RescueTarget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTTask_RescueTarget_C, TargetKey) == 0x0000B0, "Member 'UBTTask_RescueTarget_C::TargetKey' has a wrong offset!");
static_assert(offsetof(UBTTask_RescueTarget_C, ShouldRescueTarget) == 0x0000D8, "Member 'UBTTask_RescueTarget_C::ShouldRescueTarget' has a wrong offset!");

}

