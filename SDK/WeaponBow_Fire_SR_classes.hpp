#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponBow_Fire_SR

#include "Basic.hpp"

#include "WeaponbowBPFire_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WeaponBow_Fire_SR.WeaponBow_Fire_SR_C
// 0x0000 (0x1550 - 0x1550)
class AWeaponBow_Fire_SR_C final : public AWeaponbowBPFire_C
{
public:
	class UBoxComponent*                          CatchFireBox_0;                                    // 0x1548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void CreatColorPoint(const struct FLinearColor& Color, float ColorIntensity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponBow_Fire_SR_C">();
	}
	static class AWeaponBow_Fire_SR_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWeaponBow_Fire_SR_C>();
	}
};
static_assert(alignof(AWeaponBow_Fire_SR_C) == 0x000010, "Wrong alignment on AWeaponBow_Fire_SR_C");
static_assert(sizeof(AWeaponBow_Fire_SR_C) == 0x001550, "Wrong size on AWeaponBow_Fire_SR_C");
static_assert(offsetof(AWeaponBow_Fire_SR_C, CatchFireBox_0) == 0x001548, "Member 'AWeaponBow_Fire_SR_C::CatchFireBox_0' has a wrong offset!");

}

