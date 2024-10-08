#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_SwordChangeSkill2_Damage

#include "Basic.hpp"

#include "GE_SwordChangeSkill2_Damage_classes.hpp"
#include "GE_SwordChangeSkill2_Damage_parameters.hpp"


namespace SDK
{

// Function GE_SwordChangeSkill2_Damage.GE_SwordChangeSkill2_Damage_C.CalcSuckBlood
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AHottaCharacter*                  TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UGE_SwordChangeSkill2_Damage_C::CalcSuckBlood(class AHottaCharacter* TargetActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GE_SwordChangeSkill2_Damage_C", "CalcSuckBlood");

	Params::GE_SwordChangeSkill2_Damage_C_CalcSuckBlood Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

