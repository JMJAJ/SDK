#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buff_MarkRob_BreakDown_Pre

#include "Basic.hpp"

#include "Buff_MarkRob_BreakDown_Pre_classes.hpp"
#include "Buff_MarkRob_BreakDown_Pre_parameters.hpp"


namespace SDK
{

// Function Buff_MarkRob_BreakDown_Pre.Buff_MarkRob_BreakDown_Pre_C.ExecuteUbergraph_Buff_MarkRob_BreakDown_Pre
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuff_MarkRob_BreakDown_Pre_C::ExecuteUbergraph_Buff_MarkRob_BreakDown_Pre(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Buff_MarkRob_BreakDown_Pre_C", "ExecuteUbergraph_Buff_MarkRob_BreakDown_Pre");

	Params::Buff_MarkRob_BreakDown_Pre_C_ExecuteUbergraph_Buff_MarkRob_BreakDown_Pre Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

