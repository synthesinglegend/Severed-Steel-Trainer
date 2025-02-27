﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_dISCORDPLZ

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_dISCORDPLZ.WBP_dISCORDPLZ_C
// 0x0018 (0x0278 - 0x0260)
class UWBP_dISCORDPLZ_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_118;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AdamButton_C*                      WBP_AdamButton;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_dISCORDPLZ(int32 EntryPoint);
	void BndEvt__WBP_WishlistPlz_WBP_AdamButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_dISCORDPLZ_C">();
	}
	static class UWBP_dISCORDPLZ_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_dISCORDPLZ_C>();
	}
};
static_assert(alignof(UWBP_dISCORDPLZ_C) == 0x000008, "Wrong alignment on UWBP_dISCORDPLZ_C");
static_assert(sizeof(UWBP_dISCORDPLZ_C) == 0x000278, "Wrong size on UWBP_dISCORDPLZ_C");
static_assert(offsetof(UWBP_dISCORDPLZ_C, UberGraphFrame) == 0x000260, "Member 'UWBP_dISCORDPLZ_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_dISCORDPLZ_C, Image_118) == 0x000268, "Member 'UWBP_dISCORDPLZ_C::Image_118' has a wrong offset!");
static_assert(offsetof(UWBP_dISCORDPLZ_C, WBP_AdamButton) == 0x000270, "Member 'UWBP_dISCORDPLZ_C::WBP_AdamButton' has a wrong offset!");

}

