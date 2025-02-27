﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_RadialMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EJoystickTypes_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_RadialMenu.UMG_RadialMenu_C
// 0x0138 (0x0398 - 0x0260)
class UUMG_RadialMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 RadialBackground;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RadiusDebug;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               RootOverlay;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Segments;                                          // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     MaterialBase;                                      // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IndexRaw;                                          // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               dynaMat;                                           // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                    Children;                                          // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          AllowResizing;                                     // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B1[0x3];                                      // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ItemOffsetRadius;                                  // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(int32 NewSelection, int32 OldSelection)> SelectionChanged;                                  // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class APlayerController*                      InputController;                                   // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJoystickTypes                                JoystickToUse;                                     // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D1[0x3];                                      // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MouseDeadzone;                                     // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInDeadzone;                                       // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D9[0x7];                                      // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              EnteredDeadzone;                                   // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              ExitedDeadzone;                                    // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                              CurrentInput;                                      // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         JoystickDeadzone;                                  // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DefaultToMouseIfNoJoystick;                        // 0x030C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_30D[0x3];                                      // 0x030D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DefaultPlayerIndex;                                // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          UseDeadzoneEvents;                                 // 0x0314(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_315[0x3];                                      // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             SelectionChangedSound;                             // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AutoCenterMouse;                                   // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                          AutoRotateForUp;                                   // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bUseCustomInput;                                   // 0x0322(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_323[0x1];                                      // 0x0323(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CustomInput;                                       // 0x0324(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseCustomTexture;                                  // 0x032C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32D[0x3];                                      // 0x032D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               RadialTexture;                                     // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseCustomColors;                                   // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_339[0x3];                                      // 0x0339(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           InnterRingColor;                                   // 0x033C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OuterRingColor;                                    // 0x034C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           RingMainColor;                                     // 0x035C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           UnhighlightColor;                                  // 0x036C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37C[0x4];                                      // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATYVCPC_BP_C*                           TYVCPC;                                            // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DegreesThisFrame;                                  // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentRingPhase;                                  // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IndexRawLastFrame;                                 // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_RadialMenu(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void UpdateMaterials();
	void InDeadZone(bool InDeadZone_0);
	void UpdateSegments(int32 Segments_0);
	void Construct();
	void SetInputDirection(const struct FVector2D& Direction);
	float GetSectionDegreeSize();
	void UpdateDirectionWithMouseCursor();
	void AddChildToRadialMenu(class UUserWidget* Content, bool* Success);
	void GetSelectedWidget(class UUserWidget** Output);
	void ClearChildren();
	void UpdateChildPosition(int32 Param_Index_0);
	void UpdateAllChildrenPositions();
	void SetIndex(int32 Param_Index_0);
	void GetChild(int32 Param_Index_0, class UUserWidget** Output, bool* Success);
	void GetCurrentIndex(int32* Param_Index_0, bool* Valid);
	void UpdateDirectionWithJoystick();
	void RegisterPlayerInput(class APlayerController* Controller, bool* Success);
	void UpdateInput();
	void AutoRegisterToInput();
	void FixMainRotation();
	struct FVector2D FixInputRotation(const struct FVector2D& Input);
	class FText DebugIndex();
	void RemoveChildWidgetFromRadialMenu(const class UUserWidget*& ItemToFind);
	void RemoveChildIndexFromRadialMenu(int32 IndexToRemove);
	void UpdateDirectionWithCustomInput();
	void SetCustomInput(const struct FVector2D& CustomInput_0);
	void GetCustomInput(struct FVector2D* Input, bool* Valid);
	void UpdateMaterialVisuals();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_RadialMenu_C">();
	}
	static class UUMG_RadialMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_RadialMenu_C>();
	}
};
static_assert(alignof(UUMG_RadialMenu_C) == 0x000008, "Wrong alignment on UUMG_RadialMenu_C");
static_assert(sizeof(UUMG_RadialMenu_C) == 0x000398, "Wrong size on UUMG_RadialMenu_C");
static_assert(offsetof(UUMG_RadialMenu_C, UberGraphFrame) == 0x000260, "Member 'UUMG_RadialMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, RadialBackground) == 0x000268, "Member 'UUMG_RadialMenu_C::RadialBackground' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, RadiusDebug) == 0x000270, "Member 'UUMG_RadialMenu_C::RadiusDebug' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, RootOverlay) == 0x000278, "Member 'UUMG_RadialMenu_C::RootOverlay' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, Segments) == 0x000280, "Member 'UUMG_RadialMenu_C::Segments' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, MaterialBase) == 0x000288, "Member 'UUMG_RadialMenu_C::MaterialBase' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, IndexRaw) == 0x000290, "Member 'UUMG_RadialMenu_C::IndexRaw' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, Index_0) == 0x000294, "Member 'UUMG_RadialMenu_C::Index_0' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, dynaMat) == 0x000298, "Member 'UUMG_RadialMenu_C::dynaMat' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, Children) == 0x0002A0, "Member 'UUMG_RadialMenu_C::Children' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, AllowResizing) == 0x0002B0, "Member 'UUMG_RadialMenu_C::AllowResizing' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, ItemOffsetRadius) == 0x0002B4, "Member 'UUMG_RadialMenu_C::ItemOffsetRadius' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, SelectionChanged) == 0x0002B8, "Member 'UUMG_RadialMenu_C::SelectionChanged' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, InputController) == 0x0002C8, "Member 'UUMG_RadialMenu_C::InputController' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, JoystickToUse) == 0x0002D0, "Member 'UUMG_RadialMenu_C::JoystickToUse' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, MouseDeadzone) == 0x0002D4, "Member 'UUMG_RadialMenu_C::MouseDeadzone' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, bInDeadzone) == 0x0002D8, "Member 'UUMG_RadialMenu_C::bInDeadzone' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, EnteredDeadzone) == 0x0002E0, "Member 'UUMG_RadialMenu_C::EnteredDeadzone' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, ExitedDeadzone) == 0x0002F0, "Member 'UUMG_RadialMenu_C::ExitedDeadzone' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, CurrentInput) == 0x000300, "Member 'UUMG_RadialMenu_C::CurrentInput' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, JoystickDeadzone) == 0x000308, "Member 'UUMG_RadialMenu_C::JoystickDeadzone' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, DefaultToMouseIfNoJoystick) == 0x00030C, "Member 'UUMG_RadialMenu_C::DefaultToMouseIfNoJoystick' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, DefaultPlayerIndex) == 0x000310, "Member 'UUMG_RadialMenu_C::DefaultPlayerIndex' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, UseDeadzoneEvents) == 0x000314, "Member 'UUMG_RadialMenu_C::UseDeadzoneEvents' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, SelectionChangedSound) == 0x000318, "Member 'UUMG_RadialMenu_C::SelectionChangedSound' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, AutoCenterMouse) == 0x000320, "Member 'UUMG_RadialMenu_C::AutoCenterMouse' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, AutoRotateForUp) == 0x000321, "Member 'UUMG_RadialMenu_C::AutoRotateForUp' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, bUseCustomInput) == 0x000322, "Member 'UUMG_RadialMenu_C::bUseCustomInput' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, CustomInput) == 0x000324, "Member 'UUMG_RadialMenu_C::CustomInput' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, UseCustomTexture) == 0x00032C, "Member 'UUMG_RadialMenu_C::UseCustomTexture' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, RadialTexture) == 0x000330, "Member 'UUMG_RadialMenu_C::RadialTexture' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, UseCustomColors) == 0x000338, "Member 'UUMG_RadialMenu_C::UseCustomColors' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, InnterRingColor) == 0x00033C, "Member 'UUMG_RadialMenu_C::InnterRingColor' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, OuterRingColor) == 0x00034C, "Member 'UUMG_RadialMenu_C::OuterRingColor' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, RingMainColor) == 0x00035C, "Member 'UUMG_RadialMenu_C::RingMainColor' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, UnhighlightColor) == 0x00036C, "Member 'UUMG_RadialMenu_C::UnhighlightColor' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, TYVCPC) == 0x000380, "Member 'UUMG_RadialMenu_C::TYVCPC' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, DegreesThisFrame) == 0x000388, "Member 'UUMG_RadialMenu_C::DegreesThisFrame' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, CurrentRingPhase) == 0x00038C, "Member 'UUMG_RadialMenu_C::CurrentRingPhase' has a wrong offset!");
static_assert(offsetof(UUMG_RadialMenu_C, IndexRawLastFrame) == 0x000390, "Member 'UUMG_RadialMenu_C::IndexRawLastFrame' has a wrong offset!");

}

