#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReqAsukaRevengeBlock

#include "Basic.hpp"

#include "ReqAsukaRevengeBlock_classes.hpp"
#include "ReqAsukaRevengeBlock_parameters.hpp"


namespace SDK
{

// Function ReqAsukaRevengeBlock.ReqAsukaRevengeBlock_C.CanApplyGameplayEffectContent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           SourceActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           InstigatorActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*                  GameplayEffect                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UReqAsukaRevengeBlock_C::CanApplyGameplayEffectContent(class AActor* SourceActor, class AActor* TargetActor, class AActor* InstigatorActor, const class UGameplayEffect* GameplayEffect) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReqAsukaRevengeBlock_C", "CanApplyGameplayEffectContent");

	Params::ReqAsukaRevengeBlock_C_CanApplyGameplayEffectContent Parms{};

	Parms.SourceActor = SourceActor;
	Parms.TargetActor = TargetActor;
	Parms.InstigatorActor = InstigatorActor;
	Parms.GameplayEffect = GameplayEffect;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

