#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buff_Artifact_SR004_Passivity

#include "Basic.hpp"

#include "GE_MeleeBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Buff_Artifact_SR004_Passivity.Buff_Artifact_SR004_Passivity_C
// 0x0000 (0x1050 - 0x1050)
class UBuff_Artifact_SR004_Passivity_C final : public UGE_MeleeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Buff_Artifact_SR004_Passivity_C">();
	}
	static class UBuff_Artifact_SR004_Passivity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuff_Artifact_SR004_Passivity_C>();
	}
};
static_assert(alignof(UBuff_Artifact_SR004_Passivity_C) == 0x000008, "Wrong alignment on UBuff_Artifact_SR004_Passivity_C");
static_assert(sizeof(UBuff_Artifact_SR004_Passivity_C) == 0x001050, "Wrong size on UBuff_Artifact_SR004_Passivity_C");

}

