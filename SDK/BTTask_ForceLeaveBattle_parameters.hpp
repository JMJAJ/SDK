#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_ForceLeaveBattle

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTTask_ForceLeaveBattle.BTTask_ForceLeaveBattle_C.ExecuteUbergraph_BTTask_ForceLeaveBattle
// 0x0028 (0x0028 - 0x0000)
struct BTTask_ForceLeaveBattle_C_ExecuteUbergraph_BTTask_ForceLeaveBattle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5790[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHottaAIController*                     K2Node_DynamicCast_AsHotta_AIController;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTTask_ForceLeaveBattle_C_ExecuteUbergraph_BTTask_ForceLeaveBattle) == 0x000008, "Wrong alignment on BTTask_ForceLeaveBattle_C_ExecuteUbergraph_BTTask_ForceLeaveBattle");
static_assert(sizeof(BTTask_ForceLeaveBattle_C_ExecuteUbergraph_BTTask_ForceLeaveBattle) == 0x000028, "Wrong size on BTTask_ForceLeaveBattle_C_ExecuteUbergraph_BTTask_ForceLeaveBattle");
static_assert(offsetof(BTTask_ForceLeaveBattle_C_ExecuteUbergraph_BTTask_ForceLeaveBattle, EntryPoint) == 0x000000, "Member 'BTTask_ForceLeaveBattle_C_ExecuteUbergraph_BTTask_ForceLeaveBattle::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTTask_ForceLeaveBattle_C_ExecuteUbergraph_BTTask_ForceLeaveBattle, K2Node_Event_OwnerController) == 0x000008, "Member 'BTTask_ForceLeaveBattle_C_ExecuteUbergraph_BTTask_ForceLeaveBattle::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_ForceLeaveBattle_C_ExecuteUbergraph_BTTask_ForceLeaveBattle, K2Node_Event_ControlledPawn) == 0x000010, "Member 'BTTask_ForceLeaveBattle_C_ExecuteUbergraph_BTTask_ForceLeaveBattle::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTTask_ForceLeaveBattle_C_ExecuteUbergraph_BTTask_ForceLeaveBattle, K2Node_DynamicCast_AsHotta_AIController) == 0x000018, "Member 'BTTask_ForceLeaveBattle_C_ExecuteUbergraph_BTTask_ForceLeaveBattle::K2Node_DynamicCast_AsHotta_AIController' has a wrong offset!");
static_assert(offsetof(BTTask_ForceLeaveBattle_C_ExecuteUbergraph_BTTask_ForceLeaveBattle, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BTTask_ForceLeaveBattle_C_ExecuteUbergraph_BTTask_ForceLeaveBattle::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BTTask_ForceLeaveBattle.BTTask_ForceLeaveBattle_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTTask_ForceLeaveBattle_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_ForceLeaveBattle_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTTask_ForceLeaveBattle_C_ReceiveExecuteAI");
static_assert(sizeof(BTTask_ForceLeaveBattle_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTTask_ForceLeaveBattle_C_ReceiveExecuteAI");
static_assert(offsetof(BTTask_ForceLeaveBattle_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTTask_ForceLeaveBattle_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_ForceLeaveBattle_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTTask_ForceLeaveBattle_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

