#include "NativizedAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
namespace
{
	static const FBlueprintDependencyObjectRef NativizedCodeDependenties[] =
	{
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Paper2D"), TEXT("PaperFlipbook"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SceneComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PointerToUberGraphFrame"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Actor"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PlayerStart"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PlayerController"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ActorDestroyedSignature__DelegateSignature"), TEXT("/Script/CoreUObject"), TEXT("DelegateFunction"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("GameplayStatics"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetArrayLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetMathLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetSystemLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("LatentActionInfo"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetStringLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Pacman_Test"), TEXT("Pacman_TestGameModeBase"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("GameSession"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("GameStateBase"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PlayerState"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("HUD"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SpectatorPawn"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ServerStatReplicator"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("BPS_PacDot"), TEXT("BPS_PacDot_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("BPS_GhostCharacter"), TEXT("BPS_GhostCharacter_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("BPS_PacmanPawn"), TEXT("BPS_PacmanPawn_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("BPS_GhostDestination"), TEXT("BPS_GhostDestination_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("BPS_GridBlock"), TEXT("BPS_GridBlock_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Red_U"), TEXT("Red_U"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("BPS_AI_Controller"), TEXT("BPS_AI_Controller_C"), TEXT("/Script/Engine"), TEXT("BlueprintGeneratedClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Blue"), TEXT("Blue"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Flashing_FlipBook"), TEXT("Flashing_FlipBook"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Red_D"), TEXT("Red_D"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Red_L"), TEXT("Red_L"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Red_R"), TEXT("Red_R"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Eyes_UP_Flipbook"), TEXT("Eyes_Up_Flipbook"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Eyes_Down_Flipbook"), TEXT("Eyes_Down_Flipbook"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Eyes_Left_Flipbook"), TEXT("Eyes_Left_Flipbook"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Eyes_Right_Flipbook"), TEXT("Eyes_Right_Flipbook"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Pink_U"), TEXT("Pink_U"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Pink_D"), TEXT("Pink_D"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Pink_L"), TEXT("Pink_L"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Pink_R"), TEXT("Pink_R"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Cyan_U"), TEXT("Cyan_U"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Cyan_D"), TEXT("Cyan_D"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Cyan_L"), TEXT("Cyan_L"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Cyan_R"), TEXT("Cyan_R"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Orange_U"), TEXT("Orange_U"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Orange_D"), TEXT("Orange_D"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Orange_L"), TEXT("Orange_L"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FlipBooks"), TEXT("Orange_R"), TEXT("Orange_R"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Paper2D"), TEXT("PaperFlipbookComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Controller"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("TimerHandle"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("HitResult"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AIModule"), TEXT("AIAsyncTaskBlueprintProxy"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AIModule"), TEXT("EPathFollowingResult"), TEXT("/Script/CoreUObject"), TEXT("Enum"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Pawn"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AIModule"), TEXT("OAISimpleDelegate__DelegateSignature"), TEXT("/Script/CoreUObject"), TEXT("DelegateFunction"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AIModule"), TEXT("AIBlueprintHelperLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("NavigationSystem"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AIModule"), TEXT("CrowdManager"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("RecastNavMesh"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("CharacterMovementComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Character"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Pacman_Test"), TEXT("GhostCharacter"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("ClothingSystemRuntime"), TEXT("ClothingSimulationFactoryNv"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("NavArea_Obstacle"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("BPS_AI_Controller"), TEXT("Default__BPS_AI_Controller_C"), TEXT("/Game/Blueprints/BPS_AI_Controller"), TEXT("BPS_AI_Controller_C"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("Struct_GhostAnimations"), TEXT("Struct_GhostAnimations"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("ENUM_GhostType"), TEXT("ENUM_GhostType"), TEXT("/Script/CoreUObject"), TEXT("Enum"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("BillboardComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EditorResources"), TEXT("S_Actor"), TEXT("S_Actor"), TEXT("/Script/Engine"), TEXT("Texture2D"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("BoxComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("GameModeBase"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PrimitiveComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Pacman_Test"), TEXT("GhostDestination"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("BPS_Pacman_TestGameModeBase"), TEXT("BPS_Pacman_TestGameModeBase_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Pacman_Test"), TEXT("GridBlock"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/BasicShapes"), TEXT("Sphere"), TEXT("Sphere"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Materials"), TEXT("M_Coin"), TEXT("M_Coin"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("StaticMeshComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Pacman_Test"), TEXT("PacDot"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Materials"), TEXT("M_Pacman"), TEXT("M_Pacman"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("CameraComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("InputCore"), TEXT("Key"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("TimelineComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Pacman_Test"), TEXT("PacmanPawn"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ETimelineDirection"), TEXT("/Script/CoreUObject"), TEXT("Enum"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AIModule"), TEXT("AIController"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Meshes"), TEXT("SM_Maze_v0"), TEXT("SM_Maze_v0"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ArrowComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Pacman_Test"), TEXT("LevelVisual"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Pacman_Test"), TEXT("GhostHouseTrigger"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	};
}
const FBlueprintDependencyObjectRef& F__NativeDependencies::Get(int16 Index)
{
static const FBlueprintDependencyObjectRef& NullObjectRef = FBlueprintDependencyObjectRef();
if (Index == -1) { return NullObjectRef; }
	check((Index >= 0) && (Index < 91));
	return ::NativizedCodeDependenties[Index];
};
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
