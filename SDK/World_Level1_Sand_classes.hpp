#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: World_Level1_Sand

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass World_Level1_Sand.World_Level1_Sand_C
// 0x0020 (0x05D0 - 0x05B0)
class AWorld_Level1_Sand_C final : public ASceneParticleActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x05B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ____0__Direction_0694069F4A9158E8AEBE139F6643749B; // 0x05C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59CE[0x7];                                     // 0x05C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     __t_0;                                             // 0x05C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void __t_0__FinishedFunc();
	void __t_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_World_Level1_Sand(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"World_Level1_Sand_C">();
	}
	static class AWorld_Level1_Sand_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWorld_Level1_Sand_C>();
	}
};
static_assert(alignof(AWorld_Level1_Sand_C) == 0x000010, "Wrong alignment on AWorld_Level1_Sand_C");
static_assert(sizeof(AWorld_Level1_Sand_C) == 0x0005D0, "Wrong size on AWorld_Level1_Sand_C");
static_assert(offsetof(AWorld_Level1_Sand_C, UberGraphFrame) == 0x0005B0, "Member 'AWorld_Level1_Sand_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWorld_Level1_Sand_C, ParticleSystem) == 0x0005B8, "Member 'AWorld_Level1_Sand_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(AWorld_Level1_Sand_C, ____0__Direction_0694069F4A9158E8AEBE139F6643749B) == 0x0005C0, "Member 'AWorld_Level1_Sand_C::____0__Direction_0694069F4A9158E8AEBE139F6643749B' has a wrong offset!");
static_assert(offsetof(AWorld_Level1_Sand_C, __t_0) == 0x0005C8, "Member 'AWorld_Level1_Sand_C::__t_0' has a wrong offset!");

}

