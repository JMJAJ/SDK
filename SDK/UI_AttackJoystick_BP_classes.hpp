#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_AttackJoystick_BP

#include "Basic.hpp"

#include "QRSL_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_AttackJoystick_BP.UI_AttackJoystick_BP_C
// 0x0000 (0x0890 - 0x0890)
class UUI_AttackJoystick_BP_C final : public UQRSLUI_AttackJoyStick
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_AttackJoystick_BP_C">();
	}
	static class UUI_AttackJoystick_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_AttackJoystick_BP_C>();
	}
};
static_assert(alignof(UUI_AttackJoystick_BP_C) == 0x000008, "Wrong alignment on UUI_AttackJoystick_BP_C");
static_assert(sizeof(UUI_AttackJoystick_BP_C) == 0x000890, "Wrong size on UUI_AttackJoystick_BP_C");

}

