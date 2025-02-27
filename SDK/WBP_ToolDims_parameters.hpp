﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ToolDims

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_ToolDims.WBP_ToolDims_C.SetDims
// 0x0058 (0x0058 - 0x0000)
struct WBP_ToolDims_C_SetDims final
{
public:
	struct FIntVector                             In;                                                // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0040(0x0018)()
};
static_assert(alignof(WBP_ToolDims_C_SetDims) == 0x000008, "Wrong alignment on WBP_ToolDims_C_SetDims");
static_assert(sizeof(WBP_ToolDims_C_SetDims) == 0x000058, "Wrong size on WBP_ToolDims_C_SetDims");
static_assert(offsetof(WBP_ToolDims_C_SetDims, In) == 0x000000, "Member 'WBP_ToolDims_C_SetDims::In' has a wrong offset!");
static_assert(offsetof(WBP_ToolDims_C_SetDims, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'WBP_ToolDims_C_SetDims::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolDims_C_SetDims, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000028, "Member 'WBP_ToolDims_C_SetDims::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolDims_C_SetDims, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000040, "Member 'WBP_ToolDims_C_SetDims::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");

}

