#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_AzimuthController

#include "Basic.hpp"

#include "QRSL_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_AzimuthController.UI_AzimuthController_C
// 0x0000 (0x08B0 - 0x08B0)
class UUI_AzimuthController_C final : public UQRSLUI_AzimuthController
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_AzimuthController_C">();
	}
	static class UUI_AzimuthController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_AzimuthController_C>();
	}
};
static_assert(alignof(UUI_AzimuthController_C) == 0x000008, "Wrong alignment on UUI_AzimuthController_C");
static_assert(sizeof(UUI_AzimuthController_C) == 0x0008B0, "Wrong size on UUI_AzimuthController_C");

}

