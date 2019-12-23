# 编写函数：字符串的连接 之三 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
将输入的两个字符串连接在一起输出。
-----------------------------------------------------------------------------
编写一个函数str_cat()求两个串的连接：
原型：char * str_cat(char * str, char * s);
功能：动态分配一段内存空间，将串str和串s的连接存放进去形成一个新的串，并返回这段内存空间的首地址。
函数的调用格式见“Append Code”。
-----------------------------------------------------------------------------
Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。
被禁用的头文件：string.h。
被禁用的库函数：strcat()、strncat()、memcat()、strcpy()、strncpy()、memcpy()等。

## Input
输入为多组，每组包括两行。第一行为一个字符串s，第二行为字符串str。s、str的字符总数均不超过100个。

## Output
每组输出三个串，各占一行，依次为：串str、串s、串str和串s的连接。

## Sample Input
```
 Look!
I love china!
```
## Sample Output
```
I love china!
 Look!
I love china! Look!

```

## HINT
 “Append Code”中用到的头文件、全局变量或宏的定义应自行补充。

## Append Code
### append.c
```c
int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(gets(s) != NULL && gets(str) != NULL)
    {
        p = str_cat(str, s);
        puts(str);
        puts(s);
        puts(p);
        free(p);
    }
    return 0;
}
```
