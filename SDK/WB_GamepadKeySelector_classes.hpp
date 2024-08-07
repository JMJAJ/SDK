#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_GamepadKeySelector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"
#include "HottaFramework_structs.hpp"
#include "HottaFramework_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_GamepadKeySelector.WB_GamepadKeySelector_C
// 0x01A0 (0x0718 - 0x0578)
class UWB_GamepadKeySelector_C final : public UHottaUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0578(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             ActionName;                                        // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHottaButton*                           ActivateButton;                                    // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 background;                                        // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GamepadIcon;                                       // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HighlightImage;                                    // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextUndefine;                                      // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcherKeyState;                            // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   InputActionName;                                   // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   Key;                                               // 0x05C0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FKey                                   NewKey;                                            // 0x05D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UWB_CustomGamepadKeyList_C*             _Gamepad_Key_List;                                 // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_GamepadSettings_Common_C*           Outer_WB_GamepadKeySelector_C;                     // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGamepadInputActionsType                      InputActionsType;                                  // 0x0600(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E4B[0x3];                                     // 0x0601(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Index_WB_GamepadKeySelector_C;                     // 0x0604(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            DefaultBrush;                                      // 0x0608(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            HightlightBrush;                                   // 0x0690(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WB_GamepadKeySelector(int32 EntryPoint);
	void BndEvt__WB_GamepadKeySelector_ActivateButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_GamepadKeySelector_ActivateButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_GamepadKeySelector_ActivateButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_GamepadKeySelector_HighLightImage_K2Node_ComponentBoundEvent_2_OnVisibilityChangedDelegate__DelegateSignature(class UWidget* InWidget, ESlateVisibility InNewVisibility, ESlateVisibility InOldVisibility);
	void Construct();
	void ReplaceKey(const struct FKey& InNewKey, bool* Result);
	void GetDesirePosition(struct FVector2D* OutPosition);
	void OnMessageBoxSureClicked();
	void Init(const struct FKey& Param_Key, class FName Param_InputActionName, EGamepadInputActionsType Param_InputActionsType, int32 InIndex);
	void ConfirmReplaceKey();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_GamepadKeySelector_C">();
	}
	static class UWB_GamepadKeySelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_GamepadKeySelector_C>();
	}
};
static_assert(alignof(UWB_GamepadKeySelector_C) == 0x000008, "Wrong alignment on UWB_GamepadKeySelector_C");
static_assert(sizeof(UWB_GamepadKeySelector_C) == 0x000718, "Wrong size on UWB_GamepadKeySelector_C");
static_assert(offsetof(UWB_GamepadKeySelector_C, UberGraphFrame) == 0x000578, "Member 'UWB_GamepadKeySelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeySelector_C, ActionName) == 0x000580, "Member 'UWB_GamepadKeySelector_C::ActionName' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeySelector_C, ActivateButton) == 0x000588, "Member 'UWB_GamepadKeySelector_C::ActivateButton' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeySelector_C, background) == 0x000590, "Member 'UWB_GamepadKeySelector_C::background' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeySelector_C, GamepadIcon) == 0x000598, "Member 'UWB_GamepadKeySelector_C::GamepadIcon' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeySelector_C, HighlightImage) == 0x0005A0, "Member 'UWB_GamepadKeySelector_C::HighlightImage' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeySelector_C, TextUndefine) == 0x0005A8, "Member 'UWB_GamepadKeySelector_C::TextUndefine' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeySelector_C, WidgetSwitcherKeyState) == 0x0005B0, "Member 'UWB_GamepadKeySelector_C::WidgetSwitcherKeyState' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeySelector_C, InputActionName) == 0x0005B8, "Member 'UWB_GamepadKeySelector_C::InputActionName' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeySelector_C, Key) == 0x0005C0, "Member 'UWB_GamepadKeySelector_C::Key' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeySelector_C, NewKey) == 0x0005D8, "Member 'UWB_GamepadKeySelector_C::NewKey' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeySelector_C, _Gamepad_Key_List) == 0x0005F0, "Member 'UWB_GamepadKeySelector_C::_Gamepad_Key_List' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeySelector_C, Outer_WB_GamepadKeySelector_C) == 0x0005F8, "Member 'UWB_GamepadKeySelector_C::Outer_WB_GamepadKeySelector_C' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeySelector_C, InputActionsType) == 0x000600, "Member 'UWB_GamepadKeySelector_C::InputActionsType' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeySelector_C, Index_WB_GamepadKeySelector_C) == 0x000604, "Member 'UWB_GamepadKeySelector_C::Index_WB_GamepadKeySelector_C' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeySelector_C, DefaultBrush) == 0x000608, "Member 'UWB_GamepadKeySelector_C::DefaultBrush' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeySelector_C, HightlightBrush) == 0x000690, "Member 'UWB_GamepadKeySelector_C::HightlightBrush' has a wrong offset!");

}

