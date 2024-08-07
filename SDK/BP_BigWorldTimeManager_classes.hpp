#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BigWorldTimeManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HottaFramework_structs.hpp"
#include "QRSL_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BigWorldTimeManager.BP_BigWorldTimeManager_C
// 0x0010 (0x0310 - 0x0300)
class ABP_BigWorldTimeManager_C final : public AQRSLBigWorldTimeManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void UpdateRTPC(int32 InTimeHour);
	void ExecuteUbergraph_BP_BigWorldTimeManager(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BigWorldTimeManager_C">();
	}
	static class ABP_BigWorldTimeManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BigWorldTimeManager_C>();
	}
};
static_assert(alignof(ABP_BigWorldTimeManager_C) == 0x000008, "Wrong alignment on ABP_BigWorldTimeManager_C");
static_assert(sizeof(ABP_BigWorldTimeManager_C) == 0x000310, "Wrong size on ABP_BigWorldTimeManager_C");
static_assert(offsetof(ABP_BigWorldTimeManager_C, UberGraphFrame) == 0x000300, "Member 'ABP_BigWorldTimeManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BigWorldTimeManager_C, DefaultSceneRoot) == 0x000308, "Member 'ABP_BigWorldTimeManager_C::DefaultSceneRoot' has a wrong offset!");

}

