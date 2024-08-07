#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhysicFrame

#include "Basic.hpp"


namespace SDK::Params
{

// Function PhysicFrame.PhysicFrame_C.HottaCalculateBaseMagnitude
// 0x0030 (0x0030 - 0x0000)
struct PhysicFrame_C_HottaCalculateBaseMagnitude final
{
public:
	const class AActor*                           OwnerActor;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           HitActor;                                          // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           InstigatorActor;                                   // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_565E[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaPlayerCharacter*                  K2Node_DynamicCast_AsHotta_Player_Character;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMultiPlayerGameplayClone_ReturnValue;   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PhysicFrame_C_HottaCalculateBaseMagnitude) == 0x000008, "Wrong alignment on PhysicFrame_C_HottaCalculateBaseMagnitude");
static_assert(sizeof(PhysicFrame_C_HottaCalculateBaseMagnitude) == 0x000030, "Wrong size on PhysicFrame_C_HottaCalculateBaseMagnitude");
static_assert(offsetof(PhysicFrame_C_HottaCalculateBaseMagnitude, OwnerActor) == 0x000000, "Member 'PhysicFrame_C_HottaCalculateBaseMagnitude::OwnerActor' has a wrong offset!");
static_assert(offsetof(PhysicFrame_C_HottaCalculateBaseMagnitude, HitActor) == 0x000008, "Member 'PhysicFrame_C_HottaCalculateBaseMagnitude::HitActor' has a wrong offset!");
static_assert(offsetof(PhysicFrame_C_HottaCalculateBaseMagnitude, InstigatorActor) == 0x000010, "Member 'PhysicFrame_C_HottaCalculateBaseMagnitude::InstigatorActor' has a wrong offset!");
static_assert(offsetof(PhysicFrame_C_HottaCalculateBaseMagnitude, ReturnValue) == 0x000018, "Member 'PhysicFrame_C_HottaCalculateBaseMagnitude::ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicFrame_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_AsHotta_Player_Character) == 0x000020, "Member 'PhysicFrame_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_AsHotta_Player_Character' has a wrong offset!");
static_assert(offsetof(PhysicFrame_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'PhysicFrame_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PhysicFrame_C_HottaCalculateBaseMagnitude, CallFunc_IsMultiPlayerGameplayClone_ReturnValue) == 0x000029, "Member 'PhysicFrame_C_HottaCalculateBaseMagnitude::CallFunc_IsMultiPlayerGameplayClone_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicFrame_C_HottaCalculateBaseMagnitude, CallFunc_Not_PreBool_ReturnValue) == 0x00002A, "Member 'PhysicFrame_C_HottaCalculateBaseMagnitude::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicFrame_C_HottaCalculateBaseMagnitude, CallFunc_BooleanAND_ReturnValue) == 0x00002B, "Member 'PhysicFrame_C_HottaCalculateBaseMagnitude::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

