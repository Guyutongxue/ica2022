# 在 VS Code 中直接提交到编程网格

安装 VS Code 并安装了 GCC-兼容的编译器（如 MinGW、LLVM MinGW 或 Apple Clang 等但不含 MSVC），则可以尝试使用“编程网格” VS Code 扩展。

<iframe src="//player.bilibili.com/player.html?aid=462922846&bvid=BV11L411t7a6&cid=405885756&page=1" scrolling="no" border="0" frameborder="no" framespacing="0" allowfullscreen="true"> </iframe>

> MSVC 的支持目前暂时没有计划，工作量有点大<del>，其实就是懒得碰屎山</del>。

前往[此处](https://marketplace.visualstudio.com/items?itemName=Guyutongxue.programming-grid)安装该扩展，或者直接在 VS Code 的扩展页面搜索“编程网格”并安装。

安装好后，活动栏将显示一个“北大”图标。点击它并在左侧列表中点击“尚未登录”后的“编辑”按钮。在接下来的弹窗内输入您的北大学号和门户密码。

> 这些数据将存放在您的本地设置中，只会发送给北大统一认证（IAAA）系统。

随后，在左侧列表中点击“尚未选择课程”后的“编辑”按钮。在接下来的弹窗内输入课程连接：

```
https://programming.pku.edu.cn/course/0b0ead5e1550494cb060fca75d9e2604/
```

如无意外，扩展将显示此课程下的所有作业/考试及题目。选中其中一道题目后，便会弹出题目描述页面和文本编辑器。

![](https://z3.ax1x.com/2021/08/21/fzkPC6.png)

在右侧的文本编辑器中键入代码，并使用题目右侧的“本地”或“提交”按钮进行本地运行或提交到编程网格。

按下“样例输入”右侧的“运行”按钮即可使用样例输入本地运行您的程序。

> 本地运行需要你安装 GCC-兼容的编译器。该扩展使用的弹窗运行与 [vscch4](https://v4.vscch.tk) 的略有不同，是我比较早的时候使用的弹窗脚本，可能造成不好的用户体验，我表示很抱歉。

此扩展还提供了翻译编译错误信息为中文（仅 GCC 可用）的功能。

> 你听说过科乐美秘技吗？

<style>
iframe {
  width: 100%;
  aspect-ratio: 16 / 9;
}
</style>
