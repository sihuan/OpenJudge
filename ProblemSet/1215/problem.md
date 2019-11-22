# 编写函数：字符串的复制 之一 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
将输入的一个字符串s拷贝输出。
-----------------------------------------------------------------------------
编写一个函数str_cpy()求一个串的拷贝：
原型：char * str_cpy(char * t, char * s);
功能：把串s复制到串t中，返回值是串t。
函数的调用格式见“Append Code”。
-----------------------------------------------------------------------------
Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。
被禁用的头文件：string.h、stdlib.h。
被禁用的库函数：strcpy()、strncpy()、memcpy()等。


## Input

输入为多行。每行为一个字符串s。s的字符总数不超过100个。



## Output
串s的复制。
输出两遍，一遍是测试返回值，一遍是测试str。


## Sample Input
```
2 Look!
5 I love china!

```
## Sample Output
```
2 Look!
2 Look!
5 I love china!
5 I love china!

```

## HINT
 str_cpy()的返回值参考标准库函数strcpy()、strstr()、strchr()的设计思路：返回指向目标串的指针。

## Append Code
### append.c
```c
int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(gets(s) != NULL)
    {
        p = str_cpy(str, s);
        puts(p);
        puts(str);
    }
    return 0;
}
```
