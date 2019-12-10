# 编写函数：字符串的连接 之二 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
 将输入的两个字符串连接在一起输出。
-----------------------------------------------------------------------------
编写一个函数str_cat()求两个串的连接：
原型：char * str_cat(char * t, char * s, int n);
功能：把串s的前n个字符连接到串t之后，返回值是串t。如果串s的字符个数不足n个，则全部复制过去。
函数的调用格式见“Append Code”。
-----------------------------------------------------------------------------
Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。
被禁用的头文件：string.h、stdlib.h。
被禁用的库函数：strcat()、strncat()、memcat()、strcpy()、strncpy()、memcpy()等。

## Input
 输入为多组，每组包括三行。第一行为一个整数n，第二行为一个字符串s，第三行为字符串str。s、str的字符总数均不超过100个。

## Output
 把串s的前n个字符连接到串str之后，输出串str。
输出两遍，一遍是测试返回值，一遍是测试str。

## Sample Input
```
5
 Look!
I love china!

```
## Sample Output
```
I love china! Look
I love china! Look

```

## HINT
 str_cat()的返回值参考标准库函数strcpy()、strcat()、strchr()的设计思路：返回指向目标串的指针。

## Append Code
### append.c
```c

int main()
{
    int n;
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(scanf("%d", &n) != EOF && getchar())
    {
        gets(s);
        gets(str);
        p = str_cat(str, s, n);
        puts(p);
        puts(str);
    }
    return 0;
}

```
