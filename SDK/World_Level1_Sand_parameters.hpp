#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: World_Level1_Sand

#include "Basic.hpp"


namespace SDK::Params
{

// Function World_Level1_Sand.World_Level1_Sand_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct World_Level1_Sand_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(World_Level1_Sand_C_ReceiveTick) == 0x000004, "Wrong alignment on World_Level1_Sand_C_ReceiveTick");
static_assert(sizeof(World_Level1_Sand_C_ReceiveTick) == 0x000004, "Wrong size on World_Level1_Sand_C_ReceiveTick");
static_assert(offsetof(World_Level1_Sand_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'World_Level1_Sand_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function World_Level1_Sand.World_Level1_Sand_C.ExecuteUbergraph_World_Level1_Sand
// 0x0038 (0x0038 - 0x0000)
struct World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ___bool_Has_Been_Initd_Variable;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59CF[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59D0[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaPlayerCharacter*                  CallFunc_GetClientPlayerCharacter_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59D1[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59D2[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VSizeSquared_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ___bool_IsClosed_Variable;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand) == 0x000008, "Wrong alignment on World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand");
static_assert(sizeof(World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand) == 0x000038, "Wrong size on World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand");
static_assert(offsetof(World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand, EntryPoint) == 0x000000, "Member 'World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand::EntryPoint' has a wrong offset!");
static_assert(offsetof(World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand, ___bool_Has_Been_Initd_Variable) == 0x000004, "Member 'World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand::___bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand, CallFunc_GetClientPlayerCharacter_ReturnValue) == 0x000010, "Member 'World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand::CallFunc_GetClientPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand, CallFunc_GetMovementComponent_ReturnValue) == 0x000020, "Member 'World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand, CallFunc_VSizeSquared_ReturnValue) == 0x00002C, "Member 'World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand::CallFunc_VSizeSquared_ReturnValue' has a wrong offset!");
static_assert(offsetof(World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand, ___bool_IsClosed_Variable) == 0x000030, "Member 'World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand::___bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000031, "Member 'World_Level1_Sand_C_ExecuteUbergraph_World_Level1_Sand::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

}

