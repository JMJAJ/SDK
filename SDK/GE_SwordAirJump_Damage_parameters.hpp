#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_SwordAirJump_Damage

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GE_SwordAirJump_Damage.GE_SwordAirJump_Damage_C.CalcExtraDamage
// 0x0068 (0x0068 - 0x0000)
struct GE_SwordAirJump_Damage_C_CalcExtraDamage final
{
public:
	class AHottaCharacter*                        TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                SourceAbilityComp;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DiffHeight;                                        // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5814[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaCharacter*                        K2Node_DynamicCast_AsHotta_Character;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5815[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLastFallingHeight_ReturnValue;         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GE_SwordAirJump_Damage_C_CalcExtraDamage) == 0x000008, "Wrong alignment on GE_SwordAirJump_Damage_C_CalcExtraDamage");
static_assert(sizeof(GE_SwordAirJump_Damage_C_CalcExtraDamage) == 0x000068, "Wrong size on GE_SwordAirJump_Damage_C_CalcExtraDamage");
static_assert(offsetof(GE_SwordAirJump_Damage_C_CalcExtraDamage, TargetActor) == 0x000000, "Member 'GE_SwordAirJump_Damage_C_CalcExtraDamage::TargetActor' has a wrong offset!");
static_assert(offsetof(GE_SwordAirJump_Damage_C_CalcExtraDamage, SourceAbilityComp) == 0x000008, "Member 'GE_SwordAirJump_Damage_C_CalcExtraDamage::SourceAbilityComp' has a wrong offset!");
static_assert(offsetof(GE_SwordAirJump_Damage_C_CalcExtraDamage, ReturnValue) == 0x000010, "Member 'GE_SwordAirJump_Damage_C_CalcExtraDamage::ReturnValue' has a wrong offset!");
static_assert(offsetof(GE_SwordAirJump_Damage_C_CalcExtraDamage, DiffHeight) == 0x000014, "Member 'GE_SwordAirJump_Damage_C_CalcExtraDamage::DiffHeight' has a wrong offset!");
static_assert(offsetof(GE_SwordAirJump_Damage_C_CalcExtraDamage, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'GE_SwordAirJump_Damage_C_CalcExtraDamage::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GE_SwordAirJump_Damage_C_CalcExtraDamage, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000020, "Member 'GE_SwordAirJump_Damage_C_CalcExtraDamage::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GE_SwordAirJump_Damage_C_CalcExtraDamage, K2Node_DynamicCast_AsHotta_Character) == 0x000028, "Member 'GE_SwordAirJump_Damage_C_CalcExtraDamage::K2Node_DynamicCast_AsHotta_Character' has a wrong offset!");
static_assert(offsetof(GE_SwordAirJump_Damage_C_CalcExtraDamage, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'GE_SwordAirJump_Damage_C_CalcExtraDamage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GE_SwordAirJump_Damage_C_CalcExtraDamage, CallFunc_FMax_ReturnValue) == 0x000034, "Member 'GE_SwordAirJump_Damage_C_CalcExtraDamage::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(GE_SwordAirJump_Damage_C_CalcExtraDamage, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'GE_SwordAirJump_Damage_C_CalcExtraDamage::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GE_SwordAirJump_Damage_C_CalcExtraDamage, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000044, "Member 'GE_SwordAirJump_Damage_C_CalcExtraDamage::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GE_SwordAirJump_Damage_C_CalcExtraDamage, CallFunc_BreakVector_X) == 0x000048, "Member 'GE_SwordAirJump_Damage_C_CalcExtraDamage::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GE_SwordAirJump_Damage_C_CalcExtraDamage, CallFunc_BreakVector_Y) == 0x00004C, "Member 'GE_SwordAirJump_Damage_C_CalcExtraDamage::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GE_SwordAirJump_Damage_C_CalcExtraDamage, CallFunc_BreakVector_Z) == 0x000050, "Member 'GE_SwordAirJump_Damage_C_CalcExtraDamage::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GE_SwordAirJump_Damage_C_CalcExtraDamage, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000054, "Member 'GE_SwordAirJump_Damage_C_CalcExtraDamage::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GE_SwordAirJump_Damage_C_CalcExtraDamage, CallFunc_GetLastFallingHeight_ReturnValue) == 0x000058, "Member 'GE_SwordAirJump_Damage_C_CalcExtraDamage::CallFunc_GetLastFallingHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(GE_SwordAirJump_Damage_C_CalcExtraDamage, CallFunc_FClamp_ReturnValue) == 0x00005C, "Member 'GE_SwordAirJump_Damage_C_CalcExtraDamage::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GE_SwordAirJump_Damage_C_CalcExtraDamage, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000060, "Member 'GE_SwordAirJump_Damage_C_CalcExtraDamage::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");

}

