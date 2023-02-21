# 简单计算二(Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
         给定三个整数a、b、c，计算表达式a / (b + c)的值；其中“/”是浮点运算。
-----------------------------------------------------------------------------
         编写函数 f()：
                   原型：void f(int a, int b, int c);
                   功能：根据题意完成计算和输出。
         函数的调用格式见“Append Code”。


## Input
         输入为一行，包括三个数值较小整数a、b、c，且b + c不为零。


## Output
         输出一行，即表达式的计算结果，要求精确到小数点后3位。


## Sample Input
```
1 1 3
```
## Sample Output
```
0.250
```

## HINT


## Append Code
### append.c
```c
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    f(a, b, c);
    return 0;
}

```
### append.cc
```cpp
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    f(a, b, c);
    return 0;
}

```
