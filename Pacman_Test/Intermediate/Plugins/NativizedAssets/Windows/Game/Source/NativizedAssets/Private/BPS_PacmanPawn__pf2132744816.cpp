#include "NativizedAssets.h"
#include "BPS_PacmanPawn__pf2132744816.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
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
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
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
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "BPS_Pacman_TestGameModeBase__pf2132744816.h"
#include "BPS_GhostCharacter__pf2132744816.h"
#include "BPS_GridBlock__pf2132744816.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "BPS_PacDot__pf2132744816.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerStart.h"
#include "BPS_GhostDestination__pf2132744816.h"
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
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Pacman_Test/Pacman_TestGameModeBase.h"
#include "Pacman_Test/GridBlock.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbook.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSprite.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/SpriteEditorOnlyTypes.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Pacman_Test/GhostDestination.h"
#include "Runtime/AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"
#include "ENUM_GhostType__pf2132744816.h"
#include "Struct_GhostAnimations__pf2132744816.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbookComponent.h"
#include "Pacman_Test/GhostCharacter.h"
#include "Pacman_Test/AI_Controller.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABPS_PacmanPawn_C__pf2132744816::ABPS_PacmanPawn_C__pf2132744816(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABPS_PacmanPawn_C__pf2132744816::StaticClass() == GetClass()))
	{
		ABPS_PacmanPawn_C__pf2132744816::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__Sphere__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	bpv__Box__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	bpv__Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__0 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Sphere__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__0 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABPS_PacmanPawn_C__pf2132744816::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Sphere__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Sphere__pf->OverrideMaterials.Reserve(1);
	bpv__Sphere__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABPS_PacmanPawn_C__pf2132744816::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__Sphere__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__Sphere__pf->RelativeScale3D = FVector(0.900000, 0.900000, 0.900000);
	if(!bpv__Sphere__pf->IsTemplate())
	{
		bpv__Sphere__pf->BodyInstance.FixupData(bpv__Sphere__pf);
	}
	bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Box__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__1 = (*(AccessPrivateProperty<FVector >((bpv__Box__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__1 = FVector(32.000000, 32.000000, 50.000000);
	bpv__Box__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("OverlapAll")));
	if(!bpv__Box__pf->IsTemplate())
	{
		bpv__Box__pf->BodyInstance.FixupData(bpv__Box__pf);
	}
	bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Camera__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Camera__pf->OrthoWidth = 4096.000000f;
	bpv__Camera__pf->bConstrainAspectRatio = true;
	bpv__Camera__pf->ProjectionMode = ECameraProjectionMode::Type::Orthographic;
	bpv__Camera__pf->RelativeLocation = FVector(1100.000000, 1050.000000, 2000.000000);
	bpv__Camera__pf->RelativeRotation = FRotator(-90.000000, 0.000000, -90.000000);
	bpv__Camera__pf->bAbsoluteLocation = true;
	bpv__Camera__pf->bAbsoluteRotation = true;
	bpv__Camera__pf->bAbsoluteScale = true;
	bpv__MovementTimeline_MovementPercent_9CDC5F11463DA47E7A5F329C7A831002__pf = 0.000000f;
	bpv__MovementTimeline__Direction_9CDC5F11463DA47E7A5F329C7A831002__pf = ETimelineDirection::Type::Forward;
	bpv__MovementTimeline__pf = nullptr;
	bpv__GameModeRef__pf = nullptr;
	bpv__TempLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__IsDeadx__pfzy = false;
	bpv__CanChangeDirection__pf = true;
	bpv__DirectionX__pf = 0;
	bpv__DirectionY__pf = 0;
	bpv__GhostPoints__pf = 200;
	bpv__BonusPointsTime__pf = 4.000000f;
	SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABPS_PacmanPawn_C__pf2132744816::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Sphere__pf)
	{
		bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Box__pf)
	{
		bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Camera__pf)
	{
		bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABPS_PacmanPawn_C__pf2132744816::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ABPS_Pacman_TestGameModeBase_C__pf2132744816::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABPS_GhostCharacter_C__pf2132744816::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABPS_GridBlock_C__pf2132744816::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__2 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("MovementTimeline_Template"));
	InDynamicClass->Timelines.Add(__Local__2);
	auto __Local__3 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__3);
	__Local__2->TimelineLength = 0.250000f;
	__Local__2->bValidatedAsWired = true;
	__Local__2->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__2->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__2->FloatTracks.GetData(), 1);
	auto& __Local__4 = __Local__2->FloatTracks[0];
	auto __Local__5 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__5);
	__Local__5->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__5->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__5->FloatCurve.Keys.GetData(), 2);
	auto& __Local__6 = __Local__5->FloatCurve.Keys[0];
	auto& __Local__7 = __Local__5->FloatCurve.Keys[1];
	__Local__7.Time = 0.250000f;
	__Local__7.Value = 1.000000f;
	__Local__4.CurveFloat = __Local__5;
	__Local__4.TrackName = FName(TEXT("MovementPercent"));
	__Local__2->TimelineGuid = FGuid(0x9CDC5F11, 0x463DA47E, 0x7A5F329C, 0x7A831002);
	__Local__3->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__3->InputKeyDelegateBindings.AddUninitialized(8);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__3->InputKeyDelegateBindings.GetData(), 8);
	auto& __Local__8 = __Local__3->InputKeyDelegateBindings[0];
	__Local__8.InputChord.Key = FKey(TEXT("Down"));
	__Local__8.InputKeyEvent = EInputEvent::IE_Released;
	__Local__8.FunctionNameToBind = FName(TEXT("InpActEvt_Down_K2Node_InputKeyEvent_9"));
	auto& __Local__9 = __Local__3->InputKeyDelegateBindings[1];
	__Local__9.InputChord.Key = FKey(TEXT("Down"));
	__Local__9.FunctionNameToBind = FName(TEXT("InpActEvt_Down_K2Node_InputKeyEvent_8"));
	auto& __Local__10 = __Local__3->InputKeyDelegateBindings[2];
	__Local__10.InputChord.Key = FKey(TEXT("Up"));
	__Local__10.FunctionNameToBind = FName(TEXT("InpActEvt_Up_K2Node_InputKeyEvent_10"));
	auto& __Local__11 = __Local__3->InputKeyDelegateBindings[3];
	__Local__11.InputChord.Key = FKey(TEXT("Right"));
	__Local__11.InputKeyEvent = EInputEvent::IE_Released;
	__Local__11.FunctionNameToBind = FName(TEXT("InpActEvt_Right_K2Node_InputKeyEvent_15"));
	auto& __Local__12 = __Local__3->InputKeyDelegateBindings[4];
	__Local__12.InputChord.Key = FKey(TEXT("Up"));
	__Local__12.InputKeyEvent = EInputEvent::IE_Released;
	__Local__12.FunctionNameToBind = FName(TEXT("InpActEvt_Up_K2Node_InputKeyEvent_11"));
	auto& __Local__13 = __Local__3->InputKeyDelegateBindings[5];
	__Local__13.InputChord.Key = FKey(TEXT("Right"));
	__Local__13.FunctionNameToBind = FName(TEXT("InpActEvt_Right_K2Node_InputKeyEvent_14"));
	auto& __Local__14 = __Local__3->InputKeyDelegateBindings[6];
	__Local__14.InputChord.Key = FKey(TEXT("Left"));
	__Local__14.InputKeyEvent = EInputEvent::IE_Released;
	__Local__14.FunctionNameToBind = FName(TEXT("InpActEvt_Left_K2Node_InputKeyEvent_13"));
	auto& __Local__15 = __Local__3->InputKeyDelegateBindings[7];
	__Local__15.InputChord.Key = FKey(TEXT("Left"));
	__Local__15.FunctionNameToBind = FName(TEXT("InpActEvt_Left_K2Node_InputKeyEvent_12"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABPS_PacmanPawn_C__pf2132744816::bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_0(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_VLerp_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 171);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__DirectionX__pf, 100.000000);
	bpfv__CallFunc_Multiply_IntFloat_ReturnValue1__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__DirectionY__pf, 100.000000);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue1__pf, 0.000000);
	bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__TempLocation__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf);
	bpfv__CallFunc_VLerp_ReturnValue__pf = UKismetMathLibrary::VLerp(bpv__TempLocation__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, bpv__MovementTimeline_MovementPercent_9CDC5F11463DA47E7A5F329C7A831002__pf);
	if(::IsValid(bpv__DefaultSceneRoot__pf))
	{
		bpv__DefaultSceneRoot__pf->USceneComponent::K2_SetWorldLocation(bpfv__CallFunc_VLerp_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, false);
	}
	return; //KCST_EndOfThread
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_IntInt_ReturnValue1__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue1__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue1__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Not_PreBool_ReturnValue1__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue1__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue3__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue3__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue4__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue3__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Not_PreBool_ReturnValue3__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue3__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue4__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue6__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue4__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue7__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue4__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue4__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue5__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue8__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue6__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue6__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue9__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue7__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue7__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue10__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue8__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				bpf__ResetDoOnce__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 3:
			{
				__CurrentState = 4;
				break;
			}
		case 4:
			{
				int32  __Local__16 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(bpv__GameModeRef__pf)) ? (bpv__GameModeRef__pf->bpv__Lives__pf) : (__Local__16)), 1);
				if(::IsValid(bpv__GameModeRef__pf))
				{
					bpv__GameModeRef__pf->bpv__Lives__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
				}
			}
		case 5:
			{
				int32  __Local__17 = 0;
				if(::IsValid(bpv__GameModeRef__pf))
				{
					bpv__GameModeRef__pf->bpv__Lives__pf = ((::IsValid(bpv__GameModeRef__pf)) ? (bpv__GameModeRef__pf->bpv__Lives__pf) : (__Local__17));
				}
			}
		case 6:
			{
				int32  __Local__18 = 0;
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(((::IsValid(bpv__GameModeRef__pf)) ? (bpv__GameModeRef__pf->bpv__Lives__pf) : (__Local__18)), 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 7:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("GAME OVER")), true, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), 5.000000);
			}
		case 8:
			{
				UKismetSystemLibrary::Delay(this, 5.000000, FLatentActionInfo(17, 1087903261, TEXT("ExecuteUbergraph_BPS_PacmanPawn_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABPS_GhostCharacter_C__pf2132744816::StaticClass(), /*out*/ TArrayCaster<ABPS_GhostCharacter_C__pf2132744816*>(b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf).Get<AActor*>());
			}
		case 10:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 11:
			{
				b0l__Temp_int_Array_Index_Variable1__pf = 0;
			}
		case 12:
			{
				bpfv__CallFunc_Array_Length_ReturnValue1__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 16;
					break;
				}
			}
		case 13:
			{
				b0l__Temp_int_Array_Index_Variable1__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 14:
			{
				__StateStack.Push(19);
			}
		case 15:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf, b0l__Temp_int_Array_Index_Variable1__pf, /*out*/ b0l__CallFunc_Array_Get_Item1__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item1__pf))
				{
					b0l__CallFunc_Array_Get_Item1__pf->bpf__ResetLocation__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				K2_DestroyActor();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				__CurrentState = 18;
				break;
			}
		case 18:
			{
				UGameplayStatics::OpenLevel(this, FName(TEXT("Pacman_Level")), true, FString(TEXT("")));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue1__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue1__pf;
				__CurrentState = 12;
				break;
			}
		case 20:
			{
				__CurrentState = 21;
				break;
			}
		case 21:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("YOU DIED")), true, true, FLinearColor(1.000000,1.000000,0.000000,1.000000), 2.000000);
			}
		case 22:
			{
				UKismetSystemLibrary::Delay(this, 2.000000, FLatentActionInfo(3, 2147483647, TEXT("ExecuteUbergraph_BPS_PacmanPawn_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				__StateStack.Push(34);
			}
		case 24:
			{
				__StateStack.Push(29);
			}
		case 25:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable5__pf)
				{
					__CurrentState = 26;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 26:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable5__pf = true;
			}
		case 27:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 28:
			{
				b0l__Temp_bool_IsClosed_Variable5__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				if (!b0l__Temp_bool_IsClosed_Variable5__pf)
				{
					__CurrentState = 30;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				b0l__Temp_bool_IsClosed_Variable5__pf = true;
			}
		case 31:
			{
				if (!true)
				{
					__CurrentState = 33;
					break;
				}
			}
		case 32:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable3__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable3__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 34:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable3__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 35:
			{
				__CurrentState = 36;
				break;
			}
		case 36:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputKeyEvent_Key4__pf;
			}
		case 37:
			{
				__StateStack.Push(48);
			}
		case 38:
			{
				__StateStack.Push(43);
			}
		case 39:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable3__pf)
				{
					__CurrentState = 40;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 40:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable3__pf = true;
			}
		case 41:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 42:
			{
				b0l__Temp_bool_IsClosed_Variable4__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 43:
			{
				if (!b0l__Temp_bool_IsClosed_Variable4__pf)
				{
					__CurrentState = 44;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 44:
			{
				b0l__Temp_bool_IsClosed_Variable4__pf = true;
			}
		case 45:
			{
				if (!true)
				{
					__CurrentState = 47;
					break;
				}
			}
		case 46:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 47:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 48:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 49:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 50:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 51:
			{
				__StateStack.Push(52);
				__CurrentState = 38;
				break;
			}
		case 52:
			{
				if (!b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 53:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf = AActor::K2_GetActorLocation();
				if(::IsValid(bpv__GameModeRef__pf))
				{
					bpv__GameModeRef__pf->bpf__WorldToGridLocation__pf(bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf, /*out*/ b0l__CallFunc_WorldToGridLocation_X5__pf, /*out*/ b0l__CallFunc_WorldToGridLocation_Y5__pf);
				}
			}
		case 54:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue8__pf = UKismetMathLibrary::Add_IntInt(b0l__CallFunc_WorldToGridLocation_X5__pf, -1);
				if(::IsValid(bpv__GameModeRef__pf))
				{
					bpv__GameModeRef__pf->bpf__GetBlockFromGridLocation__pf(bpfv__CallFunc_Add_IntInt_ReturnValue8__pf, b0l__CallFunc_WorldToGridLocation_Y5__pf, /*out*/ b0l__CallFunc_GetBlockFromGridLocation_BlockActor5__pf);
				}
			}
		case 55:
			{
				bool  __Local__21 = false;
				bpfv__CallFunc_BooleanAND_ReturnValue6__pf = UKismetMathLibrary::BooleanAND(((::IsValid(b0l__CallFunc_GetBlockFromGridLocation_BlockActor5__pf)) ? (b0l__CallFunc_GetBlockFromGridLocation_BlockActor5__pf->bpv__isWalkable__pf) : (__Local__21)), bpv__CanChangeDirection__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue6__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 56:
			{
				bpv__DirectionX__pf = -1;
			}
		case 57:
			{
				bpv__DirectionY__pf = 0;
			}
		case 58:
			{
				bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__DirectionX__pf, 0);
				bpfv__CallFunc_NotEqual_IntInt_ReturnValue1__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__DirectionY__pf, 0);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf, bpfv__CallFunc_NotEqual_IntInt_ReturnValue1__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = 2;
					break;
				}
			}
		case 59:
			{
				if(::IsValid(bpv__MovementTimeline__pf))
				{
					bpv__MovementTimeline__pf->UTimelineComponent::PlayFromStart();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 60:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 61:
			{
				__StateStack.Push(64);
			}
		case 62:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 63;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 63:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
				__CurrentState = 49;
				break;
			}
		case 64:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 65;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 65:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 66:
			{
				if (!true)
				{
					__CurrentState = 68;
					break;
				}
			}
		case 67:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 68:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 69:
			{
				__StateStack.Push(60);
				__CurrentState = 38;
				break;
			}
		case 70:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 71:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 72:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 73:
			{
				if (!b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 74:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue6__pf = AActor::K2_GetActorLocation();
				if(::IsValid(bpv__GameModeRef__pf))
				{
					bpv__GameModeRef__pf->bpf__WorldToGridLocation__pf(bpfv__CallFunc_K2_GetActorLocation_ReturnValue6__pf, /*out*/ b0l__CallFunc_WorldToGridLocation_X6__pf, /*out*/ b0l__CallFunc_WorldToGridLocation_Y6__pf);
				}
			}
		case 75:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue9__pf = UKismetMathLibrary::Add_IntInt(b0l__CallFunc_WorldToGridLocation_Y6__pf, -1);
				if(::IsValid(bpv__GameModeRef__pf))
				{
					bpv__GameModeRef__pf->bpf__GetBlockFromGridLocation__pf(b0l__CallFunc_WorldToGridLocation_X6__pf, bpfv__CallFunc_Add_IntInt_ReturnValue9__pf, /*out*/ b0l__CallFunc_GetBlockFromGridLocation_BlockActor6__pf);
				}
			}
		case 76:
			{
				bool  __Local__22 = false;
				bpfv__CallFunc_BooleanAND_ReturnValue7__pf = UKismetMathLibrary::BooleanAND(((::IsValid(b0l__CallFunc_GetBlockFromGridLocation_BlockActor6__pf)) ? (b0l__CallFunc_GetBlockFromGridLocation_BlockActor6__pf->bpv__isWalkable__pf) : (__Local__22)), bpv__CanChangeDirection__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue7__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 77:
			{
				bpv__DirectionY__pf = -1;
			}
		case 78:
			{
				bpv__DirectionX__pf = 0;
				__CurrentState = 58;
				break;
			}
		case 79:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 80:
			{
				__StateStack.Push(73);
			}
		case 81:
			{
				__StateStack.Push(86);
			}
		case 82:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable1__pf)
				{
					__CurrentState = 83;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 83:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable1__pf = true;
			}
		case 84:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 85:
			{
				b0l__Temp_bool_IsClosed_Variable1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 86:
			{
				if (!b0l__Temp_bool_IsClosed_Variable1__pf)
				{
					__CurrentState = 87;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 87:
			{
				b0l__Temp_bool_IsClosed_Variable1__pf = true;
			}
		case 88:
			{
				if (!true)
				{
					__CurrentState = 70;
					break;
				}
				__CurrentState = 79;
				break;
			}
		case 89:
			{
				__CurrentState = 90;
				break;
			}
		case 90:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputKeyEvent_Key5__pf;
				__CurrentState = 69;
				break;
			}
		case 91:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 92:
			{
				b0l__Temp_bool_IsClosed_Variable3__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 93:
			{
				__StateStack.Push(72);
				__CurrentState = 81;
				break;
			}
		case 94:
			{
				__StateStack.Push(71);
				__CurrentState = 81;
				break;
			}
		case 95:
			{
				__StateStack.Push(98);
			}
		case 96:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable2__pf)
				{
					__CurrentState = 97;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 97:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable2__pf = true;
				__CurrentState = 91;
				break;
			}
		case 98:
			{
				if (!b0l__Temp_bool_IsClosed_Variable3__pf)
				{
					__CurrentState = 99;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 99:
			{
				b0l__Temp_bool_IsClosed_Variable3__pf = true;
			}
		case 100:
			{
				if(::IsValid(bpv__DefaultSceneRoot__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__DefaultSceneRoot__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpv__TempLocation__pf = bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf;
			}
		case 101:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
				if(::IsValid(bpv__GameModeRef__pf))
				{
					bpv__GameModeRef__pf->bpf__WorldToGridLocation__pf(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, /*out*/ b0l__CallFunc_WorldToGridLocation_X__pf, /*out*/ b0l__CallFunc_WorldToGridLocation_Y__pf);
				}
			}
		case 102:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(b0l__CallFunc_WorldToGridLocation_X__pf, 1);
				if(::IsValid(bpv__GameModeRef__pf))
				{
					bpv__GameModeRef__pf->bpf__GetBlockFromGridLocation__pf(bpfv__CallFunc_Add_IntInt_ReturnValue2__pf, b0l__CallFunc_WorldToGridLocation_Y__pf, /*out*/ b0l__CallFunc_GetBlockFromGridLocation_BlockActor__pf);
				}
			}
		case 103:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue1__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__DirectionX__pf, 1);
				bool  __Local__23 = false;
				bpfv__CallFunc_Not_PreBool_ReturnValue1__pf = UKismetMathLibrary::Not_PreBool(((::IsValid(b0l__CallFunc_GetBlockFromGridLocation_BlockActor__pf)) ? (b0l__CallFunc_GetBlockFromGridLocation_BlockActor__pf->bpv__isWalkable__pf) : (__Local__23)));
				bpfv__CallFunc_BooleanAND_ReturnValue1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue1__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue1__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue1__pf)
				{
					__CurrentState = 120;
					break;
				}
			}
		case 104:
			{
				bpv__DirectionX__pf = 0;
			}
		case 105:
			{
				__StateStack.Push(58);
				__StateStack.Push(113);
				__StateStack.Push(80);
				__StateStack.Push(51);
			}
		case 106:
			{
				__StateStack.Push(107);
				__CurrentState = 24;
				break;
			}
		case 107:
			{
				if (!b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 108:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue4__pf = AActor::K2_GetActorLocation();
				if(::IsValid(bpv__GameModeRef__pf))
				{
					bpv__GameModeRef__pf->bpf__WorldToGridLocation__pf(bpfv__CallFunc_K2_GetActorLocation_ReturnValue4__pf, /*out*/ b0l__CallFunc_WorldToGridLocation_X4__pf, /*out*/ b0l__CallFunc_WorldToGridLocation_Y4__pf);
				}
			}
		case 109:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue7__pf = UKismetMathLibrary::Add_IntInt(b0l__CallFunc_WorldToGridLocation_X4__pf, 1);
				if(::IsValid(bpv__GameModeRef__pf))
				{
					bpv__GameModeRef__pf->bpf__GetBlockFromGridLocation__pf(bpfv__CallFunc_Add_IntInt_ReturnValue7__pf, b0l__CallFunc_WorldToGridLocation_Y4__pf, /*out*/ b0l__CallFunc_GetBlockFromGridLocation_BlockActor4__pf);
				}
			}
		case 110:
			{
				bool  __Local__24 = false;
				bpfv__CallFunc_BooleanAND_ReturnValue5__pf = UKismetMathLibrary::BooleanAND(((::IsValid(b0l__CallFunc_GetBlockFromGridLocation_BlockActor4__pf)) ? (b0l__CallFunc_GetBlockFromGridLocation_BlockActor4__pf->bpv__isWalkable__pf) : (__Local__24)), bpv__CanChangeDirection__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue5__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 111:
			{
				bpv__DirectionX__pf = 1;
			}
		case 112:
			{
				bpv__DirectionY__pf = 0;
				__CurrentState = 58;
				break;
			}
		case 113:
			{
				__StateStack.Push(114);
				__CurrentState = 61;
				break;
			}
		case 114:
			{
				if (!b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 115:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue7__pf = AActor::K2_GetActorLocation();
				if(::IsValid(bpv__GameModeRef__pf))
				{
					bpv__GameModeRef__pf->bpf__WorldToGridLocation__pf(bpfv__CallFunc_K2_GetActorLocation_ReturnValue7__pf, /*out*/ b0l__CallFunc_WorldToGridLocation_X7__pf, /*out*/ b0l__CallFunc_WorldToGridLocation_Y7__pf);
				}
			}
		case 116:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue10__pf = UKismetMathLibrary::Add_IntInt(b0l__CallFunc_WorldToGridLocation_Y7__pf, 1);
				if(::IsValid(bpv__GameModeRef__pf))
				{
					bpv__GameModeRef__pf->bpf__GetBlockFromGridLocation__pf(b0l__CallFunc_WorldToGridLocation_X7__pf, bpfv__CallFunc_Add_IntInt_ReturnValue10__pf, /*out*/ b0l__CallFunc_GetBlockFromGridLocation_BlockActor7__pf);
				}
			}
		case 117:
			{
				bool  __Local__25 = false;
				bpfv__CallFunc_BooleanAND_ReturnValue8__pf = UKismetMathLibrary::BooleanAND(((::IsValid(b0l__CallFunc_GetBlockFromGridLocation_BlockActor7__pf)) ? (b0l__CallFunc_GetBlockFromGridLocation_BlockActor7__pf->bpv__isWalkable__pf) : (__Local__25)), bpv__CanChangeDirection__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue8__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 118:
			{
				bpv__DirectionY__pf = 1;
			}
		case 119:
			{
				bpv__DirectionX__pf = 0;
				__CurrentState = 58;
				break;
			}
		case 120:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue1__pf = AActor::K2_GetActorLocation();
				if(::IsValid(bpv__GameModeRef__pf))
				{
					bpv__GameModeRef__pf->bpf__WorldToGridLocation__pf(bpfv__CallFunc_K2_GetActorLocation_ReturnValue1__pf, /*out*/ b0l__CallFunc_WorldToGridLocation_X1__pf, /*out*/ b0l__CallFunc_WorldToGridLocation_Y1__pf);
				}
			}
		case 121:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue3__pf = UKismetMathLibrary::Add_IntInt(b0l__CallFunc_WorldToGridLocation_X1__pf, -1);
				if(::IsValid(bpv__GameModeRef__pf))
				{
					bpv__GameModeRef__pf->bpf__GetBlockFromGridLocation__pf(bpfv__CallFunc_Add_IntInt_ReturnValue3__pf, b0l__CallFunc_WorldToGridLocation_Y1__pf, /*out*/ b0l__CallFunc_GetBlockFromGridLocation_BlockActor1__pf);
				}
			}
		case 122:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__DirectionX__pf, -1);
				bool  __Local__26 = false;
				bpfv__CallFunc_Not_PreBool_ReturnValue2__pf = UKismetMathLibrary::Not_PreBool(((::IsValid(b0l__CallFunc_GetBlockFromGridLocation_BlockActor1__pf)) ? (b0l__CallFunc_GetBlockFromGridLocation_BlockActor1__pf->bpv__isWalkable__pf) : (__Local__26)));
				bpfv__CallFunc_BooleanAND_ReturnValue2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue2__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue2__pf)
				{
					__CurrentState = 124;
					break;
				}
			}
		case 123:
			{
				bpv__DirectionX__pf = 0;
				__CurrentState = 105;
				break;
			}
		case 124:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf = AActor::K2_GetActorLocation();
				if(::IsValid(bpv__GameModeRef__pf))
				{
					bpv__GameModeRef__pf->bpf__WorldToGridLocation__pf(bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf, /*out*/ b0l__CallFunc_WorldToGridLocation_X2__pf, /*out*/ b0l__CallFunc_WorldToGridLocation_Y2__pf);
				}
			}
		case 125:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue4__pf = UKismetMathLibrary::Add_IntInt(b0l__CallFunc_WorldToGridLocation_Y2__pf, -1);
				if(::IsValid(bpv__GameModeRef__pf))
				{
					bpv__GameModeRef__pf->bpf__GetBlockFromGridLocation__pf(b0l__CallFunc_WorldToGridLocation_X2__pf, bpfv__CallFunc_Add_IntInt_ReturnValue4__pf, /*out*/ b0l__CallFunc_GetBlockFromGridLocation_BlockActor2__pf);
				}
			}
		case 126:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue3__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__DirectionY__pf, -1);
				bool  __Local__27 = false;
				bpfv__CallFunc_Not_PreBool_ReturnValue3__pf = UKismetMathLibrary::Not_PreBool(((::IsValid(b0l__CallFunc_GetBlockFromGridLocation_BlockActor2__pf)) ? (b0l__CallFunc_GetBlockFromGridLocation_BlockActor2__pf->bpv__isWalkable__pf) : (__Local__27)));
				bpfv__CallFunc_BooleanAND_ReturnValue3__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue3__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue3__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue3__pf)
				{
					__CurrentState = 128;
					break;
				}
			}
		case 127:
			{
				bpv__DirectionY__pf = 0;
				__CurrentState = 105;
				break;
			}
		case 128:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue3__pf = AActor::K2_GetActorLocation();
				if(::IsValid(bpv__GameModeRef__pf))
				{
					bpv__GameModeRef__pf->bpf__WorldToGridLocation__pf(bpfv__CallFunc_K2_GetActorLocation_ReturnValue3__pf, /*out*/ b0l__CallFunc_WorldToGridLocation_X3__pf, /*out*/ b0l__CallFunc_WorldToGridLocation_Y3__pf);
				}
			}
		case 129:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue6__pf = UKismetMathLibrary::Add_IntInt(b0l__CallFunc_WorldToGridLocation_Y3__pf, 1);
				if(::IsValid(bpv__GameModeRef__pf))
				{
					bpv__GameModeRef__pf->bpf__GetBlockFromGridLocation__pf(b0l__CallFunc_WorldToGridLocation_X3__pf, bpfv__CallFunc_Add_IntInt_ReturnValue6__pf, /*out*/ b0l__CallFunc_GetBlockFromGridLocation_BlockActor3__pf);
				}
			}
		case 130:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue4__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__DirectionY__pf, 1);
				bool  __Local__28 = false;
				bpfv__CallFunc_Not_PreBool_ReturnValue4__pf = UKismetMathLibrary::Not_PreBool(((::IsValid(b0l__CallFunc_GetBlockFromGridLocation_BlockActor3__pf)) ? (b0l__CallFunc_GetBlockFromGridLocation_BlockActor3__pf->bpv__isWalkable__pf) : (__Local__28)));
				bpfv__CallFunc_BooleanAND_ReturnValue4__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue4__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue4__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue4__pf)
				{
					__CurrentState = 105;
					break;
				}
			}
		case 131:
			{
				bpv__DirectionY__pf = 0;
				__CurrentState = 105;
				break;
			}
		case 132:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 133:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 134:
			{
				__StateStack.Push(133);
				__CurrentState = 61;
				break;
			}
		case 135:
			{
				__StateStack.Push(132);
				__CurrentState = 61;
				break;
			}
		case 161:
			{
				__CurrentState = 162;
				break;
			}
		case 162:
			{
				if (!bpv__IsDeadx__pfzy)
				{
					__CurrentState = 95;
					break;
				}
			}
		case 163:
			{
				__StateStack.Push(168);
			}
		case 164:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable4__pf)
				{
					__CurrentState = 165;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 165:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable4__pf = true;
			}
		case 166:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 167:
			{
				b0l__Temp_bool_IsClosed_Variable2__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 168:
			{
				if (!b0l__Temp_bool_IsClosed_Variable2__pf)
				{
					__CurrentState = 169;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 169:
			{
				b0l__Temp_bool_IsClosed_Variable2__pf = true;
			}
		case 170:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(20, 2147483647, TEXT("ExecuteUbergraph_BPS_PacmanPawn_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 173:
			{
				__StateStack.Push(174);
				__CurrentState = 24;
				break;
			}
		case 174:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable3__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 177:
			{
				__CurrentState = 178;
				break;
			}
		case 178:
			{
				b0l__Temp_struct_Variable1__pf = b0l__K2Node_InputKeyEvent_Key6__pf;
				__CurrentState = 173;
				break;
			}
		case 179:
			{
				__CurrentState = 180;
				break;
			}
		case 180:
			{
				b0l__Temp_struct_Variable3__pf = b0l__K2Node_InputKeyEvent_Key3__pf;
				__CurrentState = 94;
				break;
			}
		case 188:
			{
				__CurrentState = 189;
				break;
			}
		case 189:
			{
				b0l__Temp_struct_Variable1__pf = b0l__K2Node_InputKeyEvent_Key7__pf;
				__CurrentState = 23;
				break;
			}
		case 190:
			{
				__CurrentState = 191;
				break;
			}
		case 191:
			{
				b0l__Temp_struct_Variable3__pf = b0l__K2Node_InputKeyEvent_Key2__pf;
				__CurrentState = 93;
				break;
			}
		case 192:
			{
				__CurrentState = 193;
				break;
			}
		case 193:
			{
				b0l__Temp_struct_Variable2__pf = b0l__K2Node_InputKeyEvent_Key__pf;
				__CurrentState = 134;
				break;
			}
		case 194:
			{
				__CurrentState = 195;
				break;
			}
		case 195:
			{
				b0l__Temp_struct_Variable2__pf = b0l__K2Node_InputKeyEvent_Key1__pf;
				__CurrentState = 135;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_2(int32 bpp__EntryPoint__pf)
{
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 136);
	// optimized KCST_UnconditionalGoto
	bpv__IsDeadx__pfzy = false;
	bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
	b0l__K2Node_DynamicCast_AsBPS_Pacman_Test_Game_Mode_Base__pf = Cast<ABPS_Pacman_TestGameModeBase_C__pf2132744816>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBPS_Pacman_Test_Game_Mode_Base__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpv__GameModeRef__pf = b0l__K2Node_DynamicCast_AsBPS_Pacman_Test_Game_Mode_Base__pf;
	b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("RespawnEvent")));
	OnDestroyed.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
	return; //KCST_EndOfThread
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue5__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 152:
			{
				__CurrentState = 153;
				break;
			}
		case 153:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABPS_GhostCharacter_C__pf2132744816::StaticClass(), /*out*/ TArrayCaster<ABPS_GhostCharacter_C__pf2132744816*>(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 154:
			{
				b0l__Temp_int_Loop_Counter_Variable1__pf = 0;
			}
		case 155:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 156:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue1__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable1__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 157:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable1__pf;
			}
		case 158:
			{
				__StateStack.Push(160);
			}
		case 159:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->bpf__CanBeEatenEvent__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 160:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue5__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable1__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue5__pf;
				__CurrentState = 156;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_4(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 181);
	// optimized KCST_UnconditionalGoto
	int32  __Local__30 = 0;
	bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(((::IsValid(bpv__GameModeRef__pf)) ? (bpv__GameModeRef__pf->bpv__Score__pf) : (__Local__30)), bpv__GhostPoints__pf);
	if(::IsValid(bpv__GameModeRef__pf))
	{
		bpv__GameModeRef__pf->bpv__Score__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
	}
	bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf = UKismetMathLibrary::Multiply_IntInt(bpv__GhostPoints__pf, 2);
	bpv__GhostPoints__pf = bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf;
	bpfv__CallFunc_K2_SetTimer_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("ResetBonusPoints")), bpv__BonusPointsTime__pf, false);
	bpv__EatBonusTimerHandle__pf = bpfv__CallFunc_K2_SetTimer_ReturnValue__pf;
	return; //KCST_EndOfThread
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_5(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 144:
			{
				bpv__IsDeadx__pfzy = true;
				__CurrentState = -1;
				break;
			}
		case 145:
			{
				__CurrentState = 146;
				break;
			}
		case 146:
			{
				b0l__K2Node_DynamicCast_AsBPS_Ghost_Character__pf = Cast<ABPS_GhostCharacter_C__pf2132744816>(b0l__K2Node_Event_OtherActor__pf);
				b0l__K2Node_DynamicCast_bSuccess1__pf = (b0l__K2Node_DynamicCast_AsBPS_Ghost_Character__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 147:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__IsDeadx__pfzy);
				bool  __Local__31 = false;
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, ((::IsValid(b0l__K2Node_DynamicCast_AsBPS_Ghost_Character__pf)) ? (b0l__K2Node_DynamicCast_AsBPS_Ghost_Character__pf->bpv__CanKill__pf) : (__Local__31)));
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 148;
					break;
				}
				__CurrentState = 144;
				break;
			}
		case 148:
			{
				bool  __Local__32 = false;
				if (!((::IsValid(b0l__K2Node_DynamicCast_AsBPS_Ghost_Character__pf)) ? (b0l__K2Node_DynamicCast_AsBPS_Ghost_Character__pf->bpv__CanBeEaten__pf) : (__Local__32)))
				{
					__CurrentState = -1;
					break;
				}
			}
		case 149:
			{
				UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__EatBonusTimerHandle__pf);
			}
		case 150:
			{
				bpf__GetGhostPoints__pf();
			}
		case 151:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsBPS_Ghost_Character__pf))
				{
					b0l__K2Node_DynamicCast_AsBPS_Ghost_Character__pf->bpf__EatEvent__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 186);
	// optimized KCST_UnconditionalGoto
	bpv__GhostPoints__pf = 200;
	return; //KCST_EndOfThread
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 175);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_bool_IsClosed_Variable3__pf = false;
	// optimized KCST_UnconditionalGoto
	b0l__Temp_bool_Has_Been_Initd_Variable2__pf = true;
	return; //KCST_EndOfThread
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 141);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__GameModeRef__pf))
	{
		bpv__GameModeRef__pf->bpf__SpawnPacman__pf();
	}
	return; //KCST_EndOfThread
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__ResetBonusPoints__pf()
{
	bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_6(186);
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__GetGhostPoints__pf()
{
	bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_4(181);
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__ResetDoOnce__pf()
{
	bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_7(175);
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_1(161);
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__EatGhostEvent__pf()
{
	bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_3(152);
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf)
{
	b0l__K2Node_Event_OtherActor__pf = bpp__OtherActor__pf;
	bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_5(145);
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__RespawnEvent__pf(AActor* bpp__DestroyedActor__pf)
{
	b0l__K2Node_CustomEvent_DestroyedActor__pf = bpp__DestroyedActor__pf;
	bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_8(141);
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_2(136);
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__InpActEvt_Down_K2Node_InputKeyEvent_8__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_1(192);
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__InpActEvt_Down_K2Node_InputKeyEvent_9__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_1(194);
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__InpActEvt_Up_K2Node_InputKeyEvent_10__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_1(190);
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__InpActEvt_Up_K2Node_InputKeyEvent_11__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_1(179);
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__InpActEvt_Left_K2Node_InputKeyEvent_12__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_1(35);
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__InpActEvt_Left_K2Node_InputKeyEvent_13__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_1(89);
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__InpActEvt_Right_K2Node_InputKeyEvent_14__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_1(177);
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__InpActEvt_Right_K2Node_InputKeyEvent_15__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key7__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_1(188);
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__MovementTimeline__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_0(171);
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__MovementTimeline__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_BPS_PacmanPawn__pf_1(1);
}
void ABPS_PacmanPawn_C__pf2132744816::bpf__UserConstructionScript__pf()
{
}
PRAGMA_DISABLE_OPTIMIZATION
void ABPS_PacmanPawn_C__pf2132744816::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Materials/M_Pacman.M_Pacman 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABPS_PacmanPawn_C__pf2132744816::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BoxComponent 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NavArea_Obstacle 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CameraComponent 
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{82, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{50, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{51, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.ActorDestroyedSignature__DelegateSignature 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{84, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Pacman_Test.PacmanPawn 
		{85, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/BPS_Pacman_TestGameModeBase.BPS_Pacman_TestGameModeBase_C 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/BPS_GhostCharacter.BPS_GhostCharacter_C 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/BPS_GridBlock.BPS_GridBlock_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABPS_PacmanPawn_C__pf2132744816
{
	FRegisterHelper__ABPS_PacmanPawn_C__pf2132744816()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/BPS_PacmanPawn"), &ABPS_PacmanPawn_C__pf2132744816::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABPS_PacmanPawn_C__pf2132744816 Instance;
};
FRegisterHelper__ABPS_PacmanPawn_C__pf2132744816 FRegisterHelper__ABPS_PacmanPawn_C__pf2132744816::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
