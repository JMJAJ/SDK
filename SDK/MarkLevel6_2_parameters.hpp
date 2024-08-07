#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MarkLevel6_2

#include "Basic.hpp"


namespace SDK::Params
{

// Function MarkLevel6_2.MarkLevel6_2_C.HottaCalculateBaseMagnitude
// 0x0058 (0x0058 - 0x0000)
struct MarkLevel6_2_C_HottaCalculateBaseMagnitude final
{
public:
	const class AActor*                           OwnerActor;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           HitActor;                                          // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           InstigatorActor;                                   // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59AF[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaCharacter*                        K2Node_DynamicCast_AsHotta_Character;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59B0[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMaxHP_ReturnValue;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetHP_ReturnValue;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_HaveGameplayEffectWithClass_ReturnValue; // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59B1[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_HaveGameplayEffectWithClass_ReturnValue_1; // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59B2[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59B3[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCurrentAtk_ReturnValue;                // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MarkLevel6_2_C_HottaCalculateBaseMagnitude) == 0x000008, "Wrong alignment on MarkLevel6_2_C_HottaCalculateBaseMagnitude");
static_assert(sizeof(MarkLevel6_2_C_HottaCalculateBaseMagnitude) == 0x000058, "Wrong size on MarkLevel6_2_C_HottaCalculateBaseMagnitude");
static_assert(offsetof(MarkLevel6_2_C_HottaCalculateBaseMagnitude, OwnerActor) == 0x000000, "Member 'MarkLevel6_2_C_HottaCalculateBaseMagnitude::OwnerActor' has a wrong offset!");
static_assert(offsetof(MarkLevel6_2_C_HottaCalculateBaseMagnitude, HitActor) == 0x000008, "Member 'MarkLevel6_2_C_HottaCalculateBaseMagnitude::HitActor' has a wrong offset!");
static_assert(offsetof(MarkLevel6_2_C_HottaCalculateBaseMagnitude, InstigatorActor) == 0x000010, "Member 'MarkLevel6_2_C_HottaCalculateBaseMagnitude::InstigatorActor' has a wrong offset!");
static_assert(offsetof(MarkLevel6_2_C_HottaCalculateBaseMagnitude, ReturnValue) == 0x000018, "Member 'MarkLevel6_2_C_HottaCalculateBaseMagnitude::ReturnValue' has a wrong offset!");
static_assert(offsetof(MarkLevel6_2_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_AsHotta_Character) == 0x000020, "Member 'MarkLevel6_2_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_AsHotta_Character' has a wrong offset!");
static_assert(offsetof(MarkLevel6_2_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'MarkLevel6_2_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MarkLevel6_2_C_HottaCalculateBaseMagnitude, CallFunc_GetMaxHP_ReturnValue) == 0x00002C, "Member 'MarkLevel6_2_C_HottaCalculateBaseMagnitude::CallFunc_GetMaxHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(MarkLevel6_2_C_HottaCalculateBaseMagnitude, CallFunc_GetHP_ReturnValue) == 0x000030, "Member 'MarkLevel6_2_C_HottaCalculateBaseMagnitude::CallFunc_GetHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(MarkLevel6_2_C_HottaCalculateBaseMagnitude, CallFunc_K2_HaveGameplayEffectWithClass_ReturnValue) == 0x000034, "Member 'MarkLevel6_2_C_HottaCalculateBaseMagnitude::CallFunc_K2_HaveGameplayEffectWithClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(MarkLevel6_2_C_HottaCalculateBaseMagnitude, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000038, "Member 'MarkLevel6_2_C_HottaCalculateBaseMagnitude::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MarkLevel6_2_C_HottaCalculateBaseMagnitude, CallFunc_K2_HaveGameplayEffectWithClass_ReturnValue_1) == 0x00003C, "Member 'MarkLevel6_2_C_HottaCalculateBaseMagnitude::CallFunc_K2_HaveGameplayEffectWithClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MarkLevel6_2_C_HottaCalculateBaseMagnitude, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000040, "Member 'MarkLevel6_2_C_HottaCalculateBaseMagnitude::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MarkLevel6_2_C_HottaCalculateBaseMagnitude, CallFunc_BooleanOR_ReturnValue) == 0x000044, "Member 'MarkLevel6_2_C_HottaCalculateBaseMagnitude::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MarkLevel6_2_C_HottaCalculateBaseMagnitude, CallFunc_GetCurrentAtk_ReturnValue) == 0x000048, "Member 'MarkLevel6_2_C_HottaCalculateBaseMagnitude::CallFunc_GetCurrentAtk_ReturnValue' has a wrong offset!");
static_assert(offsetof(MarkLevel6_2_C_HottaCalculateBaseMagnitude, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x00004C, "Member 'MarkLevel6_2_C_HottaCalculateBaseMagnitude::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MarkLevel6_2_C_HottaCalculateBaseMagnitude, CallFunc_Add_FloatFloat_ReturnValue) == 0x000050, "Member 'MarkLevel6_2_C_HottaCalculateBaseMagnitude::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MarkLevel6_2_C_HottaCalculateBaseMagnitude, CallFunc_SelectFloat_ReturnValue) == 0x000054, "Member 'MarkLevel6_2_C_HottaCalculateBaseMagnitude::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");

}

