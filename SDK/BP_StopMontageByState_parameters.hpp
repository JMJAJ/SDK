#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StopMontageByState

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_StopMontageByState.BP_StopMontageByState_C.Received_NotifyTick
// 0x0040 (0x0040 - 0x0000)
struct BP_StopMontageByState_C_Received_NotifyTick final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrameDeltaTime;                                    // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56C0[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_GetCurrentActiveMontage_ReturnValue;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHottaPlayerCharacter*                  K2Node_DynamicCast_AsHotta_Player_Character;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInState_ReturnValue;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_StopMontageByState_C_Received_NotifyTick) == 0x000008, "Wrong alignment on BP_StopMontageByState_C_Received_NotifyTick");
static_assert(sizeof(BP_StopMontageByState_C_Received_NotifyTick) == 0x000040, "Wrong size on BP_StopMontageByState_C_Received_NotifyTick");
static_assert(offsetof(BP_StopMontageByState_C_Received_NotifyTick, MeshComp) == 0x000000, "Member 'BP_StopMontageByState_C_Received_NotifyTick::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_StopMontageByState_C_Received_NotifyTick, Animation) == 0x000008, "Member 'BP_StopMontageByState_C_Received_NotifyTick::Animation' has a wrong offset!");
static_assert(offsetof(BP_StopMontageByState_C_Received_NotifyTick, FrameDeltaTime) == 0x000010, "Member 'BP_StopMontageByState_C_Received_NotifyTick::FrameDeltaTime' has a wrong offset!");
static_assert(offsetof(BP_StopMontageByState_C_Received_NotifyTick, ReturnValue) == 0x000014, "Member 'BP_StopMontageByState_C_Received_NotifyTick::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_StopMontageByState_C_Received_NotifyTick, CallFunc_GetAnimInstance_ReturnValue) == 0x000018, "Member 'BP_StopMontageByState_C_Received_NotifyTick::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_StopMontageByState_C_Received_NotifyTick, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_StopMontageByState_C_Received_NotifyTick::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_StopMontageByState_C_Received_NotifyTick, CallFunc_GetCurrentActiveMontage_ReturnValue) == 0x000028, "Member 'BP_StopMontageByState_C_Received_NotifyTick::CallFunc_GetCurrentActiveMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_StopMontageByState_C_Received_NotifyTick, K2Node_DynamicCast_AsHotta_Player_Character) == 0x000030, "Member 'BP_StopMontageByState_C_Received_NotifyTick::K2Node_DynamicCast_AsHotta_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_StopMontageByState_C_Received_NotifyTick, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_StopMontageByState_C_Received_NotifyTick::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_StopMontageByState_C_Received_NotifyTick, CallFunc_IsInState_ReturnValue) == 0x000039, "Member 'BP_StopMontageByState_C_Received_NotifyTick::CallFunc_IsInState_ReturnValue' has a wrong offset!");

}

