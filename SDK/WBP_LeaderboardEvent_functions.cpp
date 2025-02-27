﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LeaderboardEvent

#include "Basic.hpp"

#include "WBP_LeaderboardEvent_classes.hpp"
#include "WBP_LeaderboardEvent_parameters.hpp"


namespace SDK
{

// Function WBP_LeaderboardEvent.WBP_LeaderboardEvent_C.ExecuteUbergraph_WBP_LeaderboardEvent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LeaderboardEvent_C::ExecuteUbergraph_WBP_LeaderboardEvent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardEvent_C", "ExecuteUbergraph_WBP_LeaderboardEvent");

	Params::WBP_LeaderboardEvent_C_ExecuteUbergraph_WBP_LeaderboardEvent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LeaderboardEvent.WBP_LeaderboardEvent_C.CheckForEvents
// (BlueprintCallable, BlueprintEvent)

void UWBP_LeaderboardEvent_C::CheckForEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardEvent_C", "CheckForEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LeaderboardEvent.WBP_LeaderboardEvent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LeaderboardEvent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardEvent_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LeaderboardEvent.WBP_LeaderboardEvent_C.Get_Time_ColorAndOpacity_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateColor UWBP_LeaderboardEvent_C::Get_Time_ColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardEvent_C", "Get_Time_ColorAndOpacity_0");

	Params::WBP_LeaderboardEvent_C_Get_Time_ColorAndOpacity_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_LeaderboardEvent.WBP_LeaderboardEvent_C.GetText_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_LeaderboardEvent_C::GetText_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardEvent_C", "GetText_0");

	Params::WBP_LeaderboardEvent_C_GetText_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

