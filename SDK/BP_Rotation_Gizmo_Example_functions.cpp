﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Rotation_Gizmo_Example

#include "Basic.hpp"

#include "BP_Rotation_Gizmo_Example_classes.hpp"
#include "BP_Rotation_Gizmo_Example_parameters.hpp"


namespace SDK
{

// Function BP_Rotation_Gizmo_Example.BP_Rotation_Gizmo_Example_C.ExecuteUbergraph_BP_Rotation_Gizmo_Example
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Rotation_Gizmo_Example_C::ExecuteUbergraph_BP_Rotation_Gizmo_Example(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Rotation_Gizmo_Example_C", "ExecuteUbergraph_BP_Rotation_Gizmo_Example");

	Params::BP_Rotation_Gizmo_Example_C_ExecuteUbergraph_BP_Rotation_Gizmo_Example Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Rotation_Gizmo_Example.BP_Rotation_Gizmo_Example_C.OnGizmoStateChange_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ETransformationType                     GizmoType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bTransformInProgress                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ETransformationDomain                   CurrentDomain                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Rotation_Gizmo_Example_C::OnGizmoStateChange_Event_0(ETransformationType GizmoType, bool bTransformInProgress, ETransformationDomain CurrentDomain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Rotation_Gizmo_Example_C", "OnGizmoStateChange_Event_0");

	Params::BP_Rotation_Gizmo_Example_C_OnGizmoStateChange_Event_0 Parms{};

	Parms.GizmoType = GizmoType;
	Parms.bTransformInProgress = bTransformInProgress;
	Parms.CurrentDomain = CurrentDomain;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Rotation_Gizmo_Example.BP_Rotation_Gizmo_Example_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Rotation_Gizmo_Example_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Rotation_Gizmo_Example_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

