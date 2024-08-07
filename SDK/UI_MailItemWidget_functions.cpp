#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MailItemWidget

#include "Basic.hpp"

#include "UI_MailItemWidget_classes.hpp"
#include "UI_MailItemWidget_parameters.hpp"


namespace SDK
{

// Function UI_MailItemWidget.UI_MailItemWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MailItemWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MailItemWidget_C", "Tick");

	Params::UI_MailItemWidget_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MailItemWidget.UI_MailItemWidget_C.OnItemSelected
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UUI_MailItemWidget_C::OnItemSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MailItemWidget_C", "OnItemSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MailItemWidget.UI_MailItemWidget_C.ExecuteUbergraph_UI_MailItemWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MailItemWidget_C::ExecuteUbergraph_UI_MailItemWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MailItemWidget_C", "ExecuteUbergraph_UI_MailItemWidget");

	Params::UI_MailItemWidget_C_ExecuteUbergraph_UI_MailItemWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

