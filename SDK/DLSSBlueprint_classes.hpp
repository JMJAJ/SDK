#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DLSSBlueprint

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "DLSSBlueprint_structs.hpp"


namespace SDK
{

// Class DLSSBlueprint.DLSSLibrary
// 0x0000 (0x0028 - 0x0028)
class UDLSSLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void EnableDLAA(bool bEnabled);
	static EUDLSSMode GetDefaultDLSSMode();
	static void GetDLSSMinimumDriverVersion(int32* MinDriverVersionMajor, int32* MinDriverVersionMinor);
	static EUDLSSMode GetDLSSMode();
	static void GetDLSSModeInformation(EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool* bIsSupported, float* OptimalScreenPercentage, bool* bIsFixedScreenPercentage, float* MinScreenPercentage, float* MaxScreenPercentage, float* OptimalSharpness);
	static void GetDLSSScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage);
	static float GetDLSSSharpness();
	static TArray<EUDLSSMode> GetSupportedDLSSModes();
	static bool IsDLAAEnabled();
	static bool IsDLSSModeSupported(EUDLSSMode DLSSMode);
	static bool IsDLSSSupported();
	static EUDLSSSupport QueryDLSSSupport();
	static void SetDLSSMode(EUDLSSMode DLSSMode);
	static void SetDLSSSharpness(float Sharpness);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DLSSLibrary">();
	}
	static class UDLSSLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDLSSLibrary>();
	}
};
static_assert(alignof(UDLSSLibrary) == 0x000008, "Wrong alignment on UDLSSLibrary");
static_assert(sizeof(UDLSSLibrary) == 0x000028, "Wrong size on UDLSSLibrary");

}

