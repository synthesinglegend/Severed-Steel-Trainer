﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_IsDistanceBaseOfFireValid

#include "Basic.hpp"

#include "BTD_IsDistanceBaseOfFireValid_classes.hpp"
#include "BTD_IsDistanceBaseOfFireValid_parameters.hpp"


namespace SDK
{

// Function BTD_IsDistanceBaseOfFireValid.BTD_IsDistanceBaseOfFireValid_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBTD_IsDistanceBaseOfFireValid_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTD_IsDistanceBaseOfFireValid_C", "PerformConditionCheckAI");

	Params::BTD_IsDistanceBaseOfFireValid_C_PerformConditionCheckAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

