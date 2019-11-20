# 编写函数：String to Integer (II) (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description

让我们来编写一个程序，按照指定的转换规则，把一个字符串里的整数提取出来。

-----------------------------------------------------------------------------
编写函数strToInt()：
原型：int strToInt(char str[]);
功能：按照指定的转换规则，把str[]中的串转换成整数，并返回。
函数的调用格式见“Append Code”。
-----------------------------------------------------------------------------
Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。
被禁用的库函数：sscanf()、atoi()、atof()、atol()、strtod()、strtold()、strtof()、strtol()、strtoul()等。


## Input
输入是多行，每行一个字符串s，至EOF结束。每个串s不超过10个字符，并且s转换后的整数不会超出int类型的表示范围。
s的转换规则是：从第一个字符开始的前若干个连续数字字符（"0"～"9"）和仅能出现在s首位的符号位（"+"和"-"）转换为一个十进制整数，直到第一个非数字字符为止。从第一个非数字字符开始（除了首位的"+"和'-'），都是非法字符。因此，如果一个串全部都是非法字符，那么它只能是0。

## Output
输出为多行，与输入对应。每行输出是串s转换后的一个整数。

## Sample Input
```
123c
0123dd

-45ed
e1321
+76abcdef
```
## Sample Output
```
123
123
0
-45
0
76
```

## HINT
“Append Code”中用到的头文件、全局变量或宏的定义应自行补充。

## Append Code
### append.c
```c
int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}
```
