#pragma once

#include "Engine/DeveloperSettings.h"
#include "DsSettings.generated.h"

UCLASS(Config = "Engine", DefaultConfig)
class FABULOUSDUALSENSE_API UDsSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DualSense", Config)
	bool bEmitMouseEventsFromTouchpad;

public:
	UDsSettings();

#if WITH_EDITOR
	virtual FText GetSectionText() const override;

	virtual FText GetSectionDescription() const override;
#endif
};
