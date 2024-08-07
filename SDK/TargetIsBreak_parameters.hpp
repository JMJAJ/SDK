#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TargetIsBreak

#include "Basic.hpp"


namespace SDK::Params
{

// Function TargetIsBreak.TargetIsBreak_C.CanApplyGameplayEffectContent
// 0x00B0 (0x00B0 - 0x0000)
struct TargetIsBreak_C_CanApplyGameplayEffectContent final
{
public:
	class AActor*                                 SourceActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 InstigatorActor;                                   // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UGameplayEffect*                  GameplayEffect;                                    // 0x0018(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58F7[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaCharacter*                        SourceHottaPlayerCharacter;                        // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58F8[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaPlayerCharacter*                  K2Node_DynamicCast_AsHotta_Player_Character;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_HaveGameplayEffectWithClass_ReturnValue; // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58F9[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaAICharacter*                      K2Node_DynamicCast_AsHotta_AICharacter;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58FA[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHottaCharacter*                        CallFunc_GetLeader_ReturnValue;                    // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58FB[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaPlayerCharacter*                  K2Node_DynamicCast_AsHotta_Player_Character_1;     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58FC[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaCharacter*                        K2Node_DynamicCast_AsHotta_Character;              // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58FD[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaPlayerCharacter*                  K2Node_DynamicCast_AsHotta_Player_Character_2;     // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58FE[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaCharacter*                        CallFunc_GetLeader_ReturnValue_1;                  // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerCharacter_ReturnValue;            // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TargetIsBreak_C_CanApplyGameplayEffectContent) == 0x000008, "Wrong alignment on TargetIsBreak_C_CanApplyGameplayEffectContent");
static_assert(sizeof(TargetIsBreak_C_CanApplyGameplayEffectContent) == 0x0000B0, "Wrong size on TargetIsBreak_C_CanApplyGameplayEffectContent");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, SourceActor) == 0x000000, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::SourceActor' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, TargetActor) == 0x000008, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::TargetActor' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, InstigatorActor) == 0x000010, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::InstigatorActor' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, GameplayEffect) == 0x000018, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::GameplayEffect' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, ReturnValue) == 0x000020, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, SourceHottaPlayerCharacter) == 0x000028, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::SourceHottaPlayerCharacter' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, K2Node_DynamicCast_AsHotta_Player_Character) == 0x000038, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::K2Node_DynamicCast_AsHotta_Player_Character' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, CallFunc_IsValid_ReturnValue_1) == 0x000041, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, CallFunc_K2_HaveGameplayEffectWithClass_ReturnValue) == 0x000042, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::CallFunc_K2_HaveGameplayEffectWithClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, CallFunc_IsValid_ReturnValue_2) == 0x000043, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, K2Node_DynamicCast_AsHotta_AICharacter) == 0x000048, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::K2Node_DynamicCast_AsHotta_AICharacter' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, CallFunc_GetOwner_ReturnValue) == 0x000058, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, CallFunc_GetLeader_ReturnValue) == 0x000060, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::CallFunc_GetLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, CallFunc_IsValid_ReturnValue_3) == 0x000068, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, K2Node_DynamicCast_AsHotta_Player_Character_1) == 0x000070, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::K2Node_DynamicCast_AsHotta_Player_Character_1' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, K2Node_DynamicCast_bSuccess_2) == 0x000078, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, K2Node_DynamicCast_AsHotta_Character) == 0x000080, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::K2Node_DynamicCast_AsHotta_Character' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, K2Node_DynamicCast_bSuccess_3) == 0x000088, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, K2Node_DynamicCast_AsHotta_Player_Character_2) == 0x000090, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::K2Node_DynamicCast_AsHotta_Player_Character_2' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, K2Node_DynamicCast_bSuccess_4) == 0x000098, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, CallFunc_GetLeader_ReturnValue_1) == 0x0000A0, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::CallFunc_GetLeader_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, CallFunc_IsPlayerCharacter_ReturnValue) == 0x0000A8, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::CallFunc_IsPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetIsBreak_C_CanApplyGameplayEffectContent, CallFunc_IsValid_ReturnValue_4) == 0x0000A9, "Member 'TargetIsBreak_C_CanApplyGameplayEffectContent::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");

}

