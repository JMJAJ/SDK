#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SequenceDialogueNpcBase

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SequenceDialogueNpcBase.BP_SequenceDialogueNpcBase_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_SequenceDialogueNpcBase_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SequenceDialogueNpcBase_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_SequenceDialogueNpcBase_C_ReceiveEndPlay");
static_assert(sizeof(BP_SequenceDialogueNpcBase_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_SequenceDialogueNpcBase_C_ReceiveEndPlay");
static_assert(offsetof(BP_SequenceDialogueNpcBase_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_SequenceDialogueNpcBase_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_SequenceDialogueNpcBase.BP_SequenceDialogueNpcBase_C.ExecuteUbergraph_BP_SequenceDialogueNpcBase
// 0x0038 (0x0038 - 0x0000)
struct BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CAA[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHottaGameInstance*                     K2Node_DynamicCast_AsHotta_Game_Instance;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CAB[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHottaGameInstance*                     K2Node_DynamicCast_AsHotta_Game_Instance_1;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase) == 0x000008, "Wrong alignment on BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase");
static_assert(sizeof(BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase) == 0x000038, "Wrong size on BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase");
static_assert(offsetof(BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase, EntryPoint) == 0x000000, "Member 'BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase, K2Node_Event_EndPlayReason) == 0x000004, "Member 'BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase, K2Node_DynamicCast_AsHotta_Game_Instance) == 0x000010, "Member 'BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase::K2Node_DynamicCast_AsHotta_Game_Instance' has a wrong offset!");
static_assert(offsetof(BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase, CallFunc_GetGameInstance_ReturnValue_1) == 0x000020, "Member 'BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase, K2Node_DynamicCast_AsHotta_Game_Instance_1) == 0x000028, "Member 'BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase::K2Node_DynamicCast_AsHotta_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

