﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PortalRenderManagerBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "PortalRenderTargetMap_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PortalRenderManagerBP.PortalRenderManagerBP_C
// 0x00E0 (0x0300 - 0x0220)
class APortalRenderManagerBP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class APortalBP_C*>                    AllPortals;                                        // 0x0230(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         MaxRecurseDepth;                                   // 0x0240(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class APortalBP_C*, struct FPortalRenderTargetMap> RenderTargets;                                     // 0x0248(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          ForceRecursionCustomMatrix;                        // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             NextCameraOrigin;                                  // 0x02A0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TMulticastInlineDelegate<void()>              PreRenderDispatcher;                               // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              PostRenderDispatcher;                              // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bShouldUpdateCam;                                  // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PortalRenderManagerBP(int32 EntryPoint);
	void CleanupPortalRenderTargets(class APortalBP_C* Portal);
	void DeregisterPortal(class APortalBP_C* Portal);
	void RegisterPortal(class APortalBP_C* Portal);
	void ReceiveTick(float DeltaSeconds);
	void RenderPortal(class APortalBP_C* Portal);
	void RenderRecursion(class APortalBP_C* Portal, const struct FTransform& CameraOrigin, int32 RecurseDepth, const struct FVector2D& MinVisible, const struct FVector2D& MaxVisible);
	void GenerateRTCollection(class APortalBP_C* Portal);
	void ShouldRenderPortal(class APortalBP_C* Portal, const struct FTransform& CameraOrigin, const struct FVector2D& Min, const struct FVector2D& Max, bool* Visible, struct FVector2D* NewMin, struct FVector2D* NewMax);
	bool VirtualPointToScreen(const struct FTransform& CameraOrigin, const struct FVector& Location, struct FVector2D* ScreenLocation);
	void FakeRecursion(int32 texture_id, float ParentInvscale, const struct FVector2D& ParentOffset, const struct FTransform& CameraOrigin, int32 RecurionDepth, class APortalBP_C* Portal, bool CustomMatrix, class APortalBP_C* ParentPortal);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PortalRenderManagerBP_C">();
	}
	static class APortalRenderManagerBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APortalRenderManagerBP_C>();
	}
};
static_assert(alignof(APortalRenderManagerBP_C) == 0x000010, "Wrong alignment on APortalRenderManagerBP_C");
static_assert(sizeof(APortalRenderManagerBP_C) == 0x000300, "Wrong size on APortalRenderManagerBP_C");
static_assert(offsetof(APortalRenderManagerBP_C, UberGraphFrame) == 0x000220, "Member 'APortalRenderManagerBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APortalRenderManagerBP_C, DefaultSceneRoot) == 0x000228, "Member 'APortalRenderManagerBP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(APortalRenderManagerBP_C, AllPortals) == 0x000230, "Member 'APortalRenderManagerBP_C::AllPortals' has a wrong offset!");
static_assert(offsetof(APortalRenderManagerBP_C, MaxRecurseDepth) == 0x000240, "Member 'APortalRenderManagerBP_C::MaxRecurseDepth' has a wrong offset!");
static_assert(offsetof(APortalRenderManagerBP_C, RenderTargets) == 0x000248, "Member 'APortalRenderManagerBP_C::RenderTargets' has a wrong offset!");
static_assert(offsetof(APortalRenderManagerBP_C, ForceRecursionCustomMatrix) == 0x000298, "Member 'APortalRenderManagerBP_C::ForceRecursionCustomMatrix' has a wrong offset!");
static_assert(offsetof(APortalRenderManagerBP_C, NextCameraOrigin) == 0x0002A0, "Member 'APortalRenderManagerBP_C::NextCameraOrigin' has a wrong offset!");
static_assert(offsetof(APortalRenderManagerBP_C, PreRenderDispatcher) == 0x0002D0, "Member 'APortalRenderManagerBP_C::PreRenderDispatcher' has a wrong offset!");
static_assert(offsetof(APortalRenderManagerBP_C, PostRenderDispatcher) == 0x0002E0, "Member 'APortalRenderManagerBP_C::PostRenderDispatcher' has a wrong offset!");
static_assert(offsetof(APortalRenderManagerBP_C, bShouldUpdateCam) == 0x0002F0, "Member 'APortalRenderManagerBP_C::bShouldUpdateCam' has a wrong offset!");

}

