#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mon_hum_018

#include "Basic.hpp"

#include "Mon_hum_018_classes.hpp"
#include "Mon_hum_018_parameters.hpp"


namespace SDK
{

// Function mon_hum_018.mon_hum_018_C.ExecuteUbergraph_mon_hum_018
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMon_hum_018_C::ExecuteUbergraph_mon_hum_018(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mon_hum_018_C", "ExecuteUbergraph_mon_hum_018");

	Params::Mon_hum_018_C_ExecuteUbergraph_mon_hum_018 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function mon_hum_018.mon_hum_018_C.OnDamaged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   DamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TSubclassOf<class UGameplayEffect>      DamageGameplayEffect                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AHottaCharacter*                  InstigatorCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMon_hum_018_C::OnDamaged(float DamageAmount, const struct FHitResult& HitInfo, const struct FGameplayTagContainer& DamageTags, TSubclassOf<class UGameplayEffect> DamageGameplayEffect, class AHottaCharacter* InstigatorCharacter, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mon_hum_018_C", "OnDamaged");

	Params::Mon_hum_018_C_OnDamaged Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.HitInfo = std::move(HitInfo);
	Parms.DamageTags = std::move(DamageTags);
	Parms.DamageGameplayEffect = DamageGameplayEffect;
	Parms.InstigatorCharacter = InstigatorCharacter;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}

}

