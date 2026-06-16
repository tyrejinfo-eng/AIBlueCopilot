# AIBlueCopilot Plugin - Installation & Usage Guide

**Developed by:** Syntheticgamelabs
**Contact:** syntheticgamelabs@gmail.com
**Version:** 1.0.0
**Engine:** Unreal Engine 5.3.2+
**License:** Proprietary - © 2024 Syntheticgamelabs

---

## Quick Start

### Prerequisites
1. **Unreal Engine 5.3.2** or later
2. **LM Studio** running on your network
3. **Qwen2.5 Coder 7B Model** loaded in LM Studio

### Installation

1. **Copy Plugin Files**
   - Copy the `AIBlueCopilot` folder to your project's `Plugins` directory
   - If no `Plugins` folder exists, create one at the project root level

2. **Regenerate Project**
   - Right-click your `.uproject` file
   - Select "Generate Visual Studio project files"
   - Reopen the solution in Visual Studio

3. **Build Project**
   - In Visual Studio, right-click your game project
   - Select "Build"
   - Wait for compilation to complete

4. **Open Editor**
   - Double-click your `.uproject` file
   - Let the editor compile shaders and load

5. **Enable Plugin**
   - In the editor: Edit ? Plugins
   - Search for "AIBlueCopilot"
   - Check the "Enabled" checkbox
   - Restart the editor

---

## Configuration

### Connect to Your LLM Server

1. **In Blueprint**
   - Create an actor or game mode blueprint
   - Add event (e.g., Event Begin Play)
   - Search for "Get Copilot Instance"
   - Add node: "Initialize Copilot"
   - Set the LM Studio URL (default: `http://192.168.8.139:1234`)

2. **In C++**
   ```cpp
   #include "Copilot/AIBlueCopilot.h"
   
   void AMyActor::BeginPlay()
   {
       Super::BeginPlay();
       
       AAIBlueCopilot* Copilot = GetWorld()->SpawnActor<AAIBlueCopilot>();
       Copilot->InitializeCopilot(TEXT("http://192.168.8.139:1234"));
   }
   ```

---

## Usage

### Blueprint Usage

#### Place Copilot Actor
1. In your level, click "+ Add" in the Outliner
2. Search for "AIBlueCopilot"
3. Place the actor in your level
4. The actor auto-initializes on BeginPlay

#### Execute Commands

**Build a Scene:**
```
Get Copilot Instance ? Build Scene
```

**Build a UI:**
```
Get Copilot Instance ? Build UI
```

**Analyze Architecture:**
```
Get Copilot Instance ? Analyze Architecture
```

**Send Custom Prompt:**
```
Get Copilot Instance ? Send Custom Prompt
```

### C++ Usage

```cpp
#include "Copilot/AIBlueCopilotLibrary.h"

void AMyGameMode::BeginPlay()
{
    Super::BeginPlay();
    
    // Get copilot instance
    AAIBlueCopilot* Copilot = UAIBlueCopilotLibrary::GetCopilotInstance(GetWorld());
    
    // Build a scene
    FCopilotCommand Command;
    Command.CommandType = ECopilotCommandType::BuildScene;
    Command.CommandText = TEXT("Create a sci-fi interior with neon lighting");
    Copilot->ExecuteCommand(Command);
}
```

---

## Command Types

### BuildScene
Generates detailed blueprint specifications for scene creation.
- Input: Natural language description of the scene
- Output: JSON blueprint specification

### BuildUI
Generates UMG widget specifications.
- Input: Description of UI layout and elements
- Output: Widget hierarchy and properties

### ConvertJSON
Converts JSON specifications to blueprint instructions.
- Input: JSON specification file
- Output: Step-by-step blueprint creation guide

### EditBlueprint
Modifies existing blueprints.
- Input: Blueprint path and modification request
- Output: Refactoring instructions

### AnalyzeArchitecture
Analyzes project structure and provides recommendations.
- Input: Optional specific analysis request
- Output: Architecture analysis and recommendations

### GenerateCode
Generates C++ code from specifications.
- Input: Code specification
- Output: Well-formatted C++ code

### RefactorBlueprint
Refactors existing blueprints conversationally.
- Input: Blueprint path and refactoring request
- Output: Optimization recommendations

---

## Event Handling

### OnCopilotResponse
Fired when the LLM responds to a prompt.

```cpp
void AMyActor::SetupCopilotEvents()
{
    AAIBlueCopilot* Copilot = GetCopilotInstance();
    if (Copilot)
    {
        Copilot->OnCopilotResponse.AddDynamic(this, &AMyActor::OnCopilotResponse);
    }
}

void AMyActor::OnCopilotResponse(const FString& Response, bool bSuccess)
{
    if (bSuccess)
    {
        UE_LOG(LogTemp, Warning, TEXT("Copilot Response: %s"), *Response);
    }
}
```

### OnCopilotProgress
Fired during copilot operations for status updates.

```cpp
Copilot->OnCopilotProgress.AddDynamic(this, &AMyActor::OnCopilotProgress);

void AMyActor::OnCopilotProgress(const FString& Message)
{
    UE_LOG(LogTemp, Log, TEXT("Progress: %s"), *Message);
}
```

---

## Troubleshooting

### Connection Issues
**Problem:** Copilot can't connect to LM Studio
**Solution:**
1. Verify LM Studio is running
2. Verify Qwen2.5 model is loaded (check LM Studio status)
3. Check the correct IP and port
4. Verify network connectivity

### Plugin Not Loading
**Problem:** Plugin doesn't appear in editor
**Solution:**
1. Close editor completely
2. Delete `Intermediate`, `Binaries`, `Saved` folders
3. Right-click `.uproject` ? "Generate Visual Studio project files"
4. Rebuild in Visual Studio
5. Reopen editor

### No Response from LLM
**Problem:** Copilot sends prompt but gets no response
**Solution:**
1. Check LM Studio for errors in its console
2. Verify the model isn't busy processing another request
3. Try a simpler prompt
4. Check system resources (CPU, VRAM)

### Compilation Errors
**Problem:** Build fails with module errors
**Solution:**
1. Ensure all required modules are listed in `AIBlueCopilot.Build.cs`:
   - Core, CoreUObject, Engine
   - HTTP, Json, JsonUtilities
   - AssetRegistry, AssetTools, UnrealEd

---

## API Reference

### AAIBlueCopilot Class

**Functions:**
```cpp
void InitializeCopilot(const FString& LMStudioURL);
void ExecuteCommand(const FCopilotCommand& Command);
void SendPrompt(const FString& Prompt);
FString GetCopilotResponse() const;
bool IsCopilotReady() const;
```

**Delegates:**
```cpp
FOnCopilotResponse OnCopilotResponse;
FOnCopilotProgress OnCopilotProgress;
```

### UAIBlueCopilotLibrary Class

**Static Functions:**
```cpp
static AAIBlueCopilot* GetCopilotInstance(UObject* WorldContextObject);
static void BuildScene(UObject* WorldContextObject, const FString& SceneDescription);
static void BuildUI(UObject* WorldContextObject, const FString& UIDescription);
static void AnalyzeArchitecture(UObject* WorldContextObject);
static void RefactorBlueprint(UObject* WorldContextObject, const FString& BlueprintPath, const FString& RefactoringRequest);
static void SendCustomPrompt(UObject* WorldContextObject, const FString& Prompt);
static bool IsCopilotReady(UObject* WorldContextObject);
static FString GetLastResponse(UObject* WorldContextObject);
```

### UProjectAnalyzer Class

**Functions:**
```cpp
FProjectArchitecture AnalyzeProjectArchitecture();
TArray<FProjectModule> GetProjectModules();
TArray<FString> GetProjectPlugins();
FString GetArchitectureSummary();
TArray<FString> ScanContentDirectory(const FString& Directory);
TArray<FString> GetBlueprintClasses();
```

---

## Configuration Options

### LM Studio Settings
- Default URL: `http://192.168.8.139:1234`
- Model: `qwen2.5-coder-7b`
- Temperature: 0.7 (balanced)
- Max Tokens: 2048

### Modify Settings
```cpp
Copilot->LLMClient.SetModelParameters(0.5f, 4096);  // Lower temperature, more tokens
```

---

## Examples

### Example 1: Simple Scene Generation
```cpp
void AMyGameMode::GenerateScene()
{
    AAIBlueCopilot* Copilot = UAIBlueCopilotLibrary::GetCopilotInstance(GetWorld());
    
    FCopilotCommand Command;
    Command.CommandType = ECopilotCommandType::BuildScene;
    Command.CommandText = TEXT("Create a futuristic space station interior with blue LED lighting and metal structures");
    
    Copilot->OnCopilotResponse.AddDynamic(this, &AMyGameMode::OnSceneGenerated);
    Copilot->ExecuteCommand(Command);
}

void AMyGameMode::OnSceneGenerated(const FString& Response, bool bSuccess)
{
    if (bSuccess)
    {
        UE_LOG(LogTemp, Warning, TEXT("Scene spec generated!"));
        // Parse JSON and create assets
    }
}
```

### Example 2: UI Generation
```cpp
void AHUDManager::GenerateUI()
{
    UAIBlueCopilotLibrary::BuildUI(GetWorld(), 
        TEXT("Create a main menu UI with Start, Settings, and Quit buttons. Use dark blue theme with neon accents."));
}
```

### Example 3: Architecture Analysis
```cpp
void AAnalysisManager::AnalyzeProject()
{
    UAIBlueCopilotLibrary::AnalyzeArchitecture(GetWorld());
}
```

---

## Performance Considerations

1. **Response Time:** LLM responses typically take 3-15 seconds
2. **Memory:** Plugin uses ~50MB for HTTP connections
3. **Network:** Requires stable connection to LM Studio
4. **CPU:** Minimal impact; most processing done on LM Studio server

---

## Support & Contact

**Email:** syntheticgamelabs@gmail.com
**Project:** AIBLUE Copilot for Unreal Engine 5.3
**Status:** Production Ready

For issues or questions, contact Syntheticgamelabs.

---

## Legal

© 2024 Syntheticgamelabs. All Rights Reserved.

This plugin is proprietary software. Unauthorized copying, modification, or distribution is prohibited.

Third-party components:
- Unreal Engine 5.3.2 (Epic Games, Inc.)
- Qwen2.5 Coder 7B (Alibaba Cloud)
- LM Studio (LM Studio Team)
