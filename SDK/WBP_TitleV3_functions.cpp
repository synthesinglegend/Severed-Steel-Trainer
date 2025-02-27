﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TitleV3

#include "Basic.hpp"

#include "WBP_TitleV3_classes.hpp"
#include "WBP_TitleV3_parameters.hpp"


namespace SDK
{

// Function WBP_TitleV3.WBP_TitleV3_C.ExecuteUbergraph_WBP_TitleV3
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleV3_C::ExecuteUbergraph_WBP_TitleV3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TitleV3_C", "ExecuteUbergraph_WBP_TitleV3");

	Params::WBP_TitleV3_C_ExecuteUbergraph_WBP_TitleV3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TitleV3.WBP_TitleV3_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_TitleV3_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TitleV3_C", "PreConstruct");

	Params::WBP_TitleV3_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

