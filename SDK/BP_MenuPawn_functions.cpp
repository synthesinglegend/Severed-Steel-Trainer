﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MenuPawn

#include "Basic.hpp"

#include "BP_MenuPawn_classes.hpp"
#include "BP_MenuPawn_parameters.hpp"


namespace SDK
{

// Function BP_MenuPawn.BP_MenuPawn_C.ExecuteUbergraph_BP_MenuPawn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuPawn_C::ExecuteUbergraph_BP_MenuPawn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuPawn_C", "ExecuteUbergraph_BP_MenuPawn");

	Params::BP_MenuPawn_C_ExecuteUbergraph_BP_MenuPawn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuPawn.BP_MenuPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuPawn_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuPawn_C", "ReceiveTick");

	Params::BP_MenuPawn_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuPawn.BP_MenuPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MenuPawn_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuPawn_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuPawn.BP_MenuPawn_C.LerpTransform
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ABP_MenuPawn_C::LerpTransform(const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuPawn_C", "LerpTransform");

	Params::BP_MenuPawn_C_LerpTransform Parms{};

	Parms.Transform = std::move(Transform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuPawn.BP_MenuPawn_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MenuPawn_C::InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuPawn_C", "InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_0");

	Params::BP_MenuPawn_C_InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuPawn.BP_MenuPawn_C.InpActEvt_Enter_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MenuPawn_C::InpActEvt_Enter_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuPawn_C", "InpActEvt_Enter_K2Node_InputActionEvent_0");

	Params::BP_MenuPawn_C_InpActEvt_Enter_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuPawn.BP_MenuPawn_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_MenuPawn_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuPawn_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuPawn.BP_MenuPawn_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_MenuPawn_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuPawn_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

