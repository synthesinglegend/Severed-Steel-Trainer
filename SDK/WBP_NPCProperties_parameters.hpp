﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NPCProperties

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_NPCProperties.WBP_NPCProperties_C.ExecuteUbergraph_WBP_NPCProperties
// 0x0040 (0x0040 - 0x0000)
struct WBP_NPCProperties_C_ExecuteUbergraph_WBP_NPCProperties final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0008(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NPCProperties_C_ExecuteUbergraph_WBP_NPCProperties) == 0x000008, "Wrong alignment on WBP_NPCProperties_C_ExecuteUbergraph_WBP_NPCProperties");
static_assert(sizeof(WBP_NPCProperties_C_ExecuteUbergraph_WBP_NPCProperties) == 0x000040, "Wrong size on WBP_NPCProperties_C_ExecuteUbergraph_WBP_NPCProperties");
static_assert(offsetof(WBP_NPCProperties_C_ExecuteUbergraph_WBP_NPCProperties, EntryPoint) == 0x000000, "Member 'WBP_NPCProperties_C_ExecuteUbergraph_WBP_NPCProperties::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_NPCProperties_C_ExecuteUbergraph_WBP_NPCProperties, K2Node_ComponentBoundEvent_Text) == 0x000008, "Member 'WBP_NPCProperties_C_ExecuteUbergraph_WBP_NPCProperties::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(WBP_NPCProperties_C_ExecuteUbergraph_WBP_NPCProperties, K2Node_ComponentBoundEvent_CommitMethod) == 0x000020, "Member 'WBP_NPCProperties_C_ExecuteUbergraph_WBP_NPCProperties::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(WBP_NPCProperties_C_ExecuteUbergraph_WBP_NPCProperties, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'WBP_NPCProperties_C_ExecuteUbergraph_WBP_NPCProperties::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NPCProperties_C_ExecuteUbergraph_WBP_NPCProperties, CallFunc_Conv_StringToName_ReturnValue) == 0x000038, "Member 'WBP_NPCProperties_C_ExecuteUbergraph_WBP_NPCProperties::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

// Function WBP_NPCProperties.WBP_NPCProperties_C.BndEvt__idbOX_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct WBP_NPCProperties_C_BndEvt__idbOX_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NPCProperties_C_BndEvt__idbOX_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_NPCProperties_C_BndEvt__idbOX_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(WBP_NPCProperties_C_BndEvt__idbOX_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on WBP_NPCProperties_C_BndEvt__idbOX_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(WBP_NPCProperties_C_BndEvt__idbOX_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'WBP_NPCProperties_C_BndEvt__idbOX_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(WBP_NPCProperties_C_BndEvt__idbOX_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'WBP_NPCProperties_C_BndEvt__idbOX_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function WBP_NPCProperties.WBP_NPCProperties_C.SetupFor
// 0x0020 (0x0020 - 0x0000)
struct WBP_NPCProperties_C_SetupFor final
{
public:
	class ANPC*                                   InNPC;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0008(0x0018)()
};
static_assert(alignof(WBP_NPCProperties_C_SetupFor) == 0x000008, "Wrong alignment on WBP_NPCProperties_C_SetupFor");
static_assert(sizeof(WBP_NPCProperties_C_SetupFor) == 0x000020, "Wrong size on WBP_NPCProperties_C_SetupFor");
static_assert(offsetof(WBP_NPCProperties_C_SetupFor, InNPC) == 0x000000, "Member 'WBP_NPCProperties_C_SetupFor::InNPC' has a wrong offset!");
static_assert(offsetof(WBP_NPCProperties_C_SetupFor, CallFunc_Conv_NameToText_ReturnValue) == 0x000008, "Member 'WBP_NPCProperties_C_SetupFor::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");

}

