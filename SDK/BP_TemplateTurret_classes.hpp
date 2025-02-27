﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TemplateTurret

#include "Basic.hpp"

#include "ThankYouVeryCool_structs.hpp"
#include "ThankYouVeryCool_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TemplateTurret.BP_TemplateTurret_C
// 0x0150 (0x0390 - 0x0240)
class ABP_TemplateTurret_C : public ARechargeStation
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_TargetIndicatorComponent_C*         BP_TargetIndicatorComponent;                       // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sphere;                                            // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Target;                                            // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UComponent_TraceView_C*                 Component_TraceView;                               // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_4F935BC54DF1E4F573445BA13BCCBF63; // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_4F935BC54DF1E4F573445BA13BCCBF63; // 0x0294(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_295[0x3];                                      // 0x0295(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDebug;                                           // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsPower;                                           // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsTraceView;                                       // 0x02A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A3[0x1];                                      // 0x02A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TraceView_Settings;                                // 0x02A4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         EnemyList;                                         // 0x02B0(0x0010)(Edit, BlueprintVisible)
	TArray<EObjectTypeQuery>                      EnemyType;                                         // 0x02C0(0x0010)(Edit, BlueprintVisible)
	TArray<EObjectTypeQuery>                      TraceType;                                         // 0x02D0(0x0010)(Edit, BlueprintVisible)
	float                                         ScanRadius;                                        // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScanTickInterval;                                  // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IsAlertDuration;                                   // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IsAttackWait;                                      // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TurretSpeed_RinterpTo;                             // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F1[0x3];                                      // 0x02F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TurretSpeed;                                       // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SplineSpeed;                                       // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngleLimitMin;                                     // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngleLimitMax;                                     // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SplinePosition;                                    // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SetTarget;                                         // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAlert;                                           // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_319[0x3];                                      // 0x0319(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TargetZOffset;                                     // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAttack;                                          // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsTargetCapture;                                   // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_322[0x2];                                      // 0x0322(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         IsTargetCaptureRange;                              // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OptimizationDistance;                              // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32C[0x4];                                      // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Sound_Alert;                                       // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_PostAlert;                                   // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDamage;                                          // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_341[0x3];                                      // 0x0341(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SkinType;                                          // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             SkinArray1;                                        // 0x0348(0x0010)(Edit, BlueprintVisible)
	TArray<class UMaterialInterface*>             SkinArray2;                                        // 0x0358(0x0010)(Edit, BlueprintVisible)
	TArray<class UMaterialInterface*>             MaterialsMain;                                     // 0x0368(0x0010)(Edit, BlueprintVisible)
	TArray<class UMaterialInterface*>             MaterialsDamage;                                   // 0x0378(0x0010)(Edit, BlueprintVisible)
	float                                         MaxHP;                                             // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentHP;                                         // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TemplateTurret(int32 EntryPoint);
	void DoDMG();
	void OnLevelReady();
	void SoundEvents();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void UserConstructionScript();
	void TurretRotate();
	void DebugPrint();
	bool OnHit(EImpactType ImpactType, const struct FHitResult& HitResult, float Dmg);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TemplateTurret_C">();
	}
	static class ABP_TemplateTurret_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TemplateTurret_C>();
	}
};
static_assert(alignof(ABP_TemplateTurret_C) == 0x000008, "Wrong alignment on ABP_TemplateTurret_C");
static_assert(sizeof(ABP_TemplateTurret_C) == 0x000390, "Wrong size on ABP_TemplateTurret_C");
static_assert(offsetof(ABP_TemplateTurret_C, UberGraphFrame) == 0x000240, "Member 'ABP_TemplateTurret_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, BP_TargetIndicatorComponent) == 0x000248, "Member 'ABP_TemplateTurret_C::BP_TargetIndicatorComponent' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, Spline) == 0x000250, "Member 'ABP_TemplateTurret_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, StaticMesh1) == 0x000258, "Member 'ABP_TemplateTurret_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, Scene) == 0x000260, "Member 'ABP_TemplateTurret_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, Sphere) == 0x000268, "Member 'ABP_TemplateTurret_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, Target) == 0x000270, "Member 'ABP_TemplateTurret_C::Target' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, Component_TraceView) == 0x000278, "Member 'ABP_TemplateTurret_C::Component_TraceView' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, StaticMesh) == 0x000280, "Member 'ABP_TemplateTurret_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, DefaultSceneRoot) == 0x000288, "Member 'ABP_TemplateTurret_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, Timeline_0_NewTrack_0_4F935BC54DF1E4F573445BA13BCCBF63) == 0x000290, "Member 'ABP_TemplateTurret_C::Timeline_0_NewTrack_0_4F935BC54DF1E4F573445BA13BCCBF63' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, Timeline_0__Direction_4F935BC54DF1E4F573445BA13BCCBF63) == 0x000294, "Member 'ABP_TemplateTurret_C::Timeline_0__Direction_4F935BC54DF1E4F573445BA13BCCBF63' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, Timeline_0) == 0x000298, "Member 'ABP_TemplateTurret_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, IsDebug) == 0x0002A0, "Member 'ABP_TemplateTurret_C::IsDebug' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, IsPower) == 0x0002A1, "Member 'ABP_TemplateTurret_C::IsPower' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, IsTraceView) == 0x0002A2, "Member 'ABP_TemplateTurret_C::IsTraceView' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, TraceView_Settings) == 0x0002A4, "Member 'ABP_TemplateTurret_C::TraceView_Settings' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, EnemyList) == 0x0002B0, "Member 'ABP_TemplateTurret_C::EnemyList' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, EnemyType) == 0x0002C0, "Member 'ABP_TemplateTurret_C::EnemyType' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, TraceType) == 0x0002D0, "Member 'ABP_TemplateTurret_C::TraceType' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, ScanRadius) == 0x0002E0, "Member 'ABP_TemplateTurret_C::ScanRadius' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, ScanTickInterval) == 0x0002E4, "Member 'ABP_TemplateTurret_C::ScanTickInterval' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, IsAlertDuration) == 0x0002E8, "Member 'ABP_TemplateTurret_C::IsAlertDuration' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, IsAttackWait) == 0x0002EC, "Member 'ABP_TemplateTurret_C::IsAttackWait' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, TurretSpeed_RinterpTo) == 0x0002F0, "Member 'ABP_TemplateTurret_C::TurretSpeed_RinterpTo' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, TurretSpeed) == 0x0002F4, "Member 'ABP_TemplateTurret_C::TurretSpeed' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, SplineSpeed) == 0x0002F8, "Member 'ABP_TemplateTurret_C::SplineSpeed' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, AngleLimitMin) == 0x0002FC, "Member 'ABP_TemplateTurret_C::AngleLimitMin' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, AngleLimitMax) == 0x000300, "Member 'ABP_TemplateTurret_C::AngleLimitMax' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, SplinePosition) == 0x000304, "Member 'ABP_TemplateTurret_C::SplinePosition' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, TargetActor) == 0x000308, "Member 'ABP_TemplateTurret_C::TargetActor' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, SetTarget) == 0x000310, "Member 'ABP_TemplateTurret_C::SetTarget' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, IsAlert) == 0x000318, "Member 'ABP_TemplateTurret_C::IsAlert' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, TargetZOffset) == 0x00031C, "Member 'ABP_TemplateTurret_C::TargetZOffset' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, IsAttack) == 0x000320, "Member 'ABP_TemplateTurret_C::IsAttack' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, IsTargetCapture) == 0x000321, "Member 'ABP_TemplateTurret_C::IsTargetCapture' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, IsTargetCaptureRange) == 0x000324, "Member 'ABP_TemplateTurret_C::IsTargetCaptureRange' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, OptimizationDistance) == 0x000328, "Member 'ABP_TemplateTurret_C::OptimizationDistance' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, Sound_Alert) == 0x000330, "Member 'ABP_TemplateTurret_C::Sound_Alert' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, Sound_PostAlert) == 0x000338, "Member 'ABP_TemplateTurret_C::Sound_PostAlert' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, IsDamage) == 0x000340, "Member 'ABP_TemplateTurret_C::IsDamage' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, SkinType) == 0x000344, "Member 'ABP_TemplateTurret_C::SkinType' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, SkinArray1) == 0x000348, "Member 'ABP_TemplateTurret_C::SkinArray1' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, SkinArray2) == 0x000358, "Member 'ABP_TemplateTurret_C::SkinArray2' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, MaterialsMain) == 0x000368, "Member 'ABP_TemplateTurret_C::MaterialsMain' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, MaterialsDamage) == 0x000378, "Member 'ABP_TemplateTurret_C::MaterialsDamage' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, MaxHP) == 0x000388, "Member 'ABP_TemplateTurret_C::MaxHP' has a wrong offset!");
static_assert(offsetof(ABP_TemplateTurret_C, CurrentHP) == 0x00038C, "Member 'ABP_TemplateTurret_C::CurrentHP' has a wrong offset!");

}

