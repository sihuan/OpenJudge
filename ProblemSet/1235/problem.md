# 编写函数：字符串的逆序串 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description

将输入的一个字符串s逆序输出。

-----------------------------------------------------------------------------
编写一个函数str_rev()求一个串的逆序串：
原型：char * str_rev(char * t, char * s);
功能：把串s逆序复制到串t中，返回值是逆序串t。
函数的调用格式见“Append Code”。



## Input
输入为一个串s。输入最少为一个字符，最多不会超过100个字符。


## Output
串s的逆序。
输出两遍，一遍是测试返回值，一遍是测试str。


## Sample Input
```
ABCDE
```
## Sample Output
```
EDCBA
EDCBA

```

## HINT
str_rev()的返回值参考标准库函数strcpy()、strstr()、strchr()的设计思路：返回指向目标串的指针。

## Append Code
### append.c
```c
int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    gets(s);
    p = str_rev(str, s);
    puts(p);
    puts(str);
    return 0;
}
```
