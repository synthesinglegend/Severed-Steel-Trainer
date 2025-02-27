﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hand

#include "Basic.hpp"

#include "WBP_Hand_classes.hpp"
#include "WBP_Hand_parameters.hpp"


namespace SDK
{

// Function WBP_Hand.WBP_Hand_C.ExecuteUbergraph_WBP_Hand
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hand_C::ExecuteUbergraph_WBP_Hand(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hand_C", "ExecuteUbergraph_WBP_Hand");

	Params::WBP_Hand_C_ExecuteUbergraph_WBP_Hand Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hand.WBP_Hand_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UWBP_Hand_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hand_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Hand.WBP_Hand_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Hand_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hand_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Hand.WBP_Hand_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Hand_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hand_C", "PreConstruct");

	Params::WBP_Hand_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

