## 命令行添加环境变量
To add C:\Users\10482\.local\bin to your PATH, either restart your shell or run:  

        set Path=C:\Users\10482\.local\bin;%Path% (cmd)  
        $env: Path = "C:\Users\10482\.local\bin; $env:Path" (powershell)  

![命令行添加环境变量](./images/tips_docs/1.png)
