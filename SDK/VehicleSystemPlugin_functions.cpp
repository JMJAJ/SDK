#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VehicleSystemPlugin

#include "Basic.hpp"

#include "VehicleSystemPlugin_classes.hpp"
#include "VehicleSystemPlugin_parameters.hpp"


namespace SDK
{

// Function VehicleSystemPlugin.VehicleConstraint.SetLinearSoftConstraint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    SoftConstraint                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Stiffness                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Damping                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVehicleConstraint::SetLinearSoftConstraint(bool SoftConstraint, float Stiffness, float Damping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleConstraint", "SetLinearSoftConstraint");

	Params::VehicleConstraint_SetLinearSoftConstraint Parms{};

	Parms.SoftConstraint = SoftConstraint;
	Parms.Stiffness = Stiffness;
	Parms.Damping = Damping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VehicleSystemPlugin.VehicleSystemBase.AVS_Tick
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AVehicleSystemBase::AVS_Tick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleSystemBase", "AVS_Tick");

	Params::VehicleSystemBase_AVS_Tick Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VehicleSystemPlugin.VehicleSystemBase.BlueprintDebugMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                           Text                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AVehicleSystemBase::BlueprintDebugMessage(const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleSystemBase", "BlueprintDebugMessage");

	Params::VehicleSystemBase_BlueprintDebugMessage Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function VehicleSystemPlugin.VehicleSystemBase.Client_ReceiveNetState
// (Net, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// struct FNetState                        State                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)

void AVehicleSystemBase::Client_ReceiveNetState(const struct FNetState& State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleSystemBase", "Client_ReceiveNetState");

	Params::VehicleSystemBase_Client_ReceiveNetState Parms{};

	Parms.State = std::move(State);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VehicleSystemPlugin.VehicleSystemBase.GetSteeringFromCurve
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                                   Speed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AVehicleSystemBase::GetSteeringFromCurve(float Speed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleSystemBase", "GetSteeringFromCurve");

	Params::VehicleSystemBase_GetSteeringFromCurve Parms{};

	Parms.Speed = Speed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VehicleSystemPlugin.VehicleSystemBase.Multicast_ChangedOwner
// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)

void AVehicleSystemBase::Multicast_ChangedOwner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleSystemBase", "Multicast_ChangedOwner");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VehicleSystemPlugin.VehicleSystemBase.NetStateSend
// (Final, Native, Public)

void AVehicleSystemBase::NetStateSend()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleSystemBase", "NetStateSend");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VehicleSystemPlugin.VehicleSystemBase.OnRep_RestState
// (Final, Native, Public)

void AVehicleSystemBase::OnRep_RestState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleSystemBase", "OnRep_RestState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VehicleSystemPlugin.VehicleSystemBase.OwnerChanged
// (Event, Public, BlueprintEvent)

void AVehicleSystemBase::OwnerChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleSystemBase", "OwnerChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VehicleSystemPlugin.VehicleSystemBase.Server_ReceiveNetState
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FNetState                        State                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)

void AVehicleSystemBase::Server_ReceiveNetState(const struct FNetState& State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleSystemBase", "Server_ReceiveNetState");

	Params::VehicleSystemBase_Server_ReceiveNetState Parms{};

	Parms.State = std::move(State);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VehicleSystemPlugin.VehicleSystemBase.Server_ReceiveRestState
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FNetState                        State                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)

void AVehicleSystemBase::Server_ReceiveRestState(const struct FNetState& State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleSystemBase", "Server_ReceiveRestState");

	Params::VehicleSystemBase_Server_ReceiveRestState Parms{};

	Parms.State = std::move(State);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VehicleSystemPlugin.VehicleSystemBase.SetShouldSyncWithServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ShouldSync                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AVehicleSystemBase::SetShouldSyncWithServer(bool ShouldSync)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleSystemBase", "SetShouldSyncWithServer");

	Params::VehicleSystemBase_SetShouldSyncWithServer Parms{};

	Parms.ShouldSync = ShouldSync;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VehicleSystemPlugin.VehicleSystemBase.SyncTrailerRotation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AVehicleSystemBase::SyncTrailerRotation(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleSystemBase", "SyncTrailerRotation");

	Params::VehicleSystemBase_SyncTrailerRotation Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VehicleSystemPlugin.VehicleSystemBase.TeleportWheels
// (Event, Public, BlueprintEvent)

void AVehicleSystemBase::TeleportWheels()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleSystemBase", "TeleportWheels");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VehicleSystemPlugin.VehicleSystemFunctions.GetBoneBounds
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*              Target                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             BoneName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          Origin                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UVehicleSystemFunctions::GetBoneBounds(class UPrimitiveComponent* Target, class FName BoneName, struct FVector* Origin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VehicleSystemFunctions", "GetBoneBounds");

	Params::VehicleSystemFunctions_GetBoneBounds Parms{};

	Parms.Target = Target;
	Parms.BoneName = BoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Origin != nullptr)
		*Origin = std::move(Parms.Origin);

	return Parms.ReturnValue;
}


// Function VehicleSystemPlugin.VehicleSystemFunctions.GetMeshCenterOfMass
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*              Target                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             BoneName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UVehicleSystemFunctions::GetMeshCenterOfMass(class UPrimitiveComponent* Target, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VehicleSystemFunctions", "GetMeshCenterOfMass");

	Params::VehicleSystemFunctions_GetMeshCenterOfMass Parms{};

	Parms.Target = Target;
	Parms.BoneName = BoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VehicleSystemPlugin.VehicleSystemFunctions.GetMeshDiameter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*              Target                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             BoneName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVehicleSystemFunctions::GetMeshDiameter(class UPrimitiveComponent* Target, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VehicleSystemFunctions", "GetMeshDiameter");

	Params::VehicleSystemFunctions_GetMeshDiameter Parms{};

	Parms.Target = Target;
	Parms.BoneName = BoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VehicleSystemPlugin.VehicleSystemFunctions.GetMeshRadius
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*              Target                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             BoneName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVehicleSystemFunctions::GetMeshRadius(class UPrimitiveComponent* Target, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VehicleSystemFunctions", "GetMeshRadius");

	Params::VehicleSystemFunctions_GetMeshRadius Parms{};

	Parms.Target = Target;
	Parms.BoneName = BoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VehicleSystemPlugin.VehicleSystemFunctions.GetPluginVersion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVehicleSystemFunctions::GetPluginVersion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VehicleSystemFunctions", "GetPluginVersion");

	Params::VehicleSystemFunctions_GetPluginVersion Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VehicleSystemPlugin.VehicleSystemFunctions.PrintToScreenWithTag
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                           InString                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                     TextColor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Duration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Tag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVehicleSystemFunctions::PrintToScreenWithTag(const class FString& InString, const struct FLinearColor& TextColor, float Duration, int32 Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VehicleSystemFunctions", "PrintToScreenWithTag");

	Params::VehicleSystemFunctions_PrintToScreenWithTag Parms{};

	Parms.InString = std::move(InString);
	Parms.TextColor = std::move(TextColor);
	Parms.Duration = Duration;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VehicleSystemPlugin.VehicleSystemFunctions.RunningInEditor_World
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVehicleSystemFunctions::RunningInEditor_World(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VehicleSystemFunctions", "RunningInEditor_World");

	Params::VehicleSystemFunctions_RunningInEditor_World Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VehicleSystemPlugin.VehicleSystemFunctions.RunningInGame_World
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVehicleSystemFunctions::RunningInGame_World(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VehicleSystemFunctions", "RunningInGame_World");

	Params::VehicleSystemFunctions_RunningInGame_World Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VehicleSystemPlugin.VehicleSystemFunctions.RunningInPIE_World
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVehicleSystemFunctions::RunningInPIE_World(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VehicleSystemFunctions", "RunningInPIE_World");

	Params::VehicleSystemFunctions_RunningInPIE_World Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VehicleSystemPlugin.VehicleSystemFunctions.SetAngularDamping
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*              Target                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InDamping                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             BoneName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVehicleSystemFunctions::SetAngularDamping(class UPrimitiveComponent* Target, float InDamping, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VehicleSystemFunctions", "SetAngularDamping");

	Params::VehicleSystemFunctions_SetAngularDamping Parms{};

	Parms.Target = Target;
	Parms.InDamping = InDamping;
	Parms.BoneName = BoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VehicleSystemPlugin.VehicleSystemFunctions.SetLinearDamping
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*              Target                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InDamping                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             BoneName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVehicleSystemFunctions::SetLinearDamping(class UPrimitiveComponent* Target, float InDamping, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VehicleSystemFunctions", "SetLinearDamping");

	Params::VehicleSystemFunctions_SetLinearDamping Parms{};

	Parms.Target = Target;
	Parms.InDamping = InDamping;
	Parms.BoneName = BoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

