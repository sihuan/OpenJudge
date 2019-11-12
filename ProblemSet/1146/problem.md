# 编写函数：计算分段函数 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
设有函数y=f(x)定义为：

给定x的值，编程求出y的值并输出。
-----------------------------------------------------------------------------
编写函数func()和output()，其原型为：
double func(double x);
功能：计算f(x)并返回。
int output(int n, double x)
功能：按照题意的格式输出。
函数的调用格式见“Append Code”。





## Input
输入的第一个是测试样例数N，后跟N个输入为x的值。


## Output
输出为N行，每行顺序与输入对应的y=f(x)的计算结果，即y的值。输出时y值保留6位有效数字，且不输出无意义的0。
每行的格式为：
case i:y=?.
其中i表示测试用例编号（从1开始），？表示计算结果。


## Sample Input
```
4
-3
0.5
2.1
10.08
```
## Sample Output
```
case 1:y=3.
case 2:y=0.841471.
case 3:y=3.37061.
case 4:y=30.16.
```

## HINT
 参看系统首页上的“Append Code”使用说明，讨论版（Web Board）上也有。

## Append Code
### append.c
```c
int main()
{
    int i, cases;
    double x;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        scanf("%lf", &x);
        output(i, func(x));
    }
    return 0;
}
```
### append.cc
```cpp
int main()
{
    int cases;
    double x;
    cin >> cases;
    for(int i = 1; i <= cases; i++)
    {
        cin >> x;
        output(i, func(x));
    }
    return 0;
}

```
