﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampaignMarker

#include "Basic.hpp"

#include "ThankYouVeryCool_structs.hpp"
#include "ThankYouVeryCool_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CampaignMarker.BP_CampaignMarker_C
// 0x0008 (0x0280 - 0x0278)
class ABP_CampaignMarker_C final : public ACampaignMarker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_CampaignMarker(int32 EntryPoint);
	void DoActions(EActionType ToDo, bool bSimulated);
	bool GetShouldSave();
	TArray<EActionType> GetActions();
	TSubclassOf<class ANPC> GetRandomSpecialType();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CampaignMarker_C">();
	}
	static class ABP_CampaignMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CampaignMarker_C>();
	}
};
static_assert(alignof(ABP_CampaignMarker_C) == 0x000008, "Wrong alignment on ABP_CampaignMarker_C");
static_assert(sizeof(ABP_CampaignMarker_C) == 0x000280, "Wrong size on ABP_CampaignMarker_C");
static_assert(offsetof(ABP_CampaignMarker_C, UberGraphFrame) == 0x000278, "Member 'ABP_CampaignMarker_C::UberGraphFrame' has a wrong offset!");

}

