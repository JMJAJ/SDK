#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QRSLTideManager

#include "Basic.hpp"

#include "QRSLTideManager_classes.hpp"
#include "QRSLTideManager_parameters.hpp"


namespace SDK
{

// Function QRSLTideManager.QRSLTideManager_C.ExecuteUbergraph_QRSLTideManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQRSLTideManager_C::ExecuteUbergraph_QRSLTideManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QRSLTideManager_C", "ExecuteUbergraph_QRSLTideManager");

	Params::QRSLTideManager_C_ExecuteUbergraph_QRSLTideManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QRSLTideManager.QRSLTideManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AQRSLTideManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QRSLTideManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

