﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_E_Cowboy

#include "Basic.hpp"

#include "ThankYouVeryCool_structs.hpp"


namespace SDK::Params
{

// Function BPC_E_Cowboy.BPC_E_Cowboy_C.ExecuteUbergraph_BPC_E_Cowboy
// 0x0030 (0x0030 - 0x0000)
struct BPC_E_Cowboy_C_ExecuteUbergraph_BPC_E_Cowboy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENPCType                                      Temp_byte_Variable;                                // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AThankYouVeryCoolGameMode*              CallFunc_GetTYVCGameMode_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponPool                            K2Node_MakeStruct_WeaponPool;                      // 0x0010(0x0020)()
};
static_assert(alignof(BPC_E_Cowboy_C_ExecuteUbergraph_BPC_E_Cowboy) == 0x000008, "Wrong alignment on BPC_E_Cowboy_C_ExecuteUbergraph_BPC_E_Cowboy");
static_assert(sizeof(BPC_E_Cowboy_C_ExecuteUbergraph_BPC_E_Cowboy) == 0x000030, "Wrong size on BPC_E_Cowboy_C_ExecuteUbergraph_BPC_E_Cowboy");
static_assert(offsetof(BPC_E_Cowboy_C_ExecuteUbergraph_BPC_E_Cowboy, EntryPoint) == 0x000000, "Member 'BPC_E_Cowboy_C_ExecuteUbergraph_BPC_E_Cowboy::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPC_E_Cowboy_C_ExecuteUbergraph_BPC_E_Cowboy, Temp_byte_Variable) == 0x000004, "Member 'BPC_E_Cowboy_C_ExecuteUbergraph_BPC_E_Cowboy::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BPC_E_Cowboy_C_ExecuteUbergraph_BPC_E_Cowboy, CallFunc_GetTYVCGameMode_ReturnValue) == 0x000008, "Member 'BPC_E_Cowboy_C_ExecuteUbergraph_BPC_E_Cowboy::CallFunc_GetTYVCGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_E_Cowboy_C_ExecuteUbergraph_BPC_E_Cowboy, K2Node_MakeStruct_WeaponPool) == 0x000010, "Member 'BPC_E_Cowboy_C_ExecuteUbergraph_BPC_E_Cowboy::K2Node_MakeStruct_WeaponPool' has a wrong offset!");

}

