﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_Misfire

#include "Basic.hpp"

#include "BPC_Misfire_classes.hpp"
#include "BPC_Misfire_parameters.hpp"


namespace SDK
{

// Function BPC_Misfire.BPC_Misfire_C.ExecuteUbergraph_BPC_Misfire
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_Misfire_C::ExecuteUbergraph_BPC_Misfire(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Misfire_C", "ExecuteUbergraph_BPC_Misfire");

	Params::BPC_Misfire_C_ExecuteUbergraph_BPC_Misfire Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_Misfire.BPC_Misfire_C.OnFirstAdded
// (Event, Public, BlueprintEvent)

void UBPC_Misfire_C::OnFirstAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Misfire_C", "OnFirstAdded");

	UObject::ProcessEvent(Func, nullptr);
}

}

