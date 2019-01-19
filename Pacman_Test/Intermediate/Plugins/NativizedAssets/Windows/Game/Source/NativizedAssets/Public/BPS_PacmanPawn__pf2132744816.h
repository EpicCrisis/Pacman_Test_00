#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Pacman_Test/PacmanPawn.h"
class ABPS_GhostCharacter_C__pf2132744816;
class AActor;
class ABPS_Pacman_TestGameModeBase_C__pf2132744816;
class UCameraComponent;
class UBoxComponent;
class UStaticMeshComponent;
class USceneComponent;
class UTimelineComponent;
class ABPS_GridBlock_C__pf2132744816;
#include "BPS_PacmanPawn__pf2132744816.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/BPS_PacmanPawn.BPS_PacmanPawn_C", OverrideNativeName="BPS_PacmanPawn_C"))
class ABPS_PacmanPawn_C__pf2132744816 : public APacmanPawn
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="ActorDestroyedSignature__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__ActorDestroyedSignature__DelegateSignature__SC_0, AActor* , bpp__DestroyedActor__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Camera"))
	UCameraComponent* bpv__Camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box"))
	UBoxComponent* bpv__Box__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sphere"))
	UStaticMeshComponent* bpv__Sphere__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(meta=(OverrideNativeName="MovementTimeline_MovementPercent_9CDC5F11463DA47E7A5F329C7A831002"))
	float bpv__MovementTimeline_MovementPercent_9CDC5F11463DA47E7A5F329C7A831002__pf;
	UPROPERTY(meta=(OverrideNativeName="MovementTimeline__Direction_9CDC5F11463DA47E7A5F329C7A831002"))
	TEnumAsByte<ETimelineDirection::Type> bpv__MovementTimeline__Direction_9CDC5F11463DA47E7A5F329C7A831002__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="BPS_PacmanPawn", OverrideNativeName="MovementTimeline"))
	UTimelineComponent* bpv__MovementTimeline__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Game Mode Ref", Category="Default", OverrideNativeName="GameModeRef"))
	ABPS_Pacman_TestGameModeBase_C__pf2132744816* bpv__GameModeRef__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Temp Location", Category="Default", OverrideNativeName="TempLocation"))
	FVector bpv__TempLocation__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Dead?", Category="Default", OverrideNativeName="IsDead?"))
	bool bpv__IsDeadx__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Can Change Direction", Category="Default", OverrideNativeName="CanChangeDirection"))
	bool bpv__CanChangeDirection__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Direction X", Category="Default", OverrideNativeName="DirectionX"))
	int32 bpv__DirectionX__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Direction Y", Category="Default", OverrideNativeName="DirectionY"))
	int32 bpv__DirectionY__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Ghost Points", Category="Default", OverrideNativeName="GhostPoints"))
	int32 bpv__GhostPoints__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Eat Bonus Timer Handle", Category="Default", OverrideNativeName="EatBonusTimerHandle"))
	FTimerHandle bpv__EatBonusTimerHandle__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Bonus Points Time", Category="Default", OverrideNativeName="BonusPointsTime"))
	float bpv__BonusPointsTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key4"))
	FKey b0l__K2Node_InputKeyEvent_Key4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key5"))
	FKey b0l__K2Node_InputKeyEvent_Key5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable1"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPS_Pacman_Test_Game_Mode_Base"))
	ABPS_Pacman_TestGameModeBase_C__pf2132744816* b0l__K2Node_DynamicCast_AsBPS_Pacman_Test_Game_Mode_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_DestroyedActor"))
	AActor* b0l__K2Node_CustomEvent_DestroyedActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable2"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b0l__K2Node_Event_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPS_Ghost_Character"))
	ABPS_GhostCharacter_C__pf2132744816* b0l__K2Node_DynamicCast_AsBPS_Ghost_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ABPS_GhostCharacter_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable1"))
	bool b0l__Temp_bool_IsClosed_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable1"))
	FKey b0l__Temp_struct_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable2"))
	bool b0l__Temp_bool_IsClosed_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable3"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable3"))
	bool b0l__Temp_bool_IsClosed_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key6"))
	FKey b0l__K2Node_InputKeyEvent_Key6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key3"))
	FKey b0l__K2Node_InputKeyEvent_Key3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ABPS_GhostCharacter_C__pf2132744816* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable3"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable1"))
	int32 b0l__Temp_int_Array_Index_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors1"))
	TArray<ABPS_GhostCharacter_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable4"))
	bool b0l__Temp_bool_IsClosed_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item1"))
	ABPS_GhostCharacter_C__pf2132744816* b0l__CallFunc_Array_Get_Item1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable4"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key7"))
	FKey b0l__K2Node_InputKeyEvent_Key7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WorldToGridLocation_X"))
	int32 b0l__CallFunc_WorldToGridLocation_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WorldToGridLocation_Y"))
	int32 b0l__CallFunc_WorldToGridLocation_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetBlockFromGridLocation_BlockActor"))
	ABPS_GridBlock_C__pf2132744816* b0l__CallFunc_GetBlockFromGridLocation_BlockActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WorldToGridLocation_X1"))
	int32 b0l__CallFunc_WorldToGridLocation_X1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WorldToGridLocation_Y1"))
	int32 b0l__CallFunc_WorldToGridLocation_Y1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetBlockFromGridLocation_BlockActor1"))
	ABPS_GridBlock_C__pf2132744816* b0l__CallFunc_GetBlockFromGridLocation_BlockActor1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WorldToGridLocation_X2"))
	int32 b0l__CallFunc_WorldToGridLocation_X2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WorldToGridLocation_Y2"))
	int32 b0l__CallFunc_WorldToGridLocation_Y2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetBlockFromGridLocation_BlockActor2"))
	ABPS_GridBlock_C__pf2132744816* b0l__CallFunc_GetBlockFromGridLocation_BlockActor2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable1"))
	int32 b0l__Temp_int_Loop_Counter_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WorldToGridLocation_X3"))
	int32 b0l__CallFunc_WorldToGridLocation_X3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WorldToGridLocation_Y3"))
	int32 b0l__CallFunc_WorldToGridLocation_Y3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetBlockFromGridLocation_BlockActor3"))
	ABPS_GridBlock_C__pf2132744816* b0l__CallFunc_GetBlockFromGridLocation_BlockActor3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WorldToGridLocation_X4"))
	int32 b0l__CallFunc_WorldToGridLocation_X4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WorldToGridLocation_Y4"))
	int32 b0l__CallFunc_WorldToGridLocation_Y4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetBlockFromGridLocation_BlockActor4"))
	ABPS_GridBlock_C__pf2132744816* b0l__CallFunc_GetBlockFromGridLocation_BlockActor4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key2"))
	FKey b0l__K2Node_InputKeyEvent_Key2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__ActorDestroyedSignature__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WorldToGridLocation_X5"))
	int32 b0l__CallFunc_WorldToGridLocation_X5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WorldToGridLocation_Y5"))
	int32 b0l__CallFunc_WorldToGridLocation_Y5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable2"))
	FKey b0l__Temp_struct_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetBlockFromGridLocation_BlockActor5"))
	ABPS_GridBlock_C__pf2132744816* b0l__CallFunc_GetBlockFromGridLocation_BlockActor5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable5"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WorldToGridLocation_X6"))
	int32 b0l__CallFunc_WorldToGridLocation_X6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WorldToGridLocation_Y6"))
	int32 b0l__CallFunc_WorldToGridLocation_Y6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key1"))
	FKey b0l__K2Node_InputKeyEvent_Key1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetBlockFromGridLocation_BlockActor6"))
	ABPS_GridBlock_C__pf2132744816* b0l__CallFunc_GetBlockFromGridLocation_BlockActor6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WorldToGridLocation_X7"))
	int32 b0l__CallFunc_WorldToGridLocation_X7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WorldToGridLocation_Y7"))
	int32 b0l__CallFunc_WorldToGridLocation_Y7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable3"))
	FKey b0l__Temp_struct_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetBlockFromGridLocation_BlockActor7"))
	ABPS_GridBlock_C__pf2132744816* b0l__CallFunc_GetBlockFromGridLocation_BlockActor7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable5"))
	bool b0l__Temp_bool_IsClosed_Variable5__pf;
	ABPS_PacmanPawn_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BPS_PacmanPawn_1"))
	void bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_8(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ResetBonusPoints"))
	virtual void bpf__ResetBonusPoints__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetGhostPoints"))
	virtual void bpf__GetGhostPoints__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ResetDoOnce"))
	virtual void bpf__ResetDoOnce__pf();
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="EatGhostEvent"))
	virtual void bpf__EatGhostEvent__pf();
	UFUNCTION(meta=(Category="Collision", DisplayName="ActorBeginOverlap", ToolTip="Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.", CppFromBpEvent, OverrideNativeName="ReceiveActorBeginOverlap"))
	void bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RespawnEvent"))
	virtual void bpf__RespawnEvent__pf(AActor* bpp__DestroyedActor__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Down_K2Node_InputKeyEvent_8"))
	virtual void bpf__InpActEvt_Down_K2Node_InputKeyEvent_8__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Down_K2Node_InputKeyEvent_9"))
	virtual void bpf__InpActEvt_Down_K2Node_InputKeyEvent_9__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Up_K2Node_InputKeyEvent_10"))
	virtual void bpf__InpActEvt_Up_K2Node_InputKeyEvent_10__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Up_K2Node_InputKeyEvent_11"))
	virtual void bpf__InpActEvt_Up_K2Node_InputKeyEvent_11__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Left_K2Node_InputKeyEvent_12"))
	virtual void bpf__InpActEvt_Left_K2Node_InputKeyEvent_12__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Left_K2Node_InputKeyEvent_13"))
	virtual void bpf__InpActEvt_Left_K2Node_InputKeyEvent_13__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Right_K2Node_InputKeyEvent_14"))
	virtual void bpf__InpActEvt_Right_K2Node_InputKeyEvent_14__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Right_K2Node_InputKeyEvent_15"))
	virtual void bpf__InpActEvt_Right_K2Node_InputKeyEvent_15__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="MovementTimeline__UpdateFunc"))
	virtual void bpf__MovementTimeline__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="MovementTimeline__FinishedFunc"))
	virtual void bpf__MovementTimeline__FinishedFunc__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
