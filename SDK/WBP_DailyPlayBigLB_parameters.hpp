﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DailyPlayBigLB

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_DailyPlayBigLB.WBP_DailyPlayBigLB_C.ExecuteUbergraph_WBP_DailyPlayBigLB
// 0x0100 (0x0100 - 0x0000)
struct WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_17[0x1];                                       // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ATYVCGameMode_BP_C*                     CallFunc_GetTYVCGameMode_NewParam;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_MainMenuV3_C*                      CallFunc_GetGameMenu_OutMenu;                      // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATYVCGameMode_BP_C*                     CallFunc_GetTYVCGameMode_NewParam_1;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMyString_Out;                          // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetConsoleLeaderboardNameFromChallenge_ReturnValue; // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ATYVCGameMode_BP_C*                     CallFunc_GetTYVCGameMode_NewParam_2;               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetMyDateTime_ReturnValue;                // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetYesterday_OutString;                   // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetYesterday_OutDateTime;                 // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatform_ReturnValue;                   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetConsoleLeaderboardNameFromChallenge_ReturnValue_1; // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatform_ReturnValue_1;                 // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlatform_ReturnValue_2;                 // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlatform_ReturnValue_3;                 // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ATYVCGameMode_BP_C*                     CallFunc_GetTYVCGameMode_NewParam_3;               // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatform_ReturnValue_4;                 // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlatform_ReturnValue_5;                 // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMyString_Out_1;                        // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetConsoleLeaderboardNameFromChallenge_ReturnValue_2; // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_2;                           // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB) == 0x000008, "Wrong alignment on WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB");
static_assert(sizeof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB) == 0x000100, "Wrong size on WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, EntryPoint) == 0x000000, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, Temp_bool_Variable) == 0x000014, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, Temp_bool_Variable_1) == 0x000015, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, Temp_bool_Variable_2) == 0x000016, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_GetTYVCGameMode_NewParam) == 0x000018, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_GetTYVCGameMode_NewParam' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_GetGameMenu_OutMenu) == 0x000020, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_GetGameMenu_OutMenu' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_GetTYVCGameMode_NewParam_1) == 0x000028, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_GetTYVCGameMode_NewParam_1' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_GetMyString_Out) == 0x000030, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_GetMyString_Out' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_GetConsoleLeaderboardNameFromChallenge_ReturnValue) == 0x000040, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_GetConsoleLeaderboardNameFromChallenge_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_GetTYVCGameMode_NewParam_2) == 0x000050, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_GetTYVCGameMode_NewParam_2' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_GetMyDateTime_ReturnValue) == 0x000058, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_GetMyDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_GetYesterday_OutString) == 0x000060, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_GetYesterday_OutString' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_GetYesterday_OutDateTime) == 0x000070, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_GetYesterday_OutDateTime' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_IsPlatform_ReturnValue) == 0x000078, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_IsPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_GetConsoleLeaderboardNameFromChallenge_ReturnValue_1) == 0x000080, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_GetConsoleLeaderboardNameFromChallenge_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_IsPlatform_ReturnValue_1) == 0x000090, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_IsPlatform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_IsPlatform_ReturnValue_2) == 0x000091, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_IsPlatform_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_BooleanOR_ReturnValue) == 0x000092, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_IsPlatform_ReturnValue_3) == 0x000093, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_IsPlatform_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_BooleanOR_ReturnValue_1) == 0x000094, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, K2Node_Select_Default) == 0x000098, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, K2Node_Select_Default_1) == 0x0000A8, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_GetTYVCGameMode_NewParam_3) == 0x0000B8, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_GetTYVCGameMode_NewParam_3' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_IsPlatform_ReturnValue_4) == 0x0000C0, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_IsPlatform_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_IsPlatform_ReturnValue_5) == 0x0000C1, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_IsPlatform_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_GetMyString_Out_1) == 0x0000C8, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_GetMyString_Out_1' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_BooleanOR_ReturnValue_2) == 0x0000D8, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, CallFunc_GetConsoleLeaderboardNameFromChallenge_ReturnValue_2) == 0x0000E0, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::CallFunc_GetConsoleLeaderboardNameFromChallenge_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB, K2Node_Select_Default_2) == 0x0000F0, "Member 'WBP_DailyPlayBigLB_C_ExecuteUbergraph_WBP_DailyPlayBigLB::K2Node_Select_Default_2' has a wrong offset!");

}

