﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponPickup

#include "Basic.hpp"

#include "WeaponPickup_classes.hpp"
#include "WeaponPickup_parameters.hpp"


namespace SDK
{

// Function WeaponPickup.WeaponPickup_C.ExecuteUbergraph_WeaponPickup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponPickup_C::ExecuteUbergraph_WeaponPickup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponPickup_C", "ExecuteUbergraph_WeaponPickup");

	Params::WeaponPickup_C_ExecuteUbergraph_WeaponPickup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponPickup.WeaponPickup_C.ShowPrompt
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShouldShow                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponPickup_C::ShowPrompt(bool bShouldShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponPickup_C", "ShowPrompt");

	Params::WeaponPickup_C_ShowPrompt Parms{};

	Parms.bShouldShow = bShouldShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponPickup.WeaponPickup_C.OverrideText
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           inString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWeaponPickup_C::OverrideText(const class FString& inString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponPickup_C", "OverrideText");

	Params::WeaponPickup_C_OverrideText Parms{};

	Parms.inString = std::move(inString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponPickup.WeaponPickup_C.SetMode
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bShowThrow                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponPickup_C::SetMode(bool bController, bool bShowThrow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponPickup_C", "SetMode");

	Params::WeaponPickup_C_SetMode Parms{};

	Parms.bController = bController;
	Parms.bShowThrow = bShowThrow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponPickup.WeaponPickup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponPickup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponPickup_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

