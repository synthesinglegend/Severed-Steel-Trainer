﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DebugHUD

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function DebugHUD.DebugHUD_C.ExecuteUbergraph_DebugHUD
// 0x0040 (0x0040 - 0x0000)
struct DebugHUD_C_ExecuteUbergraph_DebugHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SizeX;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SizeY;                                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x000C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugHUD_C_ExecuteUbergraph_DebugHUD) == 0x000008, "Wrong alignment on DebugHUD_C_ExecuteUbergraph_DebugHUD");
static_assert(sizeof(DebugHUD_C_ExecuteUbergraph_DebugHUD) == 0x000040, "Wrong size on DebugHUD_C_ExecuteUbergraph_DebugHUD");
static_assert(offsetof(DebugHUD_C_ExecuteUbergraph_DebugHUD, EntryPoint) == 0x000000, "Member 'DebugHUD_C_ExecuteUbergraph_DebugHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_ExecuteUbergraph_DebugHUD, K2Node_Event_SizeX) == 0x000004, "Member 'DebugHUD_C_ExecuteUbergraph_DebugHUD::K2Node_Event_SizeX' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_ExecuteUbergraph_DebugHUD, K2Node_Event_SizeY) == 0x000008, "Member 'DebugHUD_C_ExecuteUbergraph_DebugHUD::K2Node_Event_SizeY' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_ExecuteUbergraph_DebugHUD, K2Node_MakeStruct_LinearColor) == 0x00000C, "Member 'DebugHUD_C_ExecuteUbergraph_DebugHUD::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_ExecuteUbergraph_DebugHUD, CallFunc_Divide_IntInt_ReturnValue) == 0x00001C, "Member 'DebugHUD_C_ExecuteUbergraph_DebugHUD::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_ExecuteUbergraph_DebugHUD, CallFunc_Divide_IntInt_ReturnValue_1) == 0x000020, "Member 'DebugHUD_C_ExecuteUbergraph_DebugHUD::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_ExecuteUbergraph_DebugHUD, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'DebugHUD_C_ExecuteUbergraph_DebugHUD::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_ExecuteUbergraph_DebugHUD, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'DebugHUD_C_ExecuteUbergraph_DebugHUD::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_ExecuteUbergraph_DebugHUD, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00002C, "Member 'DebugHUD_C_ExecuteUbergraph_DebugHUD::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_ExecuteUbergraph_DebugHUD, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000030, "Member 'DebugHUD_C_ExecuteUbergraph_DebugHUD::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_ExecuteUbergraph_DebugHUD, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000038, "Member 'DebugHUD_C_ExecuteUbergraph_DebugHUD::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function DebugHUD.DebugHUD_C.ReceiveDrawHUD
// 0x0008 (0x0008 - 0x0000)
struct DebugHUD_C_ReceiveDrawHUD final
{
public:
	int32                                         SizeX;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SizeY;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugHUD_C_ReceiveDrawHUD) == 0x000004, "Wrong alignment on DebugHUD_C_ReceiveDrawHUD");
static_assert(sizeof(DebugHUD_C_ReceiveDrawHUD) == 0x000008, "Wrong size on DebugHUD_C_ReceiveDrawHUD");
static_assert(offsetof(DebugHUD_C_ReceiveDrawHUD, SizeX) == 0x000000, "Member 'DebugHUD_C_ReceiveDrawHUD::SizeX' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_ReceiveDrawHUD, SizeY) == 0x000004, "Member 'DebugHUD_C_ReceiveDrawHUD::SizeY' has a wrong offset!");

// Function DebugHUD.DebugHUD_C.DrawAimAssistDebug
// 0x0060 (0x0060 - 0x0000)
struct DebugHUD_C_DrawAimAssistDebug final
{
public:
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Project_ReturnValue;                      // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugHUD_C_DrawAimAssistDebug) == 0x000008, "Wrong alignment on DebugHUD_C_DrawAimAssistDebug");
static_assert(sizeof(DebugHUD_C_DrawAimAssistDebug) == 0x000060, "Wrong size on DebugHUD_C_DrawAimAssistDebug");
static_assert(offsetof(DebugHUD_C_DrawAimAssistDebug, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000000, "Member 'DebugHUD_C_DrawAimAssistDebug::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawAimAssistDebug, CallFunc_Project_ReturnValue) == 0x00000C, "Member 'DebugHUD_C_DrawAimAssistDebug::CallFunc_Project_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawAimAssistDebug, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000018, "Member 'DebugHUD_C_DrawAimAssistDebug::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawAimAssistDebug, CallFunc_BreakVector_X) == 0x000020, "Member 'DebugHUD_C_DrawAimAssistDebug::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawAimAssistDebug, CallFunc_BreakVector_Y) == 0x000024, "Member 'DebugHUD_C_DrawAimAssistDebug::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawAimAssistDebug, CallFunc_BreakVector_Z) == 0x000028, "Member 'DebugHUD_C_DrawAimAssistDebug::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawAimAssistDebug, CallFunc_GetCameraLocation_ReturnValue) == 0x00002C, "Member 'DebugHUD_C_DrawAimAssistDebug::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawAimAssistDebug, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000038, "Member 'DebugHUD_C_DrawAimAssistDebug::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawAimAssistDebug, CallFunc_VSize_ReturnValue) == 0x000044, "Member 'DebugHUD_C_DrawAimAssistDebug::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawAimAssistDebug, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000048, "Member 'DebugHUD_C_DrawAimAssistDebug::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawAimAssistDebug, CallFunc_FClamp_ReturnValue) == 0x00004C, "Member 'DebugHUD_C_DrawAimAssistDebug::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawAimAssistDebug, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000050, "Member 'DebugHUD_C_DrawAimAssistDebug::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawAimAssistDebug, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000054, "Member 'DebugHUD_C_DrawAimAssistDebug::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawAimAssistDebug, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000058, "Member 'DebugHUD_C_DrawAimAssistDebug::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawAimAssistDebug, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x00005C, "Member 'DebugHUD_C_DrawAimAssistDebug::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");

// Function DebugHUD.DebugHUD_C.DrawDeadzoneDebug
// 0x01F0 (0x01F0 - 0x0000)
struct DebugHUD_C_DrawDeadzoneDebug final
{
public:
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue;            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue;        // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_7;              // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_8;              // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_9;              // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0124(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_3;        // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue_1;      // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_ClampVectorSize_ReturnValue;              // 0x0140(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue_1;     // 0x014C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x0154(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue_2;      // 0x015C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_4;        // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_ClampVectorSize_ReturnValue_1;            // 0x016C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_5;        // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue_1;      // 0x017C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0184(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue_2;     // 0x018C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x0194(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue_3;      // 0x019C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_ClampVectorSize_ReturnValue_2;            // 0x01B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue_2;      // 0x01BC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue_1;       // 0x01C4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue_2;       // 0x01CC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_3;                        // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_3;                        // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_6;        // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_7;        // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugHUD_C_DrawDeadzoneDebug) == 0x000008, "Wrong alignment on DebugHUD_C_DrawDeadzoneDebug");
static_assert(sizeof(DebugHUD_C_DrawDeadzoneDebug) == 0x0001F0, "Wrong size on DebugHUD_C_DrawDeadzoneDebug");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Conv_FloatToString_ReturnValue) == 0x000000, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Conv_BoolToString_ReturnValue) == 0x000010, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Conv_BoolToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_GetDisplayName_ReturnValue) == 0x000020, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Conv_FloatToString_ReturnValue_1) == 0x000030, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Conv_FloatToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Concat_StrStr_ReturnValue) == 0x000040, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Conv_Vector2DToVector_ReturnValue) == 0x000050, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Conv_Vector2DToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000060, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x000070, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000080, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000090, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0000A0, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Concat_StrStr_ReturnValue_5) == 0x0000B0, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Concat_StrStr_ReturnValue_6) == 0x0000C0, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Concat_StrStr_ReturnValue_7) == 0x0000D0, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Concat_StrStr_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Concat_StrStr_ReturnValue_8) == 0x0000E0, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Concat_StrStr_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Concat_StrStr_ReturnValue_9) == 0x0000F0, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Concat_StrStr_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_GetViewportSize_ReturnValue) == 0x000100, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_BreakVector2D_X) == 0x000108, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_BreakVector2D_Y) == 0x00010C, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000110, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000114, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000118, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x00011C, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x000120, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000124, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Subtract_FloatFloat_ReturnValue_3) == 0x00012C, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Subtract_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Conv_Vector2DToVector_ReturnValue_1) == 0x000130, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Conv_Vector2DToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Add_FloatFloat_ReturnValue) == 0x00013C, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_ClampVectorSize_ReturnValue) == 0x000140, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_ClampVectorSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Multiply_Vector2DFloat_ReturnValue_1) == 0x00014C, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Multiply_Vector2DFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000154, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Conv_Vector2DToVector_ReturnValue_2) == 0x00015C, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Conv_Vector2DToVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Subtract_FloatFloat_ReturnValue_4) == 0x000168, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Subtract_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_ClampVectorSize_ReturnValue_1) == 0x00016C, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_ClampVectorSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Subtract_FloatFloat_ReturnValue_5) == 0x000178, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Subtract_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Conv_VectorToVector2D_ReturnValue_1) == 0x00017C, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Conv_VectorToVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_MakeVector2D_ReturnValue) == 0x000184, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Multiply_Vector2DFloat_ReturnValue_2) == 0x00018C, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Multiply_Vector2DFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x000194, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Conv_Vector2DToVector_ReturnValue_3) == 0x00019C, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Conv_Vector2DToVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_BreakVector2D_X_1) == 0x0001A8, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_BreakVector2D_Y_1) == 0x0001AC, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_ClampVectorSize_ReturnValue_2) == 0x0001B0, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_ClampVectorSize_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Conv_VectorToVector2D_ReturnValue_2) == 0x0001BC, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Conv_VectorToVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Add_Vector2DVector2D_ReturnValue_1) == 0x0001C4, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Add_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Add_Vector2DVector2D_ReturnValue_2) == 0x0001CC, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Add_Vector2DVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_BreakVector2D_X_2) == 0x0001D4, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_BreakVector2D_Y_2) == 0x0001D8, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_BreakVector2D_X_3) == 0x0001DC, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_BreakVector2D_X_3' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_BreakVector2D_Y_3) == 0x0001E0, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_BreakVector2D_Y_3' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Subtract_FloatFloat_ReturnValue_6) == 0x0001E4, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Subtract_FloatFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(DebugHUD_C_DrawDeadzoneDebug, CallFunc_Subtract_FloatFloat_ReturnValue_7) == 0x0001E8, "Member 'DebugHUD_C_DrawDeadzoneDebug::CallFunc_Subtract_FloatFloat_ReturnValue_7' has a wrong offset!");

}

