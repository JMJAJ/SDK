#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SceneEffectCutTree33

#include "Basic.hpp"

#include "SceneEffectCutTree33_classes.hpp"
#include "SceneEffectCutTree33_parameters.hpp"


namespace SDK
{

// Function SceneEffectCutTree33.SceneEffectCutTree33_C.ExecuteUbergraph_SceneEffectCutTree33
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASceneEffectCutTree33_C::ExecuteUbergraph_SceneEffectCutTree33(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SceneEffectCutTree33_C", "ExecuteUbergraph_SceneEffectCutTree33");

	Params::SceneEffectCutTree33_C_ExecuteUbergraph_SceneEffectCutTree33 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SceneEffectCutTree33.SceneEffectCutTree33_C.OpenCutTreeShockEffectEvent
// (Event, Public, BlueprintEvent)

void ASceneEffectCutTree33_C::OpenCutTreeShockEffectEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SceneEffectCutTree33_C", "OpenCutTreeShockEffectEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SceneEffectCutTree33.SceneEffectCutTree33_C.CloseCutTreeEffectEvent
// (Event, Public, BlueprintEvent)

void ASceneEffectCutTree33_C::CloseCutTreeEffectEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SceneEffectCutTree33_C", "CloseCutTreeEffectEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SceneEffectCutTree33.SceneEffectCutTree33_C.OpenCutTreeEffectEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   EffectScale                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASceneEffectCutTree33_C::OpenCutTreeEffectEvent(const struct FVector& HitLocation, float EffectScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SceneEffectCutTree33_C", "OpenCutTreeEffectEvent");

	Params::SceneEffectCutTree33_C_OpenCutTreeEffectEvent Parms{};

	Parms.HitLocation = std::move(HitLocation);
	Parms.EffectScale = EffectScale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SceneEffectCutTree33.SceneEffectCutTree33_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASceneEffectCutTree33_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SceneEffectCutTree33_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

