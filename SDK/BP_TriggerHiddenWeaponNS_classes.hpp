#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TriggerHiddenWeaponNS

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "HottaFramework_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TriggerHiddenWeaponNS.BP_TriggerHiddenWeaponNS_C
// 0x0000 (0x0030 - 0x0030)
class UBP_TriggerHiddenWeaponNS_C final : public UAnimNotifyState
{
public:
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TriggerHiddenWeaponNS_C">();
	}
	static class UBP_TriggerHiddenWeaponNS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TriggerHiddenWeaponNS_C>();
	}
};
static_assert(alignof(UBP_TriggerHiddenWeaponNS_C) == 0x000008, "Wrong alignment on UBP_TriggerHiddenWeaponNS_C");
static_assert(sizeof(UBP_TriggerHiddenWeaponNS_C) == 0x000030, "Wrong size on UBP_TriggerHiddenWeaponNS_C");

}

