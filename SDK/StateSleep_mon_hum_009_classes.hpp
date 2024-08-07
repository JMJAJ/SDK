#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StateSleep_mon_hum_009

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StateSleep_mon_hum_009.StateSleep_mon_hum_009_C
// 0x0008 (0x0230 - 0x0228)
class UStateSleep_mon_hum_009_C final : public UHottaAIIdleStateBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_StateSleep_mon_hum_009(int32 EntryPoint);
	void BPOnBeginState();
	void BPOnEndState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StateSleep_mon_hum_009_C">();
	}
	static class UStateSleep_mon_hum_009_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStateSleep_mon_hum_009_C>();
	}
};
static_assert(alignof(UStateSleep_mon_hum_009_C) == 0x000008, "Wrong alignment on UStateSleep_mon_hum_009_C");
static_assert(sizeof(UStateSleep_mon_hum_009_C) == 0x000230, "Wrong size on UStateSleep_mon_hum_009_C");
static_assert(offsetof(UStateSleep_mon_hum_009_C, UberGraphFrame) == 0x000228, "Member 'UStateSleep_mon_hum_009_C::UberGraphFrame' has a wrong offset!");

}

