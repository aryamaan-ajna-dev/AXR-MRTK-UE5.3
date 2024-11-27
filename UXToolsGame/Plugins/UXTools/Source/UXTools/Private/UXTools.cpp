// Copyright (c) 2020 Microsoft Corporation.
// Licensed under the MIT License.

#include "UXTools.h"
//#include "UxtDeveloperSettings.h"

DEFINE_LOG_CATEGORY(UXTools)

#define LOCTEXT_NAMESPACE "UXToolsModule"

void FUXToolsModule::StartupModule()
{
	//IModularFeatures::Get().RegisterModularFeature(TEXT("AjnaXRSettings"), &UUxtDeveloperSettings::StaticClass()->GetDefaultObject<UUxtDeveloperSettings>());
}

void FUXToolsModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FUXToolsModule, UXTools)
