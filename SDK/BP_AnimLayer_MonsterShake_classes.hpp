#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimLayer_MonsterShake

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BP_AnimLayer_MonsterShake.BP_AnimLayer_MonsterShake_C
// 0x0000 (0x0028 - 0x0028)
class IBP_AnimLayer_MonsterShake_C final : public IAnimLayerInterface
{
public:
	void BoneShakeLayer(const struct FPoseLink& InPose, float PushScale, float BlendAlpha, struct FPoseLink* Param_BoneShakeLayer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AnimLayer_MonsterShake_C">();
	}
	static class IBP_AnimLayer_MonsterShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBP_AnimLayer_MonsterShake_C>();
	}
};
static_assert(alignof(IBP_AnimLayer_MonsterShake_C) == 0x000008, "Wrong alignment on IBP_AnimLayer_MonsterShake_C");
static_assert(sizeof(IBP_AnimLayer_MonsterShake_C) == 0x000028, "Wrong size on IBP_AnimLayer_MonsterShake_C");

}

