#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SandComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SandComponent.BP_SandComponent_C
// 0x0020 (0x0230 - 0x0210)
class UBP_SandComponent_C final : public USceneComponent
{
public:
	uint8                                         Pad_571C[0x8];                                     // 0x0208(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_TrailsManager_C*                    TrailManagerInstance;                              // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Hardness;                                          // 0x0220(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ReceivingActorsTag;                                // 0x0224(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_SandComponent(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SandComponent_C">();
	}
	static class UBP_SandComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SandComponent_C>();
	}
};
static_assert(alignof(UBP_SandComponent_C) == 0x000010, "Wrong alignment on UBP_SandComponent_C");
static_assert(sizeof(UBP_SandComponent_C) == 0x000230, "Wrong size on UBP_SandComponent_C");
static_assert(offsetof(UBP_SandComponent_C, UberGraphFrame) == 0x000210, "Member 'UBP_SandComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SandComponent_C, TrailManagerInstance) == 0x000218, "Member 'UBP_SandComponent_C::TrailManagerInstance' has a wrong offset!");
static_assert(offsetof(UBP_SandComponent_C, Hardness) == 0x000220, "Member 'UBP_SandComponent_C::Hardness' has a wrong offset!");
static_assert(offsetof(UBP_SandComponent_C, ReceivingActorsTag) == 0x000224, "Member 'UBP_SandComponent_C::ReceivingActorsTag' has a wrong offset!");

}

