#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SuperPower_BoomDamage

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function SuperPower_BoomDamage.SuperPower_BoomDamage_C.HottaCalculateBaseMagnitude
// 0x0060 (0x0060 - 0x0000)
struct SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude final
{
public:
	const class AActor*                           OwnerActor;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           HitActor;                                          // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           InstigatorActor;                                   // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxMult;                                           // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHottaCharacter*                        K2Node_DynamicCast_AsHotta_Character;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5666[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaCharacter*                        K2Node_DynamicCast_AsHotta_Character_1;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBalanceServerMode_ReturnValue;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5667[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCurrentAtk_ReturnValue;                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetStatisticsOfDamageWithGameplayTag_ReturnValue; // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude) == 0x000008, "Wrong alignment on SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude");
static_assert(sizeof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude) == 0x000060, "Wrong size on SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude");
static_assert(offsetof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude, OwnerActor) == 0x000000, "Member 'SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude::OwnerActor' has a wrong offset!");
static_assert(offsetof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude, HitActor) == 0x000008, "Member 'SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude::HitActor' has a wrong offset!");
static_assert(offsetof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude, InstigatorActor) == 0x000010, "Member 'SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude::InstigatorActor' has a wrong offset!");
static_assert(offsetof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude, ReturnValue) == 0x000018, "Member 'SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude::ReturnValue' has a wrong offset!");
static_assert(offsetof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude, MaxMult) == 0x00001C, "Member 'SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude::MaxMult' has a wrong offset!");
static_assert(offsetof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_AsHotta_Character) == 0x000020, "Member 'SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_AsHotta_Character' has a wrong offset!");
static_assert(offsetof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_AsHotta_Character_1) == 0x000030, "Member 'SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_AsHotta_Character_1' has a wrong offset!");
static_assert(offsetof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude, CallFunc_IsBalanceServerMode_ReturnValue) == 0x000039, "Member 'SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude::CallFunc_IsBalanceServerMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude, CallFunc_GetCurrentAtk_ReturnValue) == 0x00003C, "Member 'SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude::CallFunc_GetCurrentAtk_ReturnValue' has a wrong offset!");
static_assert(offsetof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude, CallFunc_MakeLiteralGameplayTag_ReturnValue) == 0x000040, "Member 'SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude::CallFunc_MakeLiteralGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000048, "Member 'SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude, CallFunc_GetStatisticsOfDamageWithGameplayTag_ReturnValue) == 0x00004C, "Member 'SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude::CallFunc_GetStatisticsOfDamageWithGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000050, "Member 'SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000054, "Member 'SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude, CallFunc_Less_FloatFloat_ReturnValue) == 0x000058, "Member 'SuperPower_BoomDamage_C_HottaCalculateBaseMagnitude::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

}

