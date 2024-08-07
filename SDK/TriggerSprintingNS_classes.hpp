#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TriggerSprintingNS

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TriggerSprintingNS.TriggerSprintingNS_C
// 0x0000 (0x0030 - 0x0030)
class UTriggerSprintingNS_C final : public UAnimNotifyState
{
public:
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TriggerSprintingNS_C">();
	}
	static class UTriggerSprintingNS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTriggerSprintingNS_C>();
	}
};
static_assert(alignof(UTriggerSprintingNS_C) == 0x000008, "Wrong alignment on UTriggerSprintingNS_C");
static_assert(sizeof(UTriggerSprintingNS_C) == 0x000030, "Wrong size on UTriggerSprintingNS_C");

}

