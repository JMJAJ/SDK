#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mon_hum_027

#include "Basic.hpp"

#include "HottaFramework_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function mon_hum_027.mon_hum_027_C.ExecuteUbergraph_mon_hum_027
// 0x0038 (0x0038 - 0x0000)
struct Mon_hum_027_C_ExecuteUbergraph_mon_hum_027 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DD6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          ___struct_Variable;                                // 0x0008(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> ___delegate_Variable;                              // 0x0018(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	EHottaNetMode                                 CallFunc_SwitchNetMode_OutNetMode;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DD7[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Mon_hum_027_C_ExecuteUbergraph_mon_hum_027) == 0x000008, "Wrong alignment on Mon_hum_027_C_ExecuteUbergraph_mon_hum_027");
static_assert(sizeof(Mon_hum_027_C_ExecuteUbergraph_mon_hum_027) == 0x000038, "Wrong size on Mon_hum_027_C_ExecuteUbergraph_mon_hum_027");
static_assert(offsetof(Mon_hum_027_C_ExecuteUbergraph_mon_hum_027, EntryPoint) == 0x000000, "Member 'Mon_hum_027_C_ExecuteUbergraph_mon_hum_027::EntryPoint' has a wrong offset!");
static_assert(offsetof(Mon_hum_027_C_ExecuteUbergraph_mon_hum_027, ___struct_Variable) == 0x000008, "Member 'Mon_hum_027_C_ExecuteUbergraph_mon_hum_027::___struct_Variable' has a wrong offset!");
static_assert(offsetof(Mon_hum_027_C_ExecuteUbergraph_mon_hum_027, ___delegate_Variable) == 0x000018, "Member 'Mon_hum_027_C_ExecuteUbergraph_mon_hum_027::___delegate_Variable' has a wrong offset!");
static_assert(offsetof(Mon_hum_027_C_ExecuteUbergraph_mon_hum_027, CallFunc_SwitchNetMode_OutNetMode) == 0x000028, "Member 'Mon_hum_027_C_ExecuteUbergraph_mon_hum_027::CallFunc_SwitchNetMode_OutNetMode' has a wrong offset!");
static_assert(offsetof(Mon_hum_027_C_ExecuteUbergraph_mon_hum_027, CallFunc_PostAkEvent_ReturnValue) == 0x00002C, "Member 'Mon_hum_027_C_ExecuteUbergraph_mon_hum_027::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mon_hum_027_C_ExecuteUbergraph_mon_hum_027, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'Mon_hum_027_C_ExecuteUbergraph_mon_hum_027::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

