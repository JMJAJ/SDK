#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_RecoverRotation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_RecoverRotation.BTTask_RecoverRotation_C
// 0x0008 (0x00B0 - 0x00A8)
class UBTTask_RecoverRotation_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BTTask_RecoverRotation(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_RecoverRotation_C">();
	}
	static class UBTTask_RecoverRotation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_RecoverRotation_C>();
	}
};
static_assert(alignof(UBTTask_RecoverRotation_C) == 0x000008, "Wrong alignment on UBTTask_RecoverRotation_C");
static_assert(sizeof(UBTTask_RecoverRotation_C) == 0x0000B0, "Wrong size on UBTTask_RecoverRotation_C");
static_assert(offsetof(UBTTask_RecoverRotation_C, UberGraphFrame) == 0x0000A8, "Member 'UBTTask_RecoverRotation_C::UberGraphFrame' has a wrong offset!");

}

