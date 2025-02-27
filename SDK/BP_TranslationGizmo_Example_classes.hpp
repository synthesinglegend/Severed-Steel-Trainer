﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TranslationGizmo_Example

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RuntimeTransformer_structs.hpp"
#include "RuntimeTransformer_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TranslationGizmo_Example.BP_TranslationGizmo_Example_C
// 0x0060 (0x0350 - 0x02F0)
class ABP_TranslationGizmo_Example_C final : public ATranslationGizmo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   XYZ_Mesh;                                          // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   XZ_Mesh;                                           // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   YZ_Mesh;                                           // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   XY_Mesh;                                           // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Z_Mesh;                                            // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Y_Mesh;                                            // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   X_Mesh;                                            // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Selected_Mesh;                                     // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             Original_Materials;                                // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInterface*                     Material_for_Selection;                            // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TranslationGizmo_Example(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void OnGizmoStateChange_Event_0(ETransformationType GizmoType, bool bTransformInProgress, ETransformationDomain CurrentDomain);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TranslationGizmo_Example_C">();
	}
	static class ABP_TranslationGizmo_Example_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TranslationGizmo_Example_C>();
	}
};
static_assert(alignof(ABP_TranslationGizmo_Example_C) == 0x000008, "Wrong alignment on ABP_TranslationGizmo_Example_C");
static_assert(sizeof(ABP_TranslationGizmo_Example_C) == 0x000350, "Wrong size on ABP_TranslationGizmo_Example_C");
static_assert(offsetof(ABP_TranslationGizmo_Example_C, UberGraphFrame) == 0x0002F0, "Member 'ABP_TranslationGizmo_Example_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TranslationGizmo_Example_C, XYZ_Mesh) == 0x0002F8, "Member 'ABP_TranslationGizmo_Example_C::XYZ_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_TranslationGizmo_Example_C, XZ_Mesh) == 0x000300, "Member 'ABP_TranslationGizmo_Example_C::XZ_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_TranslationGizmo_Example_C, YZ_Mesh) == 0x000308, "Member 'ABP_TranslationGizmo_Example_C::YZ_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_TranslationGizmo_Example_C, XY_Mesh) == 0x000310, "Member 'ABP_TranslationGizmo_Example_C::XY_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_TranslationGizmo_Example_C, Z_Mesh) == 0x000318, "Member 'ABP_TranslationGizmo_Example_C::Z_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_TranslationGizmo_Example_C, Y_Mesh) == 0x000320, "Member 'ABP_TranslationGizmo_Example_C::Y_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_TranslationGizmo_Example_C, X_Mesh) == 0x000328, "Member 'ABP_TranslationGizmo_Example_C::X_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_TranslationGizmo_Example_C, Selected_Mesh) == 0x000330, "Member 'ABP_TranslationGizmo_Example_C::Selected_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_TranslationGizmo_Example_C, Original_Materials) == 0x000338, "Member 'ABP_TranslationGizmo_Example_C::Original_Materials' has a wrong offset!");
static_assert(offsetof(ABP_TranslationGizmo_Example_C, Material_for_Selection) == 0x000348, "Member 'ABP_TranslationGizmo_Example_C::Material_for_Selection' has a wrong offset!");

}

