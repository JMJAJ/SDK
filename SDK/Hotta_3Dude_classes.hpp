#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hotta_3Dude

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Hotta_3Dude.Hotta_3Dude_C
// 0x0000 (0x0408 - 0x0408)
class AHotta_3Dude_C final : public AHottaAISpawnManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Hotta_3Dude_C">();
	}
	static class AHotta_3Dude_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHotta_3Dude_C>();
	}
};
static_assert(alignof(AHotta_3Dude_C) == 0x000008, "Wrong alignment on AHotta_3Dude_C");
static_assert(sizeof(AHotta_3Dude_C) == 0x000408, "Wrong size on AHotta_3Dude_C");

}

