#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Effect_SpecialItem_024_Change

#include "Basic.hpp"

#include "GCBase_Buff_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Effect_SpecialItem_024_Change.Effect_SpecialItem_024_Change_C
// 0x0000 (0x04C8 - 0x04C8)
class AEffect_SpecialItem_024_Change_C final : public AGCBase_Buff_C
{
public:
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Effect_SpecialItem_024_Change_C">();
	}
	static class AEffect_SpecialItem_024_Change_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEffect_SpecialItem_024_Change_C>();
	}
};
static_assert(alignof(AEffect_SpecialItem_024_Change_C) == 0x000008, "Wrong alignment on AEffect_SpecialItem_024_Change_C");
static_assert(sizeof(AEffect_SpecialItem_024_Change_C) == 0x0004C8, "Wrong size on AEffect_SpecialItem_024_Change_C");

}

