﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_DiveBomb

#include "Basic.hpp"

#include "ThankYouVeryCool_structs.hpp"


namespace SDK::Params
{

// Function BPC_DiveBomb.BPC_DiveBomb_C.ExecuteUbergraph_BPC_DiveBomb
// 0x0018 (0x0018 - 0x0000)
struct BPC_DiveBomb_C_ExecuteUbergraph_BPC_DiveBomb final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AThankYouVeryCoolGameMode*              CallFunc_GetTYVCGameMode_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameModifier                                 Temp_byte_Variable;                                // 0x0010(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_DiveBomb_C_ExecuteUbergraph_BPC_DiveBomb) == 0x000008, "Wrong alignment on BPC_DiveBomb_C_ExecuteUbergraph_BPC_DiveBomb");
static_assert(sizeof(BPC_DiveBomb_C_ExecuteUbergraph_BPC_DiveBomb) == 0x000018, "Wrong size on BPC_DiveBomb_C_ExecuteUbergraph_BPC_DiveBomb");
static_assert(offsetof(BPC_DiveBomb_C_ExecuteUbergraph_BPC_DiveBomb, EntryPoint) == 0x000000, "Member 'BPC_DiveBomb_C_ExecuteUbergraph_BPC_DiveBomb::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPC_DiveBomb_C_ExecuteUbergraph_BPC_DiveBomb, CallFunc_GetTYVCGameMode_ReturnValue) == 0x000008, "Member 'BPC_DiveBomb_C_ExecuteUbergraph_BPC_DiveBomb::CallFunc_GetTYVCGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DiveBomb_C_ExecuteUbergraph_BPC_DiveBomb, Temp_byte_Variable) == 0x000010, "Member 'BPC_DiveBomb_C_ExecuteUbergraph_BPC_DiveBomb::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BPC_DiveBomb_C_ExecuteUbergraph_BPC_DiveBomb, CallFunc_Array_Add_ReturnValue) == 0x000014, "Member 'BPC_DiveBomb_C_ExecuteUbergraph_BPC_DiveBomb::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

