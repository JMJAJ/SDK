#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buff_XuLie_001

#include "Basic.hpp"

#include "Buff_XuLie_001_classes.hpp"
#include "Buff_XuLie_001_parameters.hpp"


namespace SDK
{

// Function Buff_XuLie_001.Buff_XuLie_001_C.ExecuteUbergraph_Buff_XuLie_001
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuff_XuLie_001_C::ExecuteUbergraph_Buff_XuLie_001(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Buff_XuLie_001_C", "ExecuteUbergraph_Buff_XuLie_001");

	Params::Buff_XuLie_001_C_ExecuteUbergraph_Buff_XuLie_001 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

