#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SendAttackTargNS

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SendAttackTargNS.SendAttackTargNS_C
// 0x0010 (0x0048 - 0x0038)
class USendAttackTargNS_C final : public UAnimNotifyState_SendAttackTarget
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0038(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOwner;                                           // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Prediction;                                        // 0x0041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SendAttackTargNS_C">();
	}
	static class USendAttackTargNS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USendAttackTargNS_C>();
	}
};
static_assert(alignof(USendAttackTargNS_C) == 0x000008, "Wrong alignment on USendAttackTargNS_C");
static_assert(sizeof(USendAttackTargNS_C) == 0x000048, "Wrong size on USendAttackTargNS_C");
static_assert(offsetof(USendAttackTargNS_C, EventTag) == 0x000038, "Member 'USendAttackTargNS_C::EventTag' has a wrong offset!");
static_assert(offsetof(USendAttackTargNS_C, IsOwner) == 0x000040, "Member 'USendAttackTargNS_C::IsOwner' has a wrong offset!");
static_assert(offsetof(USendAttackTargNS_C, Prediction) == 0x000041, "Member 'USendAttackTargNS_C::Prediction' has a wrong offset!");

}

