# 编写函数：递归求逆序 (Append Code)
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description

将输入的一个字符串s逆序输出。

-----------------------------------------------------------------------------
编写函数recursive()完成程序：
原型：int recursive();
功能：用递归的方法读取输入，并且逆序输出。
函数的调用格式见“Append Code”。
-----------------------------------------------------------------------------
Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。
被禁用的关键字：循环语句for、while，甚至包括分支语句的switch、case、goto。
被禁用的头文件：string.h、stdlib.h。
被禁用的库函数：scanf、printf、gets、puts、malloc、calloc、strcpy、memcpy等。
被禁用的字符：  “%”、“*”、“[”和“]”。
你几乎不能使用大多数的控制语句和输入输出函数，甚至数组和指针都被禁用了。



## Input
输入为一个串s，最少有一个字符。输入以EOF结尾，EOF不是串的内容。


## Output
输出为串s的逆序。


## Sample Input
```
abcde
```
## Sample Output
```
edcba
```

## HINT


## Append Code
### append.c
```c
int main()
{
    recursive();
    return 0;
}

```
