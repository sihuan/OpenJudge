# 字符串转日期(Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
         对于用字符串存储的日期，把它的年月日提取出来转换成结构体形式。
-----------------------------------------------------------------------------
         编写函数 to_date ()：
                   原型：根据“Append Code”进行设计。
                   功能：把字符串s中年月日信息提取出来，并用结构体变量返回。
         函数的调用格式见“Append Code”，完成结构体类型的定义。


## Input
         输入若干字符串，每个一行。每个字符串为一个合法的日期，其中前4位表示年份，中间两位表示月份，后2位表示日，位数不足会补0。


## Output
         按照年月日的顺序输出，两两用一个空格分开。


## Sample Input
```
20011101
20220909

```
## Sample Output
```
2001 11 1
2022 9 9

```

## HINT


## Append Code
### append.c
```c
int main()
{
    char str[10];
    struct date dt;
    while(gets(str) != NULL)
    {
        dt = to_date(str);
        printf("%d %d %d\n", dt.y, dt.m, dt.d);
    }
    return 0;
}

```
### append.cc
```cpp
int main()
{
    char str[10];
    struct date dt;
    while(gets(str) != NULL)
    {
        dt = to_date(str);
        printf("%d %d %d\n", dt.y, dt.m, dt.d);
    }
    return 0;
}

```
