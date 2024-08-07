#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ChatMsgContainer

#include "Basic.hpp"

#include "QRSL_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ChatMsgContainer.UI_ChatMsgContainer_C
// 0x0008 (0x0978 - 0x0970)
class UUI_ChatMsgContainer_C final : public UQRSLUI_ChatMsgContainer
{
public:
	class UImage*                                 Image_418;                                         // 0x0970(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ChatMsgContainer_C">();
	}
	static class UUI_ChatMsgContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ChatMsgContainer_C>();
	}
};
static_assert(alignof(UUI_ChatMsgContainer_C) == 0x000008, "Wrong alignment on UUI_ChatMsgContainer_C");
static_assert(sizeof(UUI_ChatMsgContainer_C) == 0x000978, "Wrong size on UUI_ChatMsgContainer_C");
static_assert(offsetof(UUI_ChatMsgContainer_C, Image_418) == 0x000970, "Member 'UUI_ChatMsgContainer_C::Image_418' has a wrong offset!");

}

