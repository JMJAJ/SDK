#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BreakableBase

#include "Basic.hpp"

#include "BP_BreakableBase_classes.hpp"
#include "BP_BreakableBase_parameters.hpp"


namespace SDK
{

// Function BP_BreakableBase.BP_BreakableBase_C.ExecuteUbergraph_BP_BreakableBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BreakableBase_C::ExecuteUbergraph_BP_BreakableBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BreakableBase_C", "ExecuteUbergraph_BP_BreakableBase");

	Params::BP_BreakableBase_C_ExecuteUbergraph_BP_BreakableBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

