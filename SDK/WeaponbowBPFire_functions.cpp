#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponbowBPFire

#include "Basic.hpp"

#include "WeaponbowBPFire_classes.hpp"
#include "WeaponbowBPFire_parameters.hpp"


namespace SDK
{

// Function WeaponbowBPFire.WeaponbowBPFire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWeaponbowBPFire_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponbowBPFire_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponbowBPFire.WeaponbowBPFire_C.ExecuteUbergraph_WeaponbowBPFire
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponbowBPFire_C::ExecuteUbergraph_WeaponbowBPFire(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponbowBPFire_C", "ExecuteUbergraph_WeaponbowBPFire");

	Params::WeaponbowBPFire_C_ExecuteUbergraph_WeaponbowBPFire Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

