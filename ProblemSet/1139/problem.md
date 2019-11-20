# 编写函数：比较字符串 之二 (Append Code)
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description

字符、整数和浮点数都可以按照数值来比较大小，字符串应该怎么比较呢？让我们来编写一个程序，可以比较两个字符串的大小。
-----------------------------------------------------------------------------
编写函数str_cmp()：
原型：int str_cmp(char s1[], char s2[]);
功能：按照指定的比较规则，比较字符串s1和s2的大小。若s1==s2，返回0；若s1<s2，返回值是负数；若s1>s2，返回值是正数。若返回值不为0，返回的数值始终是s1和s2中第一个不相同位置的字符ASCII码值之差。但是，应按照大小写不敏感的方式对字母进行比较，即"A"和"a"是相同的字符，"B"和"b"也是……直到"Z"和"z"也是。
函数的调用格式见“Append Code”。
-----------------------------------------------------------------------------
Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。
被禁用的头文件：string.h和ctype.h。



## Input
输入为多组字符串，每组有两个字符串s1和s2，分两行输入，长度不超过100个字符。


## Output
输出为多行，与每组输入对应输出为一个整数n。n为s1和s2的比较结果，若s1和s2每个位置上的字符都完全一样，输出0，否则输出s1和s2的第一个不相同的字符ASCII码值之差。


## Sample Input
```
abc
abc
abc
Abc
abc
abc
Bbc
abc
abcd
abc
 aDe
Ade
ade
 ade
```
## Sample Output
```
0
0
0
-31
100
-33
65
```

## HINT
“Append Code”中用到的头文件、全局变量或宏的定义应自行补充。

## Append Code
### append.c
```c
int main()
{
    char str1[MAX_STR_LEN], str2[MAX_STR_LEN];
    while( (gets(str1) != NULL) && (gets(str2) != NULL) )
        printf("%d\n", str_cmp(str1, str2));
    return 0;
}
```
