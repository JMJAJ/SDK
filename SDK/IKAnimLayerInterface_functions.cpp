#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IKAnimLayerInterface

#include "Basic.hpp"

#include "IKAnimLayerInterface_classes.hpp"
#include "IKAnimLayerInterface_parameters.hpp"


namespace SDK
{

// Function IKAnimLayerInterface.IKAnimLayerInterface_C.IKAnimationLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   PowerIKAlpha                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                        Param_IKAnimationLayer                                 (Parm, OutParm, NoDestructor)

void IIKAnimLayerInterface_C::IKAnimationLayer(const struct FPoseLink& InPose, float PowerIKAlpha, struct FPoseLink* Param_IKAnimationLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IKAnimLayerInterface_C", "IKAnimationLayer");

	Params::IKAnimLayerInterface_C_IKAnimationLayer Parms{};

	Parms.InPose = std::move(InPose);
	Parms.PowerIKAlpha = PowerIKAlpha;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IKAnimationLayer != nullptr)
		*Param_IKAnimationLayer = std::move(Parms.Param_IKAnimationLayer);
}

}

