#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SocialForm

#include "Basic.hpp"

#include "QRSL_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_SocialForm.UI_SocialForm_C
// 0x0018 (0x08A0 - 0x0888)
class UUI_SocialForm_C final : public UQRSLUI_SocialForm
{
public:
	class USafeZone*                              SafeZone_0;                                        // 0x0888(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RedPointWidget_C*                   UI_RedPointWidget;                                 // 0x0890(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RedPointWidget_C*                   UI_RedPointWidget_181;                             // 0x0898(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_SocialForm_C">();
	}
	static class UUI_SocialForm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_SocialForm_C>();
	}
};
static_assert(alignof(UUI_SocialForm_C) == 0x000008, "Wrong alignment on UUI_SocialForm_C");
static_assert(sizeof(UUI_SocialForm_C) == 0x0008A0, "Wrong size on UUI_SocialForm_C");
static_assert(offsetof(UUI_SocialForm_C, SafeZone_0) == 0x000888, "Member 'UUI_SocialForm_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UUI_SocialForm_C, UI_RedPointWidget) == 0x000890, "Member 'UUI_SocialForm_C::UI_RedPointWidget' has a wrong offset!");
static_assert(offsetof(UUI_SocialForm_C, UI_RedPointWidget_181) == 0x000898, "Member 'UUI_SocialForm_C::UI_RedPointWidget_181' has a wrong offset!");

}

