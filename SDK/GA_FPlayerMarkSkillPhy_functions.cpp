#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FPlayerMarkSkillPhy

#include "Basic.hpp"

#include "GA_FPlayerMarkSkillPhy_classes.hpp"
#include "GA_FPlayerMarkSkillPhy_parameters.hpp"


namespace SDK
{

// Function GA_FPlayerMarkSkillPhy.GA_FPlayerMarkSkillPhy_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayTagContainer            RelevantTags                                           (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_FPlayerMarkSkillPhy_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FPlayerMarkSkillPhy_C", "K2_CanActivateAbility");

	Params::GA_FPlayerMarkSkillPhy_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

}

