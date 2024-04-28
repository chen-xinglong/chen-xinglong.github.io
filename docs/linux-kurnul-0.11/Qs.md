记录学习《linux内核完全注释v3.0》遇到的问题及解决方法。

ubuntu版本：ubuntu-22.04.4-desktop-amd64

# 1. 使用“cat /proc/ioports”命令无法显示地址

![alt text](image.png)

地址都为0  

![alt text](image-1.png)  
获取root权限后，方可查询io接口地址。  
参考：1.[https://blog.csdn.net/qq_44721831/article/details/108893248](https://blog.csdn.net/qq_44721831/article/details/108893248)  
2.[Ubuntu获取root权限](https://blog.csdn.net/qq_44721831/article/details/108893248)

