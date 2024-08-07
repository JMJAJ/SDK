#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mon_hum_005_hummer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MonsterCharacterBP_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass mon_hum_005_hummer.mon_hum_005_hummer_C
// 0x0010 (0x3B40 - 0x3B30)
class AMon_hum_005_hummer_C : public AMonsterCharacterBP_Base_C
{
public:
	uint8                                         Pad_582D[0x4];                                     // 0x3B24(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Mon_hum_005_hummer_C;               // 0x3B28(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsSleep;                                           // 0x3B30(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_mon_hum_005_hummer(int32 EntryPoint);
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"mon_hum_005_hummer_C">();
	}
	static class AMon_hum_005_hummer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMon_hum_005_hummer_C>();
	}
};
static_assert(alignof(AMon_hum_005_hummer_C) == 0x000010, "Wrong alignment on AMon_hum_005_hummer_C");
static_assert(sizeof(AMon_hum_005_hummer_C) == 0x003B40, "Wrong size on AMon_hum_005_hummer_C");
static_assert(offsetof(AMon_hum_005_hummer_C, UberGraphFrame_Mon_hum_005_hummer_C) == 0x003B28, "Member 'AMon_hum_005_hummer_C::UberGraphFrame_Mon_hum_005_hummer_C' has a wrong offset!");
static_assert(offsetof(AMon_hum_005_hummer_C, IsSleep) == 0x003B30, "Member 'AMon_hum_005_hummer_C::IsSleep' has a wrong offset!");

}

