#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Thunder

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Thunder.BP_Thunder_C.PlaySound_
// 0x0008 (0x0008 - 0x0000)
struct BP_Thunder_C_PlaySound_ final
{
public:
	class UAudioComponent*                        InputPin;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Thunder_C_PlaySound_) == 0x000008, "Wrong alignment on BP_Thunder_C_PlaySound_");
static_assert(sizeof(BP_Thunder_C_PlaySound_) == 0x000008, "Wrong size on BP_Thunder_C_PlaySound_");
static_assert(offsetof(BP_Thunder_C_PlaySound_, InputPin) == 0x000000, "Member 'BP_Thunder_C_PlaySound_::InputPin' has a wrong offset!");

// Function BP_Thunder.BP_Thunder_C.UserConstructionScript
// 0x0038 (0x0038 - 0x0000)
struct BP_Thunder_C_UserConstructionScript final
{
public:
	int32                                         ___int_Array_Index_Variable;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5513[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5514[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Thunder_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_Thunder_C_UserConstructionScript");
static_assert(sizeof(BP_Thunder_C_UserConstructionScript) == 0x000038, "Wrong size on BP_Thunder_C_UserConstructionScript");
static_assert(offsetof(BP_Thunder_C_UserConstructionScript, ___int_Array_Index_Variable) == 0x000000, "Member 'BP_Thunder_C_UserConstructionScript::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_UserConstructionScript, ___int_Loop_Counter_Variable) == 0x000004, "Member 'BP_Thunder_C_UserConstructionScript::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_Thunder_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000010, "Member 'BP_Thunder_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_Thunder_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_Thunder_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'BP_Thunder_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_UserConstructionScript, CallFunc_Array_Add_ReturnValue) == 0x000028, "Member 'BP_Thunder_C_UserConstructionScript::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_UserConstructionScript, CallFunc_Array_Add_ReturnValue_1) == 0x00002C, "Member 'BP_Thunder_C_UserConstructionScript::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_UserConstructionScript, CallFunc_Array_Add_ReturnValue_2) == 0x000030, "Member 'BP_Thunder_C_UserConstructionScript::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_UserConstructionScript, CallFunc_Array_Add_ReturnValue_3) == 0x000034, "Member 'BP_Thunder_C_UserConstructionScript::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");

// Function BP_Thunder.BP_Thunder_C._AimTarget
// 0x0008 (0x0008 - 0x0000)
struct BP_Thunder_C__AimTarget final
{
public:
	class UMeshComponent*                         Mesh;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Thunder_C__AimTarget) == 0x000008, "Wrong alignment on BP_Thunder_C__AimTarget");
static_assert(sizeof(BP_Thunder_C__AimTarget) == 0x000008, "Wrong size on BP_Thunder_C__AimTarget");
static_assert(offsetof(BP_Thunder_C__AimTarget, Mesh) == 0x000000, "Member 'BP_Thunder_C__AimTarget::Mesh' has a wrong offset!");

// Function BP_Thunder.BP_Thunder_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Thunder_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Thunder_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Thunder_C_ReceiveTick");
static_assert(sizeof(BP_Thunder_C_ReceiveTick) == 0x000004, "Wrong size on BP_Thunder_C_ReceiveTick");
static_assert(offsetof(BP_Thunder_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Thunder_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_Thunder.BP_Thunder_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_Thunder_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Thunder_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_Thunder_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_Thunder_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_Thunder_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_Thunder_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_Thunder_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_Thunder.BP_Thunder_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_Thunder_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Thunder_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_Thunder_C_ReceiveEndPlay");
static_assert(sizeof(BP_Thunder_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_Thunder_C_ReceiveEndPlay");
static_assert(offsetof(BP_Thunder_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_Thunder_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_Thunder.BP_Thunder_C.ExecuteUbergraph_BP_Thunder
// 0x0318 (0x0318 - 0x0000)
struct BP_Thunder_C_ExecuteUbergraph_BP_Thunder final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5515[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         ___object_Variable;                                // 0x0008(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                         K2Node_CustomEvent_Mesh;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloat_ReturnValue;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5516[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable;                       // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5517[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item_1;                         // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable_1;                     // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5518[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_Array_Get_Item_2;                         // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5519[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ___int_Loop_Counter_Variable_1;                    // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_551A[0x2];                                     // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomPointInBoundingBox_ReturnValue;     // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomPointInBoundingBox_ReturnValue_1;   // 0x00C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_551B[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x00DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_551C[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEventAtLocation_ReturnValue;          // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0114(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0120(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x012C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_SphereTraceSingle_OutHit;                 // 0x0138(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceSingle_ReturnValue;            // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_551D[0x3];                                     // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotFromZ_ReturnValue;                 // 0x01C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x01D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_551E[0x2];                                     // 0x01E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0204(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0210(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_551F[0x4];                                     // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0230(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0244(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0248(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0254(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x0260(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x02EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_2;      // 0x02F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0300(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x030C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder) == 0x000008, "Wrong alignment on BP_Thunder_C_ExecuteUbergraph_BP_Thunder");
static_assert(sizeof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder) == 0x000318, "Wrong size on BP_Thunder_C_ExecuteUbergraph_BP_Thunder");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, EntryPoint) == 0x000000, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, ___object_Variable) == 0x000008, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::___object_Variable' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Array_Length_ReturnValue_1) == 0x00001C, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000024, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, K2Node_CustomEvent_Mesh) == 0x000030, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::K2Node_CustomEvent_Mesh' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_RandomFloat_ReturnValue) == 0x000038, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00003C, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_MakeRotator_ReturnValue) == 0x000040, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_RandomFloatInRange_ReturnValue) == 0x00004C, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, K2Node_Event_DeltaSeconds) == 0x000050, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, K2Node_Event_OtherActor) == 0x000058, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, ___int_Loop_Counter_Variable) == 0x000060, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, ___int_Array_Index_Variable) == 0x000064, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Array_Get_Item_1) == 0x000070, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, ___int_Array_Index_Variable_1) == 0x00007C, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::___int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Array_Length_ReturnValue_2) == 0x000080, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Array_Get_Item_2) == 0x000088, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, K2Node_Event_EndPlayReason) == 0x000090, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, ___int_Loop_Counter_Variable_1) == 0x000094, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::___int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_IsValid_ReturnValue) == 0x000098, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Less_IntInt_ReturnValue_1) == 0x000099, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Add_IntInt_ReturnValue_1) == 0x00009C, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0000A0, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x0000AC, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_RandomPointInBoundingBox_ReturnValue) == 0x0000B8, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_RandomPointInBoundingBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_RandomPointInBoundingBox_ReturnValue_1) == 0x0000C4, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_RandomPointInBoundingBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x0000D0, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_IsValid_ReturnValue_1) == 0x0000D8, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0000DC, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakRotator_Roll) == 0x0000E8, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakRotator_Pitch) == 0x0000EC, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakRotator_Yaw) == 0x0000F0, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_MakeRotator_ReturnValue_1) == 0x0000F4, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000100, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_K2_GetComponentLocation_ReturnValue_2) == 0x000104, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_K2_GetComponentLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_PostEventAtLocation_ReturnValue) == 0x000110, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_PostEventAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000114, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Add_VectorVector_ReturnValue) == 0x000120, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x00012C, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_SphereTraceSingle_OutHit) == 0x000138, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_SphereTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_SphereTraceSingle_ReturnValue) == 0x0001C4, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_SphereTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_MakeRotFromZ_ReturnValue) == 0x0001C8, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_MakeRotFromZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_ComposeRotators_ReturnValue) == 0x0001D4, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakHitResult_bBlockingHit) == 0x0001E0, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001E1, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakHitResult_Time) == 0x0001E4, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakHitResult_Distance) == 0x0001E8, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakHitResult_Location) == 0x0001EC, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakHitResult_ImpactPoint) == 0x0001F8, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakHitResult_Normal) == 0x000204, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakHitResult_ImpactNormal) == 0x000210, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakHitResult_PhysMat) == 0x000220, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakHitResult_HitActor) == 0x000228, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakHitResult_HitComponent) == 0x000230, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakHitResult_HitBoneName) == 0x000238, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakHitResult_HitItem) == 0x000240, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakHitResult_FaceIndex) == 0x000244, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakHitResult_TraceStart) == 0x000248, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_BreakHitResult_TraceEnd) == 0x000254, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x000260, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_VSize_ReturnValue) == 0x0002EC, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0002F0, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Subtract_VectorVector_ReturnValue_2) == 0x0002F4, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Subtract_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000300, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thunder_C_ExecuteUbergraph_BP_Thunder, CallFunc_Add_VectorVector_ReturnValue_1) == 0x00030C, "Member 'BP_Thunder_C_ExecuteUbergraph_BP_Thunder::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");

}

