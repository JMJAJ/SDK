#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimalCharacterBP_Base

#include "Basic.hpp"

#include "AnimalCharacterBP_Base_classes.hpp"
#include "AnimalCharacterBP_Base_parameters.hpp"


namespace SDK
{

// Function AnimalCharacterBP_Base.AnimalCharacterBP_Base_C.ExecuteUbergraph_AnimalCharacterBP_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnimalCharacterBP_Base_C::ExecuteUbergraph_AnimalCharacterBP_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimalCharacterBP_Base_C", "ExecuteUbergraph_AnimalCharacterBP_Base");

	Params::AnimalCharacterBP_Base_C_ExecuteUbergraph_AnimalCharacterBP_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimalCharacterBP_Base.AnimalCharacterBP_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAnimalCharacterBP_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimalCharacterBP_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

