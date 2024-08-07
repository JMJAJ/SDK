#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TriggerHiddenWeaponNS

#include "Basic.hpp"

#include "HottaFramework_structs.hpp"


namespace SDK::Params
{

// Function BP_TriggerHiddenWeaponNS.BP_TriggerHiddenWeaponNS_C.Received_NotifyBegin
// 0x0078 (0x0078 - 0x0000)
struct BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C7D[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AWeaponBase*                            TriggerWeaponBase;                                 // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOnlyServer_ReturnValue;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C7E[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APreviewCharacterActor*                 K2Node_DynamicCast_AsPreview_Character_Actor;      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C7F[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHottaPlayerCharacter*                  K2Node_DynamicCast_AsHotta_Player_Character;       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C80[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APreviewActor*                          K2Node_DynamicCast_AsPreview_Actor;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EHoldInHandStateType                          CallFunc_GetCurrentWeaponHoldState_ReturnValue;    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C81[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AWeaponBase*                            CallFunc_GetCurrentWeapon_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin");
static_assert(sizeof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin) == 0x000078, "Wrong size on BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, ReturnValue) == 0x000014, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, TriggerWeaponBase) == 0x000018, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::TriggerWeaponBase' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, CallFunc_IsOnlyServer_ReturnValue) == 0x000028, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::CallFunc_IsOnlyServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, K2Node_DynamicCast_AsPreview_Character_Actor) == 0x000030, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::K2Node_DynamicCast_AsPreview_Character_Actor' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue_1) == 0x000040, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, K2Node_DynamicCast_AsHotta_Player_Character) == 0x000048, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::K2Node_DynamicCast_AsHotta_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, K2Node_DynamicCast_AsPreview_Actor) == 0x000058, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::K2Node_DynamicCast_AsPreview_Actor' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, CallFunc_GetCurrentWeaponHoldState_ReturnValue) == 0x000061, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::CallFunc_GetCurrentWeaponHoldState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000062, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue) == 0x000063, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000064, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, CallFunc_GetCurrentWeapon_ReturnValue) == 0x000068, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::CallFunc_GetCurrentWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, CallFunc_BooleanOR_ReturnValue) == 0x000070, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue_1) == 0x000071, "Member 'BP_TriggerHiddenWeaponNS_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

