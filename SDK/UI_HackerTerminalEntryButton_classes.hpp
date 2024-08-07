#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HackerTerminalEntryButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QRSL_structs.hpp"
#include "QRSL_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_HackerTerminalEntryButton.UI_HackerTerminalEntryButton_C
// 0x0008 (0x0900 - 0x08F8)
class UUI_HackerTerminalEntryButton_C final : public UQRSLHackerTerminalEntryButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void OnBPEntryButtonTypeChanged(EQRSLHackerTerminalEntryButtonType InType);
	void ExecuteUbergraph_UI_HackerTerminalEntryButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_HackerTerminalEntryButton_C">();
	}
	static class UUI_HackerTerminalEntryButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_HackerTerminalEntryButton_C>();
	}
};
static_assert(alignof(UUI_HackerTerminalEntryButton_C) == 0x000008, "Wrong alignment on UUI_HackerTerminalEntryButton_C");
static_assert(sizeof(UUI_HackerTerminalEntryButton_C) == 0x000900, "Wrong size on UUI_HackerTerminalEntryButton_C");
static_assert(offsetof(UUI_HackerTerminalEntryButton_C, UberGraphFrame) == 0x0008F8, "Member 'UUI_HackerTerminalEntryButton_C::UberGraphFrame' has a wrong offset!");

}

