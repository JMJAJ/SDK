#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MeleeBase

#include "Basic.hpp"

#include "GA_HottaSkillBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_MeleeBase.GA_MeleeBase_C
// 0x0020 (0x0D00 - 0x0CE0)
#pragma pack(push, 0x1)
class alignas(0x10) UGA_MeleeBase_C : public UGA_HottaSkillBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_MeleeBase_C;                     // 0x0CE0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   StartSectionName;                                  // 0x0CE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AttributeModifierFailedSection;                    // 0x0CF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_MeleeBase(int32 EntryPoint);
	void BluePrintOnActivateAbility();
	void K2_TriggerJumpSection(class FName JumpSectionName);
	void K2_ActivateAbility();
	void OnCompleted_6B9DADB041F597767DE29FBECF116D2D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_6B9DADB041F597767DE29FBECF116D2D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_6B9DADB041F597767DE29FBECF116D2D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_6B9DADB041F597767DE29FBECF116D2D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void EventReceived_6B9DADB041F597767DE29FBECF116D2D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnTriggerNextSection_083A7EA8447456953A6F0D85D4492C34(class FName NextSectionName);
	void OnRelease_86AB8D4C4FC2DA9EFBC5E8AE3C40769C(float TimeHeld, bool bAuto);
	void OnCompleted_0B203062449BD26DFF4FD78DFD131D80(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_0B203062449BD26DFF4FD78DFD131D80(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_0B203062449BD26DFF4FD78DFD131D80(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_0B203062449BD26DFF4FD78DFD131D80(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void EventReceived_0B203062449BD26DFF4FD78DFD131D80(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void TriggerMontageEvent(const struct FGameplayTag& ContainerTag, const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_MeleeBase_C">();
	}
	static class UGA_MeleeBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_MeleeBase_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(UGA_MeleeBase_C) == 0x000010, "Wrong alignment on UGA_MeleeBase_C");
static_assert(sizeof(UGA_MeleeBase_C) == 0x000D00, "Wrong size on UGA_MeleeBase_C");
static_assert(offsetof(UGA_MeleeBase_C, UberGraphFrame_GA_MeleeBase_C) == 0x000CE0, "Member 'UGA_MeleeBase_C::UberGraphFrame_GA_MeleeBase_C' has a wrong offset!");
static_assert(offsetof(UGA_MeleeBase_C, StartSectionName) == 0x000CE8, "Member 'UGA_MeleeBase_C::StartSectionName' has a wrong offset!");
static_assert(offsetof(UGA_MeleeBase_C, AttributeModifierFailedSection) == 0x000CF0, "Member 'UGA_MeleeBase_C::AttributeModifierFailedSection' has a wrong offset!");

}

