﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RogueCosmetics

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_RogueCosmetics.WBP_RogueCosmetics_C
// 0x00D8 (0x0338 - 0x0260)
class UWBP_RogueCosmetics_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           CannonSkins;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           JacketList;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LTS;                                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RC;                                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_3;                                       // 0x0298(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_4;                                       // 0x02A0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_96;                                      // 0x02A8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LockedLevel_C*                     WBP_LockedLevel;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LockedLevel_C*                     WBP_LockedLevel_1;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LockedLevel_C*                     WBP_LockedLevel_2;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LockedLevel_C*                     WBP_LockedLevel_3;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LockedLevel_C*                     WBP_LockedLevel_4;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LockedLevel_C*                     WBP_LockedLevel_5;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OnLeave_C*                         WBP_OnLeave;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OnLeave_C*                         WBP_OnLeave_98;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TitleV3_C*                         WBP_TitleV3;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                             JacketTable;                                       // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SelectedJacket;                                    // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             CannonTable;                                       // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SelectedCannon;                                    // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter_BP_Manny_C*            MySteel;                                           // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BottomPadding;                                     // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32C[0x4];                                      // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialParameterCollection*           MPC;                                               // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_RogueCosmetics(int32 EntryPoint);
	void BndEvt__WBP_RogueCosmetics_WBP_OnLeave_98_K2Node_ComponentBoundEvent_1_OnLeave__DelegateSignature();
	void BndEvt__WBP_RogueCosmetics_WBP_OnLeave_K2Node_ComponentBoundEvent_0_OnLeave__DelegateSignature();
	void SetToggledCannon(class FName Name_0, bool bAlsoFocus);
	void UntoggleALlCannons();
	void OnClickedAsJacket_Event_1(class UWBP_LockedLevel_C* This);
	void CustomEvent_0(class UWBP_LockedLevel_C* me);
	void SetToggledJkt(class FName MyJck, bool bAlsoFocus);
	void OnClickedAsJacket_Event_0(class UWBP_LockedLevel_C* This);
	void UntoggleAllJackets();
	void OnHoveredForJacket_Event_0(class UWBP_LockedLevel_C* me);
	void OnLeave();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SwapToCannon(EUINavigation Navigation_0);
	void SwapToJacket(EUINavigation Navigation_0);
	struct FSlateColor GetColorAndOpacity_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RogueCosmetics_C">();
	}
	static class UWBP_RogueCosmetics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RogueCosmetics_C>();
	}
};
static_assert(alignof(UWBP_RogueCosmetics_C) == 0x000008, "Wrong alignment on UWBP_RogueCosmetics_C");
static_assert(sizeof(UWBP_RogueCosmetics_C) == 0x000338, "Wrong size on UWBP_RogueCosmetics_C");
static_assert(offsetof(UWBP_RogueCosmetics_C, UberGraphFrame) == 0x000260, "Member 'UWBP_RogueCosmetics_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, CannonSkins) == 0x000268, "Member 'UWBP_RogueCosmetics_C::CannonSkins' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, Image_0) == 0x000270, "Member 'UWBP_RogueCosmetics_C::Image_0' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, JacketList) == 0x000278, "Member 'UWBP_RogueCosmetics_C::JacketList' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, LTS) == 0x000280, "Member 'UWBP_RogueCosmetics_C::LTS' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, RC) == 0x000288, "Member 'UWBP_RogueCosmetics_C::RC' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, TextBlock) == 0x000290, "Member 'UWBP_RogueCosmetics_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, TextBlock_3) == 0x000298, "Member 'UWBP_RogueCosmetics_C::TextBlock_3' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, TextBlock_4) == 0x0002A0, "Member 'UWBP_RogueCosmetics_C::TextBlock_4' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, TextBlock_96) == 0x0002A8, "Member 'UWBP_RogueCosmetics_C::TextBlock_96' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, VerticalBox_0) == 0x0002B0, "Member 'UWBP_RogueCosmetics_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, WBP_LockedLevel) == 0x0002B8, "Member 'UWBP_RogueCosmetics_C::WBP_LockedLevel' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, WBP_LockedLevel_1) == 0x0002C0, "Member 'UWBP_RogueCosmetics_C::WBP_LockedLevel_1' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, WBP_LockedLevel_2) == 0x0002C8, "Member 'UWBP_RogueCosmetics_C::WBP_LockedLevel_2' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, WBP_LockedLevel_3) == 0x0002D0, "Member 'UWBP_RogueCosmetics_C::WBP_LockedLevel_3' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, WBP_LockedLevel_4) == 0x0002D8, "Member 'UWBP_RogueCosmetics_C::WBP_LockedLevel_4' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, WBP_LockedLevel_5) == 0x0002E0, "Member 'UWBP_RogueCosmetics_C::WBP_LockedLevel_5' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, WBP_OnLeave) == 0x0002E8, "Member 'UWBP_RogueCosmetics_C::WBP_OnLeave' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, WBP_OnLeave_98) == 0x0002F0, "Member 'UWBP_RogueCosmetics_C::WBP_OnLeave_98' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, WBP_TitleV3) == 0x0002F8, "Member 'UWBP_RogueCosmetics_C::WBP_TitleV3' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, JacketTable) == 0x000300, "Member 'UWBP_RogueCosmetics_C::JacketTable' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, SelectedJacket) == 0x000308, "Member 'UWBP_RogueCosmetics_C::SelectedJacket' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, CannonTable) == 0x000310, "Member 'UWBP_RogueCosmetics_C::CannonTable' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, SelectedCannon) == 0x000318, "Member 'UWBP_RogueCosmetics_C::SelectedCannon' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, MySteel) == 0x000320, "Member 'UWBP_RogueCosmetics_C::MySteel' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, BottomPadding) == 0x000328, "Member 'UWBP_RogueCosmetics_C::BottomPadding' has a wrong offset!");
static_assert(offsetof(UWBP_RogueCosmetics_C, MPC) == 0x000330, "Member 'UWBP_RogueCosmetics_C::MPC' has a wrong offset!");

}

