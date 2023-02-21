# 字符串的分隔 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
将输入的一个字符串s中按下标分隔为两个串，一个由奇数下标的字符（s[1],s[3],s[5]…）按顺序的组成，一个由偶数下标的字符（s[0],s[2],s[4]…）按顺序的组成。
 -----------------------------------------------------------------------------
 编写一个函数str_sep()：
 原型：void  str_sep(char s[],  char t[],  char r[]);
 功能：把串r中的字符按奇偶数分隔为s、t，偶数下标的放入s中，奇数下标的放入t中。
 函数的调用格式见“Append Code”。


## Input
输入为一个串s。输入最少为一个字符，最多不会超过100个字符。



## Output
输出为转换后的串。


## Sample Input
```
abcde1357

```
## Sample Output
```
ace37
bd15

```

## HINT


## Append Code
### append.c
```c
int main()
{
    char r[101], s[101], t[101];
    gets(r);
    str_sep(s, t, r);
    puts(s);
    puts(t);
    return 0;
}

```
