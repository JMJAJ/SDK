#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GhostTrail

#include "Basic.hpp"

#include "BP_GhostTrail_classes.hpp"
#include "BP_GhostTrail_parameters.hpp"


namespace SDK
{

// Function BP_GhostTrail.BP_GhostTrail_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_GhostTrail_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrail_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GhostTrail.BP_GhostTrail_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_GhostTrail_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrail_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GhostTrail.BP_GhostTrail_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_GhostTrail_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrail_C", "Timeline_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GhostTrail.BP_GhostTrail_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_GhostTrail_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrail_C", "Timeline_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GhostTrail.BP_GhostTrail_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GhostTrail_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrail_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GhostTrail.BP_GhostTrail_C.DoCopyPose
// (Event, Public, BlueprintEvent)

void ABP_GhostTrail_C::DoCopyPose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrail_C", "DoCopyPose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GhostTrail.BP_GhostTrail_C.ExecuteUbergraph_BP_GhostTrail
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GhostTrail_C::ExecuteUbergraph_BP_GhostTrail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrail_C", "ExecuteUbergraph_BP_GhostTrail");

	Params::BP_GhostTrail_C_ExecuteUbergraph_BP_GhostTrail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

