#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Scene_Box_OnceOnly_002

#include "Basic.hpp"


namespace SDK::Params
{

// Function Scene_Box_OnceOnly_002.Scene_Box_OnceOnly_002_C.GetParticipantDisplayName
// 0x0020 (0x0020 - 0x0000)
struct Scene_Box_OnceOnly_002_C_GetParticipantDisplayName final
{
public:
	class FName                                   ActiveSpeaker;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(Scene_Box_OnceOnly_002_C_GetParticipantDisplayName) == 0x000008, "Wrong alignment on Scene_Box_OnceOnly_002_C_GetParticipantDisplayName");
static_assert(sizeof(Scene_Box_OnceOnly_002_C_GetParticipantDisplayName) == 0x000020, "Wrong size on Scene_Box_OnceOnly_002_C_GetParticipantDisplayName");
static_assert(offsetof(Scene_Box_OnceOnly_002_C_GetParticipantDisplayName, ActiveSpeaker) == 0x000000, "Member 'Scene_Box_OnceOnly_002_C_GetParticipantDisplayName::ActiveSpeaker' has a wrong offset!");
static_assert(offsetof(Scene_Box_OnceOnly_002_C_GetParticipantDisplayName, ReturnValue) == 0x000008, "Member 'Scene_Box_OnceOnly_002_C_GetParticipantDisplayName::ReturnValue' has a wrong offset!");

}

