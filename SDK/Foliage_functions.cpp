#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Foliage

#include "Basic.hpp"

#include "Foliage_classes.hpp"
#include "Foliage_parameters.hpp"


namespace SDK
{

// Function Foliage.FoliageInstancedStaticMeshComponent.IsInstanceCanBeBurn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFoliageInstancedStaticMeshComponent::IsInstanceCanBeBurn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FoliageInstancedStaticMeshComponent", "IsInstanceCanBeBurn");

	Params::FoliageInstancedStaticMeshComponent_IsInstanceCanBeBurn Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Foliage.FoliageInstancedStaticMeshComponent.IsInstanceCanBeCut
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFoliageInstancedStaticMeshComponent::IsInstanceCanBeCut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FoliageInstancedStaticMeshComponent", "IsInstanceCanBeCut");

	Params::FoliageInstancedStaticMeshComponent_IsInstanceCanBeCut Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Foliage.FoliageInstancedStaticMeshComponent.IsInstanceCanCutDown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFoliageInstancedStaticMeshComponent::IsInstanceCanCutDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FoliageInstancedStaticMeshComponent", "IsInstanceCanCutDown");

	Params::FoliageInstancedStaticMeshComponent_IsInstanceCanCutDown Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*                      StaticMesh                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBox                             Box                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFoliageStatistics::FoliageOverlappingBoxCount(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, const struct FBox& Box)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FoliageStatistics", "FoliageOverlappingBoxCount");

	Params::FoliageStatistics_FoliageOverlappingBoxCount Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.StaticMesh = StaticMesh;
	Parms.Box = std::move(Box);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*                      StaticMesh                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          CenterPosition                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Radius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFoliageStatistics::FoliageOverlappingSphereCount(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FoliageStatistics", "FoliageOverlappingSphereCount");

	Params::FoliageStatistics_FoliageOverlappingSphereCount Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.StaticMesh = StaticMesh;
	Parms.CenterPosition = std::move(CenterPosition);
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Foliage.IFBurnInstancedStaticMeshComponent.BurnGrassInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   InstanceIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UIFBurnInstancedStaticMeshComponent::BurnGrassInstance(int32 InstanceIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IFBurnInstancedStaticMeshComponent", "BurnGrassInstance");

	Params::IFBurnInstancedStaticMeshComponent_BurnGrassInstance Parms{};

	Parms.InstanceIndex = InstanceIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Foliage.IFBurnInstancedStaticMeshComponent.IsInstanceInBurnState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   InstanceIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UIFBurnInstancedStaticMeshComponent::IsInstanceInBurnState(int32 InstanceIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IFBurnInstancedStaticMeshComponent", "IsInstanceInBurnState");

	Params::IFBurnInstancedStaticMeshComponent_IsInstanceInBurnState Parms{};

	Parms.InstanceIndex = InstanceIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Foliage.IFBurnInstancedStaticMeshComponent.SpreadFireOnInstance
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                          Center                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UIFBurnInstancedStaticMeshComponent::SpreadFireOnInstance(const struct FVector& Center)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IFBurnInstancedStaticMeshComponent", "SpreadFireOnInstance");

	Params::IFBurnInstancedStaticMeshComponent_SpreadFireOnInstance Parms{};

	Parms.Center = std::move(Center);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Foliage.IFTreeInstancedStaticMeshComponent.CutTreeInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   InstanceIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UIFTreeInstancedStaticMeshComponent::CutTreeInstance(int32 InstanceIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IFTreeInstancedStaticMeshComponent", "CutTreeInstance");

	Params::IFTreeInstancedStaticMeshComponent_CutTreeInstance Parms{};

	Parms.InstanceIndex = InstanceIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Foliage.IFTreeInstancedStaticMeshComponent.InstancedCompBeginOverlap
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*              InOverlappedComponent                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           InOtherActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              InOtherComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   InOtherBodyIndex                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bInFromSweep                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                       InSweepResult                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UIFTreeInstancedStaticMeshComponent::InstancedCompBeginOverlap(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComponent, int32 InOtherBodyIndex, bool bInFromSweep, const struct FHitResult& InSweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IFTreeInstancedStaticMeshComponent", "InstancedCompBeginOverlap");

	Params::IFTreeInstancedStaticMeshComponent_InstancedCompBeginOverlap Parms{};

	Parms.InOverlappedComponent = InOverlappedComponent;
	Parms.InOtherActor = InOtherActor;
	Parms.InOtherComponent = InOtherComponent;
	Parms.InOtherBodyIndex = InOtherBodyIndex;
	Parms.bInFromSweep = bInFromSweep;
	Parms.InSweepResult = std::move(InSweepResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Foliage.InteractiveFoliageActor.CapsuleTouched
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class UPrimitiveComponent*              OverlappedComp                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           Other                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   OtherBodyIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bFromSweep                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                       OverlapInfo                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AInteractiveFoliageActor::CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractiveFoliageActor", "CapsuleTouched");

	Params::InteractiveFoliageActor_CapsuleTouched Parms{};

	Parms.OverlappedComp = OverlappedComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.OverlapInfo = std::move(OverlapInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Foliage.ProceduralFoliageSpawner.Simulate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   NumSteps                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralFoliageSpawner::Simulate(int32 NumSteps)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralFoliageSpawner", "Simulate");

	Params::ProceduralFoliageSpawner_Simulate Parms{};

	Parms.NumSteps = NumSteps;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

