#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_AirwallTips_Vera

#include "Basic.hpp"

#include "UI_AirwallTips_Vera_classes.hpp"
#include "UI_AirwallTips_Vera_parameters.hpp"


namespace SDK
{

// Function UI_AirwallTips_Vera.UI_AirwallTips_Vera_C.ExecuteUbergraph_UI_AirwallTips_Vera
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_AirwallTips_Vera_C::ExecuteUbergraph_UI_AirwallTips_Vera(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_AirwallTips_Vera_C", "ExecuteUbergraph_UI_AirwallTips_Vera");

	Params::UI_AirwallTips_Vera_C_ExecuteUbergraph_UI_AirwallTips_Vera Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_AirwallTips_Vera.UI_AirwallTips_Vera_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_AirwallTips_Vera_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_AirwallTips_Vera_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

