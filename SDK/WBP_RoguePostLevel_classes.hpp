﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RoguePostLevel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_RoguePostLevel.WBP_RoguePostLevel_C
// 0x00D0 (0x0330 - 0x0260)
class UWBP_RoguePostLevel_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       MoveInSwitcher;                                    // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Bigger;                                            // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_0;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             CardSlot1;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             CardSlot2;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             CardSlot3;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             MiscSlot;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AdamButton_C*                      NoneBtn;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_678;                                     // 0x02A8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Tier;                                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Title;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AdamButton_C*                      WBP_AdamButton_1;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CardBase_C*                        WBP_CardBase_C_317;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CardBase_C*                        WBP_CardBase_C_318;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CardBase_C*                        WBP_CardBase_C_319;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Hand_C*                            WBP_Hand;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LevelScoreSumm_C*                  WBP_LevelScoreSumm;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RogueNext_C*                       WBP_RogueNext;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RogueNext_C*                       WBP_RogueNext_190;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TitleV3_C*                         WBP_TitleV3;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCardData*                              SelectedCard;                                      // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_CardBase_C*>                ShownCards;                                        // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          bCardSelected;                                     // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_RoguePostLevel(int32 EntryPoint);
	void CustomEvent_1(class UWBP_CardBase_C* me);
	void CustomEvent_0();
	void BndEvt__WBP_RoguePostLevel_Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void CSelected(class UCardData* NewParam);
	void PlayerDone_Event_0();
	void EdensysDraw();
	void DrawCards();
	void DoScoreScreen();
	void BndEvt__WBP_RoguePostLevel_WBP_AdamButton_1_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
	void IWasClicked_Event_0(class UWBP_CardBase_C* me);
	void BndEvt__WBP_RoguePostLevel_WBP_AdamButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
	void Construct();
	struct FSlateColor GetColorAndOpacity_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RoguePostLevel_C">();
	}
	static class UWBP_RoguePostLevel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RoguePostLevel_C>();
	}
};
static_assert(alignof(UWBP_RoguePostLevel_C) == 0x000008, "Wrong alignment on UWBP_RoguePostLevel_C");
static_assert(sizeof(UWBP_RoguePostLevel_C) == 0x000330, "Wrong size on UWBP_RoguePostLevel_C");
static_assert(offsetof(UWBP_RoguePostLevel_C, UberGraphFrame) == 0x000260, "Member 'UWBP_RoguePostLevel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, MoveInSwitcher) == 0x000268, "Member 'UWBP_RoguePostLevel_C::MoveInSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, Bigger) == 0x000270, "Member 'UWBP_RoguePostLevel_C::Bigger' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, Button_0) == 0x000278, "Member 'UWBP_RoguePostLevel_C::Button_0' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, CardSlot1) == 0x000280, "Member 'UWBP_RoguePostLevel_C::CardSlot1' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, CardSlot2) == 0x000288, "Member 'UWBP_RoguePostLevel_C::CardSlot2' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, CardSlot3) == 0x000290, "Member 'UWBP_RoguePostLevel_C::CardSlot3' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, MiscSlot) == 0x000298, "Member 'UWBP_RoguePostLevel_C::MiscSlot' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, NoneBtn) == 0x0002A0, "Member 'UWBP_RoguePostLevel_C::NoneBtn' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, TextBlock_678) == 0x0002A8, "Member 'UWBP_RoguePostLevel_C::TextBlock_678' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, Tier) == 0x0002B0, "Member 'UWBP_RoguePostLevel_C::Tier' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, Title) == 0x0002B8, "Member 'UWBP_RoguePostLevel_C::Title' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, WBP_AdamButton_1) == 0x0002C0, "Member 'UWBP_RoguePostLevel_C::WBP_AdamButton_1' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, WBP_CardBase_C_317) == 0x0002C8, "Member 'UWBP_RoguePostLevel_C::WBP_CardBase_C_317' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, WBP_CardBase_C_318) == 0x0002D0, "Member 'UWBP_RoguePostLevel_C::WBP_CardBase_C_318' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, WBP_CardBase_C_319) == 0x0002D8, "Member 'UWBP_RoguePostLevel_C::WBP_CardBase_C_319' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, WBP_Hand) == 0x0002E0, "Member 'UWBP_RoguePostLevel_C::WBP_Hand' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, WBP_LevelScoreSumm) == 0x0002E8, "Member 'UWBP_RoguePostLevel_C::WBP_LevelScoreSumm' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, WBP_RogueNext) == 0x0002F0, "Member 'UWBP_RoguePostLevel_C::WBP_RogueNext' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, WBP_RogueNext_190) == 0x0002F8, "Member 'UWBP_RoguePostLevel_C::WBP_RogueNext_190' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, WBP_TitleV3) == 0x000300, "Member 'UWBP_RoguePostLevel_C::WBP_TitleV3' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, WidgetSwitcher_0) == 0x000308, "Member 'UWBP_RoguePostLevel_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, SelectedCard) == 0x000310, "Member 'UWBP_RoguePostLevel_C::SelectedCard' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, ShownCards) == 0x000318, "Member 'UWBP_RoguePostLevel_C::ShownCards' has a wrong offset!");
static_assert(offsetof(UWBP_RoguePostLevel_C, bCardSelected) == 0x000328, "Member 'UWBP_RoguePostLevel_C::bCardSelected' has a wrong offset!");

}

