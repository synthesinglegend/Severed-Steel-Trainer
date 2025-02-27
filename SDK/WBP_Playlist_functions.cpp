﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Playlist

#include "Basic.hpp"

#include "WBP_Playlist_classes.hpp"
#include "WBP_Playlist_parameters.hpp"


namespace SDK
{

// Function WBP_Playlist.WBP_Playlist_C.ExecuteUbergraph_WBP_Playlist
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Playlist_C::ExecuteUbergraph_WBP_Playlist(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Playlist_C", "ExecuteUbergraph_WBP_Playlist");

	Params::WBP_Playlist_C_ExecuteUbergraph_WBP_Playlist Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Playlist.WBP_Playlist_C.FocusLevelButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          LevelButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Playlist_C::FocusLevelButton(class UWidget* LevelButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Playlist_C", "FocusLevelButton");

	Params::WBP_Playlist_C_FocusLevelButton Parms{};

	Parms.LevelButton = LevelButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Playlist.WBP_Playlist_C.UpdateFirstLevelNavigationRule
// (BlueprintCallable, BlueprintEvent)

void UWBP_Playlist_C::UpdateFirstLevelNavigationRule()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Playlist_C", "UpdateFirstLevelNavigationRule");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Playlist.WBP_Playlist_C.SetButtonTextures
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsControllerConnected                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Playlist_C::SetButtonTextures(bool IsControllerConnected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Playlist_C", "SetButtonTextures");

	Params::WBP_Playlist_C_SetButtonTextures Parms{};

	Parms.IsControllerConnected = IsControllerConnected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Playlist.WBP_Playlist_C.DeleteMe
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_AdamButton_C*                me                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Playlist_C::DeleteMe(class UWBP_AdamButton_C* me)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Playlist_C", "DeleteMe");

	Params::WBP_Playlist_C_DeleteMe Parms{};

	Parms.me = me;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Playlist.WBP_Playlist_C.AddLvl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArcadeLevelAsset*                ArcadeLvl                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             DispName                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Playlist_C::AddLvl(class UArcadeLevelAsset* ArcadeLvl, const class FText& DispName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Playlist_C", "AddLvl");

	Params::WBP_Playlist_C_AddLvl Parms{};

	Parms.ArcadeLvl = ArcadeLvl;
	Parms.DispName = std::move(DispName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Playlist.WBP_Playlist_C.BndEvt__WBP_Playlist_HorizontalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Playlist_C::BndEvt__WBP_Playlist_HorizontalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Playlist_C", "BndEvt__WBP_Playlist_HorizontalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature");

	Params::WBP_Playlist_C_BndEvt__WBP_Playlist_HorizontalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature Parms{};

	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Playlist.WBP_Playlist_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Playlist_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Playlist_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Playlist.WBP_Playlist_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Playlist_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Playlist_C", "PreConstruct");

	Params::WBP_Playlist_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Playlist.WBP_Playlist_C.DeleteLevelFromPlaylist
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_AdamButton_C*                InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Playlist_C::DeleteLevelFromPlaylist(class UWBP_AdamButton_C* InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Playlist_C", "DeleteLevelFromPlaylist");

	Params::WBP_Playlist_C_DeleteLevelFromPlaylist Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);
}

}

