﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadTask_DistanceBaseOfFire

#include "Basic.hpp"


namespace SDK::Params
{

// Function SquadTask_DistanceBaseOfFire.SquadTask_DistanceBaseOfFire_C.ExecuteUbergraph_SquadTask_DistanceBaseOfFire
// 0x0040 (0x0040 - 0x0000)
struct SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OwnerActor;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USquadBT*                               K2Node_DynamicCast_AsSquad_BT;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANPCController*                         CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire) == 0x000008, "Wrong alignment on SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire");
static_assert(sizeof(SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire) == 0x000040, "Wrong size on SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire");
static_assert(offsetof(SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire, EntryPoint) == 0x000000, "Member 'SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire::EntryPoint' has a wrong offset!");
static_assert(offsetof(SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire, Temp_int_Array_Index_Variable) == 0x000004, "Member 'SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire, K2Node_Event_OwnerActor) == 0x000008, "Member 'SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire::K2Node_Event_OwnerActor' has a wrong offset!");
static_assert(offsetof(SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire, CallFunc_GetOuterObject_ReturnValue) == 0x000018, "Member 'SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire, K2Node_DynamicCast_AsSquad_BT) == 0x000020, "Member 'SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire::K2Node_DynamicCast_AsSquad_BT' has a wrong offset!");
static_assert(offsetof(SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire, CallFunc_Array_Get_Item) == 0x000030, "Member 'SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'SquadTask_DistanceBaseOfFire_C_ExecuteUbergraph_SquadTask_DistanceBaseOfFire::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function SquadTask_DistanceBaseOfFire.SquadTask_DistanceBaseOfFire_C.ReceiveExecute
// 0x0008 (0x0008 - 0x0000)
struct SquadTask_DistanceBaseOfFire_C_ReceiveExecute final
{
public:
	class AActor*                                 OwnerActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SquadTask_DistanceBaseOfFire_C_ReceiveExecute) == 0x000008, "Wrong alignment on SquadTask_DistanceBaseOfFire_C_ReceiveExecute");
static_assert(sizeof(SquadTask_DistanceBaseOfFire_C_ReceiveExecute) == 0x000008, "Wrong size on SquadTask_DistanceBaseOfFire_C_ReceiveExecute");
static_assert(offsetof(SquadTask_DistanceBaseOfFire_C_ReceiveExecute, OwnerActor) == 0x000000, "Member 'SquadTask_DistanceBaseOfFire_C_ReceiveExecute::OwnerActor' has a wrong offset!");

}

