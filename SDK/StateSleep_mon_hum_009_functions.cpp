#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StateSleep_mon_hum_009

#include "Basic.hpp"

#include "StateSleep_mon_hum_009_classes.hpp"
#include "StateSleep_mon_hum_009_parameters.hpp"


namespace SDK
{

// Function StateSleep_mon_hum_009.StateSleep_mon_hum_009_C.ExecuteUbergraph_StateSleep_mon_hum_009
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStateSleep_mon_hum_009_C::ExecuteUbergraph_StateSleep_mon_hum_009(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateSleep_mon_hum_009_C", "ExecuteUbergraph_StateSleep_mon_hum_009");

	Params::StateSleep_mon_hum_009_C_ExecuteUbergraph_StateSleep_mon_hum_009 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StateSleep_mon_hum_009.StateSleep_mon_hum_009_C.BPOnBeginState
// (Event, Public, BlueprintEvent)

void UStateSleep_mon_hum_009_C::BPOnBeginState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateSleep_mon_hum_009_C", "BPOnBeginState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StateSleep_mon_hum_009.StateSleep_mon_hum_009_C.BPOnEndState
// (Event, Public, BlueprintEvent)

void UStateSleep_mon_hum_009_C::BPOnEndState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateSleep_mon_hum_009_C", "BPOnEndState");

	UObject::ProcessEvent(Func, nullptr);
}

}

