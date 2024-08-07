#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_GamepadKeyboard_Tips_Single

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ST_GamepadTips_Single_structs.hpp"
#include "HottaFramework_structs.hpp"
#include "HottaFramework_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_GamepadKeyboard_Tips_Single.WB_GamepadKeyboard_Tips_Single_C
// 0x0058 (0x05D0 - 0x0578)
class UWB_GamepadKeyboard_Tips_Single_C final : public UHottaUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0578(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                             ExternSlot;                                        // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 KeyIcon;                                           // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             KeyName;                                           // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FST_GamepadTips_Single                 CustomGamepadKey;                                  // 0x0598(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FName                                   InputActionName;                                   // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGamepadInputActionsType                      In_Type;                                           // 0x05C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ResetOnControllerChanged;                          // 0x05C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseGamepadImageOnly;                               // 0x05CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          EnableSolot;                                       // 0x05CB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WB_GamepadKeyboard_Tips_Single(int32 EntryPoint);
	void Construct();
	void BPOnGamepadInputChanged(bool bGamepad);
	void PreConstruct(bool IsDesignTime);
	void SetKeyName(const class FText& InText);
	void SetIcon(TSoftObjectPtr<class UTexture2D> Texture);
	void Init(TSoftObjectPtr<class UTexture2D> Texture, const class FText& InText);
	void IsFuncUnlocked(class FName FuncID, bool* Ret);
	void SetupCustomKey();
	void BindInputAction();
	void RenameInputActionOnBreakFate();
	void SetIconFromKey(EGamepadInput Gamepad);
	void IsGamepadAttached(bool* Attached);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_GamepadKeyboard_Tips_Single_C">();
	}
	static class UWB_GamepadKeyboard_Tips_Single_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_GamepadKeyboard_Tips_Single_C>();
	}
};
static_assert(alignof(UWB_GamepadKeyboard_Tips_Single_C) == 0x000008, "Wrong alignment on UWB_GamepadKeyboard_Tips_Single_C");
static_assert(sizeof(UWB_GamepadKeyboard_Tips_Single_C) == 0x0005D0, "Wrong size on UWB_GamepadKeyboard_Tips_Single_C");
static_assert(offsetof(UWB_GamepadKeyboard_Tips_Single_C, UberGraphFrame) == 0x000578, "Member 'UWB_GamepadKeyboard_Tips_Single_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeyboard_Tips_Single_C, ExternSlot) == 0x000580, "Member 'UWB_GamepadKeyboard_Tips_Single_C::ExternSlot' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeyboard_Tips_Single_C, KeyIcon) == 0x000588, "Member 'UWB_GamepadKeyboard_Tips_Single_C::KeyIcon' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeyboard_Tips_Single_C, KeyName) == 0x000590, "Member 'UWB_GamepadKeyboard_Tips_Single_C::KeyName' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeyboard_Tips_Single_C, CustomGamepadKey) == 0x000598, "Member 'UWB_GamepadKeyboard_Tips_Single_C::CustomGamepadKey' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeyboard_Tips_Single_C, InputActionName) == 0x0005C0, "Member 'UWB_GamepadKeyboard_Tips_Single_C::InputActionName' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeyboard_Tips_Single_C, In_Type) == 0x0005C8, "Member 'UWB_GamepadKeyboard_Tips_Single_C::In_Type' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeyboard_Tips_Single_C, ResetOnControllerChanged) == 0x0005C9, "Member 'UWB_GamepadKeyboard_Tips_Single_C::ResetOnControllerChanged' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeyboard_Tips_Single_C, UseGamepadImageOnly) == 0x0005CA, "Member 'UWB_GamepadKeyboard_Tips_Single_C::UseGamepadImageOnly' has a wrong offset!");
static_assert(offsetof(UWB_GamepadKeyboard_Tips_Single_C, EnableSolot) == 0x0005CB, "Member 'UWB_GamepadKeyboard_Tips_Single_C::EnableSolot' has a wrong offset!");

}

