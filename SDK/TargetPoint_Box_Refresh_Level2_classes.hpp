#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TargetPoint_Box_Refresh_Level2

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TargetPoint_Box_Refresh_Level2.TargetPoint_Box_Refresh_Level2_C
// 0x0008 (0x0240 - 0x0238)
class ATargetPoint_Box_Refresh_Level2_C final : public ATargetPoint
{
public:
	class USkeletalMeshComponent*                 SM_mofang_zqm_skin;                                // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TargetPoint_Box_Refresh_Level2_C">();
	}
	static class ATargetPoint_Box_Refresh_Level2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATargetPoint_Box_Refresh_Level2_C>();
	}
};
static_assert(alignof(ATargetPoint_Box_Refresh_Level2_C) == 0x000008, "Wrong alignment on ATargetPoint_Box_Refresh_Level2_C");
static_assert(sizeof(ATargetPoint_Box_Refresh_Level2_C) == 0x000240, "Wrong size on ATargetPoint_Box_Refresh_Level2_C");
static_assert(offsetof(ATargetPoint_Box_Refresh_Level2_C, SM_mofang_zqm_skin) == 0x000238, "Member 'ATargetPoint_Box_Refresh_Level2_C::SM_mofang_zqm_skin' has a wrong offset!");

}

