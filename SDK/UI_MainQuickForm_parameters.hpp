#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MainQuickForm

#include "Basic.hpp"

#include "HottaFramework_structs.hpp"


namespace SDK::Params
{

// Function UI_MainQuickForm.UI_MainQuickForm_C.ExecuteUbergraph_UI_MainQuickForm
// 0x0030 (0x0030 - 0x0000)
struct UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E41[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_ComponentBoundEvent_BtnWidget;              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQRSLHUD*                               CallFunc_GetQRSLHUD_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMobileAppConfig_ReturnValue;           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E42[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UQRSLUI_QuestPanel*                     CallFunc_ShowQuestPanel_ReturnValue;               // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EHottaPlatformType                            CallFunc_SwitchPlatform_OutPlatformType;           // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm) == 0x000008, "Wrong alignment on UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm");
static_assert(sizeof(UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm) == 0x000030, "Wrong size on UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm");
static_assert(offsetof(UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm, EntryPoint) == 0x000000, "Member 'UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm, K2Node_ComponentBoundEvent_BtnWidget) == 0x000008, "Member 'UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm::K2Node_ComponentBoundEvent_BtnWidget' has a wrong offset!");
static_assert(offsetof(UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm, CallFunc_GetQRSLHUD_ReturnValue) == 0x000010, "Member 'UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm::CallFunc_GetQRSLHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm, CallFunc_GetMobileAppConfig_ReturnValue) == 0x000018, "Member 'UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm::CallFunc_GetMobileAppConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm, CallFunc_ShowQuestPanel_ReturnValue) == 0x000020, "Member 'UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm::CallFunc_ShowQuestPanel_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm, CallFunc_SwitchPlatform_OutPlatformType) == 0x000029, "Member 'UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm::CallFunc_SwitchPlatform_OutPlatformType' has a wrong offset!");
static_assert(offsetof(UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm, K2Node_SwitchEnum_CmpSuccess) == 0x00002A, "Member 'UI_MainQuickForm_C_ExecuteUbergraph_UI_MainQuickForm::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function UI_MainQuickForm.UI_MainQuickForm_C.BndEvt__TaskButton_K2Node_ComponentBoundEvent_0_UIButtonDelegate__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_MainQuickForm_C_BndEvt__TaskButton_K2Node_ComponentBoundEvent_0_UIButtonDelegate__DelegateSignature final
{
public:
	class UWidget*                                BtnWidget;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MainQuickForm_C_BndEvt__TaskButton_K2Node_ComponentBoundEvent_0_UIButtonDelegate__DelegateSignature) == 0x000008, "Wrong alignment on UI_MainQuickForm_C_BndEvt__TaskButton_K2Node_ComponentBoundEvent_0_UIButtonDelegate__DelegateSignature");
static_assert(sizeof(UI_MainQuickForm_C_BndEvt__TaskButton_K2Node_ComponentBoundEvent_0_UIButtonDelegate__DelegateSignature) == 0x000008, "Wrong size on UI_MainQuickForm_C_BndEvt__TaskButton_K2Node_ComponentBoundEvent_0_UIButtonDelegate__DelegateSignature");
static_assert(offsetof(UI_MainQuickForm_C_BndEvt__TaskButton_K2Node_ComponentBoundEvent_0_UIButtonDelegate__DelegateSignature, BtnWidget) == 0x000000, "Member 'UI_MainQuickForm_C_BndEvt__TaskButton_K2Node_ComponentBoundEvent_0_UIButtonDelegate__DelegateSignature::BtnWidget' has a wrong offset!");

}

