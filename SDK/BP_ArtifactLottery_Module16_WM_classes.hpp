#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ArtifactLottery_Module16_WM

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ArtifactLottery_Module16_WM.BP_ArtifactLottery_Module16_WM_C
// 0x0008 (0x0250 - 0x0248)
class UBP_ArtifactLottery_Module16_WM_C final : public UHottaLotteryModuleBase
{
public:
	bool                                          IsUPLottery;                                       // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ArtifactLottery_Module16_WM_C">();
	}
	static class UBP_ArtifactLottery_Module16_WM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ArtifactLottery_Module16_WM_C>();
	}
};
static_assert(alignof(UBP_ArtifactLottery_Module16_WM_C) == 0x000008, "Wrong alignment on UBP_ArtifactLottery_Module16_WM_C");
static_assert(sizeof(UBP_ArtifactLottery_Module16_WM_C) == 0x000250, "Wrong size on UBP_ArtifactLottery_Module16_WM_C");
static_assert(offsetof(UBP_ArtifactLottery_Module16_WM_C, IsUPLottery) == 0x000248, "Member 'UBP_ArtifactLottery_Module16_WM_C::IsUPLottery' has a wrong offset!");

}

