#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class UPaperFlipbook;
#include "Struct_GhostAnimations__pf2132744816.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Struct_GhostAnimations.Struct_GhostAnimations", OverrideNativeName="Struct_GhostAnimations"))
struct FStruct_GhostAnimations__pf2132744816
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blue", Tooltip, OverrideNativeName="Blue_2_A664220F49E5896E3C81CBA0D1CE05CB"))
	UPaperFlipbook* bpv__Blue_2_A664220F49E5896E3C81CBA0D1CE05CB__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Flashing", Tooltip, OverrideNativeName="Flashing_4_44FE09804D5222C8EB1C1FB005C6EF9E"))
	UPaperFlipbook* bpv__Flashing_4_44FE09804D5222C8EB1C1FB005C6EF9E__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MoveUp", Tooltip, OverrideNativeName="MoveUp_6_AFC7643E40652AD5FEA47393F3AE2033"))
	UPaperFlipbook* bpv__MoveUp_6_AFC7643E40652AD5FEA47393F3AE2033__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MoveDown", Tooltip, OverrideNativeName="MoveDown_8_EAAF9B654751122106071B9FC1E14AB2"))
	UPaperFlipbook* bpv__MoveDown_8_EAAF9B654751122106071B9FC1E14AB2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MoveLeft", Tooltip, OverrideNativeName="MoveLeft_12_A585917C49A013DE95DE0EB3B4130B0C"))
	UPaperFlipbook* bpv__MoveLeft_12_A585917C49A013DE95DE0EB3B4130B0C__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MoveRight", Tooltip, OverrideNativeName="MoveRight_10_E227AC534763904CA4FFFCA735F9FC2B"))
	UPaperFlipbook* bpv__MoveRight_10_E227AC534763904CA4FFFCA735F9FC2B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Dead_MoveUp", Tooltip, OverrideNativeName="Dead_MoveUp_14_1A6A08084DEA869AF3F609AD2E4AC595"))
	UPaperFlipbook* bpv__Dead_MoveUp_14_1A6A08084DEA869AF3F609AD2E4AC595__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Dead_MoveDown", Tooltip, OverrideNativeName="Dead_MoveDown_16_06286B174E8067A18DEFF49DD430F3FD"))
	UPaperFlipbook* bpv__Dead_MoveDown_16_06286B174E8067A18DEFF49DD430F3FD__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Dead_MoveLeft", Tooltip, OverrideNativeName="Dead_MoveLeft_20_6A21C137457D5CDDDF49E8B7AADD80DC"))
	UPaperFlipbook* bpv__Dead_MoveLeft_20_6A21C137457D5CDDDF49E8B7AADD80DC__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Dead_MoveRight", Tooltip, OverrideNativeName="Dead_MoveRight_18_436420934F9D5218F2A57E977A1E8764"))
	UPaperFlipbook* bpv__Dead_MoveRight_18_436420934F9D5218F2A57E977A1E8764__pf;
	FStruct_GhostAnimations__pf2132744816();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FStruct_GhostAnimations__pf2132744816& __Other) const
	{
		return FStruct_GhostAnimations__pf2132744816::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FStruct_GhostAnimations__pf2132744816& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FStruct_GhostAnimations__pf2132744816::StaticStruct()); }
};
