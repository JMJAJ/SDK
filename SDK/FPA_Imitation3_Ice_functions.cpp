#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FPA_Imitation3_Ice

#include "Basic.hpp"

#include "FPA_Imitation3_Ice_classes.hpp"
#include "FPA_Imitation3_Ice_parameters.hpp"


namespace SDK
{

// Function FPA_Imitation3_Ice.FPA_Imitation3_Ice_C.Timeline_ProcessMaterialEffect__FinishedFunc
// (BlueprintEvent)

void AFPA_Imitation3_Ice_C::Timeline_ProcessMaterialEffect__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FPA_Imitation3_Ice_C", "Timeline_ProcessMaterialEffect__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FPA_Imitation3_Ice.FPA_Imitation3_Ice_C.Timeline_ProcessMaterialEffect__UpdateFunc
// (BlueprintEvent)

void AFPA_Imitation3_Ice_C::Timeline_ProcessMaterialEffect__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FPA_Imitation3_Ice_C", "Timeline_ProcessMaterialEffect__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FPA_Imitation3_Ice.FPA_Imitation3_Ice_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFPA_Imitation3_Ice_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FPA_Imitation3_Ice_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FPA_Imitation3_Ice.FPA_Imitation3_Ice_C.ProcessMaterialEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFPA_Imitation3_Ice_C::ProcessMaterialEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FPA_Imitation3_Ice_C", "ProcessMaterialEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FPA_Imitation3_Ice.FPA_Imitation3_Ice_C.ExecuteUbergraph_FPA_Imitation3_Ice
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFPA_Imitation3_Ice_C::ExecuteUbergraph_FPA_Imitation3_Ice(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FPA_Imitation3_Ice_C", "ExecuteUbergraph_FPA_Imitation3_Ice");

	Params::FPA_Imitation3_Ice_C_ExecuteUbergraph_FPA_Imitation3_Ice Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

