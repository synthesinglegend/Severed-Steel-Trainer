﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NewOrContinue

#include "Basic.hpp"

#include "ThankYouVeryCool_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_NewOrContinue.WBP_NewOrContinue_C
// 0x02A8 (0x0508 - 0x0260)
class UWBP_NewOrContinue_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             AuthorName;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AdamButton_C*                      Bonus;                                             // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BonusDesc;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CamImg;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CampaignBox;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CampaignHeaders;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             chp0;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             chp1;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             chp2;                                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             chp2_1;                                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             chp2_2;                                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             chp3;                                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             chp4;                                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             chp5;                                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             chp6;                                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AdamButton_C*                      ContinueBtn;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      ContinueOrSelect;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ContinueSelectSwitch;                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CustomList;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ENDBOX;                                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           HOSTILESBOX;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_7;                                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_69;                                          // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_86;                                          // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           LAIRBOX;                                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelName;                                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelName_1;                                       // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MissionSelect;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AdamButton_C*                      NewButton;                                         // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AdamButton_C*                      NewButton_NotPlus;                                 // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NGPDESC;                                           // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             NGPPanel;                                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           OFFICEBOX;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Plus;                                              // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RAILBOX;                                           // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AdamButton_C*                      SelectBtn;                                         // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EditorMainNav_C*                   Share;                                             // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalRadioSelect_C*               SourceSelect;                                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           THROWNOUTBOX;                                      // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           UNFORSEENBOX;                                      // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Eden01_C*                          WBP_Eden01_C_0;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LevelInfo_C*                       WBP_LevelInfo;                                     // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TitleV3_C*                         WBP_TitleV3;                                       // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_124;                                // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           WorkshopBox;                                       // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              WorkshopBtn;                                       // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WorkshopSwitcher;                                  // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(class UClass* EditorObject, class FText DisplayName)> OnSSLevelSelected;                                 // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(const class FString& Path, class FText DisplayName)> OnCustomLevelSelected;                             // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              GoBack;                                            // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FChallenge>                     EmptyList;                                         // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_LeaderboardWrapper_C*              NewVar_0;                                          // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(class UClass* NewParam)> OnSkipSelected;                                    // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UChapterSaveV2*                         ContinueData;                                      // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnContinueSelected;                                // 0x0480(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSubclassOf<class UCampaignDataAsset>         ContinueClass;                                     // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(bool NGP)>      NewSelected;                                       // 0x0498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UClass*>                         ChapterList;                                       // 0x04A8(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class FText>                           ChapterNames;                                      // 0x04B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMulticastInlineDelegate<void(class UArcadeLevelAsset* NewParam)> OnSkipWorkshopSelected;                            // 0x04C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UCustomCampaign* ToPlay)> OnSkipCustomCampaignSelected;                      // 0x04D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UCustomCampaign*>                CustomCamps;                                       // 0x04E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UArcadeLevelAssetWorkshop*>      OldStyleWSLvls;                                    // 0x04F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_NewOrContinue(int32 EntryPoint);
	void SendTOBonus();
	void BndEvt__WBP_NewOrContinue_Bonus_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature();
	void HoverCustomCamp(class UWBP_AdamButton_C* KME);
	void HoverWorkshop(class UWBP_LockedLevel_DA_C* me);
	void OnPressedWithSelf_Event_0(class UWBP_AdamButton_C* me);
	void BndEvt__WBP_NewOrContinue_NewButton_K2Node_ComponentBoundEvent_8_OnUnhovered__DelegateSignature();
	void BndEvt__WBP_NewOrContinue_NewButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature();
	void BndEvt__WBP_NewOrContinue_Share_K2Node_ComponentBoundEvent_1_Pressed__DelegateSignature(EEditorMainNav OutNav);
	void BndEvt__WBP_NewOrContinue_NewButton_NotPlus_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature();
	void OnClicked_Event_0(class UArcadeLevelAsset* OutLevel, const class FText& DisplayName);
	void PopulateWorkshop(bool bForceConsole);
	void BndEvt__WBP_NewOrContinue_SourceSelect_K2Node_ComponentBoundEvent_5_RadioSelectedSignature__DelegateSignature(const class FString& Value);
	void ForceToSelect();
	void RebuildSelectMenu();
	void BndEvt__WBP_NewOrContinue_NewButton_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature();
	void BndEvt__WBP_NewOrContinue_ContinueBtn_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature();
	void BndEvt__WBP_NewOrContinue_ContinueBtn_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature();
	void SkipSelected(class UClass* OutLevel, const class FText& DisplayName);
	void BndEvt__WBP_NewOrContinue_SelectBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
	void chapterHovered(class UWBP_LockedChapter_C* me);
	void Construct();
	void SetupWithLoad(class UChapterSaveV2* LoadData);
	void SetupAsNew();
	void OnLoaded_4BDC36A547512A16BA1A8088AB66919A(class UObject* Loaded);
	void OnLoaded_D0BDF4374F628CF4EAE3A7AAE6B5EAFF(class UObject* Loaded);
	void OnLoaded_0F86E31C49240BFB1FB7FA924DBD9BD7(class UObject* Loaded);
	void GetDefaultFocus(class UWidget** NewParam);
	void GetBoxFromInt(int32 inInt, class UVerticalBox** NewParam1, class FText* NewParam);
	class UWidget* To_Source(EUINavigation Navigation_0);
	void ForceUINavigationToRadioButton(class UWidget* Widget, int32 RadioButtonIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_NewOrContinue_C">();
	}
	static class UWBP_NewOrContinue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_NewOrContinue_C>();
	}
};
static_assert(alignof(UWBP_NewOrContinue_C) == 0x000008, "Wrong alignment on UWBP_NewOrContinue_C");
static_assert(sizeof(UWBP_NewOrContinue_C) == 0x000508, "Wrong size on UWBP_NewOrContinue_C");
static_assert(offsetof(UWBP_NewOrContinue_C, UberGraphFrame) == 0x000260, "Member 'UWBP_NewOrContinue_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, AuthorName) == 0x000268, "Member 'UWBP_NewOrContinue_C::AuthorName' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, Bonus) == 0x000270, "Member 'UWBP_NewOrContinue_C::Bonus' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, BonusDesc) == 0x000278, "Member 'UWBP_NewOrContinue_C::BonusDesc' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, CamImg) == 0x000280, "Member 'UWBP_NewOrContinue_C::CamImg' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, CampaignBox) == 0x000288, "Member 'UWBP_NewOrContinue_C::CampaignBox' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, CampaignHeaders) == 0x000290, "Member 'UWBP_NewOrContinue_C::CampaignHeaders' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, chp0) == 0x000298, "Member 'UWBP_NewOrContinue_C::chp0' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, chp1) == 0x0002A0, "Member 'UWBP_NewOrContinue_C::chp1' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, chp2) == 0x0002A8, "Member 'UWBP_NewOrContinue_C::chp2' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, chp2_1) == 0x0002B0, "Member 'UWBP_NewOrContinue_C::chp2_1' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, chp2_2) == 0x0002B8, "Member 'UWBP_NewOrContinue_C::chp2_2' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, chp3) == 0x0002C0, "Member 'UWBP_NewOrContinue_C::chp3' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, chp4) == 0x0002C8, "Member 'UWBP_NewOrContinue_C::chp4' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, chp5) == 0x0002D0, "Member 'UWBP_NewOrContinue_C::chp5' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, chp6) == 0x0002D8, "Member 'UWBP_NewOrContinue_C::chp6' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, ContinueBtn) == 0x0002E0, "Member 'UWBP_NewOrContinue_C::ContinueBtn' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, ContinueOrSelect) == 0x0002E8, "Member 'UWBP_NewOrContinue_C::ContinueOrSelect' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, ContinueSelectSwitch) == 0x0002F0, "Member 'UWBP_NewOrContinue_C::ContinueSelectSwitch' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, CustomList) == 0x0002F8, "Member 'UWBP_NewOrContinue_C::CustomList' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, ENDBOX) == 0x000300, "Member 'UWBP_NewOrContinue_C::ENDBOX' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, HOSTILESBOX) == 0x000308, "Member 'UWBP_NewOrContinue_C::HOSTILESBOX' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, Image) == 0x000310, "Member 'UWBP_NewOrContinue_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, Image_1) == 0x000318, "Member 'UWBP_NewOrContinue_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, Image_2) == 0x000320, "Member 'UWBP_NewOrContinue_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, Image_3) == 0x000328, "Member 'UWBP_NewOrContinue_C::Image_3' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, Image_4) == 0x000330, "Member 'UWBP_NewOrContinue_C::Image_4' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, Image_5) == 0x000338, "Member 'UWBP_NewOrContinue_C::Image_5' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, Image_6) == 0x000340, "Member 'UWBP_NewOrContinue_C::Image_6' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, Image_7) == 0x000348, "Member 'UWBP_NewOrContinue_C::Image_7' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, Image_69) == 0x000350, "Member 'UWBP_NewOrContinue_C::Image_69' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, Image_86) == 0x000358, "Member 'UWBP_NewOrContinue_C::Image_86' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, LAIRBOX) == 0x000360, "Member 'UWBP_NewOrContinue_C::LAIRBOX' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, LevelName) == 0x000368, "Member 'UWBP_NewOrContinue_C::LevelName' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, LevelName_1) == 0x000370, "Member 'UWBP_NewOrContinue_C::LevelName_1' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, MissionSelect) == 0x000378, "Member 'UWBP_NewOrContinue_C::MissionSelect' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, NewButton) == 0x000380, "Member 'UWBP_NewOrContinue_C::NewButton' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, NewButton_NotPlus) == 0x000388, "Member 'UWBP_NewOrContinue_C::NewButton_NotPlus' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, NGPDESC) == 0x000390, "Member 'UWBP_NewOrContinue_C::NGPDESC' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, NGPPanel) == 0x000398, "Member 'UWBP_NewOrContinue_C::NGPPanel' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, OFFICEBOX) == 0x0003A0, "Member 'UWBP_NewOrContinue_C::OFFICEBOX' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, Plus) == 0x0003A8, "Member 'UWBP_NewOrContinue_C::Plus' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, RAILBOX) == 0x0003B0, "Member 'UWBP_NewOrContinue_C::RAILBOX' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, RetainerBox_0) == 0x0003B8, "Member 'UWBP_NewOrContinue_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, SelectBtn) == 0x0003C0, "Member 'UWBP_NewOrContinue_C::SelectBtn' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, Share) == 0x0003C8, "Member 'UWBP_NewOrContinue_C::Share' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, SourceSelect) == 0x0003D0, "Member 'UWBP_NewOrContinue_C::SourceSelect' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, THROWNOUTBOX) == 0x0003D8, "Member 'UWBP_NewOrContinue_C::THROWNOUTBOX' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, UNFORSEENBOX) == 0x0003E0, "Member 'UWBP_NewOrContinue_C::UNFORSEENBOX' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, WBP_Eden01_C_0) == 0x0003E8, "Member 'UWBP_NewOrContinue_C::WBP_Eden01_C_0' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, WBP_LevelInfo) == 0x0003F0, "Member 'UWBP_NewOrContinue_C::WBP_LevelInfo' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, WBP_TitleV3) == 0x0003F8, "Member 'UWBP_NewOrContinue_C::WBP_TitleV3' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, WidgetSwitcher_124) == 0x000400, "Member 'UWBP_NewOrContinue_C::WidgetSwitcher_124' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, WorkshopBox) == 0x000408, "Member 'UWBP_NewOrContinue_C::WorkshopBox' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, WorkshopBtn) == 0x000410, "Member 'UWBP_NewOrContinue_C::WorkshopBtn' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, WorkshopSwitcher) == 0x000418, "Member 'UWBP_NewOrContinue_C::WorkshopSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, OnSSLevelSelected) == 0x000420, "Member 'UWBP_NewOrContinue_C::OnSSLevelSelected' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, OnCustomLevelSelected) == 0x000430, "Member 'UWBP_NewOrContinue_C::OnCustomLevelSelected' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, GoBack) == 0x000440, "Member 'UWBP_NewOrContinue_C::GoBack' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, EmptyList) == 0x000450, "Member 'UWBP_NewOrContinue_C::EmptyList' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, NewVar_0) == 0x000460, "Member 'UWBP_NewOrContinue_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, OnSkipSelected) == 0x000468, "Member 'UWBP_NewOrContinue_C::OnSkipSelected' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, ContinueData) == 0x000478, "Member 'UWBP_NewOrContinue_C::ContinueData' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, OnContinueSelected) == 0x000480, "Member 'UWBP_NewOrContinue_C::OnContinueSelected' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, ContinueClass) == 0x000490, "Member 'UWBP_NewOrContinue_C::ContinueClass' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, NewSelected) == 0x000498, "Member 'UWBP_NewOrContinue_C::NewSelected' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, ChapterList) == 0x0004A8, "Member 'UWBP_NewOrContinue_C::ChapterList' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, ChapterNames) == 0x0004B8, "Member 'UWBP_NewOrContinue_C::ChapterNames' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, OnSkipWorkshopSelected) == 0x0004C8, "Member 'UWBP_NewOrContinue_C::OnSkipWorkshopSelected' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, OnSkipCustomCampaignSelected) == 0x0004D8, "Member 'UWBP_NewOrContinue_C::OnSkipCustomCampaignSelected' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, CustomCamps) == 0x0004E8, "Member 'UWBP_NewOrContinue_C::CustomCamps' has a wrong offset!");
static_assert(offsetof(UWBP_NewOrContinue_C, OldStyleWSLvls) == 0x0004F8, "Member 'UWBP_NewOrContinue_C::OldStyleWSLvls' has a wrong offset!");

}

