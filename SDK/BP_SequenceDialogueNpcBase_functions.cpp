#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SequenceDialogueNpcBase

#include "Basic.hpp"

#include "BP_SequenceDialogueNpcBase_classes.hpp"
#include "BP_SequenceDialogueNpcBase_parameters.hpp"


namespace SDK
{

// Function BP_SequenceDialogueNpcBase.BP_SequenceDialogueNpcBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SequenceDialogueNpcBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SequenceDialogueNpcBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SequenceDialogueNpcBase.BP_SequenceDialogueNpcBase_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SequenceDialogueNpcBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SequenceDialogueNpcBase_C", "ReceiveEndPlay");

	Params::BP_SequenceDialogueNpcBase_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SequenceDialogueNpcBase.BP_SequenceDialogueNpcBase_C.ExecuteUbergraph_BP_SequenceDialogueNpcBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SequenceDialogueNpcBase_C::ExecuteUbergraph_BP_SequenceDialogueNpcBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SequenceDialogueNpcBase_C", "ExecuteUbergraph_BP_SequenceDialogueNpcBase");

	Params::BP_SequenceDialogueNpcBase_C_ExecuteUbergraph_BP_SequenceDialogueNpcBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

