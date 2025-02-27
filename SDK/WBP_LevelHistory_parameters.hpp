﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LevelHistory

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_LevelHistory.WBP_LevelHistory_C.ExecuteUbergraph_WBP_LevelHistory
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_LvlScreen1_C*                      K2Node_DynamicCast_AsWBP_Lvl_Screen_1;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATYVCGameMode_BP_C*                     CallFunc_GetTYVCGameMode_NewParam;                 // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture>                CallFunc_Array_Get_Item_1;                         // 0x0058(0x0028)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue_1;             // 0x0088(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item_2;                         // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_LvlScreen1_C*                      K2Node_DynamicCast_AsWBP_Lvl_Screen_1_1;           // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATYVCGameMode_BP_C*                     CallFunc_GetTYVCGameMode_NewParam_1;               // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory) == 0x000008, "Wrong alignment on WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory");
static_assert(sizeof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory) == 0x0000C0, "Wrong size on WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, EntryPoint) == 0x000000, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, CallFunc_GetAllChildren_ReturnValue) == 0x000008, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, Temp_int_Array_Index_Variable) == 0x000020, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, Temp_int_Array_Index_Variable_1) == 0x000024, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, K2Node_DynamicCast_AsWBP_Lvl_Screen_1) == 0x000030, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::K2Node_DynamicCast_AsWBP_Lvl_Screen_1' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00003C, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000040, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, Temp_int_Loop_Counter_Variable_1) == 0x000044, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, CallFunc_GetTYVCGameMode_NewParam) == 0x000048, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::CallFunc_GetTYVCGameMode_NewParam' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, CallFunc_Add_IntInt_ReturnValue_1) == 0x000050, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, CallFunc_Array_Get_Item_1) == 0x000058, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, CallFunc_Less_IntInt_ReturnValue) == 0x000084, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, CallFunc_GetAllChildren_ReturnValue_1) == 0x000088, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::CallFunc_GetAllChildren_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, CallFunc_Array_Get_Item_2) == 0x000098, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, K2Node_DynamicCast_AsWBP_Lvl_Screen_1_1) == 0x0000A0, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::K2Node_DynamicCast_AsWBP_Lvl_Screen_1_1' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, CallFunc_GetTYVCGameMode_NewParam_1) == 0x0000B0, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::CallFunc_GetTYVCGameMode_NewParam_1' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, CallFunc_Array_Length_ReturnValue_1) == 0x0000B8, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000BC, "Member 'WBP_LevelHistory_C_ExecuteUbergraph_WBP_LevelHistory::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

}

