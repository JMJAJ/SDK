#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SelfIsInPK

#include "Basic.hpp"


namespace SDK::Params
{

// Function SelfIsInPK.SelfIsInPK_C.CanApplyGameplayEffectContent
// 0x0038 (0x0038 - 0x0000)
struct SelfIsInPK_C_CanApplyGameplayEffectContent final
{
public:
	class AActor*                                 SourceActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 InstigatorActor;                                   // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UGameplayEffect*                  GameplayEffect;                                    // 0x0018(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_552A[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaPlayerCharacter*                  K2Node_DynamicCast_AsHotta_Player_Character;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelfIsInPK_C_CanApplyGameplayEffectContent) == 0x000008, "Wrong alignment on SelfIsInPK_C_CanApplyGameplayEffectContent");
static_assert(sizeof(SelfIsInPK_C_CanApplyGameplayEffectContent) == 0x000038, "Wrong size on SelfIsInPK_C_CanApplyGameplayEffectContent");
static_assert(offsetof(SelfIsInPK_C_CanApplyGameplayEffectContent, SourceActor) == 0x000000, "Member 'SelfIsInPK_C_CanApplyGameplayEffectContent::SourceActor' has a wrong offset!");
static_assert(offsetof(SelfIsInPK_C_CanApplyGameplayEffectContent, TargetActor) == 0x000008, "Member 'SelfIsInPK_C_CanApplyGameplayEffectContent::TargetActor' has a wrong offset!");
static_assert(offsetof(SelfIsInPK_C_CanApplyGameplayEffectContent, InstigatorActor) == 0x000010, "Member 'SelfIsInPK_C_CanApplyGameplayEffectContent::InstigatorActor' has a wrong offset!");
static_assert(offsetof(SelfIsInPK_C_CanApplyGameplayEffectContent, GameplayEffect) == 0x000018, "Member 'SelfIsInPK_C_CanApplyGameplayEffectContent::GameplayEffect' has a wrong offset!");
static_assert(offsetof(SelfIsInPK_C_CanApplyGameplayEffectContent, ReturnValue) == 0x000020, "Member 'SelfIsInPK_C_CanApplyGameplayEffectContent::ReturnValue' has a wrong offset!");
static_assert(offsetof(SelfIsInPK_C_CanApplyGameplayEffectContent, K2Node_DynamicCast_AsHotta_Player_Character) == 0x000028, "Member 'SelfIsInPK_C_CanApplyGameplayEffectContent::K2Node_DynamicCast_AsHotta_Player_Character' has a wrong offset!");
static_assert(offsetof(SelfIsInPK_C_CanApplyGameplayEffectContent, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'SelfIsInPK_C_CanApplyGameplayEffectContent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SelfIsInPK_C_CanApplyGameplayEffectContent, CallFunc_Not_PreBool_ReturnValue) == 0x000031, "Member 'SelfIsInPK_C_CanApplyGameplayEffectContent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelfIsInPK_C_CanApplyGameplayEffectContent, CallFunc_Not_PreBool_ReturnValue_1) == 0x000032, "Member 'SelfIsInPK_C_CanApplyGameplayEffectContent::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelfIsInPK_C_CanApplyGameplayEffectContent, CallFunc_BooleanOR_ReturnValue) == 0x000033, "Member 'SelfIsInPK_C_CanApplyGameplayEffectContent::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

