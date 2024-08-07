#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_RadioBox

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_RadioBox.UI_RadioBox_C.SetText
// 0x0038 (0x0038 - 0x0000)
struct UI_RadioBox_C_SetText final
{
public:
	bool                                          ___bool_Variable;                                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_Variable_1;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              ___byte_Variable;                                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              ___byte_Variable_1;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C94[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0008(0x0028)()
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_RadioBox_C_SetText) == 0x000008, "Wrong alignment on UI_RadioBox_C_SetText");
static_assert(sizeof(UI_RadioBox_C_SetText) == 0x000038, "Wrong size on UI_RadioBox_C_SetText");
static_assert(offsetof(UI_RadioBox_C_SetText, ___bool_Variable) == 0x000000, "Member 'UI_RadioBox_C_SetText::___bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_SetText, ___bool_Variable_1) == 0x000001, "Member 'UI_RadioBox_C_SetText::___bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_SetText, ___byte_Variable) == 0x000002, "Member 'UI_RadioBox_C_SetText::___byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_SetText, ___byte_Variable_1) == 0x000003, "Member 'UI_RadioBox_C_SetText::___byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_SetText, CallFunc_IsChecked_ReturnValue) == 0x000004, "Member 'UI_RadioBox_C_SetText::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_SetText, K2Node_Select_Default) == 0x000008, "Member 'UI_RadioBox_C_SetText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_SetText, K2Node_Select_Default_1) == 0x000030, "Member 'UI_RadioBox_C_SetText::K2Node_Select_Default_1' has a wrong offset!");

// Function UI_RadioBox.UI_RadioBox_C.SetIcon
// 0x0098 (0x0098 - 0x0000)
struct UI_RadioBox_C_SetIcon final
{
public:
	bool                                          ___bool_Variable;                                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_Variable_1;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              ___byte_Variable;                                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              ___byte_Variable_1;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C95[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_Select_Default;                             // 0x0008(0x0088)(ConstParm)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_RadioBox_C_SetIcon) == 0x000008, "Wrong alignment on UI_RadioBox_C_SetIcon");
static_assert(sizeof(UI_RadioBox_C_SetIcon) == 0x000098, "Wrong size on UI_RadioBox_C_SetIcon");
static_assert(offsetof(UI_RadioBox_C_SetIcon, ___bool_Variable) == 0x000000, "Member 'UI_RadioBox_C_SetIcon::___bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_SetIcon, ___bool_Variable_1) == 0x000001, "Member 'UI_RadioBox_C_SetIcon::___bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_SetIcon, ___byte_Variable) == 0x000002, "Member 'UI_RadioBox_C_SetIcon::___byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_SetIcon, ___byte_Variable_1) == 0x000003, "Member 'UI_RadioBox_C_SetIcon::___byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_SetIcon, CallFunc_IsChecked_ReturnValue) == 0x000004, "Member 'UI_RadioBox_C_SetIcon::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_SetIcon, K2Node_Select_Default) == 0x000008, "Member 'UI_RadioBox_C_SetIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_SetIcon, K2Node_Select_Default_1) == 0x000090, "Member 'UI_RadioBox_C_SetIcon::K2Node_Select_Default_1' has a wrong offset!");

// Function UI_RadioBox.UI_RadioBox_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_RadioBox_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_RadioBox_C_PreConstruct) == 0x000001, "Wrong alignment on UI_RadioBox_C_PreConstruct");
static_assert(sizeof(UI_RadioBox_C_PreConstruct) == 0x000001, "Wrong size on UI_RadioBox_C_PreConstruct");
static_assert(offsetof(UI_RadioBox_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_RadioBox_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_RadioBox.UI_RadioBox_C.BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function UI_RadioBox.UI_RadioBox_C.BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_1_OnUnSelectedDelegate__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_1_OnUnSelectedDelegate__DelegateSignature final
{
public:
	class UWidget*                                InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_1_OnUnSelectedDelegate__DelegateSignature) == 0x000008, "Wrong alignment on UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_1_OnUnSelectedDelegate__DelegateSignature");
static_assert(sizeof(UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_1_OnUnSelectedDelegate__DelegateSignature) == 0x000008, "Wrong size on UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_1_OnUnSelectedDelegate__DelegateSignature");
static_assert(offsetof(UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_1_OnUnSelectedDelegate__DelegateSignature, InWidget) == 0x000000, "Member 'UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_1_OnUnSelectedDelegate__DelegateSignature::InWidget' has a wrong offset!");

// Function UI_RadioBox.UI_RadioBox_C.BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_2_OnSelectedDelegate__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_2_OnSelectedDelegate__DelegateSignature final
{
public:
	class UWidget*                                InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_2_OnSelectedDelegate__DelegateSignature) == 0x000008, "Wrong alignment on UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_2_OnSelectedDelegate__DelegateSignature");
static_assert(sizeof(UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_2_OnSelectedDelegate__DelegateSignature) == 0x000008, "Wrong size on UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_2_OnSelectedDelegate__DelegateSignature");
static_assert(offsetof(UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_2_OnSelectedDelegate__DelegateSignature, InWidget) == 0x000000, "Member 'UI_RadioBox_C_BndEvt__UI_RadioBox_RadioBox_K2Node_ComponentBoundEvent_2_OnSelectedDelegate__DelegateSignature::InWidget' has a wrong offset!");

// Function UI_RadioBox.UI_RadioBox_C.ExecuteUbergraph_UI_RadioBox
// 0x0030 (0x0030 - 0x0000)
struct UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ___bool_Variable;                                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              ___byte_Variable;                                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              ___byte_Variable_1;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C96[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C97[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_ComponentBoundEvent_InWidget_1;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_ComponentBoundEvent_InWidget;               // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox) == 0x000008, "Wrong alignment on UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox");
static_assert(sizeof(UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox) == 0x000030, "Wrong size on UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox");
static_assert(offsetof(UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox, EntryPoint) == 0x000000, "Member 'UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox, ___bool_Variable) == 0x000004, "Member 'UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox::___bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox, ___byte_Variable) == 0x000005, "Member 'UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox::___byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox, ___byte_Variable_1) == 0x000006, "Member 'UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox::___byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox, K2Node_Event_IsDesignTime) == 0x000010, "Member 'UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox, K2Node_ComponentBoundEvent_bIsChecked) == 0x000011, "Member 'UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox, K2Node_ComponentBoundEvent_InWidget_1) == 0x000018, "Member 'UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox::K2Node_ComponentBoundEvent_InWidget_1' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox, K2Node_ComponentBoundEvent_InWidget) == 0x000020, "Member 'UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox::K2Node_ComponentBoundEvent_InWidget' has a wrong offset!");
static_assert(offsetof(UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox, K2Node_Select_Default) == 0x000028, "Member 'UI_RadioBox_C_ExecuteUbergraph_UI_RadioBox::K2Node_Select_Default' has a wrong offset!");

}

