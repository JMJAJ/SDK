#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: buff_bd_soldier3_Ice_Effect3

#include "Basic.hpp"

#include "buff_bd_soldier3_Ice_Effect3_classes.hpp"
#include "buff_bd_soldier3_Ice_Effect3_parameters.hpp"


namespace SDK
{

// Function buff_bd_soldier3_Ice_Effect3.buff_bd_soldier3_Ice_Effect3_C.ExecuteUbergraph_buff_bd_soldier3_Ice_Effect3
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubuff_bd_soldier3_Ice_Effect3_C::ExecuteUbergraph_buff_bd_soldier3_Ice_Effect3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("buff_bd_soldier3_Ice_Effect3_C", "ExecuteUbergraph_buff_bd_soldier3_Ice_Effect3");

	Params::buff_bd_soldier3_Ice_Effect3_C_ExecuteUbergraph_buff_bd_soldier3_Ice_Effect3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

