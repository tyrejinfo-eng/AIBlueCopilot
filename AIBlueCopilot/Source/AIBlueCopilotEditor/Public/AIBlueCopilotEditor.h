#pragma once

#include "Modules/ModuleManager.h"
#include "Widgets/Docking/SDockTab.h"

class FAIBlueCopilotEditorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

private:
    TSharedRef<SDockTab> OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs);
    void RegisterMenus();
    void PluginButtonClicked();
    FReply OnInitializeClicked();
};
