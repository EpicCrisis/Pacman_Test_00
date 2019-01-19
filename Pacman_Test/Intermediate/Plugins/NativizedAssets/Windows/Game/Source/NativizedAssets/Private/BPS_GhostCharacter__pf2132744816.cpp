#include "NativizedAssets.h"
#include "BPS_GhostCharacter__pf2132744816.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbookComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
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
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
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
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbook.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSprite.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/SpriteEditorOnlyTypes.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "BPS_PacmanPawn__pf2132744816.h"
#include "BPS_GhostDestination__pf2132744816.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "BPS_Pacman_TestGameModeBase__pf2132744816.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "BPS_PacDot__pf2132744816.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerStart.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Pacman_Test/Pacman_TestGameModeBase.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Pacman_Test/GridBlock.h"
#include "Pacman_Test/GhostDestination.h"
#include "Runtime/AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "Runtime/Slate/Public/Framework/Commands/InputChord.h"
#include "Pacman_Test/PacmanPawn.h"
#include "Runtime/ClothingSystemRuntime/Public/ClothingSimulationFactory.h"
#include "Pacman_Test/AI_Controller.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABPS_GhostCharacter_C__pf2132744816::ABPS_GhostCharacter_C__pf2132744816(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABPS_GhostCharacter_C__pf2132744816::StaticClass() == GetClass()))
	{
		ABPS_GhostCharacter_C__pf2132744816::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(this->GetDefaultSubobjectByName(TEXT("CollisionCylinder")), ECastCheckedType::NullAllowed);
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(this->GetDefaultSubobjectByName(TEXT("CharMoveComp")), ECastCheckedType::NullAllowed);
	auto __Local__2 = CastChecked<USkeletalMeshComponent>(this->GetDefaultSubobjectByName(TEXT("CharacterMesh0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'CollisionCylinder' //
		auto& __Local__3 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleHalfHeight() )));
		__Local__3 = 80.000000f;
		auto& __Local__4 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleRadius() )));
		__Local__4 = 45.000000f;
		__Local__0->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_Owner;
		__Local__0->BodyInstance.SetCollisionProfileName(FName(TEXT("Enemy")));
		__Local__0->BodyInstance.DOFMode = EDOFMode::Type::XYPlane;
		if(!__Local__0->IsTemplate())
		{
			__Local__0->BodyInstance.FixupData(__Local__0);
		}
		// --- END default subobject 'CollisionCylinder' //
	}
	if(__Local__1)
	{
		// --- Default subobject 'CharMoveComp' //
		__Local__1->GravityScale = 0.000000f;
		__Local__1->MaxWalkSpeed = 360.000000f;
		__Local__1->MaxWalkSpeedCrouched = 360.000000f;
		__Local__1->MaxSwimSpeed = 360.000000f;
		__Local__1->MaxFlySpeed = 360.000000f;
		__Local__1->MaxCustomMovementSpeed = 380.000000f;
		__Local__1->bEnablePhysicsInteraction = false;
		__Local__1->NavAgentProps.bCanJump = false;
		__Local__1->NavAgentProps.bCanWalk = false;
		__Local__1->NavAgentProps.bCanSwim = false;
		static TWeakObjectPtr<UProperty> __Local__6{};
		const UProperty* __Local__5 = __Local__6.Get();
		if (nullptr == __Local__5)
		{
			__Local__5 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
			check(__Local__5);
			__Local__6 = __Local__5;
		}
		(((UBoolProperty*)__Local__5)->SetPropertyValue_InContainer((__Local__1), false, 0));
		// --- END default subobject 'CharMoveComp' //
	}
	if(__Local__2)
	{
		// --- Default subobject 'CharacterMesh0' //
		__Local__2->CastShadow = false;
		__Local__2->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
		__Local__2->BodyInstance.SetCollisionProfileName(FName(TEXT("NoCollision")));
		auto& __Local__7 = (*(AccessPrivateProperty<UCapsuleComponent*>((__Local__2), USceneComponent::__PPO__AttachParent() )));
		__Local__7 = __Local__0;
		__Local__2->bVisible = false;
		__Local__2->bHiddenInGame = true;
		if(!__Local__2->IsTemplate())
		{
			__Local__2->BodyInstance.FixupData(__Local__2);
		}
		// --- END default subobject 'CharacterMesh0' //
	}
	bpv__SpriteFlipBook__pf = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("SpriteFlipBook"));
	bpv__SpriteFlipBook__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SpriteFlipBook__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__8 = (*(AccessPrivateProperty<UPaperFlipbook* >((bpv__SpriteFlipBook__pf), UPaperFlipbookComponent::__PPO__SourceFlipbook() )));
	__Local__8 = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__SpriteFlipBook__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	bpv__SpriteFlipBook__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__SpriteFlipBook__pf->RelativeRotation = FRotator(0.000000, 0.000000, 270.000000);
	bpv__SpriteFlipBook__pf->RelativeScale3D = FVector(0.900000, 0.900000, 0.900000);
	if(!bpv__SpriteFlipBook__pf->IsTemplate())
	{
		bpv__SpriteFlipBook__pf->BodyInstance.FixupData(bpv__SpriteFlipBook__pf);
	}
	bpv__CanKill__pf = false;
	bpv__isDeadx__pfzy = false;
	bpv__CanBeEaten__pf = false;
	bpv__isFlashing__pf = false;
	bpv__GhostType__pf = E__ENUM_GhostType__pf::NewEnumerator0;
	bpv__StartLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__TempVelocity__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__AmbushLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__NormalSpeed__pf = 360.000000f;
	bpv__BlueSpeed__pf = 0.000000f;
	bpv__AvoidanceDistance__pf = 100.000000f;
	bpv__CanBeEatenTime__pf = 6.000000f;
	bpv__FlashingTime__pf = 3.000000f;
	bpv__CurrentAmbushDistance__pf = 200.000000f;
	bpv__PacmanPlayer__pf = nullptr;
	bpv__CurrentTargetTrigger__pf = nullptr;
	bpv__TargetTriggerArray__pf = TArray<ABPS_GhostDestination_C__pf2132744816*> ();
	auto& __Local__9 = (*(AccessPrivateProperty<USkeletalMeshComponent*>((this), ACharacter::__PPO__Mesh() )));
	__Local__9 = __Local__2;
	auto& __Local__10 = (*(AccessPrivateProperty<UCharacterMovementComponent*>((this), ACharacter::__PPO__CharacterMovement() )));
	__Local__10 = __Local__1;
	auto& __Local__11 = (*(AccessPrivateProperty<UCapsuleComponent*>((this), ACharacter::__PPO__CapsuleComponent() )));
	__Local__11 = __Local__0;
	bUseControllerRotationYaw = false;
	AIControllerClass = CastChecked<UClass>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
}
PRAGMA_ENABLE_OPTIMIZATION
void ABPS_GhostCharacter_C__pf2132744816::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__SpriteFlipBook__pf)
	{
		bpv__SpriteFlipBook__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABPS_GhostCharacter_C__pf2132744816::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Blueprints/ENUM_GhostType.ENUM_GhostType")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ABPS_PacmanPawn_C__pf2132744816::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABPS_GhostDestination_C__pf2132744816::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FStruct_GhostAnimations__pf2132744816();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FStruct_GhostAnimations__pf2132744816());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__12 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__12);
}
PRAGMA_ENABLE_OPTIMIZATION
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue1__pf{};
	bool bpfv__CallFunc_Array_RemoveItem_ReturnValue__pf{};
	bool bpfv__CallFunc_Array_RemoveItem_ReturnValue1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(4);
			}
		case 2:
			{
				FCustomThunkTemplates::Array_Get(bpv__TargetTriggerArray__pf, b0l__Temp_int_Array_Index_Variable2__pf, /*out*/ b0l__CallFunc_Array_Get_Item3__pf);
				bool  __Local__13 = false;
				if (!((::IsValid(b0l__CallFunc_Array_Get_Item3__pf)) ? (b0l__CallFunc_Array_Get_Item3__pf->bpv__isTaken__pf) : (__Local__13)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				FCustomThunkTemplates::Array_Get(bpv__TargetTriggerArray__pf, b0l__Temp_int_Array_Index_Variable2__pf, /*out*/ b0l__CallFunc_Array_Get_Item3__pf);
				bpfv__CallFunc_Array_RemoveItem_ReturnValue1__pf = FCustomThunkTemplates::Array_RemoveItem(bpv__TargetTriggerArray__pf, b0l__CallFunc_Array_Get_Item3__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 5:
			{
				bpfv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(bpv__TargetTriggerArray__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 6:
			{
				b0l__Temp_int_Array_Index_Variable2__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
				__CurrentState = 1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Array_Length_ReturnValue1__pf = FCustomThunkTemplates::Array_Length(bpv__TargetTriggerArray__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue1__pf, 1);
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__TargetTriggerArray__pf, bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpv__CurrentTargetTrigger__pf = b0l__CallFunc_Array_Get_Item__pf;
			}
		case 8:
			{
				if(::IsValid(bpv__CurrentTargetTrigger__pf))
				{
					bpv__CurrentTargetTrigger__pf->bpv__isTaken__pf = true;
				}
			}
		case 9:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, this, FVector(0.000000,0.000000,0.000000), bpv__CurrentTargetTrigger__pf, 1.000000, false);
			}
		case 10:
			{
				b0l__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 11:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate4__pf.BindUFunction(this,FName(TEXT("OnSuccess_7B2F85FD4A620E06DFC02BB56EDAB5C3")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate4__pf);
				}
			}
		case 12:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate5__pf.BindUFunction(this,FName(TEXT("OnFail_7B2F85FD4A620E06DFC02BB56EDAB5C3")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate5__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 84:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 85:
			{
				b0l__Temp_int_Array_Index_Variable2__pf = 0;
				__CurrentState = 5;
				break;
			}
		case 122:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABPS_GhostDestination_C__pf2132744816::StaticClass(), /*out*/ TArrayCaster<ABPS_GhostDestination_C__pf2132744816*>(b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf).Get<AActor*>());
			}
		case 123:
			{
				bpv__TargetTriggerArray__pf = b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf;
				__CurrentState = 84;
				break;
			}
		case 124:
			{
				__CurrentState = 125;
				break;
			}
		case 125:
			{
				if (!bpv__isDeadx__pfzy)
				{
					__CurrentState = 126;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 126:
			{
				bpfv__CallFunc_IsValid_ReturnValue1__pf = UKismetSystemLibrary::IsValid(bpv__CurrentTargetTrigger__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue1__pf)
				{
					__CurrentState = 122;
					break;
				}
			}
		case 127:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABPS_GhostDestination_C__pf2132744816::StaticClass(), /*out*/ TArrayCaster<ABPS_GhostDestination_C__pf2132744816*>(b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf).Get<AActor*>());
			}
		case 128:
			{
				bpv__TargetTriggerArray__pf = b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf;
			}
		case 129:
			{
				bpfv__CallFunc_Array_RemoveItem_ReturnValue__pf = FCustomThunkTemplates::Array_RemoveItem(bpv__TargetTriggerArray__pf, bpv__CurrentTargetTrigger__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue3__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 89:
			{
				__CurrentState = 90;
				break;
			}
		case 90:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors3__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABPS_GhostDestination_C__pf2132744816::StaticClass(), /*out*/ TArrayCaster<ABPS_GhostDestination_C__pf2132744816*>(b0l__CallFunc_GetAllActorsOfClass_OutActors3__pf).Get<AActor*>());
			}
		case 91:
			{
				b0l__Temp_int_Loop_Counter_Variable2__pf = 0;
			}
		case 92:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 93:
			{
				bpfv__CallFunc_Array_Length_ReturnValue3__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors3__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue2__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable2__pf, bpfv__CallFunc_Array_Length_ReturnValue3__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 98;
					break;
				}
			}
		case 94:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable2__pf;
			}
		case 95:
			{
				__StateStack.Push(97);
			}
		case 96:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors3__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item1__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item1__pf))
				{
					b0l__CallFunc_Array_Get_Item1__pf->bpv__isTaken__pf = false;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 97:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable2__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
				__CurrentState = 93;
				break;
			}
		case 98:
			{
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GhostType__pf), static_cast<uint8>(E__ENUM_GhostType__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 101;
					break;
				}
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GhostType__pf), static_cast<uint8>(E__ENUM_GhostType__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 100;
					break;
				}
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GhostType__pf), static_cast<uint8>(E__ENUM_GhostType__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 99;
					break;
				}
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GhostType__pf), static_cast<uint8>(E__ENUM_GhostType__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 99;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 99:
			{
				bpf__RandomMovement__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 100:
			{
				bpf__AmbushEvent__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 101:
			{
				bpf__ChaseEvent__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_2(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetVelocity_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Abs_ReturnValue2__pf{};
	bool bpfv__CallFunc_SetFlipbook_ReturnValue__pf{};
	float bpfv__CallFunc_GetMaxSpeed_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_SetFlipbook_ReturnValue1__pf{};
	bool bpfv__CallFunc_SetFlipbook_ReturnValue2__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue1__pf{};
	bool bpfv__CallFunc_SetFlipbook_ReturnValue3__pf{};
	bool bpfv__CallFunc_SetFlipbook_ReturnValue4__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 73:
			{
				__CurrentState = 74;
				break;
			}
		case 74:
			{
				if (!bpv__CanBeEaten__pf)
				{
					__CurrentState = 76;
					break;
				}
			}
		case 75:
			{
				b0l__Temp_bool_Variable__pf = bpv__isFlashing__pf;
				if(::IsValid(bpv__SpriteFlipBook__pf))
				{
					bpfv__CallFunc_SetFlipbook_ReturnValue__pf = bpv__SpriteFlipBook__pf->SetFlipbook(TSwitchValue<bool , UPaperFlipbook* >(b0l__Temp_bool_Variable__pf, b0l__K2Node_Select_Default__pf, 2, TSwitchPair<bool , UPaperFlipbook* >(false, bpv__AnimationStruct__pf.bpv__Blue_2_A664220F49E5896E3C81CBA0D1CE05CB__pf), TSwitchPair<bool , UPaperFlipbook* >(true, bpv__AnimationStruct__pf.bpv__Flashing_4_44FE09804D5222C8EB1C1FB005C6EF9E__pf)));
				}
				__CurrentState = -1;
				break;
			}
		case 76:
			{
				bpfv__CallFunc_GetVelocity_ReturnValue__pf = GetVelocity();
				bpv__TempVelocity__pf = bpfv__CallFunc_GetVelocity_ReturnValue__pf;
			}
		case 77:
			{
				UKismetMathLibrary::BreakVector(bpv__TempVelocity__pf, /*out*/ b0l__CallFunc_BreakVector_X3__pf, /*out*/ b0l__CallFunc_BreakVector_Y3__pf, /*out*/ b0l__CallFunc_BreakVector_Z3__pf);
				bpfv__CallFunc_Abs_ReturnValue2__pf = UKismetMathLibrary::Abs(b0l__CallFunc_BreakVector_Y3__pf);
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					bpfv__CallFunc_GetMaxSpeed_ReturnValue__pf = (*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->GetMaxSpeed();
				}
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_GetMaxSpeed_ReturnValue__pf, 50.000000);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Abs_ReturnValue2__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 81;
					break;
				}
			}
		case 78:
			{
				UKismetMathLibrary::BreakVector(bpv__TempVelocity__pf, /*out*/ b0l__CallFunc_BreakVector_X4__pf, /*out*/ b0l__CallFunc_BreakVector_Y4__pf, /*out*/ b0l__CallFunc_BreakVector_Z4__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(b0l__CallFunc_BreakVector_Y4__pf, 0.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 80;
					break;
				}
			}
		case 79:
			{
				b0l__Temp_bool_Variable1__pf = bpv__isDeadx__pfzy;
				if(::IsValid(bpv__SpriteFlipBook__pf))
				{
					bpfv__CallFunc_SetFlipbook_ReturnValue1__pf = bpv__SpriteFlipBook__pf->SetFlipbook(TSwitchValue<bool , UPaperFlipbook* >(b0l__Temp_bool_Variable1__pf, b0l__K2Node_Select1_Default__pf, 2, TSwitchPair<bool , UPaperFlipbook* >(false, bpv__AnimationStruct__pf.bpv__MoveUp_6_AFC7643E40652AD5FEA47393F3AE2033__pf), TSwitchPair<bool , UPaperFlipbook* >(true, bpv__AnimationStruct__pf.bpv__Dead_MoveUp_14_1A6A08084DEA869AF3F609AD2E4AC595__pf)));
				}
				__CurrentState = -1;
				break;
			}
		case 80:
			{
				b0l__Temp_bool_Variable2__pf = bpv__isDeadx__pfzy;
				if(::IsValid(bpv__SpriteFlipBook__pf))
				{
					bpfv__CallFunc_SetFlipbook_ReturnValue2__pf = bpv__SpriteFlipBook__pf->SetFlipbook(TSwitchValue<bool , UPaperFlipbook* >(b0l__Temp_bool_Variable2__pf, b0l__K2Node_Select2_Default__pf, 2, TSwitchPair<bool , UPaperFlipbook* >(false, bpv__AnimationStruct__pf.bpv__MoveDown_8_EAAF9B654751122106071B9FC1E14AB2__pf), TSwitchPair<bool , UPaperFlipbook* >(true, bpv__AnimationStruct__pf.bpv__Dead_MoveDown_16_06286B174E8067A18DEFF49DD430F3FD__pf)));
				}
				__CurrentState = -1;
				break;
			}
		case 81:
			{
				UKismetMathLibrary::BreakVector(bpv__TempVelocity__pf, /*out*/ b0l__CallFunc_BreakVector_X5__pf, /*out*/ b0l__CallFunc_BreakVector_Y5__pf, /*out*/ b0l__CallFunc_BreakVector_Z5__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue1__pf = UKismetMathLibrary::Less_FloatFloat(b0l__CallFunc_BreakVector_X5__pf, 0.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue1__pf)
				{
					__CurrentState = 83;
					break;
				}
			}
		case 82:
			{
				b0l__Temp_bool_Variable3__pf = bpv__isDeadx__pfzy;
				if(::IsValid(bpv__SpriteFlipBook__pf))
				{
					bpfv__CallFunc_SetFlipbook_ReturnValue4__pf = bpv__SpriteFlipBook__pf->SetFlipbook(TSwitchValue<bool , UPaperFlipbook* >(b0l__Temp_bool_Variable3__pf, b0l__K2Node_Select4_Default__pf, 2, TSwitchPair<bool , UPaperFlipbook* >(false, bpv__AnimationStruct__pf.bpv__MoveLeft_12_A585917C49A013DE95DE0EB3B4130B0C__pf), TSwitchPair<bool , UPaperFlipbook* >(true, bpv__AnimationStruct__pf.bpv__Dead_MoveLeft_20_6A21C137457D5CDDDF49E8B7AADD80DC__pf)));
				}
				__CurrentState = -1;
				break;
			}
		case 83:
			{
				b0l__Temp_bool_Variable4__pf = bpv__isDeadx__pfzy;
				if(::IsValid(bpv__SpriteFlipBook__pf))
				{
					bpfv__CallFunc_SetFlipbook_ReturnValue3__pf = bpv__SpriteFlipBook__pf->SetFlipbook(TSwitchValue<bool , UPaperFlipbook* >(b0l__Temp_bool_Variable4__pf, b0l__K2Node_Select3_Default__pf, 2, TSwitchPair<bool , UPaperFlipbook* >(false, bpv__AnimationStruct__pf.bpv__MoveRight_10_E227AC534763904CA4FFFCA735F9FC2B__pf), TSwitchPair<bool , UPaperFlipbook* >(true, bpv__AnimationStruct__pf.bpv__Dead_MoveRight_18_436420934F9D5218F2A57E977A1E8764__pf)));
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 15:
			{
				__CurrentState = 16;
				break;
			}
		case 16:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(17, 1324477060, TEXT("ExecuteUbergraph_BPS_GhostCharacter_3"), this));
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				__CurrentState = 18;
				break;
			}
		case 18:
			{
				if (!bpv__isDeadx__pfzy)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 19:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(15, 2147483647, TEXT("ExecuteUbergraph_BPS_GhostCharacter_3"), this));
				__CurrentState = -1;
				break;
			}
		case 164:
			{
				__CurrentState = 165;
				break;
			}
		case 165:
			{
				b0l__Temp_byte_Variable2__pf = b0l__K2Node_CustomEvent_MovementResult5__pf;
				__CurrentState = 16;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_4(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	float bpfv__CallFunc_Abs_ReturnValue1__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue1__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 110:
			{
				__CurrentState = 111;
				break;
			}
		case 111:
			{
				if (!bpv__CanBeEaten__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 112:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABPS_PacmanPawn_C__pf2132744816::StaticClass(), /*out*/ TArrayCaster<ABPS_PacmanPawn_C__pf2132744816*>(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 113:
			{
				b0l__Temp_int_Loop_Counter_Variable1__pf = 0;
			}
		case 114:
			{
				b0l__Temp_int_Array_Index_Variable1__pf = 0;
			}
		case 115:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue1__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable1__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 116:
			{
				b0l__Temp_int_Array_Index_Variable1__pf = b0l__Temp_int_Loop_Counter_Variable1__pf;
			}
		case 117:
			{
				__StateStack.Push(120);
			}
		case 118:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue1__pf = AActor::K2_GetActorLocation();
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, b0l__Temp_int_Array_Index_Variable1__pf, /*out*/ b0l__CallFunc_Array_Get_Item2__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue4__pf = b0l__CallFunc_Array_Get_Item2__pf->AActor::K2_GetActorLocation();
				}
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue4__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue1__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakVector_X2__pf, /*out*/ b0l__CallFunc_BreakVector_Y2__pf, /*out*/ b0l__CallFunc_BreakVector_Z2__pf);
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(b0l__CallFunc_BreakVector_Y2__pf);
				bpfv__CallFunc_Abs_ReturnValue1__pf = UKismetMathLibrary::Abs(b0l__CallFunc_BreakVector_X2__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_Abs_ReturnValue__pf, bpv__AvoidanceDistance__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue1__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_Abs_ReturnValue1__pf, bpv__AvoidanceDistance__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue1__pf, bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 119:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("TOO CLOSE!!!")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 120:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue1__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable1__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue1__pf;
				__CurrentState = 115;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 162);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_byte_Variable2__pf = b0l__K2Node_CustomEvent_MovementResult4__pf;
	return; //KCST_EndOfThread
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_6(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue1__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 25:
			{
				__CurrentState = 26;
				break;
			}
		case 26:
			{
				if (!bpv__CanKill__pf)
				{
					__CurrentState = 28;
					break;
				}
			}
		case 27:
			{
				bpf__AmbushEvent__pf();
				__CurrentState = -1;
				break;
			}
		case 28:
			{
				bpf__RandomMovement__pf();
				__CurrentState = -1;
				break;
			}
		case 137:
			{
				__CurrentState = 138;
				break;
			}
		case 138:
			{
				bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf = UGameplayStatics::GetPlayerPawn(this, 0);
				b0l__K2Node_DynamicCast_AsBPS_Pacman_Pawn__pf = Cast<ABPS_PacmanPawn_C__pf2132744816>(bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBPS_Pacman_Pawn__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 139:
			{
				bpv__PacmanPlayer__pf = b0l__K2Node_DynamicCast_AsBPS_Pacman_Pawn__pf;
			}
		case 140:
			{
				if(::IsValid(bpv__PacmanPlayer__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf = bpv__PacmanPlayer__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
				int32  __Local__16 = 0;
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(((::IsValid(bpv__PacmanPlayer__pf)) ? (bpv__PacmanPlayer__pf->bpv__DirectionY__pf) : (__Local__16)), bpv__CurrentAmbushDistance__pf);
				int32  __Local__17 = 0;
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue1__pf = UKismetMathLibrary::Multiply_IntFloat(((::IsValid(bpv__PacmanPlayer__pf)) ? (bpv__PacmanPlayer__pf->bpv__DirectionX__pf) : (__Local__17)), bpv__CurrentAmbushDistance__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue1__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector_X__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue1__pf);
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue3__pf = AActor::K2_GetActorLocation();
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue3__pf, /*out*/ b0l__CallFunc_BreakVector_X1__pf, /*out*/ b0l__CallFunc_BreakVector_Y1__pf, /*out*/ b0l__CallFunc_BreakVector_Z1__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue1__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, b0l__CallFunc_BreakVector_Z1__pf);
				bpv__AmbushLocation__pf = bpfv__CallFunc_MakeVector_ReturnValue__pf;
			}
		case 141:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue2__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, this, bpv__AmbushLocation__pf, ((AActor*)nullptr), 1.000000, false);
			}
		case 142:
			{
				b0l__CallFunc_IsValid_ReturnValue3__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue2__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue3__pf)
				{
					__CurrentState = 145;
					break;
				}
			}
		case 143:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("OnSuccess_C537F99C45B20625B508309E69E172C4")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue2__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue2__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
				}
			}
		case 144:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate3__pf.BindUFunction(this,FName(TEXT("OnFail_C537F99C45B20625B508309E69E172C4")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue2__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue2__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate3__pf);
				}
			}
		case 145:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(25, 1136570746, TEXT("ExecuteUbergraph_BPS_GhostCharacter_6"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_7(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 29:
			{
				__CurrentState = 30;
				break;
			}
		case 30:
			{
				if (!bpv__isDeadx__pfzy)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 31:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(32, -451534647, TEXT("ExecuteUbergraph_BPS_GhostCharacter_7"), this));
				__CurrentState = -1;
				break;
			}
		case 32:
			{
				__CurrentState = 33;
				break;
			}
		case 33:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(29, -296259093, TEXT("ExecuteUbergraph_BPS_GhostCharacter_7"), this));
				__CurrentState = -1;
				break;
			}
		case 160:
			{
				__CurrentState = 161;
				break;
			}
		case 161:
			{
				b0l__Temp_byte_Variable1__pf = b0l__K2Node_CustomEvent_MovementResult1__pf;
				__CurrentState = 33;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_8(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 130:
			{
				__CurrentState = 131;
				break;
			}
		case 131:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue1__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, this, FVector(0.000000,0.000000,0.000000), bpfv__CallFunc_GetPlayerController_ReturnValue__pf, 1.000000, false);
			}
		case 132:
			{
				b0l__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue1__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue2__pf)
				{
					__CurrentState = 135;
					break;
				}
			}
		case 133:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate1__pf.BindUFunction(this,FName(TEXT("OnSuccess_17E8EF204C5D4BD7DF7E20AC1F29302A")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue1__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue1__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate1__pf);
				}
			}
		case 134:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate2__pf.BindUFunction(this,FName(TEXT("OnFail_17E8EF204C5D4BD7DF7E20AC1F29302A")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue1__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue1__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate2__pf);
				}
			}
		case 135:
			{
				if (!bpv__CanKill__pf)
				{
					__CurrentState = 136;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 136:
			{
				bpf__RandomMovement__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_9(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 20:
			{
				__CurrentState = 21;
				break;
			}
		case 21:
			{
				if (!bpv__isDeadx__pfzy)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 22:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(23, 2147483647, TEXT("ExecuteUbergraph_BPS_GhostCharacter_9"), this));
				__CurrentState = -1;
				break;
			}
		case 23:
			{
				__CurrentState = 24;
				break;
			}
		case 24:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(20, 1646692835, TEXT("ExecuteUbergraph_BPS_GhostCharacter_9"), this));
				__CurrentState = -1;
				break;
			}
		case 158:
			{
				__CurrentState = 159;
				break;
			}
		case 159:
			{
				b0l__Temp_byte_Variable__pf = b0l__K2Node_CustomEvent_MovementResult3__pf;
				__CurrentState = 24;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 156);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_byte_Variable__pf = b0l__K2Node_CustomEvent_MovementResult2__pf;
	return; //KCST_EndOfThread
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 102);
	// optimized KCST_UnconditionalGoto
	bpv__isDeadx__pfzy = false;
	// optimized KCST_UnconditionalGoto
	bpv__CanBeEaten__pf = false;
	bpv__isFlashing__pf = false;
	bpv__CanKill__pf = true;
	if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
	{
		(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__NormalSpeed__pf;
	}
	if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
	{
		(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->StopActiveMovement();
	}
	bpv__CurrentTargetTrigger__pf = ((ABPS_GhostDestination_C__pf2132744816*)nullptr);
	bpf__FindNextDestination__pf();
	return; //KCST_EndOfThread
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 148);
	// optimized KCST_UnconditionalGoto
	if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
	{
		(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->StopActiveMovement();
	}
	bpf__RandomMovement__pf();
	if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
	{
		(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->StopActiveMovement();
	}
	bpf__ChaseEvent__pf();
	if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
	{
		(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->StopActiveMovement();
	}
	bpf__AmbushEvent__pf();
	bpf__RandomBehavior__pf();
	return; //KCST_EndOfThread
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 146);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_byte_Variable1__pf = b0l__K2Node_CustomEvent_MovementResult__pf;
	return; //KCST_EndOfThread
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_14(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 88);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__isDeadx__pfzy);
	bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__CanBeEaten__pf, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__FlashingEventTimerHandle__pf);
	UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__BackToNormalTimerHandle__pf);
	bpv__CanBeEaten__pf = false;
	bpv__isDeadx__pfzy = true;
	bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
	UNavigationSystem::SimpleMoveToLocation(bpfv__CallFunc_GetController_ReturnValue__pf, bpv__StartLocation__pf);
	if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
	{
		(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__NormalSpeed__pf;
	}
	return; //KCST_EndOfThread
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_15(int32 bpp__EntryPoint__pf)
{
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 49:
			{
				if (!bpv__isDeadx__pfzy)
				{
					__CurrentState = 50;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 50:
			{
				UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__FlashingEventTimerHandle__pf);
			}
		case 51:
			{
				UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__BackToNormalTimerHandle__pf);
			}
		case 52:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__BlueSpeed__pf;
				}
			}
		case 53:
			{
				bpv__CanKill__pf = false;
			}
		case 54:
			{
				bpv__CanBeEaten__pf = true;
			}
		case 55:
			{
				bpv__isFlashing__pf = false;
			}
		case 56:
			{
				bpfv__CallFunc_K2_SetTimer_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("FlashingEvent")), bpv__CanBeEatenTime__pf, false);
			}
		case 57:
			{
				bpv__FlashingEventTimerHandle__pf = bpfv__CallFunc_K2_SetTimer_ReturnValue__pf;
			}
		case 58:
			{
				bpf__RandomMovement__pf();
				__CurrentState = -1;
				break;
			}
		case 121:
			{
				__CurrentState = 49;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_16(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 103);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__FlashingEventTimerHandle__pf);
	UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__BackToNormalTimerHandle__pf);
	bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf = AActor::K2_SetActorLocation(bpv__StartLocation__pf, false, /*out*/ b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf, true);
	bpv__CanKill__pf = false;
	if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
	{
		(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = 0.000000;
	}
	bpf__Reset__pf();
	return; //KCST_EndOfThread
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_17(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 44:
			{
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GhostType__pf), static_cast<uint8>(E__ENUM_GhostType__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 45;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GhostType__pf), static_cast<uint8>(E__ENUM_GhostType__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 46;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GhostType__pf), static_cast<uint8>(E__ENUM_GhostType__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 47;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GhostType__pf), static_cast<uint8>(E__ENUM_GhostType__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 48;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 45:
			{
				bpv__AnimationStruct__pf.bpv__Blue_2_A664220F49E5896E3C81CBA0D1CE05CB__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Flashing_4_44FE09804D5222C8EB1C1FB005C6EF9E__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__MoveUp_6_AFC7643E40652AD5FEA47393F3AE2033__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__MoveDown_8_EAAF9B654751122106071B9FC1E14AB2__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__MoveLeft_12_A585917C49A013DE95DE0EB3B4130B0C__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__MoveRight_10_E227AC534763904CA4FFFCA735F9FC2B__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Dead_MoveUp_14_1A6A08084DEA869AF3F609AD2E4AC595__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Dead_MoveDown_16_06286B174E8067A18DEFF49DD430F3FD__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Dead_MoveLeft_20_6A21C137457D5CDDDF49E8B7AADD80DC__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Dead_MoveRight_18_436420934F9D5218F2A57E977A1E8764__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
				__CurrentState = -1;
				break;
			}
		case 46:
			{
				bpv__AnimationStruct__pf.bpv__Blue_2_A664220F49E5896E3C81CBA0D1CE05CB__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Flashing_4_44FE09804D5222C8EB1C1FB005C6EF9E__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__MoveUp_6_AFC7643E40652AD5FEA47393F3AE2033__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__MoveDown_8_EAAF9B654751122106071B9FC1E14AB2__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__MoveLeft_12_A585917C49A013DE95DE0EB3B4130B0C__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__MoveRight_10_E227AC534763904CA4FFFCA735F9FC2B__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Dead_MoveUp_14_1A6A08084DEA869AF3F609AD2E4AC595__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Dead_MoveDown_16_06286B174E8067A18DEFF49DD430F3FD__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Dead_MoveLeft_20_6A21C137457D5CDDDF49E8B7AADD80DC__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Dead_MoveRight_18_436420934F9D5218F2A57E977A1E8764__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
				__CurrentState = -1;
				break;
			}
		case 47:
			{
				bpv__AnimationStruct__pf.bpv__Blue_2_A664220F49E5896E3C81CBA0D1CE05CB__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Flashing_4_44FE09804D5222C8EB1C1FB005C6EF9E__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__MoveUp_6_AFC7643E40652AD5FEA47393F3AE2033__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__MoveDown_8_EAAF9B654751122106071B9FC1E14AB2__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__MoveLeft_12_A585917C49A013DE95DE0EB3B4130B0C__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__MoveRight_10_E227AC534763904CA4FFFCA735F9FC2B__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Dead_MoveUp_14_1A6A08084DEA869AF3F609AD2E4AC595__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Dead_MoveDown_16_06286B174E8067A18DEFF49DD430F3FD__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Dead_MoveLeft_20_6A21C137457D5CDDDF49E8B7AADD80DC__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Dead_MoveRight_18_436420934F9D5218F2A57E977A1E8764__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
				__CurrentState = -1;
				break;
			}
		case 48:
			{
				bpv__AnimationStruct__pf.bpv__Blue_2_A664220F49E5896E3C81CBA0D1CE05CB__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Flashing_4_44FE09804D5222C8EB1C1FB005C6EF9E__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__MoveUp_6_AFC7643E40652AD5FEA47393F3AE2033__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__MoveDown_8_EAAF9B654751122106071B9FC1E14AB2__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__MoveLeft_12_A585917C49A013DE95DE0EB3B4130B0C__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__MoveRight_10_E227AC534763904CA4FFFCA735F9FC2B__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[22], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Dead_MoveUp_14_1A6A08084DEA869AF3F609AD2E4AC595__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Dead_MoveDown_16_06286B174E8067A18DEFF49DD430F3FD__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Dead_MoveLeft_20_6A21C137457D5CDDDF49E8B7AADD80DC__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
				bpv__AnimationStruct__pf.bpv__Dead_MoveRight_18_436420934F9D5218F2A57E977A1E8764__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
				__CurrentState = -1;
				break;
			}
		case 62:
			{
				bpf__BackToNormal__pf();
				__CurrentState = 44;
				break;
			}
		case 71:
			{
				__CurrentState = 72;
				break;
			}
		case 72:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
				bpv__StartLocation__pf = bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf;
				__CurrentState = 62;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_18(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 13:
			{
				__CurrentState = 14;
				break;
			}
		case 14:
			{
				bpf__BackToNormal__pf();
				__CurrentState = -1;
				break;
			}
		case 34:
			{
				bpv__isFlashing__pf = true;
			}
		case 35:
			{
				UKismetSystemLibrary::Delay(this, 2.000000, FLatentActionInfo(13, 1673144114, TEXT("ExecuteUbergraph_BPS_GhostCharacter_18"), this));
				__CurrentState = -1;
				break;
			}
		case 36:
			{
				bpv__CanBeEaten__pf = true;
				__CurrentState = 34;
				break;
			}
		case 87:
			{
				__CurrentState = 36;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_19(int32 bpp__EntryPoint__pf)
{
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue1__pf{};
	check(bpp__EntryPoint__pf == 86);
	// optimized KCST_UnconditionalGoto
	bpv__isFlashing__pf = true;
	bpfv__CallFunc_K2_SetTimer_ReturnValue1__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("BackToNormal")), bpv__FlashingTime__pf, false);
	bpv__BackToNormalTimerHandle__pf = bpfv__CallFunc_K2_SetTimer_ReturnValue1__pf;
	return; //KCST_EndOfThread
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__RandomBehavior__pf()
{
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_12(148);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__AmbushEvent__pf()
{
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_6(137);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ChaseEvent__pf()
{
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_8(130);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__RandomMovement__pf()
{
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_0(124);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__CanBeEatenEvent__pf()
{
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_15(121);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__AvoidPlayer__pf()
{
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_4(110);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ResetLocation__pf()
{
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_16(103);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__BackToNormal__pf()
{
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_11(102);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__FindNextDestination__pf()
{
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_1(89);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__EatEvent__pf()
{
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_14(88);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__Reset__pf()
{
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_18(87);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__FlashingEvent__pf()
{
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_19(86);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_2(73);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_17(71);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__OnSuccess_C537F99C45B20625B508309E69E172C4__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_13(146);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__OnFail_C537F99C45B20625B508309E69E172C4__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult1__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_7(160);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__OnSuccess_17E8EF204C5D4BD7DF7E20AC1F29302A__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult2__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_10(156);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__OnFail_17E8EF204C5D4BD7DF7E20AC1F29302A__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult3__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_9(158);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__OnSuccess_7B2F85FD4A620E06DFC02BB56EDAB5C3__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult4__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_5(162);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__OnFail_7B2F85FD4A620E06DFC02BB56EDAB5C3__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult5__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BPS_GhostCharacter__pf_3(164);
}
void ABPS_GhostCharacter_C__pf2132744816::bpf__UserConstructionScript__pf()
{
	bool bpfv__CallFunc_SetFlipbook_ReturnValue__pf{};
	bool bpfv__CallFunc_SetFlipbook_ReturnValue1__pf{};
	bool bpfv__CallFunc_SetFlipbook_ReturnValue2__pf{};
	bool bpfv__CallFunc_SetFlipbook_ReturnValue3__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GhostType__pf), static_cast<uint8>(E__ENUM_GhostType__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GhostType__pf), static_cast<uint8>(E__ENUM_GhostType__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GhostType__pf), static_cast<uint8>(E__ENUM_GhostType__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GhostType__pf), static_cast<uint8>(E__ENUM_GhostType__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				if(::IsValid(bpv__SpriteFlipBook__pf))
				{
					bpfv__CallFunc_SetFlipbook_ReturnValue3__pf = bpv__SpriteFlipBook__pf->SetFlipbook(CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed));
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				if(::IsValid(bpv__SpriteFlipBook__pf))
				{
					bpfv__CallFunc_SetFlipbook_ReturnValue2__pf = bpv__SpriteFlipBook__pf->SetFlipbook(CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed));
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				if(::IsValid(bpv__SpriteFlipBook__pf))
				{
					bpfv__CallFunc_SetFlipbook_ReturnValue1__pf = bpv__SpriteFlipBook__pf->SetFlipbook(CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed));
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				if(::IsValid(bpv__SpriteFlipBook__pf))
				{
					bpfv__CallFunc_SetFlipbook_ReturnValue__pf = bpv__SpriteFlipBook__pf->SetFlipbook(CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ABPS_GhostCharacter_C__pf2132744816::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed));
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ABPS_GhostCharacter_C__pf2132744816::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Red_U.Red_U 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/BPS_AI_Controller.BPS_AI_Controller_C 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Blue.Blue 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Flashing_FlipBook.Flashing_FlipBook 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Red_D.Red_D 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Red_L.Red_L 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Red_R.Red_R 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Eyes_UP_Flipbook.Eyes_Up_Flipbook 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Eyes_Down_Flipbook.Eyes_Down_Flipbook 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Eyes_Left_Flipbook.Eyes_Left_Flipbook 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Eyes_Right_Flipbook.Eyes_Right_Flipbook 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Pink_U.Pink_U 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Pink_D.Pink_D 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Pink_L.Pink_L 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Pink_R.Pink_R 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Cyan_U.Cyan_U 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Cyan_D.Cyan_D 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Cyan_L.Cyan_L 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Cyan_R.Cyan_R 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Orange_U.Orange_U 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Orange_D.Orange_D 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Orange_L.Orange_L 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/FlipBooks/Orange_R.Orange_R 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABPS_GhostCharacter_C__pf2132744816::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Paper2D.PaperFlipbookComponent 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{50, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{51, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIAsyncTaskBlueprintProxy 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{53, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/AIModule.EPathFollowingResult 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/AIModule.OAISimpleDelegate__DelegateSignature 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperFlipbook 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NavigationSystem 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.CrowdManager 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.RecastNavMesh 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{62, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Pacman_Test.GhostCharacter 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntime.ClothingSimulationFactoryNv 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NavArea_Obstacle 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPS_AI_Controller_C /Game/Blueprints/BPS_AI_Controller.Default__BPS_AI_Controller_C 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/BPS_PacmanPawn.BPS_PacmanPawn_C 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/BPS_GhostDestination.BPS_GhostDestination_C 
		{66, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Blueprints/Struct_GhostAnimations.Struct_GhostAnimations 
		{67, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/ENUM_GhostType.ENUM_GhostType 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABPS_GhostCharacter_C__pf2132744816
{
	FRegisterHelper__ABPS_GhostCharacter_C__pf2132744816()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/BPS_GhostCharacter"), &ABPS_GhostCharacter_C__pf2132744816::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABPS_GhostCharacter_C__pf2132744816 Instance;
};
FRegisterHelper__ABPS_GhostCharacter_C__pf2132744816 FRegisterHelper__ABPS_GhostCharacter_C__pf2132744816::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
