﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PortalCameraPawnInterface

#include "Basic.hpp"

#include "PortalCameraPawnInterface_classes.hpp"
#include "PortalCameraPawnInterface_parameters.hpp"


namespace SDK
{

// Function PortalCameraPawnInterface.PortalCameraPawnInterface_C.get_camera_position
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          camera_pos                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPortalCameraPawnInterface_C::get_camera_position(struct FVector* camera_pos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PortalCameraPawnInterface_C", "get_camera_position");

	Params::PortalCameraPawnInterface_C_get_camera_position Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (camera_pos != nullptr)
		*camera_pos = std::move(Parms.camera_pos);
}

}

