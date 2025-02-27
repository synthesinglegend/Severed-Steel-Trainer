﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DebugHUD

#include "Basic.hpp"

#include "DebugHUD_classes.hpp"
#include "DebugHUD_parameters.hpp"


namespace SDK
{

// Function DebugHUD.DebugHUD_C.ExecuteUbergraph_DebugHUD
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADebugHUD_C::ExecuteUbergraph_DebugHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugHUD_C", "ExecuteUbergraph_DebugHUD");

	Params::DebugHUD_C_ExecuteUbergraph_DebugHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugHUD.DebugHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADebugHUD_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugHUD_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugHUD.DebugHUD_C.ReceiveDrawHUD
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// int32                                   SizeX                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SizeY                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADebugHUD_C::ReceiveDrawHUD(int32 SizeX, int32 SizeY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugHUD_C", "ReceiveDrawHUD");

	Params::DebugHUD_C_ReceiveDrawHUD Parms{};

	Parms.SizeX = SizeX;
	Parms.SizeY = SizeY;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugHUD.DebugHUD_C.DrawAimAssistDebug
// (Public, BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::DrawAimAssistDebug()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugHUD_C", "DrawAimAssistDebug");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugHUD.DebugHUD_C.DrawDeadzoneDebug
// (Public, BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::DrawDeadzoneDebug()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugHUD_C", "DrawDeadzoneDebug");

	UObject::ProcessEvent(Func, nullptr);
}

}

