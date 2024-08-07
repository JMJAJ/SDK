#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_StopMontage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_StopMontage.BTTask_StopMontage_C
// 0x0010 (0x00B8 - 0x00A8)
class UBTTask_StopMontage_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   MontagePropertyName;                               // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BTTask_StopMontage(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_StopMontage_C">();
	}
	static class UBTTask_StopMontage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_StopMontage_C>();
	}
};
static_assert(alignof(UBTTask_StopMontage_C) == 0x000008, "Wrong alignment on UBTTask_StopMontage_C");
static_assert(sizeof(UBTTask_StopMontage_C) == 0x0000B8, "Wrong size on UBTTask_StopMontage_C");
static_assert(offsetof(UBTTask_StopMontage_C, UberGraphFrame) == 0x0000A8, "Member 'UBTTask_StopMontage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTTask_StopMontage_C, MontagePropertyName) == 0x0000B0, "Member 'UBTTask_StopMontage_C::MontagePropertyName' has a wrong offset!");

}

