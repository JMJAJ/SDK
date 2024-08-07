#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Nuwa

#include "Basic.hpp"

#include "Nuwa_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class Nuwa.Expression
// 0x00C8 (0x00F0 - 0x0028)
class UExpression final : public UObject
{
public:
	class USkeleton*                              Skeleton;                                          // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                          SkeletalMesh;                                      // 0x0030(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UExpressionMorph*                       PreviewMorph;                                      // 0x0038(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                          IdleAnim;                                          // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                          ShowAnim;                                          // 0x0048(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                          MouthAnim;                                         // 0x0050(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                             MouthSound;                                        // 0x0058(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<EExpressionPrefab, class UExpressionMorph*> Prefabs;                                           // 0x0060(0x0050)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FExpressionKeyMorph>            KeyMorphs;                                         // 0x00B0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FExpressionKeyMorphWink>        KeyMorphWinks;                                     // 0x00C0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         MorphWinkInterval;                                 // 0x00D0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19B9[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPoseAsset*                             PreviewPoseAsset;                                  // 0x00D8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19BA[0x10];                                    // 0x00E0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Expression">();
	}
	static class UExpression* GetDefaultObj()
	{
		return GetDefaultObjImpl<UExpression>();
	}
};
static_assert(alignof(UExpression) == 0x000008, "Wrong alignment on UExpression");
static_assert(sizeof(UExpression) == 0x0000F0, "Wrong size on UExpression");
static_assert(offsetof(UExpression, Skeleton) == 0x000028, "Member 'UExpression::Skeleton' has a wrong offset!");
static_assert(offsetof(UExpression, SkeletalMesh) == 0x000030, "Member 'UExpression::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(UExpression, PreviewMorph) == 0x000038, "Member 'UExpression::PreviewMorph' has a wrong offset!");
static_assert(offsetof(UExpression, IdleAnim) == 0x000040, "Member 'UExpression::IdleAnim' has a wrong offset!");
static_assert(offsetof(UExpression, ShowAnim) == 0x000048, "Member 'UExpression::ShowAnim' has a wrong offset!");
static_assert(offsetof(UExpression, MouthAnim) == 0x000050, "Member 'UExpression::MouthAnim' has a wrong offset!");
static_assert(offsetof(UExpression, MouthSound) == 0x000058, "Member 'UExpression::MouthSound' has a wrong offset!");
static_assert(offsetof(UExpression, Prefabs) == 0x000060, "Member 'UExpression::Prefabs' has a wrong offset!");
static_assert(offsetof(UExpression, KeyMorphs) == 0x0000B0, "Member 'UExpression::KeyMorphs' has a wrong offset!");
static_assert(offsetof(UExpression, KeyMorphWinks) == 0x0000C0, "Member 'UExpression::KeyMorphWinks' has a wrong offset!");
static_assert(offsetof(UExpression, MorphWinkInterval) == 0x0000D0, "Member 'UExpression::MorphWinkInterval' has a wrong offset!");
static_assert(offsetof(UExpression, PreviewPoseAsset) == 0x0000D8, "Member 'UExpression::PreviewPoseAsset' has a wrong offset!");

// Class Nuwa.ExpressionKeyRecord
// 0x0028 (0x0050 - 0x0028)
class UExpressionKeyRecord final : public UObject
{
public:
	class FName                                   Testname;                                          // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FExpressionKeyMorph>            KeyMorphs;                                         // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FExpressionKeyMorphWink>        KeyMorphWinks;                                     // 0x0040(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ExpressionKeyRecord">();
	}
	static class UExpressionKeyRecord* GetDefaultObj()
	{
		return GetDefaultObjImpl<UExpressionKeyRecord>();
	}
};
static_assert(alignof(UExpressionKeyRecord) == 0x000008, "Wrong alignment on UExpressionKeyRecord");
static_assert(sizeof(UExpressionKeyRecord) == 0x000050, "Wrong size on UExpressionKeyRecord");
static_assert(offsetof(UExpressionKeyRecord, Testname) == 0x000028, "Member 'UExpressionKeyRecord::Testname' has a wrong offset!");
static_assert(offsetof(UExpressionKeyRecord, KeyMorphs) == 0x000030, "Member 'UExpressionKeyRecord::KeyMorphs' has a wrong offset!");
static_assert(offsetof(UExpressionKeyRecord, KeyMorphWinks) == 0x000040, "Member 'UExpressionKeyRecord::KeyMorphWinks' has a wrong offset!");

// Class Nuwa.ExpressionMorph
// 0x0020 (0x0048 - 0x0028)
class UExpressionMorph final : public UObject
{
public:
	class USkeletalMesh*                          SkeletalMesh;                                      // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FExpressionMorphTargetInfo>     Morphs;                                            // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPoseAsset*                             ReferencePose;                                     // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ExpressionMorph">();
	}
	static class UExpressionMorph* GetDefaultObj()
	{
		return GetDefaultObjImpl<UExpressionMorph>();
	}
};
static_assert(alignof(UExpressionMorph) == 0x000008, "Wrong alignment on UExpressionMorph");
static_assert(sizeof(UExpressionMorph) == 0x000048, "Wrong size on UExpressionMorph");
static_assert(offsetof(UExpressionMorph, SkeletalMesh) == 0x000028, "Member 'UExpressionMorph::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(UExpressionMorph, Morphs) == 0x000030, "Member 'UExpressionMorph::Morphs' has a wrong offset!");
static_assert(offsetof(UExpressionMorph, ReferencePose) == 0x000040, "Member 'UExpressionMorph::ReferencePose' has a wrong offset!");

// Class Nuwa.FaceArRecord
// 0x0020 (0x0048 - 0x0028)
class UFaceArRecord final : public UObject
{
public:
	class USkeletalMesh*                          SkeletalMesh;                                      // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimBlueprint*                         AnimBlueprint;                                     // 0x0030(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPoseAsset*                             PoseAsset;                                         // 0x0038(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeleton*                              Skeleton;                                          // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FaceArRecord">();
	}
	static class UFaceArRecord* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFaceArRecord>();
	}
};
static_assert(alignof(UFaceArRecord) == 0x000008, "Wrong alignment on UFaceArRecord");
static_assert(sizeof(UFaceArRecord) == 0x000048, "Wrong size on UFaceArRecord");
static_assert(offsetof(UFaceArRecord, SkeletalMesh) == 0x000028, "Member 'UFaceArRecord::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(UFaceArRecord, AnimBlueprint) == 0x000030, "Member 'UFaceArRecord::AnimBlueprint' has a wrong offset!");
static_assert(offsetof(UFaceArRecord, PoseAsset) == 0x000038, "Member 'UFaceArRecord::PoseAsset' has a wrong offset!");
static_assert(offsetof(UFaceArRecord, Skeleton) == 0x000040, "Member 'UFaceArRecord::Skeleton' has a wrong offset!");

// Class Nuwa.FaceObject
// 0x00C8 (0x00F0 - 0x0028)
class UFaceObject final : public UObject
{
public:
	uint8                                         Pad_19BB[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFaceData                              Data;                                              // 0x0030(0x0058)(Edit, NativeAccessSpecifierPublic)
	struct FMakeupDataEx                          Makeup;                                            // 0x0088(0x0050)(Edit, NativeAccessSpecifierPublic)
	class USkeleton*                              Skeleton;                                          // 0x00D8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                          SkeletalMesh;                                      // 0x00E0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                          SkeletalAnim;                                      // 0x00E8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FaceObject">();
	}
	static class UFaceObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFaceObject>();
	}
};
static_assert(alignof(UFaceObject) == 0x000008, "Wrong alignment on UFaceObject");
static_assert(sizeof(UFaceObject) == 0x0000F0, "Wrong size on UFaceObject");
static_assert(offsetof(UFaceObject, Data) == 0x000030, "Member 'UFaceObject::Data' has a wrong offset!");
static_assert(offsetof(UFaceObject, Makeup) == 0x000088, "Member 'UFaceObject::Makeup' has a wrong offset!");
static_assert(offsetof(UFaceObject, Skeleton) == 0x0000D8, "Member 'UFaceObject::Skeleton' has a wrong offset!");
static_assert(offsetof(UFaceObject, SkeletalMesh) == 0x0000E0, "Member 'UFaceObject::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(UFaceObject, SkeletalAnim) == 0x0000E8, "Member 'UFaceObject::SkeletalAnim' has a wrong offset!");

}

