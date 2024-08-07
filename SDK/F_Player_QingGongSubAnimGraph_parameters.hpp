#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_Player_QingGongSubAnimGraph

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function F_Player_QingGongSubAnimGraph.F_Player_QingGongSubAnimGraph_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct F_Player_QingGongSubAnimGraph_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(F_Player_QingGongSubAnimGraph_C_AnimGraph) == 0x000008, "Wrong alignment on F_Player_QingGongSubAnimGraph_C_AnimGraph");
static_assert(sizeof(F_Player_QingGongSubAnimGraph_C_AnimGraph) == 0x000010, "Wrong size on F_Player_QingGongSubAnimGraph_C_AnimGraph");
static_assert(offsetof(F_Player_QingGongSubAnimGraph_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'F_Player_QingGongSubAnimGraph_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function F_Player_QingGongSubAnimGraph.F_Player_QingGongSubAnimGraph_C.ExecuteUbergraph_F_Player_QingGongSubAnimGraph
// 0x000C (0x000C - 0x0000)
struct F_Player_QingGongSubAnimGraph_C_ExecuteUbergraph_F_Player_QingGongSubAnimGraph final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(F_Player_QingGongSubAnimGraph_C_ExecuteUbergraph_F_Player_QingGongSubAnimGraph) == 0x000004, "Wrong alignment on F_Player_QingGongSubAnimGraph_C_ExecuteUbergraph_F_Player_QingGongSubAnimGraph");
static_assert(sizeof(F_Player_QingGongSubAnimGraph_C_ExecuteUbergraph_F_Player_QingGongSubAnimGraph) == 0x00000C, "Wrong size on F_Player_QingGongSubAnimGraph_C_ExecuteUbergraph_F_Player_QingGongSubAnimGraph");
static_assert(offsetof(F_Player_QingGongSubAnimGraph_C_ExecuteUbergraph_F_Player_QingGongSubAnimGraph, EntryPoint) == 0x000000, "Member 'F_Player_QingGongSubAnimGraph_C_ExecuteUbergraph_F_Player_QingGongSubAnimGraph::EntryPoint' has a wrong offset!");
static_assert(offsetof(F_Player_QingGongSubAnimGraph_C_ExecuteUbergraph_F_Player_QingGongSubAnimGraph, CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue) == 0x000004, "Member 'F_Player_QingGongSubAnimGraph_C_ExecuteUbergraph_F_Player_QingGongSubAnimGraph::CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(F_Player_QingGongSubAnimGraph_C_ExecuteUbergraph_F_Player_QingGongSubAnimGraph, CallFunc_Less_FloatFloat_ReturnValue) == 0x000008, "Member 'F_Player_QingGongSubAnimGraph_C_ExecuteUbergraph_F_Player_QingGongSubAnimGraph::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(F_Player_QingGongSubAnimGraph_C_ExecuteUbergraph_F_Player_QingGongSubAnimGraph, CallFunc_BooleanOR_ReturnValue) == 0x000009, "Member 'F_Player_QingGongSubAnimGraph_C_ExecuteUbergraph_F_Player_QingGongSubAnimGraph::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

