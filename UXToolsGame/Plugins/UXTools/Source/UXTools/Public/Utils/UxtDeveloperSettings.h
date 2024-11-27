// Copyright (c) 2021-2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"

#include "UxtDeveloperSettings.generated.h"
/**
 * 
 */
UCLASS(config = Game, defaultconfig)
class UXTOOLS_API UUxtDeveloperSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:
    UUxtDeveloperSettings(const FObjectInitializer& objectInitializer);

	UPROPERTY(Config, EditDefaultsOnly, BlueprintReadOnly, Category = "Build", DisplayName = "Is Build for AjnaXR?", meta = (ConfigRestartRequired = true))
	bool bEnableForAjnaXR = false;

#if WITH_EDITOR
    /** UDeveloperSettings implementation */
    virtual FName GetContainerName() const override;
    virtual FName GetCategoryName() const override;
    virtual FName GetSectionName() const override;
    virtual FText GetSectionText() const override;
    virtual FText GetSectionDescription() const override;

#endif
};
