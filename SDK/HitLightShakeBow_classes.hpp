#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HitLightShakeBow

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HitLightShakeBow.HitLightShakeBow_C
// 0x0000 (0x0180 - 0x0180)
class UHitLightShakeBow_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HitLightShakeBow_C">();
	}
	static class UHitLightShakeBow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHitLightShakeBow_C>();
	}
};
static_assert(alignof(UHitLightShakeBow_C) == 0x000010, "Wrong alignment on UHitLightShakeBow_C");
static_assert(sizeof(UHitLightShakeBow_C) == 0x000180, "Wrong size on UHitLightShakeBow_C");

}

