# Visual Studio 单文件开发

Visual Studio 被誉为“宇宙第一 IDE”不是没有道理，它在项目、工程上非常好用。但将它用作初学感觉就像“大炮打蚊子”，反倒略费力气。

## 操作步骤

首先请前往 [Visual Studio 官方网站](https://visualstudio.microsoft.com/zh-hans/vs/) 获取 Visual Studio。其中，Visual Studio 2022 Community 是面向个人的免费版本。下载并启动安装程序后，你需要勾选“使用 C++的桌面工具开发”这一工作负载，然后点击右下角安装。安装时间可能较长，需要耐心等待。

安装完成后，你可以从开始菜单启动 Visual Studio。

1. 启动后，选择“创建新项目”；
2. 筛选语言为“C++”，平台为“Windows”，选择“空项目（使用 C++ for Windows 从头开始操作。不提供基础文件。）选项，随后点击下一步；
3. 确认这个项目存放的目录位置和项目名称。这里项目名称可以写任何你喜欢的名字。点击创建以继续；
4. 注意到目前打开界面中有一个“解决方案资源管理器”的子窗口。其中有一个名为“源文件”的文件夹。鼠标右键，添加 -> 新建项，修改名称为 main.cpp，添加。现在你拥有了一个 C++ 文件；
5. Visual Studio 可能已经为你打开了这个文件。如果没有，请在解决方案资源管理器中双击打开它。现在你可以书写代码了。

代码写好后，点击上方带有绿色三角的“本地 Windows 调试器”按钮。如果一切无误，您将看到一个黑底白字的弹窗，这就是你编译出来的程序了，你可以在这里进行输入输出。

## 注意事项

特别强调，你每次想写一份新的代码时，必须将**上述五个步骤完整地、从头重复一遍**。换而言之：

- **不能**直接在当前项目下添加“源文件”，这会导致 main 函数重复定义等问题；
- **不能**直接在左上角文件-新建，这回导致新建的代码不会被编译；

如果你太懒的话，你可以在当前项目下添加“源文件”（即重复上述第 4 - 5 步），但你需要**将原有的代码完全删除或释注掉**。

> 具体来讲，在 VS 中每个项目只会编译出一个可执行文件；即便它有很多个源文件。因此，如果你两份源文件都包含 main 函数，那么就会导致同一个程序有两个入口点，然后链接器就会给出烦人的错误。


## 常见问题

### Mac 下能用 Visual Studio 吗？

结论说前面：或许可以，但我非常不建议。Visual Studio 开发 C++ 用的是 Windows 独有的编译器“Microsoft Visual C++”（简称 MSVC）。

如果你的 Mac 是 Intel 芯片（x64 架构）的，则你可以安装一个 Windows 系统的虚拟机，或者用 Boot Camp 安装一个 Windows 系统，然后你就能用 VS 了。

如果你的 Mac 是 Apple 芯片（aarch64 架构）的，那么对不起，没辙。

你可能听说过 Visual Studio for Mac，但那个是用来开发 .NET（编程语言是 C# 和 F#）的，不是 C++ 的 IDE。

### 无法使用 `std::scanf`

微软在推销它的“安全标准库”，所以默认禁用了一些它认为不安全的东西，比如 `std::scanf`。解决办法是：在源代码的**最**开头（在所有的 `#include` 之前）添加如下宏定义：

```cpp
#define _CRT_SECURE_NO_WARNINGS
```