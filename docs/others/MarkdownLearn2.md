---
comments: true
---

# Markdown扩展语法 {#testid}
[Markdown 官方教程](https://markdown.com.cn/ "Markdown 官方教程")
## 表格
| Syntax      | Description |
| ----------- | ----------- |
| Header      | Title       |
| Paragraph   | Text        |

## 围栏代码块
```
{
  "firstName": "John",
  "lastName": "Smith",
  "age": 25
}
```
### 语法高亮
```json
{
  "firstName": "John",
  "lastName": "Smith",
  "age": 25
}
```
```
{
  "firstName": "John",
  "lastName": "Smith",
  "age": 25
}
```
```c++
#include<iostream>
using namespace std;
int main()
{
  int a=123;
  return 0;
}
```

## 标题编号

### My Great Heading {#heading-ids}
[Heading IDs](#heading-ids)  
[Heading ID2s](#testid)  
空格将标题与大括号隔开

### 禁用自动网址链接
`http://www.example.com`
## tips
> - 无效代码已删除
> - 换行时不要直接enter换行，先输入两个空格再enter换行才能换行成功