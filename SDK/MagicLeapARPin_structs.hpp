#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapARPin

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum MagicLeapARPin.EMagicLeapARPinType
// NumValues: 0x0004
enum class EMagicLeapARPinType : uint8
{
	SingleUserSingleSession                  = 0,
	SingleUserMultiSession                   = 1,
	MultiUserMultiSession                    = 2,
	EMagicLeapARPinType_MAX                  = 3,
};

// Enum MagicLeapARPin.EMagicLeapAutoPinType
// NumValues: 0x0004
enum class EMagicLeapAutoPinType : uint8
{
	OnlyOnDataRestoration                    = 0,
	Always                                   = 1,
	Never                                    = 2,
	EMagicLeapAutoPinType_MAX                = 3,
};

// Enum MagicLeapARPin.EMagicLeapPassableWorldError
// NumValues: 0x000D
enum class EMagicLeapPassableWorldError : uint8
{
	None                                     = 0,
	LowMapQuality                            = 1,
	UnableToLocalize                         = 2,
	Unavailable                              = 3,
	PrivilegeDenied                          = 4,
	InvalidParam                             = 5,
	UnspecifiedFailure                       = 6,
	PrivilegeRequestPending                  = 7,
	StartupPending                           = 8,
	SharedWorldNotEnabled                    = 9,
	NotImplemented                           = 10,
	PinNotFound                              = 11,
	EMagicLeapPassableWorldError_MAX         = 12,
};

// ScriptStruct MagicLeapARPin.MagicLeapARPinState
// 0x0014 (0x0014 - 0x0000)
struct FMagicLeapARPinState final
{
public:
	float                                         Confidence;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ValidRadius;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationError;                                     // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TranslationError;                                  // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapARPinType                           PinType;                                           // 0x0010(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B92[0x3];                                     // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMagicLeapARPinState) == 0x000004, "Wrong alignment on FMagicLeapARPinState");
static_assert(sizeof(FMagicLeapARPinState) == 0x000014, "Wrong size on FMagicLeapARPinState");
static_assert(offsetof(FMagicLeapARPinState, Confidence) == 0x000000, "Member 'FMagicLeapARPinState::Confidence' has a wrong offset!");
static_assert(offsetof(FMagicLeapARPinState, ValidRadius) == 0x000004, "Member 'FMagicLeapARPinState::ValidRadius' has a wrong offset!");
static_assert(offsetof(FMagicLeapARPinState, RotationError) == 0x000008, "Member 'FMagicLeapARPinState::RotationError' has a wrong offset!");
static_assert(offsetof(FMagicLeapARPinState, TranslationError) == 0x00000C, "Member 'FMagicLeapARPinState::TranslationError' has a wrong offset!");
static_assert(offsetof(FMagicLeapARPinState, PinType) == 0x000010, "Member 'FMagicLeapARPinState::PinType' has a wrong offset!");

// ScriptStruct MagicLeapARPin.MagicLeapARPinQuery
// 0x0068 (0x0068 - 0x0000)
struct FMagicLeapARPinQuery final
{
public:
	TSet<EMagicLeapARPinType>                     Types;                                             // 0x0000(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                         MaxResults;                                        // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                TargetPoint;                                       // 0x0054(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSorted;                                           // 0x0064(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B93[0x3];                                     // 0x0065(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMagicLeapARPinQuery) == 0x000008, "Wrong alignment on FMagicLeapARPinQuery");
static_assert(sizeof(FMagicLeapARPinQuery) == 0x000068, "Wrong size on FMagicLeapARPinQuery");
static_assert(offsetof(FMagicLeapARPinQuery, Types) == 0x000000, "Member 'FMagicLeapARPinQuery::Types' has a wrong offset!");
static_assert(offsetof(FMagicLeapARPinQuery, MaxResults) == 0x000050, "Member 'FMagicLeapARPinQuery::MaxResults' has a wrong offset!");
static_assert(offsetof(FMagicLeapARPinQuery, TargetPoint) == 0x000054, "Member 'FMagicLeapARPinQuery::TargetPoint' has a wrong offset!");
static_assert(offsetof(FMagicLeapARPinQuery, Radius) == 0x000060, "Member 'FMagicLeapARPinQuery::Radius' has a wrong offset!");
static_assert(offsetof(FMagicLeapARPinQuery, bSorted) == 0x000064, "Member 'FMagicLeapARPinQuery::bSorted' has a wrong offset!");

// ScriptStruct MagicLeapARPin.MagicLeapARPinObjectIdList
// 0x0050 (0x0050 - 0x0000)
struct FMagicLeapARPinObjectIdList final
{
public:
	TSet<class FString>                           ObjectIdList;                                      // 0x0000(0x0050)(Edit, EditConst, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMagicLeapARPinObjectIdList) == 0x000008, "Wrong alignment on FMagicLeapARPinObjectIdList");
static_assert(sizeof(FMagicLeapARPinObjectIdList) == 0x000050, "Wrong size on FMagicLeapARPinObjectIdList");
static_assert(offsetof(FMagicLeapARPinObjectIdList, ObjectIdList) == 0x000000, "Member 'FMagicLeapARPinObjectIdList::ObjectIdList' has a wrong offset!");

}

