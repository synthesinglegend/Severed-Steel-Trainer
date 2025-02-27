﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBO_PreGame

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBO_PreGame.WBO_PreGame_C.ExecuteUbergraph_WBO_PreGame
// 0x0028 (0x0028 - 0x0000)
struct WBO_PreGame_C_ExecuteUbergraph_WBO_PreGame final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATYVCGameMode_BP_C*                     CallFunc_GetTYVCGameMode_NewParam;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBO_PreGame_C_ExecuteUbergraph_WBO_PreGame) == 0x000008, "Wrong alignment on WBO_PreGame_C_ExecuteUbergraph_WBO_PreGame");
static_assert(sizeof(WBO_PreGame_C_ExecuteUbergraph_WBO_PreGame) == 0x000028, "Wrong size on WBO_PreGame_C_ExecuteUbergraph_WBO_PreGame");
static_assert(offsetof(WBO_PreGame_C_ExecuteUbergraph_WBO_PreGame, EntryPoint) == 0x000000, "Member 'WBO_PreGame_C_ExecuteUbergraph_WBO_PreGame::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBO_PreGame_C_ExecuteUbergraph_WBO_PreGame, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBO_PreGame_C_ExecuteUbergraph_WBO_PreGame::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBO_PreGame_C_ExecuteUbergraph_WBO_PreGame, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000014, "Member 'WBO_PreGame_C_ExecuteUbergraph_WBO_PreGame::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBO_PreGame_C_ExecuteUbergraph_WBO_PreGame, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'WBO_PreGame_C_ExecuteUbergraph_WBO_PreGame::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBO_PreGame_C_ExecuteUbergraph_WBO_PreGame, CallFunc_GetTYVCGameMode_NewParam) == 0x000020, "Member 'WBO_PreGame_C_ExecuteUbergraph_WBO_PreGame::CallFunc_GetTYVCGameMode_NewParam' has a wrong offset!");

// Function WBO_PreGame.WBO_PreGame_C.OnKeyDown
// 0x01E0 (0x01E0 - 0x0000)
struct WBO_PreGame_C_OnKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0128(0x00B8)()
};
static_assert(alignof(WBO_PreGame_C_OnKeyDown) == 0x000008, "Wrong alignment on WBO_PreGame_C_OnKeyDown");
static_assert(sizeof(WBO_PreGame_C_OnKeyDown) == 0x0001E0, "Wrong size on WBO_PreGame_C_OnKeyDown");
static_assert(offsetof(WBO_PreGame_C_OnKeyDown, MyGeometry) == 0x000000, "Member 'WBO_PreGame_C_OnKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBO_PreGame_C_OnKeyDown, InKeyEvent) == 0x000038, "Member 'WBO_PreGame_C_OnKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(WBO_PreGame_C_OnKeyDown, ReturnValue) == 0x000070, "Member 'WBO_PreGame_C_OnKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBO_PreGame_C_OnKeyDown, CallFunc_Handled_ReturnValue) == 0x000128, "Member 'WBO_PreGame_C_OnKeyDown::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBO_PreGame.WBO_PreGame_C.OnMouseButtonDown
// 0x0218 (0x0218 - 0x0000)
struct WBO_PreGame_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
};
static_assert(alignof(WBO_PreGame_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on WBO_PreGame_C_OnMouseButtonDown");
static_assert(sizeof(WBO_PreGame_C_OnMouseButtonDown) == 0x000218, "Wrong size on WBO_PreGame_C_OnMouseButtonDown");
static_assert(offsetof(WBO_PreGame_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'WBO_PreGame_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBO_PreGame_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'WBO_PreGame_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBO_PreGame_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'WBO_PreGame_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBO_PreGame_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000160, "Member 'WBO_PreGame_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");

}

