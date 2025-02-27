﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RogueNext

#include "Basic.hpp"

#include "WBP_RogueNext_classes.hpp"
#include "WBP_RogueNext_parameters.hpp"


namespace SDK
{

// Function WBP_RogueNext.WBP_RogueNext_C.ExecuteUbergraph_WBP_RogueNext
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RogueNext_C::ExecuteUbergraph_WBP_RogueNext(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RogueNext_C", "ExecuteUbergraph_WBP_RogueNext");

	Params::WBP_RogueNext_C_ExecuteUbergraph_WBP_RogueNext Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RogueNext.WBP_RogueNext_C.Setup
// (BlueprintCallable, BlueprintEvent)

void UWBP_RogueNext_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RogueNext_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_RogueNext.WBP_RogueNext_C.OnLoaded_D8FD9D0C444469C887893D85459A6DC3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RogueNext_C::OnLoaded_D8FD9D0C444469C887893D85459A6DC3(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RogueNext_C", "OnLoaded_D8FD9D0C444469C887893D85459A6DC3");

	Params::WBP_RogueNext_C_OnLoaded_D8FD9D0C444469C887893D85459A6DC3 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RogueNext.WBP_RogueNext_C.Get_TT_ColorAndOpacity_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateColor UWBP_RogueNext_C::Get_TT_ColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RogueNext_C", "Get_TT_ColorAndOpacity_0");

	Params::WBP_RogueNext_C_Get_TT_ColorAndOpacity_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

