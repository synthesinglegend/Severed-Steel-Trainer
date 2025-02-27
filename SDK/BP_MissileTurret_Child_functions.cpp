﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissileTurret_Child

#include "Basic.hpp"

#include "BP_MissileTurret_Child_classes.hpp"
#include "BP_MissileTurret_Child_parameters.hpp"


namespace SDK
{

// Function BP_MissileTurret_Child.BP_MissileTurret_Child_C.ExecuteUbergraph_BP_MissileTurret_Child
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MissileTurret_Child_C::ExecuteUbergraph_BP_MissileTurret_Child(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissileTurret_Child_C", "ExecuteUbergraph_BP_MissileTurret_Child");

	Params::BP_MissileTurret_Child_C_ExecuteUbergraph_BP_MissileTurret_Child Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MissileTurret_Child.BP_MissileTurret_Child_C.E_SkinSelector
// (BlueprintCallable, BlueprintEvent)

void ABP_MissileTurret_Child_C::E_SkinSelector()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissileTurret_Child_C", "E_SkinSelector");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MissileTurret_Child.BP_MissileTurret_Child_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MissileTurret_Child_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissileTurret_Child_C", "ReceiveTick");

	Params::BP_MissileTurret_Child_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MissileTurret_Child.BP_MissileTurret_Child_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MissileTurret_Child_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissileTurret_Child_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MissileTurret_Child.BP_MissileTurret_Child_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MissileTurret_Child_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissileTurret_Child_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MissileTurret_Child.BP_MissileTurret_Child_C.SkinFunction
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MissileTurret_Child_C::SkinFunction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissileTurret_Child_C", "SkinFunction");

	UObject::ProcessEvent(Func, nullptr);
}

}

