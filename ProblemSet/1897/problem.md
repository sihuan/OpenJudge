# 编写函数：递归的字符串回文 (Append Code)
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
         输入一个字符串s，判断是否为回文。回文是指顺序和逆序完全一样的串。
 
         编写函数palindrome()完成程序：
                   原型：int palindrome (char s[], int begin, int end);
                   功能：用递归的方法判断串s在下标begin到end之间的部分是否为回文，是返回1，否则返回0。

         函数的调用格式见“Append Code”。


         Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。
         被禁用的关键字：循环语句for、while，甚至包括分支语句的switch、case、goto。
         被禁用的头文件：string.h。



## Input

         输入为一个整数len和串s，串s的长度为len，len<=100。



## Output
         串s为回文输出Yes，否则输出No。


## Sample Input
```
5 abcba
```
## Sample Output
```
Yes
```

## HINT


## Append Code
### append.c
```c
int main()
{
    int len;
    char s[MAX_STR_LEN];
    scanf("%d %s", &len, s);
    if(palindrome(s, 0, len - 1))
        puts("Yes");
    else
        puts("No");
    return 0;
}
```
