#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponSpear_Thu_SSR_OS

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WeaponSpear_Thu_SSR_OS.WeaponSpear_Thu_SSR_OS_C.CreatPointLight
// 0x0014 (0x0014 - 0x0000)
struct WeaponSpear_Thu_SSR_OS_C_CreatPointLight final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ColorIntensity;                                    // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSpear_Thu_SSR_OS_C_CreatPointLight) == 0x000004, "Wrong alignment on WeaponSpear_Thu_SSR_OS_C_CreatPointLight");
static_assert(sizeof(WeaponSpear_Thu_SSR_OS_C_CreatPointLight) == 0x000014, "Wrong size on WeaponSpear_Thu_SSR_OS_C_CreatPointLight");
static_assert(offsetof(WeaponSpear_Thu_SSR_OS_C_CreatPointLight, Color) == 0x000000, "Member 'WeaponSpear_Thu_SSR_OS_C_CreatPointLight::Color' has a wrong offset!");
static_assert(offsetof(WeaponSpear_Thu_SSR_OS_C_CreatPointLight, ColorIntensity) == 0x000010, "Member 'WeaponSpear_Thu_SSR_OS_C_CreatPointLight::ColorIntensity' has a wrong offset!");

}

