#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Pacman_Test/PacDot.h"
class ABPS_Pacman_TestGameModeBase_C__pf2132744816;
class UStaticMeshComponent;
class AActor;
class ABPS_PacmanPawn_C__pf2132744816;
#include "BPS_PacDot__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/BPS_PacDot.BPS_PacDot_C", OverrideNativeName="BPS_PacDot_C"))
class ABPS_PacDot_C__pf2132744816 : public APacDot
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sphere"))
	UStaticMeshComponent* bpv__Sphere__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Power Up?", Category="Default", OverrideNativeName="isPowerUp?"))
	bool bpv__isPowerUpx__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Power Up Scale", Category="Default", OverrideNativeName="PowerUpScale"))
	FVector bpv__PowerUpScale__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Normal Scale", Category="Default", OverrideNativeName="NormalScale"))
	FVector bpv__NormalScale__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Game Mode Ref", Category="Default", OverrideNativeName="GameModeRef"))
	ABPS_Pacman_TestGameModeBase_C__pf2132744816* bpv__GameModeRef__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Points", Category="Default", OverrideNativeName="Points"))
	int32 bpv__Points__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPS_Pacman_Test_Game_Mode_Base"))
	ABPS_Pacman_TestGameModeBase_C__pf2132744816* b0l__K2Node_DynamicCast_AsBPS_Pacman_Test_Game_Mode_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b0l__K2Node_Event_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPS_Pacman_Pawn"))
	ABPS_PacmanPawn_C__pf2132744816* b0l__K2Node_DynamicCast_AsBPS_Pacman_Pawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	ABPS_PacDot_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BPS_PacDot__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_PacDot__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(Category="Collision", DisplayName="ActorBeginOverlap", ToolTip="Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.", CppFromBpEvent, OverrideNativeName="ReceiveActorBeginOverlap"))
	void bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
