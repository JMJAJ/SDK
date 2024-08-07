#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_ClearBBObjectValue

#include "Basic.hpp"

#include "BTTask_ClearBBObjectValue_classes.hpp"
#include "BTTask_ClearBBObjectValue_parameters.hpp"


namespace SDK
{

// Function BTTask_ClearBBObjectValue.BTTask_ClearBBObjectValue_C.ExecuteUbergraph_BTTask_ClearBBObjectValue
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_ClearBBObjectValue_C::ExecuteUbergraph_BTTask_ClearBBObjectValue(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_ClearBBObjectValue_C", "ExecuteUbergraph_BTTask_ClearBBObjectValue");

	Params::BTTask_ClearBBObjectValue_C_ExecuteUbergraph_BTTask_ClearBBObjectValue Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTTask_ClearBBObjectValue.BTTask_ClearBBObjectValue_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_ClearBBObjectValue_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_ClearBBObjectValue_C", "ReceiveExecuteAI");

	Params::BTTask_ClearBBObjectValue_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

