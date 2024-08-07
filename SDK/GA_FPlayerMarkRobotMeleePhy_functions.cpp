#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FPlayerMarkRobotMeleePhy

#include "Basic.hpp"

#include "GA_FPlayerMarkRobotMeleePhy_classes.hpp"
#include "GA_FPlayerMarkRobotMeleePhy_parameters.hpp"


namespace SDK
{

// Function GA_FPlayerMarkRobotMeleePhy.GA_FPlayerMarkRobotMeleePhy_C.ExecuteUbergraph_GA_FPlayerMarkRobotMeleePhy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FPlayerMarkRobotMeleePhy_C::ExecuteUbergraph_GA_FPlayerMarkRobotMeleePhy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FPlayerMarkRobotMeleePhy_C", "ExecuteUbergraph_GA_FPlayerMarkRobotMeleePhy");

	Params::GA_FPlayerMarkRobotMeleePhy_C_ExecuteUbergraph_GA_FPlayerMarkRobotMeleePhy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FPlayerMarkRobotMeleePhy.GA_FPlayerMarkRobotMeleePhy_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_FPlayerMarkRobotMeleePhy_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FPlayerMarkRobotMeleePhy_C", "K2_OnEndAbility");

	Params::GA_FPlayerMarkRobotMeleePhy_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FPlayerMarkRobotMeleePhy.GA_FPlayerMarkRobotMeleePhy_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_FPlayerMarkRobotMeleePhy_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FPlayerMarkRobotMeleePhy_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_FPlayerMarkRobotMeleePhy.GA_FPlayerMarkRobotMeleePhy_C.AfterAimmingForceSetStartSectionName
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_FPlayerMarkRobotMeleePhy_C::AfterAimmingForceSetStartSectionName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FPlayerMarkRobotMeleePhy_C", "AfterAimmingForceSetStartSectionName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_FPlayerMarkRobotMeleePhy.GA_FPlayerMarkRobotMeleePhy_C.AfterAimmingNeedTriggerReleaseTask
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_FPlayerMarkRobotMeleePhy_C::AfterAimmingNeedTriggerReleaseTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FPlayerMarkRobotMeleePhy_C", "AfterAimmingNeedTriggerReleaseTask");

	Params::GA_FPlayerMarkRobotMeleePhy_C_AfterAimmingNeedTriggerReleaseTask Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GA_FPlayerMarkRobotMeleePhy.GA_FPlayerMarkRobotMeleePhy_C.PressHoldNeedEnterAimming
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_FPlayerMarkRobotMeleePhy_C::PressHoldNeedEnterAimming(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FPlayerMarkRobotMeleePhy_C", "PressHoldNeedEnterAimming");

	Params::GA_FPlayerMarkRobotMeleePhy_C_PressHoldNeedEnterAimming Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function GA_FPlayerMarkRobotMeleePhy.GA_FPlayerMarkRobotMeleePhy_C.WaitButtonReleaseToLeaveAimming
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_FPlayerMarkRobotMeleePhy_C::WaitButtonReleaseToLeaveAimming(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FPlayerMarkRobotMeleePhy_C", "WaitButtonReleaseToLeaveAimming");

	Params::GA_FPlayerMarkRobotMeleePhy_C_WaitButtonReleaseToLeaveAimming Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

