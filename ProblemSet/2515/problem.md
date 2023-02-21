# 简单计算一（Append code）
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
         给定三个整数a、b、c，计算表达式(a + b) / c的值；“/”是整除运算。
         用C语言或C++编写函数实现，append.c中调用了一个函数f()来实现功能。请根据“Append Code”自行设计函数，使程序编译正确。
         函数的调用格式见“Append Code”。


## Input
         输入为一行，包括三个整数a、b、c，两数之间用一个空格分开，满足-10000 < a, b, c  < 10000且c不等于0。


## Output
         输出一行，即表达式的值。


## Sample Input
```
1 1 3
```
## Sample Output
```
0

```

## HINT


## Append Code
### append.c
```c
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", f(a, b, c));
    return 0;
}

```
### append.cc
```cpp
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", f(a, b, c));
    return 0;
}

```
