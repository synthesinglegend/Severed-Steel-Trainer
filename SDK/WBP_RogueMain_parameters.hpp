﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RogueMain

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_RogueMain.WBP_RogueMain_C.ExecuteUbergraph_WBP_RogueMain
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATYVCGameMode_BP_C*                     CallFunc_GetTYVCGameMode_NewParam;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UCardData* Card)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UWBP_MainMenuV3_C*                      CallFunc_GetGameMenu_OutMenu;                      // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_RogueAdvanced_C*                   CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_RogueCosmetics_C*                  CallFunc_Create_ReturnValue_1;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class ATYVCGameMode_BP_C*                     CallFunc_GetTYVCGameMode_NewParam_1;               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATYVCGameMode_BP_C*                     CallFunc_GetTYVCGameMode_NewParam_2;               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_MainMenuV3_C*                      CallFunc_GetGameMenu_OutMenu_1;                    // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AThankYouVeryCoolGameMode*              K2Node_DynamicCast_AsThank_You_Very_Cool_Game_Mode; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATYVCGameMode_BP_C*                     CallFunc_GetTYVCGameMode_NewParam_3;               // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameMenuWidget*                        CallFunc_GetGameMenu_ReturnValue;                  // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATYVCGameMode_BP_C*                     CallFunc_GetTYVCGameMode_NewParam_4;               // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameMenuWidget*                        CallFunc_GetGameMenu_ReturnValue_1;                // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatform_ReturnValue;                   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_WeaponCards_C*                     CallFunc_Create_ReturnValue_2;                     // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_WeaponCards_C*                     K2Node_DynamicCast_AsWBP_Weapon_Cards;             // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_RogueCosmetics_C*                  K2Node_DynamicCast_AsWBP_Rogue_Cosmetics;          // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_RogueAdvanced_C*                   K2Node_DynamicCast_AsWBP_Rogue_Advanced;           // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Collection_C*                      CallFunc_Create_ReturnValue_3;                     // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCardData*                              K2Node_CustomEvent_Card;                           // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_2;                   // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0110(0x0010)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_3;                   // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATYVCGameMode_BP_C*                     CallFunc_GetTYVCGameMode_NewParam_5;               // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATYVCGameMode_BP_C*                     CallFunc_GetTYVCGameMode_NewParam_6;               // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalCards_ReturnValue;                // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0140(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0158(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0170(0x0018)()
	int32                                         CallFunc_GetCollectedCards_ReturnValue;            // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18C[0x4];                                      // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0190(0x0018)()
	class ATYVCGameMode_BP_C*                     CallFunc_GetTYVCGameMode_NewParam_7;               // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain) == 0x000008, "Wrong alignment on WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain");
static_assert(sizeof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain) == 0x0001B0, "Wrong size on WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, EntryPoint) == 0x000000, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_GetTYVCGameMode_NewParam) == 0x000008, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_GetTYVCGameMode_NewParam' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_GetGameMenu_OutMenu) == 0x000020, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_GetGameMenu_OutMenu' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_Create_ReturnValue) == 0x000028, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_Create_ReturnValue_1) == 0x000030, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_GetTYVCGameMode_NewParam_1) == 0x000048, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_GetTYVCGameMode_NewParam_1' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_GetTYVCGameMode_NewParam_2) == 0x000050, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_GetTYVCGameMode_NewParam_2' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_GetGameMenu_OutMenu_1) == 0x000058, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_GetGameMenu_OutMenu_1' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_GetGameMode_ReturnValue) == 0x000060, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, K2Node_DynamicCast_AsThank_You_Very_Cool_Game_Mode) == 0x000068, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::K2Node_DynamicCast_AsThank_You_Very_Cool_Game_Mode' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_GetTYVCGameMode_NewParam_3) == 0x000078, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_GetTYVCGameMode_NewParam_3' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_GetGameMenu_ReturnValue) == 0x000080, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_GetGameMenu_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_GetTYVCGameMode_NewParam_4) == 0x000088, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_GetTYVCGameMode_NewParam_4' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_GetGameMenu_ReturnValue_1) == 0x000090, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_GetGameMenu_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_IsPlatform_ReturnValue) == 0x000098, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_IsPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_Create_ReturnValue_2) == 0x0000A0, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x0000A8, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000AC, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_GetChildAt_ReturnValue) == 0x0000B0, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, K2Node_DynamicCast_AsWBP_Weapon_Cards) == 0x0000B8, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::K2Node_DynamicCast_AsWBP_Weapon_Cards' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, K2Node_DynamicCast_bSuccess_1) == 0x0000C0, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, K2Node_DynamicCast_AsWBP_Rogue_Cosmetics) == 0x0000C8, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::K2Node_DynamicCast_AsWBP_Rogue_Cosmetics' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, K2Node_DynamicCast_bSuccess_2) == 0x0000D0, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, K2Node_DynamicCast_AsWBP_Rogue_Advanced) == 0x0000D8, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::K2Node_DynamicCast_AsWBP_Rogue_Advanced' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, K2Node_DynamicCast_bSuccess_3) == 0x0000E0, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_AddChild_ReturnValue) == 0x0000E8, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_Create_ReturnValue_3) == 0x0000F0, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, K2Node_CustomEvent_Card) == 0x0000F8, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::K2Node_CustomEvent_Card' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_AddChild_ReturnValue_1) == 0x000100, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_AddChild_ReturnValue_2) == 0x000108, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_AddChild_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, K2Node_CreateDelegate_OutputDelegate_2) == 0x000110, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_AddChild_ReturnValue_3) == 0x000120, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_AddChild_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_GetTYVCGameMode_NewParam_5) == 0x000128, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_GetTYVCGameMode_NewParam_5' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_GetTYVCGameMode_NewParam_6) == 0x000130, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_GetTYVCGameMode_NewParam_6' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_GetTotalCards_ReturnValue) == 0x000138, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_GetTotalCards_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_Conv_IntToText_ReturnValue) == 0x000140, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000158, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000170, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_GetCollectedCards_ReturnValue) == 0x000188, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_GetCollectedCards_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000190, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain, CallFunc_GetTYVCGameMode_NewParam_7) == 0x0001A8, "Member 'WBP_RogueMain_C_ExecuteUbergraph_WBP_RogueMain::CallFunc_GetTYVCGameMode_NewParam_7' has a wrong offset!");

// Function WBP_RogueMain.WBP_RogueMain_C.CardPicked_Event_0
// 0x0008 (0x0008 - 0x0000)
struct WBP_RogueMain_C_CardPicked_Event_0 final
{
public:
	class UCardData*                              Card;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RogueMain_C_CardPicked_Event_0) == 0x000008, "Wrong alignment on WBP_RogueMain_C_CardPicked_Event_0");
static_assert(sizeof(WBP_RogueMain_C_CardPicked_Event_0) == 0x000008, "Wrong size on WBP_RogueMain_C_CardPicked_Event_0");
static_assert(offsetof(WBP_RogueMain_C_CardPicked_Event_0, Card) == 0x000000, "Member 'WBP_RogueMain_C_CardPicked_Event_0::Card' has a wrong offset!");

// Function WBP_RogueMain.WBP_RogueMain_C.GetColorAndOpacity_0
// 0x0060 (0x0060 - 0x0000)
struct WBP_RogueMain_C_GetColorAndOpacity_0 final
{
public:
	struct FSlateColor                            ReturnValue;                                       // 0x0000(0x0028)(Parm, OutParm, ReturnParm)
	struct FLinearColor                           CallFunc_GetVectorParameterValue_ReturnValue;      // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0038(0x0028)()
};
static_assert(alignof(WBP_RogueMain_C_GetColorAndOpacity_0) == 0x000008, "Wrong alignment on WBP_RogueMain_C_GetColorAndOpacity_0");
static_assert(sizeof(WBP_RogueMain_C_GetColorAndOpacity_0) == 0x000060, "Wrong size on WBP_RogueMain_C_GetColorAndOpacity_0");
static_assert(offsetof(WBP_RogueMain_C_GetColorAndOpacity_0, ReturnValue) == 0x000000, "Member 'WBP_RogueMain_C_GetColorAndOpacity_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_GetColorAndOpacity_0, CallFunc_GetVectorParameterValue_ReturnValue) == 0x000028, "Member 'WBP_RogueMain_C_GetColorAndOpacity_0::CallFunc_GetVectorParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RogueMain_C_GetColorAndOpacity_0, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'WBP_RogueMain_C_GetColorAndOpacity_0::K2Node_MakeStruct_SlateColor' has a wrong offset!");

}

