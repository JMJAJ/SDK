#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Paper2D

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum Paper2D.EFlipbookCollisionMode
// NumValues: 0x0004
enum class EFlipbookCollisionMode : uint8
{
	NoCollision                              = 0,
	FirstFrameCollision                      = 1,
	EachFrameCollision                       = 2,
	EFlipbookCollisionMode_MAX               = 3,
};

// Enum Paper2D.EPaperSpriteAtlasPadding
// NumValues: 0x0003
enum class EPaperSpriteAtlasPadding : uint8
{
	DilateBorder                             = 0,
	PadWithZero                              = 1,
	EPaperSpriteAtlasPadding_MAX             = 2,
};

// Enum Paper2D.ETileMapProjectionMode
// NumValues: 0x0005
enum class ETileMapProjectionMode : uint8
{
	Orthogonal                               = 0,
	IsometricDiamond                         = 1,
	IsometricStaggered                       = 2,
	HexagonalStaggered                       = 3,
	ETileMapProjectionMode_MAX               = 4,
};

// Enum Paper2D.ESpritePivotMode
// NumValues: 0x000B
enum class ESpritePivotMode : uint8
{
	Top_Left                                 = 0,
	Top_Center                               = 1,
	Top_Right                                = 2,
	Center_Left                              = 3,
	Center_Center                            = 4,
	Center_Right                             = 5,
	Bottom_Left                              = 6,
	Bottom_Center                            = 7,
	Bottom_Right                             = 8,
	Custom                                   = 9,
	ESpritePivotMode_MAX                     = 10,
};

// Enum Paper2D.ESpritePolygonMode
// NumValues: 0x0006
enum class ESpritePolygonMode : uint8
{
	SourceBoundingBox                        = 0,
	TightBoundingBox                         = 1,
	ShrinkWrapped                            = 2,
	FullyCustom                              = 3,
	Diced                                    = 4,
	ESpritePolygonMode_MAX                   = 5,
};

// Enum Paper2D.ESpriteShapeType
// NumValues: 0x0004
enum class ESpriteShapeType : uint8
{
	Box                                      = 0,
	Circle                                   = 1,
	Polygon                                  = 2,
	ESpriteShapeType_MAX                     = 3,
};

// Enum Paper2D.ESpriteCollisionMode
// NumValues: 0x0004
enum class ESpriteCollisionMode : uint8
{
	None                                     = 0,
	Use2DPhysics                             = 1,
	Use3DPhysics                             = 2,
	ESpriteCollisionMode_MAX                 = 3,
};

// ScriptStruct Paper2D.IntMargin
// 0x0010 (0x0010 - 0x0000)
struct FIntMargin final
{
public:
	int32                                         Left;                                              // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Top;                                               // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Right;                                             // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Bottom;                                            // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FIntMargin) == 0x000004, "Wrong alignment on FIntMargin");
static_assert(sizeof(FIntMargin) == 0x000010, "Wrong size on FIntMargin");
static_assert(offsetof(FIntMargin, Left) == 0x000000, "Member 'FIntMargin::Left' has a wrong offset!");
static_assert(offsetof(FIntMargin, Top) == 0x000004, "Member 'FIntMargin::Top' has a wrong offset!");
static_assert(offsetof(FIntMargin, Right) == 0x000008, "Member 'FIntMargin::Right' has a wrong offset!");
static_assert(offsetof(FIntMargin, Bottom) == 0x00000C, "Member 'FIntMargin::Bottom' has a wrong offset!");

// ScriptStruct Paper2D.PaperFlipbookKeyFrame
// 0x0010 (0x0010 - 0x0000)
struct FPaperFlipbookKeyFrame final
{
public:
	class UPaperSprite*                           Sprite;                                            // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FrameRun;                                          // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1188[0x4];                                     // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPaperFlipbookKeyFrame) == 0x000008, "Wrong alignment on FPaperFlipbookKeyFrame");
static_assert(sizeof(FPaperFlipbookKeyFrame) == 0x000010, "Wrong size on FPaperFlipbookKeyFrame");
static_assert(offsetof(FPaperFlipbookKeyFrame, Sprite) == 0x000000, "Member 'FPaperFlipbookKeyFrame::Sprite' has a wrong offset!");
static_assert(offsetof(FPaperFlipbookKeyFrame, FrameRun) == 0x000008, "Member 'FPaperFlipbookKeyFrame::FrameRun' has a wrong offset!");

// ScriptStruct Paper2D.SpriteInstanceData
// 0x0050 (0x0050 - 0x0000)
struct FSpriteInstanceData final
{
public:
	struct FMatrix                                Transform;                                         // 0x0000(0x0040)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UPaperSprite*                           SourceSprite;                                      // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 VertexColor;                                       // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaterialIndex;                                     // 0x004C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSpriteInstanceData) == 0x000010, "Wrong alignment on FSpriteInstanceData");
static_assert(sizeof(FSpriteInstanceData) == 0x000050, "Wrong size on FSpriteInstanceData");
static_assert(offsetof(FSpriteInstanceData, Transform) == 0x000000, "Member 'FSpriteInstanceData::Transform' has a wrong offset!");
static_assert(offsetof(FSpriteInstanceData, SourceSprite) == 0x000040, "Member 'FSpriteInstanceData::SourceSprite' has a wrong offset!");
static_assert(offsetof(FSpriteInstanceData, VertexColor) == 0x000048, "Member 'FSpriteInstanceData::VertexColor' has a wrong offset!");
static_assert(offsetof(FSpriteInstanceData, MaterialIndex) == 0x00004C, "Member 'FSpriteInstanceData::MaterialIndex' has a wrong offset!");

// ScriptStruct Paper2D.PaperSpriteSocket
// 0x0040 (0x0040 - 0x0000)
struct FPaperSpriteSocket final
{
public:
	struct FTransform                             LocalTransform;                                    // 0x0000(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                   SocketName;                                        // 0x0030(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1189[0x8];                                     // 0x0038(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPaperSpriteSocket) == 0x000010, "Wrong alignment on FPaperSpriteSocket");
static_assert(sizeof(FPaperSpriteSocket) == 0x000040, "Wrong size on FPaperSpriteSocket");
static_assert(offsetof(FPaperSpriteSocket, LocalTransform) == 0x000000, "Member 'FPaperSpriteSocket::LocalTransform' has a wrong offset!");
static_assert(offsetof(FPaperSpriteSocket, SocketName) == 0x000030, "Member 'FPaperSpriteSocket::SocketName' has a wrong offset!");

// ScriptStruct Paper2D.PaperSpriteAtlasSlot
// 0x0040 (0x0040 - 0x0000)
struct FPaperSpriteAtlasSlot final
{
public:
	TSoftObjectPtr<class UPaperSprite>            SpriteRef;                                         // 0x0000(0x0028)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AtlasIndex;                                        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         X;                                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Y;                                                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Width;                                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Height;                                            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_118A[0x4];                                     // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPaperSpriteAtlasSlot) == 0x000008, "Wrong alignment on FPaperSpriteAtlasSlot");
static_assert(sizeof(FPaperSpriteAtlasSlot) == 0x000040, "Wrong size on FPaperSpriteAtlasSlot");
static_assert(offsetof(FPaperSpriteAtlasSlot, SpriteRef) == 0x000000, "Member 'FPaperSpriteAtlasSlot::SpriteRef' has a wrong offset!");
static_assert(offsetof(FPaperSpriteAtlasSlot, AtlasIndex) == 0x000028, "Member 'FPaperSpriteAtlasSlot::AtlasIndex' has a wrong offset!");
static_assert(offsetof(FPaperSpriteAtlasSlot, X) == 0x00002C, "Member 'FPaperSpriteAtlasSlot::X' has a wrong offset!");
static_assert(offsetof(FPaperSpriteAtlasSlot, Y) == 0x000030, "Member 'FPaperSpriteAtlasSlot::Y' has a wrong offset!");
static_assert(offsetof(FPaperSpriteAtlasSlot, Width) == 0x000034, "Member 'FPaperSpriteAtlasSlot::Width' has a wrong offset!");
static_assert(offsetof(FPaperSpriteAtlasSlot, Height) == 0x000038, "Member 'FPaperSpriteAtlasSlot::Height' has a wrong offset!");

// ScriptStruct Paper2D.PaperTerrainMaterialRule
// 0x0038 (0x0038 - 0x0000)
struct FPaperTerrainMaterialRule final
{
public:
	class UPaperSprite*                           StartCap;                                          // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPaperSprite*>                   Body;                                              // 0x0008(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPaperSprite*                           EndCap;                                            // 0x0018(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinimumAngle;                                      // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaximumAngle;                                      // 0x0024(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableCollision;                                  // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_118B[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CollisionOffset;                                   // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DrawOrder;                                         // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_118C[0x4];                                     // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPaperTerrainMaterialRule) == 0x000008, "Wrong alignment on FPaperTerrainMaterialRule");
static_assert(sizeof(FPaperTerrainMaterialRule) == 0x000038, "Wrong size on FPaperTerrainMaterialRule");
static_assert(offsetof(FPaperTerrainMaterialRule, StartCap) == 0x000000, "Member 'FPaperTerrainMaterialRule::StartCap' has a wrong offset!");
static_assert(offsetof(FPaperTerrainMaterialRule, Body) == 0x000008, "Member 'FPaperTerrainMaterialRule::Body' has a wrong offset!");
static_assert(offsetof(FPaperTerrainMaterialRule, EndCap) == 0x000018, "Member 'FPaperTerrainMaterialRule::EndCap' has a wrong offset!");
static_assert(offsetof(FPaperTerrainMaterialRule, MinimumAngle) == 0x000020, "Member 'FPaperTerrainMaterialRule::MinimumAngle' has a wrong offset!");
static_assert(offsetof(FPaperTerrainMaterialRule, MaximumAngle) == 0x000024, "Member 'FPaperTerrainMaterialRule::MaximumAngle' has a wrong offset!");
static_assert(offsetof(FPaperTerrainMaterialRule, bEnableCollision) == 0x000028, "Member 'FPaperTerrainMaterialRule::bEnableCollision' has a wrong offset!");
static_assert(offsetof(FPaperTerrainMaterialRule, CollisionOffset) == 0x00002C, "Member 'FPaperTerrainMaterialRule::CollisionOffset' has a wrong offset!");
static_assert(offsetof(FPaperTerrainMaterialRule, DrawOrder) == 0x000030, "Member 'FPaperTerrainMaterialRule::DrawOrder' has a wrong offset!");

// ScriptStruct Paper2D.PaperTileInfo
// 0x0010 (0x0010 - 0x0000)
struct FPaperTileInfo final
{
public:
	class UPaperTileSet*                          TileSet;                                           // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PackedTileIndex;                                   // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_118D[0x4];                                     // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPaperTileInfo) == 0x000008, "Wrong alignment on FPaperTileInfo");
static_assert(sizeof(FPaperTileInfo) == 0x000010, "Wrong size on FPaperTileInfo");
static_assert(offsetof(FPaperTileInfo, TileSet) == 0x000000, "Member 'FPaperTileInfo::TileSet' has a wrong offset!");
static_assert(offsetof(FPaperTileInfo, PackedTileIndex) == 0x000008, "Member 'FPaperTileInfo::PackedTileIndex' has a wrong offset!");

// ScriptStruct Paper2D.PaperTileSetTerrain
// 0x0018 (0x0018 - 0x0000)
struct FPaperTileSetTerrain final
{
public:
	class FString                                 TerrainName;                                       // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CenterTileIndex;                                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_118E[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPaperTileSetTerrain) == 0x000008, "Wrong alignment on FPaperTileSetTerrain");
static_assert(sizeof(FPaperTileSetTerrain) == 0x000018, "Wrong size on FPaperTileSetTerrain");
static_assert(offsetof(FPaperTileSetTerrain, TerrainName) == 0x000000, "Member 'FPaperTileSetTerrain::TerrainName' has a wrong offset!");
static_assert(offsetof(FPaperTileSetTerrain, CenterTileIndex) == 0x000010, "Member 'FPaperTileSetTerrain::CenterTileIndex' has a wrong offset!");

// ScriptStruct Paper2D.SpriteGeometryShape
// 0x0030 (0x0030 - 0x0000)
struct FSpriteGeometryShape final
{
public:
	ESpriteShapeType                              ShapeType;                                         // 0x0000(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_118F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector2D>                      Vertices;                                          // 0x0008(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                              BoxSize;                                           // 0x0018(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              BoxPosition;                                       // 0x0020(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Rotation;                                          // 0x0028(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNegativeWinding;                                  // 0x002C(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1190[0x3];                                     // 0x002D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSpriteGeometryShape) == 0x000008, "Wrong alignment on FSpriteGeometryShape");
static_assert(sizeof(FSpriteGeometryShape) == 0x000030, "Wrong size on FSpriteGeometryShape");
static_assert(offsetof(FSpriteGeometryShape, ShapeType) == 0x000000, "Member 'FSpriteGeometryShape::ShapeType' has a wrong offset!");
static_assert(offsetof(FSpriteGeometryShape, Vertices) == 0x000008, "Member 'FSpriteGeometryShape::Vertices' has a wrong offset!");
static_assert(offsetof(FSpriteGeometryShape, BoxSize) == 0x000018, "Member 'FSpriteGeometryShape::BoxSize' has a wrong offset!");
static_assert(offsetof(FSpriteGeometryShape, BoxPosition) == 0x000020, "Member 'FSpriteGeometryShape::BoxPosition' has a wrong offset!");
static_assert(offsetof(FSpriteGeometryShape, Rotation) == 0x000028, "Member 'FSpriteGeometryShape::Rotation' has a wrong offset!");
static_assert(offsetof(FSpriteGeometryShape, bNegativeWinding) == 0x00002C, "Member 'FSpriteGeometryShape::bNegativeWinding' has a wrong offset!");

// ScriptStruct Paper2D.SpriteGeometryCollection
// 0x0030 (0x0030 - 0x0000)
struct FSpriteGeometryCollection final
{
public:
	TArray<struct FSpriteGeometryShape>           Shapes;                                            // 0x0000(0x0010)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	ESpritePolygonMode                            GeometryType;                                      // 0x0010(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1191[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PixelsPerSubdivisionX;                             // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PixelsPerSubdivisionY;                             // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAvoidVertexMerging;                               // 0x001C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1192[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AlphaThreshold;                                    // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DetailAmount;                                      // 0x0024(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SimplifyEpsilon;                                   // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1193[0x4];                                     // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSpriteGeometryCollection) == 0x000008, "Wrong alignment on FSpriteGeometryCollection");
static_assert(sizeof(FSpriteGeometryCollection) == 0x000030, "Wrong size on FSpriteGeometryCollection");
static_assert(offsetof(FSpriteGeometryCollection, Shapes) == 0x000000, "Member 'FSpriteGeometryCollection::Shapes' has a wrong offset!");
static_assert(offsetof(FSpriteGeometryCollection, GeometryType) == 0x000010, "Member 'FSpriteGeometryCollection::GeometryType' has a wrong offset!");
static_assert(offsetof(FSpriteGeometryCollection, PixelsPerSubdivisionX) == 0x000014, "Member 'FSpriteGeometryCollection::PixelsPerSubdivisionX' has a wrong offset!");
static_assert(offsetof(FSpriteGeometryCollection, PixelsPerSubdivisionY) == 0x000018, "Member 'FSpriteGeometryCollection::PixelsPerSubdivisionY' has a wrong offset!");
static_assert(offsetof(FSpriteGeometryCollection, bAvoidVertexMerging) == 0x00001C, "Member 'FSpriteGeometryCollection::bAvoidVertexMerging' has a wrong offset!");
static_assert(offsetof(FSpriteGeometryCollection, AlphaThreshold) == 0x000020, "Member 'FSpriteGeometryCollection::AlphaThreshold' has a wrong offset!");
static_assert(offsetof(FSpriteGeometryCollection, DetailAmount) == 0x000024, "Member 'FSpriteGeometryCollection::DetailAmount' has a wrong offset!");
static_assert(offsetof(FSpriteGeometryCollection, SimplifyEpsilon) == 0x000028, "Member 'FSpriteGeometryCollection::SimplifyEpsilon' has a wrong offset!");

// ScriptStruct Paper2D.PaperTileMetadata
// 0x0040 (0x0040 - 0x0000)
struct FPaperTileMetadata final
{
public:
	class FName                                   UserDataName;                                      // 0x0000(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpriteGeometryCollection              CollisionData;                                     // 0x0008(0x0030)(Edit, NativeAccessSpecifierPublic)
	uint8                                         TerrainMembership[0x4];                            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1194[0x4];                                     // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPaperTileMetadata) == 0x000008, "Wrong alignment on FPaperTileMetadata");
static_assert(sizeof(FPaperTileMetadata) == 0x000040, "Wrong size on FPaperTileMetadata");
static_assert(offsetof(FPaperTileMetadata, UserDataName) == 0x000000, "Member 'FPaperTileMetadata::UserDataName' has a wrong offset!");
static_assert(offsetof(FPaperTileMetadata, CollisionData) == 0x000008, "Member 'FPaperTileMetadata::CollisionData' has a wrong offset!");
static_assert(offsetof(FPaperTileMetadata, TerrainMembership) == 0x000038, "Member 'FPaperTileMetadata::TerrainMembership' has a wrong offset!");

// ScriptStruct Paper2D.SpriteDrawCallRecord
// 0x00D0 (0x00D0 - 0x0000)
struct alignas(0x10) FSpriteDrawCallRecord final
{
public:
	struct FVector                                Destination;                                       // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1195[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               BaseTexture;                                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1196[0x30];                                    // 0x0018(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColor                                 Color;                                             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1197[0x84];                                    // 0x004C(0x0084)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSpriteDrawCallRecord) == 0x000010, "Wrong alignment on FSpriteDrawCallRecord");
static_assert(sizeof(FSpriteDrawCallRecord) == 0x0000D0, "Wrong size on FSpriteDrawCallRecord");
static_assert(offsetof(FSpriteDrawCallRecord, Destination) == 0x000000, "Member 'FSpriteDrawCallRecord::Destination' has a wrong offset!");
static_assert(offsetof(FSpriteDrawCallRecord, BaseTexture) == 0x000010, "Member 'FSpriteDrawCallRecord::BaseTexture' has a wrong offset!");
static_assert(offsetof(FSpriteDrawCallRecord, Color) == 0x000048, "Member 'FSpriteDrawCallRecord::Color' has a wrong offset!");

// ScriptStruct Paper2D.SpriteAssetInitParameters
// 0x0040 (0x0040 - 0x0000)
struct alignas(0x08) FSpriteAssetInitParameters final
{
public:
	uint8                                         Pad_1198[0x40];                                    // 0x0000(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSpriteAssetInitParameters) == 0x000008, "Wrong alignment on FSpriteAssetInitParameters");
static_assert(sizeof(FSpriteAssetInitParameters) == 0x000040, "Wrong size on FSpriteAssetInitParameters");

}

