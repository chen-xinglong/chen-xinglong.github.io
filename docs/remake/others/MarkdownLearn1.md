---
comments: true
---

# Markdown基本语法
[Markdown 官方教程](https://markdown.com.cn/ "Markdown 官方教程")
## 标题语法
```
# 一级标题
## 二级标题
### 三级标题

一级标题
=====
二级标题
-------
```

## 段落语法
舰长，我真的超喜欢你送我的这身衣服呢！

德莉莎是不是变得越来越可爱了呢？！喵~~~！

## 换行语法（结尾空格）
舰长，我真的超喜欢你  
送我的这身衣服呢！

## 强调语法
### 粗体
你呀**我呀**她呀。
### 斜体
你呀*我呀*她呀。
### 粗体+斜体
你呀***我呀***她呀。

## 引用
> hello world
### 嵌套引用
> hello world
>> hello world
### 带有其他元素的块引用
> #### The quarterly results look great!
>
> - Revenue was off the chart.
> - Profits were higher than ever.
>
>  *Everything* is going according to **plan**.

## 列表语法
### 有序列表
1. 123
2. 32
3. 32
    1. 123
    2. 33
    3. 2
4. 123
5. 22

### 无序列表
- 123
- 123
- 321

### 列表中嵌套其他元素
#### 段落
-   This is the first list item.
-   Here's the second list item.

    I need to add another paragraph below the second list item.

-   And here's the third list item.

#### 引用块
-   This is the first list item.
-   Here's the second list item.

    > A blockquote would look great below the second list item.

-   And here's the third list item.
  
#### 代码块
1.  Open the file.
2.  Find the following code block on line 21:

        <html>
          <head>
            <title>Test</title>
          </head>

3.  Update the title to match the name of your website.


#### 图片
1.  Open the file containing the Linux mascot.
2.  Marvel at its beauty.

    ![Elysia](../images/Elysia.png)

3.  Close the file.

## 代码语法
At the command prompt, type `nano`.
### 转义反引号
``Use `code` in your Markdown file.``
### 代码块
    <html>
      <head>
      </head>
    </html>

## 分隔线
123123123

---

32123123

## 链接语法
这是我的网站 [chen-xinglong.github.io](https://chen-xinglong.github.io/)。
### 给链接增加悬停文字
这是我的网站 [chen-xinglong.github.io](https://chen-xinglong.github.io/ "内容最棒的个人网站")。
### 网址和Email地址
<https://chen-xinglong.github.io/>

<1048257273@qq.com>
### 带格式的链接
I love supporting the **[EFF](https://eff.org)**.
This is the *[Markdown Guide](https://www.markdownguide.org)*.
See the section on [`code`](#code).
### 引用类型链接
链接1[链接1][1]
### 用%20替代链接接中的空格
[link](https://www.example.com/my%20great%20page)

## 图片语法
![爱莉希雅](../docs/../images/Elysia.png "爱门")
### 给图片增加链接
[![爱莉希雅](../docs/../images/Elysia.png "爱门")](https://chen-xinglong.github.io/)


[1]: https://en.wikipedia.org/wiki/Hobbit#Lifestyle 'Lifestyle'

## 转义字符
*123*  
\*123\*
### 特殊字符转义
4 < 5  
4 &lt; 5  
1 & 2  
1 &amp; 2
> tips
> 网址&转换
>>http://images.google.com/images?num=30&q=larry+bird
>>http://images.google.com/images?num=30&amp;q=larry+bird

```
## 内嵌html标签
[内嵌html标签官方教程](https://markdown.com.cn/basic-syntax/htmls.html "内嵌html标签")
```

## tips
> - 无效代码已删除
> - 换行时不要直接enter换行，先输入两个空格再enter换行才能换行成功
