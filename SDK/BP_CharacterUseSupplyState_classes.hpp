#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterUseSupplyState

#include "Basic.hpp"

#include "QRSL_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharacterUseSupplyState.BP_CharacterUseSupplyState_C
// 0x0000 (0x01E8 - 0x01E8)
class UBP_CharacterUseSupplyState_C final : public UQRSLCharacterUseSupplyState
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharacterUseSupplyState_C">();
	}
	static class UBP_CharacterUseSupplyState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CharacterUseSupplyState_C>();
	}
};
static_assert(alignof(UBP_CharacterUseSupplyState_C) == 0x000008, "Wrong alignment on UBP_CharacterUseSupplyState_C");
static_assert(sizeof(UBP_CharacterUseSupplyState_C) == 0x0001E8, "Wrong size on UBP_CharacterUseSupplyState_C");

}

