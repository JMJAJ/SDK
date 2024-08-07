#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Scene_box_001_Base

#include "Basic.hpp"

#include "HottaFramework_structs.hpp"


namespace SDK::Params
{

// Function scene_box_001_Base.scene_box_001_Base_C.UserConstructionScript
// 0x0018 (0x0018 - 0x0000)
struct Scene_box_001_Base_C_UserConstructionScript final
{
public:
	class FString                                 CallFunc_Conv_GuidToString_ReturnValue;            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Scene_box_001_Base_C_UserConstructionScript) == 0x000008, "Wrong alignment on Scene_box_001_Base_C_UserConstructionScript");
static_assert(sizeof(Scene_box_001_Base_C_UserConstructionScript) == 0x000018, "Wrong size on Scene_box_001_Base_C_UserConstructionScript");
static_assert(offsetof(Scene_box_001_Base_C_UserConstructionScript, CallFunc_Conv_GuidToString_ReturnValue) == 0x000000, "Member 'Scene_box_001_Base_C_UserConstructionScript::CallFunc_Conv_GuidToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Scene_box_001_Base_C_UserConstructionScript, CallFunc_Conv_StringToName_ReturnValue) == 0x000010, "Member 'Scene_box_001_Base_C_UserConstructionScript::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

// Function scene_box_001_Base.scene_box_001_Base_C.BPGetInteractEntries
// 0x0018 (0x0018 - 0x0000)
struct Scene_box_001_Base_C_BPGetInteractEntries final
{
public:
	class AHottaPlayerController*                 ByPC;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInteractEntry>                 OutInteractEntries;                                // 0x0008(0x0010)(Parm, OutParm, ContainsInstancedReference)
};
static_assert(alignof(Scene_box_001_Base_C_BPGetInteractEntries) == 0x000008, "Wrong alignment on Scene_box_001_Base_C_BPGetInteractEntries");
static_assert(sizeof(Scene_box_001_Base_C_BPGetInteractEntries) == 0x000018, "Wrong size on Scene_box_001_Base_C_BPGetInteractEntries");
static_assert(offsetof(Scene_box_001_Base_C_BPGetInteractEntries, ByPC) == 0x000000, "Member 'Scene_box_001_Base_C_BPGetInteractEntries::ByPC' has a wrong offset!");
static_assert(offsetof(Scene_box_001_Base_C_BPGetInteractEntries, OutInteractEntries) == 0x000008, "Member 'Scene_box_001_Base_C_BPGetInteractEntries::OutInteractEntries' has a wrong offset!");

}

