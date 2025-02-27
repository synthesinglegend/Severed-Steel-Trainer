﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UnlockWon

#include "Basic.hpp"

#include "WBP_UnlockWon_classes.hpp"
#include "WBP_UnlockWon_parameters.hpp"


namespace SDK
{

// Function WBP_UnlockWon.WBP_UnlockWon_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUnlockData                      InUnlock                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_UnlockWon_C::Setup(const struct FUnlockData& InUnlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UnlockWon_C", "Setup");

	Params::WBP_UnlockWon_C_Setup Parms{};

	Parms.InUnlock = std::move(InUnlock);

	UObject::ProcessEvent(Func, &Parms);
}

}

