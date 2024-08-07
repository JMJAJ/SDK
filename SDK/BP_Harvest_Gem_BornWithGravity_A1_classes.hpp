#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Harvest_Gem_BornWithGravity_A1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Harvest_Gem_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Harvest_Gem_BornWithGravity_A1.BP_Harvest_Gem_BornWithGravity_A1_C
// 0x0030 (0x09C0 - 0x0990)
class ABP_Harvest_Gem_BornWithGravity_A1_C final : public ABP_Harvest_Gem_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Harvest_Gem_BornWithGravity_A1_C; // 0x0990(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class UParticleSystem>         Pt;                                                // 0x0998(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Harvest_Gem_BornWithGravity_A1(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Harvest_Gem_BornWithGravity_A1_C">();
	}
	static class ABP_Harvest_Gem_BornWithGravity_A1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Harvest_Gem_BornWithGravity_A1_C>();
	}
};
static_assert(alignof(ABP_Harvest_Gem_BornWithGravity_A1_C) == 0x000010, "Wrong alignment on ABP_Harvest_Gem_BornWithGravity_A1_C");
static_assert(sizeof(ABP_Harvest_Gem_BornWithGravity_A1_C) == 0x0009C0, "Wrong size on ABP_Harvest_Gem_BornWithGravity_A1_C");
static_assert(offsetof(ABP_Harvest_Gem_BornWithGravity_A1_C, UberGraphFrame_BP_Harvest_Gem_BornWithGravity_A1_C) == 0x000990, "Member 'ABP_Harvest_Gem_BornWithGravity_A1_C::UberGraphFrame_BP_Harvest_Gem_BornWithGravity_A1_C' has a wrong offset!");
static_assert(offsetof(ABP_Harvest_Gem_BornWithGravity_A1_C, Pt) == 0x000998, "Member 'ABP_Harvest_Gem_BornWithGravity_A1_C::Pt' has a wrong offset!");

}

