#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SpawnDamageActorBase

#include "Basic.hpp"

#include "GA_SpawnDamageActorBase_classes.hpp"
#include "GA_SpawnDamageActorBase_parameters.hpp"


namespace SDK
{

// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.ExecuteUbergraph_GA_SpawnDamageActorBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpawnDamageActorBase_C::ExecuteUbergraph_GA_SpawnDamageActorBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "ExecuteUbergraph_GA_SpawnDamageActorBase");

	Params::GA_SpawnDamageActorBase_C_ExecuteUbergraph_GA_SpawnDamageActorBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.AfterCommitAbilityEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCommit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_SpawnDamageActorBase_C::AfterCommitAbilityEvent(bool bCommit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "AfterCommitAbilityEvent");

	Params::GA_SpawnDamageActorBase_C_AfterCommitAbilityEvent Parms{};

	Parms.bCommit = bCommit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_SpawnDamageActorBase_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "K2_OnEndAbility");

	Params::GA_SpawnDamageActorBase_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.K2_TriggerJumpSection
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             JumpSectionName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpawnDamageActorBase_C::K2_TriggerJumpSection(class FName JumpSectionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "K2_TriggerJumpSection");

	Params::GA_SpawnDamageActorBase_C_K2_TriggerJumpSection Parms{};

	Parms.JumpSectionName = JumpSectionName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_SpawnDamageActorBase_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.OnCompleted_BBD44C30403383B392603D97D6025A48
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpawnDamageActorBase_C::OnCompleted_BBD44C30403383B392603D97D6025A48(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "OnCompleted_BBD44C30403383B392603D97D6025A48");

	Params::GA_SpawnDamageActorBase_C_OnCompleted_BBD44C30403383B392603D97D6025A48 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.OnBlendOut_BBD44C30403383B392603D97D6025A48
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpawnDamageActorBase_C::OnBlendOut_BBD44C30403383B392603D97D6025A48(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "OnBlendOut_BBD44C30403383B392603D97D6025A48");

	Params::GA_SpawnDamageActorBase_C_OnBlendOut_BBD44C30403383B392603D97D6025A48 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.OnInterrupted_BBD44C30403383B392603D97D6025A48
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpawnDamageActorBase_C::OnInterrupted_BBD44C30403383B392603D97D6025A48(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "OnInterrupted_BBD44C30403383B392603D97D6025A48");

	Params::GA_SpawnDamageActorBase_C_OnInterrupted_BBD44C30403383B392603D97D6025A48 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.OnCancelled_BBD44C30403383B392603D97D6025A48
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpawnDamageActorBase_C::OnCancelled_BBD44C30403383B392603D97D6025A48(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "OnCancelled_BBD44C30403383B392603D97D6025A48");

	Params::GA_SpawnDamageActorBase_C_OnCancelled_BBD44C30403383B392603D97D6025A48 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.EventReceived_BBD44C30403383B392603D97D6025A48
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpawnDamageActorBase_C::EventReceived_BBD44C30403383B392603D97D6025A48(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "EventReceived_BBD44C30403383B392603D97D6025A48");

	Params::GA_SpawnDamageActorBase_C_EventReceived_BBD44C30403383B392603D97D6025A48 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.OnCompleted_8D5F5A1C486D7457E4C4018946DF9359
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpawnDamageActorBase_C::OnCompleted_8D5F5A1C486D7457E4C4018946DF9359(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "OnCompleted_8D5F5A1C486D7457E4C4018946DF9359");

	Params::GA_SpawnDamageActorBase_C_OnCompleted_8D5F5A1C486D7457E4C4018946DF9359 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.OnBlendOut_8D5F5A1C486D7457E4C4018946DF9359
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpawnDamageActorBase_C::OnBlendOut_8D5F5A1C486D7457E4C4018946DF9359(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "OnBlendOut_8D5F5A1C486D7457E4C4018946DF9359");

	Params::GA_SpawnDamageActorBase_C_OnBlendOut_8D5F5A1C486D7457E4C4018946DF9359 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.OnInterrupted_8D5F5A1C486D7457E4C4018946DF9359
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpawnDamageActorBase_C::OnInterrupted_8D5F5A1C486D7457E4C4018946DF9359(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "OnInterrupted_8D5F5A1C486D7457E4C4018946DF9359");

	Params::GA_SpawnDamageActorBase_C_OnInterrupted_8D5F5A1C486D7457E4C4018946DF9359 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.OnCancelled_8D5F5A1C486D7457E4C4018946DF9359
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpawnDamageActorBase_C::OnCancelled_8D5F5A1C486D7457E4C4018946DF9359(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "OnCancelled_8D5F5A1C486D7457E4C4018946DF9359");

	Params::GA_SpawnDamageActorBase_C_OnCancelled_8D5F5A1C486D7457E4C4018946DF9359 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.EventReceived_8D5F5A1C486D7457E4C4018946DF9359
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpawnDamageActorBase_C::EventReceived_8D5F5A1C486D7457E4C4018946DF9359(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "EventReceived_8D5F5A1C486D7457E4C4018946DF9359");

	Params::GA_SpawnDamageActorBase_C_EventReceived_8D5F5A1C486D7457E4C4018946DF9359 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.OnTriggerNextSection_DF0FCD8E4E56B1CEE54E0DB72E9CA8AE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NextSectionName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpawnDamageActorBase_C::OnTriggerNextSection_DF0FCD8E4E56B1CEE54E0DB72E9CA8AE(class FName NextSectionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "OnTriggerNextSection_DF0FCD8E4E56B1CEE54E0DB72E9CA8AE");

	Params::GA_SpawnDamageActorBase_C_OnTriggerNextSection_DF0FCD8E4E56B1CEE54E0DB72E9CA8AE Parms{};

	Parms.NextSectionName = NextSectionName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.OnRelease_1D3F9C5A4BB971EEADEBFFA1A3C53C03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimeHeld                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAuto                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_SpawnDamageActorBase_C::OnRelease_1D3F9C5A4BB971EEADEBFFA1A3C53C03(float TimeHeld, bool bAuto)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "OnRelease_1D3F9C5A4BB971EEADEBFFA1A3C53C03");

	Params::GA_SpawnDamageActorBase_C_OnRelease_1D3F9C5A4BB971EEADEBFFA1A3C53C03 Parms{};

	Parms.TimeHeld = TimeHeld;
	Parms.bAuto = bAuto;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.TriggerMontageEvent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     ContainerTag                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_SpawnDamageActorBase_C::TriggerMontageEvent(const struct FGameplayTag& ContainerTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "TriggerMontageEvent");

	Params::GA_SpawnDamageActorBase_C_TriggerMontageEvent Parms{};

	Parms.ContainerTag = std::move(ContainerTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.CheckNeedUseInputReleaseTask
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_SpawnDamageActorBase_C::CheckNeedUseInputReleaseTask(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "CheckNeedUseInputReleaseTask");

	Params::GA_SpawnDamageActorBase_C_CheckNeedUseInputReleaseTask Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.FailCheckConsumeFun
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_SpawnDamageActorBase_C::FailCheckConsumeFun()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "FailCheckConsumeFun");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_SpawnDamageActorBase.GA_SpawnDamageActorBase_C.CheckAkComp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             SectionName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CheckSection                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpawnDamageActorBase_C::CheckAkComp(class FName SectionName, class FName CheckSection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpawnDamageActorBase_C", "CheckAkComp");

	Params::GA_SpawnDamageActorBase_C_CheckAkComp Parms{};

	Parms.SectionName = SectionName;
	Parms.CheckSection = CheckSection;

	UObject::ProcessEvent(Func, &Parms);
}

}

