#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Pacman_Test/LevelVisual.h"
class UArrowComponent;
class UStaticMeshComponent;
#include "BPS_LevelVisual__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/BPS_LevelVisual.BPS_LevelVisual_C", OverrideNativeName="BPS_LevelVisual_C"))
class ABPS_LevelVisual_C__pf2132744816 : public ALevelVisual
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Arrow"))
	UArrowComponent* bpv__Arrow__pf;
	ABPS_LevelVisual_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
