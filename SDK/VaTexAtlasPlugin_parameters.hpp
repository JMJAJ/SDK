#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaTexAtlasPlugin

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function VaTexAtlasPlugin.VtaPluginFunctionLibrary.CopyBrushWithSlateTexture
// 0x0118 (0x0118 - 0x0000)
struct VtaPluginFunctionLibrary_CopyBrushWithSlateTexture final
{
public:
	class UVtaSlateTexture*                       Texture;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                            SourceBrush;                                       // 0x0008(0x0088)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSlateBrush                            ReturnValue;                                       // 0x0090(0x0088)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(VtaPluginFunctionLibrary_CopyBrushWithSlateTexture) == 0x000008, "Wrong alignment on VtaPluginFunctionLibrary_CopyBrushWithSlateTexture");
static_assert(sizeof(VtaPluginFunctionLibrary_CopyBrushWithSlateTexture) == 0x000118, "Wrong size on VtaPluginFunctionLibrary_CopyBrushWithSlateTexture");
static_assert(offsetof(VtaPluginFunctionLibrary_CopyBrushWithSlateTexture, Texture) == 0x000000, "Member 'VtaPluginFunctionLibrary_CopyBrushWithSlateTexture::Texture' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_CopyBrushWithSlateTexture, SourceBrush) == 0x000008, "Member 'VtaPluginFunctionLibrary_CopyBrushWithSlateTexture::SourceBrush' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_CopyBrushWithSlateTexture, ReturnValue) == 0x000090, "Member 'VtaPluginFunctionLibrary_CopyBrushWithSlateTexture::ReturnValue' has a wrong offset!");

// Function VaTexAtlasPlugin.VtaPluginFunctionLibrary.DrawSlateTexture
// 0x0060 (0x0060 - 0x0000)
struct VtaPluginFunctionLibrary_DrawSlateTexture final
{
public:
	class AHUD*                                   Target;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVtaSlateTexture*                       Texture;                                           // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScreenX;                                           // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScreenY;                                           // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScreenW;                                           // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScreenH;                                           // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TextureU;                                          // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TextureV;                                          // 0x0024(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TextureUWidth;                                     // 0x0028(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TextureVHeight;                                    // 0x002C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Tint;                                              // 0x0030(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBlendMode                                    BlendMode;                                         // 0x0040(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1545[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Scale;                                             // 0x0044(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bScalePosition;                                    // 0x0048(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1546[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Rotation;                                          // 0x004C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              RotPivot;                                          // 0x0050(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFlipX;                                            // 0x0058(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFlipY;                                            // 0x0059(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1547[0x6];                                     // 0x005A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(VtaPluginFunctionLibrary_DrawSlateTexture) == 0x000008, "Wrong alignment on VtaPluginFunctionLibrary_DrawSlateTexture");
static_assert(sizeof(VtaPluginFunctionLibrary_DrawSlateTexture) == 0x000060, "Wrong size on VtaPluginFunctionLibrary_DrawSlateTexture");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture, Target) == 0x000000, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture::Target' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture, Texture) == 0x000008, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture::Texture' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture, ScreenX) == 0x000010, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture::ScreenX' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture, ScreenY) == 0x000014, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture::ScreenY' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture, ScreenW) == 0x000018, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture::ScreenW' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture, ScreenH) == 0x00001C, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture::ScreenH' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture, TextureU) == 0x000020, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture::TextureU' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture, TextureV) == 0x000024, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture::TextureV' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture, TextureUWidth) == 0x000028, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture::TextureUWidth' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture, TextureVHeight) == 0x00002C, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture::TextureVHeight' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture, Tint) == 0x000030, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture::Tint' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture, BlendMode) == 0x000040, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture::BlendMode' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture, Scale) == 0x000044, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture::Scale' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture, bScalePosition) == 0x000048, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture::bScalePosition' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture, Rotation) == 0x00004C, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture::Rotation' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture, RotPivot) == 0x000050, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture::RotPivot' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture, bFlipX) == 0x000058, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture::bFlipX' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture, bFlipY) == 0x000059, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture::bFlipY' has a wrong offset!");

// Function VaTexAtlasPlugin.VtaPluginFunctionLibrary.DrawSlateTexture9Slice
// 0x0060 (0x0060 - 0x0000)
struct VtaPluginFunctionLibrary_DrawSlateTexture9Slice final
{
public:
	class AHUD*                                   Target;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVtaSlateTexture*                       Texture;                                           // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScreenX;                                           // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScreenY;                                           // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScreenW;                                           // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScreenH;                                           // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TextureU;                                          // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TextureV;                                          // 0x0024(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TextureUWidth;                                     // 0x0028(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TextureVHeight;                                    // 0x002C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MarginLeft;                                        // 0x0030(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MarginTop;                                         // 0x0034(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MarginRight;                                       // 0x0038(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MarginBottom;                                      // 0x003C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OriginalWidth;                                     // 0x0040(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OriginalHeight;                                    // 0x0044(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Tint;                                              // 0x0048(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBlendMode                                    BlendMode;                                         // 0x0058(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1548[0x7];                                     // 0x0059(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice) == 0x000008, "Wrong alignment on VtaPluginFunctionLibrary_DrawSlateTexture9Slice");
static_assert(sizeof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice) == 0x000060, "Wrong size on VtaPluginFunctionLibrary_DrawSlateTexture9Slice");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice, Target) == 0x000000, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture9Slice::Target' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice, Texture) == 0x000008, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture9Slice::Texture' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice, ScreenX) == 0x000010, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture9Slice::ScreenX' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice, ScreenY) == 0x000014, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture9Slice::ScreenY' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice, ScreenW) == 0x000018, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture9Slice::ScreenW' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice, ScreenH) == 0x00001C, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture9Slice::ScreenH' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice, TextureU) == 0x000020, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture9Slice::TextureU' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice, TextureV) == 0x000024, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture9Slice::TextureV' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice, TextureUWidth) == 0x000028, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture9Slice::TextureUWidth' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice, TextureVHeight) == 0x00002C, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture9Slice::TextureVHeight' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice, MarginLeft) == 0x000030, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture9Slice::MarginLeft' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice, MarginTop) == 0x000034, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture9Slice::MarginTop' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice, MarginRight) == 0x000038, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture9Slice::MarginRight' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice, MarginBottom) == 0x00003C, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture9Slice::MarginBottom' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice, OriginalWidth) == 0x000040, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture9Slice::OriginalWidth' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice, OriginalHeight) == 0x000044, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture9Slice::OriginalHeight' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice, Tint) == 0x000048, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture9Slice::Tint' has a wrong offset!");
static_assert(offsetof(VtaPluginFunctionLibrary_DrawSlateTexture9Slice, BlendMode) == 0x000058, "Member 'VtaPluginFunctionLibrary_DrawSlateTexture9Slice::BlendMode' has a wrong offset!");

// Function VaTexAtlasPlugin.VtaSlateTexture.CreateRegion
// 0x0018 (0x0018 - 0x0000)
struct VtaSlateTexture_CreateRegion final
{
public:
	struct FMargin                                Margin;                                            // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UVtaSlateTexture*                       ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VtaSlateTexture_CreateRegion) == 0x000008, "Wrong alignment on VtaSlateTexture_CreateRegion");
static_assert(sizeof(VtaSlateTexture_CreateRegion) == 0x000018, "Wrong size on VtaSlateTexture_CreateRegion");
static_assert(offsetof(VtaSlateTexture_CreateRegion, Margin) == 0x000000, "Member 'VtaSlateTexture_CreateRegion::Margin' has a wrong offset!");
static_assert(offsetof(VtaSlateTexture_CreateRegion, ReturnValue) == 0x000010, "Member 'VtaSlateTexture_CreateRegion::ReturnValue' has a wrong offset!");

// Function VaTexAtlasPlugin.VtaSlateTexture.GetDimensions
// 0x0008 (0x0008 - 0x0000)
struct VtaSlateTexture_GetDimensions final
{
public:
	struct FVector2D                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VtaSlateTexture_GetDimensions) == 0x000004, "Wrong alignment on VtaSlateTexture_GetDimensions");
static_assert(sizeof(VtaSlateTexture_GetDimensions) == 0x000008, "Wrong size on VtaSlateTexture_GetDimensions");
static_assert(offsetof(VtaSlateTexture_GetDimensions, ReturnValue) == 0x000000, "Member 'VtaSlateTexture_GetDimensions::ReturnValue' has a wrong offset!");

}

