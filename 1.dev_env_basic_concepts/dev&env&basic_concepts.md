# 20190614 开发环境配置&基本语法

## 开发环境配置

### 什么是开发环境

在能够开始软件开发工作前，我们必须配置好开发环境。

**开发环境**，简单地说，是代码（文本文件）可以转化为机器可执行文件的必要条件（我自己说的，这不是标准定义）。开发环境一般包括代码的编译器、依赖库，debugger/IDE（集成开发环境）。

基于不同的开发需求，我们一般采用不同的开发环境。对于**C/C++**而言，工业上比较成熟的方案是1、用visual studio；或者2、直接在cmd/terminal下进行开发。前者一般运用于开发多人合作的大型工程，标准严格，工业化程度高，例如开发操作系统，或者visual studio本身。直接在cmd/terminal下进行开发的方案一般适用于个人开发者或者开发小型工程，例如我。对于**Python**，多数人都会选择用PyCharm或者直接在cmd/terminal下进行开发，对开发环境的依赖会明显小很多。

### 怎么配置开发环境

一句话，其实最好就是上网搜索“windows C++开发环境”，或者“mac python 开发环境”这样的关键字进行搜索，然后找一个靠谱的教程一步步进行安装就行了。**在MAC**下有个很好用的app管理工具叫做`brew`，可以让开发者在命令行里快捷安装需要的组件。

#### 以C++为例配置开发环境

1. 安装MinGW，即C/C++编译器和标准库。参考[link](https://www.jianshu.com/p/e9ff7b654c4a)
2. 安装VSCode，直接搜索VSCode并安装即可。
3. 配置VSCode对C++的支持。参考[link](https://code.visualstudio.com/docs/languages/cpp)

## Hello world

第一个程序一般是在命令行输出`Hello world!`（历史遗留原因）。

编写完以后`F5`进行编译，并运行，在命令行观察到输出，说明编译成功并可以运行。

## C++ basic
