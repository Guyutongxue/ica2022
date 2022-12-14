# 大作业概述

## 总要求

使用 C++ 语言，编写一个计算机程序《不围棋》。

具体而言，你需要编写一个游戏程序，支持玩家和计算机进行**不围棋**棋类游戏的对弈。不围棋的规则可以参考[不围棋规则](./rule)。

可以单人完成大作业，也可以两个人合作。课程组“鼓励两人一组”，希望“程度好的同学帮助基础差一些的同学”。我们不做鼓励，对于单人完成和组队完成一视同仁。

## 目录

- [不围棋规则](./rule)
- [评分标准](./scoring)
- [关于 TUI 开发](./tui)
- [关于 GUI 开发](./gui)
- [算法提示](./algorithm)
- [Botzone 使用方法](./botzone)
- [关于 Botzone Bot](./bot)

## 我该如何开始？

### 一、了解规则

请阅读[不围棋规则](./rule)。在大致理解该棋类游戏的胜负规则后，可以前往 [Botzone 试玩](./botzone#试玩)。

### 二、简单了解评分标准

请阅读[评分标准](./scoring)，了解你的程序应该实现那些功能。

### 三、开始写代码

粗略地看，你的程序应该分为“交互部分”和“算法部分”两部分。你可以自由选择先实现哪一部分地代码。

#### 交互部分

交互部分的代码是必须要完成的。阅读评分标准后，你应当清楚这是你的主要分数来源。你可以用两种方式实现你的交互逻辑：
- 终端用户界面（Terminal User Interface）。详情请参考[关于 TUI 开发](./tui)。
- 图形用户界面（Graphic User Interface）。详情请参考[关于 GUI 开发](./gui)。

关于读盘和存盘的功能，需要用到 C++ 中的文件读写库。虽然计概课程大纲里有这个，但我不知道能不能讲得到；所以请直接看[我的教程第十章](https://learn-cpp.tk/ch10/file_io/stream.html)。不用担心，这一部分内容几乎用不到超纲语法。如果你需要用到文件删除之类的操作，可以看[这一部分](https://learn-cpp.tk/ch10/filesystem.html)。

#### 算法部分

算法部分的代码，虽然也必须要完成，但你可以在开发初期使用简单的随机算法。如果你想用一些更聪明的算法，你可以参考李戈班助教王泽钧编写的[算法提示](./algorithm)。

### 四、决定是否参加 Botzone 比赛

为了控制优秀率，以及检查算法部分的代码质量，我们将开设 Botzone 比赛。

如果你要参加比赛，你需要再写一份**单文件**代码，提交到 Botzone 平台。详细说明请参考 [Botzone 使用方法](./botzone) 和[关于 Botzone Bot](./bot)。

### 五、面测与提交代码

你需要在 2023 年 1 月 1 日 20:00 前，找谷雨助教完成“当面评测”。助教会检查你的代码，你需要回答助教关于代码和程序的问题。

面测完成后，持助教提供给你的“提交码”将简要的项目报告和源代码提交至[此收件箱](https://workspace.jianguoyun.com/inbox/collect/58f8704891db482d830562da5a46b4a3/submitv2)。我们不接受任何形式的补交，所以请务必牢记截止时间为 2023 年 1 月 1 日 20:00。

期末考试前，你可以在每星期五的上机课找助教面测，或者私信约个别的时间。期末考试后，我们将开启统一的面测时间，届时请关注相关通知。
