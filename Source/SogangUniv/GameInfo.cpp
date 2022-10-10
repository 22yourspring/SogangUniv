#include "GameInfo.h"

DEFINE_LOG_CATEGORY(SogangUniv);

void PrintViewPort(float Time, const FColor& Color, const FString& Text)
{
	GEngine->AddOnScreenDebugMessage(-1, Time, Color, Text);
}