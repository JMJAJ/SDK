#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HottaSwimmingSystem

#include "Basic.hpp"

#include "HottaSwimmingSystem_classes.hpp"
#include "HottaSwimmingSystem_parameters.hpp"


namespace SDK
{

// Function HottaSwimmingSystem.HottaSwimmingSystem_C.GetCharaterPos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Pos                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHottaSwimmingSystem_C::GetCharaterPos(struct FVector* Pos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HottaSwimmingSystem_C", "GetCharaterPos");

	Params::HottaSwimmingSystem_C_GetCharaterPos Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Pos != nullptr)
		*Pos = std::move(Parms.Pos);
}


// Function HottaSwimmingSystem.HottaSwimmingSystem_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHottaSwimmingSystem_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HottaSwimmingSystem_C", "ReceiveTick");

	Params::HottaSwimmingSystem_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HottaSwimmingSystem.HottaSwimmingSystem_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UHottaSwimmingSystem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HottaSwimmingSystem_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HottaSwimmingSystem.HottaSwimmingSystem_C.ExecuteUbergraph_HottaSwimmingSystem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHottaSwimmingSystem_C::ExecuteUbergraph_HottaSwimmingSystem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HottaSwimmingSystem_C", "ExecuteUbergraph_HottaSwimmingSystem");

	Params::HottaSwimmingSystem_C_ExecuteUbergraph_HottaSwimmingSystem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

