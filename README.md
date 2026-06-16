[README.md](https://github.com/user-attachments/files/29021226/README.md)
# AIBlueCopilot Plugin - Installation Package

**Version:** 1.0.0
**Developed by:** Syntheticgamelabs
**Contact:** syntheticgamelabs@gmail.com
**Engine Support:** Unreal Engine 5.3.2+

---

## What's in This Package

```
AIBlueCopilot/
??? Source/                          # Plugin source code
?   ??? AIBlueCopilot/
?       ??? Public/                  # Public headers
?       ?   ??? Copilot/
?       ?   ??? LLM/
?       ?   ??? Analyzer/
?       ??? Private/                 # Implementation files
?
??? Binaries/                        # Compiled binaries (will be generated)
??? AIBlueCopilot.uplugin           # Plugin descriptor
??? AIBlueCopilot.Build.cs          # Build configuration
??? PLUGIN_INSTALL_GUIDE.md         # Detailed installation guide
??? INSTALL_PLUGIN.bat              # Windows batch installer
??? INSTALL_PLUGIN.ps1              # PowerShell installer
```

---

## Quick Installation

### Option 1: Batch Script (Windows)

1. Open Command Prompt in this folder
2. Run: `INSTALL_PLUGIN.bat`
3. Enter your Unreal Engine project path when prompted
4. Follow the on-screen instructions

### Option 2: PowerShell Script (Windows)

1. Open PowerShell as Administrator in this folder
2. Run: `Set-ExecutionPolicy -ExecutionPolicy RemoteSigned -Scope CurrentUser`
3. Run: `.\INSTALL_PLUGIN.ps1`
4. Enter your Unreal Engine project path when prompted

### Option 3: Manual Installation

1. Copy the `AIBlueCopilot` folder
2. Navigate to your Unreal Engine project directory
3. Create a `Plugins` folder if it doesn't exist
4. Paste `AIBlueCopilot` into the `Plugins` folder
5. Right-click your `.uproject` file
6. Select "Generate Visual Studio project files"
7. Follow the build steps below

---

## Building After Installation

### Step 1: Regenerate Project Files
```
Right-click .uproject ? Generate Visual Studio project files
```

### Step 2: Build in Visual Studio
```
1. Open the generated .sln file
2. Right-click your game project (not the engine project)
3. Select "Build"
4. Wait for compilation
```

### Step 3: Open Editor
```
Double-click the .uproject file
```

### Step 4: Enable Plugin
```
1. In editor: Edit ? Plugins
2. Search for "AIBlueCopilot"
3. Check the "Enabled" checkbox
4. Restart the editor when prompted
```

---

## Configuration

### Default Settings
- **LM Studio Server:** http://192.168.8.139:1234
- **Model:** qwen2.5-coder-7b
- **Temperature:** 0.7
- **Max Tokens:** 2048

### Change Server Address
In Blueprint or C++:
```cpp
Copilot->InitializeCopilot(TEXT("http://YOUR_SERVER:1234"));
```

---

## Verification

To verify the plugin installed correctly:

1. **Plugin Enabled:** Edit ? Plugins ? Search "AIBlueCopilot" (should show enabled)
2. **Test Blueprint:** Create new Blueprint ? Search "Build Scene" (should find it)
3. **Check Output Log:** Should see connection message from copilot

---

## Troubleshooting

### Plugin Not Found
- Ensure plugin folder is in `YourProject/Plugins/AIBlueCopilot`
- Regenerate Visual Studio files
- Delete `Intermediate` and `Binaries` folders
- Rebuild from Visual Studio

### Build Errors
- Ensure UE 5.3.2 is installed
- Check all required modules are available:
  - HTTP, Json, JsonUtilities
  - AssetRegistry, AssetTools, UnrealEd
- Delete `Intermediate` folder and rebuild

### Plugin Won't Enable
- Check Editor logs for specific errors
- Ensure plugin path is correct
- Try "Refresh" in plugin manager
- Restart editor

### Can't Connect to LM Studio
- Verify LM Studio is running
- Verify Qwen2.5 model is loaded
- Check IP and port are correct
- Verify network connectivity

---

## System Requirements

**Hardware:**
- 8 GB RAM minimum
- 20 GB disk space for plugin + compiled binaries
- Stable network connection to LM Studio

**Software:**
- Unreal Engine 5.3.2 or later
- Visual Studio 2022 (for compilation)
- LM Studio (on same network)
- Windows 10/11 (other platforms may work)

---

## Included Files

### Installation Scripts
- `INSTALL_PLUGIN.bat` - Windows batch installer
- `INSTALL_PLUGIN.ps1` - PowerShell installer

### Documentation
- `PLUGIN_INSTALL_GUIDE.md` - Complete installation and usage guide
- `AIBlueCopilot.uplugin` - Plugin metadata descriptor

### Source Code
- `Source/AIBlueCopilot/` - Complete plugin source code

---

## Support

**Email:** syntheticgamelabs@gmail.com
**Project:** AIBlueCopilot for Unreal Engine 5.3
**Status:** Production Ready

For detailed information, see `PLUGIN_INSTALL_GUIDE.md`

---

## Legal

� 2024 Syntheticgamelabs. All Rights Reserved.

This plugin is proprietary software. Unauthorized copying, modification, or distribution is prohibited.

See copyright notice in plugin files for full details.
