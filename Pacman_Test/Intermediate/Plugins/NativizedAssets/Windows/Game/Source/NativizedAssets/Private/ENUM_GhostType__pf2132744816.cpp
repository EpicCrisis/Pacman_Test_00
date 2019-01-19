#include "NativizedAssets.h"
#include "ENUM_GhostType__pf2132744816.h"
FText E__ENUM_GhostType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENUM_GhostType__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENUM_GhostType__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[E67C6CD7485371A16B50B390EF655180]\", \"1F84B71943F74A29EAA72C9CCD64E809\", \"Red\")"), Text); break;
		case E__ENUM_GhostType__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[E67C6CD7485371A16B50B390EF655180]\", \"44A493FC44D6EE5DABE44A9A7F772B84\", \"Pink\")"), Text); break;
		case E__ENUM_GhostType__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[E67C6CD7485371A16B50B390EF655180]\", \"D7061A5147881E2F48102D92651DE36D\", \"Cyan\")"), Text); break;
		case E__ENUM_GhostType__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[E67C6CD7485371A16B50B390EF655180]\", \"DA09697E4D8E30BF923AA2BCE9B3304B\", \"Orange\")"), Text); break;
		case E__ENUM_GhostType__pf::E__ENUM_GhostType__pf_MAX: FTextStringHelper::ReadFromString(TEXT("ENUM MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
