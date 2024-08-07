#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LockRangeMarkRobMelee10

#include "Basic.hpp"

#include "LockRangeMarkRobMelee10_classes.hpp"
#include "LockRangeMarkRobMelee10_parameters.hpp"


namespace SDK
{

// Function LockRangeMarkRobMelee10.LockRangeMarkRobMelee10_C.GetTargets
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           OwningActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TargetingActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FHitResult>               OutHitResults                                          (Parm, OutParm, ContainsInstancedReference)
// TArray<class AActor*>                   OutActors                                              (Parm, OutParm)

void ULockRangeMarkRobMelee10_C::GetTargets(class AActor* OwningActor, class AActor* TargetingActor, const struct FGameplayEventData& EventData, TArray<struct FHitResult>* OutHitResults, TArray<class AActor*>* OutActors) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LockRangeMarkRobMelee10_C", "GetTargets");

	Params::LockRangeMarkRobMelee10_C_GetTargets Parms{};

	Parms.OwningActor = OwningActor;
	Parms.TargetingActor = TargetingActor;
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);

	if (OutHitResults != nullptr)
		*OutHitResults = std::move(Parms.OutHitResults);

	if (OutActors != nullptr)
		*OutActors = std::move(Parms.OutActors);
}

}

