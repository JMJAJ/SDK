#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QRSLGameInstance_BP

#include "Basic.hpp"

#include "QRSL_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass QRSLGameInstance_BP.QRSLGameInstance_BP_C
// 0x0000 (0x0378 - 0x0378)
class UQRSLGameInstance_BP_C final : public UQRSLGameInstance
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QRSLGameInstance_BP_C">();
	}
	static class UQRSLGameInstance_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQRSLGameInstance_BP_C>();
	}
};
static_assert(alignof(UQRSLGameInstance_BP_C) == 0x000008, "Wrong alignment on UQRSLGameInstance_BP_C");
static_assert(sizeof(UQRSLGameInstance_BP_C) == 0x000378, "Wrong size on UQRSLGameInstance_BP_C");

}

