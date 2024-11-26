# vmware虚拟机ubuntu16.04系统安装使用vmware-tools


参考：[知乎-如何在VMware虚拟机中手动安装VMware tools（在虚拟机选项卡是灰色的情况下）](https://zhuanlan.zhihu.com/p/687568730)   


1. 找到安装VMware软件的位置，对应的文件加下又一个linux.iso的文件，这个实际上就是对应的VMware tools的软件包。（我是linux系统，所以选择linux.iso）  
2. 手动添加镜像文件到虚拟机的光盘，并把光盘挂载到虚拟机上。注意要勾选已连接，否则载入检测不到光盘选择对应系统的镜像文件。  
3. 进入虚拟机，手动挂载光盘到虚拟机上。

'sudo mount /dev/sr0 /mnt/ '

4. 把VMware tools.xxx.tar.gz压缩包cp到自己的文件夹下，使用tar命令解压 （有时候虚拟机的空间会显示不够，需要手动挂载一个新的硬盘，发现有时候虚拟机不会自动把设置的所有硬盘都挂载，如果不在安装ubuntu的时候设置的话。挂载硬盘请参考Linux下的磁盘管理之LVM详解及lvm的常用磁盘操作命令_lvm命令-CSDN博客）

'tar -xzvf VMware tools.xxx.tar.gz'

5. 解压之后出现一个vmware-tools-distrib文件夹，进入文件夹，执行安装命令。安装最后一步的时候，问是否要卸载，要写no，其他默认就可以（这个安装有点大病，和卸载绑定，要是一不小心yes，就重新来）

'sudo ./vmware-install.pl'

6. 安装好VMtools，配置一下共享文件夹和虚拟机。 选择共享文件夹右击属性，设置为共享虚拟机中设置共享文件夹启用，选择对应文件夹  
7. 接下来把挂载的光盘卸下来，在/mnt/hgfs/文件夹下就可以看到共享的文件夹。如果不行重启一下虚拟机。

'umount /mnt/ #卸载光盘'


