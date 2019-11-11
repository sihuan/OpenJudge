# 编写函数：四则运算 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB

## Description
两整数四则运算。

用C语言或C++编写函数实现，append.c中调用了4个函数add()、sub()、mul()、div()的功能分别为加、减、乘、除。请根据“Append Code”自行设计函数，使程序编译正确。

函数的调用格式见“Append Code”。

## Input
输入为两个整数a、b。

## Output
输出四行，分别为a和b加减乘除的式子和结果。具体格式见sample。

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
```

## Append Code
### append.c
```c
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, sub(a, b));
    printf("%d * %d = %d\n", a, b, mul(a, b));
    printf("%d / %d = %lg\n", a, b, div(a, b));
    return 0;
}
```
### append.cc
```
int main()
{
    int a, b;
    cin >> a >> b;
    add(a, b);
    sub(a, b);
    mul(a, b);
    div(a, b);
    return 0;
}
```