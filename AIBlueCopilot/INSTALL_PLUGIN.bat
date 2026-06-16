@echo off
REM Copyright Syntheticgamelabs. All Rights Reserved.
REM AIBlueCopilot Plugin Installation Script
REM This script installs the AIBlueCopilot plugin into any Unreal Engine 5.3.2 project

setlocal enabledelayedexpansion

echo ============================================================
echo  AIBlueCopilot Plugin Installer v1.0
echo  Developed by Syntheticgamelabs
echo  Contact: syntheticgamelabs@gmail.com
echo ============================================================
echo.

REM Check if running from correct directory
if not exist "AIBlueCopilot" (
    echo ERROR: AIBlueCopilot folder not found!
    echo This script must be run from the directory containing AIBlueCopilot folder.
    pause
    exit /b 1
)

echo.
echo Installation Steps:
echo 1. Find your Unreal Engine 5.3.2 project
echo 2. This script will copy AIBlueCopilot to your project's Plugins folder
echo.

REM Get project path from user
set /p PROJECT_PATH="Enter your Unreal Engine project path (e.g., C:\Users\YourName\Documents\Unreal Projects\MyProject): "

if not exist "!PROJECT_PATH!" (
    echo ERROR: Project path does not exist!
    echo Path: !PROJECT_PATH!
    pause
    exit /b 1
)

if not exist "!PROJECT_PATH!\*.uproject" (
    echo ERROR: .uproject file not found in project directory!
    echo Please ensure you entered the correct project path.
    pause
    exit /b 1
)

REM Create Plugins directory if it doesn't exist
if not exist "!PROJECT_PATH!\Plugins" (
    echo Creating Plugins directory...
    mkdir "!PROJECT_PATH!\Plugins"
)

REM Copy plugin files
echo.
echo Copying AIBlueCopilot plugin files...
xcopy "AIBlueCopilot" "!PROJECT_PATH!\Plugins\AIBlueCopilot" /E /I /Y

if !errorlevel! neq 0 (
    echo ERROR: Failed to copy plugin files!
    pause
    exit /b 1
)

echo.
echo ============================================================
echo Installation Complete!
echo ============================================================
echo.
echo Next Steps:
echo 1. Close Unreal Engine editor if it's open
echo 2. Go to: !PROJECT_PATH!
echo 3. Right-click the .uproject file
echo 4. Select "Generate Visual Studio project files"
echo 5. Open the .sln file in Visual Studio 2022
echo 6. Right-click your game project and select "Build"
echo 7. Double-click the .uproject to open the editor
echo 8. In editor: Edit Menu ^> Plugins ^> Search "AIBlueCopilot" ^> Enable
echo 9. Restart the editor
echo.
echo Configuration:
echo - LM Studio URL: http://192.168.8.139:1234 (default)
echo - Model: qwen2.5-coder-7b
echo.
echo For more information, see PLUGIN_INSTALL_GUIDE.md
echo.
pause
