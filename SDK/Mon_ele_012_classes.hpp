#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mon_ele_012

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mon_lift_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass mon_ele_012.mon_ele_012_C
// 0x0020 (0x3BA0 - 0x3B80)
class AMon_ele_012_C final : public AMon_lift_base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Mon_ele_012_C;                      // 0x3B80(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         ThrowOn;                                           // 0x3B88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DF5[0x4];                                     // 0x3B8C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaPlayerCharacter*                  Player;                                            // 0x3B90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_mon_ele_012(int32 EntryPoint);
	void ReceiveBeginPlay();
	void BPOnThrow(class AHottaPlayerCharacter* ByPlayer);
	void BPOnThrowingHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"mon_ele_012_C">();
	}
	static class AMon_ele_012_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMon_ele_012_C>();
	}
};
static_assert(alignof(AMon_ele_012_C) == 0x000010, "Wrong alignment on AMon_ele_012_C");
static_assert(sizeof(AMon_ele_012_C) == 0x003BA0, "Wrong size on AMon_ele_012_C");
static_assert(offsetof(AMon_ele_012_C, UberGraphFrame_Mon_ele_012_C) == 0x003B80, "Member 'AMon_ele_012_C::UberGraphFrame_Mon_ele_012_C' has a wrong offset!");
static_assert(offsetof(AMon_ele_012_C, ThrowOn) == 0x003B88, "Member 'AMon_ele_012_C::ThrowOn' has a wrong offset!");
static_assert(offsetof(AMon_ele_012_C, Player) == 0x003B90, "Member 'AMon_ele_012_C::Player' has a wrong offset!");

}

