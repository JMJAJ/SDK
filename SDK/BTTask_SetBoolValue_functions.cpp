#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_SetBoolValue

#include "Basic.hpp"

#include "BTTask_SetBoolValue_classes.hpp"
#include "BTTask_SetBoolValue_parameters.hpp"


namespace SDK
{

// Function BTTask_SetBoolValue.BTTask_SetBoolValue_C.ExecuteUbergraph_BTTask_SetBoolValue
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_SetBoolValue_C::ExecuteUbergraph_BTTask_SetBoolValue(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_SetBoolValue_C", "ExecuteUbergraph_BTTask_SetBoolValue");

	Params::BTTask_SetBoolValue_C_ExecuteUbergraph_BTTask_SetBoolValue Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTTask_SetBoolValue.BTTask_SetBoolValue_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_SetBoolValue_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_SetBoolValue_C", "ReceiveExecuteAI");

	Params::BTTask_SetBoolValue_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

