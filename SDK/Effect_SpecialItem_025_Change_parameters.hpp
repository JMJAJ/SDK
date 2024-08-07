#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Effect_SpecialItem_025_Change

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function Effect_SpecialItem_025_Change.Effect_SpecialItem_025_Change_C.OnActive
// 0x00D8 (0x00D8 - 0x0000)
struct Effect_SpecialItem_025_Change_C_OnActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5817[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaCharacter*                        K2Node_DynamicCast_AsHotta_Character;              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OnActive_ReturnValue;                     // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Effect_SpecialItem_025_Change_C_OnActive) == 0x000008, "Wrong alignment on Effect_SpecialItem_025_Change_C_OnActive");
static_assert(sizeof(Effect_SpecialItem_025_Change_C_OnActive) == 0x0000D8, "Wrong size on Effect_SpecialItem_025_Change_C_OnActive");
static_assert(offsetof(Effect_SpecialItem_025_Change_C_OnActive, MyTarget) == 0x000000, "Member 'Effect_SpecialItem_025_Change_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(Effect_SpecialItem_025_Change_C_OnActive, Parameters) == 0x000008, "Member 'Effect_SpecialItem_025_Change_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(Effect_SpecialItem_025_Change_C_OnActive, ReturnValue) == 0x0000C0, "Member 'Effect_SpecialItem_025_Change_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_SpecialItem_025_Change_C_OnActive, K2Node_DynamicCast_AsHotta_Character) == 0x0000C8, "Member 'Effect_SpecialItem_025_Change_C_OnActive::K2Node_DynamicCast_AsHotta_Character' has a wrong offset!");
static_assert(offsetof(Effect_SpecialItem_025_Change_C_OnActive, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'Effect_SpecialItem_025_Change_C_OnActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Effect_SpecialItem_025_Change_C_OnActive, CallFunc_OnActive_ReturnValue) == 0x0000D1, "Member 'Effect_SpecialItem_025_Change_C_OnActive::CallFunc_OnActive_ReturnValue' has a wrong offset!");

// Function Effect_SpecialItem_025_Change.Effect_SpecialItem_025_Change_C.OnRemove
// 0x00D8 (0x00D8 - 0x0000)
struct Effect_SpecialItem_025_Change_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5818[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaCharacter*                        K2Node_DynamicCast_AsHotta_Character;              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OnRemove_ReturnValue;                     // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Effect_SpecialItem_025_Change_C_OnRemove) == 0x000008, "Wrong alignment on Effect_SpecialItem_025_Change_C_OnRemove");
static_assert(sizeof(Effect_SpecialItem_025_Change_C_OnRemove) == 0x0000D8, "Wrong size on Effect_SpecialItem_025_Change_C_OnRemove");
static_assert(offsetof(Effect_SpecialItem_025_Change_C_OnRemove, MyTarget) == 0x000000, "Member 'Effect_SpecialItem_025_Change_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(Effect_SpecialItem_025_Change_C_OnRemove, Parameters) == 0x000008, "Member 'Effect_SpecialItem_025_Change_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(Effect_SpecialItem_025_Change_C_OnRemove, ReturnValue) == 0x0000C0, "Member 'Effect_SpecialItem_025_Change_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_SpecialItem_025_Change_C_OnRemove, K2Node_DynamicCast_AsHotta_Character) == 0x0000C8, "Member 'Effect_SpecialItem_025_Change_C_OnRemove::K2Node_DynamicCast_AsHotta_Character' has a wrong offset!");
static_assert(offsetof(Effect_SpecialItem_025_Change_C_OnRemove, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'Effect_SpecialItem_025_Change_C_OnRemove::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Effect_SpecialItem_025_Change_C_OnRemove, CallFunc_OnRemove_ReturnValue) == 0x0000D1, "Member 'Effect_SpecialItem_025_Change_C_OnRemove::CallFunc_OnRemove_ReturnValue' has a wrong offset!");

}

