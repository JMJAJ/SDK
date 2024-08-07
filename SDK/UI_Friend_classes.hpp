#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Friend

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QRSL_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Friend.UI_Friend_C
// 0x0090 (0x0A28 - 0x0998)
class UUI_Friend_C final : public UQRSLUI_Friend
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0998(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Zuo_donghua;                                       // 0x09A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_C*                           Button_OtherPlace_1;                               // 0x09A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                           Button_OtherPlace_2;                               // 0x09B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                           Button_OtherPlace_3;                               // 0x09B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CreateBackImage;                                   // 0x09C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RadioBox_C*                         FriendRadioBox;                                    // 0x09C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_122;                                         // 0x09D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_126;                                         // 0x09D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RadioBox_C*                         RadioBoxPS;                                        // 0x09E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RadioBox_C*                         RecentRadioButton;                                 // 0x09E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RedPointWidget_C*                   UI_RedPointWidget;                                 // 0x09F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_GamepadKeyboard_Tips_Single_C*      WB_GamepadKeyboard_Tips_Single;                    // 0x09F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_GamepadKeyboard_Tips_Single_C*      WB_GamepadKeyboard_Tips_Single_82;                 // 0x0A00(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_GamepadKeyboard_Tips_Single_C*      WB_GamepadKeyboard_Tips_Single_146;                // 0x0A08(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_GamepadKeyboard_Tips_Single_C*      WB_GamepadKeyboard_Tips_Single_202;                // 0x0A10(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_GamepadKeyboard_Tips_Single_C*      WB_GamepadKeyboard_Tips_Single_257;                // 0x0A18(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_GamepadKeyboard_Tips_Single_C*      WB_GamepadKeyboard_Tips_Single_320;                // 0x0A20(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnBP_OnGetItemChildren_0(class UObject* Item);
	void BndEvt__UI_Friend_RecentRadioButton_K2Node_ComponentBoundEvent_0_OnRadioBoxCheckedEvent__DelegateSignature();
	void BndEvt__UI_Friend_FriendRadioBox_K2Node_ComponentBoundEvent_1_OnRadioBoxCheckedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Friend(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Friend_C">();
	}
	static class UUI_Friend_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Friend_C>();
	}
};
static_assert(alignof(UUI_Friend_C) == 0x000008, "Wrong alignment on UUI_Friend_C");
static_assert(sizeof(UUI_Friend_C) == 0x000A28, "Wrong size on UUI_Friend_C");
static_assert(offsetof(UUI_Friend_C, UberGraphFrame) == 0x000998, "Member 'UUI_Friend_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Friend_C, Zuo_donghua) == 0x0009A0, "Member 'UUI_Friend_C::Zuo_donghua' has a wrong offset!");
static_assert(offsetof(UUI_Friend_C, Button_OtherPlace_1) == 0x0009A8, "Member 'UUI_Friend_C::Button_OtherPlace_1' has a wrong offset!");
static_assert(offsetof(UUI_Friend_C, Button_OtherPlace_2) == 0x0009B0, "Member 'UUI_Friend_C::Button_OtherPlace_2' has a wrong offset!");
static_assert(offsetof(UUI_Friend_C, Button_OtherPlace_3) == 0x0009B8, "Member 'UUI_Friend_C::Button_OtherPlace_3' has a wrong offset!");
static_assert(offsetof(UUI_Friend_C, CreateBackImage) == 0x0009C0, "Member 'UUI_Friend_C::CreateBackImage' has a wrong offset!");
static_assert(offsetof(UUI_Friend_C, FriendRadioBox) == 0x0009C8, "Member 'UUI_Friend_C::FriendRadioBox' has a wrong offset!");
static_assert(offsetof(UUI_Friend_C, Image_122) == 0x0009D0, "Member 'UUI_Friend_C::Image_122' has a wrong offset!");
static_assert(offsetof(UUI_Friend_C, Image_126) == 0x0009D8, "Member 'UUI_Friend_C::Image_126' has a wrong offset!");
static_assert(offsetof(UUI_Friend_C, RadioBoxPS) == 0x0009E0, "Member 'UUI_Friend_C::RadioBoxPS' has a wrong offset!");
static_assert(offsetof(UUI_Friend_C, RecentRadioButton) == 0x0009E8, "Member 'UUI_Friend_C::RecentRadioButton' has a wrong offset!");
static_assert(offsetof(UUI_Friend_C, UI_RedPointWidget) == 0x0009F0, "Member 'UUI_Friend_C::UI_RedPointWidget' has a wrong offset!");
static_assert(offsetof(UUI_Friend_C, WB_GamepadKeyboard_Tips_Single) == 0x0009F8, "Member 'UUI_Friend_C::WB_GamepadKeyboard_Tips_Single' has a wrong offset!");
static_assert(offsetof(UUI_Friend_C, WB_GamepadKeyboard_Tips_Single_82) == 0x000A00, "Member 'UUI_Friend_C::WB_GamepadKeyboard_Tips_Single_82' has a wrong offset!");
static_assert(offsetof(UUI_Friend_C, WB_GamepadKeyboard_Tips_Single_146) == 0x000A08, "Member 'UUI_Friend_C::WB_GamepadKeyboard_Tips_Single_146' has a wrong offset!");
static_assert(offsetof(UUI_Friend_C, WB_GamepadKeyboard_Tips_Single_202) == 0x000A10, "Member 'UUI_Friend_C::WB_GamepadKeyboard_Tips_Single_202' has a wrong offset!");
static_assert(offsetof(UUI_Friend_C, WB_GamepadKeyboard_Tips_Single_257) == 0x000A18, "Member 'UUI_Friend_C::WB_GamepadKeyboard_Tips_Single_257' has a wrong offset!");
static_assert(offsetof(UUI_Friend_C, WB_GamepadKeyboard_Tips_Single_320) == 0x000A20, "Member 'UUI_Friend_C::WB_GamepadKeyboard_Tips_Single_320' has a wrong offset!");

}

