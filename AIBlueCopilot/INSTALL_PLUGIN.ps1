# Copyright Syntheticgamelabs. All Rights Reserved.
# AIBlueCopilot Plugin Installation Script (PowerShell)
# This script installs the AIBlueCopilot plugin into any Unreal Engine 5.3.2 project

param(
    [string]$ProjectPath
)

Write-Host "============================================================"
Write-Host " AIBlueCopilot Plugin Installer v1.0"
Write-Host " Developed by Syntheticgamelabs"
Write-Host " Contact: syntheticgamelabs@gmail.com"
Write-Host "============================================================"
Write-Host ""

# Check if AIBlueCopilot folder exists
if (-not (Test-Path "AIBlueCopilot")) {
    Write-Host "ERROR: AIBlueCopilot folder not found!" -ForegroundColor Red
    Write-Host "This script must be run from the directory containing AIBlueCopilot folder."
    exit 1
}

# If project path not provided, ask for it
if ([string]::IsNullOrEmpty($ProjectPath)) {
    Write-Host "Enter your Unreal Engine project path:"
    Write-Host "Example: C:\Users\YourName\Documents\Unreal Projects\MyProject"
    $ProjectPath = Read-Host "Project Path"
}

# Validate project path
if (-not (Test-Path $ProjectPath)) {
    Write-Host "ERROR: Project path does not exist!" -ForegroundColor Red
    Write-Host "Path: $ProjectPath"
    exit 1
}

# Check for .uproject file
$uprojects = Get-ChildItem -Path $ProjectPath -Filter "*.uproject" -ErrorAction SilentlyContinue
if ($uprojects.Count -eq 0) {
    Write-Host "ERROR: .uproject file not found in project directory!" -ForegroundColor Red
    Write-Host "Please ensure you entered the correct project path."
    exit 1
}

# Create Plugins directory if it doesn't exist
$PluginsPath = Join-Path $ProjectPath "Plugins"
if (-not (Test-Path $PluginsPath)) {
    Write-Host "Creating Plugins directory..."
    New-Item -ItemType Directory -Path $PluginsPath | Out-Null
}

# Copy plugin files
Write-Host ""
Write-Host "Copying AIBlueCopilot plugin files..."
$SourcePath = "AIBlueCopilot"
$DestPath = Join-Path $PluginsPath "AIBlueCopilot"

Copy-Item -Path $SourcePath -Destination $DestPath -Recurse -Force -ErrorAction Stop

if ($?) {
    Write-Host ""
    Write-Host "============================================================"
    Write-Host "Installation Complete!" -ForegroundColor Green
    Write-Host "============================================================"
    Write-Host ""
    Write-Host "Next Steps:"
    Write-Host "1. Close Unreal Engine editor if it's open"
    Write-Host "2. Go to: $ProjectPath"
    Write-Host "3. Right-click the .uproject file"
    Write-Host "4. Select 'Generate Visual Studio project files'"
    Write-Host "5. Open the .sln file in Visual Studio 2022"
    Write-Host "6. Right-click your game project and select 'Build'"
    Write-Host "7. Double-click the .uproject to open the editor"
    Write-Host "8. In editor: Edit Menu > Plugins > Search 'AIBlueCopilot' > Enable"
    Write-Host "9. Restart the editor"
    Write-Host ""
    Write-Host "Configuration:"
    Write-Host "- LM Studio URL: http://192.168.8.139:1234 (default)"
    Write-Host "- Model: qwen2.5-coder-7b"
    Write-Host ""
    Write-Host "For more information, see PLUGIN_INSTALL_GUIDE.md"
} else {
    Write-Host "ERROR: Failed to copy plugin files!" -ForegroundColor Red
    exit 1
}
