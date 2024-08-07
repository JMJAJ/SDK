#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TeamQuickForm

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QRSL_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_TeamQuickForm.UI_TeamQuickForm_C
// 0x0020 (0x0A08 - 0x09E8)
class UUI_TeamQuickForm_C final : public UQRSLUI_TeamQuickForm
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x09E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image;                                             // 0x09F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_77;                                          // 0x09F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_140;                                         // 0x0A00(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_TeamQuickForm(int32 EntryPoint);
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_TeamQuickForm_C">();
	}
	static class UUI_TeamQuickForm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_TeamQuickForm_C>();
	}
};
static_assert(alignof(UUI_TeamQuickForm_C) == 0x000008, "Wrong alignment on UUI_TeamQuickForm_C");
static_assert(sizeof(UUI_TeamQuickForm_C) == 0x000A08, "Wrong size on UUI_TeamQuickForm_C");
static_assert(offsetof(UUI_TeamQuickForm_C, UberGraphFrame) == 0x0009E8, "Member 'UUI_TeamQuickForm_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_TeamQuickForm_C, Image) == 0x0009F0, "Member 'UUI_TeamQuickForm_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_TeamQuickForm_C, Image_77) == 0x0009F8, "Member 'UUI_TeamQuickForm_C::Image_77' has a wrong offset!");
static_assert(offsetof(UUI_TeamQuickForm_C, Image_140) == 0x000A00, "Member 'UUI_TeamQuickForm_C::Image_140' has a wrong offset!");

}

