#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_SwordChangeSkill1_Damage

#include "Basic.hpp"


namespace SDK::Params
{

// Function GE_SwordChangeSkill1_Damage.GE_SwordChangeSkill1_Damage_C.CalcSuckBlood
// 0x0010 (0x0010 - 0x0000)
struct GE_SwordChangeSkill1_Damage_C_CalcSuckBlood final
{
public:
	class AHottaCharacter*                        TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GE_SwordChangeSkill1_Damage_C_CalcSuckBlood) == 0x000008, "Wrong alignment on GE_SwordChangeSkill1_Damage_C_CalcSuckBlood");
static_assert(sizeof(GE_SwordChangeSkill1_Damage_C_CalcSuckBlood) == 0x000010, "Wrong size on GE_SwordChangeSkill1_Damage_C_CalcSuckBlood");
static_assert(offsetof(GE_SwordChangeSkill1_Damage_C_CalcSuckBlood, TargetActor) == 0x000000, "Member 'GE_SwordChangeSkill1_Damage_C_CalcSuckBlood::TargetActor' has a wrong offset!");
static_assert(offsetof(GE_SwordChangeSkill1_Damage_C_CalcSuckBlood, ReturnValue) == 0x000008, "Member 'GE_SwordChangeSkill1_Damage_C_CalcSuckBlood::ReturnValue' has a wrong offset!");

}

