#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ActorWidgetText

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ActorWidgetText.UI_ActorWidgetText_C
// 0x0000 (0x0800 - 0x0800)
class UUI_ActorWidgetText_C final : public UHottaActorWidgetText
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ActorWidgetText_C">();
	}
	static class UUI_ActorWidgetText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ActorWidgetText_C>();
	}
};
static_assert(alignof(UUI_ActorWidgetText_C) == 0x000008, "Wrong alignment on UUI_ActorWidgetText_C");
static_assert(sizeof(UUI_ActorWidgetText_C) == 0x000800, "Wrong size on UUI_ActorWidgetText_C");

}

