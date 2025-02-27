﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OnLeave

#include "Basic.hpp"

#include "WBP_OnLeave_classes.hpp"
#include "WBP_OnLeave_parameters.hpp"


namespace SDK
{

// Function WBP_OnLeave.WBP_OnLeave_C.ExecuteUbergraph_WBP_OnLeave
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OnLeave_C::ExecuteUbergraph_WBP_OnLeave(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OnLeave_C", "ExecuteUbergraph_WBP_OnLeave");

	Params::WBP_OnLeave_C_ExecuteUbergraph_WBP_OnLeave Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OnLeave.WBP_OnLeave_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_OnLeave_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OnLeave_C", "OnMouseLeave");

	Params::WBP_OnLeave_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

}

