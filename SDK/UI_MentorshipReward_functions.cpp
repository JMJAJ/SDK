#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MentorshipReward

#include "Basic.hpp"

#include "UI_MentorshipReward_classes.hpp"
#include "UI_MentorshipReward_parameters.hpp"


namespace SDK
{

// Function UI_MentorshipReward.UI_MentorshipReward_C.BndEvt__UI_MentorshipReward_UI_Button_K2Node_ComponentBoundEvent_0_UIButtonDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                          BtnWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MentorshipReward_C::BndEvt__UI_MentorshipReward_UI_Button_K2Node_ComponentBoundEvent_0_UIButtonDelegate__DelegateSignature(class UWidget* BtnWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MentorshipReward_C", "BndEvt__UI_MentorshipReward_UI_Button_K2Node_ComponentBoundEvent_0_UIButtonDelegate__DelegateSignature");

	Params::UI_MentorshipReward_C_BndEvt__UI_MentorshipReward_UI_Button_K2Node_ComponentBoundEvent_0_UIButtonDelegate__DelegateSignature Parms{};

	Parms.BtnWidget = BtnWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MentorshipReward.UI_MentorshipReward_C.ExecuteUbergraph_UI_MentorshipReward
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MentorshipReward_C::ExecuteUbergraph_UI_MentorshipReward(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MentorshipReward_C", "ExecuteUbergraph_UI_MentorshipReward");

	Params::UI_MentorshipReward_C_ExecuteUbergraph_UI_MentorshipReward Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

