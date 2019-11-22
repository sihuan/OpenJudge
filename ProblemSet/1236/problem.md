# A+B Problem (VIII) : Pointer Practice (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description

计算a+b，0<=a,b<1000。

-----------------------------------------------------------------------------
编写一个函数get_int_sum()输入a,b的值，并计算a+b。
用C语言实现，函数原型为
int get_int_sum(int *, int *);
功能：函数的参数传入a和b的地址，用来存储输入两数的值，返回值是两数之和。
用C++实现，函数原型为
int get_int_sum(int &, int &);
功能：函数的参数传入a和b的引用，用来存储输入两数的值，返回值是两数之和。
get_int_sum()的调用格式见“Append Code”。



## Input
输入的第一行是一个整数N，后面有N对整数a和b，每对a和b占一行，a,b用空格分开。


## Output
每行输出一个a+b的和，顺序与输入对应。
格式为“sum = a + b”，具体参见输出样例。


## Sample Input
```
2
1 2
10 20
```
## Sample Output
```
3 = 1 + 2
30 = 10 + 20

```

## HINT
 参看系统首页上的“Append Code”使用说明，讨论版（Web Board）上也有。

## Append Code
### append.c
```cint main()
{
    int n, a, b, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("%d = ", get_int_sum(&a, &b));
        printf("%d + %d\n", a, b);

    }
    return 0;
}
```
### append.cc
```cpp
int main()
{
    int n, a, b, i;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cout << get_int_sum(a, b) << " = ";
        cout << a << " + " << b << endl;
    }
    return 0;
}
```
