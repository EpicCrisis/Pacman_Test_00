#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Pacman_Test/Pacman_TestGameModeBase.h"
class ABPS_GridBlock_C__pf2132744816;
class USceneComponent;
class ABPS_PacDot_C__pf2132744816;
class AActor;
class APlayerStart;
class ABPS_GhostCharacter_C__pf2132744816;
class ABPS_GhostDestination_C__pf2132744816;
#include "BPS_Pacman_TestGameModeBase__pf2132744816.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/BPS_Pacman_TestGameModeBase.BPS_Pacman_TestGameModeBase_C", OverrideNativeName="BPS_Pacman_TestGameModeBase_C"))
class ABPS_Pacman_TestGameModeBase_C__pf2132744816 : public APacman_TestGameModeBase
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="ActorDestroyedSignature__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__ActorDestroyedSignature__DelegateSignature__SC_0, AActor* , bpp__DestroyedActor__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Blocks Array", Category="Default", OverrideNativeName="BlocksArray"))
	TArray<ABPS_GridBlock_C__pf2132744816*> bpv__BlocksArray__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Max X", Category="Default", OverrideNativeName="MaxX"))
	int32 bpv__MaxX__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Max Y", Category="Default", OverrideNativeName="MaxY"))
	int32 bpv__MaxY__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Spacing", Category="Default", OverrideNativeName="Spacing"))
	float bpv__Spacing__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Score", Category="Default", OverrideNativeName="Score"))
	int32 bpv__Score__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Lives", Category="Default", OverrideNativeName="Lives"))
	int32 bpv__Lives__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Bonus Ghost Points", Category="Default", OverrideNativeName="BonusGhostPoints"))
	int32 bpv__BonusGhostPoints__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable1"))
	int32 b0l__Temp_int_Loop_Counter_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable1"))
	int32 b0l__Temp_int_Array_Index_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable2"))
	int32 b0l__Temp_int_Array_Index_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable2"))
	int32 b0l__Temp_int_Loop_Counter_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable3"))
	int32 b0l__Temp_int_Array_Index_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ABPS_PacDot_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ABPS_PacDot_C__pf2132744816* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors1"))
	TArray<ABPS_PacDot_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_DestroyedActor"))
	AActor* b0l__K2Node_CustomEvent_DestroyedActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors2"))
	TArray<APlayerStart*> b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item1"))
	APlayerStart* b0l__CallFunc_Array_Get_Item1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors3"))
	TArray<ABPS_GhostCharacter_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	ABPS_GhostCharacter_C__pf2132744816* b0l__CallFunc_Array_Get_Item2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable3"))
	int32 b0l__Temp_int_Loop_Counter_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors4"))
	TArray<ABPS_GhostDestination_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item3"))
	ABPS_GhostDestination_C__pf2132744816* b0l__CallFunc_Array_Get_Item3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FinishSpawningActor_ReturnValue1"))
	ABPS_GridBlock_C__pf2132744816* b0l__CallFunc_FinishSpawningActor_ReturnValue1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors5"))
	TArray<ABPS_GhostCharacter_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__ActorDestroyedSignature__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item4"))
	ABPS_GhostCharacter_C__pf2132744816* b0l__CallFunc_Array_Get_Item4__pf;
	ABPS_Pacman_TestGameModeBase_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BPS_Pacman_TestGameModeBase_0"))
	void bpf__ExecuteUbergraph_BPS_Pacman_TestGameModeBase__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BPS_Pacman_TestGameModeBase_1"))
	void bpf__ExecuteUbergraph_BPS_Pacman_TestGameModeBase__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_Pacman_TestGameModeBase__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_Pacman_TestGameModeBase__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_Pacman_TestGameModeBase__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="WinEvent"))
	virtual void bpf__WinEvent__pf(AActor* bpp__DestroyedActor__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SpawnPacman"))
	virtual void bpf__SpawnPacman__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CreateGrid"))
	virtual void bpf__CreateGrid__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="WorldToGridLocation"))
	virtual void bpf__WorldToGridLocation__pf(FVector bpp__Location__pf, /*out*/ int32& bpp__X__pf, /*out*/ int32& bpp__Y__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetBlockFromGridLocation"))
	virtual void bpf__GetBlockFromGridLocation__pf(int32 bpp__X__pf, int32 bpp__Y__pf, /*out*/ ABPS_GridBlock_C__pf2132744816*& bpp__BlockActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetBlockFromWorldLocation"))
	virtual void bpf__GetBlockFromWorldLocation__pf(FVector bpp__Location__pf, /*out*/ ABPS_GridBlock_C__pf2132744816*& bpp__BlockActor__pf);
public:
};
