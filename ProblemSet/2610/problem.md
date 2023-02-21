# 编写函数：四则运算二 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
两整数四则运算。
用C语言或C++编写函数实现，append.c中通过函数指针数组fp调用5个函数add()、sub()、mul()、div()、mod()的功能分别为加、减、乘、除、求余。请根据“Append Code”自行设计函数和数据结构，使程序编译正确。
函数的调用格式见“Append Code”。


## Input
输入为两个整数a、b。


## Output
输出五行，分别为a和b加减乘除、求余的式子和结果。具体格式见sample。


## Sample Input
```
2 2
```
## Sample Output
```
2 + 2 = 4
2 - 2 = 0
2 * 2 = 4
2 / 2 = 1
2 % 2 = 0

```

## HINT


## Append Code
### append.c
```c
int main()
{
    int a, b, i;
    scanf("%d %d", &a, &b);
    for(i = 0; i < 5; i++)
        printf("%d %c %d = %d\n", a, op[i], b, fp[i](a, b));
    return 0;
}

```
