// QBA Studio


#include "AbilitySystem/Data/AttributeInfo.h"

FAuraAttributeInfo UAttributeInfo::FindAttributeInfoForTag(const FGameplayTag& AttributeTag, bool bLogNotFound) const
{
	for (const FAuraAttributeInfo& Info : AttributeInformation)
	{
		if (Info.AttributeTag.MatchesTagExact(AttributeTag))
		{
			return Info;
		}
	}
	
	if (bLogNotFound)
	{
		// UE_LOG(LogTemp, Error, TEXT("AttributeInfo for tag %s not found"), *AttributeTag.ToString(), *GetNameSafe(this));	
	}

	return FAuraAttributeInfo();
}
