﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThePrototype

#include "Basic.hpp"

#include "BP_ThePrototype_classes.hpp"
#include "BP_ThePrototype_parameters.hpp"


namespace SDK
{

// Function BP_ThePrototype.BP_ThePrototype_C.ExecuteUbergraph_BP_ThePrototype
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThePrototype_C::ExecuteUbergraph_BP_ThePrototype(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThePrototype_C", "ExecuteUbergraph_BP_ThePrototype");

	Params::BP_ThePrototype_C_ExecuteUbergraph_BP_ThePrototype Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThePrototype.BP_ThePrototype_C.OnLookAt
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                          LookAtLoc                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThePrototype_C::OnLookAt(const struct FVector& LookAtLoc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThePrototype_C", "OnLookAt");

	Params::BP_ThePrototype_C_OnLookAt Parms{};

	Parms.LookAtLoc = std::move(LookAtLoc);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThePrototype.BP_ThePrototype_C.IsInteractable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ThePrototype_C::IsInteractable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThePrototype_C", "IsInteractable");

	Params::BP_ThePrototype_C_IsInteractable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

