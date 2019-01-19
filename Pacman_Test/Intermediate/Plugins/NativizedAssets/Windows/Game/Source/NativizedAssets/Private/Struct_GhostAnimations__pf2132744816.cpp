#include "NativizedAssets.h"
#include "Struct_GhostAnimations__pf2132744816.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbook.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSprite.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/SpriteEditorOnlyTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
FStruct_GhostAnimations__pf2132744816::FStruct_GhostAnimations__pf2132744816()
{
}
PRAGMA_DISABLE_OPTIMIZATION
void FStruct_GhostAnimations__pf2132744816::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Paper2D.PaperFlipbook 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FStruct_GhostAnimations__pf2132744816
{
	FRegisterHelper__FStruct_GhostAnimations__pf2132744816()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/Struct_GhostAnimations"), &FStruct_GhostAnimations__pf2132744816::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FStruct_GhostAnimations__pf2132744816 Instance;
};
FRegisterHelper__FStruct_GhostAnimations__pf2132744816 FRegisterHelper__FStruct_GhostAnimations__pf2132744816::Instance;
