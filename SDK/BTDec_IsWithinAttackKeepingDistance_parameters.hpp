#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTDec_IsWithinAttackKeepingDistance

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTDec_IsWithinAttackKeepingDistance.BTDec_IsWithinAttackKeepingDistance_C.PerformConditionCheckAI
// 0x0028 (0x0028 - 0x0000)
struct BTDec_IsWithinAttackKeepingDistance_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33F0[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaAIController*                     K2Node_DynamicCast_AsHotta_AIController;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsWithinAttackKeepingDistance_ReturnValue; // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTDec_IsWithinAttackKeepingDistance_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BTDec_IsWithinAttackKeepingDistance_C_PerformConditionCheckAI");
static_assert(sizeof(BTDec_IsWithinAttackKeepingDistance_C_PerformConditionCheckAI) == 0x000028, "Wrong size on BTDec_IsWithinAttackKeepingDistance_C_PerformConditionCheckAI");
static_assert(offsetof(BTDec_IsWithinAttackKeepingDistance_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BTDec_IsWithinAttackKeepingDistance_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTDec_IsWithinAttackKeepingDistance_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BTDec_IsWithinAttackKeepingDistance_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTDec_IsWithinAttackKeepingDistance_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BTDec_IsWithinAttackKeepingDistance_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDec_IsWithinAttackKeepingDistance_C_PerformConditionCheckAI, K2Node_DynamicCast_AsHotta_AIController) == 0x000018, "Member 'BTDec_IsWithinAttackKeepingDistance_C_PerformConditionCheckAI::K2Node_DynamicCast_AsHotta_AIController' has a wrong offset!");
static_assert(offsetof(BTDec_IsWithinAttackKeepingDistance_C_PerformConditionCheckAI, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BTDec_IsWithinAttackKeepingDistance_C_PerformConditionCheckAI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTDec_IsWithinAttackKeepingDistance_C_PerformConditionCheckAI, CallFunc_IsWithinAttackKeepingDistance_ReturnValue) == 0x000021, "Member 'BTDec_IsWithinAttackKeepingDistance_C_PerformConditionCheckAI::CallFunc_IsWithinAttackKeepingDistance_ReturnValue' has a wrong offset!");

}

