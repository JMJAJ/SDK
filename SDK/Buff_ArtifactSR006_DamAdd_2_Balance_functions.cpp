#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buff_ArtifactSR006_DamAdd_2_Balance

#include "Basic.hpp"

#include "Buff_ArtifactSR006_DamAdd_2_Balance_classes.hpp"
#include "Buff_ArtifactSR006_DamAdd_2_Balance_parameters.hpp"


namespace SDK
{

// Function Buff_ArtifactSR006_DamAdd_2_Balance.Buff_ArtifactSR006_DamAdd_2_Balance_C.ExecuteUbergraph_Buff_ArtifactSR006_DamAdd_2_Balance
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuff_ArtifactSR006_DamAdd_2_Balance_C::ExecuteUbergraph_Buff_ArtifactSR006_DamAdd_2_Balance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Buff_ArtifactSR006_DamAdd_2_Balance_C", "ExecuteUbergraph_Buff_ArtifactSR006_DamAdd_2_Balance");

	Params::Buff_ArtifactSR006_DamAdd_2_Balance_C_ExecuteUbergraph_Buff_ArtifactSR006_DamAdd_2_Balance Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

