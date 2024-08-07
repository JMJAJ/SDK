#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FPlayerBowEvadeFire

#include "Basic.hpp"

#include "GA_SpawnProjectileBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_FPlayerBowEvadeFire.GA_FPlayerBowEvadeFire_C
// 0x0000 (0x0CF0 - 0x0CF0)
class UGA_FPlayerBowEvadeFire_C final : public UGA_SpawnProjectileBase_C
{
public:
	class FName K2_GetCustomStartSection(class AHottaPlayerCharacter* Player, class UAnimMontage* Montage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_FPlayerBowEvadeFire_C">();
	}
	static class UGA_FPlayerBowEvadeFire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FPlayerBowEvadeFire_C>();
	}
};
static_assert(alignof(UGA_FPlayerBowEvadeFire_C) == 0x000010, "Wrong alignment on UGA_FPlayerBowEvadeFire_C");
static_assert(sizeof(UGA_FPlayerBowEvadeFire_C) == 0x000CF0, "Wrong size on UGA_FPlayerBowEvadeFire_C");

}

