﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ChallengeRow

#include "Basic.hpp"

#include "WBP_ChallengeRow_classes.hpp"
#include "WBP_ChallengeRow_parameters.hpp"


namespace SDK
{

// Function WBP_ChallengeRow.WBP_ChallengeRow_C.ExecuteUbergraph_WBP_ChallengeRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengeRow_C::ExecuteUbergraph_WBP_ChallengeRow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengeRow_C", "ExecuteUbergraph_WBP_ChallengeRow");

	Params::WBP_ChallengeRow_C_ExecuteUbergraph_WBP_ChallengeRow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChallengeRow.WBP_ChallengeRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ChallengeRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengeRow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

