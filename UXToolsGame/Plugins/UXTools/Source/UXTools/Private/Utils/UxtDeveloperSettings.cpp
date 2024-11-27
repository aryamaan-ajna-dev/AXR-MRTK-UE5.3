// Copyright (c) 2021-2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.


#include "Utils/UxtDeveloperSettings.h"
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "UxtDeveloperSettings"

UUxtDeveloperSettings::UUxtDeveloperSettings(const FObjectInitializer& objectInitializer)
	: Super(objectInitializer)
	, bEnableForAjnaXR(false)
{
}

#if WITH_EDITOR

FName UUxtDeveloperSettings::GetContainerName() const
{
	return FName("Project");
}

FName UUxtDeveloperSettings::GetCategoryName() const
{
	return FName("Plugins");
}

FName UUxtDeveloperSettings::GetSectionName() const
{
	return FName("Mixed Reality Toolkit");
}

FText UUxtDeveloperSettings::GetSectionText() const
{
	return LOCTEXT("MRTKSettingsName", "Mixed Reality Toolkit");
}

FText UUxtDeveloperSettings::GetSectionDescription() const
{
	return LOCTEXT("MRTKSettingsName", "Configure MMRTK Settings.");
}

#endif


#undef LOCTEXT_NAMESPACE