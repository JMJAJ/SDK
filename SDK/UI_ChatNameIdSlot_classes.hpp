#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ChatNameIdSlot

#include "Basic.hpp"

#include "QRSL_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ChatNameIdSlot.UI_ChatNameIdSlot_C
// 0x0000 (0x0BE0 - 0x0BE0)
class UUI_ChatNameIdSlot_C final : public UQRSLUI_NameGridSlot
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ChatNameIdSlot_C">();
	}
	static class UUI_ChatNameIdSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ChatNameIdSlot_C>();
	}
};
static_assert(alignof(UUI_ChatNameIdSlot_C) == 0x000008, "Wrong alignment on UUI_ChatNameIdSlot_C");
static_assert(sizeof(UUI_ChatNameIdSlot_C) == 0x000BE0, "Wrong size on UUI_ChatNameIdSlot_C");

}

