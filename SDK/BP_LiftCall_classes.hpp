﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LiftCall

#include "Basic.hpp"

#include "ThankYouVeryCool_structs.hpp"
#include "ThankYouVeryCool_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LiftCall.BP_LiftCall_C
// 0x0028 (0x0268 - 0x0240)
class ABP_LiftCall_C final : public ARechargeStation
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cube;                                              // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget;                                            // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_PropLift_C*                         MyLift;                                            // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_LiftCall(int32 EntryPoint);
	void SetSelected(bool bIsSelected);
	void RequestInteraction(class AActor* Interactor);
	bool GetShouldSave();
	bool IsInteractable();
	class FText GetInteractionText();
	bool OnHit(EImpactType ImpactType, const struct FHitResult& HitResult, float Dmg);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LiftCall_C">();
	}
	static class ABP_LiftCall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LiftCall_C>();
	}
};
static_assert(alignof(ABP_LiftCall_C) == 0x000008, "Wrong alignment on ABP_LiftCall_C");
static_assert(sizeof(ABP_LiftCall_C) == 0x000268, "Wrong size on ABP_LiftCall_C");
static_assert(offsetof(ABP_LiftCall_C, UberGraphFrame) == 0x000240, "Member 'ABP_LiftCall_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LiftCall_C, Cube) == 0x000248, "Member 'ABP_LiftCall_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_LiftCall_C, Scene) == 0x000250, "Member 'ABP_LiftCall_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_LiftCall_C, Widget) == 0x000258, "Member 'ABP_LiftCall_C::Widget' has a wrong offset!");
static_assert(offsetof(ABP_LiftCall_C, MyLift) == 0x000260, "Member 'ABP_LiftCall_C::MyLift' has a wrong offset!");

}

