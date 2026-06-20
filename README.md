<img width="1919" height="1079" alt="Screenshot 2026-06-20 235240" src="https://github.com/user-attachments/assets/48b8f546-f15f-4fa5-9b32-deba6ed00125" />
# AIBlueCopilot

Simply copy into your Unreal Plugin folder and Restart you Unreaeal Editor 5.3.2 Only

[![Unreal Engine](https://unrealengine.com)
[![License: MIT](https://opensource.org)
[![Status: Open Source Alpha](https://github.com)

An innovative, pioneering, and **100% offline, local-first AI coding assistant** built directly for the Unreal Engine 5.3 editor. Connect your local environment to open-source Large Language Models (LLMs) via LM Studio to get unlimited, secure, and private AI assistance for C++ and Blueprints—with **zero subscription fees** and **zero data leaks**.

---
https://youtu.be/QnW2T3M1v74
## ⚡ Quick Start: Zero Compilation Needed!

You do not need to be a C++ developer to use this plugin. We provide a pre-compiled, drop-in version ready for production.

1. **Download the Pre-Compiled Release**: [Download the AIBlueCopilot.zip here](#) *(Replace with your actual link once uploaded)*.
2. **Install**: Extract the folder directly into your project's `Plugins/` directory (e.g., `YourProject/Plugins/AIBlueCopilot/`).
3. **Launch**: Open your Unreal Engine 5.3.2 project. The plugin is active and ready to go!

---

## 🔒 Why AIBlueCopilot?

### 1. 100% Air-Gapped Data Privacy
Game intellectual property (IP) is highly sensitive. Standard cloud-based AI tools upload your unannounced game mechanics, proprietary C++ logic, and narrative scripts to external servers. **AIBlueCopilot operates entirely on your local machine.** Your code never leaves your local network.

### 2. Zero-Cost Infinity Tokens
Commercial marketplace plugins often demand expensive monthly subscriptions or pay-per-token API fees. By leveraging local LLMs, AIBlueCopilot gives you infinite AI generation for the cost of your computer's electricity.

### 3. Native Editor Integration
Unlike standard IDE extensions (like VS Code or Visual Studio) that are blind to the Unreal interface, AIBlueCopilot features an active **Context Analyzer** built to read editor contexts, selected code blocks, and Blueprint logic metadata natively.

---

## 📜 The Backstory: Built Out of Necessity

AIBlueCopilot was conceptualised and built over a year ago. At the time of development, GitHub Copilot had completely ignored native Unreal Engine Editor integration, and the only options available on the Fab/Marketplace required predatory monthly fees. 

Originally built as a personal workflow hack to protect independent game IP while maintaining rapid prototyping speeds, the tool was open-sourced after discovering it had quietly become an essential daily driver for developers on active game projects. It represents an early, pioneering step toward localized, secure AI game development.

---

## 🛠️ How It Works & System Architecture

AIBlueCopilot acts as a secure bridge between your Unreal Editor lifecycle and a local inference server.

[ Unreal Engine 5 Editor ]│▼ (Local HTTP / JSON Utilities)[ Local Machine / Network ] ──► [ LM Studio Server ] ──► [ Local LLM (e.g., Qwen2.5-Coder) ]

*   **`Copilot/` Subsystem**: Manages the API session lifecycle, dynamic prompt construction, and streaming JSON packet data.
*   **`LLM/` Subsystem**: Exposes full local control over generation parameters (Temperature, Max Tokens, Endpoints) to tweak AI creativity.
*   **`Analyzer/` Subsystem**: Natively hooks into active editor buffers and selection contexts to feed accurate situational data to the model.

### Recommended Local Setup
Optimized out of the box for the industry-leading **`qwen2.5-coder-7b`** model running via **LM Studio** (Defaulting to port `1234`).
*   **Minimum Specs**: 8 GB RAM (if offloading heavily to GPU).
*   **Recommended Specs**: Dedicated NVIDIA GPU with **8GB–12GB+ VRAM** for fast, real-time code streaming.

---

## 🏗️ Manual Installation (For Source Projects)

If you prefer to modify the source code or compile the plugin yourself:

1. Clone this repository into your project's `Plugins/` folder:
   ```bash
   git clone https://github.com
   ```
2. Right-click your project’s `.uproject` file and select **Generate Visual Studio project files**.
3. Open your `.sln` file and build your project in your preferred IDE.

---

## 📈 Roadmap & Contributing

This project is moving from a proven personal utility into a community-driven open-source tool. Future roadmap goals include:
*   [ ] Upgrading and testing modules for **UE 5.4** and **UE 5.5** compatibility layers.
*   [ ] Integrating a custom docked Chat Tab directly inside the Unreal Editor UI.
*   [ ] Enhancing deep structural parsing for graphical Blueprint Nodes.

Contributions, bug reports, and feature requests are welcome! Feel free to open an Issue or submit a Pull Request.

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

