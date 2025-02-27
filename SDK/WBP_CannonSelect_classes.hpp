﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CannonSelect

#include "Basic.hpp"

#include "ThankYouVeryCool_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CannonSelect.WBP_CannonSelect_C
// 0x00C0 (0x0320 - 0x0260)
class UWBP_CannonSelect_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_LockedLevel_C*                     BeamButton;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CanBox;                                            // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             cHcOMPLETE;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LockedLevel_C*                     DeagleButton;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AdamButton_C*                      DefaultBtn;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_69;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         Info;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LockedLevel_C*                     NoneButton;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LockedLevel_C*                     ShotgunButton;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LockedLevel_C*                     ShotgunButton_1;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LockedLevel_C*                     ShotgunButton_2;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LockedLevel_C*                     SMGButton;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(class FText DisplayName, class UClass* WeaponBase)> WeaponSelected;                                    // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AWeaponBase*                            Weapon_Base;                                       // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              GoBack;                                            // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(ECannonMode Mode, class FText DisplayName)> ArmCannonSelected;                                 // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              DefaultSelected;                                   // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_WBP_CannonSelect(int32 EntryPoint);
	void BndEvt__WBP_CannonSelect_BeamButton_K2Node_ComponentBoundEvent_15_OnClickedAsCannon__DelegateSignature(ECannonMode CannonMode, const class FText& DisplayName, class UWBP_LockedLevel_C* SelfRef);
	void BndEvt__WBP_CannonSelect_BeamButton_K2Node_ComponentBoundEvent_13_OnHoveredAsCannon__DelegateSignature(ECannonMode CannonMode);
	void BndEvt__WBP_CannonSelect_ShotgunButton_2_K2Node_ComponentBoundEvent_5_OnHoveredAsCannon__DelegateSignature(ECannonMode CannonMode);
	void BndEvt__WBP_CannonSelect_ShotgunButton_K2Node_ComponentBoundEvent_10_OnHoveredAsCannon__DelegateSignature(ECannonMode CannonMode);
	void BndEvt__WBP_CannonSelect_DefaultBtn_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature();
	void BndEvt__WBP_CannonSelect_DefaultBtn_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature();
	void BndEvt__WBP_CannonSelect_ShotgunButton_1_K2Node_ComponentBoundEvent_7_OnHoveredAsCannon__DelegateSignature(ECannonMode CannonMode);
	void BndEvt__WBP_CannonSelect_ShotgunButton_2_K2Node_ComponentBoundEvent_4_OnClickedAsCannon__DelegateSignature(ECannonMode CannonMode, const class FText& DisplayName, class UWBP_LockedLevel_C* SelfRef);
	void BndEvt__WBP_CannonSelect_SMGButton_K2Node_ComponentBoundEvent_6_OnClickedAsCannon__DelegateSignature(ECannonMode CannonMode, const class FText& DisplayName, class UWBP_LockedLevel_C* SelfRef);
	void BndEvt__WBP_CannonSelect_SMGButton_K2Node_ComponentBoundEvent_5_OnHoveredAsCannon__DelegateSignature(ECannonMode CannonMode);
	void BndEvt__WBP_CannonSelect_NoneButton_K2Node_ComponentBoundEvent_3_OnHoveredAsCannon__DelegateSignature(ECannonMode CannonMode);
	void BndEvt__WBP_CannonSelect_DeagleButton_K2Node_ComponentBoundEvent_2_OnHoveredAsCannon__DelegateSignature(ECannonMode CannonMode);
	void BndEvt__WBP_CannonSelect_NoneButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
	void BndEvt__WBP_CannonSelect_DeagleButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature();
	void CnnonChoosenee(ECannonMode CannonMode, const class FText& DisplayName, class UWBP_LockedLevel_C* SelfRef);
	void ModeHovered(ECannonMode CannonMode);
	void OnSelectionHovered(class UClass* Weapon, class UWBP_LockedLevel_C* SelfReference);
	void BndEvt__NoneButton_K2Node_ComponentBoundEvent_14_OnClickedForWeapon__DelegateSignature(class UClass* Weapon, class UWBP_LockedLevel_C* SelfReference);
	void BndEvt__NoneButton_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature();
	void Construct();
	void Untogglell();
	void SetToggled(ECannonMode WeaponClass, class UWBP_AdamButton_C** Selected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CannonSelect_C">();
	}
	static class UWBP_CannonSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CannonSelect_C>();
	}
};
static_assert(alignof(UWBP_CannonSelect_C) == 0x000008, "Wrong alignment on UWBP_CannonSelect_C");
static_assert(sizeof(UWBP_CannonSelect_C) == 0x000320, "Wrong size on UWBP_CannonSelect_C");
static_assert(offsetof(UWBP_CannonSelect_C, UberGraphFrame) == 0x000260, "Member 'UWBP_CannonSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, BeamButton) == 0x000268, "Member 'UWBP_CannonSelect_C::BeamButton' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, CanBox) == 0x000270, "Member 'UWBP_CannonSelect_C::CanBox' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, cHcOMPLETE) == 0x000278, "Member 'UWBP_CannonSelect_C::cHcOMPLETE' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, DeagleButton) == 0x000280, "Member 'UWBP_CannonSelect_C::DeagleButton' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, DefaultBtn) == 0x000288, "Member 'UWBP_CannonSelect_C::DefaultBtn' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, Image_0) == 0x000290, "Member 'UWBP_CannonSelect_C::Image_0' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, Image_69) == 0x000298, "Member 'UWBP_CannonSelect_C::Image_69' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, Info) == 0x0002A0, "Member 'UWBP_CannonSelect_C::Info' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, NoneButton) == 0x0002A8, "Member 'UWBP_CannonSelect_C::NoneButton' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, RetainerBox_0) == 0x0002B0, "Member 'UWBP_CannonSelect_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, ShotgunButton) == 0x0002B8, "Member 'UWBP_CannonSelect_C::ShotgunButton' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, ShotgunButton_1) == 0x0002C0, "Member 'UWBP_CannonSelect_C::ShotgunButton_1' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, ShotgunButton_2) == 0x0002C8, "Member 'UWBP_CannonSelect_C::ShotgunButton_2' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, SMGButton) == 0x0002D0, "Member 'UWBP_CannonSelect_C::SMGButton' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, WeaponSelected) == 0x0002D8, "Member 'UWBP_CannonSelect_C::WeaponSelected' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, Weapon_Base) == 0x0002E8, "Member 'UWBP_CannonSelect_C::Weapon_Base' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, GoBack) == 0x0002F0, "Member 'UWBP_CannonSelect_C::GoBack' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, ArmCannonSelected) == 0x000300, "Member 'UWBP_CannonSelect_C::ArmCannonSelected' has a wrong offset!");
static_assert(offsetof(UWBP_CannonSelect_C, DefaultSelected) == 0x000310, "Member 'UWBP_CannonSelect_C::DefaultSelected' has a wrong offset!");

}

