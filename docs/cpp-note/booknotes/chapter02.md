# 第二章 开始学习 C++

## 函数头
### 一般都使用main()作为开始函数
```
int main()
{
    return 0;
}
```
### 动态链接库(DLL)
DLL模块不是独立的程序，所以不需要main()。用于专用环境的程序--如机器人中的控制器芯片--可能不需要main()。 
### C++预处理器和iostream文件

### 名称空间
`using namespace std;`在大型项目，有多个命名空间的项目里可能会有问题。  

使用`using std:cout;`之类的