#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Blu

#include "Basic.hpp"

#include "Blu_classes.hpp"
#include "Blu_parameters.hpp"


namespace SDK
{

// Function Blu.BluEye.CharKeyDownUp
// (Final, Native, Public)
// Parameters:
// struct FCharacterEvent                  CharEvent                                              (Parm, NativeAccessSpecifierPublic)

void UBluEye::CharKeyDownUp(const struct FCharacterEvent& CharEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "CharKeyDownUp");

	Params::BluEye_CharKeyDownUp Parms{};

	Parms.CharEvent = std::move(CharEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.CharKeyInput
// (Final, Native, Public)
// Parameters:
// struct FCharacterEvent                  CharEvent                                              (Parm, NativeAccessSpecifierPublic)

void UBluEye::CharKeyInput(const struct FCharacterEvent& CharEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "CharKeyInput");

	Params::BluEye_CharKeyInput Parms{};

	Parms.CharEvent = std::move(CharEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.CloseBrowser
// (Final, Native, Public)

void UBluEye::CloseBrowser()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "CloseBrowser");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.Destory
// (Final, Native, Public)

void UBluEye::Destory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "Destory");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.GetCurrentURL
// (Final, Native, Public)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBluEye::GetCurrentURL()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "GetCurrentURL");

	Params::BluEye_GetCurrentURL Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Blu.BluEye.GetZoom
// (Final, Native, Public)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBluEye::GetZoom()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "GetZoom");

	Params::BluEye_GetZoom Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Blu.BluEye.Init
// (Final, Native, Public)

void UBluEye::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "Init");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.IsBrowserLoading
// (Final, Native, Public)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBluEye::IsBrowserLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "IsBrowserLoading");

	Params::BluEye_IsBrowserLoading Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Blu.BluEye.KeyDown
// (Final, Native, Public)
// Parameters:
// struct FKeyEvent                        InKey                                                  (Parm, NativeAccessSpecifierPublic)

void UBluEye::KeyDown(const struct FKeyEvent& InKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "KeyDown");

	Params::BluEye_KeyDown Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.KeyPress
// (Final, Native, Public)
// Parameters:
// struct FKeyEvent                        InKey                                                  (Parm, NativeAccessSpecifierPublic)

void UBluEye::KeyPress(const struct FKeyEvent& InKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "KeyPress");

	Params::BluEye_KeyPress Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.KeyUp
// (Final, Native, Public)
// Parameters:
// struct FKeyEvent                        InKey                                                  (Parm, NativeAccessSpecifierPublic)

void UBluEye::KeyUp(const struct FKeyEvent& InKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "KeyUp");

	Params::BluEye_KeyUp Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.LoadURL
// (Final, Native, Public)
// Parameters:
// class FString                           NewURL                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBluEye::LoadURL(const class FString& NewURL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "LoadURL");

	Params::BluEye_LoadURL Parms{};

	Parms.NewURL = std::move(NewURL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.NavBack
// (Final, Native, Public)

void UBluEye::NavBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "NavBack");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.NavForward
// (Final, Native, Public)

void UBluEye::NavForward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "NavForward");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.RawCharKeyPress
// (Final, Native, Public)
// Parameters:
// class FString                           CharToPress                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    IsRepeat                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    LeftShiftDown                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    RightShiftDown                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    LeftControlDown                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    RightControlDown                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    LeftAltDown                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    RightAltDown                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    LeftCommandDown                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    RightCommandDown                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    CapsLocksOn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBluEye::RawCharKeyPress(const class FString& CharToPress, bool IsRepeat, bool LeftShiftDown, bool RightShiftDown, bool LeftControlDown, bool RightControlDown, bool LeftAltDown, bool RightAltDown, bool LeftCommandDown, bool RightCommandDown, bool CapsLocksOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "RawCharKeyPress");

	Params::BluEye_RawCharKeyPress Parms{};

	Parms.CharToPress = std::move(CharToPress);
	Parms.IsRepeat = IsRepeat;
	Parms.LeftShiftDown = LeftShiftDown;
	Parms.RightShiftDown = RightShiftDown;
	Parms.LeftControlDown = LeftControlDown;
	Parms.RightControlDown = RightControlDown;
	Parms.LeftAltDown = LeftAltDown;
	Parms.RightAltDown = RightAltDown;
	Parms.LeftCommandDown = LeftCommandDown;
	Parms.RightCommandDown = RightCommandDown;
	Parms.CapsLocksOn = CapsLocksOn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.ReloadBrowser
// (Final, Native, Public)
// Parameters:
// bool                                    IgnoreCache                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBluEye::ReloadBrowser(bool IgnoreCache)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "ReloadBrowser");

	Params::BluEye_ReloadBrowser Parms{};

	Parms.IgnoreCache = IgnoreCache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.ResizeBrowser
// (Final, Native, Public)
// Parameters:
// int32                                   NewWidth                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   NewHeight                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBluEye::ResizeBrowser(const int32 NewWidth, const int32 NewHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "ResizeBrowser");

	Params::BluEye_ResizeBrowser Parms{};

	Parms.NewWidth = NewWidth;
	Parms.NewHeight = NewHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.SetProperties
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                                   SetWidth                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   SetHeight                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    SetIsTransparent                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    SetEnabled                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    SetWebGL                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           SetDefaultURL                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             SetTextureParameterName                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*               SetBaseMaterial                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBluEye*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBluEye* UBluEye::SetProperties(const int32 SetWidth, const int32 SetHeight, const bool SetIsTransparent, const bool SetEnabled, const bool SetWebGL, const class FString& SetDefaultURL, const class FName& SetTextureParameterName, class UMaterialInterface* SetBaseMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "SetProperties");

	Params::BluEye_SetProperties Parms{};

	Parms.SetWidth = SetWidth;
	Parms.SetHeight = SetHeight;
	Parms.SetIsTransparent = SetIsTransparent;
	Parms.SetEnabled = SetEnabled;
	Parms.SetWebGL = SetWebGL;
	Parms.SetDefaultURL = std::move(SetDefaultURL);
	Parms.SetTextureParameterName = SetTextureParameterName;
	Parms.SetBaseMaterial = SetBaseMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Blu.BluEye.SetZoom
// (Final, Native, Public)
// Parameters:
// float                                   Scale                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBluEye::SetZoom(const float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "SetZoom");

	Params::BluEye_SetZoom Parms{};

	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.SpecialKeyPress
// (Final, Native, Public)
// Parameters:
// EBluSpecialKeys                         Key                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    LeftShiftDown                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    RightShiftDown                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    LeftControlDown                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    RightControlDown                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    LeftAltDown                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    RightAltDown                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    LeftCommandDown                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    RightCommandDown                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    CapsLocksOn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBluEye::SpecialKeyPress(EBluSpecialKeys Key, bool LeftShiftDown, bool RightShiftDown, bool LeftControlDown, bool RightControlDown, bool LeftAltDown, bool RightAltDown, bool LeftCommandDown, bool RightCommandDown, bool CapsLocksOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "SpecialKeyPress");

	Params::BluEye_SpecialKeyPress Parms{};

	Parms.Key = Key;
	Parms.LeftShiftDown = LeftShiftDown;
	Parms.RightShiftDown = RightShiftDown;
	Parms.LeftControlDown = LeftControlDown;
	Parms.RightControlDown = RightControlDown;
	Parms.LeftAltDown = LeftAltDown;
	Parms.RightAltDown = RightAltDown;
	Parms.LeftCommandDown = LeftCommandDown;
	Parms.RightCommandDown = RightCommandDown;
	Parms.CapsLocksOn = CapsLocksOn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.TriggerCaptureLost
// (Final, Native, Public)

void UBluEye::TriggerCaptureLost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "TriggerCaptureLost");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.TriggerFocusChange
// (Final, Native, Public)
// Parameters:
// bool                                    Focus                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBluEye::TriggerFocusChange(bool Focus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "TriggerFocusChange");

	Params::BluEye_TriggerFocusChange Parms{};

	Parms.Focus = Focus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.TriggerLeftClick
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector2D                        Pos                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Scale                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBluEye::TriggerLeftClick(const struct FVector2D& Pos, const float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "TriggerLeftClick");

	Params::BluEye_TriggerLeftClick Parms{};

	Parms.Pos = std::move(Pos);
	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.TriggerLeftDoubleClick
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector2D                        Pos                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Scale                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBluEye::TriggerLeftDoubleClick(const struct FVector2D& Pos, const float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "TriggerLeftDoubleClick");

	Params::BluEye_TriggerLeftDoubleClick Parms{};

	Parms.Pos = std::move(Pos);
	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.TriggerLeftMouseDown
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector2D                        Pos                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Scale                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBluEye::TriggerLeftMouseDown(const struct FVector2D& Pos, const float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "TriggerLeftMouseDown");

	Params::BluEye_TriggerLeftMouseDown Parms{};

	Parms.Pos = std::move(Pos);
	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.TriggerLeftMouseUp
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector2D                        Pos                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Scale                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBluEye::TriggerLeftMouseUp(const struct FVector2D& Pos, const float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "TriggerLeftMouseUp");

	Params::BluEye_TriggerLeftMouseUp Parms{};

	Parms.Pos = std::move(Pos);
	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.TriggerMouseMove
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector2D                        Pos                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Scale                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBluEye::TriggerMouseMove(const struct FVector2D& Pos, const float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "TriggerMouseMove");

	Params::BluEye_TriggerMouseMove Parms{};

	Parms.Pos = std::move(Pos);
	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.TriggerMouseWheel
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// float                                   MouseWheelDelta                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        Pos                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Scale                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBluEye::TriggerMouseWheel(const float MouseWheelDelta, const struct FVector2D& Pos, const float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "TriggerMouseWheel");

	Params::BluEye_TriggerMouseWheel Parms{};

	Parms.MouseWheelDelta = MouseWheelDelta;
	Parms.Pos = std::move(Pos);
	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.TriggerRightClick
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector2D                        Pos                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Scale                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBluEye::TriggerRightClick(const struct FVector2D& Pos, const float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "TriggerRightClick");

	Params::BluEye_TriggerRightClick Parms{};

	Parms.Pos = std::move(Pos);
	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.TriggerRightDoubleClick
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector2D                        Pos                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Scale                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBluEye::TriggerRightDoubleClick(const struct FVector2D& Pos, const float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "TriggerRightDoubleClick");

	Params::BluEye_TriggerRightDoubleClick Parms{};

	Parms.Pos = std::move(Pos);
	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.TriggerRightMouseDown
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector2D                        Pos                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Scale                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBluEye::TriggerRightMouseDown(const struct FVector2D& Pos, const float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "TriggerRightMouseDown");

	Params::BluEye_TriggerRightMouseDown Parms{};

	Parms.Pos = std::move(Pos);
	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.TriggerRightMouseUp
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector2D                        Pos                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Scale                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBluEye::TriggerRightMouseUp(const struct FVector2D& Pos, const float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "TriggerRightMouseUp");

	Params::BluEye_TriggerRightMouseUp Parms{};

	Parms.Pos = std::move(Pos);
	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Blu.BluEye.GetPopupTexture
// (Final, Native, Public, Const)
// Parameters:
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UBluEye::GetPopupTexture() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "GetPopupTexture");

	Params::BluEye_GetPopupTexture Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Blu.BluEye.GetTexture
// (Final, Native, Public, Const)
// Parameters:
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UBluEye::GetTexture() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluEye", "GetTexture");

	Params::BluEye_GetTexture Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

