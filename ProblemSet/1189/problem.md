# 编写函数：字符串的长度 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
输入一些字符串，输出它们的长度。
-----------------------------------------------------------------------------
编写函数str_len()：
原型：int str_len(char s[]);
功能：返回字符串s的长度，不包括串终结符'\0'。
函数的调用格式见“Append Code”。
-----------------------------------------------------------------------------
Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。
被禁用的头文件：string.h。
被禁用的库函数：strlen()等。


## Input
 输入为多行。每行为一个字符串s。s的字符总数不超过1000个。

## Output
 输出与输入对应，为每行字符串s的长度。

## Sample Input
```
I love China!
Do you want to pass this examination?
You will succeed finially!
Wish you succeed!

```
## Sample Output
```
13
37
26
17

```

## HINT
 “Append Code”中用到的头文件、全局变量或宏的定义应自行补充。

## Append Code
### append.c
```c
int main()
{
    int n;
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", str_len(s));
    return 0;
}

```
