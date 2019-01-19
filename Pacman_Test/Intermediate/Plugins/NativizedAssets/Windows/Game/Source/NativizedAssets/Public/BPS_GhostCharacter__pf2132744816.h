#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "ENUM_GhostType__pf2132744816.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Struct_GhostAnimations__pf2132744816.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Pacman_Test/GhostCharacter.h"
class UAIAsyncTaskBlueprintProxy;
class ABPS_GhostDestination_C__pf2132744816;
class ABPS_PacmanPawn_C__pf2132744816;
class UPaperFlipbookComponent;
class UPaperFlipbook;
#include "BPS_GhostCharacter__pf2132744816.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/BPS_GhostCharacter.BPS_GhostCharacter_C", OverrideNativeName="BPS_GhostCharacter_C"))
class ABPS_GhostCharacter_C__pf2132744816 : public AGhostCharacter
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OAISimpleDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OAISimpleDelegate__DelegateSignature__SC_0, EPathFollowingResult::Type , bpp__MovementResult__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SpriteFlipBook"))
	UPaperFlipbookComponent* bpv__SpriteFlipBook__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Can Kill", Category="Default", OverrideNativeName="CanKill"))
	bool bpv__CanKill__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Dead?", Category="Default", OverrideNativeName="isDead?"))
	bool bpv__isDeadx__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Can be Eaten", Category="Default", OverrideNativeName="CanBeEaten"))
	bool bpv__CanBeEaten__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Flashing", Category="Default", OverrideNativeName="isFlashing"))
	bool bpv__isFlashing__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Ghost Type", Category="Default", OverrideNativeName="GhostType"))
	E__ENUM_GhostType__pf bpv__GhostType__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Start Location", Category="Default", OverrideNativeName="StartLocation"))
	FVector bpv__StartLocation__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Temp Velocity", Category="Default", OverrideNativeName="TempVelocity"))
	FVector bpv__TempVelocity__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Ambush Location", Category="Default", OverrideNativeName="AmbushLocation"))
	FVector bpv__AmbushLocation__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Normal Speed", Category="Default", OverrideNativeName="NormalSpeed"))
	float bpv__NormalSpeed__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blue Speed", Category="Default", OverrideNativeName="BlueSpeed"))
	float bpv__BlueSpeed__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Avoidance Distance", Category="Default", OverrideNativeName="AvoidanceDistance"))
	float bpv__AvoidanceDistance__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Can be Eaten Time", Category="Default", OverrideNativeName="CanBeEatenTime"))
	float bpv__CanBeEatenTime__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Flashing Time", Category="Default", OverrideNativeName="FlashingTime"))
	float bpv__FlashingTime__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Current Ambush Distance", Category="Default", OverrideNativeName="CurrentAmbushDistance"))
	float bpv__CurrentAmbushDistance__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Flashing Event Timer Handle", Category="Default", OverrideNativeName="FlashingEventTimerHandle"))
	FTimerHandle bpv__FlashingEventTimerHandle__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Back to Normal Timer Handle", Category="Default", OverrideNativeName="BackToNormalTimerHandle"))
	FTimerHandle bpv__BackToNormalTimerHandle__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Animation Struct", Category="Default", OverrideNativeName="AnimationStruct"))
	FStruct_GhostAnimations__pf2132744816 bpv__AnimationStruct__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Pacman Player", Category="Default", OverrideNativeName="PacmanPlayer"))
	ABPS_PacmanPawn_C__pf2132744816* bpv__PacmanPlayer__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Current Target Trigger", Category="Default", OverrideNativeName="CurrentTargetTrigger"))
	ABPS_GhostDestination_C__pf2132744816* bpv__CurrentTargetTrigger__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Target Trigger Array", Category="Default", OverrideNativeName="TargetTriggerArray"))
	TArray<ABPS_GhostDestination_C__pf2132744816*> bpv__TargetTriggerArray__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum1_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum1_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ABPS_PacmanPawn_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable1"))
	bool b0l__Temp_bool_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable2"))
	bool b0l__Temp_bool_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable3"))
	bool b0l__Temp_bool_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ABPS_GhostDestination_C__pf2132744816* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors1"))
	TArray<ABPS_GhostDestination_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors2"))
	TArray<ABPS_GhostDestination_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable4"))
	bool b0l__Temp_bool_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue1"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue2"))
	bool b0l__CallFunc_IsValid_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue2"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue3"))
	bool b0l__CallFunc_IsValid_ReturnValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPS_Pacman_Pawn"))
	ABPS_PacmanPawn_C__pf2132744816* b0l__K2Node_DynamicCast_AsBPS_Pacman_Pawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable1"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__Temp_byte_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X1"))
	float b0l__CallFunc_BreakVector_X1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y1"))
	float b0l__CallFunc_BreakVector_Y1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z1"))
	float b0l__CallFunc_BreakVector_Z1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors3"))
	TArray<ABPS_GhostDestination_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item1"))
	ABPS_GhostDestination_C__pf2132744816* b0l__CallFunc_Array_Get_Item1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult2"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate1"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult3"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate2"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult1"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable1"))
	int32 b0l__Temp_int_Array_Index_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	ABPS_PacmanPawn_C__pf2132744816* b0l__CallFunc_Array_Get_Item2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate3"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X2"))
	float b0l__CallFunc_BreakVector_X2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y2"))
	float b0l__CallFunc_BreakVector_Y2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z2"))
	float b0l__CallFunc_BreakVector_Z2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable2"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__Temp_byte_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult4"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X3"))
	float b0l__CallFunc_BreakVector_X3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y3"))
	float b0l__CallFunc_BreakVector_Y3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z3"))
	float b0l__CallFunc_BreakVector_Z3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	UPaperFlipbook* b0l__K2Node_Select_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate4"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X4"))
	float b0l__CallFunc_BreakVector_X4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y4"))
	float b0l__CallFunc_BreakVector_Y4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z4"))
	float b0l__CallFunc_BreakVector_Z4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select1_Default"))
	UPaperFlipbook* b0l__K2Node_Select1_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable1"))
	int32 b0l__Temp_int_Loop_Counter_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult5"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select2_Default"))
	UPaperFlipbook* b0l__K2Node_Select2_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X5"))
	float b0l__CallFunc_BreakVector_X5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y5"))
	float b0l__CallFunc_BreakVector_Y5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z5"))
	float b0l__CallFunc_BreakVector_Z5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select3_Default"))
	UPaperFlipbook* b0l__K2Node_Select3_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate5"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable2"))
	int32 b0l__Temp_int_Loop_Counter_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select4_Default"))
	UPaperFlipbook* b0l__K2Node_Select4_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable2"))
	int32 b0l__Temp_int_Array_Index_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item3"))
	ABPS_GhostDestination_C__pf2132744816* b0l__CallFunc_Array_Get_Item3__pf;
	ABPS_GhostCharacter_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BPS_GhostCharacter_3"))
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BPS_GhostCharacter_6"))
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BPS_GhostCharacter_7"))
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_8(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BPS_GhostCharacter_9"))
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_17(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BPS_GhostCharacter_18"))
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_18(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_19(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RandomBehavior"))
	virtual void bpf__RandomBehavior__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AmbushEvent"))
	virtual void bpf__AmbushEvent__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ChaseEvent"))
	virtual void bpf__ChaseEvent__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RandomMovement"))
	virtual void bpf__RandomMovement__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CanBeEatenEvent"))
	virtual void bpf__CanBeEatenEvent__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AvoidPlayer"))
	virtual void bpf__AvoidPlayer__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ResetLocation"))
	virtual void bpf__ResetLocation__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="BackToNormal"))
	virtual void bpf__BackToNormal__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FindNextDestination"))
	virtual void bpf__FindNextDestination__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="EatEvent"))
	virtual void bpf__EatEvent__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Reset"))
	virtual void bpf__Reset__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FlashingEvent"))
	virtual void bpf__FlashingEvent__pf();
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_C537F99C45B20625B508309E69E172C4"))
	virtual void bpf__OnSuccess_C537F99C45B20625B508309E69E172C4__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_C537F99C45B20625B508309E69E172C4"))
	virtual void bpf__OnFail_C537F99C45B20625B508309E69E172C4__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_17E8EF204C5D4BD7DF7E20AC1F29302A"))
	virtual void bpf__OnSuccess_17E8EF204C5D4BD7DF7E20AC1F29302A__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_17E8EF204C5D4BD7DF7E20AC1F29302A"))
	virtual void bpf__OnFail_17E8EF204C5D4BD7DF7E20AC1F29302A__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_7B2F85FD4A620E06DFC02BB56EDAB5C3"))
	virtual void bpf__OnSuccess_7B2F85FD4A620E06DFC02BB56EDAB5C3__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_7B2F85FD4A620E06DFC02BB56EDAB5C3"))
	virtual void bpf__OnFail_7B2F85FD4A620E06DFC02BB56EDAB5C3__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
