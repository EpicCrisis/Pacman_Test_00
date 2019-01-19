#include "NativizedAssets.h"
#include "BPS_Pacman_TestGameModeBase__pf2132744816.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Public/IAmbisonicsMixer.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollision.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationSystem.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/AI/Navigation/CrowdManagerBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavMeshBoundsVolume.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationPath.h"
#include "Runtime/AIModule/Classes/Navigation/CrowdManager.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "BPS_PacDot__pf2132744816.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerStart.h"
#include "BPS_GhostCharacter__pf2132744816.h"
#include "BPS_PacmanPawn__pf2132744816.h"
#include "BPS_GhostDestination__pf2132744816.h"
#include "BPS_GridBlock__pf2132744816.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABPS_Pacman_TestGameModeBase_C__pf2132744816::ABPS_Pacman_TestGameModeBase_C__pf2132744816(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABPS_Pacman_TestGameModeBase_C__pf2132744816::StaticClass() == GetClass()))
	{
		ABPS_Pacman_TestGameModeBase_C__pf2132744816::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__BlocksArray__pf = TArray<ABPS_GridBlock_C__pf2132744816*> ();
	bpv__MaxX__pf = 23;
	bpv__MaxY__pf = 23;
	bpv__Spacing__pf = 100.000000f;
	bpv__Score__pf = 0;
	bpv__Lives__pf = 3;
	bpv__BonusGhostPoints__pf = 200;
	DefaultPawnClass = ABPS_PacmanPawn_C__pf2132744816::StaticClass();
	PrimaryActorTick.bCanEverTick = true;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABPS_Pacman_TestGameModeBase_C__pf2132744816::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABPS_Pacman_TestGameModeBase_C__pf2132744816::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ABPS_PacDot_C__pf2132744816::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABPS_GhostCharacter_C__pf2132744816::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABPS_PacmanPawn_C__pf2132744816::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABPS_GhostDestination_C__pf2132744816::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABPS_GridBlock_C__pf2132744816::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
void ABPS_Pacman_TestGameModeBase_C__pf2132744816::bpf__ExecuteUbergraph_BPS_Pacman_TestGameModeBase__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue1__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue4__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue3__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				UGameplayStatics::OpenLevel(this, FName(TEXT("Pacman_Level")), true, FString(TEXT("")));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				__CurrentState = 1;
				break;
			}
		case 35:
			{
				__StateStack.Push(38);
			}
		case 36:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors5__pf, b0l__Temp_int_Array_Index_Variable3__pf, /*out*/ b0l__CallFunc_Array_Get_Item4__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item4__pf))
				{
					b0l__CallFunc_Array_Get_Item4__pf->bpf__CanBeEatenEvent__pf();
				}
			}
		case 37:
			{
				UKismetSystemLibrary::Delay(this, 5.000000, FLatentActionInfo(20, 1513154700, TEXT("ExecuteUbergraph_BPS_Pacman_TestGameModeBase_0"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 38:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable2__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
			}
		case 39:
			{
				bpfv__CallFunc_Array_Length_ReturnValue4__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors5__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue3__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable2__pf, bpfv__CallFunc_Array_Length_ReturnValue4__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 40:
			{
				b0l__Temp_int_Array_Index_Variable3__pf = b0l__Temp_int_Loop_Counter_Variable2__pf;
				__CurrentState = 35;
				break;
			}
		case 41:
			{
				b0l__Temp_int_Loop_Counter_Variable2__pf = 0;
			}
		case 42:
			{
				b0l__Temp_int_Array_Index_Variable3__pf = 0;
				__CurrentState = 39;
				break;
			}
		case 58:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABPS_PacDot_C__pf2132744816::StaticClass(), /*out*/ TArrayCaster<ABPS_PacDot_C__pf2132744816*>(b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf).Get<AActor*>());
			}
		case 59:
			{
				bpfv__CallFunc_Array_Length_ReturnValue1__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Array_Length_ReturnValue1__pf, 1);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 60:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("YOU WIN")), true, true, FLinearColor(0.000000,1.000000,0.000000,1.000000), 2.000000);
			}
		case 61:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors5__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABPS_GhostCharacter_C__pf2132744816::StaticClass(), /*out*/ TArrayCaster<ABPS_GhostCharacter_C__pf2132744816*>(b0l__CallFunc_GetAllActorsOfClass_OutActors5__pf).Get<AActor*>());
				__CurrentState = 41;
				break;
			}
		case 62:
			{
				__CurrentState = 58;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPS_Pacman_TestGameModeBase_C__pf2132744816::bpf__ExecuteUbergraph_BPS_Pacman_TestGameModeBase__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue3__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__CurrentState = 3;
				break;
			}
		case 3:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors3__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABPS_GhostCharacter_C__pf2132744816::StaticClass(), /*out*/ TArrayCaster<ABPS_GhostCharacter_C__pf2132744816*>(b0l__CallFunc_GetAllActorsOfClass_OutActors3__pf).Get<AActor*>());
			}
		case 4:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 5:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 6:
			{
				bpfv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors3__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 8:
			{
				__StateStack.Push(10);
			}
		case 9:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors3__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item2__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item2__pf))
				{
					b0l__CallFunc_Array_Get_Item2__pf->bpf__FindNextDestination__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 6;
				break;
			}
		case 11:
			{
				__CurrentState = 12;
				break;
			}
		case 12:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors4__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABPS_GhostDestination_C__pf2132744816::StaticClass(), /*out*/ TArrayCaster<ABPS_GhostDestination_C__pf2132744816*>(b0l__CallFunc_GetAllActorsOfClass_OutActors4__pf).Get<AActor*>());
			}
		case 13:
			{
				b0l__Temp_int_Loop_Counter_Variable1__pf = 0;
			}
		case 14:
			{
				b0l__Temp_int_Array_Index_Variable1__pf = 0;
			}
		case 15:
			{
				bpfv__CallFunc_Array_Length_ReturnValue3__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors4__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue2__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable1__pf, bpfv__CallFunc_Array_Length_ReturnValue3__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 16:
			{
				b0l__Temp_int_Array_Index_Variable1__pf = b0l__Temp_int_Loop_Counter_Variable1__pf;
			}
		case 17:
			{
				__StateStack.Push(19);
			}
		case 18:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors4__pf, b0l__Temp_int_Array_Index_Variable1__pf, /*out*/ b0l__CallFunc_Array_Get_Item3__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item3__pf))
				{
					b0l__CallFunc_Array_Get_Item3__pf->bpf__Randomize__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue1__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable1__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue1__pf;
				__CurrentState = 15;
				break;
			}
		case 51:
			{
				__CurrentState = 52;
				break;
			}
		case 52:
			{
				bpv__Score__pf = 0;
			}
		case 53:
			{
				bpv__Lives__pf = 3;
			}
		case 54:
			{
				bpf__CreateGrid__pf();
			}
		case 55:
			{
				__StateStack.Push(57);
			}
		case 56:
			{
				UKismetSystemLibrary::Delay(this, 2.000000, FLatentActionInfo(2, 979876748, TEXT("ExecuteUbergraph_BPS_Pacman_TestGameModeBase_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 57:
			{
				UKismetSystemLibrary::Delay(this, 2.000000, FLatentActionInfo(11, 2147483647, TEXT("ExecuteUbergraph_BPS_Pacman_TestGameModeBase_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPS_Pacman_TestGameModeBase_C__pf2132744816::bpf__ExecuteUbergraph_BPS_Pacman_TestGameModeBase__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue3__pf{};
	int32 bpfv__CallFunc_Percent_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Divide_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue1__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue4__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 21:
			{
				__StateStack.Push(32);
			}
		case 22:
			{
				bpfv__CallFunc_Percent_IntInt_ReturnValue__pf = UKismetMathLibrary::Percent_IntInt(b0l__Temp_int_Variable__pf, 23);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_Percent_IntInt_ReturnValue__pf, bpv__Spacing__pf);
				bpfv__CallFunc_Divide_IntInt_ReturnValue__pf = UKismetMathLibrary::Divide_IntInt(b0l__Temp_int_Variable__pf, 23);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue1__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_Divide_IntInt_ReturnValue__pf, bpv__Spacing__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Multiply_IntFloat_ReturnValue1__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, 0.000000);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABPS_GridBlock_C__pf2132744816::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 23:
			{
				bpfv__CallFunc_Percent_IntInt_ReturnValue__pf = UKismetMathLibrary::Percent_IntInt(b0l__Temp_int_Variable__pf, 23);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_Percent_IntInt_ReturnValue__pf, bpv__Spacing__pf);
				bpfv__CallFunc_Divide_IntInt_ReturnValue__pf = UKismetMathLibrary::Divide_IntInt(b0l__Temp_int_Variable__pf, 23);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue1__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_Divide_IntInt_ReturnValue__pf, bpv__Spacing__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Multiply_IntFloat_ReturnValue1__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, 0.000000);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				b0l__CallFunc_FinishSpawningActor_ReturnValue1__pf = CastChecked<ABPS_GridBlock_C__pf2132744816>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 24:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__BlocksArray__pf, b0l__CallFunc_FinishSpawningActor_ReturnValue1__pf);
			}
		case 25:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABPS_PacDot_C__pf2132744816::StaticClass(), /*out*/ TArrayCaster<ABPS_PacDot_C__pf2132744816*>(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 26:
			{
				b0l__Temp_int_Loop_Counter_Variable3__pf = 0;
			}
		case 27:
			{
				b0l__Temp_int_Array_Index_Variable2__pf = 0;
			}
		case 28:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue1__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable3__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 29:
			{
				b0l__Temp_int_Array_Index_Variable2__pf = b0l__Temp_int_Loop_Counter_Variable3__pf;
			}
		case 30:
			{
				__StateStack.Push(34);
			}
		case 31:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, b0l__Temp_int_Array_Index_Variable2__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("WinEvent")));
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->OnDestroyed.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 32:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue4__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Variable__pf, 1);
				b0l__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue4__pf;
			}
		case 33:
			{
				bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf = UKismetMathLibrary::Multiply_IntInt(bpv__MaxX__pf, bpv__MaxY__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(b0l__Temp_int_Variable__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 21;
				break;
			}
		case 34:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue3__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable3__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable3__pf = bpfv__CallFunc_Add_IntInt_ReturnValue3__pf;
				__CurrentState = 28;
				break;
			}
		case 43:
			{
				__CurrentState = 44;
				break;
			}
		case 44:
			{
				FCustomThunkTemplates::Array_Clear(bpv__BlocksArray__pf);
			}
		case 45:
			{
				b0l__Temp_int_Variable__pf = 0;
				__CurrentState = 33;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPS_Pacman_TestGameModeBase_C__pf2132744816::bpf__ExecuteUbergraph_BPS_Pacman_TestGameModeBase__pf_3(int32 bpp__EntryPoint__pf)
{
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue1__pf{};
	check(bpp__EntryPoint__pf == 63);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Conv_IntToString_ReturnValue1__pf = UKismetStringLibrary::Conv_IntToString(bpv__Lives__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue1__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Lives : ")), bpfv__CallFunc_Conv_IntToString_ReturnValue1__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue1__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), b0l__K2Node_Event_DeltaSeconds__pf);
	bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpv__Score__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Score : ")), bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), b0l__K2Node_Event_DeltaSeconds__pf);
	return; //KCST_EndOfThread
}
void ABPS_Pacman_TestGameModeBase_C__pf2132744816::bpf__ExecuteUbergraph_BPS_Pacman_TestGameModeBase__pf_4(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	FTransform bpfv__CallFunc_GetTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	ABPS_PacmanPawn_C__pf2132744816* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 46);
	// optimized KCST_UnconditionalGoto
	(b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf).Reset();
	UGameplayStatics::GetAllActorsOfClass(this, APlayerStart::StaticClass(), /*out*/ TArrayCaster<APlayerStart*>(b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf).Get<AActor*>());
	FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item1__pf);
	if(::IsValid(b0l__CallFunc_Array_Get_Item1__pf))
	{
		bpfv__CallFunc_GetTransform_ReturnValue__pf = b0l__CallFunc_Array_Get_Item1__pf->AActor::GetTransform();
	}
	bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABPS_PacmanPawn_C__pf2132744816::StaticClass(), bpfv__CallFunc_GetTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
	FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item1__pf);
	if(::IsValid(b0l__CallFunc_Array_Get_Item1__pf))
	{
		bpfv__CallFunc_GetTransform_ReturnValue__pf = b0l__CallFunc_Array_Get_Item1__pf->AActor::GetTransform();
	}
	bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABPS_PacmanPawn_C__pf2132744816>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_GetTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
	{
		bpfv__CallFunc_GetPlayerController_ReturnValue__pf->Possess(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf);
	}
	return; //KCST_EndOfThread
}
void ABPS_Pacman_TestGameModeBase_C__pf2132744816::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BPS_Pacman_TestGameModeBase__pf_3(63);
}
void ABPS_Pacman_TestGameModeBase_C__pf2132744816::bpf__WinEvent__pf(AActor* bpp__DestroyedActor__pf)
{
	b0l__K2Node_CustomEvent_DestroyedActor__pf = bpp__DestroyedActor__pf;
	bpf__ExecuteUbergraph_BPS_Pacman_TestGameModeBase__pf_0(62);
}
void ABPS_Pacman_TestGameModeBase_C__pf2132744816::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BPS_Pacman_TestGameModeBase__pf_1(51);
}
void ABPS_Pacman_TestGameModeBase_C__pf2132744816::bpf__SpawnPacman__pf()
{
	bpf__ExecuteUbergraph_BPS_Pacman_TestGameModeBase__pf_4(46);
}
void ABPS_Pacman_TestGameModeBase_C__pf2132744816::bpf__CreateGrid__pf()
{
	bpf__ExecuteUbergraph_BPS_Pacman_TestGameModeBase__pf_2(43);
}
void ABPS_Pacman_TestGameModeBase_C__pf2132744816::bpf__UserConstructionScript__pf()
{
}
void ABPS_Pacman_TestGameModeBase_C__pf2132744816::bpf__WorldToGridLocation__pf(FVector bpp__Location__pf, /*out*/ int32& bpp__X__pf, /*out*/ int32& bpp__Y__pf)
{
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue1__pf{};
	int32 bpfv__CallFunc_FFloor_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue3__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	int32 bpfv__CallFunc_FFloor_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue1__pf{};
	UKismetMathLibrary::BreakVector(bpp__Location__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__MaxY__pf, 1);
	bpfv__CallFunc_Subtract_IntInt_ReturnValue1__pf = UKismetMathLibrary::Subtract_IntInt(bpv__MaxX__pf, 1);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__Spacing__pf, 2.000000);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__Spacing__pf, 2.000000);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpv__Spacing__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue1__pf);
	bpfv__CallFunc_FFloor_ReturnValue__pf = UKismetMathLibrary::FFloor(bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue3__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue1__pf, bpv__Spacing__pf);
	bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_FFloor_ReturnValue__pf, 0, bpfv__CallFunc_Subtract_IntInt_ReturnValue1__pf);
	bpfv__CallFunc_FFloor_ReturnValue1__pf = UKismetMathLibrary::FFloor(bpfv__CallFunc_Divide_FloatFloat_ReturnValue3__pf);
	bpfv__CallFunc_Clamp_ReturnValue1__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_FFloor_ReturnValue1__pf, 0, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
	bpp__X__pf = bpfv__CallFunc_Clamp_ReturnValue__pf;
	bpp__Y__pf = bpfv__CallFunc_Clamp_ReturnValue1__pf;
}
void ABPS_Pacman_TestGameModeBase_C__pf2132744816::bpf__GetBlockFromGridLocation__pf(int32 bpp__X__pf, int32 bpp__Y__pf, /*out*/ ABPS_GridBlock_C__pf2132744816*& bpp__BlockActor__pf)
{
	int32 bpfv__CallFunc_Percent_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	ABPS_GridBlock_C__pf2132744816* bpfv__CallFunc_Array_Get_Item__pf{};
	bpfv__CallFunc_Percent_IntInt_ReturnValue__pf = UKismetMathLibrary::Percent_IntInt(bpp__Y__pf, bpv__MaxY__pf);
	bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf = UKismetMathLibrary::Multiply_IntInt(bpp__X__pf, bpv__MaxX__pf);
	bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf, bpfv__CallFunc_Percent_IntInt_ReturnValue__pf);
	FCustomThunkTemplates::Array_Get(bpv__BlocksArray__pf, bpfv__CallFunc_Add_IntInt_ReturnValue__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
	bpp__BlockActor__pf = bpfv__CallFunc_Array_Get_Item__pf;
}
void ABPS_Pacman_TestGameModeBase_C__pf2132744816::bpf__GetBlockFromWorldLocation__pf(FVector bpp__Location__pf, /*out*/ ABPS_GridBlock_C__pf2132744816*& bpp__BlockActor__pf)
{
	int32 bpfv__CallFunc_WorldToGridLocation_X__pf{};
	int32 bpfv__CallFunc_WorldToGridLocation_Y__pf{};
	ABPS_GridBlock_C__pf2132744816* bpfv__CallFunc_GetBlockFromGridLocation_BlockActor__pf{};
	bpf__WorldToGridLocation__pf(bpp__Location__pf, /*out*/ bpfv__CallFunc_WorldToGridLocation_X__pf, /*out*/ bpfv__CallFunc_WorldToGridLocation_Y__pf);
	bpf__GetBlockFromGridLocation__pf(bpfv__CallFunc_WorldToGridLocation_X__pf, bpfv__CallFunc_WorldToGridLocation_Y__pf, /*out*/ bpfv__CallFunc_GetBlockFromGridLocation_BlockActor__pf);
	bpp__BlockActor__pf = bpfv__CallFunc_GetBlockFromGridLocation_BlockActor__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void ABPS_Pacman_TestGameModeBase_C__pf2132744816::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABPS_Pacman_TestGameModeBase_C__pf2132744816::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerStart 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.ActorDestroyedSignature__DelegateSignature 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Pacman_Test.Pacman_TestGameModeBase 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameSession 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerState 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.HUD 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpectatorPawn 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ServerStatReplicator 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/BPS_PacDot.BPS_PacDot_C 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/BPS_GhostCharacter.BPS_GhostCharacter_C 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/BPS_PacmanPawn.BPS_PacmanPawn_C 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/BPS_GhostDestination.BPS_GhostDestination_C 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/BPS_GridBlock.BPS_GridBlock_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABPS_Pacman_TestGameModeBase_C__pf2132744816
{
	FRegisterHelper__ABPS_Pacman_TestGameModeBase_C__pf2132744816()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/BPS_Pacman_TestGameModeBase"), &ABPS_Pacman_TestGameModeBase_C__pf2132744816::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABPS_Pacman_TestGameModeBase_C__pf2132744816 Instance;
};
FRegisterHelper__ABPS_Pacman_TestGameModeBase_C__pf2132744816 FRegisterHelper__ABPS_Pacman_TestGameModeBase_C__pf2132744816::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
