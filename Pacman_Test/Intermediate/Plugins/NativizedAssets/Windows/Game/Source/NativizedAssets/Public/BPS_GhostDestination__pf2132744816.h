#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Pacman_Test/GhostDestination.h"
class ABPS_Pacman_TestGameModeBase_C__pf2132744816;
class UBillboardComponent;
class UBoxComponent;
class UPrimitiveComponent;
class AActor;
class ABPS_GhostCharacter_C__pf2132744816;
class ABPS_GridBlock_C__pf2132744816;
#include "BPS_GhostDestination__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/BPS_GhostDestination.BPS_GhostDestination_C", OverrideNativeName="BPS_GhostDestination_C"))
class ABPS_GhostDestination_C__pf2132744816 : public AGhostDestination
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Billboard Root"))
	UBillboardComponent* bpv__BillboardxRoot__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trigger"))
	UBoxComponent* bpv__Trigger__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Taken", Category="Default", OverrideNativeName="isTaken"))
	bool bpv__isTaken__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Game Mode Ref", Category="Default", OverrideNativeName="GameModeRef"))
	ABPS_Pacman_TestGameModeBase_C__pf2132744816* bpv__GameModeRef__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Current Block", Category="Default", OverrideNativeName="CurrentBlock"))
	ABPS_Pacman_TestGameModeBase_C__pf2132744816* bpv__CurrentBlock__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPS_Pacman_Test_Game_Mode_Base"))
	ABPS_Pacman_TestGameModeBase_C__pf2132744816* b0l__K2Node_DynamicCast_AsBPS_Pacman_Test_Game_Mode_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPS_Ghost_Character"))
	ABPS_GhostCharacter_C__pf2132744816* b0l__K2Node_DynamicCast_AsBPS_Ghost_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetBlockFromGridLocation_BlockActor"))
	ABPS_GridBlock_C__pf2132744816* b0l__CallFunc_GetBlockFromGridLocation_BlockActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
	ABPS_GhostDestination_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BPS_GhostDestination__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_GhostDestination__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_GhostDestination__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_GhostDestination__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Randomize"))
	virtual void bpf__Randomize__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
