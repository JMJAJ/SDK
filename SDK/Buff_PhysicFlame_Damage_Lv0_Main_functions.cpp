#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buff_PhysicFlame_Damage_Lv0_Main

#include "Basic.hpp"

#include "Buff_PhysicFlame_Damage_Lv0_Main_classes.hpp"
#include "Buff_PhysicFlame_Damage_Lv0_Main_parameters.hpp"


namespace SDK
{

// Function Buff_PhysicFlame_Damage_Lv0_Main.Buff_PhysicFlame_Damage_Lv0_Main_C.ExecuteUbergraph_Buff_PhysicFlame_Damage_Lv0_Main
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuff_PhysicFlame_Damage_Lv0_Main_C::ExecuteUbergraph_Buff_PhysicFlame_Damage_Lv0_Main(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Buff_PhysicFlame_Damage_Lv0_Main_C", "ExecuteUbergraph_Buff_PhysicFlame_Damage_Lv0_Main");

	Params::Buff_PhysicFlame_Damage_Lv0_Main_C_ExecuteUbergraph_Buff_PhysicFlame_Damage_Lv0_Main Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

