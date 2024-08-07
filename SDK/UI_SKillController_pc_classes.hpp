#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SKillController_pc

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "QRSL_classes.hpp"
#include "HottaFramework_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_SKillController_pc.UI_SKillController_pc_C
// 0x0230 (0x0E38 - 0x0C08)
class UUI_SKillController_pc_C final : public UQRSLUI_SkillController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C08(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       MagicHandAnim;                                     // 0x0C10(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShootPrepare_0;                                    // 0x0C18(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShootAimOut;                                       // 0x0C20(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShootAimIn;                                        // 0x0C28(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShootPrepare;                                      // 0x0C30(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShootAimming;                                      // 0x0C38(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Aimpoint;                                          // 0x0C40(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Aimpoint_1;                                        // 0x0C48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Aimpoint_4;                                        // 0x0C50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Aimpoint_5;                                        // 0x0C58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Aimpoint_6;                                        // 0x0C60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Aimpoint_7;                                        // 0x0C68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHottaCanvasPanel*                      BottomLeft;                                        // 0x0C70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_AttackJoystick_BP_C*                ButtonAttackJoystick;                              // 0x0C78(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_AttackJoystick_BP_C*                ButtonGlidJoystick;                                // 0x0C80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_AttackJoystick_BP_C*                ButtonStrenthJoystick;                             // 0x0C88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SkillInputButton_C*                 ButtonWaterSkateboard;                             // 0x0C90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_109;                                   // 0x0C98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_117;                                         // 0x0CA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_600;                                         // 0x0CA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MagicHandAimImg;                                   // 0x0CB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key;                                            // 0x0CB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_1;                                          // 0x0CC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_2;                                          // 0x0CC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_3;                                          // 0x0CD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_4;                                          // 0x0CD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_5;                                          // 0x0CE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_6;                                          // 0x0CE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_7;                                          // 0x0CF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_8;                                          // 0x0CF8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_9;                                          // 0x0D00(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_10;                                         // 0x0D08(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_11;                                         // 0x0D10(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_12;                                         // 0x0D18(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_13;                                         // 0x0D20(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_14;                                         // 0x0D28(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_15;                                         // 0x0D30(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_16;                                         // 0x0D38(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_17;                                         // 0x0D40(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_18;                                         // 0x0D48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_19;                                         // 0x0D50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_20;                                         // 0x0D58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_21;                                         // 0x0D60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_22;                                         // 0x0D68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_23;                                         // 0x0D70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_24;                                         // 0x0D78(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_25;                                         // 0x0D80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_26;                                         // 0x0D88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_77;                                         // 0x0D90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_80;                                         // 0x0D98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_87;                                         // 0x0DA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_90;                                         // 0x0DA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_93;                                         // 0x0DB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_112;                                        // 0x0DB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_124;                                        // 0x0DC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_142;                                        // 0x0DC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_206;                                        // 0x0DD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_226;                                        // 0x0DD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_248;                                        // 0x0DE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_318;                                        // 0x0DE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPC_Key_C*                              PC_Key_FloatUp;                                    // 0x0DF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0DF8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x0E00(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIParticle*                            UIParticle_108;                                    // 0x0E08(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         LastFireTime;                                      // 0x0E10(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5727[0x4];                                     // 0x0E14(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TestTimer;                                         // 0x0E18(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         LastLerpTime;                                      // 0x0E20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlay;                                            // 0x0E24(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5728[0x3];                                     // 0x0E25(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           RefreshSkillMove;                                  // 0x0E28(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              LastDivingSprintVisibility;                        // 0x0E30(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGuildMazePlayState                           Guild_Maze_Play_State;                             // 0x0E31(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_SKillController_pc(int32 EntryPoint);
	void BPShowExpandSkillButton(ESkillInputIDType InputIDType, const class FName& ShortcutKeyName);
	void OnWallRunStateChange(bool Enter);
	void OnGuildMazePlayStateChangedDelegate_Event_0(EGuildMazePlayState GuildMazePlayState);
	void BPCall_ShowHideFloatupUI(bool Show);
	void BPCall_ShowHideSwimSprintUI(bool Show);
	void BPCall_ShowHideJumpButton(bool Show);
	void OnFuncUnlockedEvent(const class FName TheFuncID);
	void OnGameUserSettingUpdateUI();
	void OnInitialized();
	void PlayShootingAnimation(int32 TriggerType);
	void Construct();
	void RefreshCanvasSkillMove();
	void HiddenBowAimmingButton(bool Hidden);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_SKillController_pc_C">();
	}
	static class UUI_SKillController_pc_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_SKillController_pc_C>();
	}
};
static_assert(alignof(UUI_SKillController_pc_C) == 0x000008, "Wrong alignment on UUI_SKillController_pc_C");
static_assert(sizeof(UUI_SKillController_pc_C) == 0x000E38, "Wrong size on UUI_SKillController_pc_C");
static_assert(offsetof(UUI_SKillController_pc_C, UberGraphFrame) == 0x000C08, "Member 'UUI_SKillController_pc_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, MagicHandAnim) == 0x000C10, "Member 'UUI_SKillController_pc_C::MagicHandAnim' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, ShootPrepare_0) == 0x000C18, "Member 'UUI_SKillController_pc_C::ShootPrepare_0' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, ShootAimOut) == 0x000C20, "Member 'UUI_SKillController_pc_C::ShootAimOut' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, ShootAimIn) == 0x000C28, "Member 'UUI_SKillController_pc_C::ShootAimIn' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, ShootPrepare) == 0x000C30, "Member 'UUI_SKillController_pc_C::ShootPrepare' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, ShootAimming) == 0x000C38, "Member 'UUI_SKillController_pc_C::ShootAimming' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, Aimpoint) == 0x000C40, "Member 'UUI_SKillController_pc_C::Aimpoint' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, Aimpoint_1) == 0x000C48, "Member 'UUI_SKillController_pc_C::Aimpoint_1' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, Aimpoint_4) == 0x000C50, "Member 'UUI_SKillController_pc_C::Aimpoint_4' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, Aimpoint_5) == 0x000C58, "Member 'UUI_SKillController_pc_C::Aimpoint_5' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, Aimpoint_6) == 0x000C60, "Member 'UUI_SKillController_pc_C::Aimpoint_6' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, Aimpoint_7) == 0x000C68, "Member 'UUI_SKillController_pc_C::Aimpoint_7' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, BottomLeft) == 0x000C70, "Member 'UUI_SKillController_pc_C::BottomLeft' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, ButtonAttackJoystick) == 0x000C78, "Member 'UUI_SKillController_pc_C::ButtonAttackJoystick' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, ButtonGlidJoystick) == 0x000C80, "Member 'UUI_SKillController_pc_C::ButtonGlidJoystick' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, ButtonStrenthJoystick) == 0x000C88, "Member 'UUI_SKillController_pc_C::ButtonStrenthJoystick' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, ButtonWaterSkateboard) == 0x000C90, "Member 'UUI_SKillController_pc_C::ButtonWaterSkateboard' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, CanvasPanel_109) == 0x000C98, "Member 'UUI_SKillController_pc_C::CanvasPanel_109' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, Image_117) == 0x000CA0, "Member 'UUI_SKillController_pc_C::Image_117' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, Image_600) == 0x000CA8, "Member 'UUI_SKillController_pc_C::Image_600' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, MagicHandAimImg) == 0x000CB0, "Member 'UUI_SKillController_pc_C::MagicHandAimImg' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key) == 0x000CB8, "Member 'UUI_SKillController_pc_C::PC_Key' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_1) == 0x000CC0, "Member 'UUI_SKillController_pc_C::PC_Key_1' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_2) == 0x000CC8, "Member 'UUI_SKillController_pc_C::PC_Key_2' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_3) == 0x000CD0, "Member 'UUI_SKillController_pc_C::PC_Key_3' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_4) == 0x000CD8, "Member 'UUI_SKillController_pc_C::PC_Key_4' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_5) == 0x000CE0, "Member 'UUI_SKillController_pc_C::PC_Key_5' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_6) == 0x000CE8, "Member 'UUI_SKillController_pc_C::PC_Key_6' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_7) == 0x000CF0, "Member 'UUI_SKillController_pc_C::PC_Key_7' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_8) == 0x000CF8, "Member 'UUI_SKillController_pc_C::PC_Key_8' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_9) == 0x000D00, "Member 'UUI_SKillController_pc_C::PC_Key_9' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_10) == 0x000D08, "Member 'UUI_SKillController_pc_C::PC_Key_10' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_11) == 0x000D10, "Member 'UUI_SKillController_pc_C::PC_Key_11' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_12) == 0x000D18, "Member 'UUI_SKillController_pc_C::PC_Key_12' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_13) == 0x000D20, "Member 'UUI_SKillController_pc_C::PC_Key_13' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_14) == 0x000D28, "Member 'UUI_SKillController_pc_C::PC_Key_14' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_15) == 0x000D30, "Member 'UUI_SKillController_pc_C::PC_Key_15' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_16) == 0x000D38, "Member 'UUI_SKillController_pc_C::PC_Key_16' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_17) == 0x000D40, "Member 'UUI_SKillController_pc_C::PC_Key_17' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_18) == 0x000D48, "Member 'UUI_SKillController_pc_C::PC_Key_18' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_19) == 0x000D50, "Member 'UUI_SKillController_pc_C::PC_Key_19' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_20) == 0x000D58, "Member 'UUI_SKillController_pc_C::PC_Key_20' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_21) == 0x000D60, "Member 'UUI_SKillController_pc_C::PC_Key_21' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_22) == 0x000D68, "Member 'UUI_SKillController_pc_C::PC_Key_22' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_23) == 0x000D70, "Member 'UUI_SKillController_pc_C::PC_Key_23' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_24) == 0x000D78, "Member 'UUI_SKillController_pc_C::PC_Key_24' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_25) == 0x000D80, "Member 'UUI_SKillController_pc_C::PC_Key_25' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_26) == 0x000D88, "Member 'UUI_SKillController_pc_C::PC_Key_26' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_77) == 0x000D90, "Member 'UUI_SKillController_pc_C::PC_Key_77' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_80) == 0x000D98, "Member 'UUI_SKillController_pc_C::PC_Key_80' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_87) == 0x000DA0, "Member 'UUI_SKillController_pc_C::PC_Key_87' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_90) == 0x000DA8, "Member 'UUI_SKillController_pc_C::PC_Key_90' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_93) == 0x000DB0, "Member 'UUI_SKillController_pc_C::PC_Key_93' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_112) == 0x000DB8, "Member 'UUI_SKillController_pc_C::PC_Key_112' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_124) == 0x000DC0, "Member 'UUI_SKillController_pc_C::PC_Key_124' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_142) == 0x000DC8, "Member 'UUI_SKillController_pc_C::PC_Key_142' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_206) == 0x000DD0, "Member 'UUI_SKillController_pc_C::PC_Key_206' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_226) == 0x000DD8, "Member 'UUI_SKillController_pc_C::PC_Key_226' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_248) == 0x000DE0, "Member 'UUI_SKillController_pc_C::PC_Key_248' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_318) == 0x000DE8, "Member 'UUI_SKillController_pc_C::PC_Key_318' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, PC_Key_FloatUp) == 0x000DF0, "Member 'UUI_SKillController_pc_C::PC_Key_FloatUp' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, SafeZone_0) == 0x000DF8, "Member 'UUI_SKillController_pc_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, TextBlock) == 0x000E00, "Member 'UUI_SKillController_pc_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, UIParticle_108) == 0x000E08, "Member 'UUI_SKillController_pc_C::UIParticle_108' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, LastFireTime) == 0x000E10, "Member 'UUI_SKillController_pc_C::LastFireTime' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, TestTimer) == 0x000E18, "Member 'UUI_SKillController_pc_C::TestTimer' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, LastLerpTime) == 0x000E20, "Member 'UUI_SKillController_pc_C::LastLerpTime' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, IsPlay) == 0x000E24, "Member 'UUI_SKillController_pc_C::IsPlay' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, RefreshSkillMove) == 0x000E28, "Member 'UUI_SKillController_pc_C::RefreshSkillMove' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, LastDivingSprintVisibility) == 0x000E30, "Member 'UUI_SKillController_pc_C::LastDivingSprintVisibility' has a wrong offset!");
static_assert(offsetof(UUI_SKillController_pc_C, Guild_Maze_Play_State) == 0x000E31, "Member 'UUI_SKillController_pc_C::Guild_Maze_Play_State' has a wrong offset!");

}

