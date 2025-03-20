## 命令行添加环境变量
To add C:\Users\10482\.local\bin to your PATH, either restart your shell or run:  

        set Path=C:\Users\10482\.local\bin;%Path% (cmd)  
        $env: Path = "C:\Users\10482\.local\bin; $env:Path" (powershell)  

![命令行添加环境变量](./images/tips_docs/1.png)

## [python使用（[faster-whisper 语音转文字、字幕](https://github.com/SYSTRAN/faster-whisper)）](./tips/faster_whisper.md)


## x86_64汇编语言浅析 & GCC-Inline-Assembly-HOWTO（C语言嵌入汇编）

[https://www.cnblogs.com/wsg1100/p/14290340.html](https://www.cnblogs.com/wsg1100/p/14290340.html) x86_64汇编语言浅析

[GCC-Inline-Assembly-HOWTO](https://www.ibiblio.org/gferg/ldp/GCC-Inline-Assembly-HOWTO.html)

[as汇编器手册](https://sourceware.org/binutils/docs/as/index.html)

[插入汇编成功的c程序代码(示例)](./tips/main.c) 汇编程序代码需要在一行内。使用`gcc -S main.c -o main.s` 或`gcc -S -masm=intel main.c -o main.s`编译C语言生成汇编语言

## 为什么x86_64汇编后的汇编代码中，在main标签中会有call __main 这个指令？？deepseek说是为了处理静态的全局变量，函数之类的。

![汇编后的main函数](./images/tips_docs/2.png)

## 虚拟机如何使用主机的VPN网络

[虚拟机通过网络代理使用主机的VPN网络](https://blog.csdn.net/qq_27462573/article/details/130484723)