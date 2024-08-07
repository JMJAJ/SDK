#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BigWorldTimeManager

#include "Basic.hpp"

#include "BP_BigWorldTimeManager_classes.hpp"
#include "BP_BigWorldTimeManager_parameters.hpp"


namespace SDK
{

// Function BP_BigWorldTimeManager.BP_BigWorldTimeManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BigWorldTimeManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BigWorldTimeManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BigWorldTimeManager.BP_BigWorldTimeManager_C.UpdateRTPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTimeHour                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BigWorldTimeManager_C::UpdateRTPC(int32 InTimeHour)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BigWorldTimeManager_C", "UpdateRTPC");

	Params::BP_BigWorldTimeManager_C_UpdateRTPC Parms{};

	Parms.InTimeHour = InTimeHour;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BigWorldTimeManager.BP_BigWorldTimeManager_C.ExecuteUbergraph_BP_BigWorldTimeManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BigWorldTimeManager_C::ExecuteUbergraph_BP_BigWorldTimeManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BigWorldTimeManager_C", "ExecuteUbergraph_BP_BigWorldTimeManager");

	Params::BP_BigWorldTimeManager_C_ExecuteUbergraph_BP_BigWorldTimeManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

