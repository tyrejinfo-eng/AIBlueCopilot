// AIBLUE Copilot - FIXED STABLE VERSION
// NO AUTO EXECUTION - Manual Terminal Only

#include "AIBlueCopilotEditor.h"
#include "Framework/Docking/TabManager.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Modules/ModuleManager.h"
#include "LevelEditor.h"
#include "Http/Public/Http.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "AssetToolsModule.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Engine/Blueprint.h"
#include "GameFramework/Character.h"
#include "GameFramework/Pawn.h"
#include "Engine/StaticMesh.h"
#include "Misc/Paths.h"
#include "UnrealEd.h"

DEFINE_LOG_CATEGORY_STATIC(LogAIBlueCopilotEditor, Log, All);

static const FName AIBlueCopilotTabName(TEXT("AIBlueCopilot"));
static const FName AgentCodeEditorTabName(TEXT("AgentCodeEditor"));

// UI state
static TSharedPtr<SScrollBox> ChatDisplayBox;
static TSharedPtr<STextBlock> ConnectionStatusText;
static TSharedPtr<STextBlock> AgentStatusText;
static TSharedPtr<SEditableTextBox> PromptInputBox;
static bool bConnected = false;
static bool bAgentMode = false;
static FString CurrentLLMAddress = TEXT("http://localhost:1234");
static FString ConnectionStatusMessage = TEXT("NO CONNECTION!");
static FString AgentStatusMessage = TEXT("Agent: Inactive");

// ==================== BLUEPRINT CREATION ====================

void EnsureEasyToFindFolder()
{
    FString ContentDir = FPaths::ProjectContentDir();
    FString EasyToFindPath = FPaths::Combine(ContentDir, TEXT("EasyToFind"));
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

    if (!PlatformFile.DirectoryExists(*EasyToFindPath))
    {
        PlatformFile.CreateDirectory(*EasyToFindPath);
    }

    FAssetRegistryModule& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
    AssetRegistry.Get().ScanPathsSynchronous({TEXT("/Game/EasyToFind")}, true);
}

void CreateBlueprint(const FString& BlueprintName, const FString& ParentStr)
{
    UE_LOG(LogAIBlueCopilotEditor, Warning, TEXT("[AIBLUE] Creating: %s (Parent: %s)"), *BlueprintName, *ParentStr);

    EnsureEasyToFindFolder();

    // Get parent class
    UClass* ParentClass = AActor::StaticClass();
    FString Lower = ParentStr.ToLower();
    if (Lower.Contains(TEXT("character")))
        ParentClass = ACharacter::StaticClass();
    else if (Lower.Contains(TEXT("pawn")))
        ParentClass = APawn::StaticClass();

    if (!ParentClass)
    {
        ParentClass = AActor::StaticClass();
    }

    // Create package
    FString PackageName = TEXT("/Game/EasyToFind/") + BlueprintName;
    UPackage* Package = CreatePackage(*PackageName);
    if (!Package) return;

    Package->FullyLoad();

    // Check for existing blueprint to avoid crash
    if (FindObject<UBlueprint>(Package, *BlueprintName)) {
        UE_LOG(LogAIBlueCopilotEditor, Error, TEXT("[AIBLUE] Blueprint already exists: %s"), *BlueprintName);
        if (ChatDisplayBox.IsValid()) {
            ChatDisplayBox->AddSlot()
            [
                SNew(STextBlock)
                .Text(FText::FromString(FString::Printf(TEXT("✗ Blueprint already exists: %s"), *BlueprintName)))
                .ColorAndOpacity(FLinearColor::Red)
            ];
        }
        return;
    }

    // Create blueprint - SAFE CALL
    UBlueprint* NewBlueprint = FKismetEditorUtilities::CreateBlueprint(
        ParentClass,
        Package,
        FName(*BlueprintName),
        BPTYPE_Normal,
        UBlueprintGeneratedClass::StaticClass(),
        UBlueprintGeneratedClass::StaticClass()
    );

    if (!NewBlueprint)
    {
        UE_LOG(LogAIBlueCopilotEditor, Error, TEXT("[AIBLUE] Blueprint creation failed"));
        return;
    }

    Package->MarkPackageDirty();
    NewBlueprint->MarkPackageDirty();

    FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(NewBlueprint);
    FKismetEditorUtilities::CompileBlueprint(NewBlueprint);

    FAssetRegistryModule& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
    AssetRegistry.Get().AssetCreated(NewBlueprint);

    FString PackageFilename = FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetAssetPackageExtension());
    UPackage::SavePackage(Package, NewBlueprint, RF_Standalone | RF_Public, *PackageFilename);

    UE_LOG(LogAIBlueCopilotEditor, Warning, TEXT("[AIBLUE] ✓ SAVED: %s"), *BlueprintName);

    if (ChatDisplayBox.IsValid())
    {
        ChatDisplayBox->AddSlot()
        [
            SNew(STextBlock)
            .Text(FText::FromString(FString::Printf(TEXT("✓ Created: %s"), *BlueprintName)))
            .ColorAndOpacity(FLinearColor::Green)
        ];
    }
}

// ==================== CONNECTION TEST ====================

void TestLLMStudioConnection(const FString& LLMAddress)
{
    FHttpModule* Http = &FHttpModule::Get();
    if (!Http) return;

    CurrentLLMAddress = LLMAddress;
    FString TestURL = LLMAddress;
    if (!TestURL.EndsWith(TEXT("/"))) TestURL += TEXT("/");
    TestURL += TEXT("v1/models");

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
    Request->SetURL(TestURL);
    Request->SetVerb(TEXT("GET"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

    Request->OnProcessRequestComplete().BindLambda([](FHttpRequestPtr Req, FHttpResponsePtr Response, bool bWasSuccessful)
    {
        AsyncTask(ENamedThreads::GameThread, [Response, bWasSuccessful]()
        {
            if (!bWasSuccessful || !Response.IsValid())
            {
                bConnected = false;
                ConnectionStatusMessage = TEXT("NO CONNECTION!");
            }
            else if (Response->GetResponseCode() == 200)
            {
                bConnected = true;
                ConnectionStatusMessage = TEXT("✓ Connected to LM Studio");
            }
            else
            {
                bConnected = false;
                ConnectionStatusMessage = FString::Printf(TEXT("Status: %d"), Response->GetResponseCode());
            }

            if (ConnectionStatusText.IsValid())
            {
                ConnectionStatusText->SetText(FText::FromString(ConnectionStatusMessage));
            }
        });
    });

    Request->ProcessRequest();
}

// ==================== CODE EDITOR WINDOW ====================

TSharedRef<SDockTab> SpawnAgentCodeEditorTab(const FSpawnTabArgs& Args)
{
    TSharedPtr<int32> ActiveTabIndex = MakeShareable(new int32(1)); // Terminal tab first
    TSharedPtr<SScrollBox> TerminalOutput;
    TSharedPtr<SEditableTextBox> TerminalInput;

    auto CreateTabButton = [ActiveTabIndex](const FString& TabName, int32 TabIndex) -> TSharedRef<SButton>
    {
        return SNew(SButton)
            .Text(FText::FromString(TabName))
            .ButtonColorAndOpacity_Lambda([ActiveTabIndex, TabIndex]()
            {
                return *ActiveTabIndex == TabIndex ? FSlateColor(FLinearColor::Blue) : FSlateColor(FLinearColor(0.2f, 0.2f, 0.2f));
            })
            .OnClicked_Lambda([ActiveTabIndex, TabIndex]() { *ActiveTabIndex = TabIndex; return FReply::Handled(); });
    };

    // Terminal Content
    auto TerminalContent = SNew(SVerticalBox)
        + SVerticalBox::Slot().AutoHeight().Padding(8)
        [ SNew(STextBlock).Text(FText::FromString("AIBLUE Terminal")).Font(FSlateFontInfo("Courier New", 12)).ColorAndOpacity(FLinearColor(0, 1, 0)) ]
        + SVerticalBox::Slot().AutoHeight().Padding(8)
        [ SNew(STextBlock).Text(FText::FromString("create_blueprint <name> <parent>"))
            .Font(FSlateFontInfo("Courier New", 9)).ColorAndOpacity(FLinearColor(0.7f, 0.7f, 0.7f)) ]
        + SVerticalBox::Slot().FillHeight(0.7f).Padding(8)
        [ SNew(SBorder).BorderBackgroundColor(FLinearColor::Black)
            [ SAssignNew(TerminalOutput, SScrollBox)
                + SScrollBox::Slot()
                [ SNew(STextBlock)
                    .Text(FText::FromString("Terminal Ready\n> "))
                    .Font(FSlateFontInfo("Courier New", 10))
                    .ColorAndOpacity(FLinearColor(0, 1, 0))
                ]
            ]
        ]
        + SVerticalBox::Slot().AutoHeight().Padding(8)
        [ SNew(SHorizontalBox)
            + SHorizontalBox::Slot().FillWidth(1.0f)
            [ SAssignNew(TerminalInput, SEditableTextBox)
                .HintText(FText::FromString("create_blueprint BP_Test Actor"))
                .Font(FSlateFontInfo("Courier New", 10))
            ]
            + SHorizontalBox::Slot().AutoWidth().Padding(8, 0, 0, 0)
            [ SNew(SButton)
                .Text(FText::FromString("Execute"))
                .OnClicked_Lambda([TerminalInput, TerminalOutput]() -> FReply
                {
                    if (TerminalInput.IsValid())
                    {
                        FString Cmd = TerminalInput->GetText().ToString();
                        if (Cmd.Contains(TEXT("create_blueprint")))
                        {
                            TArray<FString> Parts;
                            Cmd.ParseIntoArray(Parts, TEXT(" "));
                            if (Parts.Num() >= 3)
                            {
                                CreateBlueprint(Parts[1], Parts[2]);
                            }
                        }
                        TerminalInput->SetText(FText::GetEmpty());
                    }
                    return FReply::Handled();
                })
            ]
        ];

    return SNew(SDockTab)
        .TabRole(ETabRole::NomadTab)
        [
            SNew(SVerticalBox)
            + SVerticalBox::Slot().AutoHeight().Padding(12)
            [ SNew(STextBlock).Text(FText::FromString("AIBLUE Code Editor"))
                .Font(FSlateFontInfo("Verdana", 14))
                .ColorAndOpacity(FLinearColor(0.2f, 1.0f, 0.5f))
            ]
            + SVerticalBox::Slot().AutoHeight().Padding(12, 4, 12, 12)
            [ SNew(SHorizontalBox)
                + SHorizontalBox::Slot().AutoWidth()
                [ CreateTabButton(TEXT("Editor"), 0) ]
                + SHorizontalBox::Slot().AutoWidth().Padding(4, 0, 0, 0)
                [ CreateTabButton(TEXT("Terminal"), 1) ]
                + SHorizontalBox::Slot().AutoWidth().Padding(4, 0, 0, 0)
                [ CreateTabButton(TEXT("Reference"), 2) ]
            ]
            + SVerticalBox::Slot().FillHeight(1.0f).Padding(0)
            [ SNew(SVerticalBox)
                + SVerticalBox::Slot().FillHeight(1.0f)
                [ SNew(SBorder).Padding(12)
                    [ SNew(SEditableTextBox)
                        .HintText(FText::FromString("// Code Editor"))
                        .AllowMultiLine(true)
                    ]
                ]
                .Visibility_Lambda([ActiveTabIndex]() { return *ActiveTabIndex == 0 ? EVisibility::Visible : EVisibility::Collapsed; })
                + SVerticalBox::Slot().FillHeight(1.0f)
                [ TerminalContent ]
                .Visibility_Lambda([ActiveTabIndex]() { return *ActiveTabIndex == 1 ? EVisibility::Visible : EVisibility::Collapsed; })
                + SVerticalBox::Slot().FillHeight(1.0f)
                [ SNew(SBorder).Padding(12)
                    [ SNew(STextBlock)
                        .Text(FText::FromString("Blueprint Nodes Reference\n\nStaticMesh - 3D Model\nLight - Illumination\nSphere - Collision\nBox - Collision\n\nParents:\nActor, Pawn, Character"))
                        .Font(FSlateFontInfo("Courier New", 10))
                        .AutoWrapText(true)
                    ]
                ]
                .Visibility_Lambda([ActiveTabIndex]() { return *ActiveTabIndex == 2 ? EVisibility::Visible : EVisibility::Collapsed; })
            ]
        ];
}

// ==================== SETTINGS WINDOW ====================

void ShowSettingsMenu()
{
    TSharedPtr<SWindow> SettingsWindowPtr;
    TSharedPtr<SEditableTextBox> AddressInputBox;

    TSharedRef<SWindow> SettingsWindow = SNew(SWindow)
        .Title(FText::FromString(TEXT("AIBLUE Copilot Settings")))
        .ClientSize(FVector2D(500, 450))
        [
            SNew(SVerticalBox)
            + SVerticalBox::Slot().AutoHeight().Padding(15)
            [ SNew(STextBlock).Text(FText::FromString("LM Studio Address:")).Font(FSlateFontInfo("Verdana", 12)) ]
            + SVerticalBox::Slot().AutoHeight().Padding(15)
            [ SAssignNew(AddressInputBox, SEditableTextBox).Text(FText::FromString(CurrentLLMAddress)) ]
            + SVerticalBox::Slot().AutoHeight().Padding(15)
            [ SNew(SButton)
                .Text(FText::FromString("Test Connection"))
                .HAlign(HAlign_Center)
                .OnClicked_Lambda([AddressInputBox]()
                {
                    if (AddressInputBox.IsValid())
                        TestLLMStudioConnection(AddressInputBox->GetText().ToString());
                    return FReply::Handled();
                })
            ]
            + SVerticalBox::Slot().AutoHeight().Padding(15)
            [ SNew(STextBlock)
                .Text(FText::FromString(ConnectionStatusMessage))
                .ColorAndOpacity(bConnected ? FLinearColor::Green : FLinearColor::Red)
                .Font(FSlateFontInfo("Verdana", 11))
            ]
            + SVerticalBox::Slot().AutoHeight().Padding(15)
            [ SNew(SButton)
                .Text(FText::FromString("OPEN CODE EDITOR"))
                .HAlign(HAlign_Center)
                .ButtonColorAndOpacity(FLinearColor(0.1f, 0.5f, 1.0f))
                .OnClicked_Lambda([SettingsWindowPtr]()
                {
                    FGlobalTabmanager::Get()->TryInvokeTab(AgentCodeEditorTabName);
                    return FReply::Handled();
                })
            ]
            + SVerticalBox::Slot().FillHeight(1.0f) [ SNew(SBox) ]
            + SVerticalBox::Slot().AutoHeight().HAlign(HAlign_Right).Padding(15)
            [ SNew(SButton).Text(FText::FromString("Close"))
                .OnClicked_Lambda([SettingsWindowPtr]()
                {
                    if (SettingsWindowPtr.IsValid())
                        SettingsWindowPtr->RequestDestroyWindow();
                    return FReply::Handled();
                })
            ]
        ];

    SettingsWindowPtr = SettingsWindow;
    FSlateApplication::Get().AddWindow(SettingsWindow);
}

// ==================== MAIN UI TAB ====================

TSharedRef<SDockTab> SpawnAIBlueCopilotTab(const FSpawnTabArgs& Args)
{
    return SNew(SDockTab)
        .TabRole(ETabRole::NomadTab)
        [
            SNew(SVerticalBox)
            + SVerticalBox::Slot().AutoHeight().Padding(12)
            [ SNew(SHorizontalBox)
                + SHorizontalBox::Slot().FillWidth(1.0f)
                [ SNew(STextBlock).Text(FText::FromString("AIBLUE Copilot")).Font(FSlateFontInfo("Verdana", 14)) ]
                + SHorizontalBox::Slot().AutoWidth().Padding(4, 0, 0, 0)
                [ SNew(SButton)
                    .Text(FText::FromString("AI"))
                    .ButtonColorAndOpacity(FLinearColor(0.1f, 0.5f, 1.0f))
                    .ToolTipText(FText::FromString("Open Code Editor"))
                    .OnClicked_Lambda([]()
                    {
                        FGlobalTabmanager::Get()->TryInvokeTab(AgentCodeEditorTabName);
                        return FReply::Handled();
                    })
                ]
                + SHorizontalBox::Slot().AutoWidth().Padding(4, 0, 0, 0)
                [ SNew(SButton).Text(FText::FromString("⚙"))
                    .ToolTipText(FText::FromString("Settings"))
                    .OnClicked_Lambda([]() { ShowSettingsMenu(); return FReply::Handled(); })
                ]
            ]
            + SVerticalBox::Slot().AutoHeight().Padding(12, 0, 12, 12)
            [ SAssignNew(ConnectionStatusText, STextBlock)
                .Text(FText::FromString(ConnectionStatusMessage))
                .ColorAndOpacity(FLinearColor::Red)
            ]
            + SVerticalBox::Slot().AutoHeight().Padding(12, 0, 12, 12)
            [ SAssignNew(AgentStatusText, STextBlock)
                .Text(FText::FromString(AgentStatusMessage))
                .ColorAndOpacity(FLinearColor(0.7f, 0.7f, 0.7f))
            ]
            + SVerticalBox::Slot().AutoHeight().Padding(12, 0, 12, 12)
            [ SNew(SHorizontalBox)
                + SHorizontalBox::Slot().AutoWidth()
                [ SNew(SButton)
                    .Text(FText::FromString("Connect"))
                    .OnClicked_Lambda([]() { TestLLMStudioConnection(CurrentLLMAddress); return FReply::Handled(); })
                ]
                + SHorizontalBox::Slot().AutoWidth().Padding(8, 0, 0, 0)
                [ SNew(SButton)
                    .Text(FText::FromString("Agent"))
                    .ButtonColorAndOpacity_Lambda([]() { return bAgentMode ? FSlateColor(FLinearColor(1.0f, 0.65f, 0.0f)) : FSlateColor(FLinearColor(0.3f, 0.3f, 0.3f)); })
                    .OnClicked_Lambda([]() -> FReply
                    {
                        bAgentMode = !bAgentMode;
                        AgentStatusMessage = bAgentMode ? TEXT("Agent: ACTIVE") : TEXT("Agent: Inactive");
                        if (AgentStatusText.IsValid())
                            AgentStatusText->SetText(FText::FromString(AgentStatusMessage));
                        if (bAgentMode)
                            FGlobalTabmanager::Get()->TryInvokeTab(AgentCodeEditorTabName);
                        return FReply::Handled();
                    })
                ]
            ]
            + SVerticalBox::Slot().FillHeight(1.0f).Padding(12, 0, 12, 12)
            [ SAssignNew(ChatDisplayBox, SScrollBox) ]
            + SVerticalBox::Slot().AutoHeight().Padding(12, 0, 12, 12)
            [ SNew(SHorizontalBox)
                + SHorizontalBox::Slot().FillWidth(1.0f)
                [ SAssignNew(PromptInputBox, SEditableTextBox).HintText(FText::FromString("Enter prompt...")) ]
                + SHorizontalBox::Slot().AutoWidth().Padding(8, 0, 0, 0)
                [ SNew(SButton)
                    .Text(FText::FromString("Send"))
                    .OnClicked_Lambda([]() -> FReply
                    {
                        if (!bConnected)
                        {
                            if (ChatDisplayBox.IsValid())
                            {
                                ChatDisplayBox->AddSlot()
                                [ SNew(STextBlock).Text(FText::FromString("Error: Not connected")).ColorAndOpacity(FLinearColor::Red) ];
                            }
                            return FReply::Handled();
                        }

                        if (!PromptInputBox.IsValid() || !ChatDisplayBox.IsValid())
                        {
                            return FReply::Handled();
                        }

                        FString PromptText = PromptInputBox->GetText().ToString();
                        if (PromptText.IsEmpty())
                        {
                            return FReply::Handled();
                        }

                        // Display user prompt
                        ChatDisplayBox->AddSlot()
                        [ SNew(STextBlock).Text(FText::FromString(FString::Printf(TEXT("You: %s"), *PromptText))) ];

                        FHttpModule* Http = &FHttpModule::Get();
                        if (!Http)
                        {
                            return FReply::Handled();
                        }

                        FString RequestURL = CurrentLLMAddress;
                        if (!RequestURL.EndsWith(TEXT("/"))) RequestURL += TEXT("/");
                        RequestURL += TEXT("v1/chat/completions");

                        TSharedPtr<FJsonObject> RequestObj = MakeShareable(new FJsonObject());
                        RequestObj->SetStringField(TEXT("model"), TEXT("local-model"));

                        TArray<TSharedPtr<FJsonValue>> Messages;
                        TSharedPtr<FJsonObject> UserMsg = MakeShareable(new FJsonObject());
                        UserMsg->SetStringField(TEXT("role"), TEXT("user"));
                        UserMsg->SetStringField(TEXT("content"), PromptText);
                        Messages.Add(MakeShareable(new FJsonValueObject(UserMsg)));

                        RequestObj->SetArrayField(TEXT("messages"), Messages);
                        RequestObj->SetNumberField(TEXT("temperature"), 0.7);
                        RequestObj->SetNumberField(TEXT("max_tokens"), 300);

                        FString JsonBody;
                        TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);
                        FJsonSerializer::Serialize(RequestObj.ToSharedRef(), Writer);

                        TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
                        Request->SetURL(RequestURL);
                        Request->SetVerb(TEXT("POST"));
                        Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
                        Request->SetContentAsString(JsonBody);

                        // Capture ChatDisplayBox for the response handler
                        TSharedPtr<SScrollBox> DisplayBoxRef = ChatDisplayBox;

                        Request->OnProcessRequestComplete().BindLambda([DisplayBoxRef](FHttpRequestPtr Req, FHttpResponsePtr Response, bool bWasSuccessful)
                        {
                            AsyncTask(ENamedThreads::GameThread, [Response, bWasSuccessful, DisplayBoxRef]()
                            {
                                if (!bWasSuccessful || !Response.IsValid()) return;
                                if (!DisplayBoxRef.IsValid()) return;

                                FString ResponseBody = Response->GetContentAsString();
                                TSharedPtr<FJsonObject> ResponseObj = MakeShareable(new FJsonObject());
                                TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseBody);

                                if (FJsonSerializer::Deserialize(Reader, ResponseObj) && ResponseObj.IsValid())
                                {
                                    TArray<TSharedPtr<FJsonValue>> Choices = ResponseObj->GetArrayField(TEXT("choices"));
                                    if (Choices.Num() > 0)
                                    {
                                        TSharedPtr<FJsonObject> Choice = Choices[0]->AsObject();
                                        if (Choice.IsValid())
                                        {
                                            TSharedPtr<FJsonObject> Message = Choice->GetObjectField(TEXT("message"));
                                            if (Message.IsValid())
                                            {
                                                FString Content = Message->GetStringField(TEXT("content"));
                                                DisplayBoxRef->AddSlot()
                                                [ SNew(STextBlock)
                                                    .Text(FText::FromString(FString::Printf(TEXT("LLM: %s"), *Content)))
                                                    .AutoWrapText(true)
                                                    .ColorAndOpacity(FLinearColor(0.2f, 1.0f, 0.5f))
                                                ];
                                            }
                                        }
                                    }
                                }
                            });
                        });

                        Request->ProcessRequest();
                        PromptInputBox->SetText(FText::GetEmpty());
                        return FReply::Handled();
                    })
                ]
            ]
        ];
}

// ==================== MODULE ====================

TSharedRef<SDockTab> FAIBlueCopilotEditorModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
    return SpawnAIBlueCopilotTab(SpawnTabArgs);
}

void FAIBlueCopilotEditorModule::StartupModule()
{
    UE_LOG(LogAIBlueCopilotEditor, Warning, TEXT("[AIBLUE] Starting"));

    EnsureEasyToFindFolder();

    FGlobalTabmanager::Get()->RegisterNomadTabSpawner(AIBlueCopilotTabName, FOnSpawnTab::CreateRaw(this, &FAIBlueCopilotEditorModule::OnSpawnPluginTab))
        .SetDisplayName(FText::FromString(TEXT("AIBlue Copilot")))
        .SetTooltipText(FText::FromString(TEXT("AIBLUE Copilot")));

    FGlobalTabmanager::Get()->RegisterNomadTabSpawner(AgentCodeEditorTabName, FOnSpawnTab::CreateStatic(&SpawnAgentCodeEditorTab))
        .SetDisplayName(FText::FromString("Agent Code Editor"))
        .SetMenuType(ETabSpawnerMenuType::Enabled);

    FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
    TSharedPtr<FTabManager> TabManager = LevelEditorModule.GetLevelEditorTabManager();

    if (TabManager.IsValid())
    {
        TabManager->RegisterTabSpawner(AIBlueCopilotTabName, FOnSpawnTab::CreateRaw(this, &FAIBlueCopilotEditorModule::OnSpawnPluginTab))
            .SetDisplayName(FText::FromString(TEXT("AIBlue Copilot")));

        TabManager->TryInvokeTab(AIBlueCopilotTabName);
    }

    // Add round blue "AI" button to Copilot UI
    FGlobalTabmanager::Get()->TryInvokeTab(AIBlueCopilotTabName);
    TSharedPtr<SDockTab> CopilotTab = FGlobalTabmanager::Get()->FindExistingLiveTab(AIBlueCopilotTabName);
    if (CopilotTab.IsValid()) {
        CopilotTab->SetRightContent(
            return SNew(SDockTab)
                .TabRole(ETabRole::NomadTab)
                [
                    SNew(SBox)
                    .Padding(12)
                    [
                        SNew(SBorder)
                        .Padding(8)
                        [
                            SNew(SBox)
                            [
                                SNew(SHorizontalBox)
                                // Left column for main content
                                + SHorizontalBox::Slot()
                                .FillWidth(1.0f)
                                [
                                    SNew(SVerticalBox)
                                    // Title with Settings and AI button
                                    + SVerticalBox::Slot()
                                    .AutoHeight()
                                    .Padding(0, 0, 0, 12)
                                    [
                                        SNew(SHorizontalBox)
                                        + SHorizontalBox::Slot()
                                        .FillWidth(1.0f)
                                        .VAlign(VAlign_Center)
                                        [
                                            SNew(STextBlock)
                                            .Text(FText::FromString(TEXT("AIBLUE Copilot by Synthetic Game Labs")))
                                        ]
                                        + SHorizontalBox::Slot()
                                        .AutoWidth()
                                        .Padding(8, 0, 0, 0)
                                        [
                                            SAssignNew(SettingsButtonRef, SButton)
                                            .Text(FText::FromString(TEXT("⚙")))
                                            .ToolTipText(FText::FromString(TEXT("Settings")))
                                            .OnClicked_Lambda([](){ 
                                                ShowSettingsMenu();
                                                return FReply::Handled();
                                            })
                                        ]
                                        + SHorizontalBox::Slot()
                                        .AutoWidth()
                                        .Padding(8, 0, 0, 0)
                                        [
                                            SNew(SButton)
                                            .ButtonColorAndOpacity(FLinearColor(0.1f, 0.5f, 1.0f, 1.0f))
                                            .ContentPadding(FMargin(12))
                                            .VAlign(VAlign_Center)
                                            .HAlign(HAlign_Center)
                                            .ToolTipText(FText::FromString(TEXT("Open Code Editor")))
                                            .OnClicked_Lambda([]() {
                                                FGlobalTabmanager::Get()->TryInvokeTab(AgentCodeEditorTabName);
                                                return FReply::Handled();
                                            })
                                            [ SNew(STextBlock).Text(FText::FromString("AI")).Font(FSlateFontInfo("Verdana", 16)).ColorAndOpacity(FLinearColor::White) ]
                                        ]
                                    ]
