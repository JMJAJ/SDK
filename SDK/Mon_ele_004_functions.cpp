#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mon_ele_004

#include "Basic.hpp"

#include "Mon_ele_004_classes.hpp"
#include "Mon_ele_004_parameters.hpp"


namespace SDK
{

// Function mon_ele_004.mon_ele_004_C.ExecuteUbergraph_mon_ele_004
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMon_ele_004_C::ExecuteUbergraph_mon_ele_004(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mon_ele_004_C", "ExecuteUbergraph_mon_ele_004");

	Params::Mon_ele_004_C_ExecuteUbergraph_mon_ele_004 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function mon_ele_004.mon_ele_004_C.OnDamaged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   DamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TSubclassOf<class UGameplayEffect>      DamageGameplayEffect                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AHottaCharacter*                  InstigatorCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMon_ele_004_C::OnDamaged(float DamageAmount, const struct FHitResult& HitInfo, const struct FGameplayTagContainer& DamageTags, TSubclassOf<class UGameplayEffect> DamageGameplayEffect, class AHottaCharacter* InstigatorCharacter, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mon_ele_004_C", "OnDamaged");

	Params::Mon_ele_004_C_OnDamaged Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.HitInfo = std::move(HitInfo);
	Parms.DamageTags = std::move(DamageTags);
	Parms.DamageGameplayEffect = DamageGameplayEffect;
	Parms.InstigatorCharacter = InstigatorCharacter;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function mon_ele_004.mon_ele_004_C.BPOnCharacterDead
// (Event, Protected, BlueprintEvent)

void AMon_ele_004_C::BPOnCharacterDead()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mon_ele_004_C", "BPOnCharacterDead");

	UObject::ProcessEvent(Func, nullptr);
}


// Function mon_ele_004.mon_ele_004_C.set_particle
// (BlueprintCallable, BlueprintEvent)

void AMon_ele_004_C::Set_particle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mon_ele_004_C", "set_particle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function mon_ele_004.mon_ele_004_C.hunterXhunter
// (BlueprintCallable, BlueprintEvent)

void AMon_ele_004_C::HunterXhunter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mon_ele_004_C", "hunterXhunter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function mon_ele_004.mon_ele_004_C.OnBeginBattle
// (Event, Public, BlueprintEvent)

void AMon_ele_004_C::OnBeginBattle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mon_ele_004_C", "OnBeginBattle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function mon_ele_004.mon_ele_004_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMon_ele_004_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mon_ele_004_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function mon_ele_004.mon_ele_004_C.OnHuntSkillUsed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMon_ele_004_C::OnHuntSkillUsed(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mon_ele_004_C", "OnHuntSkillUsed");

	Params::Mon_ele_004_C_OnHuntSkillUsed Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function mon_ele_004.mon_ele_004_C.FindHuntTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHottaAICharacter*                Target                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMon_ele_004_C::FindHuntTarget(class AHottaAICharacter** Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mon_ele_004_C", "FindHuntTarget");

	Params::Mon_ele_004_C_FindHuntTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;
}

}

