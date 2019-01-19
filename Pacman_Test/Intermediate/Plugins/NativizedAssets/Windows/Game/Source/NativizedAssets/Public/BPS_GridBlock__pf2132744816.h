#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Pacman_Test/GridBlock.h"
class AActor;
class UBoxComponent;
#include "BPS_GridBlock__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/BPS_GridBlock.BPS_GridBlock_C", OverrideNativeName="BPS_GridBlock_C"))
class ABPS_GridBlock_C__pf2132744816 : public AGridBlock
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box"))
	UBoxComponent* bpv__Box__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Walkable", Category="Default", OverrideNativeName="isWalkable"))
	bool bpv__isWalkable__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Checked", Category="Default", OverrideNativeName="Checked"))
	bool bpv__Checked__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b0l__K2Node_Event_OtherActor__pf;
	ABPS_GridBlock_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BPS_GridBlock_0"))
	void bpf__ExecuteUbergraph_BPS_GridBlock__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPS_GridBlock__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Category="Collision", DisplayName="ActorBeginOverlap", ToolTip="Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.", CppFromBpEvent, OverrideNativeName="ReceiveActorBeginOverlap"))
	void bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
