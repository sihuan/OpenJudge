# 字符串类（I）
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description

封装一个字符串类，用于存储字符串和处理的相关功能，支持以下操作：

1. STR::STR()构造方法：创建一个空的字符串对象。
2. STR::STR(const char *)构造方法：创建一个字符串对象，串的内容由参数给出。
3. STR::length()方法：返回字符串的长度。
4. STR::putline()方法：输出串的内容，并换行。

-----------------------------------------------------------------------------

你设计一个字符串类STR，使得main()函数能够正确运行。

函数调用格式见append.cc。

append.cc中已给出main()函数。

-----------------------------------------------------------------------------

Invalid Word（禁用单词）错误：“string”、“vector”等被禁用。




## Input
输入有若干行，每行一个字符串。


## Output
每组测试数据对应输出一行，包含两部分内容，首先是一个整数，表示输入串的长度，然后是输入的字符串，两者用一个空格分开。格式见sample。


## Sample Input
```
A
123456789

```
## Sample Output
```
0 
12 Hello World!
1 A
9 123456789

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    STR e;
    STR h("Hello World!");
    char s[100001];
    cout << e.length() << " ";
    e.putline();
    cout << h.length() << " ";
    h.putline();
    while(gets(s) != NULL)
    {
        STR str(s);
        cout << str.length() << " ";
        str.putline();
    }
}

```
