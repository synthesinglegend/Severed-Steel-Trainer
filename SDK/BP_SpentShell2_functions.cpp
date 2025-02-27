﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpentShell2

#include "Basic.hpp"

#include "BP_SpentShell2_classes.hpp"
#include "BP_SpentShell2_parameters.hpp"


namespace SDK
{

// Function BP_SpentShell2.BP_SpentShell2_C.ExecuteUbergraph_BP_SpentShell2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpentShell2_C::ExecuteUbergraph_BP_SpentShell2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpentShell2_C", "ExecuteUbergraph_BP_SpentShell2");

	Params::BP_SpentShell2_C_ExecuteUbergraph_BP_SpentShell2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpentShell2.BP_SpentShell2_C.BndEvt__BP_SpentShell2_ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       ImpactResult                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                          ImpactVelocity                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpentShell2_C::BndEvt__BP_SpentShell2_ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpentShell2_C", "BndEvt__BP_SpentShell2_ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");

	Params::BP_SpentShell2_C_BndEvt__BP_SpentShell2_ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature Parms{};

	Parms.ImpactResult = std::move(ImpactResult);
	Parms.ImpactVelocity = std::move(ImpactVelocity);

	UObject::ProcessEvent(Func, &Parms);
}

}

