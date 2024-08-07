#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ExploreDiamond

#include "Basic.hpp"

#include "WB_ExploreDiamond_classes.hpp"
#include "WB_ExploreDiamond_parameters.hpp"


namespace SDK
{

// Function WB_ExploreDiamond.WB_ExploreDiamond_C.ExecuteUbergraph_WB_ExploreDiamond
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ExploreDiamond_C::ExecuteUbergraph_WB_ExploreDiamond(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ExploreDiamond_C", "ExecuteUbergraph_WB_ExploreDiamond");

	Params::WB_ExploreDiamond_C_ExecuteUbergraph_WB_ExploreDiamond Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ExploreDiamond.WB_ExploreDiamond_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ExploreDiamond_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ExploreDiamond_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ExploreDiamond.WB_ExploreDiamond_C.PopTips
// (Event, Public, BlueprintEvent)

void UWB_ExploreDiamond_C::PopTips()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ExploreDiamond_C", "PopTips");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ExploreDiamond.WB_ExploreDiamond_C.BndEvt__WB_ExploreDiamond_ExploreButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWB_ExploreDiamond_C::BndEvt__WB_ExploreDiamond_ExploreButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ExploreDiamond_C", "BndEvt__WB_ExploreDiamond_ExploreButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ExploreDiamond.WB_ExploreDiamond_C.OpenDiamondDetection
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWB_ExploreDiamond_C::OpenDiamondDetection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ExploreDiamond_C", "OpenDiamondDetection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ExploreDiamond.WB_ExploreDiamond_C.OnExploreIdChanged
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_ExploreDiamond_C::OnExploreIdChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ExploreDiamond_C", "OnExploreIdChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ExploreDiamond.WB_ExploreDiamond_C.IsSpecifiedLocationTrackable
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_ExploreDiamond_C::IsSpecifiedLocationTrackable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ExploreDiamond_C", "IsSpecifiedLocationTrackable");

	Params::WB_ExploreDiamond_C_IsSpecifiedLocationTrackable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

