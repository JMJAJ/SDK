#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FPlayerSpearChangeSkillNewThu_SSRNew

#include "Basic.hpp"

#include "GA_FPlayerSpearChangeSkillNewThu_SSRNew_classes.hpp"
#include "GA_FPlayerSpearChangeSkillNewThu_SSRNew_parameters.hpp"


namespace SDK
{

// Function GA_FPlayerSpearChangeSkillNewThu_SSRNew.GA_FPlayerSpearChangeSkillNewThu_SSRNew_C.ExecuteUbergraph_GA_FPlayerSpearChangeSkillNewThu_SSRNew
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FPlayerSpearChangeSkillNewThu_SSRNew_C::ExecuteUbergraph_GA_FPlayerSpearChangeSkillNewThu_SSRNew(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FPlayerSpearChangeSkillNewThu_SSRNew_C", "ExecuteUbergraph_GA_FPlayerSpearChangeSkillNewThu_SSRNew");

	Params::GA_FPlayerSpearChangeSkillNewThu_SSRNew_C_ExecuteUbergraph_GA_FPlayerSpearChangeSkillNewThu_SSRNew Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FPlayerSpearChangeSkillNewThu_SSRNew.GA_FPlayerSpearChangeSkillNewThu_SSRNew_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_FPlayerSpearChangeSkillNewThu_SSRNew_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FPlayerSpearChangeSkillNewThu_SSRNew_C", "K2_OnEndAbility");

	Params::GA_FPlayerSpearChangeSkillNewThu_SSRNew_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}

