#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TeamQuickForm

#include "Basic.hpp"

#include "UI_TeamQuickForm_classes.hpp"
#include "UI_TeamQuickForm_parameters.hpp"


namespace SDK
{

// Function UI_TeamQuickForm.UI_TeamQuickForm_C.ExecuteUbergraph_UI_TeamQuickForm
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TeamQuickForm_C::ExecuteUbergraph_UI_TeamQuickForm(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamQuickForm_C", "ExecuteUbergraph_UI_TeamQuickForm");

	Params::UI_TeamQuickForm_C_ExecuteUbergraph_UI_TeamQuickForm Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TeamQuickForm.UI_TeamQuickForm_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_TeamQuickForm_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamQuickForm_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

}

