# AIBLUE Copilot - Complete API Reference

## Overview

The AIBLUE LLM Copilot is a comprehensive AI-powered development assistant for Unreal Engine 5 that integrates with LM Studio and the Qwen2.5 Coder 7B model.

## Core Classes

### 1. FLLMServiceClient

HTTP client for communicating with LM Studio API.

**Location**: `Source/AIBLUE/LLM/LLMServiceClient.h`

#### Methods

```cpp
// Initialize connection to LM Studio
void Initialize(const FString& InServerUrl = TEXT("http://localhost:1234"));

// Send a prompt and get response (asynchronous)
void SendPrompt(
    const FString& Prompt,
    FSimpleDelegate OnComplete,
    FSimpleDelegate OnError
);

// Get the last response received
const FString& GetLastResponse() const;

// Check connection status
bool IsConnected() const;

// Configure LLM parameters
void SetModelParameters(float InTemperature = 0.7f, int32 InMaxTokens = 2048);
```

#### Parameters

- **Temperature** (0.0-2.0): 
  - 0.0 = Deterministic, focused responses
  - 0.7 = Balanced (default)
  - 2.0 = Creative, varied responses

- **MaxTokens** (1-unlimited):
  - Maximum length of response
  - Default: 2048 tokens (~1500 words)

#### Example

```cpp
FLLMServiceClient LLMClient;
LLMClient.Initialize(TEXT("http://localhost:1234"));
LLMClient.SetModelParameters(0.7f, 2048);

FSimpleDelegate OnComplete = FSimpleDelegate::CreateLambda([&LLMClient]()
{
    FString Response = LLMClient.GetLastResponse();
    UE_LOG(LogTemp, Warning, TEXT("Response: %s"), *Response);
});

FSimpleDelegate OnError = FSimpleDelegate::CreateLambda([]()
{
    UE_LOG(LogTemp, Error, TEXT("LLM Error"));
});

LLMClient.SendPrompt(TEXT("Hello, how are you?"), OnComplete, OnError);
```

---

### 2. AAIBlueCopilot

Main actor managing the AI copilot functionality.

**Location**: `Source/AIBLUE/Copilot/AIBlueCopilot.h`

**Parent Class**: AActor

**Blueprintable**: Yes

#### Methods

```cpp
// Initialize the copilot
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
void InitializeCopilot(const FString& LMStudioURL = TEXT("http://localhost:1234"));

// Execute a structured command
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
void ExecuteCommand(const FCopilotCommand& Command);

// Send a conversational prompt
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
void SendPrompt(const FString& Prompt);

// Get the last response
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
FString GetCopilotResponse() const;

// Check if ready
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
bool IsCopilotReady() const;
```

#### Delegates

```cpp
// Response from copilot
UPROPERTY(BlueprintAssignable)
FOnCopilotResponse OnCopilotResponse;
// Bind: void OnResponse(const FString& Response, bool bSuccess)

// Progress updates
UPROPERTY(BlueprintAssignable)
FOnCopilotProgress OnCopilotProgress;
// Bind: void OnProgress(const FString& Message)
```

#### Command Types

```cpp
enum class ECopilotCommandType : uint8
{
    BuildScene,          // Create 3D scenes
    BuildUI,             // Create UMG interfaces
    ConvertJSON,         // JSON to blueprint conversion
    EditBlueprint,       // Modify existing blueprints
    AnalyzeArchitecture, // Analyze project structure
    GenerateCode,        // Generate C++ code
    RefactorBlueprint    // Refactor blueprints
};
```

#### Example

```cpp
AAIBlueCopilot* Copilot = GetWorld()->SpawnActor<AAIBlueCopilot>();
Copilot->InitializeCopilot();

// Bind to response
Copilot->OnCopilotResponse.AddDynamic(this, &AMyActor::OnCopilotResponse);

// Send command
FCopilotCommand Cmd;
Cmd.CommandType = ECopilotCommandType::BuildScene;
Cmd.CommandText = TEXT("Create a futuristic lab");
Copilot->ExecuteCommand(Cmd);

// Handle response
void AMyActor::OnCopilotResponse(const FString& Response, bool bSuccess)
{
    if (bSuccess)
    {
        UE_LOG(LogTemp, Warning, TEXT("Copilot: %s"), *Response);
    }
}
```

---

### 3. UProjectAnalyzer

Analyzes and caches project architecture information.

**Location**: `Source/AIBLUE/Analyzer/ProjectAnalyzer.h`

**Parent Class**: UObject

#### Methods

```cpp
// Analyze entire project
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Analyzer")
FProjectArchitecture AnalyzeProjectArchitecture();

// Get modules
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Analyzer")
TArray<FProjectModule> GetProjectModules();

// Get plugins
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Analyzer")
TArray<FString> GetProjectPlugins();

// Get architecture summary
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Analyzer")
FString GetArchitectureSummary();

// Scan content directory
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Analyzer")
TArray<FString> ScanContentDirectory(const FString& Directory = TEXT("/Game"));

// Get blueprint classes
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Analyzer")
TArray<FString> GetBlueprintClasses();
```

#### Structures

```cpp
struct FProjectModule
{
    FString ModuleName;
    FString ModulePath;
    FString ModuleType;      // "Runtime", "Editor", etc.
    TArray<FString> Dependencies;
};

struct FProjectArchitecture
{
    TArray<FProjectModule> Modules;
    TArray<FString> Plugins;
    FString ProjectName;
    FString EngineVersion;
    FString ProjectPath;
};
```

#### Example

```cpp
UProjectAnalyzer* Analyzer = NewObject<UProjectAnalyzer>();
FProjectArchitecture Architecture = Analyzer->AnalyzeProjectArchitecture();

FString Summary = Analyzer->GetArchitectureSummary();
UE_LOG(LogTemp, Warning, TEXT("Project:\n%s"), *Summary);

for (const FProjectModule& Module : Architecture.Modules)
{
    UE_LOG(LogTemp, Warning, TEXT("Module: %s (%s)"), 
        *Module.ModuleName, *Module.ModuleType);
}
```

---

### 4. UJSONToBlueprintConverter

Converts JSON specifications to blueprint assets.

**Location**: `Source/AIBLUE/Converter/JSONToBlueprintConverter.h`

**Parent Class**: UObject

#### Methods

```cpp
// Parse JSON to blueprint spec
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Converter")
FBlueprintSpec ParseJSONToBlueprintSpec(const FString& JSONContent);

// Create blueprint from JSON
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Converter")
bool CreateBlueprintFromJSON(const FString& JSONContent, const FString& AssetPath);

// Create blueprint from JSON file
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Converter")
bool CreateBlueprintFromJSONFile(const FString& FilePath, const FString& AssetPath);

// Validate JSON specification
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Converter")
bool ValidateJSONBlueprintSpec(const FString& JSONContent, FString& OutErrorMessage);

// Convert spec back to JSON
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Converter")
FString BlueprintSpecToJSON(const FBlueprintSpec& Spec);
```

#### Structures

```cpp
struct FBlueprintNodeSpec
{
    FString NodeTitle;
    FString NodeType;           // "Event", "Sequence", "BranchConditional", etc.
    TMap<FString, FString> PinData;
    TArray<FString> ConnectedNodes;
};

struct FBlueprintSpec
{
    FString BlueprintName;
    FString BasedOnClass;       // "Actor", "Character", "Pawn", "UserWidget"
    FString Description;
    TArray<FBlueprintNodeSpec> Nodes;
    TMap<FString, FString> Properties;
};
```

#### JSON Format

```json
{
    "BlueprintName": "BP_MyActor",
    "BasedOnClass": "Actor",
    "Description": "My generated actor",
    "Properties": {
        "bCanEverTick": "true",
        "Mobility": "Movable"
    },
    "Nodes": [
        {
            "Title": "Event Begin Play",
            "Type": "Event",
            "PinData": {
                "Execution": "Begin Play"
            },
            "ConnectedNodes": []
        }
    ]
}
```

#### Example

```cpp
FString JSONContent = TEXT(R"({
    "BlueprintName": "BP_Example",
    "BasedOnClass": "Actor",
    "Description": "Example blueprint",
    "Properties": {},
    "Nodes": []
})");

UJSONToBlueprintConverter* Converter = NewObject<UJSONToBlueprintConverter>();

// Validate first
FString ErrorMsg;
if (!Converter->ValidateJSONBlueprintSpec(JSONContent, ErrorMsg))
{
    UE_LOG(LogTemp, Error, TEXT("Validation failed: %s"), *ErrorMsg);
    return;
}

// Parse to spec
FBlueprintSpec Spec = Converter->ParseJSONToBlueprintSpec(JSONContent);

// Create blueprint
if (Converter->CreateBlueprintFromJSON(JSONContent, TEXT("/Game/AI/BP_Example")))
{
    UE_LOG(LogTemp, Warning, TEXT("Blueprint created successfully"));
}
```

---

### 5. UAIBlueCopilotLibrary

Convenience functions for blueprint and C++ access.

**Location**: `Source/AIBLUE/Copilot/AIBlueCopilotLibrary.h`

**Parent Class**: UBlueprintFunctionLibrary

#### Methods

```cpp
// Get or create singleton copilot
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
static AAIBlueCopilot* GetCopilotInstance(UObject* WorldContextObject);

// Build scene
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
static void BuildScene(UObject* WorldContextObject, const FString& SceneDescription);

// Build UI
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
static void BuildUI(UObject* WorldContextObject, const FString& UIDescription);

// Convert JSON to blueprint
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
static void ConvertJSONToBlueprint(UObject* WorldContextObject, 
    const FString& JSONContent, const FString& AssetPath);

// Analyze architecture
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
static void AnalyzeArchitecture(UObject* WorldContextObject);

// Refactor blueprint
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
static void RefactorBlueprint(UObject* WorldContextObject, 
    const FString& BlueprintPath, const FString& RefactoringRequest);

// Send prompt
UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
static void SendCopilotPrompt(UObject* WorldContextObject, const FString& Prompt);
```

#### Example (Blueprint-friendly)

```cpp
void AMyActor::BeginPlay()
{
    Super::BeginPlay();
    
    // Build a scene
    UAIBlueCopilotLibrary::BuildScene(GetWorld(), 
        TEXT("Create a medieval castle courtyard"));
    
    // Build UI
    UAIBlueCopilotLibrary::BuildUI(GetWorld(),
        TEXT("Create a health bar UI"));
    
    // Analyze project
    UAIBlueCopilotLibrary::AnalyzeArchitecture(GetWorld());
}
```

---

## Command Patterns

### BuildScene Command

**Purpose**: Generate 3D scene specifications

**Input Prompt Structure**:
```
Create a [style] [location] with:
- Element 1 (lighting, atmosphere details)
- Element 2 (architectural features)
- Element 3 (interactive elements)
- ...
```

**Example**:
```cpp
FCopilotCommand Cmd;
Cmd.CommandType = ECopilotCommandType::BuildScene;
Cmd.CommandText = TEXT(
    "Create a cyberpunk nightclub interior with:\n"
    "- Neon pink and blue lighting\n"
    "- Dance floor with holographic DJ booth\n"
    "- VIP lounge area\n"
    "- Bar counter\n"
    "- Atmospheric fog and particle effects"
);
Copilot->ExecuteCommand(Cmd);
```

### BuildUI Command

**Purpose**: Generate UMG interface specifications

**Input Prompt Structure**:
```
Create a [type] UI with:
- Widget 1 (position, size, styling)
- Widget 2 (interaction, binding)
- ...
```

**Example**:
```cpp
FCopilotCommand Cmd;
Cmd.CommandType = ECopilotCommandType::BuildUI;
Cmd.CommandText = TEXT(
    "Create an inventory UI with:\n"
    "- Grid layout for items\n"
    "- Item detail panel\n"
    "- Drop functionality\n"
    "- Drag and drop reordering"
);
Copilot->ExecuteCommand(Cmd);
```

### ConvertJSON Command

**Purpose**: Convert JSON to executable blueprint

**Example**:
```cpp
FCopilotCommand Cmd;
Cmd.CommandType = ECopilotCommandType::ConvertJSON;
Cmd.CommandText = jsonString;
Cmd.TargetAsset = TEXT("/Game/AI/Blueprints/BP_Generated");
Copilot->ExecuteCommand(Cmd);
```

### RefactorBlueprint Command

**Purpose**: Improve existing blueprints

**Example**:
```cpp
FCopilotCommand Cmd;
Cmd.CommandType = ECopilotCommandType::RefactorBlueprint;
Cmd.TargetAsset = TEXT("/Game/Blueprints/BP_Player");
Cmd.CommandText = TEXT(
    "Add a stamina system with:\n"
    "- Stamina depletion on sprint\n"
    "- Recovery over time\n"
    "- UI indicator"
);
Copilot->ExecuteCommand(Cmd);
```

---

## Error Handling

### Common Errors

**Connection Failed**
```cpp
if (!Copilot->IsCopilotReady())
{
    UE_LOG(LogTemp, Error, TEXT("LM Studio not connected"));
    // Retry or show user message
}
```

**Invalid JSON**
```cpp
FString ErrorMsg;
bool bValid = Converter->ValidateJSONBlueprintSpec(JSONContent, ErrorMsg);
if (!bValid)
{
    UE_LOG(LogTemp, Error, TEXT("JSON Error: %s"), *ErrorMsg);
}
```

**Command Execution**
```cpp
Copilot->OnCopilotResponse.AddDynamic(this, &AMyActor::OnResponse);

void AMyActor::OnResponse(const FString& Response, bool bSuccess)
{
    if (!bSuccess)
    {
        UE_LOG(LogTemp, Error, TEXT("Command failed: %s"), *Response);
    }
}
```

---

## Performance Considerations

### LLM Response Times
- **Simple queries**: 1-3 seconds
- **Complex scenes**: 5-15 seconds
- **Full project analysis**: 2-5 seconds

### Memory Usage
- **Qwen2.5 7B Model**: ~6GB VRAM (or CPU offload)
- **Project analyzer caching**: <1MB
- **Response buffer**: ~2MB average

### Optimization Tips

1. **Set appropriate temperature for task**
   ```cpp
   LLMClient.SetModelParameters(0.5f, 1024);  // Lower for code gen
   ```

2. **Cache analysis results**
   ```cpp
   static FProjectArchitecture CachedArch = Analyzer->AnalyzeProjectArchitecture();
   ```

3. **Batch multiple commands**
   - Combine related requests
   - Reduce round-trips

---

## Best Practices

1. **Always check connection**
   ```cpp
   if (!Copilot->IsCopilotReady()) return;
   ```

2. **Validate JSON before conversion**
   ```cpp
   FString Error;
   if (!Converter->ValidateJSONBlueprintSpec(JSON, Error))
   {
       // Handle error
   }
   ```

3. **Use descriptive prompts**
   ```cpp
   // Good
   TEXT("Create a sword with a curved blade, glowing runes, and a leather-wrapped hilt")
   
   // Bad
   TEXT("Make a sword")
   ```

4. **Bind to response delegates**
   ```cpp
   Copilot->OnCopilotResponse.AddDynamic(this, &AMyActor::OnResponse);
   ```

5. **Handle async operations**
   ```cpp
   // Don't rely on immediate response
   SendPrompt(Text);  // Async
   // Use delegate for response
   ```

---

## Future Extensions

### Adding Custom Command Types

1. Add to enum:
   ```cpp
   enum class ECopilotCommandType : uint8
   {
       // ... existing types
       MyCustomCommand
   };
   ```

2. Add handler:
   ```cpp
   void AAIBlueCopilot::HandleMyCustomCommand(const FCopilotCommand& Command)
   {
       // Implementation
   }
   ```

3. Add case in ExecuteCommand:
   ```cpp
   case ECopilotCommandType::MyCustomCommand:
       HandleMyCustomCommand(Command);
       break;
   ```

---

## Support

For issues, refer to:
- `AIBLUE_SETUP_GUIDE.md` - Setup instructions
- `Source/AIBLUE/LLM/README.md` - LLM documentation
- Example usage: `Source/AIBLUE/Examples/CopilotExampleUsage.cpp`
