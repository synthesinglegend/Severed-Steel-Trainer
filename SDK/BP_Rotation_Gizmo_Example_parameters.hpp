﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Rotation_Gizmo_Example

#include "Basic.hpp"

#include "RuntimeTransformer_structs.hpp"


namespace SDK::Params
{

// Function BP_Rotation_Gizmo_Example.BP_Rotation_Gizmo_Example_C.ExecuteUbergraph_BP_Rotation_Gizmo_Example
// 0x0060 (0x0060 - 0x0000)
struct BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ETransformationType GizmoType, bool bTransformInProgress, ETransformationDomain CurrentDomain)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETransformationType                           K2Node_CustomEvent_GizmoType;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bTransformInProgress;           // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETransformationDomain                         K2Node_CustomEvent_CurrentDomain;                  // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumMaterials_ReturnValue_1;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;                 // 0x0048(0x0010)(ReferenceParm)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example) == 0x000008, "Wrong alignment on BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example");
static_assert(sizeof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example) == 0x000060, "Wrong size on BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, EntryPoint) == 0x000000, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, Temp_int_Variable) == 0x000004, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, K2Node_CustomEvent_GizmoType) == 0x00001C, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::K2Node_CustomEvent_GizmoType' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, K2Node_CustomEvent_bTransformInProgress) == 0x00001D, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::K2Node_CustomEvent_bTransformInProgress' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, K2Node_CustomEvent_CurrentDomain) == 0x00001E, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::K2Node_CustomEvent_CurrentDomain' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, K2Node_SwitchEnum_CmpSuccess) == 0x00001F, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, CallFunc_GetNumMaterials_ReturnValue) == 0x000024, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, Temp_int_Variable_1) == 0x00002C, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000038, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, CallFunc_Add_IntInt_ReturnValue_1) == 0x00003C, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, CallFunc_GetNumMaterials_ReturnValue_1) == 0x000040, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::CallFunc_GetNumMaterials_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000044, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, CallFunc_GetMaterials_ReturnValue) == 0x000048, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000058, "Member 'BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_Rotation_Gizmo_Example.BP_Rotation_Gizmo_Example_C.OnGizmoStateChange_Event_0
// 0x0003 (0x0003 - 0x0000)
struct BP_Rotation_Gizmo_Example_C_OnGizmoStateChange_Event_0 final
{
public:
	ETransformationType                           GizmoType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTransformInProgress;                              // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ETransformationDomain                         CurrentDomain;                                     // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Rotation_Gizmo_Example_C_OnGizmoStateChange_Event_0) == 0x000001, "Wrong alignment on BP_Rotation_Gizmo_Example_C_OnGizmoStateChange_Event_0");
static_assert(sizeof(BP_Rotation_Gizmo_Example_C_OnGizmoStateChange_Event_0) == 0x000003, "Wrong size on BP_Rotation_Gizmo_Example_C_OnGizmoStateChange_Event_0");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_OnGizmoStateChange_Event_0, GizmoType) == 0x000000, "Member 'BP_Rotation_Gizmo_Example_C_OnGizmoStateChange_Event_0::GizmoType' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_OnGizmoStateChange_Event_0, bTransformInProgress) == 0x000001, "Member 'BP_Rotation_Gizmo_Example_C_OnGizmoStateChange_Event_0::bTransformInProgress' has a wrong offset!");
static_assert(offsetof(BP_Rotation_Gizmo_Example_C_OnGizmoStateChange_Event_0, CurrentDomain) == 0x000002, "Member 'BP_Rotation_Gizmo_Example_C_OnGizmoStateChange_Event_0::CurrentDomain' has a wrong offset!");

}

