#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_AirwallTips_Vera

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QRSL_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_AirwallTips_Vera.UI_AirwallTips_Vera_C
// 0x0048 (0x0870 - 0x0828)
class UUI_AirwallTips_Vera_C final : public UQRSLUI_EntryWorldBossForm
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0828(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image;                                             // 0x0830(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_243;                                         // 0x0838(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_292;                                         // 0x0840(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_343;                                         // 0x0848(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock;                                     // 0x0850(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   In_Text;                                           // 0x0858(0x0018)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_UI_AirwallTips_Vera(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_AirwallTips_Vera_C">();
	}
	static class UUI_AirwallTips_Vera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_AirwallTips_Vera_C>();
	}
};
static_assert(alignof(UUI_AirwallTips_Vera_C) == 0x000008, "Wrong alignment on UUI_AirwallTips_Vera_C");
static_assert(sizeof(UUI_AirwallTips_Vera_C) == 0x000870, "Wrong size on UUI_AirwallTips_Vera_C");
static_assert(offsetof(UUI_AirwallTips_Vera_C, UberGraphFrame) == 0x000828, "Member 'UUI_AirwallTips_Vera_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_AirwallTips_Vera_C, Image) == 0x000830, "Member 'UUI_AirwallTips_Vera_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_AirwallTips_Vera_C, Image_243) == 0x000838, "Member 'UUI_AirwallTips_Vera_C::Image_243' has a wrong offset!");
static_assert(offsetof(UUI_AirwallTips_Vera_C, Image_292) == 0x000840, "Member 'UUI_AirwallTips_Vera_C::Image_292' has a wrong offset!");
static_assert(offsetof(UUI_AirwallTips_Vera_C, Image_343) == 0x000848, "Member 'UUI_AirwallTips_Vera_C::Image_343' has a wrong offset!");
static_assert(offsetof(UUI_AirwallTips_Vera_C, RichTextBlock) == 0x000850, "Member 'UUI_AirwallTips_Vera_C::RichTextBlock' has a wrong offset!");
static_assert(offsetof(UUI_AirwallTips_Vera_C, In_Text) == 0x000858, "Member 'UUI_AirwallTips_Vera_C::In_Text' has a wrong offset!");

}

