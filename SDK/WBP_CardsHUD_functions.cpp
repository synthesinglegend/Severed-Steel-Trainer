﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CardsHUD

#include "Basic.hpp"

#include "WBP_CardsHUD_classes.hpp"
#include "WBP_CardsHUD_parameters.hpp"


namespace SDK
{

// Function WBP_CardsHUD.WBP_CardsHUD_C.ExecuteUbergraph_WBP_CardsHUD
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CardsHUD_C::ExecuteUbergraph_WBP_CardsHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CardsHUD_C", "ExecuteUbergraph_WBP_CardsHUD");

	Params::WBP_CardsHUD_C_ExecuteUbergraph_WBP_CardsHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CardsHUD.WBP_CardsHUD_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UWBP_CardsHUD_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CardsHUD_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CardsHUD.WBP_CardsHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CardsHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CardsHUD_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

