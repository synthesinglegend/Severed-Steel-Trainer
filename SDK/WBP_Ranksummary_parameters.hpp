﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Ranksummary

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ThankYouVeryCool_structs.hpp"


namespace SDK::Params
{

// Function WBP_Ranksummary.WBP_Ranksummary_C.ExecuteUbergraph_WBP_Ranksummary
// 0x01C0 (0x01C0 - 0x0000)
struct WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0020(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0038(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x0050(0x0018)()
	class FText                                   Temp_text_Variable_4;                              // 0x0068(0x0018)()
	class FText                                   Temp_text_Variable_5;                              // 0x0080(0x0018)()
	class FText                                   Temp_text_Variable_6;                              // 0x0098(0x0018)()
	class FText                                   Temp_text_Variable_7;                              // 0x00B0(0x0018)()
	class FText                                   Temp_text_Variable_8;                              // 0x00C8(0x0018)()
	class ATYVCGameMode_BP_C*                     CallFunc_GetTYVCGameMode_NewParam;                 // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERank                                         Temp_byte_Variable;                                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CalcRankThreshold_ReturnValue;            // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00F0(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0108(0x0018)()
	int32                                         CallFunc_CalcRankThreshold_ReturnValue_1;          // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0128(0x0018)()
	int32                                         CallFunc_CalcRankThreshold_ReturnValue_2;          // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalcRankThreshold_ReturnValue_3;          // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0148(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0160(0x0018)()
	int32                                         CallFunc_CalcRankThreshold_ReturnValue_4;          // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x0180(0x0018)()
	class ATYVCGameMode_BP_C*                     CallFunc_GetTYVCGameMode_NewParam_1;               // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_CanSaveRank_ReasonWhyNo;                  // 0x01A0(0x0018)()
	bool                                          CallFunc_CanSaveRank_ReturnValue;                  // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary) == 0x000008, "Wrong alignment on WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary");
static_assert(sizeof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary) == 0x0001C0, "Wrong size on WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, EntryPoint) == 0x000000, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, Temp_text_Variable) == 0x000008, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, Temp_text_Variable_1) == 0x000020, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, Temp_text_Variable_2) == 0x000038, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, Temp_text_Variable_3) == 0x000050, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, Temp_text_Variable_4) == 0x000068, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, Temp_text_Variable_5) == 0x000080, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, Temp_text_Variable_6) == 0x000098, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::Temp_text_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, Temp_text_Variable_7) == 0x0000B0, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::Temp_text_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, Temp_text_Variable_8) == 0x0000C8, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::Temp_text_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, CallFunc_GetTYVCGameMode_NewParam) == 0x0000E0, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::CallFunc_GetTYVCGameMode_NewParam' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, Temp_byte_Variable) == 0x0000E8, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, CallFunc_CalcRankThreshold_ReturnValue) == 0x0000EC, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::CallFunc_CalcRankThreshold_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, CallFunc_Conv_IntToText_ReturnValue) == 0x0000F0, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, K2Node_Select_Default) == 0x000108, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, CallFunc_CalcRankThreshold_ReturnValue_1) == 0x000120, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::CallFunc_CalcRankThreshold_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000128, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, CallFunc_CalcRankThreshold_ReturnValue_2) == 0x000140, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::CallFunc_CalcRankThreshold_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, CallFunc_CalcRankThreshold_ReturnValue_3) == 0x000144, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::CallFunc_CalcRankThreshold_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000148, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000160, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, CallFunc_CalcRankThreshold_ReturnValue_4) == 0x000178, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::CallFunc_CalcRankThreshold_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, CallFunc_Conv_IntToText_ReturnValue_4) == 0x000180, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, CallFunc_GetTYVCGameMode_NewParam_1) == 0x000198, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::CallFunc_GetTYVCGameMode_NewParam_1' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, CallFunc_CanSaveRank_ReasonWhyNo) == 0x0001A0, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::CallFunc_CanSaveRank_ReasonWhyNo' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary, CallFunc_CanSaveRank_ReturnValue) == 0x0001B8, "Member 'WBP_Ranksummary_C_ExecuteUbergraph_WBP_Ranksummary::CallFunc_CanSaveRank_ReturnValue' has a wrong offset!");

// Function WBP_Ranksummary.WBP_Ranksummary_C.Get_R_1_ColorAndOpacity_0
// 0x0068 (0x0068 - 0x0000)
struct WBP_Ranksummary_C_Get_R_1_ColorAndOpacity_0 final
{
public:
	struct FSlateColor                            ReturnValue;                                       // 0x0000(0x0028)(Parm, OutParm, ReturnParm)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetVectorParameterValue_ReturnValue;      // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0040(0x0028)()
};
static_assert(alignof(WBP_Ranksummary_C_Get_R_1_ColorAndOpacity_0) == 0x000008, "Wrong alignment on WBP_Ranksummary_C_Get_R_1_ColorAndOpacity_0");
static_assert(sizeof(WBP_Ranksummary_C_Get_R_1_ColorAndOpacity_0) == 0x000068, "Wrong size on WBP_Ranksummary_C_Get_R_1_ColorAndOpacity_0");
static_assert(offsetof(WBP_Ranksummary_C_Get_R_1_ColorAndOpacity_0, ReturnValue) == 0x000000, "Member 'WBP_Ranksummary_C_Get_R_1_ColorAndOpacity_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_Get_R_1_ColorAndOpacity_0, CallFunc_MakeLiteralName_ReturnValue) == 0x000028, "Member 'WBP_Ranksummary_C_Get_R_1_ColorAndOpacity_0::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_Get_R_1_ColorAndOpacity_0, CallFunc_GetVectorParameterValue_ReturnValue) == 0x000030, "Member 'WBP_Ranksummary_C_Get_R_1_ColorAndOpacity_0::CallFunc_GetVectorParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_Get_R_1_ColorAndOpacity_0, K2Node_MakeStruct_SlateColor) == 0x000040, "Member 'WBP_Ranksummary_C_Get_R_1_ColorAndOpacity_0::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function WBP_Ranksummary.WBP_Ranksummary_C.GetReadonForCantSave
// 0x0028 (0x0028 - 0x0000)
struct WBP_Ranksummary_C_GetReadonForCantSave final
{
public:
	class FText                                   CantSave;                                          // 0x0000(0x0018)(Parm, OutParm)
	class ATYVCGameMode_BP_C*                     CallFunc_GetTYVCGameMode_NewParam;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Ranksummary_C_GetReadonForCantSave) == 0x000008, "Wrong alignment on WBP_Ranksummary_C_GetReadonForCantSave");
static_assert(sizeof(WBP_Ranksummary_C_GetReadonForCantSave) == 0x000028, "Wrong size on WBP_Ranksummary_C_GetReadonForCantSave");
static_assert(offsetof(WBP_Ranksummary_C_GetReadonForCantSave, CantSave) == 0x000000, "Member 'WBP_Ranksummary_C_GetReadonForCantSave::CantSave' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_GetReadonForCantSave, CallFunc_GetTYVCGameMode_NewParam) == 0x000018, "Member 'WBP_Ranksummary_C_GetReadonForCantSave::CallFunc_GetTYVCGameMode_NewParam' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_GetReadonForCantSave, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WBP_Ranksummary_C_GetReadonForCantSave::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ranksummary_C_GetReadonForCantSave, CallFunc_Greater_IntInt_ReturnValue) == 0x000024, "Member 'WBP_Ranksummary_C_GetReadonForCantSave::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

