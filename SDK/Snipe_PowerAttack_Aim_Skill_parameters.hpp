#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Snipe_PowerAttack_Aim_Skill

#include "Basic.hpp"


namespace SDK::Params
{

// Function Snipe_PowerAttack_Aim_Skill.Snipe_PowerAttack_Aim_Skill_C.HottaCalculateBaseMagnitude
// 0x0088 (0x0088 - 0x0000)
struct Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude final
{
public:
	const class AActor*                           OwnerActor;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           HitActor;                                          // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           InstigatorActor;                                   // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_153F[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaCharacter*                        K2Node_DynamicCast_AsHotta_Character;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1540[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHottaCharacter*                        K2Node_DynamicCast_AsHotta_Character_1;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1541[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHottaGamePlayEffect*                   K2Node_DynamicCast_AsHotta_Game_Play_Effect;       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1542[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHottaGamePlayEffect*                   K2Node_DynamicCast_AsHotta_Game_Play_Effect_1;     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_2;            // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_3;            // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_4;            // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_5;            // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1543[0x1];                                     // 0x0067(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaPlayerCharacter*                  K2Node_DynamicCast_AsHotta_Player_Character;       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1544[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHottaGamePlayEffect*                   K2Node_DynamicCast_AsHotta_Game_Play_Effect_2;     // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_6;            // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_7;            // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_8;            // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude) == 0x000008, "Wrong alignment on Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude");
static_assert(sizeof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude) == 0x000088, "Wrong size on Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, OwnerActor) == 0x000000, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::OwnerActor' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, HitActor) == 0x000008, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::HitActor' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, InstigatorActor) == 0x000010, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::InstigatorActor' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, ReturnValue) == 0x000018, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::ReturnValue' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_AsHotta_Character) == 0x000020, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_AsHotta_Character' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, CallFunc_GetOwner_ReturnValue) == 0x000030, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_AsHotta_Character_1) == 0x000038, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_AsHotta_Character_1' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_AsHotta_Game_Play_Effect) == 0x000048, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_AsHotta_Game_Play_Effect' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_bSuccess_2) == 0x000050, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_AsHotta_Game_Play_Effect_1) == 0x000058, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_AsHotta_Game_Play_Effect_1' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_bSuccess_3) == 0x000060, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, CallFunc_Less_FloatFloat_ReturnValue) == 0x000061, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, CallFunc_Less_FloatFloat_ReturnValue_1) == 0x000062, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::CallFunc_Less_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, CallFunc_Less_FloatFloat_ReturnValue_2) == 0x000063, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::CallFunc_Less_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, CallFunc_Less_FloatFloat_ReturnValue_3) == 0x000064, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::CallFunc_Less_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, CallFunc_Less_FloatFloat_ReturnValue_4) == 0x000065, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::CallFunc_Less_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, CallFunc_Less_FloatFloat_ReturnValue_5) == 0x000066, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::CallFunc_Less_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_AsHotta_Player_Character) == 0x000068, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_AsHotta_Player_Character' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_bSuccess_4) == 0x000070, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_AsHotta_Game_Play_Effect_2) == 0x000078, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_AsHotta_Game_Play_Effect_2' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_bSuccess_5) == 0x000080, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, CallFunc_Less_FloatFloat_ReturnValue_6) == 0x000081, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::CallFunc_Less_FloatFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, CallFunc_Less_FloatFloat_ReturnValue_7) == 0x000082, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::CallFunc_Less_FloatFloat_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude, CallFunc_Less_FloatFloat_ReturnValue_8) == 0x000083, "Member 'Snipe_PowerAttack_Aim_Skill_C_HottaCalculateBaseMagnitude::CallFunc_Less_FloatFloat_ReturnValue_8' has a wrong offset!");

}

