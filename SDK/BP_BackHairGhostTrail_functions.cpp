#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BackHairGhostTrail

#include "Basic.hpp"

#include "BP_BackHairGhostTrail_classes.hpp"
#include "BP_BackHairGhostTrail_parameters.hpp"


namespace SDK
{

// Function BP_BackHairGhostTrail.BP_BackHairGhostTrail_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_BackHairGhostTrail_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BackHairGhostTrail_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BackHairGhostTrail.BP_BackHairGhostTrail_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_BackHairGhostTrail_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BackHairGhostTrail_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BackHairGhostTrail.BP_BackHairGhostTrail_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_BackHairGhostTrail_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BackHairGhostTrail_C", "Timeline_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BackHairGhostTrail.BP_BackHairGhostTrail_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_BackHairGhostTrail_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BackHairGhostTrail_C", "Timeline_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BackHairGhostTrail.BP_BackHairGhostTrail_C.DoCopyPose
// (Event, Public, BlueprintEvent)

void ABP_BackHairGhostTrail_C::DoCopyPose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BackHairGhostTrail_C", "DoCopyPose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BackHairGhostTrail.BP_BackHairGhostTrail_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BackHairGhostTrail_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BackHairGhostTrail_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BackHairGhostTrail.BP_BackHairGhostTrail_C.ExecuteUbergraph_BP_BackHairGhostTrail
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BackHairGhostTrail_C::ExecuteUbergraph_BP_BackHairGhostTrail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BackHairGhostTrail_C", "ExecuteUbergraph_BP_BackHairGhostTrail");

	Params::BP_BackHairGhostTrail_C_ExecuteUbergraph_BP_BackHairGhostTrail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

