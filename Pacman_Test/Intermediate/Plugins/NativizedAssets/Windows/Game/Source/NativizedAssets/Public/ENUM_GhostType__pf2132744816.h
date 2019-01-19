#pragma once
#include "ENUM_GhostType__pf2132744816.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/ENUM_GhostType.ENUM_GhostType", OverrideNativeName="ENUM_GhostType", EnumDisplayNameFn="E__ENUM_GhostType__pf__GetUserFriendlyName") )
enum class E__ENUM_GhostType__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ENUM_GhostType::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "ENUM_GhostType::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "ENUM_GhostType::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "ENUM_GhostType::NewEnumerator3"),
	E__ENUM_GhostType__pf_MAX = 4 UMETA(OverrideName = "ENUM_GhostType::ENUM_MAX"),
};
FText E__ENUM_GhostType__pf__GetUserFriendlyName(int32 InValue);
