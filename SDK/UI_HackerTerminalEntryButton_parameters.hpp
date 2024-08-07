#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HackerTerminalEntryButton

#include "Basic.hpp"

#include "QRSL_structs.hpp"


namespace SDK::Params
{

// Function UI_HackerTerminalEntryButton.UI_HackerTerminalEntryButton_C.OnBPEntryButtonTypeChanged
// 0x0001 (0x0001 - 0x0000)
struct UI_HackerTerminalEntryButton_C_OnBPEntryButtonTypeChanged final
{
public:
	EQRSLHackerTerminalEntryButtonType            InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_HackerTerminalEntryButton_C_OnBPEntryButtonTypeChanged) == 0x000001, "Wrong alignment on UI_HackerTerminalEntryButton_C_OnBPEntryButtonTypeChanged");
static_assert(sizeof(UI_HackerTerminalEntryButton_C_OnBPEntryButtonTypeChanged) == 0x000001, "Wrong size on UI_HackerTerminalEntryButton_C_OnBPEntryButtonTypeChanged");
static_assert(offsetof(UI_HackerTerminalEntryButton_C_OnBPEntryButtonTypeChanged, InType) == 0x000000, "Member 'UI_HackerTerminalEntryButton_C_OnBPEntryButtonTypeChanged::InType' has a wrong offset!");

// Function UI_HackerTerminalEntryButton.UI_HackerTerminalEntryButton_C.ExecuteUbergraph_UI_HackerTerminalEntryButton
// 0x000C (0x000C - 0x0000)
struct UI_HackerTerminalEntryButton_C_ExecuteUbergraph_UI_HackerTerminalEntryButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEventAtLocation_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQRSLHackerTerminalEntryButtonType            K2Node_Event_InType;                               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_HackerTerminalEntryButton_C_ExecuteUbergraph_UI_HackerTerminalEntryButton) == 0x000004, "Wrong alignment on UI_HackerTerminalEntryButton_C_ExecuteUbergraph_UI_HackerTerminalEntryButton");
static_assert(sizeof(UI_HackerTerminalEntryButton_C_ExecuteUbergraph_UI_HackerTerminalEntryButton) == 0x00000C, "Wrong size on UI_HackerTerminalEntryButton_C_ExecuteUbergraph_UI_HackerTerminalEntryButton");
static_assert(offsetof(UI_HackerTerminalEntryButton_C_ExecuteUbergraph_UI_HackerTerminalEntryButton, EntryPoint) == 0x000000, "Member 'UI_HackerTerminalEntryButton_C_ExecuteUbergraph_UI_HackerTerminalEntryButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_HackerTerminalEntryButton_C_ExecuteUbergraph_UI_HackerTerminalEntryButton, CallFunc_PostEventAtLocation_ReturnValue) == 0x000004, "Member 'UI_HackerTerminalEntryButton_C_ExecuteUbergraph_UI_HackerTerminalEntryButton::CallFunc_PostEventAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HackerTerminalEntryButton_C_ExecuteUbergraph_UI_HackerTerminalEntryButton, K2Node_Event_InType) == 0x000008, "Member 'UI_HackerTerminalEntryButton_C_ExecuteUbergraph_UI_HackerTerminalEntryButton::K2Node_Event_InType' has a wrong offset!");
static_assert(offsetof(UI_HackerTerminalEntryButton_C_ExecuteUbergraph_UI_HackerTerminalEntryButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000009, "Member 'UI_HackerTerminalEntryButton_C_ExecuteUbergraph_UI_HackerTerminalEntryButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

