#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AsukaATFieldDmgUpPhy

#include "Basic.hpp"

#include "AsukaATFieldDmgUpPhy_classes.hpp"
#include "AsukaATFieldDmgUpPhy_parameters.hpp"


namespace SDK
{

// Function AsukaATFieldDmgUpPhy.AsukaATFieldDmgUpPhy_C.HottaCalculateBaseMagnitude
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           OwnerActor                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HitActor                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           InstigatorActor                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAsukaATFieldDmgUpPhy_C::HottaCalculateBaseMagnitude(const class AActor* OwnerActor, const class AActor* HitActor, const class AActor* InstigatorActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AsukaATFieldDmgUpPhy_C", "HottaCalculateBaseMagnitude");

	Params::AsukaATFieldDmgUpPhy_C_HottaCalculateBaseMagnitude Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.HitActor = HitActor;
	Parms.InstigatorActor = InstigatorActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

