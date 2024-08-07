#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Interation

#include "Basic.hpp"

#include "UI_Interation_classes.hpp"
#include "UI_Interation_parameters.hpp"


namespace SDK
{

// Function UI_Interation.UI_Interation_C.ExecuteUbergraph_UI_Interation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Interation_C::ExecuteUbergraph_UI_Interation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Interation_C", "ExecuteUbergraph_UI_Interation");

	Params::UI_Interation_C_ExecuteUbergraph_UI_Interation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Interation.UI_Interation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Interation_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Interation_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Interation.UI_Interation_C.HiddenInGame
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Interation_C::HiddenInGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Interation_C", "HiddenInGame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Interation.UI_Interation_C.ShowInGame
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Interation_C::ShowInGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Interation_C", "ShowInGame");

	UObject::ProcessEvent(Func, nullptr);
}

}

