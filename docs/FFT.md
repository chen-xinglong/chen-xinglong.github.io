# FFT 快速傅里叶变换

[markdown使用LaTeX语法编写数学公式 https://blog.csdn.net/wzk4869/article/details/126863936](https://blog.csdn.net/wzk4869/article/details/126863936)

[傅里叶变换 https://www.bilibili.com/video/BV1Et411R78v/](https://www.bilibili.com/video/BV1Et411R78v/)

[https://oi-wiki.org/math/poly/fft/](https://oi-wiki.org/math/poly/fft/)  

[https://blog.csdn.net/Flag_z/article/details/99163939](https://blog.csdn.net/Flag_z/article/details/99163939)   

[https://zhuanlan.zhihu.com/p/150815207](https://zhuanlan.zhihu.com/p/150815207)  

[https://github.com/DUTFangXiang/FFT](https://github.com/DUTFangXiang/FFT)

[https://www.zhihu.com/tardis/zm/art/138531346](https://www.zhihu.com/tardis/zm/art/138531346)

## 1. FT 傅里叶变换

参考： [傅里叶变换 https://www.bilibili.com/video/BV1Et411R78v/](https://www.bilibili.com/video/BV1Et411R78v/)  

### 1. 周期为T的傅里叶变换

### 2. 非周期函数（周期T为无穷大）的傅里叶变换

$F(\omega)=\int_{-\infty}^{\infty} f(t) e^{-j \omega t} d t$  

$e^{-j \omega t}=\cos(\omega t)-j\sin(\omega t)$

## 2. DFT 离散傅里叶变换

$X_k=\sum_{n=0}^{N-1}x_ne^{-i \frac{2 \pi n}{N} k},k=0,1,...,N-1$

在DFT中，$x_n$对应于$f(t)$

## 3. FFT 快速傅里叶变换

### 1. FFT公式

### 2. 递归实现FFT

### 3. 递推实现FFT（变址运算、蝶形变换）

### 4. 计算结果含义

### 5. IFFT 逆快速傅里叶变换


## others

### $Ib=-Ia-Ic$

对于三相对称正弦电流

$$
Ia=\sin(100 \pi t)
Ic=\sin(100 \pi t - \frac{2\pi}{3})
$$

有

$$
Ib=-Ia-Ic
=-\sin(100 \pi t)-\sin(100 \pi t - \frac{2\pi}{3})
=\sin(100 \pi t + \frac{2\pi}{3})
$$

通过三角函数和差公式可得
