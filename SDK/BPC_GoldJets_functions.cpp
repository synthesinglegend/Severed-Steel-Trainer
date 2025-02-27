﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_GoldJets

#include "Basic.hpp"

#include "BPC_GoldJets_classes.hpp"
#include "BPC_GoldJets_parameters.hpp"


namespace SDK
{

// Function BPC_GoldJets.BPC_GoldJets_C.ExecuteUbergraph_BPC_GoldJets
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_GoldJets_C::ExecuteUbergraph_BPC_GoldJets(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_GoldJets_C", "ExecuteUbergraph_BPC_GoldJets");

	Params::BPC_GoldJets_C_ExecuteUbergraph_BPC_GoldJets Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_GoldJets.BPC_GoldJets_C.OnFirstAdded
// (Event, Public, BlueprintEvent)

void UBPC_GoldJets_C::OnFirstAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_GoldJets_C", "OnFirstAdded");

	UObject::ProcessEvent(Func, nullptr);
}

}

