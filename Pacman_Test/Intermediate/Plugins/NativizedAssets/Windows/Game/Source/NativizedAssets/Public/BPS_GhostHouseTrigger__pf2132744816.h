#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Pacman_Test/GhostHouseTrigger.h"
class UBoxComponent;
class AActor;
class ABPS_GhostCharacter_C__pf2132744816;
#include "BPS_GhostHouseTrigger__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/BPS_GhostHouseTrigger.BPS_GhostHouseTrigger_C", OverrideNativeName="BPS_GhostHouseTrigger_C"))
class ABPS_GhostHouseTrigger_C__pf2132744816 : public AGhostHouseTrigger
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box"))
	UBoxComponent* bpv__Box__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b0l__K2Node_Event_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPS_Ghost_Character"))
	ABPS_GhostCharacter_C__pf2132744816* b0l__K2Node_DynamicCast_AsBPS_Ghost_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	ABPS_GhostHouseTrigger_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BPS_GhostHouseTrigger__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Category="Collision", DisplayName="ActorBeginOverlap", ToolTip="Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.", CppFromBpEvent, OverrideNativeName="ReceiveActorBeginOverlap"))
	void bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
